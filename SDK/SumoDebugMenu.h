
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "InputCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UDebugMenuPageWidget;
class USumoDebugMenuLocalPlayerSubsystem;
class USumoDebugMenuSettings;

/// Struct /Script/SumoDebugMenu.DebugMenuKeyCombination
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FDebugMenuKeyCombination
{ 
	TArray<FKey>                                       Keys;                                                       // 0x0000   (0x0010)  
};

/// Class /Script/SumoDebugMenu.DebugMenuPageWidget
/// Size: 0x02A0 (672 bytes) (0x000260 - 0x0002A0) align 8 MaxSize: 0x02A0
class UDebugMenuPageWidget : public UUserWidget
{ 
public:
	FText                                              DisplayName;                                                // 0x0260   (0x0018)  
	FText                                              Description;                                                // 0x0278   (0x0018)  
	FName                                              Category;                                                   // 0x0290   (0x0008)  
	class APlayerController*                           PlayerControllerPrivate;                                    // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/SumoDebugMenu.DebugMenuPageWidget.UpdateConfigFile
	void UpdateConfigFile() // [0x43f6a50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/SumoDebugMenu.DebugMenuPageWidget.OnPageUnregistered
	void OnPageUnregistered(APlayerController* PlayerController) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(PlayerController);
	}
	// Function /Script/SumoDebugMenu.DebugMenuPageWidget.OnPageRegistered
	void OnPageRegistered(APlayerController* PlayerController) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(PlayerController);
	}
	// Function /Script/SumoDebugMenu.DebugMenuPageWidget.OnPageOpened
	void OnPageOpened(APlayerController* PlayerController) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(PlayerController);
	}
	// Function /Script/SumoDebugMenu.DebugMenuPageWidget.OnPageClosed
	void OnPageClosed(APlayerController* PlayerController) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(PlayerController);
	}
	// Function /Script/SumoDebugMenu.DebugMenuPageWidget.GetPlayerController
	APlayerController* GetPlayerController() // [0x43f6a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class APlayerController* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
};

/// Class /Script/SumoDebugMenu.SumoDebugMenuLocalPlayerSubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USumoDebugMenuLocalPlayerSubsystem : public ULocalPlayerSubsystem
{ 
public:
};

/// Class /Script/SumoDebugMenu.SumoDebugMenuSettings
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class USumoDebugMenuSettings : public UDeveloperSettings
{ 
public:
	TArray<FDebugMenuKeyCombination>                   OpenDebugMenuKeyCombinations;                               // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,632) /* TArray<TSoftObjectPtr<UClass*>> */ __um(BlueprintWidgetPages);                        // 0x0048   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UDebugMenuPageWidget) == 0x02A0); // 672 bytes (0x000260 - 0x0002A0)
static_assert(sizeof(USumoDebugMenuLocalPlayerSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FDebugMenuKeyCombination) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USumoDebugMenuSettings) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(offsetof(UDebugMenuPageWidget, DisplayName) == 0x0260);
static_assert(offsetof(UDebugMenuPageWidget, Description) == 0x0278);
static_assert(offsetof(UDebugMenuPageWidget, Category) == 0x0290);
static_assert(offsetof(UDebugMenuPageWidget, PlayerControllerPrivate) == 0x0298);
static_assert(offsetof(FDebugMenuKeyCombination, Keys) == 0x0000);
static_assert(offsetof(USumoDebugMenuSettings, OpenDebugMenuKeyCombinations) == 0x0038);
