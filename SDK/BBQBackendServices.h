
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "OnlineSubsystemBBQ.h"

#pragma pack(push, 0x1)

class UBBQAchievements;
class UBBQEventTrackerSubsystem;
class UBBQMetaGameService;
class UBBQPlayerAvatarCache;
class UBBQSKUConfigManager;
class UBBQSocialService;
class UBBQTelemetryEventsFunctionLibrary;
class UBBQTitleUpsellData;

/// Enum /Script/BBQBackendServices.EMMMatchPlayerRank
/// Size: 0x01 (1 bytes)
enum class EMMMatchPlayerRank : uint8_t
{
	EMMMatchPlayerRank__BEGINNER                                                     = 0,
	EMMMatchPlayerRank__INTERMEDIATE                                                 = 1,
	EMMMatchPlayerRank__EXPERT                                                       = 2
};

/// Enum /Script/BBQBackendServices.EMMQueueTypes
/// Size: 0x01 (1 bytes)
enum class EMMQueueTypes : uint8_t
{
	EMMQueueTypes__DEFAULT                                                           = 0,
	EMMQueueTypes__MERCURY                                                           = 1,
	EMMQueueTypes__TEST                                                              = 2
};

/// Enum /Script/BBQBackendServices.EMMTeamID
/// Size: 0x01 (1 bytes)
enum class EMMTeamID : uint8_t
{
	EMMTeamID__NONE                                                                  = 0,
	EMMTeamID__VICTIM                                                                = 1,
	EMMTeamID__FAMILY                                                                = 2,
	EMMTeamID__QUICK                                                                 = 3
};

/// Enum /Script/BBQBackendServices.EMMGameMode
/// Size: 0x01 (1 bytes)
enum class EMMGameMode : uint8_t
{
	EMMGameMode__STANDARD                                                            = 0,
	EMMGameMode__SERIAL                                                              = 1,
	EMMGameMode__MUSEUM                                                              = 2
};

/// Enum /Script/BBQBackendServices.EMMStartMethod
/// Size: 0x01 (1 bytes)
enum class EMMStartMethod : uint8_t
{
	EMMStartMethod__None                                                             = 0,
	EMMStartMethod__Party                                                            = 1,
	EMMStartMethod__Menu                                                             = 2,
	EMMStartMethod__Exec                                                             = 3,
	EMMStartMethod__NextMatch                                                        = 4,
	EMMStartMethod__Cancelled                                                        = 5
};

/// Enum /Script/BBQBackendServices.EBBQMetaGameDataStatus
/// Size: 0x01 (1 bytes)
enum class EBBQMetaGameDataStatus : uint8_t
{
	EBBQMetaGameDataStatus__NotInitialized                                           = 0,
	EBBQMetaGameDataStatus__Initialized                                              = 1,
	EBBQMetaGameDataStatus__Updating                                                 = 2,
	EBBQMetaGameDataStatus__Error                                                    = 3
};

/// Enum /Script/BBQBackendServices.EBBQTelemetryEventsVariantDataType
/// Size: 0x04 (4 bytes)
enum class EBBQTelemetryEventsVariantDataType : uint32_t
{
	EBBQTelemetryEventsVariantDataType__None                                         = 0,
	EBBQTelemetryEventsVariantDataType__Boolean                                      = 1,
	EBBQTelemetryEventsVariantDataType__Integer                                      = 2,
	EBBQTelemetryEventsVariantDataType__Float                                        = 3,
	EBBQTelemetryEventsVariantDataType__String                                       = 4,
	EBBQTelemetryEventsVariantDataType__Vector                                       = 5
};

/// Enum /Script/BBQBackendServices.EBBQChatGroup
/// Size: 0x01 (1 bytes)
enum class EBBQChatGroup : uint8_t
{
	EBBQChatGroup__None                                                              = 0,
	EBBQChatGroup__Party                                                             = 1,
	EBBQChatGroup__SessionAll                                                        = 2,
	EBBQChatGroup__SessionTeam                                                       = 3,
	EBBQChatGroup__Count                                                             = 4
};

