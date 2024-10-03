#include "includes.h"

uintptr_t GetModuleBaseAddress(DWORD dwProcID, const char* szModuleName)
{
    uintptr_t ModuleBaseAddress = 0;
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, dwProcID);
    if (hSnapshot != INVALID_HANDLE_VALUE)
    {
        MODULEENTRY32 ModuleEntry32;
        ModuleEntry32.dwSize = sizeof(MODULEENTRY32);
        if (Module32First(hSnapshot, &ModuleEntry32))
        {
            do
            {
                if (strcmp(ModuleEntry32.szModule, szModuleName) == 0)
                {
                    ModuleBaseAddress = (uintptr_t)ModuleEntry32.modBaseAddr;
                    break;
                }
            } while (Module32Next(hSnapshot, &ModuleEntry32));
        }
        CloseHandle(hSnapshot);
    }
    return ModuleBaseAddress;
}

DWORD WINAPI MainThread(HMODULE hModule)
{
    //module variables
    auto procId = GetProcessId(hModule);

    auto procAddress = GetModuleBaseAddress(procId, "BBQClient-Win64-Shipping.exe");

    auto module = GetModuleHandleA(0);
    uintptr_t* game_address = (uintptr_t*)procAddress;

    //open console
    AllocConsole();
    FILE* dummy;
    freopen_s(&dummy, "CONOUT$", "w", stdout); 
    freopen_s(&dummy, "CONIN$", "r", stdin);

    //game name
    char gamepath[512];
    GetModuleFileNameA(NULL, gamepath, ARRAYSIZE(gamepath));
    std::string gamepath_str = gamepath;
    std::string gamename = gamepath_str.substr(gamepath_str.find_last_of("/\\") + 1);

    //print game name
    std::cout << "game name: " << gamename << std::endl;
    std::cout << "game address: " << game_address << std::endl;

    auto worldptr = reinterpret_cast<UWorld*>(game_address + 0x6D2F600);

    auto value = worldptr->GameState;

    uintptr_t* wrld = (uintptr_t*)value;

    std::cout << wrld << std::endl;

    //auto name = worldptr->GameState->GetServerWorldTimeSeconds();

    //std::cout << name << std::endl;

    while (true)
    {

        //unhook dll
        if(GetAsyncKeyState(VK_F6) & 1)
        {
            fclose(stdout);
            if(dummy) fclose(dummy);
            FreeConsole();
            FreeLibraryAndExitThread(hModule, 0);
        }
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
        break;
    }
    return TRUE;
}

