
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "merged_BBQAddOn_Alpha_BBQGame_BBQAddOn_Mercury.h"
#include "BBQUI.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UWBP_MuseumModeMainMenu_C;

/// Class /Game/MuseumMode/UI/Menu/WBP_MuseumModeMainMenu.WBP_MuseumModeMainMenu_C
/// Size: 0x0440 (1088 bytes) (0x000418 - 0x000440) align 8 MaxSize: 0x0440
class UWBP_MuseumModeMainMenu_C : public UBBQUI_MuseumMainMenu
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0418   (0x0008)  
	class UBBQUI_Image*                                BackgroundImage;                                            // 0x0420   (0x0008)  
	class UWBP_AspectRatioLock_C*                      WBP_AspectRatioLock;                                        // 0x0428   (0x0008)  
	class UWBP_BottomPromptBarV2_C*                    WBP_BottomPromptBarV2;                                      // 0x0430   (0x0008)  
	class ABP_MenuScreenStack_C*                       MenuScreenStack;                                            // 0x0438   (0x0008)  


	/// Functions
	// Function /Game/MuseumMode/UI/Menu/WBP_MuseumModeMainMenu.WBP_MuseumModeMainMenu_C.BP_OnShow
	void BP_OnShow() // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Game/MuseumMode/UI/Menu/WBP_MuseumModeMainMenu.WBP_MuseumModeMainMenu_C.BP_OnHide
	void BP_OnHide() // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Game/MuseumMode/UI/Menu/WBP_MuseumModeMainMenu.WBP_MuseumModeMainMenu_C.ExecuteUbergraph_WBP_MuseumModeMainMenu
	void ExecuteUbergraph_WBP_MuseumModeMainMenu(int32_t EntryPoint) // [0x2438a30] Final                
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(EntryPoint);
	}
};

#pragma pack(pop)


static_assert(sizeof(UWBP_MuseumModeMainMenu_C) == 0x0440); // 1088 bytes (0x000418 - 0x000440)
static_assert(offsetof(UWBP_MuseumModeMainMenu_C, UberGraphFrame) == 0x0418);
static_assert(offsetof(UWBP_MuseumModeMainMenu_C, BackgroundImage) == 0x0420);
static_assert(offsetof(UWBP_MuseumModeMainMenu_C, WBP_AspectRatioLock) == 0x0428);
static_assert(offsetof(UWBP_MuseumModeMainMenu_C, WBP_BottomPromptBarV2) == 0x0430);
static_assert(offsetof(UWBP_MuseumModeMainMenu_C, MenuScreenStack) == 0x0438);