/// Struct /Script/BBQBackendServices.BBQRegionLatencyPreference
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBBQRegionLatencyPreference
{ 
	FString                                            Region;                                                     // 0x0000   (0x0010)  
	float                                              Latency;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/BBQBackendServices.BBQMatchBackfillPreferences
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FBBQMatchBackfillPreferences
{ 
	EMMTeamID                                          TeamId;                                                     // 0x0000   (0x0001)  
	EMMQueueTypes                                      QueueType;                                                  // 0x0001   (0x0001)  
	EMMMatchPlayerRank                                 Rank;                                                       // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	int32_t                                            level;                                                      // 0x0004   (0x0004)  
	FString                                            Region;                                                     // 0x0008   (0x0010)  
	FString                                            COMPATIBILITY;                                              // 0x0018   (0x0010)  
	FString                                            CDNPatch;                                                   // 0x0028   (0x0010)  
	FString                                            PLATFORM;                                                   // 0x0038   (0x0010)  
	int32_t                                            NetworkVersion;                                             // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FSessionIdBBQ                                      SessionId;                                                  // 0x0050   (0x0030)  
	FString                                            GAMEMODE;                                                   // 0x0080   (0x0010)  
	TArray<FBBQRegionLatencyPreference>                RegionLatencies;                                            // 0x0090   (0x0010)  
	FString                                            ServiceRegion;                                              // 0x00A0   (0x0010)  
};

/// Struct /Script/BBQBackendServices.BBQUnlockTreeSlotId
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FBBQUnlockTreeSlotId
{ 
	char                                               Column;                                                     // 0x0000   (0x0001)  
	char                                               Row;                                                        // 0x0001   (0x0001)  
};

/// Struct /Script/BBQBackendServices.BBQMetaGameInventoryData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FBBQMetaGameInventoryData
{ 
	FName                                              ItemId;                                                     // 0x0000   (0x0008)  
	FName                                              ItemClass;                                                  // 0x0008   (0x0008)  
	FString                                            ItemInstanceId;                                             // 0x0010   (0x0010)  
	int32_t                                            CurrentXP;                                                  // 0x0020   (0x0004)  
	FBBQUnlockTreeSlotId                               SlotId;                                                     // 0x0024   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0026   (0x0002)  MISSED
	int32_t                                            cost;                                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/BBQBackendServices.BBQMetaGamePlayerData
/// Size: 0x0118 (280 bytes) (0x000000 - 0x000118) align 8 MaxSize: 0x0118
struct FBBQMetaGamePlayerData
{ 
	int32_t                                            ExperiencePoints;                                           // 0x0000   (0x0004)  
	int32_t                                            DevelopmentPoints;                                          // 0x0004   (0x0004)  
	int32_t                                            ExperienceLevel;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FBBQMetaGameInventoryData>                  Inventory;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_7[0xF8];                                      // 0x0020   (0x00F8)  MISSED
};

/// Struct /Script/BBQBackendServices.LobbyPlayerMetaData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FLobbyPlayerMetaData
{ 
	int32_t                                            ExperiencePoints;                                           // 0x0000   (0x0004)  
	int32_t                                            DevelopmentPoints;                                          // 0x0004   (0x0004)  
	int32_t                                            level;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/BBQBackendServices.BBQMetaGamePerkSerializedData
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FBBQMetaGamePerkSerializedData : FTableRowBase
{ 
	int32_t                                            XpLevel1;                                                   // 0x0008   (0x0004)  
	int32_t                                            XpLevel2;                                                   // 0x000C   (0x0004)  
	int32_t                                            XpLevel3;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/BBQBackendServices.BBQMetaGamePerkBaseData
/// Size: 0x0030 (48 bytes) (0x000018 - 0x000030) align 8 MaxSize: 0x0030
struct FBBQMetaGamePerkBaseData : FBBQMetaGamePerkSerializedData
{ 
	FString                                            PerkId;                                                     // 0x0018   (0x0010)  
	int32_t                                            cost;                                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/BBQBackendServices.BBQEventTimestamps
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FBBQEventTimestamps
{ 
	TMap<FString, int64_t>                             EventTimestamps;                                            // 0x0000   (0x0050)  
};

/// Struct /Script/BBQBackendServices.LobbyPlayerPlayfabData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FLobbyPlayerPlayfabData
{ 
	FString                                            Character;                                                  // 0x0000   (0x0010)  
	TArray<FString>                                    Perks;                                                      // 0x0010   (0x0010)  
	FString                                            StarSignPerk;                                               // 0x0020   (0x0010)  
	FString                                            MottoPerk;                                                  // 0x0030   (0x0010)  
	FLobbyPlayerMetaData                               MetaData;                                                   // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/BBQBackendServices.BBQLobbyPlayerMeta
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FBBQLobbyPlayerMeta
{ 
	int32_t                                            ExperiencePoints;                                           // 0x0000   (0x0004)  
	int32_t                                            DevelopmentPoints;                                          // 0x0004   (0x0004)  
	int32_t                                            level;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/BBQBackendServices.BBQMetaGameLevelData
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FBBQMetaGameLevelData : FTableRowBase
{ 
	int32_t                                            cost;                                                       // 0x0008   (0x0004)  
	int32_t                                            DevelopmentPointsBonus;                                     // 0x000C   (0x0004)  
	int32_t                                            TotalXpRequired;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/BBQBackendServices.BBQMetaGameSetupData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FBBQMetaGameSetupData
{ 
	TArray<FBBQMetaGameLevelData>                      ExperienceLevels;                                           // 0x0000   (0x0010)  
	TMap<FName, FBBQMetaGamePerkBaseData>              Perks;                                                      // 0x0010   (0x0050)  
	TArray<FName>                                      InitialPerkItems;                                           // 0x0060   (0x0010)  
};

/// Struct /Script/BBQBackendServices.BBQMetaGamePerksProgression
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FBBQMetaGamePerksProgression
{ 
	TMap<FName, int32_t>                               ExperiencePoints;                                           // 0x0000   (0x0050)  
};

/// Struct /Script/BBQBackendServices.BBQUnlockTreeSlotData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FBBQUnlockTreeSlotData
{ 
	FString                                            Req;                                                        // 0x0000   (0x0010)  
	FString                                            Exc;                                                        // 0x0010   (0x0010)  
	FString                                            Itm;                                                        // 0x0020   (0x0010)  
	int32_t                                            cost;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/BBQBackendServices.BBQUnlockTreeData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FBBQUnlockTreeData
{ 
	TMap<FString, FBBQUnlockTreeSlotData>              Slots;                                                      // 0x0000   (0x0050)  
};

/// Struct /Script/BBQBackendServices.BlockedPlayers
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBlockedPlayers
{ 
	TArray<FString>                                    BlockedPlayersCache;                                        // 0x0000   (0x0010)  
};

/// Struct /Script/BBQBackendServices.BBQTelemetryEventsVariantData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FBBQTelemetryEventsVariantData
{ 
	FString                                            KeyName;                                                    // 0x0000   (0x0010)  
	EBBQTelemetryEventsVariantDataType                 DataType;                                                   // 0x0010   (0x0004)  
	bool                                               AsBool;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            AsInt;                                                      // 0x0018   (0x0004)  
	float                                              AsFloat;                                                    // 0x001C   (0x0004)  
	FString                                            AsString;                                                   // 0x0020   (0x0010)  
	FVector                                            AsVector;                                                   // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/BBQBackendServices.BBQTelemetryEventsParams
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQTelemetryEventsParams
{ 
	TArray<FBBQTelemetryEventsVariantData>             Args;                                                       // 0x0000   (0x0010)  
};

/// Class /Script/BBQBackendServices.BBQAchievements
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UBBQAchievements : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Class /Script/BBQBackendServices.BBQEventTrackerSubsystem
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UBBQEventTrackerSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0030   (0x0078)  MISSED
};

/// Class /Script/BBQBackendServices.BBQMetaGameService
/// Size: 0x01D0 (464 bytes) (0x000028 - 0x0001D0) align 8 MaxSize: 0x01D0
class UBBQMetaGameService : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1A8];                                     // 0x0028   (0x01A8)  MISSED


	/// Functions
	// Function /Script/BBQBackendServices.BBQMetaGameService.UnlockTreeItem
	bool UnlockTreeItem(APlayerController* PlayerController, FString TreeId, FString SlotId, FString ItemId) // [0x20fe5c0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(APlayerController*, FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(PlayerController, TreeId, SlotId, ItemId);
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.UnlockPerk
	bool UnlockPerk(APlayerController* PlayerController, FName& PerkId, FName& CharacterName, int32_t Row, int32_t Column) // [0x20fe3e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(APlayerController*, FName&, FName&, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(PlayerController, PerkId, CharacterName, Row, Column);
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.UnlockAttributePoint
	bool UnlockAttributePoint(APlayerController* PlayerController, int32_t Row, int32_t Column, FName& CharacterName) // [0x20fe280] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(APlayerController*, int32_t, int32_t, FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(PlayerController, Row, Column, CharacterName);
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.IsPerkUnlocked
	bool IsPerkUnlocked(APlayerController* PlayerController, FName& PerkId, FName& CharacterName) // [0x20fd220] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(APlayerController*, FName&, FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(PlayerController, PerkId, CharacterName);
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.IsAttributePointUnlocked
	bool IsAttributePointUnlocked(APlayerController* PlayerController, int32_t Row, int32_t Column, FName& CharacterName) // [0x20fd0c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(APlayerController*, int32_t, int32_t, FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(PlayerController, Row, Column, CharacterName);
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.GetSetupDataStatus
	EBBQMetaGameDataStatus GetSetupDataStatus() // [0x20fd0a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EBBQMetaGameDataStatus (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.GetSetupData
	FBBQMetaGameSetupData GetSetupData() // [0x20fd070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FBBQMetaGameSetupData (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.GetPlayerData
	FBBQMetaGamePlayerData GetPlayerData(APlayerController* PlayerController) // [0x20fcfd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FBBQMetaGamePlayerData (*FuncPtr)(APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(PlayerController);
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.GetPerkLevel
	int32_t GetPerkLevel(APlayerController* PlayerController, FName& PerkId, FName& CharacterName) // [0x20fcea0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(APlayerController*, FName&, FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(PlayerController, PerkId, CharacterName);
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.GetPerkData
	FBBQMetaGamePerkBaseData GetPerkData(FName& PerkId, bool& OutIsValid) // [0x20fcd80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FBBQMetaGamePerkBaseData (*FuncPtr)(FName&, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(PerkId, OutIsValid);
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.GetLevelData
	FBBQMetaGameLevelData GetLevelData(int32_t level, bool& OutIsValid) // [0x20fcca0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FBBQMetaGameLevelData (*FuncPtr)(int32_t, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(level, OutIsValid);
	}
	// Function /Script/BBQBackendServices.BBQMetaGameService.CanUnlockPerk
	bool CanUnlockPerk(APlayerController* PlayerController, FName& PerkId, FName& CharacterName) // [0x20fcb70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(APlayerController*, FName&, FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(PlayerController, PerkId, CharacterName);
	}
};

/// Class /Script/BBQBackendServices.BBQPlayerAvatarCache
/// Size: 0x0118 (280 bytes) (0x000028 - 0x000118) align 8 MaxSize: 0x0118
class UBBQPlayerAvatarCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x68];                                      // 0x0028   (0x0068)  MISSED
	TArray<class UTexture2D*>                          CachedAvatars;                                              // 0x0090   (0x0010)  
	class UTexture2D*                                  LocalAvatar;                                                // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x70];                                      // 0x00A8   (0x0070)  MISSED
};

/// Class /Script/BBQBackendServices.BBQSKUConfigManager
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UBBQSKUConfigManager : public UObject
{ 
public:
	FString                                            MatchmakingQueue;                                           // 0x0028   (0x0010)  
	FString                                            PlatformName;                                               // 0x0038   (0x0010)  
	FString                                            BranchName;                                                 // 0x0048   (0x0010)  
};

/// Class /Script/BBQBackendServices.BBQSocialService
/// Size: 0x0138 (312 bytes) (0x000028 - 0x000138) align 8 MaxSize: 0x0138
class UBBQSocialService : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x110];                                     // 0x0028   (0x0110)  MISSED


	/// Functions
	// Function /Script/BBQBackendServices.BBQSocialService.UnMutePlayer
	void UnMutePlayer(FString PlayFabId) // [0x20fe190] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(PlayFabId);
	}
	// Function /Script/BBQBackendServices.BBQSocialService.UnBlockPlayer
	// void UnBlockPlayer(FString PlayFabId, FDelegateProperty& CompleteDelegate);                                              // [0x20fe040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BBQBackendServices.BBQSocialService.MutePlayer
	void MutePlayer(FString PlayFabId) // [0x20fdcc0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(PlayFabId);
	}
	// Function /Script/BBQBackendServices.BBQSocialService.IsPlayerMuted
	bool IsPlayerMuted(FString PlayFabId) // [0x20fd450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(PlayFabId);
	}
	// Function /Script/BBQBackendServices.BBQSocialService.IsPlayerBlocked
	bool IsPlayerBlocked(FString PlayFabId) // [0x20fd350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(PlayFabId);
	}
	// Function /Script/BBQBackendServices.BBQSocialService.BlockPlayer
	// void BlockPlayer(FString PlayFabId, FDelegateProperty& CompleteDelegate);                                                // [0x20fca20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/BBQBackendServices.BBQTelemetryEventsFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQTelemetryEventsFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQBackendServices.BBQTelemetryEventsFunctionLibrary.TriggerTelemetryEvent
	// void TriggerTelemetryEvent(FString EventName, TArray<FBBQTelemetryEventsVariantData> Args);                              // [0x20fddb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BBQBackendServices.BBQTelemetryEventsFunctionLibrary.MakeTelemetryVectorArg
	FBBQTelemetryEventsVariantData MakeTelemetryVectorArg(FString Key, FVector Value) // [0x20fdb50] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FBBQTelemetryEventsVariantData (*FuncPtr)(FString, FVector);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Key, Value);
	}
	// Function /Script/BBQBackendServices.BBQTelemetryEventsFunctionLibrary.MakeTelemetryStringArg
	FBBQTelemetryEventsVariantData MakeTelemetryStringArg(FString Key, FString Value) // [0x20fd9a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FBBQTelemetryEventsVariantData (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Key, Value);
	}
	// Function /Script/BBQBackendServices.BBQTelemetryEventsFunctionLibrary.MakeTelemetryIntegerArg
	FBBQTelemetryEventsVariantData MakeTelemetryIntegerArg(FString Key, int32_t Value) // [0x20fd830] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FBBQTelemetryEventsVariantData (*FuncPtr)(FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Key, Value);
	}
	// Function /Script/BBQBackendServices.BBQTelemetryEventsFunctionLibrary.MakeTelemetryFloatArg
	FBBQTelemetryEventsVariantData MakeTelemetryFloatArg(FString Key, float Value) // [0x20fd6c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FBBQTelemetryEventsVariantData (*FuncPtr)(FString, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(Key, Value);
	}
	// Function /Script/BBQBackendServices.BBQTelemetryEventsFunctionLibrary.MakeTelemetryBoolArg
	FBBQTelemetryEventsVariantData MakeTelemetryBoolArg(FString Key, bool Value) // [0x20fd550] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FBBQTelemetryEventsVariantData (*FuncPtr)(FString, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Key, Value);
	}
};

