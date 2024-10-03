
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "GameplayTags.h"

#pragma pack(push, 0x1)

class UBBQDebugLauncherSettings;
class UBBQDebugLauncherUserSettings;

/// Enum /Script/BBQDebugLauncher.EBBQDebugLauncherInventoryAction
/// Size: 0x04 (4 bytes)
enum class EBBQDebugLauncherInventoryAction : uint32_t
{
	EBBQDebugLauncherInventoryAction__AddItems                                       = 0,
	EBBQDebugLauncherInventoryAction__AddItemsAndSlots                               = 1,
	EBBQDebugLauncherInventoryAction__OverrideInventory                              = 2
};

/// Struct /Script/BBQDebugLauncher.BBQDebugLauncherPlayerSetup
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FBBQDebugLauncherPlayerSetup
{ 
	FString                                            CharacterName;                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,633) /* TSet<FSoftClassPath> */   __um(Perks);                                                // 0x0010   (0x0050)  
	FSoftClassPath                                     FamilyMottoPerk;                                            // 0x0060   (0x0018)  
	EBBQDebugLauncherInventoryAction                   InventoryAction;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FGameplayTag>                               Inventory;                                                  // 0x0080   (0x0010)  
};

/// Struct /Script/BBQDebugLauncher.BBQDebugLauncherCustomMatchSetting
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBBQDebugLauncherCustomMatchSetting
{ 
	FString                                            CustomKey;                                                  // 0x0000   (0x0010)  
	int32_t                                            CustomPayload;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/BBQDebugLauncher.BBQDebugLauncherPreset
/// Size: 0x04C0 (1216 bytes) (0x000000 - 0x0004C0) align 8 MaxSize: 0x04C0
struct FBBQDebugLauncherPreset
{ 
	FSoftClassPath                                     GameModeOverride;                                           // 0x0000   (0x0018)  
	FSoftObjectPath                                    MapOverride;                                                // 0x0018   (0x0018)  
	FBBQDebugLauncherPlayerSetup                       Victims[4];                                                 // 0x0030   (0x0240)  
	FBBQDebugLauncherPlayerSetup                       FamilyMembers[4];                                           // 0x0270   (0x0240)  
	TArray<FBBQDebugLauncherCustomMatchSetting>        CustomMatchSettings;                                        // 0x04B0   (0x0010)  
};

/// Class /Script/BBQDebugLauncher.BBQDebugLauncherSettings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UBBQDebugLauncherSettings : public UObject
{ 
public:
	TMap<FString, FBBQDebugLauncherPreset>             Presets;                                                    // 0x0028   (0x0050)  
};

/// Class /Script/BBQDebugLauncher.BBQDebugLauncherUserSettings
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UBBQDebugLauncherUserSettings : public UObject
{ 
public:
	TMap<FString, FBBQDebugLauncherPreset>             UserPresets;                                                // 0x0028   (0x0050)  
	FString                                            LastUsedPreset;                                             // 0x0078   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FBBQDebugLauncherPlayerSetup) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FBBQDebugLauncherCustomMatchSetting) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBBQDebugLauncherPreset) == 0x04C0); // 1216 bytes (0x000000 - 0x0004C0)
static_assert(sizeof(UBBQDebugLauncherSettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UBBQDebugLauncherUserSettings) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(offsetof(FBBQDebugLauncherPlayerSetup, CharacterName) == 0x0000);
static_assert(offsetof(FBBQDebugLauncherPlayerSetup, FamilyMottoPerk) == 0x0060);
static_assert(offsetof(FBBQDebugLauncherPlayerSetup, InventoryAction) == 0x0078);
static_assert(offsetof(FBBQDebugLauncherPlayerSetup, Inventory) == 0x0080);
static_assert(offsetof(FBBQDebugLauncherCustomMatchSetting, CustomKey) == 0x0000);
static_assert(offsetof(FBBQDebugLauncherPreset, GameModeOverride) == 0x0000);
static_assert(offsetof(FBBQDebugLauncherPreset, MapOverride) == 0x0018);
static_assert(offsetof(FBBQDebugLauncherPreset, Victims) == 0x0030);
static_assert(offsetof(FBBQDebugLauncherPreset, FamilyMembers) == 0x0270);
static_assert(offsetof(FBBQDebugLauncherPreset, CustomMatchSettings) == 0x04B0);
static_assert(offsetof(UBBQDebugLauncherSettings, Presets) == 0x0028);
static_assert(offsetof(UBBQDebugLauncherUserSettings, UserPresets) == 0x0028);
static_assert(offsetof(UBBQDebugLauncherUserSettings, LastUsedPreset) == 0x0078);