/// Class /Script/BBQBackendServices.BBQTitleUpsellData
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UBBQTitleUpsellData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0028   (0x0038)  MISSED
	class UTexture2D*                                  UpsellTexture;                                              // 0x0060   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UBBQAchievements) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UBBQEventTrackerSubsystem) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UBBQMetaGameService) == 0x01D0); // 464 bytes (0x000028 - 0x0001D0)
static_assert(sizeof(UBBQPlayerAvatarCache) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UBBQSKUConfigManager) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UBBQSocialService) == 0x0138); // 312 bytes (0x000028 - 0x000138)
static_assert(sizeof(UBBQTelemetryEventsFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQTitleUpsellData) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FBBQRegionLatencyPreference) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBBQMatchBackfillPreferences) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FBBQUnlockTreeSlotId) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FBBQMetaGameInventoryData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FBBQMetaGamePlayerData) == 0x0118); // 280 bytes (0x000000 - 0x000118)
static_assert(sizeof(FLobbyPlayerMetaData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FBBQMetaGamePerkSerializedData) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FBBQMetaGamePerkBaseData) == 0x0030); // 48 bytes (0x000018 - 0x000030)
static_assert(sizeof(FBBQEventTimestamps) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FLobbyPlayerPlayfabData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FBBQLobbyPlayerMeta) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FBBQMetaGameLevelData) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FBBQMetaGameSetupData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FBBQMetaGamePerksProgression) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FBBQUnlockTreeSlotData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FBBQUnlockTreeData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FBlockedPlayers) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBBQTelemetryEventsVariantData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FBBQTelemetryEventsParams) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UBBQPlayerAvatarCache, CachedAvatars) == 0x0090);
static_assert(offsetof(UBBQPlayerAvatarCache, LocalAvatar) == 0x00A0);
static_assert(offsetof(UBBQSKUConfigManager, MatchmakingQueue) == 0x0028);
static_assert(offsetof(UBBQSKUConfigManager, PlatformName) == 0x0038);
static_assert(offsetof(UBBQSKUConfigManager, BranchName) == 0x0048);
static_assert(offsetof(UBBQTitleUpsellData, UpsellTexture) == 0x0060);
static_assert(offsetof(FBBQRegionLatencyPreference, Region) == 0x0000);
static_assert(offsetof(FBBQMatchBackfillPreferences, TeamId) == 0x0000);
static_assert(offsetof(FBBQMatchBackfillPreferences, QueueType) == 0x0001);
static_assert(offsetof(FBBQMatchBackfillPreferences, Rank) == 0x0002);
static_assert(offsetof(FBBQMatchBackfillPreferences, Region) == 0x0008);
static_assert(offsetof(FBBQMatchBackfillPreferences, COMPATIBILITY) == 0x0018);
static_assert(offsetof(FBBQMatchBackfillPreferences, CDNPatch) == 0x0028);
static_assert(offsetof(FBBQMatchBackfillPreferences, PLATFORM) == 0x0038);
static_assert(offsetof(FBBQMatchBackfillPreferences, SessionId) == 0x0050);
static_assert(offsetof(FBBQMatchBackfillPreferences, GAMEMODE) == 0x0080);
static_assert(offsetof(FBBQMatchBackfillPreferences, RegionLatencies) == 0x0090);
static_assert(offsetof(FBBQMatchBackfillPreferences, ServiceRegion) == 0x00A0);
static_assert(offsetof(FBBQMetaGameInventoryData, ItemId) == 0x0000);
static_assert(offsetof(FBBQMetaGameInventoryData, ItemClass) == 0x0008);
static_assert(offsetof(FBBQMetaGameInventoryData, ItemInstanceId) == 0x0010);
static_assert(offsetof(FBBQMetaGameInventoryData, SlotId) == 0x0024);
static_assert(offsetof(FBBQMetaGamePlayerData, Inventory) == 0x0010);
static_assert(offsetof(FBBQMetaGamePerkBaseData, PerkId) == 0x0018);
static_assert(offsetof(FBBQEventTimestamps, EventTimestamps) == 0x0000);
static_assert(offsetof(FLobbyPlayerPlayfabData, Character) == 0x0000);
static_assert(offsetof(FLobbyPlayerPlayfabData, Perks) == 0x0010);
static_assert(offsetof(FLobbyPlayerPlayfabData, StarSignPerk) == 0x0020);
static_assert(offsetof(FLobbyPlayerPlayfabData, MottoPerk) == 0x0030);
static_assert(offsetof(FLobbyPlayerPlayfabData, MetaData) == 0x0040);
static_assert(offsetof(FBBQMetaGameSetupData, ExperienceLevels) == 0x0000);
static_assert(offsetof(FBBQMetaGameSetupData, Perks) == 0x0010);
static_assert(offsetof(FBBQMetaGameSetupData, InitialPerkItems) == 0x0060);
static_assert(offsetof(FBBQMetaGamePerksProgression, ExperiencePoints) == 0x0000);
static_assert(offsetof(FBBQUnlockTreeSlotData, Req) == 0x0000);
static_assert(offsetof(FBBQUnlockTreeSlotData, Exc) == 0x0010);
static_assert(offsetof(FBBQUnlockTreeSlotData, Itm) == 0x0020);
static_assert(offsetof(FBBQUnlockTreeData, Slots) == 0x0000);
static_assert(offsetof(FBlockedPlayers, BlockedPlayersCache) == 0x0000);
static_assert(offsetof(FBBQTelemetryEventsVariantData, KeyName) == 0x0000);
static_assert(offsetof(FBBQTelemetryEventsVariantData, DataType) == 0x0010);
static_assert(offsetof(FBBQTelemetryEventsVariantData, AsString) == 0x0020);
static_assert(offsetof(FBBQTelemetryEventsVariantData, AsVector) == 0x0030);
static_assert(offsetof(FBBQTelemetryEventsParams, Args) == 0x0000);
