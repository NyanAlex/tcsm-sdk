
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AkAudio.h"
#include "BBQBackendServices.h"
#include "BBQInterface.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "EnhancedInput.h"
#include "GameMessages.h"
#include "GameplayAbilities.h"
#include "GameplayTags.h"
#include "GameplayTasks.h"
#include "GameplayVariables.h"
#include "InputCore.h"
#include "Niagara.h"
#include "NiagaraCore.h"
#include "OnlineSubsystemBBQ.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ABBQAmbientSound;
class ABBQBaseCharacter;
class ABBQChangeOutfitMain;
class ABBQChangeOutfitSP;
class ABBQCorePlayerController;
class ABBQGameMode;
class ABBQGameSession;
class ABBQGameState;
class ABBQPlayerPrefs;
class ABBQPlayerState;
class ABBQRenderQualityVolume;
class ABBQReverbVolume;
class ABBQTeleportLocation;
class UBBQAbilityPerk;
class UBBQAbilitySystemComponent;
class UBBQAbilitySystemGlobals;
class UBBQAchievementUnlockCalculation;
class UBBQAchievementUnlockCalculationAddition;
class UBBQAchievementUnlockCalculationAnd;
class UBBQAchievementsComponent;
class UBBQAkComponentPoolSubsystem;
class UBBQAmbientAudioSubsystem;
class UBBQAnimNotifyState_Audio;
class UBBQAnimNotify_Audio;
class UBBQAttributeSet;
class UBBQAudioEngineSupportSubsystem;
class UBBQAudioListenerSubsystem;
class UBBQAudioPreferencesSave;
class UBBQBaseAttributeSet;
class UBBQBasePlayerAttributeAsset;
class UBBQBlueprintFunctionLibrary;
class UBBQBlueprintFunctionLibraryGameInstance;
class UBBQBlueprintFunctionLibraryGameMode;
class UBBQBlueprintFunctionLibraryGameState;
class UBBQBlueprintFunctionLibraryPlayerState;
class UBBQChainsawSkin;
class UBBQChainsawSkinData;
class UBBQCharacterCosmeticsData;
class UBBQCharacterOutfit;
class UBBQClientSave;
class UBBQControlScheme;
class UBBQControlSchemePersonaliser;
class UBBQControlSchemePresets;
class UBBQControlSchemeSet;
class UBBQControlSchemeSettings;
class UBBQControlsPresetPreferencesSave;
class UBBQCoreCheatManager;
class UBBQCustomMatchSubsystem;
class UBBQCustomizableCharacter;
class UBBQDebugGameCheats;
class UBBQDemoMode;
class UBBQDeveloperSettings;
class UBBQEquippableExecutionData;
class UBBQEventManagerFunctionLibrary;
class UBBQEventsDataAsset;
class UBBQFamilyAbilityPerk;
class UBBQFamilyMottoPerk;
class UBBQFlickeringLightAudioComponent;
class UBBQGameConstants;
class UBBQGameInstance;
class UBBQGameModifierDefinitionAsset;
class UBBQGameModifierFunctionLibrary;
class UBBQGamePreferencesSave;
class UBBQGameUserSettings;
class UBBQGameplayAbility;
class UBBQGameplayAbilitySet;
class UBBQGameplayCueManager;
class UBBQGameplayEffect;
class UBBQGameplayModMagnitudeCalc;
class UBBQInputModifierInputID;
class UBBQLoadoutComponent;
class UBBQLoadoutManager;
class UBBQMapDataAsset;
class UBBQMapDataList;
class UBBQMetaGameConstants;
class UBBQMottoPerk;
class UBBQMusicManager;
class UBBQPerk;
class UBBQPerkData;
class UBBQPerkGameplayEffect;
class UBBQPickupItemData;
class UBBQPlayerStatComponent;
class UBBQPlayerStatsUtils;
class UBBQPreloadManager;
class UBBQProximityCheckComponent;
class UBBQRenderQualitySubsystem;
class UBBQSaveGame;
class UBBQSaveManager;
class UBBQSessionRecoverySave;
class UBBQStarSignPerk;
class UBBQTutorialManager;
class UBBQUnlockTreeSave;
class UBBQUnlockableManager;
class UBBQUtilitiesLibrary;
class UBBQVariableBasedMagnitudeCalculation;
class UBBQVariableBasedModifiersExecutionCalculation;
class UBBQVideoPreferencesSave;
class UBBQViewportClient;
class UBBQWwiseNiagaraDataInterface;
class UOnScreenDebugger;
class UPlayerSetupDataAsset;
class UPlayerSetupPerkSet;
class UPlayerSetupProperties;

/// Enum /Script/BBQCore.ECharacterRequestState
/// Size: 0x01 (1 bytes)
enum class ECharacterRequestState : uint8_t
{
	ECharacterRequestState__Received                                                 = 0,
	ECharacterRequestState__Accepted                                                 = 1,
	ECharacterRequestState__Rejected                                                 = 2,
	ECharacterRequestState__RejectedMismatch                                         = 3,
	ECharacterRequestState__RejectedTooSoon                                          = 4,
	ECharacterRequestState__RejectedTimeout                                          = 5,
	ECharacterRequestState__AlreadyReceived                                          = 6,
	ECharacterRequestState__Invalid                                                  = 7,
	ECharacterRequestState__Disconnected                                             = 8,
	ECharacterRequestState__MissingDLC                                               = 9,
	ECharacterRequestState__PartnerReady                                             = 10,
	ECharacterRequestState__RequesterChangeOnly                                      = 11,
	ECharacterRequestState__WaitingForReply                                          = 12
};

/// Enum /Script/BBQCore.EBBQPerkType
/// Size: 0x01 (1 bytes)
enum class EBBQPerkType : uint8_t
{
	EBBQPerkType__Perk                                                               = 1,
	EBBQPerkType__FamilyAbility                                                      = 2,
	EBBQPerkType__StarSignAbility                                                    = 4,
	EBBQPerkType__GrandpaAbility                                                     = 8,
	EBBQPerkType__None                                                               = 0,
	EBBQPerkType__All                                                                = 15
};

/// Enum /Script/BBQCore.EUserPlatform
/// Size: 0x01 (1 bytes)
enum class EUserPlatform : uint8_t
{
	EUserPlatform__PC                                                                = 0,
	EUserPlatform__PlayStation                                                       = 1,
	EUserPlatform__Xbox                                                              = 2
};

/// Enum /Script/BBQCore.EPlayerStatType
/// Size: 0x01 (1 bytes)
enum class EPlayerStatType : uint8_t
{
	EPlayerStatType__DistanceWalked                                                  = 0,
	EPlayerStatType__Kills                                                           = 1,
	EPlayerStatType__Deaths                                                          = 2,
	EPlayerStatType__Escapes                                                         = 3,
	EPlayerStatType__BloodLost                                                       = 4,
	EPlayerStatType__SneakAttacks                                                    = 5,
	EPlayerStatType__EncounterWon                                                    = 6,
	EPlayerStatType__EncounterLost                                                   = 7,
	EPlayerStatType__CloseEncounterWinFamily                                         = 8,
	EPlayerStatType__CloseEncounterWinVictim                                         = 9,
	EPlayerStatType__TrapPlaced                                                      = 10,
	EPlayerStatType__CookSpottedVictims                                              = 11,
	EPlayerStatType__CookLocksAdded                                                  = 12,
	EPlayerStatType__DoorsLocked                                                     = 13,
	EPlayerStatType__DoorsUnlocked                                                   = 14,
	EPlayerStatType__DoorsBarged                                                     = 15,
	EPlayerStatType__FootprintsAnalyzed                                              = 16,
	EPlayerStatType__VictimPoisoned                                                  = 17,
	EPlayerStatType__ObjectsDestroyed                                                = 18,
	EPlayerStatType__ObjectsDestroyedLF                                              = 19,
	EPlayerStatType__ItemsPoisoned                                                   = 20,
	EPlayerStatType__PoisonPurged                                                    = 21,
	EPlayerStatType__TotalXP                                                         = 22,
	EPlayerStatType__TotalDP                                                         = 23,
	EPlayerStatType__GeneratorOff                                                    = 24,
	EPlayerStatType__GeneratorOn                                                     = 25,
	EPlayerStatType__RoadExitEscapes                                                 = 26,
	EPlayerStatType__RearGateExitEscapes                                             = 27,
	EPlayerStatType__FuseBoxExitEscapes                                              = 28,
	EPlayerStatType__PressureValveExitEscapes                                        = 29,
	EPlayerStatType__LastVictimStanding                                              = 30,
	EPlayerStatType__HidingSpots                                                     = 31,
	EPlayerStatType__DraggedVictimFromHiding                                         = 32,
	EPlayerStatType__ToiletsFlushed                                                  = 33,
	EPlayerStatType__GallowsExecution                                                = 34,
	EPlayerStatType__KillsMadeAsLeatherface                                          = 35,
	EPlayerStatType__KillsMadeAsCook                                                 = 36,
	EPlayerStatType__KillsMadeAsHitchhiker                                           = 37,
	EPlayerStatType__KillsMadeAsJohnny                                               = 38,
	EPlayerStatType__KillsMadeAsSissy                                                = 39,
	EPlayerStatType__TotalNumExecutionsPerformed                                     = 40,
	EPlayerStatType__WindowsJumpedThrough                                            = 41,
	EPlayerStatType__WellsJumpedThrough                                              = 42,
	EPlayerStatType__HealingItemsUsed                                                = 43,
	EPlayerStatType__TeammatesHealed                                                 = 44,
	EPlayerStatType__SidlesUsed                                                      = 45,
	EPlayerStatType__BoltHolesUsed                                                   = 46,
	EPlayerStatType__TrapsDismantled                                                 = 47,
	EPlayerStatType__TrapsEscaped                                                    = 48,
	EPlayerStatType__VictimsTrapped                                                  = 49,
	EPlayerStatType__ShardsCollected                                                 = 50,
	EPlayerStatType__ToolsCollected                                                  = 51,
	EPlayerStatType__DoorsLatched                                                    = 52,
	EPlayerStatType__DoorsPicked                                                     = 53,
	EPlayerStatType__TotalPlaytime                                                   = 54,
	EPlayerStatType__FamilyBarged                                                    = 55,
	EPlayerStatType__TimeSurvived                                                    = 56,
	EPlayerStatType__ChickensKilled                                                  = 57,
	EPlayerStatType__ChickenDetected                                                 = 58,
	EPlayerStatType__NoiseMakerHit                                                   = 59,
	EPlayerStatType__ValvesCollected                                                 = 60,
	EPlayerStatType__FuseCollected                                                   = 61,
	EPlayerStatType__GrandpaStabbed                                                  = 62,
	EPlayerStatType__DetectedByGrandpa                                               = 63,
	EPlayerStatType__GrandpaFed                                                      = 64,
	EPlayerStatType__EscapeZonesUsed_FamilyHouse                                     = 65,
	EPlayerStatType__EscapeZonesUsed_GasStation                                      = 66,
	EPlayerStatType__EscapeZonesUsed_SlaughterHouse                                  = 67,
	EPlayerStatType__PerfectFamilyWins                                               = 68,
	EPlayerStatType__PerfectVictimWins                                               = 69,
	EPlayerStatType__PublicMatchesPlayed                                             = 70,
	EPlayerStatType__CustomMatchesPlayed                                             = 71,
	EPlayerStatType__TotalMatches                                                    = 72,
	EPlayerStatType__UltimateEscapeUsed                                              = 73,
	EPlayerStatType__SonnyUsed                                                       = 74,
	EPlayerStatType__JulieCollected                                                  = 75,
	EPlayerStatType__FocusUsed                                                       = 76,
	EPlayerStatType__AchievementsUnlocked                                            = 77,
	EPlayerStatType__CharacterRespecced                                              = 78,
	EPlayerStatType__UsedUltimateEscapeLv3                                           = 79,
	EPlayerStatType__SoloKilledAllVictims                                            = 80,
	EPlayerStatType__HighestPlayerXPLevel                                            = 81,
	EPlayerStatType__MaxedOutCharacters                                              = 82,
	EPlayerStatType__MaxedOutNonDLCCharacters                                        = 83,
	EPlayerStatType__VictimsKilledNearEscapeZone                                     = 84,
	EPlayerStatType__TimesMadeFirstKill                                              = 85,
	EPlayerStatType__TimesStartedFullyPerked                                         = 86,
	EPlayerStatType__TimesEarnedLastVictimStanding                                   = 87,
	EPlayerStatType__PerfectVictimWinCount                                           = 88,
	EPlayerStatType__PerfectFamilyWinCount                                           = 89,
	EPlayerStatType__AnaAbilityUsed                                                  = 90,
	EPlayerStatType__TotalMatchesPlayedAsFamily                                      = 91,
	EPlayerStatType__TotalMatchesPlayedAsVictim                                      = 92,
	EPlayerStatType__HidingSpotTypesUsed                                             = 93,
	EPlayerStatType__LeatherfaceGamesPlayed                                          = 94,
	EPlayerStatType__CookGamesPlayed                                                 = 95,
	EPlayerStatType__HitchhikerGamesPlayed                                           = 96,
	EPlayerStatType__JohnnyGamesPlayed                                               = 97,
	EPlayerStatType__SissyGamesPlayed                                                = 98,
	EPlayerStatType__NancyGamesPlayed                                                = 99,
	EPlayerStatType__ConnieGamesPlayed                                               = 100,
	EPlayerStatType__LelandGamesPlayed                                               = 101,
	EPlayerStatType__JulieGamesPlayed                                                = 102,
	EPlayerStatType__AnaGamesPlayed                                                  = 103,
	EPlayerStatType__SonnyGamesPlayed                                                = 104,
	EPlayerStatType__DannyGamesPlayed                                                = 105,
	EPlayerStatType__SilentEscapes                                                   = 106,
	EPlayerStatType__SneakAttackAllFamily                                            = 107,
	EPlayerStatType__HouseRoute                                                      = 108,
	EPlayerStatType__Hitchhiker02                                                    = 109,
	EPlayerStatType__MultipleVictimsConfused                                         = 110,
	EPlayerStatType__TrackAllFamily                                                  = 111,
	EPlayerStatType__QuickKills                                                      = 112,
	EPlayerStatType__BondMax                                                         = 113,
	EPlayerStatType__TeamExit                                                        = 114,
	EPlayerStatType__MaxCharacterRespec                                              = 115,
	EPlayerStatType__UnlocktreeSpend                                                 = 116,
	EPlayerStatType__GrandpaNoDetect                                                 = 117,
	EPlayerStatType__EscapeZonesUsed_NancyHouse                                      = 118,
	EPlayerStatType__VirginiaGamesPlayed                                             = 119,
	EPlayerStatType__AlphaGamesPlayed                                                = 120,
	EPlayerStatType__CharlieGamesPlayed                                              = 121,
	EPlayerStatType__JohnnyMercuryGamesPlayed                                        = 122,
	EPlayerStatType__VictimMercuryGamesPlayed                                        = 123,
	EPlayerStatType__Max                                                             = 124
};

/// Enum /Script/BBQCore.ECharacterRequestMessageType
/// Size: 0x01 (1 bytes)
enum class ECharacterRequestMessageType : uint8_t
{
	ECharacterRequestMessageType__Invalid                                            = 0,
	ECharacterRequestMessageType__RequestAccepeted                                   = 1,
	ECharacterRequestMessageType__Reject_RejectedByPlayer                            = 2,
	ECharacterRequestMessageType__Reject_RejectedByTimeout                           = 3,
	ECharacterRequestMessageType__Reject_MissingDLC                                  = 4,
	ECharacterRequestMessageType__Reject_Mismatch                                    = 5
};

/// Enum /Script/BBQCore.EStatUpdateOp
/// Size: 0x01 (1 bytes)
enum class EStatUpdateOp : uint8_t
{
	EStatUpdateOp__Add                                                               = 0,
	EStatUpdateOp__Or                                                                = 1,
	EStatUpdateOp__Greatest                                                          = 2,
	EStatUpdateOp__Override                                                          = 3
};

/// Enum /Script/BBQCore.EMottoPerkCategory
/// Size: 0x01 (1 bytes)
enum class EMottoPerkCategory : uint8_t
{
	EMottoPerkCategory__None                                                         = 0,
	EMottoPerkCategory__Butcher                                                      = 1,
	EMottoPerkCategory__Beater                                                       = 2,
	EMottoPerkCategory__Torturer                                                     = 3
};

/// Enum /Script/BBQCore.EBBQUtilsPlayerLeaveReason
/// Size: 0x01 (1 bytes)
enum class EBBQUtilsPlayerLeaveReason : uint8_t
{
	EBBQUtilsPlayerLeaveReason__Leave                                                = 0,
	EBBQUtilsPlayerLeaveReason__BlockedPlayerExists                                  = 1
};

/// Enum /Script/BBQCore.EBBQTimeOfDay
/// Size: 0x01 (1 bytes)
enum class EBBQTimeOfDay : uint8_t
{
	EBBQTimeOfDay__None                                                              = 0,
	EBBQTimeOfDay__Dusk                                                              = 1,
	EBBQTimeOfDay__Day                                                               = 2,
	EBBQTimeOfDay__Night                                                             = 3,
	EBBQTimeOfDay__Storm                                                             = 4,
	EBBQTimeOfDay__BloodMoon                                                         = 5
};

/// Enum /Script/BBQCore.ETutorialTeam
/// Size: 0x04 (4 bytes)
enum class ETutorialTeam : uint32_t
{
	ETutorialTeam__BOTH                                                              = 0,
	ETutorialTeam__FAMILY                                                            = 1,
	ETutorialTeam__VICTIMS                                                           = 2,
	ETutorialTeam__RUSH_WEEK                                                         = 3
};

/// Enum /Script/BBQCore.EHUDArea
/// Size: 0x01 (1 bytes)
enum class EHUDArea : uint8_t
{
	EHUDArea__None                                                                   = 0,
	EHUDArea__Health                                                                 = 1,
	EHUDArea__DebugArea                                                              = 2,
	EHUDArea__Interactables                                                          = 4,
	EHUDArea__Inventory                                                              = 8
};

/// Enum /Script/BBQCore.EBBQAnimSlot
/// Size: 0x01 (1 bytes)
enum class EBBQAnimSlot : uint8_t
{
	EBBQAnimSlot__INVALID                                                            = 0,
	EBBQAnimSlot__TRAVERSAL_SidleShort                                               = 1,
	EBBQAnimSlot__TRAVERSAL_SidleShortFast                                           = 2,
	EBBQAnimSlot__TRAVERSAL_ClimbOver                                                = 3,
	EBBQAnimSlot__TRAVERSAL_CarCrawl_L                                               = 4,
	EBBQAnimSlot__TRAVERSAL_CarCrawl_R                                               = 5,
	EBBQAnimSlot__TRAVERSAL_CarCrawlFast_L                                           = 6,
	EBBQAnimSlot__TRAVERSAL_CarCrawlFast_R                                           = 7,
	EBBQAnimSlot__SIDLING_SidleLeft                                                  = 8,
	EBBQAnimSlot__SIDLING_SidleRight                                                 = 9,
	EBBQAnimSlot__BOLTHOLE_Opening                                                   = 10,
	EBBQAnimSlot__BOLTHOLE_BoltSlow                                                  = 11,
	EBBQAnimSlot__BOLTHOLE_BoltFast                                                  = 12,
	EBBQAnimSlot__BOLTHOLE_Blocking                                                  = 13,
	EBBQAnimSlot__BOLTHOLE_Blocking_Right                                            = 14,
	EBBQAnimSlot__WINDOW_JumpThroughWindowGround                                     = 15,
	EBBQAnimSlot__WINDOW_JumpThroughWindowFirstFloor                                 = 16,
	EBBQAnimSlot__WINDOW_JumpThroughWindowMercury                                    = 17,
	EBBQAnimSlot__WINDOW_BackFallRecovery                                            = 18,
	EBBQAnimSlot__WINDOW_FallRecovery                                                = 19,
	EBBQAnimSlot__DOOR_OpenSlidingLeft                                               = 20,
	EBBQAnimSlot__DOOR_OpenSlidingRight                                              = 21,
	EBBQAnimSlot__DOOR_CloseSlidingLeft                                              = 22,
	EBBQAnimSlot__DOOR_CloseSlidingRight                                             = 23,
	EBBQAnimSlot__DOOR_SprintDoor                                                    = 24,
	EBBQAnimSlot__DOOR_DamageDoor                                                    = 25,
	EBBQAnimSlot__DOOR_Add_Lock                                                      = 26,
	EBBQAnimSlot__DOOR_Remove_Lock                                                   = 27,
	EBBQAnimSlot__DOOR_Unlock_High                                                   = 28,
	EBBQAnimSlot__DOOR_Unlock_Low                                                    = 29,
	EBBQAnimSlot__DOOR_Stagger_Back                                                  = 30,
	EBBQAnimSlot__DOOR_Stagger_Back_Loop                                             = 31,
	EBBQAnimSlot__DOOR_Stagger_Back_OutOf                                            = 32,
	EBBQAnimSlot__DOOR_Stagger_Forward                                               = 33,
	EBBQAnimSlot__DOOR_Stagger_Forward_Loop                                          = 34,
	EBBQAnimSlot__DOOR_Stagger_Forward_OutOf                                         = 35,
	EBBQAnimSlot__DOOR_UnlockAndOpen                                                 = 36,
	EBBQAnimSlot__DOOR_UnlockAndOpenHigh                                             = 37,
	EBBQAnimSlot__DOOR_LockUp                                                        = 38,
	EBBQAnimSlot__DOOR_OpenRight                                                     = 39,
	EBBQAnimSlot__DOOR_OpenLeft                                                      = 40,
	EBBQAnimSlot__DOOR_CloseRight                                                    = 41,
	EBBQAnimSlot__DOOR_CloseLeft                                                     = 42,
	EBBQAnimSlot__DOOR_LatchLeft                                                     = 43,
	EBBQAnimSlot__DOOR_LatchRight                                                    = 44,
	EBBQAnimSlot__DOOR_UnlatchLeft                                                   = 45,
	EBBQAnimSlot__DOOR_UnlatchRight                                                  = 46,
	EBBQAnimSlot__DOOR_BargeFailLeft                                                 = 47,
	EBBQAnimSlot__DOOR_BargeFailRight                                                = 48,
	EBBQAnimSlot__DOOR_BargeWinLeft                                                  = 49,
	EBBQAnimSlot__DOOR_BargeWinRight                                                 = 50,
	EBBQAnimSlot__DOOR_BargeIdle                                                     = 51,
	EBBQAnimSlot__DOOR_DestroyDoorFront                                              = 52,
	EBBQAnimSlot__DOOR_DestroyDoorBack                                               = 53,
	EBBQAnimSlot__DOOR_CompleteDestruction                                           = 54,
	EBBQAnimSlot__DOOR_OpenLeftFullBody                                              = 55,
	EBBQAnimSlot__DOOR_CloseLeftFullBody                                             = 56,
	EBBQAnimSlot__DOOR_OpenRightFullBody                                             = 57,
	EBBQAnimSlot__DOOR_CloseRightFullBody                                            = 58,
	EBBQAnimSlot__DOOR_PullClosed                                                    = 59,
	EBBQAnimSlot__DOOR_PullClosedFullBody                                            = 60,
	EBBQAnimSlot__WELL_JumpIntoWell                                                  = 61,
	EBBQAnimSlot__WELL_ClamberIntoWell                                               = 62,
	EBBQAnimSlot__WELL_ThrowIntoWell                                                 = 63,
	EBBQAnimSlot__WELL_BeThrownIntoWell                                              = 64,
	EBBQAnimSlot__WELL_FallFromWellRecovery                                          = 65,
	EBBQAnimSlot__WELL_HitWhilstClimbing                                             = 66,
	EBBQAnimSlot__STUN_Stunned                                                       = 67,
	EBBQAnimSlot__STUN_BigFront                                                      = 68,
	EBBQAnimSlot__STUN_BigBack                                                       = 69,
	EBBQAnimSlot__STUN_Spied                                                         = 70,
	EBBQAnimSlot__CHAINSAW_DestroyBolthole                                           = 71,
	EBBQAnimSlot__CHAINSAW_OverheatReaction                                          = 72,
	EBBQAnimSlot__CHAINSAW_OverheatRunningReaction                                   = 73,
	EBBQAnimSlot__CHAINSAW_StallReaction                                             = 74,
	EBBQAnimSlot__CHAINSAW_HotStance                                                 = 75,
	EBBQAnimSlot__CHAINSAW_HotStanceOutOf                                            = 76,
	EBBQAnimSlot__Chainsaw_Activate_Idle                                             = 77,
	EBBQAnimSlot__Chainsaw_Activate_Success_Upperbody                                = 78,
	EBBQAnimSlot__Chainsaw_Activate_Success_Fullbody                                 = 79,
	EBBQAnimSlot__Chainsaw_Activate_Rev1_Upperbody                                   = 80,
	EBBQAnimSlot__Chainsaw_Activate_Rev1_Fullbody                                    = 81,
	EBBQAnimSlot__Chainsaw_Activate_Rev2_Upperbody                                   = 82,
	EBBQAnimSlot__Chainsaw_Activate_Rev2_Fullbody                                    = 83,
	EBBQAnimSlot__Chainsaw_Activate_Rev3_Upperbody                                   = 84,
	EBBQAnimSlot__Chainsaw_Activate_Rev3_Fullbody                                    = 85,
	EBBQAnimSlot__Chainsaw_Activate_RevFail_Uppderbody                               = 86,
	EBBQAnimSlot__Chainsaw_Activate_RevFail_Fullbody                                 = 87,
	EBBQAnimSlot__HOIST_UpsideDown                                                   = 88,
	EBBQAnimSlot__HOIST_Idle                                                         = 89,
	EBBQAnimSlot__HOIST_Into                                                         = 90,
	EBBQAnimSlot__HOIST_Struggle                                                     = 91,
	EBBQAnimSlot__HOIST_Escape                                                       = 92,
	EBBQAnimSlot__LADDERS_Climb_Up                                                   = 93,
	EBBQAnimSlot__LADDERS_Climb_Down                                                 = 94,
	EBBQAnimSlot__LADDERS_Climb_Into_Bottom                                          = 95,
	EBBQAnimSlot__LADDERS_Climb_Into_Top                                             = 96,
	EBBQAnimSlot__LADDERS_Climb_OutOf_Bottom                                         = 97,
	EBBQAnimSlot__LADDERS_Climb_OutOf_Top                                            = 98,
	EBBQAnimSlot__LADDERS_Grabbing                                                   = 99,
	EBBQAnimSlot__LADDERS_Being_grabed                                               = 100,
	EBBQAnimSlot__LADDERS_HitWhilstClimbing                                          = 101,
	EBBQAnimSlot__LADDERS_LowDismount_Release                                        = 102,
	EBBQAnimSlot__LADDERS_LowDismount_Fall                                           = 103,
	EBBQAnimSlot__LADDERS_LowDismount_Land                                           = 104,
	EBBQAnimSlot__LADDERS_HighDismount_Release                                       = 105,
	EBBQAnimSlot__LADDERS_HighDismount_Fall                                          = 106,
	EBBQAnimSlot__LADDERS_HighDismount_Land                                          = 107,
	EBBQAnimSlot__FALL_Slow_Recovery                                                 = 108,
	EBBQAnimSlot__FALL_High_Recovery                                                 = 109,
	EBBQAnimSlot__PICKUP_GrabItem_Standing                                           = 110,
	EBBQAnimSlot__PICKUP_GrabItem_Crouching                                          = 111,
	EBBQAnimSlot__PICKUP_GrabItem_Floor                                              = 112,
	EBBQAnimSlot__GATHERING_High                                                     = 113,
	EBBQAnimSlot__GATHERING_Med                                                      = 114,
	EBBQAnimSlot__GATHERING_Low                                                      = 115,
	EBBQAnimSlot__GATHERING_High_OutOf                                               = 116,
	EBBQAnimSlot__GATHERING_Med_OutOf                                                = 117,
	EBBQAnimSlot__GATHERING_Low_OutOf                                                = 118,
	EBBQAnimSlot__HEAL_Yourself                                                      = 119,
	EBBQAnimSlot__HEAL_Yourself121                                                   = 120,
	EBBQAnimSlot__HEAL_Yourself122                                                   = 121,
	EBBQAnimSlot__HEAL_Yourself123                                                   = 122,
	EBBQAnimSlot__HEAL_Other_Standing                                                = 123,
	EBBQAnimSlot__HEAL_Other_Standing125                                             = 124,
	EBBQAnimSlot__HEAL_Other_Ground                                                  = 125,
	EBBQAnimSlot__POISON_Poisoned                                                    = 126,
	EBBQAnimSlot__POISON_Poisoning_Item                                              = 127,
	EBBQAnimSlot__POISON_Poisoning_Item_High                                         = 128,
	EBBQAnimSlot__POISON_Poisoning_Item_Low                                          = 129,
	EBBQAnimSlot__POISON_Poisoning_Item_ExtraHigh                                    = 130,
	EBBQAnimSlot__GATHER_Blood                                                       = 131,
	EBBQAnimSlot__GATHER_PowderCrouching                                             = 132,
	EBBQAnimSlot__GATHER_PowderStanding                                              = 133,
	EBBQAnimSlot__TAMPER                                                             = 134,
	EBBQAnimSlot__TAMPER136                                                          = 135,
	EBBQAnimSlot__TAMPER137                                                          = 136,
	EBBQAnimSlot__TAMPER_Low                                                         = 137,
	EBBQAnimSlot__TAMPER_Med                                                         = 138,
	EBBQAnimSlot__TAMPER_MedHigh                                                     = 139,
	EBBQAnimSlot__TAMPER_High                                                        = 140,
	EBBQAnimSlot__TAMPER_OnDamaged_Standing                                          = 141,
	EBBQAnimSlot__TAMPER_OnDamaged_Crouching                                         = 142,
	EBBQAnimSlot__ABILITY_ActiveCharacterAbility                                     = 143,
	EBBQAnimSlot__ABILITY_ActiveCharacterAbilityAlternate                            = 144,
	EBBQAnimSlot__GRANDPA_Idle                                                       = 145,
	EBBQAnimSlot__GRANDPA_Alerted                                                    = 146,
	EBBQAnimSlot__GRANDPA_HalfAlerted                                                = 147,
	EBBQAnimSlot__HARVEST_Chair                                                      = 148,
	EBBQAnimSlot__HARVEST_Grandpa                                                    = 149,
	EBBQAnimSlot__GENERATOR_Use                                                      = 150,
	EBBQAnimSlot__GENERATOR_Idle                                                     = 151,
	EBBQAnimSlot__GENERATOR_RevInto                                                  = 152,
	EBBQAnimSlot__GENERATOR_Success                                                  = 153,
	EBBQAnimSlot__GENERATOR_Rev1                                                     = 154,
	EBBQAnimSlot__GENERATOR_Rev2                                                     = 155,
	EBBQAnimSlot__GENERATOR_Rev3                                                     = 156,
	EBBQAnimSlot__GENERATOR_Actor_RevInto                                            = 157,
	EBBQAnimSlot__GENERATOR_Actor_Success                                            = 158,
	EBBQAnimSlot__GENERATOR_Actor_Rev1                                               = 159,
	EBBQAnimSlot__GENERATOR_Actor_Rev2                                               = 160,
	EBBQAnimSlot__GENERATOR_Actor_Rev3                                               = 161,
	EBBQAnimSlot__GENERATOR_Grid_Electrocuted                                        = 162,
	EBBQAnimSlot__GENERATOR_Grid_Electrocuted_Loop                                   = 163,
	EBBQAnimSlot__GENERATOR_Grid_Electrocuted_OutOf                                  = 164,
	EBBQAnimSlot__GENERATOR_Grid_Electrocuted_OnGrid                                 = 165,
	EBBQAnimSlot__GENERATOR_Car_On                                                   = 166,
	EBBQAnimSlot__GENERATOR_Car_Off                                                  = 167,
	EBBQAnimSlot__GENERATOR_Cancel                                                   = 168,
	EBBQAnimSlot__LIFESAVER_Barge                                                    = 169,
	EBBQAnimSlot__LIFESAVER_BargeFall_Forward                                        = 170,
	EBBQAnimSlot__LIFESAVER_BargeFall_Back                                           = 171,
	EBBQAnimSlot__MOVEMENT_Walk_Turn_180_L                                           = 172,
	EBBQAnimSlot__MOVEMENT_Walk_Turn_180_R                                           = 173,
	EBBQAnimSlot__MOVEMENT_Crouch_Turn_180_L                                         = 174,
	EBBQAnimSlot__MOVEMENT_Crouch_Turn_180_R                                         = 175,
	EBBQAnimSlot__MOVEMENT_Stand_Turn_180_L                                          = 176,
	EBBQAnimSlot__MOVEMENT_Stand_Turn_180_R                                          = 177,
	EBBQAnimSlot__MOVEMENT_Sprint_Start                                              = 178,
	EBBQAnimSlot__MOVEMENT_Sprint_Stop                                               = 179,
	EBBQAnimSlot__EXECUTION_Celebrate                                                = 180,
	EBBQAnimSlot__EXECUTION_Grab                                                     = 181,
	EBBQAnimSlot__EXECUTION_Grabbed                                                  = 182,
	EBBQAnimSlot__NOISEMAKER_KillChicken                                             = 183,
	EBBQAnimSlot__NOISEMAKER_CutDownChime                                            = 184,
	EBBQAnimSlot__NOISEMAKER_FlushToilet                                             = 185,
	EBBQAnimSlot__TRAP_Into                                                          = 186,
	EBBQAnimSlot__TRAP_OutOf_Crouch                                                  = 187,
	EBBQAnimSlot__TRAP_BreakFree_Failure                                             = 188,
	EBBQAnimSlot__TRAP_SetTrap                                                       = 189,
	EBBQAnimSlot__TRAP_CollectTrap                                                   = 190,
	EBBQAnimSlot__TRAP_DismantleTrap                                                 = 191,
	EBBQAnimSlot__TRAP_DismantleTrapNoItem                                           = 192,
	EBBQAnimSlot__TRAP_ResetTrap                                                     = 193,
	EBBQAnimSlot__TRAP_NancySnaredCrouching                                          = 194,
	EBBQAnimSlot__TRAP_NancySnaredStanding                                           = 195,
	EBBQAnimSlot__TRAP_NancyFreeSelfLoop                                             = 196,
	EBBQAnimSlot__TRAP_NancyFreeSelfFail                                             = 197,
	EBBQAnimSlot__TRAP_NancyFreeSelfWin                                              = 198,
	EBBQAnimSlot__TRAP_NancyFreeOtherPlayer                                          = 199,
	EBBQAnimSlot__TRAP_NancyFreedByOtherPlayer                                       = 200,
	EBBQAnimSlot__FUSEBOX_PriseDoor                                                  = 201,
	EBBQAnimSlot__FUSEBOX_FixFuses                                                   = 202,
	EBBQAnimSlot__FUSEBOX_PlaceFuse                                                  = 203,
	EBBQAnimSlot__FUSEBOX_SwitchUp                                                   = 204,
	EBBQAnimSlot__FUSEBOX_SwitchDown                                                 = 205,
	EBBQAnimSlot__PIPEVALVE_AttachValve                                              = 206,
	EBBQAnimSlot__PIPEVALVE_OpenValve                                                = 207,
	EBBQAnimSlot__PIPEVALVE_OpenValveSingleLoop                                      = 208,
	EBBQAnimSlot__PIPEVALVE_OpenValveInto                                            = 209,
	EBBQAnimSlot__PIPEVALVE_OpenValveOutOf                                           = 210,
	EBBQAnimSlot__PIPEVALVE_CloseValve                                               = 211,
	EBBQAnimSlot__PIPEVALVE_RemoveValve                                              = 212,
	EBBQAnimSlot__OBSTACLE_Destroy                                                   = 213,
	EBBQAnimSlot__LAMP_On_Off                                                        = 214,
	EBBQAnimSlot__LAMP_BoobyTrap                                                     = 215,
	EBBQAnimSlot__DRAG_Drop                                                          = 216,
	EBBQAnimSlot__DRAG_Dropped                                                       = 217,
	EBBQAnimSlot__DRAG_GrabFront                                                     = 218,
	EBBQAnimSlot__DRAG_GrabBack                                                      = 219,
	EBBQAnimSlot__DRAG_GrabbedFront                                                  = 220,
	EBBQAnimSlot__DRAG_GrabbedBack                                                   = 221,
	EBBQAnimSlot__BARBEDWIRE_Add                                                     = 222,
	EBBQAnimSlot__BARBEDWIRE_Cut                                                     = 223,
	EBBQAnimSlot__BARBEDWIRE_CutNoItem                                               = 224,
	EBBQAnimSlot__BARBEDWIRE_Remove                                                  = 225,
	EBBQAnimSlot__BARBEDWIRE_Reset                                                   = 226,
	EBBQAnimSlot__WHISPER_Grandpa_Left                                               = 227,
	EBBQAnimSlot__WHISPER_Grandpa_Right                                              = 228,
	EBBQAnimSlot__THROW_Powder_Stationary                                            = 229,
	EBBQAnimSlot__THROW_Powder_Moving                                                = 230,
	EBBQAnimSlot__CONTAMINATE_Bucket                                                 = 231,
	EBBQAnimSlot__LOCATE_Grandpa_Crouching                                           = 232,
	EBBQAnimSlot__LOCATE_Grandpa_Standing                                            = 233,
	EBBQAnimSlot__LOCATE_Grandpa_Upperbody                                           = 234,
	EBBQAnimSlot__ATTICLADDERS_Climb_Up                                              = 235,
	EBBQAnimSlot__ATTICLADDERS_Climb_Into_Bottom                                     = 236,
	EBBQAnimSlot__ATTICLADDERS_UnfoldIntro                                           = 237,
	EBBQAnimSlot__ATTICLADDERS_UnfoldOutOf                                           = 238,
	EBBQAnimSlot__ATTICLADDERS_UnfoldSingleLoop                                      = 239,
	EBBQAnimSlot__ITEM_UsePerfume                                                    = 240,
	EBBQAnimSlot__ITEM_ThrowPerfume_Stationary                                       = 241,
	EBBQAnimSlot__ITEM_ThrowPerfume_Moving                                           = 242,
	EBBQAnimSlot__ITEM_UsePepperSpray                                                = 243,
	EBBQAnimSlot__VENT_DestroySupport                                                = 244,
	EBBQAnimSlot__VENT_ClimbSupport                                                  = 245,
	EBBQAnimSlot__VENT_ClimbSupportAndOpenVent                                       = 246,
	EBBQAnimSlot__DOOR_UnlatchOpposite                                               = 247,
	EBBQAnimSlot__DOOR_UnlatchOppositeOutOf                                          = 248,
	EBBQAnimSlot__PHONE_CallStart                                                    = 249,
	EBBQAnimSlot__PHONE_CallWait                                                     = 250,
	EBBQAnimSlot__CAR_TurnKey                                                        = 251,
	EBBQAnimSlot__CAR_OpenDoor                                                       = 252,
	EBBQAnimSlot__CAR_CallRadio                                                      = 253
};

/// Enum /Script/BBQCore.EBBQAnimSlot_AddOn1
/// Size: 0x01 (1 bytes)
enum class EBBQAnimSlot_AddOn1 : uint8_t
{
	EBBQAnimSlot_AddOn1__INVALID                                                     = 0,
	EBBQAnimSlot_AddOn1__ELECTRO_TRAP_React                                          = 1,
	EBBQAnimSlot_AddOn1__ELECTRO_TRAP_Set_Standing                                   = 2,
	EBBQAnimSlot_AddOn1__ELECTRO_TRAP_Set_Crouching                                  = 3,
	EBBQAnimSlot_AddOn1__ELECTRO_TRAP_Victim_Disable_Standing                        = 4,
	EBBQAnimSlot_AddOn1__ELECTRO_TRAP_Victim_Disable_Crouching                       = 5,
	EBBQAnimSlot_AddOn1__ELECTRO_TRAP_Enable_Standing                                = 6,
	EBBQAnimSlot_AddOn1__ELECTRO_TRAP_Enable_Crouching                               = 7,
	EBBQAnimSlot_AddOn1__RIPSTALL_Generator_Loop                                     = 8,
	EBBQAnimSlot_AddOn1__RIPSTALL_Car_Battery_Loop                                   = 9,
	EBBQAnimSlot_AddOn1__RIPSTALL_Fuse_Box_Loop                                      = 10,
	EBBQAnimSlot_AddOn1__RIPSTALL_Valve_Loop                                         = 11,
	EBBQAnimSlot_AddOn1__ALPHA_Barge                                                 = 12,
	EBBQAnimSlot_AddOn1__ALPHA_Barge_Stance                                          = 13,
	EBBQAnimSlot_AddOn1__ALPHA_Barge_React_Back                                      = 14,
	EBBQAnimSlot_AddOn1__ALPHA_Barge_React_Forward                                   = 15,
	EBBQAnimSlot_AddOn1__ALPHA_Barge_React_Right                                     = 16,
	EBBQAnimSlot_AddOn1__ALPHA_Barge_React_Left                                      = 17,
	EBBQAnimSlot_AddOn1__ALPHA_Barge_Success                                         = 18
};

/// Enum /Script/BBQCore.EBBQCombatAnimSlot
/// Size: 0x01 (1 bytes)
enum class EBBQCombatAnimSlot : uint8_t
{
	EBBQCombatAnimSlot__INVALID                                                      = 0,
	EBBQCombatAnimSlot__HITREACT_HitFromFrontLeft                                    = 1,
	EBBQCombatAnimSlot__HITREACT_HitFromFrontLeft_Crouched                           = 2,
	EBBQCombatAnimSlot__HITREACT_HitFromFrontLeft_Stationary                         = 3,
	EBBQCombatAnimSlot__HITREACT_HitFromFrontLeft_StationaryCrouched                 = 4,
	EBBQCombatAnimSlot__HITREACT_HitFromFrontRight                                   = 5,
	EBBQCombatAnimSlot__HITREACT_HitFromFrontRight_Crouched                          = 6,
	EBBQCombatAnimSlot__HITREACT_HitFromFrontRight_Stationary                        = 7,
	EBBQCombatAnimSlot__HITREACT_HitFromFrontRight_StationaryCrouched                = 8,
	EBBQCombatAnimSlot__HITREACT_HitFromRear                                         = 9,
	EBBQCombatAnimSlot__HITREACT_HitFromRearLeft                                     = 10,
	EBBQCombatAnimSlot__HITREACT_HitFromRearLeft_Crouched                            = 11,
	EBBQCombatAnimSlot__HITREACT_HitFromRearLeft_Stationary                          = 12,
	EBBQCombatAnimSlot__HITREACT_HitFromRearLeft_StationaryCrouched                  = 13,
	EBBQCombatAnimSlot__HITREACT_HitFromRearRight                                    = 14,
	EBBQCombatAnimSlot__HITREACT_HitFromRearRight_Crouched                           = 15,
	EBBQCombatAnimSlot__HITREACT_HitFromRearRight_Stationary                         = 16,
	EBBQCombatAnimSlot__HITREACT_HitFromRearRight_StationaryCrouched                 = 17,
	EBBQCombatAnimSlot__HITREACT_HitByBargeFromFront                                 = 18,
	EBBQCombatAnimSlot__HITREACT_HitByBargeFromRear                                  = 19,
	EBBQCombatAnimSlot__HITREACT_HitBySlamFromRear                                   = 20,
	EBBQCombatAnimSlot__INCAP_Down_Front_Melee                                       = 21,
	EBBQCombatAnimSlot__INCAP_Down_Front_Bleed_Stationary                            = 22,
	EBBQCombatAnimSlot__INCAP_Down_Front_Bleed_Moving                                = 23,
	EBBQCombatAnimSlot__INCAP_Down_Rear_Melee                                        = 24,
	EBBQCombatAnimSlot__INCAP_Down_Rear_Bleed_Stationary                             = 25,
	EBBQCombatAnimSlot__INCAP_Down_Rear_Bleed_Moving                                 = 26,
	EBBQCombatAnimSlot__INCAP_Down_Trap                                              = 27,
	EBBQCombatAnimSlot__INCAP_Down_Trap_Dying                                        = 28,
	EBBQCombatAnimSlot__INCAP_Down_Well                                              = 29,
	EBBQCombatAnimSlot__INCAP_CattleGrid_Front                                       = 30,
	EBBQCombatAnimSlot__INCAP_CattleGrid_Back                                        = 31,
	EBBQCombatAnimSlot__INCAP_Up_Front                                               = 32,
	EBBQCombatAnimSlot__INCAP_Up_Rear                                                = 33,
	EBBQCombatAnimSlot__INCAP_GatherStrength_Front                                   = 34,
	EBBQCombatAnimSlot__INCAP_BleedOutDying                                          = 35,
	EBBQCombatAnimSlot__INCAP_BleedOutDying_Back                                     = 36,
	EBBQCombatAnimSlot__INCAP_BleedOutDying_Ground                                   = 37,
	EBBQCombatAnimSlot__INCAP_BleedOutDying_Well                                     = 38,
	EBBQCombatAnimSlot__INCAP_Roll_Left                                              = 39,
	EBBQCombatAnimSlot__INCAP_Roll_Right                                             = 40,
	EBBQCombatAnimSlot__INCAP_GetUpForExecution                                      = 41,
	EBBQCombatAnimSlot__INCAP_GetUpForExecution_Leatherface                          = 42,
	EBBQCombatAnimSlot__INCAP_GetDownForExecution                                    = 43,
	EBBQCombatAnimSlot__GENERATOR_Grid_Death                                         = 44,
	EBBQCombatAnimSlot__MELEE_Melee1_Attack                                          = 45,
	EBBQCombatAnimSlot__MELEE_Melee2_Attack                                          = 46,
	EBBQCombatAnimSlot__MELEE_MeleeSequence                                          = 47,
	EBBQCombatAnimSlot__MELEE_MeleeSequence_1_Stationary                             = 48,
	EBBQCombatAnimSlot__MELEE_MeleeSequence50                                        = 49,
	EBBQCombatAnimSlot__MELEE_MeleeSequence_2_Stationary                             = 50,
	EBBQCombatAnimSlot__MELEE_MeleeTired                                             = 51,
	EBBQCombatAnimSlot__MELEE_MeleeTired_1_Stationary                                = 52,
	EBBQCombatAnimSlot__MELEE_MeleeTired54                                           = 53,
	EBBQCombatAnimSlot__MELEE_MeleeTired_2_Stationary                                = 54,
	EBBQCombatAnimSlot__MELEE_MeleeSequence_TempSlot1                                = 55,
	EBBQCombatAnimSlot__MELEE_MeleeSequence_TempSlot2                                = 56,
	EBBQCombatAnimSlot__MELEE_MeleeSequence_TempSlot3                                = 57,
	EBBQCombatAnimSlot__MELEE_MeleeSequence_TempSlot4                                = 58,
	EBBQCombatAnimSlot__MELEE_MeleeSequence_TempSlot5                                = 59,
	EBBQCombatAnimSlot__CHAINSAW_BoltholeThrust                                      = 60,
	EBBQCombatAnimSlot__CHAINSAW_SidleThrust                                         = 61,
	EBBQCombatAnimSlot__EXECUTION_Celebrate                                          = 62,
	EBBQCombatAnimSlot__SNEAKATTACK_Backstab                                         = 63,
	EBBQCombatAnimSlot__SNEAKATTACK_Backstab_Left                                    = 64,
	EBBQCombatAnimSlot__SNEAKATTACK_Backstab_Right                                   = 65,
	EBBQCombatAnimSlot__SNEAKATTACK_Backstab_Knife                                   = 66,
	EBBQCombatAnimSlot__SNEAKATTACK_Backstab_Knife_Left                              = 67,
	EBBQCombatAnimSlot__SNEAKATTACK_Backstab_Knife_Right                             = 68,
	EBBQCombatAnimSlot__SNEAKATTACK_Reaction                                         = 69,
	EBBQCombatAnimSlot__SNEAKATTACK_Reaction_Left                                    = 70,
	EBBQCombatAnimSlot__SNEAKATTACK_Reaction_Right                                   = 71,
	EBBQCombatAnimSlot__SNEAKATTACK_Reaction_Loop                                    = 72,
	EBBQCombatAnimSlot__SNEAKATTACK_Reaction_Left_Loop                               = 73,
	EBBQCombatAnimSlot__SNEAKATTACK_Reaction_Right_Loop                              = 74,
	EBBQCombatAnimSlot__SNEAKATTACK_Reaction_OutOf                                   = 75,
	EBBQCombatAnimSlot__SNEAKATTACK_Reaction_Left_OutOf                              = 76,
	EBBQCombatAnimSlot__SNEAKATTACK_Reaction_Right_OutOf                             = 77,
	EBBQCombatAnimSlot__ITEM_Wrench_Attack                                           = 78
};

/// Enum /Script/BBQCore.EBBQHidingSpotAnimSlot
/// Size: 0x01 (1 bytes)
enum class EBBQHidingSpotAnimSlot : uint8_t
{
	EBBQHidingSpotAnimSlot__INVALID                                                  = 0,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Enter                                = 1,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Leave                                = 2,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Burst                                = 3,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Search_Fail                          = 4,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Search_Success_SearchingCharacter    = 5,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Search_Success_HiddenCharacter       = 6,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Search_Success_HiddenCharacterLeatherface = 7,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Search_Success_HiddenCharacterNancy  = 8,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Grab_Entering                        = 9,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Grab_Leaving                         = 10,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Grabbed_Entering                     = 11,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Vertical_Grabbed_Leaving                      = 12,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Enter                              = 13,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Leave                              = 14,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Burst                              = 15,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Search_Fail                        = 16,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Search_Success_SearchingCharacter  = 17,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Search_Success_HiddenCharacter     = 18,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Search_Success_HiddenCharacterLeatherface = 19,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Search_Success_HiddenCharacterNancy = 20,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Grab_Entering                      = 21,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Grab_Leaving                       = 22,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Grabbed_Entering                   = 23,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Horizontal_Grabbed_Leaving                    = 24,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Enter                                     = 25,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_DriverSeat_Enter                          = 26,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Leave                                     = 27,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Burst                                     = 28,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Radio_Start                               = 29,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Radio_Finish                              = 30,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Search_Fail                               = 31,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Search_Success_SearchingCharacter         = 32,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Search_Success_HiddenCharacter            = 33,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Search_Success_HiddenCharacterLeatherface = 34,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Search_Success_HiddenCharacterNancy       = 35,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Grab_Entering                             = 36,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Grab_Leaving                              = 37,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Grabbed_Entering                          = 38,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Car_Grabbed_Leaving                           = 39,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Stagger_Back                                  = 40,
	EBBQHidingSpotAnimSlot__HIDINGSPOT_Stagger_Forward                               = 41
};

/// Enum /Script/BBQCore.EBBQPairedAnimSlot
/// Size: 0x01 (1 bytes)
enum class EBBQPairedAnimSlot : uint8_t
{
	EBBQPairedAnimSlot__INVALID                                                      = 0,
	EBBQPairedAnimSlot__CE_AttackWin                                                 = 1,
	EBBQPairedAnimSlot__CE_DefendWin                                                 = 2,
	EBBQPairedAnimSlot__CE_Loop                                                      = 3,
	EBBQPairedAnimSlot__CE_Loop_AttackerWinning                                      = 4,
	EBBQPairedAnimSlot__CE_Rescue                                                    = 5,
	EBBQPairedAnimSlot__CE_Start                                                     = 6,
	EBBQPairedAnimSlot__CE_Grandpa_SneakAttack_Left                                  = 7,
	EBBQPairedAnimSlot__CE_Grandpa_SneakAttack_Right                                 = 8,
	EBBQPairedAnimSlot__CE_Grandpa_SneakAttack_Behind                                = 9,
	EBBQPairedAnimSlot__Grandpa_FeedBloodLeft                                        = 10,
	EBBQPairedAnimSlot__Grandpa_FeedBloodRight                                       = 11,
	EBBQPairedAnimSlot__Healing_Other_Standing                                       = 12,
	EBBQPairedAnimSlot__Healing_Other_Standing14                                     = 13,
	EBBQPairedAnimSlot__Healing_Other_Ground                                         = 14
};

/// Enum /Script/BBQCore.EAkPoolPriority
/// Size: 0x01 (1 bytes)
enum class EAkPoolPriority : uint8_t
{
	EAkPoolPriority__Low                                                             = 0,
	EAkPoolPriority__Normal                                                          = 1,
	EAkPoolPriority__High                                                            = 2
};

/// Enum /Script/BBQCore.EAttributeVariableType
/// Size: 0x01 (1 bytes)
enum class EAttributeVariableType : uint8_t
{
	EAttributeVariableType__None                                                     = 0,
	EAttributeVariableType__Float                                                    = 1,
	EAttributeVariableType__Integer                                                  = 2,
	EAttributeVariableType__GASAttribute                                             = 3,
	EAttributeVariableType__GameplaySystemVariable                                   = 4
};

/// Enum /Script/BBQCore.EBlueprintHelperIsInEditorResult
/// Size: 0x01 (1 bytes)
enum class EBlueprintHelperIsInEditorResult : uint8_t
{
	EBlueprintHelperIsInEditorResult__InEditor                                       = 0,
	EBlueprintHelperIsInEditorResult__InGame                                         = 1
};

/// Enum /Script/BBQCore.EBBQAnimSlot_Ladder
/// Size: 0x01 (1 bytes)
enum class EBBQAnimSlot_Ladder : uint8_t
{
	EBBQAnimSlot_Ladder__INVALID                                                     = 0,
	EBBQAnimSlot_Ladder__LADDERS_Climb_Up                                            = 93,
	EBBQAnimSlot_Ladder__LADDERS_Climb_Down                                          = 94,
	EBBQAnimSlot_Ladder__LADDERS_Climb_Into_Bottom                                   = 95,
	EBBQAnimSlot_Ladder__LADDERS_Climb_Into_Top                                      = 96,
	EBBQAnimSlot_Ladder__LADDERS_Climb_OutOf_Bottom                                  = 97,
	EBBQAnimSlot_Ladder__LADDERS_Climb_OutOf_Top                                     = 98,
	EBBQAnimSlot_Ladder__LADDERS_Grabbing                                            = 99,
	EBBQAnimSlot_Ladder__LADDERS_Being_grabed                                        = 100,
	EBBQAnimSlot_Ladder__LADDERS_HitWhilstClimbing                                   = 101,
	EBBQAnimSlot_Ladder__LADDERS_LowDismount_Release                                 = 102,
	EBBQAnimSlot_Ladder__LADDERS_LowDismount_Fall                                    = 103,
	EBBQAnimSlot_Ladder__LADDERS_LowDismount_Land                                    = 104,
	EBBQAnimSlot_Ladder__LADDERS_HighDismount_Release                                = 105,
	EBBQAnimSlot_Ladder__LADDERS_HighDismount_Fall                                   = 106,
	EBBQAnimSlot_Ladder__LADDERS_HighDismount_Land                                   = 107
};

/// Enum /Script/BBQCore.EBBQOutfitProfile
/// Size: 0x01 (1 bytes)
enum class EBBQOutfitProfile : uint8_t
{
	EBBQOutfitProfile__NONE                                                          = 0,
	EBBQOutfitProfile__BASE                                                          = 1
};

/// Enum /Script/BBQCore.EBBQInputLayer
/// Size: 0x01 (1 bytes)
enum class EBBQInputLayer : uint8_t
{
	EBBQInputLayer__INVALID                                                          = 0,
	EBBQInputLayer__Global                                                           = 1,
	EBBQInputLayer__GenericCharacter                                                 = 2,
	EBBQInputLayer__TeamCharacter                                                    = 3,
	EBBQInputLayer__SpecificCharacter                                                = 4,
	EBBQInputLayer__HidingSpot                                                       = 5,
	EBBQInputLayer__Minigame                                                         = 6
};

/// Enum /Script/BBQCore.EBBQCustomMatchSettingPayloadType
/// Size: 0x04 (4 bytes)
enum class EBBQCustomMatchSettingPayloadType : uint32_t
{
	EBBQCustomMatchSettingPayloadType__Number                                        = 0,
	EBBQCustomMatchSettingPayloadType__Toggle                                        = 1
};

/// Enum /Script/BBQCore.EBBQCustomMatchSettingType
/// Size: 0x01 (1 bytes)
enum class EBBQCustomMatchSettingType : uint8_t
{
	EBBQCustomMatchSettingType__Common                                               = 1,
	EBBQCustomMatchSettingType__Attributes                                           = 2,
	EBBQCustomMatchSettingType__ALL                                                  = 3
};

/// Enum /Script/BBQCore.BaseEventCategory
/// Size: 0x01 (1 bytes)
enum class BaseEventCategory : uint8_t
{
	BaseEventCategory__NONE                                                          = 0,
	BaseEventCategory__XP_MULTIPLIER_EVENT                                           = 1,
	BaseEventCategory__PERK_XP_MULTIPLIER_EVENT                                      = 2,
	BaseEventCategory__GREATER_BLOOD_LOSS_EVENT                                      = 3
};

/// Enum /Script/BBQCore.UBBQGameModifierType
/// Size: 0x01 (1 bytes)
enum class UBBQGameModifierType : uint8_t
{
	UBBQGameModifierType__BooleanOverride                                            = 0,
	UBBQGameModifierType__BooleanOr                                                  = 1,
	UBBQGameModifierType__BooleanAnd                                                 = 2,
	UBBQGameModifierType__IntegerOverride                                            = 3,
	UBBQGameModifierType__IntegerAdd                                                 = 4,
	UBBQGameModifierType__FloatMulRoundToInt                                         = 5,
	UBBQGameModifierType__FloatMulFloorToInt                                         = 6,
	UBBQGameModifierType__FloatMulCeilToInt                                          = 7,
	UBBQGameModifierType__FloatOverride                                              = 8,
	UBBQGameModifierType__FloatAdd                                                   = 9,
	UBBQGameModifierType__FloatMul                                                   = 10,
	UBBQGameModifierType__EnumOverride                                               = 11
};

/// Enum /Script/BBQCore.EBBQAbilityInputID
/// Size: 0x01 (1 bytes)
enum class EBBQAbilityInputID : uint8_t
{
	EBBQAbilityInputID__None                                                         = 0,
	EBBQAbilityInputID__ConfirmTarget                                                = 1,
	EBBQAbilityInputID__CancelTarget                                                 = 2,
	EBBQAbilityInputID__PrimaryAbility                                               = 3,
	EBBQAbilityInputID__Interaction                                                  = 4,
	EBBQAbilityInputID__AltInteraction                                               = 5,
	EBBQAbilityInputID__SpecialInteraction                                           = 6,
	EBBQAbilityInputID__SharedAbility                                                = 7,
	EBBQAbilityInputID__StanceAction                                                 = 8,
	EBBQAbilityInputID__AttackInteraction                                            = 9,
	EBBQAbilityInputID__BloodLustAbility                                             = 10
};

/// Enum /Script/BBQCore.EBBQVariableBasedFloatCalculationType
/// Size: 0x01 (1 bytes)
enum class EBBQVariableBasedFloatCalculationType : uint8_t
{
	EBBQVariableBasedFloatCalculationType__BaseValue                                 = 0,
	EBBQVariableBasedFloatCalculationType__SourceActorModStack                       = 1,
	EBBQVariableBasedFloatCalculationType__TargetActorModStack                       = 2
};

/// Enum /Script/BBQCore.EHUDVisibilityOptions
/// Size: 0x01 (1 bytes)
enum class EHUDVisibilityOptions : uint8_t
{
	EHUDVisibilityOptions__Default                                                   = 0,
	EHUDVisibilityOptions__Minimal                                                   = 1,
	EHUDVisibilityOptions__Hidden                                                    = 2
};

/// Enum /Script/BBQCore.EMusicFlowState
/// Size: 0x01 (1 bytes)
enum class EMusicFlowState : uint8_t
{
	EMusicFlowState__Menu                                                            = 0,
	EMusicFlowState__MenuSecondary                                                   = 1,
	EMusicFlowState__Lobby                                                           = 2,
	EMusicFlowState__Loading                                                         = 3,
	EMusicFlowState__Game                                                            = 4,
	EMusicFlowState__GameOver                                                        = 5,
	EMusicFlowState__Spectator                                                       = 6,
	EMusicFlowState__PreMenu                                                         = 7,
	EMusicFlowState__Progression                                                     = 8,
	EMusicFlowState__Settings                                                        = 9,
	EMusicFlowState__Tutorials                                                       = 10,
	EMusicFlowState__Customisation                                                   = 11,
	EMusicFlowState__Credits                                                         = 12,
	EMusicFlowState__SawDance                                                        = 13,
	EMusicFlowState__Ignored                                                         = 14
};

/// Enum /Script/BBQCore.EBBQUnlockableArtType
/// Size: 0x01 (1 bytes)
enum class EBBQUnlockableArtType : uint8_t
{
	EBBQUnlockableArtType__None                                                      = 0,
	EBBQUnlockableArtType__GameDevelopmentImage                                      = 1,
	EBBQUnlockableArtType__GameDevelopmentMovie                                      = 2,
	EBBQUnlockableArtType__ConceptArt                                                = 3,
	EBBQUnlockableArtType__FilmDevelopmentImage                                      = 4,
	EBBQUnlockableArtType__FilmDevelopmentMovie                                      = 5
};

/// Enum /Script/BBQCore.EBBQUnlockCriteria
/// Size: 0x01 (1 bytes)
enum class EBBQUnlockCriteria : uint8_t
{
	EBBQUnlockCriteria__PlayerLevel                                                  = 1,
	EBBQUnlockCriteria__Purchasable                                                  = 2,
	EBBQUnlockCriteria__Debug                                                        = 4,
	EBBQUnlockCriteria__StatBased                                                    = 8,
	EBBQUnlockCriteria__AchievementBased                                             = 16,
	EBBQUnlockCriteria__CharacterFirstTime                                           = 32,
	EBBQUnlockCriteria__CharacterMultipleTimes                                       = 64,
	EBBQUnlockCriteria__INVALID                                                      = 128,
	EBBQUnlockCriteria__ALL                                                          = 127
};

/// Enum /Script/BBQCore.EBBQUtilCharacter
/// Size: 0x01 (1 bytes)
enum class EBBQUtilCharacter : uint8_t
{
	EBBQUtilCharacter__Leatherface                                                   = 0,
	EBBQUtilCharacter__Cook                                                          = 1,
	EBBQUtilCharacter__Hitchhiker                                                    = 2,
	EBBQUtilCharacter__Johnny                                                        = 3,
	EBBQUtilCharacter__Sissy                                                         = 4,
	EBBQUtilCharacter__Nancy                                                         = 5,
	EBBQUtilCharacter__Alpha                                                         = 6,
	EBBQUtilCharacter__Grandpa                                                       = 7,
	EBBQUtilCharacter__JohnnyMercury                                                 = 8,
	EBBQUtilCharacter__VictimMercury                                                 = 9,
	EBBQUtilCharacter__Connie                                                        = 10,
	EBBQUtilCharacter__Leland                                                        = 11,
	EBBQUtilCharacter__Julie                                                         = 12,
	EBBQUtilCharacter__Ana                                                           = 13,
	EBBQUtilCharacter__Sonny                                                         = 14,
	EBBQUtilCharacter__Danny                                                         = 15,
	EBBQUtilCharacter__Charlie                                                       = 16,
	EBBQUtilCharacter__Delta                                                         = 17,
	EBBQUtilCharacter__INVALID                                                       = 19,
	EBBQUtilCharacter__LAST_FAMILY                                                   = 7
};

/// Enum /Script/BBQCore.EConsoleGraphicsMode
/// Size: 0x01 (1 bytes)
enum class EConsoleGraphicsMode : uint8_t
{
	EConsoleGraphicsMode__Performance                                                = 0,
	EConsoleGraphicsMode__Fidelity                                                   = 1,
	EConsoleGraphicsMode__RayTracing                                                 = 2
};

/// Enum /Script/BBQCore.EVoiceChatIndicatorsPosition
/// Size: 0x01 (1 bytes)
enum class EVoiceChatIndicatorsPosition : uint8_t
{
	EVoiceChatIndicatorsPosition__Hidden                                             = 0,
	EVoiceChatIndicatorsPosition__TopLeft                                            = 1,
	EVoiceChatIndicatorsPosition__BottomRight                                        = 2,
	EVoiceChatIndicatorsPosition__Count                                              = 3
};

/// Enum /Script/BBQCore.EBBQAutoSaveData
/// Size: 0x01 (1 bytes)
enum class EBBQAutoSaveData : uint8_t
{
	EBBQAutoSaveData__LocalSave                                                      = 0,
	EBBQAutoSaveData__Loadouts                                                       = 1,
	EBBQAutoSaveData__Count                                                          = 2
};

/// Struct /Script/BBQCore.BBQGameModifier
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FBBQGameModifier
{ 
	TWeakObjectPtr<class UBBQGameModifierDefinitionAsset*> Definition;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	class UBBQGameModifierDefinitionAsset*             LoadedDefinition;                                           // 0x0028   (0x0008)  
	FName                                              ModifierName;                                               // 0x0030   (0x0008)  
	bool                                               CurrentBooleanValue;                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            CurrentIntegerValue;                                        // 0x003C   (0x0004)  
	float                                              CurrentFloatValue;                                          // 0x0040   (0x0004)  
	char                                               CurrentEnumValue;                                           // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/BBQCore.MatchFact
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FMatchFact
{ 
	int32_t                                            EventType;                                                  // 0x0000   (0x0004)  
	int32_t                                            TargetPlayerID;                                             // 0x0004   (0x0004)  
	int32_t                                            SourcePlayerID;                                             // 0x0008   (0x0004)  
};

/// Struct /Script/BBQCore.MatchResults
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMatchResults
{ 
	TArray<FMatchFact>                                 AllMatchEvents;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/BBQCore.BBQ_PartyIds
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQ_PartyIds
{ 
	TArray<FString>                                    PartyIds;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/BBQCore.BBQCustomMatchVariable
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBBQCustomMatchVariable
{ 
	FString                                            CustomKey;                                                  // 0x0000   (0x0010)  
	int32_t                                            Payload;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/BBQCore.BBQCustomMatchSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBBQCustomMatchSettings
{ 
	bool                                               bSingleTeamMode;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FBBQCustomMatchVariable>                    CustomVariables;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/BBQCore.BBQCharacterSwapInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FBBQCharacterSwapInfo
{ 
	class ABBQPlayerState*                             SwapPartner;                                                // 0x0000   (0x0008)  
	bool                                               bIsRequester;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FName                                              Character;                                                  // 0x000C   (0x0008)  
	FName                                              PartnerCharacter;                                           // 0x0014   (0x0008)  
	ECharacterRequestState                             RequestState;                                               // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/BBQCore.BBQAssignedPerkInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQAssignedPerkInfo
{ 
	class UClass*                                      perk;                                                       // 0x0000   (0x0008)  
	int32_t                                            PerkLevel;                                                  // 0x0008   (0x0004)  
	int32_t                                            PerkUISlot;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/BBQCore.BBQ_WantedCharacterInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBBQ_WantedCharacterInfo
{ 
	FString                                            WantedCharacter;                                            // 0x0000   (0x0010)  
	ETeamID                                            TeamId;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/BBQCore.BBQCharacterCosmeticsInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQCharacterCosmeticsInfo
{ 
	class UBBQCharacterOutfit*                         Outfit;                                                     // 0x0000   (0x0008)  
	class UBBQChainsawSkin*                            WeaponSkin;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/BBQCore.ActorInstanceID
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FActorInstanceID
{ 
	FText                                              ActorName;                                                  // 0x0000   (0x0018)  
	int32_t                                            ActorInstanceID;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/BBQCore.AkPoolItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkPoolItem
{ 
	class UAkComponent*                                AkComp;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/BBQCore.BBQMultiPosAmbienceData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBBQMultiPosAmbienceData
{ 
	class UAkComponent*                                AkComponent;                                                // 0x0000   (0x0008)  
	TArray<class ABBQAmbientSound*>                    Positions;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/BBQCore.BBQConnectedRooms
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQConnectedRooms
{ 
	TArray<class UAkRoomComponent*>                    Rooms;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/BBQCore.AttributeVariable
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAttributeVariable
{ 
	FName                                              AttributeName;                                              // 0x0000   (0x0008)  
	EAttributeVariableType                             VariableType;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/BBQCore.IntVariable
/// Size: 0x0010 (16 bytes) (0x00000C - 0x000010) align 4 MaxSize: 0x0010
struct FIntVariable : FAttributeVariable
{ 
	int32_t                                            Value;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/BBQCore.IntRange
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FIntRange
{ 
	int32_t                                            RangeMin;                                                   // 0x0000   (0x0004)  
	int32_t                                            RangeMax;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/BBQCore.GASAttribute
/// Size: 0x0048 (72 bytes) (0x00000C - 0x000048) align 8 MaxSize: 0x0048
struct FGASAttribute : FAttributeVariable
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	FGameplayAttribute                                 LinkedAttribute;                                            // 0x0010   (0x0038)  
};

/// Struct /Script/BBQCore.GameplaySysVariable
/// Size: 0x0060 (96 bytes) (0x00000C - 0x000060) align 8 MaxSize: 0x0060
struct FGameplaySysVariable : FAttributeVariable
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	FGameplayVariable                                  LinkedProperty;                                             // 0x0010   (0x0050)  
};

/// Struct /Script/BBQCore.BaseCoreStats
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FBaseCoreStats
{ 
	TArray<FGASAttribute>                              CharacterStats;                                             // 0x0000   (0x0010)  
	TArray<FGameplaySysVariable>                       GameplayVariables;                                          // 0x0010   (0x0010)  
};

/// Struct /Script/BBQCore.GASAttributeModifier
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGASAttributeModifier
{ 
	FGameplayAttribute                                 LinkedProperty;                                             // 0x0000   (0x0038)  
	float                                              Value;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/BBQCore.CoreStatLevelModifier
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FCoreStatLevelModifier
{ 
	TArray<FGASAttributeModifier>                      CharacterStatModifier;                                      // 0x0000   (0x0010)  
	class UClass*                                      PositiveGASModifier;                                        // 0x0010   (0x0008)  
	class UClass*                                      NegativeGASModifier;                                        // 0x0018   (0x0008)  
	class UGameplayVariableMod*                        PositiveGameplayModifier;                                   // 0x0020   (0x0008)  
	class UGameplayVariableMod*                        NegativeGameplayModifier;                                   // 0x0028   (0x0008)  
};

/// Struct /Script/BBQCore.ScalableCoreStatLevelModifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FScalableCoreStatLevelModifier
{ 
	class UClass*                                      GameplayEffectModifier;                                     // 0x0000   (0x0008)  
	class UGameplayVariableMod*                        GameplayVariableModifier;                                   // 0x0008   (0x0008)  
};

/// Struct /Script/BBQCore.AttributeLocalData
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FAttributeLocalData
{ 
	FText                                              Title;                                                      // 0x0000   (0x0018)  
	FText                                              Description;                                                // 0x0018   (0x0018)  
	FIntRange                                          AllowedLevelRange;                                          // 0x0030   (0x0008)  
	int32_t                                            PointsPerLevel;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FBaseCoreStats                                     AttributeRelationship;                                      // 0x0040   (0x0020)  
	bool                                               bUsePerLevelCoreStatMods;                                   // 0x0060   (0x0001)  
	bool                                               bUseScalableCoreStatMods;                                   // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0062   (0x0006)  MISSED
	FCoreStatLevelModifier                             UniformCoreStatModifier;                                    // 0x0068   (0x0030)  
	FScalableCoreStatLevelModifier                     ScalableCoreStatModifier;                                   // 0x0098   (0x0010)  
	TMap<int32_t, FCoreStatLevelModifier>              PerLevelCoreStatModifier;                                   // 0x00A8   (0x0050)  
};

/// Struct /Script/BBQCore.OutfitMaterialData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FOutfitMaterialData
{ 
	SDK_UNDEFINED(80,414) /* TMap<FName, TWeakObjectPtr<UMaterialInterface*>> */ __um(OutfitMaterials);            // 0x0000   (0x0050)  
	bool                                               bCanFallbackOnBase;                                         // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/BBQCore.LinkedOutfitData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLinkedOutfitData
{ 
	class UPlayerSetupDataAsset*                       Character;                                                  // 0x0000   (0x0008)  
	class UBBQCharacterOutfit*                         Outfit;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/BBQCore.BBQActionKeyMapping
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FBBQActionKeyMapping
{ 
	class UInputAction*                                Action;                                                     // 0x0000   (0x0008)  
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
	bool                                               bNegative;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/BBQCore.BBQActionKeyMappings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQActionKeyMappings
{ 
	TArray<FBBQActionKeyMapping>                       Mappings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/BBQCore.BBQControlPresetPreferences
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FBBQControlPresetPreferences
{ 
	int32_t                                            KeyboardPresetIndexVictims;                                 // 0x0000   (0x0004)  
	bool                                               bUsingRebindKeyboardPresetVictims;                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            KeyboardPresetIndexFamily;                                  // 0x0008   (0x0004)  
	bool                                               bUsingRebindKeyboardPresetFamily;                           // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            KeyboardPresetIndexLeatherface;                             // 0x0010   (0x0004)  
	bool                                               bUsingRebindKeyboardPresetLeatherface;                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            GamepadPresetIndexVictims;                                  // 0x0018   (0x0004)  
	bool                                               bUsingRebindGamepadPresetVictims;                           // 0x001C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	int32_t                                            GamepadPresetIndexFamily;                                   // 0x0020   (0x0004)  
	bool                                               bUsingRebindGamepadPresetFamily;                            // 0x0024   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	int32_t                                            GamepadPresetIndexLeatherface;                              // 0x0028   (0x0004)  
	bool                                               bUsingRebindGamepadPresetLeatherface;                       // 0x002C   (0x0001)  
	unsigned char                                      UnknownData05_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/BBQCore.BBQEventData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FBBQEventData
{ 
	FString                                            EventName;                                                  // 0x0000   (0x0010)  
	FString                                            PropertyNameOverride;                                       // 0x0010   (0x0010)  
	float                                              DebugEventValue;                                            // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/BBQCore.BBQEventContainer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FBBQEventContainer
{ 
	FString                                            GlobalPropertyName;                                         // 0x0000   (0x0010)  
	TArray<FBBQEventData>                              EventDataList;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/BBQCore.BBQBaseAttributeLevelModifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FBBQBaseAttributeLevelModifier
{ 
	FName                                              BaseAttributeName;                                          // 0x0000   (0x0008)  
	int32_t                                            LevelIncrease;                                              // 0x0008   (0x0004)  
	bool                                               bApplyOnActivate;                                           // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/BBQCore.BBQGameplayAbilityInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FBBQGameplayAbilityInfo
{ 
	class UClass*                                      GameplayAbilityClass;                                       // 0x0000   (0x0008)  
};

/// Struct /Script/BBQCore.BBQBackingGameplayVariable
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FBBQBackingGameplayVariable
{ 
	FGameplayVariable                                  Variable;                                                   // 0x0000   (0x0050)  
	bool                                               bCaptureFromTarget;                                         // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/BBQCore.BBQVariableBasedFloat
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FBBQVariableBasedFloat
{ 
	FScalableFloat                                     Coefficient;                                                // 0x0000   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0028   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0050   (0x0028)  
	FGameplayVariable                                  BackingVariable;                                            // 0x0078   (0x0050)  
	EBBQVariableBasedFloatCalculationType              VariableCalculationType;                                    // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Struct /Script/BBQCore.BBQVariableBasedModifierInfo
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FBBQVariableBasedModifierInfo
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FBBQVariableBasedFloat                             Magnitude;                                                  // 0x0040   (0x00D0)  
};

/// Struct /Script/BBQCore.AttributePointDistribution
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAttributePointDistribution
{ 
	int32_t                                            RemainingAttributePoints;                                   // 0x0000   (0x0004)  
	int32_t                                            MaxAttributePoints;                                         // 0x0004   (0x0004)  
	TArray<FIntVariable>                               AttributeLevelOffsets;                                      // 0x0008   (0x0010)  
};

/// Struct /Script/BBQCore.AppliedLevelMod
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAppliedLevelMod
{ 
	FName                                              AttributeName;                                              // 0x0000   (0x0008)  
	int32_t                                            LevelIncrease;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/BBQCore.BBQMapData
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FBBQMapData
{ 
	FString                                            MapName;                                                    // 0x0000   (0x0010)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
	EBBQTimeOfDay                                      TimeOfDay;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  PreviewTexture;                                             // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  MainTexture;                                                // 0x0058   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0060   (0x0020)  MISSED
	class UAkSwitchValue*                              LobbyMusicSwitchValue;                                      // 0x0080   (0x0008)  
	class UDataTable*                                  AssetsToPreload;                                            // 0x0088   (0x0008)  
	bool                                               ShowInCustomLobby;                                          // 0x0090   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/BBQCore.MusicFlowInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMusicFlowInfo
{ 
	FString                                            SwitchName;                                                 // 0x0000   (0x0010)  
	class UAkStateValue*                               AudioState;                                                 // 0x0010   (0x0008)  
};

/// Struct /Script/BBQCore.MusicPlayerStateList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMusicPlayerStateList
{ 
	TArray<FString>                                    States;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/BBQCore.PerkLevelModifier
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FPerkLevelModifier
{ 
	FName                                              ID;                                                         // 0x0000   (0x0008)  
	FText                                              DescriptionShort;                                           // 0x0008   (0x0018)  
	FText                                              DescriptionFull;                                            // 0x0020   (0x0018)  
	TMap<FString, FText>                               ArgumentAndAssociatedValueTextMap;                          // 0x0038   (0x0050)  
	FText                                              OverrideText;                                               // 0x0088   (0x0018)  
	bool                                               bUseExactValuesFromModifiers;                               // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	int32_t                                            PositionInLevelOfAbilityTree;                               // 0x00A4   (0x0004)  
	FGameplayTagContainer                              GrantedTags;                                                // 0x00A8   (0x0020)  
	TArray<class UClass*>                              Abilities;                                                  // 0x00C8   (0x0010)  
	TArray<class UClass*>                              Effects;                                                    // 0x00D8   (0x0010)  
	TArray<class UGameplayVariableMod*>                GameplayVariableMods;                                       // 0x00E8   (0x0010)  
	TArray<FBBQBaseAttributeLevelModifier>             BaseAttributeLevelMods;                                     // 0x00F8   (0x0010)  
};

/// Struct /Script/BBQCore.PerkLevelData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPerkLevelData
{ 
	TArray<FPerkLevelModifier>                         LevelModifiers;                                             // 0x0000   (0x0010)  
	int32_t                                            LevelUpPointsRequired;                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/BBQCore.ModifierIdContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FModifierIdContainer
{ 
	TArray<FName>                                      ModifierIds;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/BBQCore.BBQPlayerPrefsRaw
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQPlayerPrefsRaw
{ 
	FString                                            WantedCharacter;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/BBQCore.CharacterInitialLoadout
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCharacterInitialLoadout
{ 
	TArray<class UClass*>                              Perks;                                                      // 0x0000   (0x0010)  
	class UClass*                                      StarSignPerk;                                               // 0x0010   (0x0008)  
	class UClass*                                      MottoPerk;                                                  // 0x0018   (0x0008)  
	class UClass*                                      FamilyAbilityPerk;                                          // 0x0020   (0x0008)  
};

/// Struct /Script/BBQCore.PlayerSetup
/// Size: 0x0588 (1416 bytes) (0x000000 - 0x000588) align 8 MaxSize: 0x0588
struct FPlayerSetup
{ 
	uint32_t                                           CharacterResourceID;                                        // 0x0000   (0x0004)  
	FName                                              CharacterName;                                              // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Description;                                                // 0x0010   (0x0010)  
	TSoftObjectPtr<class UClass*>                      PlayableCharacterClass;                                     // 0x0020   (0x0028)  
	TSoftObjectPtr<class UClass*>                      LevelIntroImposterClass;                                    // 0x0048   (0x0028)  
	ETeamID                                            TeamId;                                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	FGameplayTag                                       Gender;                                                     // 0x0074   (0x0008)  
	bool                                               AvailableToUseMainMenu;                                     // 0x007C   (0x0001)  
	bool                                               bCanBeAutoAssigned;                                         // 0x007D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x007E   (0x0002)  MISSED
	FGameplayVariableFloat                             ProximityRadiusVar;                                         // 0x0080   (0x0058)  
	FGameplayVariableFloat                             StartingNumberOfHealthChunksVar;                            // 0x00D8   (0x0058)  
	FGameplayVariableFloat                             ValueOfEachHealthChunkVar;                                  // 0x0130   (0x0058)  
	bool                                               bAlwaysUseMaxHealth;                                        // 0x0188   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0189   (0x0003)  MISSED
	float                                              StartingHeartRate;                                          // 0x018C   (0x0004)  
	float                                              MinHeartRate;                                               // 0x0190   (0x0004)  
	float                                              MaxHeartRate;                                               // 0x0194   (0x0004)  
	bool                                               bUseChunkedStamina;                                         // 0x0198   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0199   (0x0007)  MISSED
	FGameplayVariableFloat                             InitStaminaVar;                                             // 0x01A0   (0x0058)  
	FGameplayVariableFloat                             MaxStaminaVar;                                              // 0x01F8   (0x0058)  
	FGameplayVariableFloat                             TotalStaminaChunks;                                         // 0x0250   (0x0058)  
	FGameplayVariableFloat                             StartingStaminaChunks;                                      // 0x02A8   (0x0058)  
	FGameplayVariableFloat                             StaminaPerChunk;                                            // 0x0300   (0x0058)  
	FGameplayVariableFloat                             StaminaChainingRangeMin;                                    // 0x0358   (0x0058)  
	FGameplayVariableFloat                             StaminaChainingRangeMax;                                    // 0x03B0   (0x0058)  
	FGameplayVariableFloat                             SprintStaminaConsumptionRateVar;                            // 0x0408   (0x0058)  
	float                                              InitWillToLive;                                             // 0x0460   (0x0004)  
	float                                              WillToLiveMax;                                              // 0x0464   (0x0004)  
	float                                              WillToLiveMin;                                              // 0x0468   (0x0004)  
	int32_t                                            MaxNumberOfPerks;                                           // 0x046C   (0x0004)  
	int32_t                                            MaxNumberOfStarSignPerks;                                   // 0x0470   (0x0004)  
	int32_t                                            MaxNumberOfFamilyMottoPerks;                                // 0x0474   (0x0004)  
	int32_t                                            MaxNumberOfAbilityPerks;                                    // 0x0478   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x047C   (0x0004)  MISSED
	TArray<class UPlayerSetupPerkSet*>                 PerkSets;                                                   // 0x0480   (0x0010)  
	FCharacterInitialLoadout                           InitialLoadout;                                             // 0x0490   (0x0028)  
	class UBBQBasePlayerAttributeAsset*                BasePlayerAttributes;                                       // 0x04B8   (0x0008)  
	TArray<class UBBQEquippableExecutionData*>         AvailableOnSpotExecutions;                                  // 0x04C0   (0x0010)  
	TArray<class UBBQEquippableExecutionData*>         AvailableHarvestExecutions;                                 // 0x04D0   (0x0010)  
	class UBBQCharacterCosmeticsData*                  CharacterCosmeticsData;                                     // 0x04E0   (0x0008)  
	class UBBQCharacterOutfit*                         CharacterSkinOverride;                                      // 0x04E8   (0x0008)  
	class UBBQChainsawSkinData*                        WeaponSkins;                                                // 0x04F0   (0x0008)  
	FText                                              DisplayName;                                                // 0x04F8   (0x0018)  
	FText                                              CharacterDescription;                                       // 0x0510   (0x0018)  
	TWeakObjectPtr<class UTexture2D*>                  CharacterImage;                                             // 0x0528   (0x0008)  
	unsigned char                                      UnknownData06_6[0x20];                                      // 0x0530   (0x0020)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  CharacterSelectImage;                                       // 0x0550   (0x0008)  
	unsigned char                                      UnknownData07_6[0x20];                                      // 0x0558   (0x0020)  MISSED
	FName                                              UnlockUID;                                                  // 0x0578   (0x0008)  
	bool                                               ShowCharacterCyclePromptOnMenu;                             // 0x0580   (0x0001)  
	bool                                               HideCharacterExperienceAndLevelOnMenu;                      // 0x0581   (0x0001)  
	bool                                               IsMercuryModeCharacter;                                     // 0x0582   (0x0001)  
	unsigned char                                      UnknownData08_7[0x5];                                       // 0x0583   (0x0005)  MISSED
};

/// Struct /Script/BBQCore.PlayerSingleStat
/// Size: 0x0018 (24 bytes) (0x00000C - 0x000018) align 4 MaxSize: 0x0018
struct FPlayerSingleStat : FFastArraySerializerItem
{ 
	EPlayerStatType                                    StatType;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            StatValue;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/BBQCore.StatArray
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
struct FStatArray : FFastArraySerializer
{ 
	TArray<FPlayerSingleStat>                          Items;                                                      // 0x0108   (0x0010)  
};

/// Struct /Script/BBQCore.StatOperation
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FStatOperation
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/BBQCore.BBQUnlockableStatus
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FBBQUnlockableStatus
{ 
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0000   (0x0003)  MISSED
};

/// Struct /Script/BBQCore.BBQUnlockTreeGridPosition
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FBBQUnlockTreeGridPosition
{ 
	int32_t                                            Row;                                                        // 0x0000   (0x0004)  
	int32_t                                            Column;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/BBQCore.BBQUnlockTreeRevealedPositions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQUnlockTreeRevealedPositions
{ 
	TArray<FBBQUnlockTreeGridPosition>                 RevealedPositions;                                          // 0x0000   (0x0010)  
};

/// Struct /Script/BBQCore.BBQLoadoutData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FBBQLoadoutData
{ 
	FName                                              Exec;                                                       // 0x0000   (0x0008)  
	TArray<FName>                                      perk;                                                       // 0x0008   (0x0010)  
	TArray<int32_t>                                    Slot;                                                       // 0x0018   (0x0010)  
	int32_t                                            Index;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<int32_t>                                    attr;                                                       // 0x0030   (0x0010)  
	int32_t                                            CompatibilityVersion;                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/BBQCore.LinkedStatProgress
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FLinkedStatProgress
{ 
	EPlayerStatType                                    Stat;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            TargetProgress;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/BBQCore.BBQTutorialSubtitleEntry
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FBBQTutorialSubtitleEntry
{ 
	float                                              StartTimeSeconds;                                           // 0x0000   (0x0004)  
	float                                              EndTimeSeconds;                                             // 0x0004   (0x0004)  
	FText                                              Text;                                                       // 0x0008   (0x0018)  
	TMap<FString, FBBQActionKeyMapping>                ActionsForIconDisplayInText;                                // 0x0020   (0x0050)  
};

/// Struct /Script/BBQCore.BBQTutorialDefinition
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FBBQTutorialDefinition : FTableRowBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FName                                              LinkedCharacterName;                                        // 0x0010   (0x0008)  
	FText                                              Title;                                                      // 0x0018   (0x0018)  
	FText                                              SecondTitle;                                                // 0x0030   (0x0018)  
	FText                                              Description;                                                // 0x0048   (0x0018)  
	ETutorialTeam                                      Team;                                                       // 0x0060   (0x0004)  
	bool                                               bIsLeatherfaceTutorial;                                     // 0x0064   (0x0001)  
	bool                                               bIsUnlocked;                                                // 0x0065   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0066   (0x0002)  MISSED
	FName                                              UnlockableUID;                                              // 0x0068   (0x0008)  
	TWeakObjectPtr<class UTexture2D*>                  Thumbnail;                                                  // 0x0070   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0078   (0x0020)  MISSED
	TArray<FBBQTutorialSubtitleEntry>                  Subtitles;                                                  // 0x0098   (0x0010)  
	TWeakObjectPtr<class UFileMediaSource*>            Video;                                                      // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x00B0   (0x0020)  MISSED
};

/// Struct /Script/BBQCore.GameplayTagBPDelegateHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FGameplayTagBPDelegateHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/BBQCore.BBQAchievementDataRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FBBQAchievementDataRow : FTableRowBase
{ 
	FString                                            AchievementName;                                            // 0x0008   (0x0010)  
	TArray<FLinkedStatProgress>                        RequiredStatsProgress;                                      // 0x0018   (0x0010)  
	class UClass*                                      UnlockCondition;                                            // 0x0028   (0x0008)  
	int32_t                                            TargetAccumulatedValue;                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/BBQCore.FloatVariable
/// Size: 0x0010 (16 bytes) (0x00000C - 0x000010) align 4 MaxSize: 0x0010
struct FFloatVariable : FAttributeVariable
{ 
	float                                              Value;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/BBQCore.BBQCustomMatchSettingDefinition
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FBBQCustomMatchSettingDefinition : FTableRowBase
{ 
	FName                                              CustomKey;                                                  // 0x0008   (0x0008)  
	EBBQCustomMatchSettingType                         SettingType;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	EBBQCustomMatchSettingPayloadType                  PayloadType;                                                // 0x0014   (0x0004)  
	int32_t                                            MinNumber;                                                  // 0x0018   (0x0004)  
	int32_t                                            MaxNumber;                                                  // 0x001C   (0x0004)  
	int32_t                                            DefaultNumber;                                              // 0x0020   (0x0004)  
	bool                                               DefaultToggle;                                              // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FName                                              AttributeName;                                              // 0x0028   (0x0008)  
};

/// Struct /Script/BBQCore.ValueSelector
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FValueSelector
{ 
	FGameplayEffectAttributeCaptureDefinition          AttributeValue;                                             // 0x0000   (0x0040)  
	FBBQBackingGameplayVariable                        BackingGameplayVarValue;                                    // 0x0040   (0x0058)  
	float                                              Value;                                                      // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/BBQCore.BBQGameplayTagListener
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQGameplayTagListener
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/BBQCore.BBQInputActionRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQInputActionRow : FTableRowBase
{ 
	class UInputAction*                                InputAction;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/BBQCore.BBQLoadoutDataArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQLoadoutDataArray
{ 
	TArray<FBBQLoadoutData>                            Loadouts;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/BBQCore.BBQLoadoutDataCollection
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FBBQLoadoutDataCollection
{ 
	TMap<FName, FBBQLoadoutDataArray>                  Characters;                                                 // 0x0000   (0x0050)  
};

/// Struct /Script/BBQCore.BBQCharacterLevelData
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQCharacterLevelData : FTableRowBase
{ 
	int32_t                                            DevelopmentPoints;                                          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/BBQCore.BBQMetaGamePerkData
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
struct FBBQMetaGamePerkData : FBBQMetaGamePerkBaseData
{ 
	class UClass*                                      perk;                                                       // 0x0030   (0x0008)  
};

/// Struct /Script/BBQCore.BBQMetaRef
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBBQMetaRef
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            Ref1;                                                       // 0x0010   (0x0004)  
	int32_t                                            Ref2;                                                       // 0x0014   (0x0004)  
};

/// Struct /Script/BBQCore.BBQLoadoutApplicationData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FBBQLoadoutApplicationData
{ 
	TArray<FBBQAssignedPerkInfo>                       Perks;                                                      // 0x0000   (0x0010)  
	class UClass*                                      StarSignPerk;                                               // 0x0010   (0x0008)  
	class UClass*                                      FamilyMottoPerk;                                            // 0x0018   (0x0008)  
	int32_t                                            LoadoutIndex;                                               // 0x0020   (0x0004)  
	FName                                              OnSpotExecutionType;                                        // 0x0024   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FAttributePointDistribution                        AttributePointDistribution;                                 // 0x0030   (0x0018)  
};

/// Struct /Script/BBQCore.SavedExecution
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSavedExecution
{ 
	FName                                              CharacterName;                                              // 0x0000   (0x0008)  
	ETeamID                                            TeamId;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FName>                                      PerformedExecutions;                                        // 0x0010   (0x0010)  
};

/// Struct /Script/BBQCore.DataAssetToPreload
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FDataAssetToPreload : FTableRowBase
{ 
	TWeakObjectPtr<class UObject*>                     DataAsset;                                                  // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Struct /Script/BBQCore.BBQUnlockableBaseData
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FBBQUnlockableBaseData : FTableRowBase
{ 
	FName                                              UnlockUID;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/BBQCore.BBQUnlockableArtData
/// Size: 0x00C8 (200 bytes) (0x000010 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FBBQUnlockableArtData : FBBQUnlockableBaseData
{ 
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
	FText                                              DescriptionTitle;                                           // 0x0028   (0x0018)  
	FText                                              ShortDescription;                                           // 0x0040   (0x0018)  
	FText                                              FullDescription;                                            // 0x0058   (0x0018)  
	EBBQUnlockableArtType                              UnlockableType;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  PreviewTexture;                                             // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0080   (0x0020)  MISSED
	TWeakObjectPtr<class UObject*>                     MediaItem;                                                  // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x00A8   (0x0020)  MISSED
};

/// Struct /Script/BBQCore.BBQUnlockableExecutionData
/// Size: 0x0058 (88 bytes) (0x000010 - 0x000058) align 8 MaxSize: 0x0058
struct FBBQUnlockableExecutionData : FBBQUnlockableBaseData
{ 
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
	TWeakObjectPtr<class UTexture2D*>                  PreviewTexture;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	FName                                              ExecutionDataName;                                          // 0x0050   (0x0008)  
};

/// Struct /Script/BBQCore.BBQUnlockConditions
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FBBQUnlockConditions : FTableRowBase
{ 
	EBBQUnlockCriteria                                 UnlockCriteria;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<EPlayerStatType>                            StatRequirements;                                           // 0x0010   (0x0010)  
	FText                                              UnlockConditions;                                           // 0x0020   (0x0018)  
};

/// Struct /Script/BBQCore.BBQUnlockableDefinition
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FBBQUnlockableDefinition : FTableRowBase
{ 
	FName                                              UnlockUID;                                                  // 0x0008   (0x0008)  
	EBBQUnlockCriteria                                 UnlockCriteria;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            PlayerLevel;                                                // 0x0014   (0x0004)  
	bool                                               bDebugUnlocked;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<FLinkedStatProgress>                        UnlockRequirements;                                         // 0x0020   (0x0010)  
	FDataTableRowHandle                                Achievement;                                                // 0x0030   (0x0010)  
	EBBQUtilCharacter                                  Character;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            NumberOfGames;                                              // 0x0044   (0x0004)  
};

/// Struct /Script/BBQCore.BBQUnlockableWeaponData
/// Size: 0x0028 (40 bytes) (0x000010 - 0x000028) align 8 MaxSize: 0x0028
struct FBBQUnlockableWeaponData : FBBQUnlockableBaseData
{ 
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/BBQCore.BBQURLResourceOption
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FBBQURLResourceOption
{ 
	TArray<FString>                                    WantedCharacters;                                           // 0x0000   (0x0010)  
	TArray<uint32_t>                                   WantedOutfits;                                              // 0x0010   (0x0010)  
	class UBBQGameInstance*                            GameInstance;                                               // 0x0020   (0x0008)  
	TArray<FSoftObjectPath>                            AssetsToLoad;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/BBQCore.ScreenLogCategory
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FScreenLogCategory
{ 
	bool                                               bIsEnabled;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              CategoryName;                                               // 0x0004   (0x0008)  
};

/// Class /Script/BBQCore.BBQGameplayAbility
/// Size: 0x04F0 (1264 bytes) (0x0003B0 - 0x0004F0) align 8 MaxSize: 0x04F0
class UBBQGameplayAbility : public UGameplayAbility
{ 
public:
	int32_t                                            DefaultLevel;                                               // 0x03B0   (0x0004)  
	EBBQAbilityInputID                                 ActivationInputID;                                          // 0x03B4   (0x0001)  
	EBBQAbilityInputID                                 SecondaryInputID;                                           // 0x03B5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x03B6   (0x0002)  MISSED
	class UTexture*                                    AbilityIcon;                                                // 0x03B8   (0x0008)  
	FString                                            AbilityName;                                                // 0x03C0   (0x0010)  
	FDataTableRowHandle                                FamilyBondActivityRow;                                      // 0x03D0   (0x0010)  
	FDataTableRowHandle                                ActivityEvent;                                              // 0x03E0   (0x0010)  
	FGameplayTag                                       AbilityBlockedFailureReasonTag;                             // 0x03F0   (0x0008)  
	TMap<FGameplayTag, FDataTableRowHandle>            FailureMessages;                                            // 0x03F8   (0x0050)  
	TMap<FGameplayTag, class UAkAudioEvent*>           AbilityFailAudioEvents;                                     // 0x0448   (0x0050)  
	class UAkAudioEvent*                               AudioEventWhenFailed;                                       // 0x0498   (0x0008)  
	class UAkAudioEvent*                               AudioEventWhenActivated;                                    // 0x04A0   (0x0008)  
	class UAkAudioEvent*                               AudioEventWhenEnded;                                        // 0x04A8   (0x0008)  
	EBBQAnimSlot                                       AnimSlotWhenActivated;                                      // 0x04B0   (0x0001)  
	bool                                               bListenInterruptTagChanges;                                 // 0x04B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x04B2   (0x0006)  MISSED
	FGameplayTagContainer                              InterruptTags;                                              // 0x04B8   (0x0020)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x04D8   (0x0010)  MISSED
	bool                                               bEndIfActivationTagsRemoved;                                // 0x04E8   (0x0001)  
	bool                                               bSendPrimaryAbilityActivated;                               // 0x04E9   (0x0001)  
	bool                                               bSendPrimaryAbilityFailed;                                  // 0x04EA   (0x0001)  
	unsigned char                                      UnknownData03_7[0x5];                                       // 0x04EB   (0x0005)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQGameplayAbility.MakeGameplayCueParametersFromCurrentSpec
	FGameplayCueParameters MakeGameplayCueParametersFromCurrentSpec() // [0x207ff20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayCueParameters (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameplayAbility.GetTotalCooldownTime
	float GetTotalCooldownTime() // [0x207fe50] Final|Native|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameplayAbility.GetCooldownDurationAndRemainingTime
	void GetCooldownDurationAndRemainingTime(UAbilitySystemComponent* AbilityComp, float& Duration, float& RemainingTime) // [0x207f9a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UAbilitySystemComponent*, float&, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(AbilityComp, Duration, RemainingTime);
	}
	// Function /Script/BBQCore.BBQGameplayAbility.GetAbilityName
	FString GetAbilityName() // [0x207f3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameplayAbility.GetAbilityIcon
	UTexture* GetAbilityIcon() // [0x1fadde0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UTexture* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameplayAbility.BP_RemoveGameplayTag
	void BP_RemoveGameplayTag(FGameplayTag Tag) // [0x207f270] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Tag);
	}
	// Function /Script/BBQCore.BBQGameplayAbility.BP_OnRemoveAbility
	void BP_OnRemoveAbility(FGameplayAbilityActorInfo& ActorInfo, FGameplayAbilitySpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayAbilityActorInfo&, FGameplayAbilitySpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(ActorInfo, Spec);
	}
	// Function /Script/BBQCore.BBQGameplayAbility.BP_OnGiveAbility
	void BP_OnGiveAbility(FGameplayAbilityActorInfo& ActorInfo, FGameplayAbilitySpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayAbilityActorInfo&, FGameplayAbilitySpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(ActorInfo, Spec);
	}
	// Function /Script/BBQCore.BBQGameplayAbility.BP_AddGameplayTag
	void BP_AddGameplayTag(FGameplayTag Tag) // [0x207ee00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Tag);
	}
};

/// Class /Script/BBQCore.BBQBaseAttributeSet
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UBBQBaseAttributeSet : public UAttributeSet
{ 
public:
	class UDataTable*                                  CurrentDataTable;                                           // 0x0030   (0x0008)  
};

/// Class /Script/BBQCore.BBQGameplayModMagnitudeCalc
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBBQGameplayModMagnitudeCalc : public UGameplayModMagnitudeCalculation
{ 
public:


	/// Functions
	// Function /Script/BBQCore.BBQGameplayModMagnitudeCalc.GetInstigatorActor
	AActor* GetInstigatorActor(FGameplayEffectSpec& Spec) // [0x207fbd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class AActor* (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
	// Function /Script/BBQCore.BBQGameplayModMagnitudeCalc.GetImmediateInstigator
	AActor* GetImmediateInstigator(FGameplayEffectSpec& Spec) // [0x207fac0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class AActor* (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Spec);
	}
	// Function /Script/BBQCore.BBQGameplayModMagnitudeCalc.BP_GetValueSelectorMagnitude
	float BP_GetValueSelectorMagnitude(FValueSelector ValueSelector, FGameplayEffectSpec Spec) // [0x207f090] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)(FValueSelector, FGameplayEffectSpec);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(ValueSelector, Spec);
	}
	// Function /Script/BBQCore.BBQGameplayModMagnitudeCalc.BP_GetCapturedAttributeMagnitude
	bool BP_GetCapturedAttributeMagnitude(FGameplayEffectAttributeCaptureDefinition Def, FGameplayEffectSpec Spec, float& Magnitude) // [0x207ee90] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayEffectAttributeCaptureDefinition, FGameplayEffectSpec, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Def, Spec, Magnitude);
	}
};

/// Class /Script/BBQCore.BBQCoreCheatManager
/// Size: 0x00E0 (224 bytes) (0x000088 - 0x0000E0) align 8 MaxSize: 0x00E0
class UBBQCoreCheatManager : public UCheatManager
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0088   (0x0058)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQCoreCheatManager.UnpurchaseUnlock
	void UnpurchaseUnlock(FName UnlockID) // [0x1e14270] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(UnlockID);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.UnlockTreeItem
	void UnlockTreeItem(FString TreeId, FString SlotId, FString ItemId) // [0x2072330] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(TreeId, SlotId, ItemId);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.UnlockAllUnlockables
	void UnlockAllUnlockables(bool bUnlock) // [0x1e13bc0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(bUnlock);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.UnlockAllCharacters
	void UnlockAllCharacters(bool bUnlock) // [0x1e13bc0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(bUnlock);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.SkipDisabledUnlocks
	void SkipDisabledUnlocks(bool bSkip) // [0x1e13bc0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(bSkip);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.RevealAllUnlockTreeNodes
	void RevealAllUnlockTreeNodes(bool bShowAll) // [0x1e13bc0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(bShowAll);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetVisitedWeapons
	void ResetVisitedWeapons() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetVisitedOutfits
	void ResetVisitedOutfits() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetVisitedExecutions
	void ResetVisitedExecutions() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetVisitedCharacters
	void ResetVisitedCharacters() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetVisitedAll
	void ResetVisitedAll() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetUnlockTreeRevealed
	void ResetUnlockTreeRevealed(FName CharacterName) // [0x1e14270] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(CharacterName);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetUnlockTree
	void ResetUnlockTree(FName CharacterName) // [0x1e14270] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(CharacterName);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetPlayerStats
	void ResetPlayerStats() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetMetaGameData
	void ResetMetaGameData() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetCompletedTutorials
	void ResetCompletedTutorials() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetAllUnlockTrees
	void ResetAllUnlockTrees() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetAllUnlockTreeRevealed
	void ResetAllUnlockTreeRevealed() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetAllLoadouts
	void ResetAllLoadouts() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ResetAchievements
	void ResetAchievements() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.RemoveEvent
	void RemoveEvent(FName EventName) // [0x1e14270] Final|Exec|Native|Protected 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func(EventName);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.RefreshMetaGameData
	void RefreshMetaGameData() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.PurchaseUnlock
	void PurchaseUnlock(FName UnlockID) // [0x1e14270] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		func(UnlockID);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.PurchasableContentDebugMode
	void PurchasableContentDebugMode(bool bInDebugMode) // [0x1e13bc0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		func(bInDebugMode);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.PrintAllPurchasableUnlockables
	void PrintAllPurchasableUnlockables() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.IncreaseTotalMatches
	void IncreaseTotalMatches() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.GetInitialPerks
	void GetInitialPerks() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.ForceLoginPlayfab
	void ForceLoginPlayfab() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		func();
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.EnableDebugEvents
	void EnableDebugEvents(bool bSet) // [0x1e13bc0] Final|Exec|Native|Protected 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		func(bSet);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.AddXp
	void AddXp(int32_t Amount) // [0x1e138c0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func(Amount);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.AddPerksXp
	void AddPerksXp(int32_t Amount) // [0x1e138c0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func(Amount);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.AddEvent
	void AddEvent(FName EventName) // [0x1e14270] Final|Exec|Native|Protected 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func(EventName);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.AddDp
	void AddDp(int32_t Amount) // [0x1e138c0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func(Amount);
	}
	// Function /Script/BBQCore.BBQCoreCheatManager.AddCurrency
	void AddCurrency(int32_t Amount, FName Currency) // [0x20714b0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		func(Amount, Currency);
	}
};

/// Class /Script/BBQCore.BBQBaseCharacter
/// Size: 0x05F0 (1520 bytes) (0x0004B8 - 0x0005F0) align 16 MaxSize: 0x05F0
class ABBQBaseCharacter : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x04B8   (0x0020)  MISSED
	class UBBQAttributeSet*                            AttributeSet;                                               // 0x04D8   (0x0008)  
	class UBBQAbilitySystemComponent*                  AbilitySystemComponent;                                     // 0x04E0   (0x0008)  
	FGameplayTag                                       CrouchedTag;                                                // 0x04E8   (0x0008)  
	FGameplayTag                                       IncapacitatedTag;                                           // 0x04F0   (0x0008)  
	FGameplayTag                                       VictimHasEscapedTag;                                        // 0x04F8   (0x0008)  
	FGameplayTag                                       VictimHasSurvivedTag;                                       // 0x0500   (0x0008)  
	FGameplayTag                                       DeadTag;                                                    // 0x0508   (0x0008)  
	FGameplayTag                                       WalkingTag;                                                 // 0x0510   (0x0008)  
	FGameplayTag                                       RunningTag;                                                 // 0x0518   (0x0008)  
	FGameplayTag                                       SprintingTag;                                               // 0x0520   (0x0008)  
	FGameplayTag                                       MeleeImmunityTag;                                           // 0x0528   (0x0008)  
	FGameplayTag                                       BackstabbedTag;                                             // 0x0530   (0x0008)  
	class UClass*                                      IncapacitatedEffectClass;                                   // 0x0538   (0x0008)  
	class UClass*                                      DeadEffectClass;                                            // 0x0540   (0x0008)  
	class UClass*                                      VictimEscapedEffectClass;                                   // 0x0548   (0x0008)  
	TArray<FString>                                    FootstepAudioEvents;                                        // 0x0550   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0560   (0x0010)  MISSED
	FGameplayTag                                       Gender;                                                     // 0x0570   (0x0008)  
	class UBBQGameplayAbilitySet*                      CommonAbilitySet;                                           // 0x0578   (0x0008)  
	class UBBQGameplayAbilitySet*                      TeamAbilitySet;                                             // 0x0580   (0x0008)  
	TArray<class UClass*>                              StartingAbilities;                                          // 0x0588   (0x0010)  
	TArray<class UClass*>                              StartingEffects;                                            // 0x0598   (0x0010)  
	ETeamID                                            DefaultTeamID;                                              // 0x05A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x05A9   (0x0007)  MISSED
	TArray<class UBBQPerk*>                            AssignedPerks;                                              // 0x05B0   (0x0010)  
	class UBBQPerk*                                    StarSignPerk;                                               // 0x05C0   (0x0008)  
	TArray<class UBBQPerk*>                            BonusPerks;                                                 // 0x05C8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x05D8   (0x0008)  MISSED
	TArray<class UBBQFamilyMottoPerk*>                 FamilyMottoPerks;                                           // 0x05E0   (0x0010)  


	/// Functions
	// Function /Script/BBQCore.BBQBaseCharacter.TryCancelAbilitiesWithTag
	void TryCancelAbilitiesWithTag(FGameplayTag& WantedTag) // [0x2069af0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(WantedTag);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.TryCancelAbilitiesWithAnyTag
	void TryCancelAbilitiesWithAnyTag(FGameplayTagContainer& CancelTags) // [0x2069a30] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(CancelTags);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.SetGameplayTag
	void SetGameplayTag(FGameplayTag Tag, int32_t Stacks) // [0x2069960] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Tag, Stacks);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.RemoveGameplayTag_Netcast
	void RemoveGameplayTag_Netcast(FGameplayTag Tag) // [0x2069840] Net|NetReliableNative|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Tag);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.RemoveGameplayTag
	void RemoveGameplayTag(FGameplayTag& Tag) // [0x20697b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Tag);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnVictimHasEscapedTagChange
	void OnVictimHasEscapedTagChange(FGameplayTag Tag, int32_t Count) // [0x2069330] Native|Public        
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Tag, Count);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnTraversalTagChange
	void OnTraversalTagChange(FGameplayTag Tag, int32_t Count) // [0x2069260] Native|Public        
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Tag, Count);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnStrugglingTagChange
	void OnStrugglingTagChange(FGameplayTag Tag, int32_t Count) // [0x2069190] Native|Public        
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Tag, Count);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnRemoveGameplayEffectCallback
	void OnRemoveGameplayEffectCallback(FActiveGameplayEffect& EffectRemoved) // [0x2068720] Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FActiveGameplayEffect&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(EffectRemoved);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnPlayerStateSet
	void OnPlayerStateSet(APlayerState* NewPlayerState) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(APlayerState*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(NewPlayerState);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnMovementTagChange
	void OnMovementTagChange(FGameplayTag Tag, int32_t Count) // [0x2068650] Native|Public        
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(Tag, Count);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnIncapacitatedTagChange
	void OnIncapacitatedTagChange(FGameplayTag Tag, int32_t Count) // [0x2068580] Native|Public        
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(Tag, Count);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnDeadTagChange
	void OnDeadTagChange(FGameplayTag Tag, int32_t Count) // [0x20684b0] Native|Public        
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(Tag, Count);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnAnyBBQTagChange
	void OnAnyBBQTagChange(FGameplayTag Tag, int32_t Count) // [0x20683e0] Native|Public        
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(Tag, Count);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnActiveGameplayEffectAddedCallback
	void OnActiveGameplayEffectAddedCallback(UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle) // [0x2068280] Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(UAbilitySystemComponent*, FGameplayEffectSpec&, FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(Target, SpecApplied, ActiveHandle);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.OnAbilityCommittedCallback
	void OnAbilityCommittedCallback(UGameplayAbility* Committed) // [0x20681f0] Native|Public        
	{
		typedef void (*FuncPtr)(UGameplayAbility*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(Committed);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.NetMulticast_OnKilled
	void NetMulticast_OnKilled(ABBQBaseCharacter* Killer) // [0x2068160] Net|NetReliableNative|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(Killer);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.Kill
	void Kill() // [0x2067ed0] Native|Public        
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.IsVictim
	bool IsVictim() // [0x2067ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.IsMale
	bool IsMale() // [0x2067e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.IsLeatherface
	bool IsLeatherface() // [0x2067d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.IsJohnny
	bool IsJohnny() // [0x2067cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.IsIncapacitated
	bool IsIncapacitated() // [0x2067ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.IsFemale
	bool IsFemale() // [0x2067c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.IsFamily
	bool IsFamily() // [0x2067c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.IsDead
	bool IsDead() // [0x2067bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.InvalidateHUD
	void InvalidateHUD(EHUDArea HUDArea) // [0x2438a30] Event|Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(EHUDArea);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		func(HUDArea);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.IncrementGameplayTag
	void IncrementGameplayTag(FGameplayTag& Tag, int32_t Stacks) // [0x2067b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		func(Tag, Stacks);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.Incapacitate
	void Incapacitate() // [0x2067b00] Native|Public        
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.HasTag
	bool HasTag(FGameplayTag Tag) // [0x2067a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		return func(Tag);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.HasMatchingGameplayTag
	bool HasMatchingGameplayTag(FGameplayTag TagToCheck) // [0x20679c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func(TagToCheck);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.HasAnyTags
	bool HasAnyTags(FGameplayTagContainer TagList) // [0x20678d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func(TagList);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.HasAnyMatchingGameplayTags
	bool HasAnyMatchingGameplayTags(FGameplayTagContainer& TagContainer) // [0x2067800] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func(TagContainer);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.HasAllTags
	bool HasAllTags(FGameplayTagContainer TagList) // [0x2067710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func(TagList);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.HasAllMatchingGameplayTags
	bool HasAllMatchingGameplayTags(FGameplayTagContainer& TagContainer) // [0x2067640] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		return func(TagContainer);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.HasActivatableAbilityWithTag
	bool HasActivatableAbilityWithTag(FGameplayTag& WantedTag) // [0x20675a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTag&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		return func(WantedTag);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.HasActivatableAbility
	bool HasActivatableAbility(UGameplayAbility* AbilityIn) // [0x2067500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(UGameplayAbility*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func(AbilityIn);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetWillToLiveMax
	float GetWillToLiveMax() // [0x20674d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetWillToLive
	float GetWillToLive() // [0x20674a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetTeamID
	ETeamID GetTeamID() // [0x2067470] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef ETeamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetTagCount
	int32_t GetTagCount(FGameplayTag Tag) // [0x20673d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		return func(Tag);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetStaminaAsPct
	float GetStaminaAsPct() // [0x20673a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetSpeedMultiplier
	float GetSpeedMultiplier() // [0x2067370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetOwnedGameplayTags
	void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) // [0x20672b0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		func(TagContainer);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetNumberOfFullChunks
	int32_t GetNumberOfFullChunks() // [0x2067280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetNumberOfChunks
	float GetNumberOfChunks() // [0x2067250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetMouseSpeedModifier
	float GetMouseSpeedModifier() // [0x2067220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[46]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetMeleeAttackMultiplier
	float GetMeleeAttackMultiplier() // [0x20671f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[47]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetMaxHealth
	float GetMaxHealth() // [0x20671c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[48]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetMaxFamilyBondLevel
	float GetMaxFamilyBondLevel() // [0x2067190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetHeartRateAsPct
	float GetHeartRateAsPct() // [0x2067160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetHeartRate
	float GetHeartRate() // [0x2067130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetHealth
	float GetHealth() // [0x2067100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetFamilyBondLevel
	float GetFamilyBondLevel() // [0x20670d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[53]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetDebugName
	FString GetDebugName() // [0x2067050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetAkComponent
	UAkComponent* GetAkComponent() // [0x2066ee0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UAkComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[55]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.GetAbilitySystemComponent
	UAbilitySystemComponent* GetAbilitySystemComponent() // [0x2066ea0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UAbilitySystemComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.ForceInstantUncrouch
	void ForceInstantUncrouch() // [0x2066e80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.Debug_GetOwnedGameplayTags
	FString Debug_GetOwnedGameplayTags() // [0x2066c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.Debug_GetActivatableAbilities
	FString Debug_GetActivatableAbilities() // [0x2066bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		return func();
	}
	// Function /Script/BBQCore.BBQBaseCharacter.BP_OnRemoveGameplayEffectCallback
	void BP_OnRemoveGameplayEffectCallback(FActiveGameplayEffect& EffectRemoved) // [0x2438a30] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FActiveGameplayEffect&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[60]);
		func(EffectRemoved);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.BP_OnMovementTagChange
	void BP_OnMovementTagChange(FGameplayTag Tag, int32_t Count) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[61]);
		func(Tag, Count);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.BP_OnKilled
	void BP_OnKilled(ABBQBaseCharacter* Killer) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[62]);
		func(Killer);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.BP_OnIncapacitatedChange
	void BP_OnIncapacitatedChange(bool bIsIncapacitated) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[63]);
		func(bIsIncapacitated);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.BP_OnAnyBBQTagChange
	void BP_OnAnyBBQTagChange(FGameplayTagContainer MyTags) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[64]);
		func(MyTags);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.BP_OnActiveGameplayEffectAddedCallback
	void BP_OnActiveGameplayEffectAddedCallback(UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle) // [0x2438a30] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(UAbilitySystemComponent*, FGameplayEffectSpec&, FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[65]);
		func(Target, SpecApplied, ActiveHandle);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.BP_OnAbilityCommittedCallback
	void BP_OnAbilityCommittedCallback(UGameplayAbility* Committed) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(UGameplayAbility*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[66]);
		func(Committed);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.BP_Client_OnHealthChanged
	void BP_Client_OnHealthChanged(float OldHealth, float NewHealth) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[67]);
		func(OldHealth, NewHealth);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.AddGameplayTag_Netcast
	void AddGameplayTag_Netcast(FGameplayTag Tag) // [0x20668c0] Net|NetReliableNative|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[68]);
		func(Tag);
	}
	// Function /Script/BBQCore.BBQBaseCharacter.AddGameplayTag
	void AddGameplayTag(FGameplayTag& Tag) // [0x2066830] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[69]);
		func(Tag);
	}
};

/// Class /Script/BBQCore.BBQGameMode
/// Size: 0x03B0 (944 bytes) (0x000310 - 0x0003B0) align 8 MaxSize: 0x03B0
class ABBQGameMode : public AGAMEMODE
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0310   (0x0008)  MISSED
	TArray<class UBBQGameModifierDefinitionAsset*>     DefaultGameModifiers;                                       // 0x0318   (0x0010)  
	unsigned char                                      UnknownData01_7[0x88];                                      // 0x0328   (0x0088)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQGameMode.OnPlayerKilled
	void OnPlayerKilled(ABBQBaseCharacter* DeadPlayer, ABBQBaseCharacter* KilledBy) // [0x2080300] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*, ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(DeadPlayer, KilledBy);
	}
	// Function /Script/BBQCore.BBQGameMode.OnPlayerIncapacitated
	void OnPlayerIncapacitated(ABBQBaseCharacter* IncapPlayer) // [0x2080270] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(IncapPlayer);
	}
	// Function /Script/BBQCore.BBQGameMode.OnPlayerExecuteBegin
	void OnPlayerExecuteBegin(ABBQBaseCharacter* Victim, ABBQBaseCharacter* KilledBy) // [0x20801a0] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*, ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Victim, KilledBy);
	}
	// Function /Script/BBQCore.BBQGameMode.DEBUG_GetServerGameStateAsString
	FString DEBUG_GetServerGameStateAsString() // [0x207f320] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameMode.BP_OnPlayerKilled
	void BP_OnPlayerKilled(ABBQBaseCharacter* DeadPlayer, ABBQBaseCharacter* KilledBy) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*, ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(DeadPlayer, KilledBy);
	}
	// Function /Script/BBQCore.BBQGameMode.BP_OnPlayerIncapacitated
	void BP_OnPlayerIncapacitated(ABBQBaseCharacter* IncapPlayer) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(IncapPlayer);
	}
	// Function /Script/BBQCore.BBQGameMode.BP_OnPlayerExecuteBegin
	void BP_OnPlayerExecuteBegin(ABBQBaseCharacter* Victim, ABBQBaseCharacter* KilledBy) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*, ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Victim, KilledBy);
	}
};

/// Class /Script/BBQCore.BBQGameState
/// Size: 0x05D0 (1488 bytes) (0x000298 - 0x0005D0) align 8 MaxSize: 0x05D0
class ABBQGameState : public AGameState
{ 
public:
	bool                                               bIsInPointOfNoReturnMercury;                                // 0x0298   (0x0001)  
	bool                                               bFreezeTimerUntilCap;                                       // 0x0299   (0x0001)  
	unsigned char                                      UnknownData00_6[0x66];                                      // 0x029A   (0x0066)  MISSED
	SDK_UNDEFINED(16,415) /* FMulticastInlineDelegate */ __um(PlayerHasReachedExitDelegate);                       // 0x0300   (0x0010)  
	SDK_UNDEFINED(16,416) /* FMulticastInlineDelegate */ __um(PlayerHasBeenKilledDelegate);                        // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,417) /* FMulticastInlineDelegate */ __um(OnCountdownCompleteDelegate);                        // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,418) /* FMulticastInlineDelegate */ __um(OnRequestedMapChanged);                              // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,419) /* FMulticastInlineDelegate */ __um(OnRequestedModeChanged);                             // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,420) /* FMulticastInlineDelegate */ __um(OnRequestedTimeOfDayChanged);                        // 0x0350   (0x0010)  
	TWeakObjectPtr<class UAkAudioEvent*>               PerkUseAudioEvent;                                          // 0x0360   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0368   (0x0020)  MISSED
	TWeakObjectPtr<class UAkAudioEvent*>               PerkDeactivateAudioEvent;                                   // 0x0388   (0x0008)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x0390   (0x0038)  MISSED
	float                                              MercuryCountdown;                                           // 0x03C8   (0x0004)  
	bool                                               MercuryPhoneCalled;                                         // 0x03CC   (0x0001)  
	bool                                               MercuryRadioCalled;                                         // 0x03CD   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x03CE   (0x0002)  MISSED
	float                                              LobbyInProgressCountdown;                                   // 0x03D0   (0x0004)  
	float                                              LobbyStartingCountdown;                                     // 0x03D4   (0x0004)  
	float                                              Default_Countdown_Duration;                                 // 0x03D8   (0x0004)  
	float                                              Default_BackfillCountdown_Duration;                         // 0x03DC   (0x0004)  
	float                                              Default_MajorityCountdown_Duration;                         // 0x03E0   (0x0004)  
	int32_t                                            Default_Player_Majority;                                    // 0x03E4   (0x0004)  
	float                                              Default_PublicMatch_StartingCooldown_Duration;              // 0x03E8   (0x0004)  
	float                                              Default_PointOfNoReturn_Duration;                           // 0x03EC   (0x0004)  
	float                                              Default_PublicMatch_ResetTimePlayerLeft;                    // 0x03F0   (0x0004)  
	float                                              Default_PublicMatch_ResetTimePlayerJoined;                  // 0x03F4   (0x0004)  
	float                                              Default_PublicMatch_KickDelay;                              // 0x03F8   (0x0004)  
	float                                              Default_PublicMatch_ShutdownDelay;                          // 0x03FC   (0x0004)  
	int32_t                                            Default_PublicMatch_MinPlayers;                             // 0x0400   (0x0004)  
	float                                              Default_Backfill_Duration;                                  // 0x0404   (0x0004)  
	float                                              Default_CustomMatch_StartingCooldown_Duration;              // 0x0408   (0x0004)  
	float                                              Default_CustomMatch_TimePlayerLeft;                         // 0x040C   (0x0004)  
	float                                              Default_CustomMatch_TimePlayerJoined;                       // 0x0410   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0414   (0x0004)  MISSED
	FString                                            WantedMap;                                                  // 0x0418   (0x0010)  
	int32_t                                            WantedMapIndex;                                             // 0x0428   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x042C   (0x0004)  MISSED
	class UClass*                                      WantedMode;                                                 // 0x0430   (0x0008)  
	EBBQTimeOfDay                                      WantedTimeOfDay;                                            // 0x0438   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0439   (0x0003)  MISSED
	int32_t                                            NumPlayersRequiredInLobbyForTimerStart;                     // 0x043C   (0x0004)  
	int32_t                                            Mercury_NumPlayersRequiredInLobbyForTimerStart;             // 0x0440   (0x0004)  
	int32_t                                            Mercury_NumPlayersRequiredInLobbyForTimerToShorten;         // 0x0444   (0x0004)  
	int32_t                                            Mercury_NumPlayersMax;                                      // 0x0448   (0x0004)  
	float                                              Mercury_InvalidTimer;                                       // 0x044C   (0x0004)  
	float                                              Mercury_TimerStart;                                         // 0x0450   (0x0004)  
	int32_t                                            Mercury_TimerShorten;                                       // 0x0454   (0x0004)  
	int32_t                                            Mercury_TimerPONR;                                          // 0x0458   (0x0004)  
	bool                                               bIsMercuryMode;                                             // 0x045C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x045D   (0x0003)  MISSED
	TArray<FBBQGameModifier>                           GameModifiers;                                              // 0x0460   (0x0010)  
	bool                                               bLoadingModifiers;                                          // 0x0470   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x0471   (0x0007)  MISSED
	TMap<FName, FBBQGameModifier>                      CacheGameModifierMap;                                       // 0x0478   (0x0050)  
	float                                              ForceReadyBufferTimeForReadyAnimation;                      // 0x04C8   (0x0004)  
	bool                                               bIsInPointOfNoReturn;                                       // 0x04CC   (0x0001)  
	bool                                               bTravelingToMatch;                                          // 0x04CD   (0x0001)  
	unsigned char                                      UnknownData09_6[0x2];                                       // 0x04CE   (0x0002)  MISSED
	FName                                              CombinedVictimHealthRtpcName;                               // 0x04D0   (0x0008)  
	FString                                            DEBUG_ServerGameState;                                      // 0x04D8   (0x0010)  
	FMatchResults                                      LastMatchResults;                                           // 0x04E8   (0x0010)  
	TArray<class UClass*>                              AssignedFamilyMottoPerks;                                   // 0x04F8   (0x0010)  
	uint32_t                                           ServerHostId;                                               // 0x0508   (0x0004)  
	unsigned char                                      UnknownData10_6[0x4];                                       // 0x050C   (0x0004)  MISSED
	TArray<FBBQ_PartyIds>                              PartiesMembersIds;                                          // 0x0510   (0x0010)  
	unsigned char                                      UnknownData11_6[0x20];                                      // 0x0520   (0x0020)  MISSED
	class UMaterialParameterCollectionInstance*        FoliageInteractionParameters;                               // 0x0540   (0x0008)  
	unsigned char                                      UnknownData12_6[0x70];                                      // 0x0548   (0x0070)  MISSED
	FBBQCustomMatchSettings                            CustomMatchSettings;                                        // 0x05B8   (0x0018)  


	/// Functions
	// Function /Script/BBQCore.BBQGameState.SetupMercuryRoles
	void SetupMercuryRoles() // [0x2080790] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.SetMercuryRadioCalled
	void SetMercuryRadioCalled() // [0x2080770] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.SetMercuryPhoneCalled
	void SetMercuryPhoneCalled() // [0x2080750] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.SetMercuryCountdown
	void SetMercuryCountdown() // [0x2080730] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.Server_RefreshParties
	void Server_RefreshParties() // [0x2080710] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.ResetReadyState
	void ResetReadyState() // [0x20806f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.RemoveMottoPerkFromAllFamilyAndVictimClients
	void RemoveMottoPerkFromAllFamilyAndVictimClients(UClass* MottoPerk, ABBQPlayerState* AssignedBy) // [0x2080620] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UClass*, ABBQPlayerState*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(MottoPerk, AssignedBy);
	}
	// Function /Script/BBQCore.BBQGameState.OnSessionTypeChanged
	void OnSessionTypeChanged(EOnlineSessionTypeBBQ Type) // [0x20805a0] Final|Native|Private 
	{
		typedef void (*FuncPtr)(EOnlineSessionTypeBBQ);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Type);
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_WantedTimeOfDay
	void OnRep_WantedTimeOfDay() // [0x2080580] Native|Protected     
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_WantedMode
	void OnRep_WantedMode() // [0x2080560] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_WantedMapIndex
	void OnRep_WantedMapIndex() // [0x2080540] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_WantedMap
	void OnRep_WantedMap() // [0x2080520] Native|Protected     
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_TravelingToMatch
	void OnRep_TravelingToMatch(bool bPrevValue) // [0x2080490] Final|Native|Protected 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(bPrevValue);
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_SetBBQServerGameState
	void OnRep_SetBBQServerGameState() // [0x2080470] Native|Protected     
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_ServerHostId
	void OnRep_ServerHostId() // [0xb888e0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_PointOfNoReturn
	void OnRep_PointOfNoReturn() // [0x2080450] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_PartiesMembersIds
	void OnRep_PartiesMembersIds() // [0x2080430] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_MercuryCountdown
	void OnRep_MercuryCountdown() // [0xb888e0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_MatchResults
	void OnRep_MatchResults() // [0xb888e0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_LobbyCountdown
	void OnRep_LobbyCountdown() // [0x2080410] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_GameModifiers
	void OnRep_GameModifiers() // [0x20803f0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_CustomMatchSettings
	void OnRep_CustomMatchSettings() // [0xb888e0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnRep_AssignedFamilyMottoPerks
	void OnRep_AssignedFamilyMottoPerks() // [0x20803d0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.OnModifiersLoaded
	void OnModifiersLoaded() // [0x2080180] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.MercuryLobbyTimerTicker
	void MercuryLobbyTimerTicker(float DeltaSeconds) // [0x2080100] Final|Native|Protected 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		func(DeltaSeconds);
	}
	// Function /Script/BBQCore.BBQGameState.IsReadyLocked
	bool IsReadyLocked() // [0x207fef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameState.IsPointOfNoReturn
	bool IsPointOfNoReturn() // [0x207feb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameState.IsFinalCountdown
	bool IsFinalCountdown() // [0x207fe80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameState.GetMercuryRadioCalled
	bool GetMercuryRadioCalled() // [0x207fe30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameState.GetMercuryPhoneCalled
	bool GetMercuryPhoneCalled() // [0x207fe10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameState.GetMercuryCountdown
	float GetMercuryCountdown() // [0x207fdf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameState.GetLobbyQuickCountdownDuration
	float GetLobbyQuickCountdownDuration() // [0x207fdc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameState.GetLobbyCountdownDuration
	float GetLobbyCountdownDuration() // [0x207fda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameState.GetLobbyCountdown
	float GetLobbyCountdown() // [0x207fd80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameState.GetJohnnyPlayerNumFromWeightedRandomizer
	int32_t GetJohnnyPlayerNumFromWeightedRandomizer(int32_t TotalPlayers) // [0x207fce0] Final|Native|Protected|Const 
	{
		typedef int32_t (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		return func(TotalPlayers);
	}
	// Function /Script/BBQCore.BBQGameState.GetAllPlayerStates
	// void GetAllPlayerStates(ETeamID TeamId, TArray<ABBQPlayerState*>& OutPlayerStates);                                      // [0x207f460] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BBQCore.BBQGameState.ClientPartyReform
	void ClientPartyReform() // [0x207f300] Net|NetReliableNative|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		func();
	}
	// Function /Script/BBQCore.BBQGameState.AssignMottoCategoryBonusPerk
	void AssignMottoCategoryBonusPerk(UClass* BonusPerk) // [0x207ed70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		func(BonusPerk);
	}
	// Function /Script/BBQCore.BBQGameState.AssignMercuryPlayersRoles
	void AssignMercuryPlayersRoles(int32_t PlayerPickedJohnny, int32_t TotalPlayers) // [0x207eca0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)(int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		func(PlayerPickedJohnny, TotalPlayers);
	}
	// Function /Script/BBQCore.BBQGameState.ArePlayersReady
	bool ArePlayersReady() // [0x207ec70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameState.AddMottoPerkToAllFamilyClients
	void AddMottoPerkToAllFamilyClients(UClass* MottoPerk, ABBQPlayerState* AssignedBy) // [0x207e760] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UClass*, ABBQPlayerState*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		func(MottoPerk, AssignedBy);
	}
};

/// Class /Script/BBQCore.BBQPlayerState
/// Size: 0x0BB0 (2992 bytes) (0x000328 - 0x000BB0) align 8 MaxSize: 0x0BB0
class ABBQPlayerState : public APlayerState
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0328   (0x0050)  MISSED
	SDK_UNDEFINED(16,421) /* FMulticastInlineDelegate */ __um(OnEscaped);                                          // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,422) /* FMulticastInlineDelegate */ __um(OnSurvived);                                         // 0x0388   (0x0010)  
	SDK_UNDEFINED(16,423) /* FMulticastInlineDelegate */ __um(OnBBQFamilyMottoPerkChanged);                        // 0x0398   (0x0010)  
	SDK_UNDEFINED(16,424) /* FMulticastInlineDelegate */ __um(OnBBQFamilyMottoBonusApplied);                       // 0x03A8   (0x0010)  
	SDK_UNDEFINED(16,425) /* FMulticastInlineDelegate */ __um(OnDead);                                             // 0x03B8   (0x0010)  
	SDK_UNDEFINED(16,426) /* FMulticastInlineDelegate */ __um(OnOnSpotExecutionChanged);                           // 0x03C8   (0x0010)  
	SDK_UNDEFINED(16,427) /* FMulticastInlineDelegate */ __um(OnLoadoutIndexChanged);                              // 0x03D8   (0x0010)  
	SDK_UNDEFINED(16,428) /* FMulticastInlineDelegate */ __um(OnMetaDataChanged);                                  // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x90];                                      // 0x03F8   (0x0090)  MISSED
	class UBBQLoadoutComponent*                        LoadoutComponent;                                           // 0x0488   (0x0008)  
	class UBBQPlayerStatComponent*                     PlayerStatComponent;                                        // 0x0490   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC0];                                      // 0x0498   (0x00C0)  MISSED
	FBBQCharacterSwapInfo                              CharacterSwapInfo;                                          // 0x0558   (0x0020)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x0578   (0x0030)  MISSED
	class UBBQAchievementsComponent*                   AchievementComponent;                                       // 0x05A8   (0x0008)  
	class UGameplayVariableModStackComponent*          GameplayVariableModStackComponent;                          // 0x05B0   (0x0008)  
	TArray<class UClass*>                              AssignedPerks;                                              // 0x05B8   (0x0010)  
	FBBQAssignedPerkInfo                               AssignedStarSignPerkInfo;                                   // 0x05C8   (0x0010)  
	TArray<class UClass*>                              FamilyMottoAssignedPerks;                                   // 0x05D8   (0x0010)  
	TArray<class UClass*>                              FamilyMottoLocallyAssignedPerks;                            // 0x05E8   (0x0010)  
	class UClass*                                      MottoCategoryBonusPerk;                                     // 0x05F8   (0x0008)  
	TArray<FBBQAssignedPerkInfo>                       AssignedPerksInfo;                                          // 0x0600   (0x0010)  
	int32_t                                            OnSpotExecutionIndex;                                       // 0x0610   (0x0004)  
	int32_t                                            LoadoutIndex;                                               // 0x0614   (0x0004)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0618   (0x0008)  MISSED
	TMap<EMottoPerkCategory, int32_t>                  CurrentlyAssignedMottoPerksCount;                           // 0x0620   (0x0050)  
	int32_t                                            ExperienceLevelMax;                                         // 0x0670   (0x0004)  
	int32_t                                            ExperienceLevelIntermediate;                                // 0x0674   (0x0004)  
	int32_t                                            ExperienceLevelExpert;                                      // 0x0678   (0x0004)  
	int32_t                                            MMMatchBeginnerNum;                                         // 0x067C   (0x0004)  
	int32_t                                            MMMatchHistoryNum;                                          // 0x0680   (0x0004)  
	int32_t                                            MMLevelModKill;                                             // 0x0684   (0x0004)  
	int32_t                                            MMLevelModDeath;                                            // 0x0688   (0x0004)  
	int32_t                                            MMLevelModEscape;                                           // 0x068C   (0x0004)  
	int32_t                                            TargetLevelForMaxedOutCharactersAchievement;                // 0x0690   (0x0004)  
	int32_t                                            TargetMaxLevelCharacterLevel_Respec;                        // 0x0694   (0x0004)  
	int32_t                                            WantedCharacterLevel;                                       // 0x0698   (0x0004)  
	float                                              CharacterSwapTimeoutSeconds;                                // 0x069C   (0x0004)  
	float                                              CharacterSwapAcceptingSeconds;                              // 0x06A0   (0x0004)  
	float                                              CharacterSwapCooldown;                                      // 0x06A4   (0x0004)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x06A8   (0x0028)  MISSED
	FTimerHandle                                       CommitTimedStatsTimer;                                      // 0x06D0   (0x0008)  
	FTimerHandle                                       TotalPlayTimeHandle;                                        // 0x06D8   (0x0008)  
	FTimerHandle                                       TimeSurvivedTimeHandle;                                     // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData06_6[0x6A];                                      // 0x06E8   (0x006A)  MISSED
	EUserPlatform                                      UserPlatform;                                               // 0x0752   (0x0001)  
	unsigned char                                      UnknownData07_6[0xB5];                                      // 0x0753   (0x00B5)  MISSED
	SDK_UNDEFINED(16,429) /* FMulticastInlineDelegate */ __um(OnMyTeamChanged);                                    // 0x0808   (0x0010)  
	SDK_UNDEFINED(16,430) /* FMulticastInlineDelegate */ __um(OnBBQPlayerStateChanged);                            // 0x0818   (0x0010)  
	SDK_UNDEFINED(16,431) /* FMulticastInlineDelegate */ __um(OnCharacterAssigned);                                // 0x0828   (0x0010)  
	bool                                               bIsDead;                                                    // 0x0838   (0x0001)  
	bool                                               bIsEscaped;                                                 // 0x0839   (0x0001)  
	bool                                               bIsSurvived;                                                // 0x083A   (0x0001)  
	bool                                               bIsReadyInLobby;                                            // 0x083B   (0x0001)  
	bool                                               bAutoReady;                                                 // 0x083C   (0x0001)  
	bool                                               bIsMeleeKilled;                                             // 0x083D   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x083E   (0x0002)  MISSED
	FBBQ_WantedCharacterInfo                           WantedCharacterInfo;                                        // 0x0840   (0x0018)  
	unsigned char                                      UnknownData09_6[0x8];                                       // 0x0858   (0x0008)  MISSED
	FString                                            AssignedCharacter;                                          // 0x0860   (0x0010)  
	FBBQCharacterCosmeticsInfo                         CharacterCosmeticsInfo;                                     // 0x0870   (0x0010)  
	int32_t                                            NumKills;                                                   // 0x0880   (0x0004)  
	unsigned char                                      UnknownData10_6[0x4];                                       // 0x0884   (0x0004)  MISSED
	class ABBQPlayerState*                             KillerPlayerState;                                          // 0x0888   (0x0008)  
	FActorInstanceID                                   EscapeZoneUsed;                                             // 0x0890   (0x0020)  
	bool                                               bReadyForNextMatch;                                         // 0x08B0   (0x0001)  
	unsigned char                                      UnknownData11_6[0x7];                                       // 0x08B1   (0x0007)  MISSED
	TArray<FString>                                    LocalPartyMembersNetIds;                                    // 0x08B8   (0x0010)  
	int32_t                                            PartyIndex;                                                 // 0x08C8   (0x0004)  
	unsigned char                                      UnknownData12_6[0x4];                                       // 0x08CC   (0x0004)  MISSED
	TMap<FName, EPlayerStatType>                       EscZoneStatForLevel;                                        // 0x08D0   (0x0050)  
	FBBQMetaGamePlayerData                             MetaGamePlayerData;                                         // 0x0920   (0x0118)  
	FBBQMetaGamePlayerData                             MatchStartMetaGamePlayerData;                               // 0x0A38   (0x0118)  
	int64_t                                            TotalXpEarned;                                              // 0x0B50   (0x0008)  
	unsigned char                                      UnknownData13_6[0x8];                                       // 0x0B58   (0x0008)  MISSED
	bool                                               bIsDisconnected;                                            // 0x0B60   (0x0001)  
	bool                                               bLeftGameInSpectateMode;                                    // 0x0B61   (0x0001)  
	bool                                               bIsMetaDataInitialized;                                     // 0x0B62   (0x0001)  
	unsigned char                                      UnknownData14_6[0x36];                                      // 0x0B63   (0x0036)  MISSED
	bool                                               bPreferPlayAsCoed;                                          // 0x0B99   (0x0001)  
	unsigned char                                      UnknownData15_6[0x6];                                       // 0x0B9A   (0x0006)  MISSED
	SDK_UNDEFINED(16,432) /* FMulticastInlineDelegate */ __um(OnPreferPlayAsCoedChanged);                          // 0x0BA0   (0x0010)  


	/// Functions
	// Function /Script/BBQCore.BBQPlayerState.WasLocallyMottoPerkAssigned
	bool WasLocallyMottoPerkAssigned(UClass* PerkClass) // [0x20915f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(PerkClass);
	}
	// Function /Script/BBQCore.BBQPlayerState.UpdateTotalPlayTimeStat
	void UpdateTotalPlayTimeStat() // [0x20915d0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.UpdateTimeSurvivedStat
	void UpdateTimeSurvivedStat() // [0x20915b0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.UpdateDistanceWalked
	void UpdateDistanceWalked() // [0x2091480] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.SetWantedCharacterOutfit
	void SetWantedCharacterOutfit(UBBQCharacterOutfit* InOutfit) // [0x20913f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UBBQCharacterOutfit*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(InOutfit);
	}
	// Function /Script/BBQCore.BBQPlayerState.SetWantedCharacterCosmetics
	void SetWantedCharacterCosmetics(UBBQCharacterOutfit* InOutfit, UBBQChainsawSkin* WeaponSkin) // [0x2091320] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UBBQCharacterOutfit*, UBBQChainsawSkin*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(InOutfit, WeaponSkin);
	}
	// Function /Script/BBQCore.BBQPlayerState.SetAssignedCharacter
	void SetAssignedCharacter(FString Assigned) // [0x2091280] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Assigned);
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerUnassignStarSignPerk
	void ServerUnassignStarSignPerk(UClass* PerkClass) // [0x208ffc0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	{
		typedef void (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(PerkClass);
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerUnassignPerk
	void ServerUnassignPerk(UClass* PerkClass) // [0x208ff00] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	{
		typedef void (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(PerkClass);
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerUnassignFamilyMottoPerk
	void ServerUnassignFamilyMottoPerk(UClass* PerkClass) // [0x208fe40] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	{
		typedef void (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(PerkClass);
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerSetOnSpotExecution
	void ServerSetOnSpotExecution(int32_t InOnSpotExecutionIndex) // [0x208fcf0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(InOnSpotExecutionIndex);
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerRefreshMetaGameData
	void ServerRefreshMetaGameData() // [0x208fcd0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerChangeTeamMottoPerksClear
	void ServerChangeTeamMottoPerksClear() // [0x208fcb0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerAssignStarSignPerk
	void ServerAssignStarSignPerk(UClass* PerkClass, bool bSkipValidation) // [0x208fbb0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	{
		typedef void (*FuncPtr)(UClass*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(PerkClass, bSkipValidation);
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerAssignPerk
	void ServerAssignPerk(UClass* PerkClass, bool bSkipValidation) // [0x208fab0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	{
		typedef void (*FuncPtr)(UClass*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(PerkClass, bSkipValidation);
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerAssignFamilyMottoPerkToLateTeamJoin
	void ServerAssignFamilyMottoPerkToLateTeamJoin(UClass* PerkClass) // [0x208f9f0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	{
		typedef void (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(PerkClass);
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerAssignFamilyMottoPerk
	void ServerAssignFamilyMottoPerk(UClass* PerkClass) // [0x208f930] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	{
		typedef void (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(PerkClass);
	}
	// Function /Script/BBQCore.BBQPlayerState.ServerAssignExecution
	void ServerAssignExecution(UBBQEquippableExecutionData* WantedExec, uint64_t ExecutionContentKey) // [0x208f830] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(UBBQEquippableExecutionData*, uint64_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func(WantedExec, ExecutionContentKey);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_UpdateStat
	void Server_UpdateStat(EPlayerStatType StatType, int32_t DELTA, EStatUpdateOp Op) // [0x2091170] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(EPlayerStatType, int32_t, EStatUpdateOp);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func(StatType, DELTA, Op);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_SetWeaponSkin
	void Server_SetWeaponSkin(UBBQChainsawSkin* Weapon, uint64_t WeaponContentKey) // [0x2091060] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(UBBQChainsawSkin*, uint64_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func(Weapon, WeaponContentKey);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_SetUserPlatform
	void Server_SetUserPlatform(EUserPlatform PLATFORM) // [0x2090fe0] Final|Net|NetReliableNative|Event|Private|NetServer 
	{
		typedef void (*FuncPtr)(EUserPlatform);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func(PLATFORM);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_SetPreferPlayAsCoed
	void Server_SetPreferPlayAsCoed(bool PreferCoed) // [0x2090f50] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		func(PreferCoed);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_SetLocalPartyMembers
	// void Server_SetLocalPartyMembers(TArray<FString> PartyMembers);                                                          // [0x2090e80] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/BBQCore.BBQPlayerState.Server_SetBackfillPreferences
	void Server_SetBackfillPreferences(FBBQMatchBackfillPreferences NewMatchBackfillPreferences, FString PreferredCharacter, uint64_t CharacterContentKey) // [0x2090d00] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FBBQMatchBackfillPreferences, FString, uint64_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		func(NewMatchBackfillPreferences, PreferredCharacter, CharacterContentKey);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_SendCharSwapRequestStart
	void Server_SendCharSwapRequestStart(ABBQPlayerState* Requestee, FName Character, uint64_t CharacterContentKey) // [0x2090bc0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(ABBQPlayerState*, FName, uint64_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		func(Requestee, Character, CharacterContentKey);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_SendCharSwapRequest
	void Server_SendCharSwapRequest(ECharacterRequestMessageType RequestType, ABBQPlayerState* Requester, ABBQPlayerState* Requestee) // [0x2090ab0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(ECharacterRequestMessageType, ABBQPlayerState*, ABBQPlayerState*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		func(RequestType, Requester, Requestee);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_SaveStatistics
	void Server_SaveStatistics() // [0x2090a90] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_RespondEOSUserId
	void Server_RespondEOSUserId(TArray<char> InEOSUserId) // [0x20909f0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		func(InEOSUserId);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_ResetPlayerStats
	void Server_ResetPlayerStats() // [0x20909d0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_RequestSessionInfo
	void Server_RequestSessionInfo(FSessionIdBBQ SessionId, EOnlineSessionTypeBBQ ClientSessionType) // [0x20908d0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(FSessionIdBBQ, EOnlineSessionTypeBBQ);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func(SessionId, ClientSessionType);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_ReadyForNextMatch
	void Server_ReadyForNextMatch(bool bIsReady) // [0x2090840] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func(bIsReady);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_LoadStatistics
	void Server_LoadStatistics() // [0x2090820] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_DebugOverridePerkLevel
	void Server_DebugOverridePerkLevel(UClass* PerkClass, int32_t NewLevel) // [0x2090750] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UClass*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func(PerkClass, NewLevel);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_CharacterLocked
	void Server_CharacterLocked() // [0xc5a710] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_AssignMottoPerkClassBonus
	void Server_AssignMottoPerkClassBonus(UClass* BonusPerk) // [0x2090550] Final|Net|NetReliableNative|Event|Private|NetServer|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		func(BonusPerk);
	}
	// Function /Script/BBQCore.BBQPlayerState.Server_ApplyLoadoutDataWithRemotePlayerData
	// void Server_ApplyLoadoutDataWithRemotePlayerData(FBBQLoadoutData LoadoutData, uint64_t ExecutionContentKey, FBBQMetaGamePlayerData ClientPlayerData, TArray<FBBQMetaGameInventoryData> InventoryPacket); // [0x2090190] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/BBQCore.BBQPlayerState.Server_ApplyLoadoutData
	void Server_ApplyLoadoutData(FBBQLoadoutData LoadoutData, uint64_t ExecutionContentKey) // [0x2090080] Final|Net|NetReliableNative|Event|Private|NetServer 
	{
		typedef void (*FuncPtr)(FBBQLoadoutData, uint64_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		func(LoadoutData, ExecutionContentKey);
	}
	// Function /Script/BBQCore.BBQPlayerState.QueryCharacterPerks
	// void QueryCharacterPerks(int32_t Type, TArray<UClass*>& OutPerks);                                                       // [0x208f740] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BBQCore.BBQPlayerState.PreferPlayAsCoed
	bool PreferPlayAsCoed() // [0x208f720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnWantedCharacter_Replicated
	void OnWantedCharacter_Replicated(FString PreviousWantedCharacter) // [0x208f680] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		func(PreviousWantedCharacter);
	}
	// Function /Script/BBQCore.BBQPlayerState.OnTeamID_Replicated
	void OnTeamID_Replicated(ETeamID PrevTeamID) // [0x208f600] Final|Native|Private 
	{
		typedef void (*FuncPtr)(ETeamID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		func(PrevTeamID);
	}
	// Function /Script/BBQCore.BBQPlayerState.OnSetOwner
	void OnSetOwner(AActor* NewOwner) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		func(NewOwner);
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_WantedCharacterInfo
	void OnRep_WantedCharacterInfo(FBBQ_WantedCharacterInfo& PreviousCharacterInfo) // [0x208f550] Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FBBQ_WantedCharacterInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		func(PreviousCharacterInfo);
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_TotalXpEarned
	void OnRep_TotalXpEarned() // [0x208f4f0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_SetNumKills
	void OnRep_SetNumKills() // [0x208f4f0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_SetMeleeKilled
	void OnRep_SetMeleeKilled() // [0x208f4f0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_SetKillerPlayerState
	void OnRep_SetKillerPlayerState() // [0x208f510] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[46]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_SetEscapeZone
	void OnRep_SetEscapeZone() // [0x208f4f0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[47]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_ReadyForNextMatch
	void OnRep_ReadyForNextMatch() // [0x208f4b0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[48]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_PreferPlayAsCoed
	void OnRep_PreferPlayAsCoed() // [0x208f490] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_OnSpotExecutionIndex
	void OnRep_OnSpotExecutionIndex() // [0x208f470] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_MottoCategoryBonusPerk
	void OnRep_MottoCategoryBonusPerk() // [0x208f450] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_MetaGamePlayerData
	void OnRep_MetaGamePlayerData() // [0x208f430] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_LoadoutIndex
	void OnRep_LoadoutIndex() // [0x208f410] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[53]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_IsSurvived
	void OnRep_IsSurvived() // [0x208f3f0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_IsReadyInLobby
	void OnRep_IsReadyInLobby() // [0x208f3d0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[55]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_IsMetaDataInitialized
	void OnRep_IsMetaDataInitialized(bool bOldValue) // [0x208f340] Final|Native|Private 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		func(bOldValue);
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_IsEscaped
	void OnRep_IsEscaped() // [0x208f320] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_IsDisconnected
	void OnRep_IsDisconnected(bool bOldValue) // [0x208f290] Final|Native|Private 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		func(bOldValue);
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_IsDead
	void OnRep_IsDead() // [0x208f270] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_FamilyMottoLocallyAssignedPerks
	void OnRep_FamilyMottoLocallyAssignedPerks() // [0x208f250] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[60]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_FamilyMottoAssignedPerks
	void OnRep_FamilyMottoAssignedPerks() // [0x208f230] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[61]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_CharacterSwapInfo
	void OnRep_CharacterSwapInfo(FBBQCharacterSwapInfo& PrevInfo) // [0x208f190] Final|Native|Private|HasOutParms 
	{
		typedef void (*FuncPtr)(FBBQCharacterSwapInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[62]);
		func(PrevInfo);
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_CharacterCosmeticsInfo
	void OnRep_CharacterCosmeticsInfo() // [0x208f170] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[63]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_CharacterAssigned
	void OnRep_CharacterAssigned() // [0x208f150] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[64]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_AssignedStarSignPerk
	void OnRep_AssignedStarSignPerk() // [0x208f130] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[65]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnRep_AssignedPerks
	void OnRep_AssignedPerks() // [0x208f110] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[66]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnPreferPlayAsCoedChanged__DelegateSignature
	void OnPreferPlayAsCoedChanged__DelegateSignature() // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[67]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.OnPlayerLeftParty
	void OnPlayerLeftParty(FString EntityId) // [0x208f020] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[68]);
		func(EntityId);
	}
	// Function /Script/BBQCore.BBQPlayerState.OnMatchStateUpdated
	void OnMatchStateUpdated(FName OldState, FName NewState) // [0x208ef50] Final|Native|Public  
	{
		typedef void (*FuncPtr)(FName, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[69]);
		func(OldState, NewState);
	}
	// Function /Script/BBQCore.BBQPlayerState.IsUnlockableUnlocked
	// bool IsUnlockableUnlocked(TArray<FLinkedStatProgress>& UnlockRequirements);                                              // [0x208ee90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BBQCore.BBQPlayerState.IsSurvived
	bool IsSurvived() // [0x208ee60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[71]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.IsReadyInLobby
	bool IsReadyInLobby() // [0x208ee40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[72]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.IsPerkUnlocked
	bool IsPerkUnlocked(UClass* PerkClass) // [0x208eda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[73]);
		return func(PerkClass);
	}
	// Function /Script/BBQCore.BBQPlayerState.IsPerkAssigned
	bool IsPerkAssigned(UClass*& PerkClass) // [0x208ed00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(UClass*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[74]);
		return func(PerkClass);
	}
	// Function /Script/BBQCore.BBQPlayerState.IsMeleeKilled
	bool IsMeleeKilled() // [0x208ece0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[75]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.IsEscaped
	bool IsEscaped() // [0x208ecb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[76]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.IsDisconnected
	bool IsDisconnected() // [0x208ec90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[77]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.IsDead
	bool IsDead() // [0x208ec60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[78]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetWeaponSkin
	UBBQChainsawSkin* GetWeaponSkin() // [0x208ec20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQChainsawSkin* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[79]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetUserPlatform
	EUserPlatform GetUserPlatform() // [0x208ec00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EUserPlatform (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[80]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetTeamID
	ETeamID GetTeamID() // [0x208ebc0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef ETeamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[81]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetPlayerSetup
	FPlayerSetup GetPlayerSetup() // [0x208ea60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FPlayerSetup (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[82]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetMetaGamePlayerData
	FBBQMetaGamePlayerData GetMetaGamePlayerData() // [0x208e8e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FBBQMetaGamePlayerData (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[83]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetMaxPerksCount
	int32_t GetMaxPerksCount(EBBQPerkType PerkType) // [0x208e820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(EBBQPerkType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[84]);
		return func(PerkType);
	}
	// Function /Script/BBQCore.BBQPlayerState.GetMatchStartMetaGamePlayerData
	FBBQMetaGamePlayerData GetMatchStartMetaGamePlayerData() // [0x208e7d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FBBQMetaGamePlayerData (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[85]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetLobbyWantedCharacter
	FString GetLobbyWantedCharacter() // [0x208e7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[86]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetKillerPlayerName
	FString GetKillerPlayerName() // [0x208e500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[87]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetKillerPlayerCharacter
	FString GetKillerPlayerCharacter() // [0x208e4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[88]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetKillCount
	int32_t GetKillCount() // [0x208e4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[89]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetEscapeZone
	FActorInstanceID GetEscapeZone() // [0x208e460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FActorInstanceID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[90]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetEarnedExperiencePoints
	int64_t GetEarnedExperiencePoints() // [0x208e440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int64_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[91]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetDisplayName
	FString GetDisplayName(bool bAnonymise) // [0x208e380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[92]);
		return func(bAnonymise);
	}
	// Function /Script/BBQCore.BBQPlayerState.GetDeathTime
	FString GetDeathTime() // [0x208e350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[93]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetCharacterOutfit
	UBBQCharacterOutfit* GetCharacterOutfit() // [0x208e330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQCharacterOutfit* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[94]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetCharacterName
	FString GetCharacterName() // [0x208e2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[95]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetCharacterFName
	FName GetCharacterFName() // [0x208e270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FName (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[96]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetCharacterDisplayName
	FText GetCharacterDisplayName() // [0x208e230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FText (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[97]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetAvailableStarSignPerks
	// void GetAvailableStarSignPerks(TArray<UClass*>& OutPerks);                                                               // [0x208e0f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BBQCore.BBQPlayerState.GetAvailablePerks
	// void GetAvailablePerks(TArray<UClass*>& OutPerks);                                                                       // [0x208e040] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BBQCore.BBQPlayerState.GetAvailableFamilyMottoPerks
	// void GetAvailableFamilyMottoPerks(TArray<UClass*>& OutPerks);                                                            // [0x208df90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BBQCore.BBQPlayerState.GetAssignedStarSignPerk
	UClass* GetAssignedStarSignPerk() // [0x208df50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UClass* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[101]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetAssignedPerksCount
	int32_t GetAssignedPerksCount(EBBQPerkType PerkType) // [0x208dec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(EBBQPerkType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[102]);
		return func(PerkType);
	}
	// Function /Script/BBQCore.BBQPlayerState.GetAssignedPerks
	// void GetAssignedPerks(EBBQPerkType PerkType, TArray<UClass*>& OutPerks);                                                 // [0x208ddd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BBQCore.BBQPlayerState.GetAssignedPerkLevel
	int32_t GetAssignedPerkLevel(UClass* PerkClass) // [0x208dd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[104]);
		return func(PerkClass);
	}
	// Function /Script/BBQCore.BBQPlayerState.GetAssignedMottoCategoryBonusPerk
	UClass* GetAssignedMottoCategoryBonusPerk() // [0x208dd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UClass* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[105]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetAssignedCharacter
	FString GetAssignedCharacter() // [0x208dce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[106]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.GetAchievementComponent
	UBBQAchievementsComponent* GetAchievementComponent() // [0x1e79c90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQAchievementsComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[107]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.DEBUG_GetPlayerUniqueID
	FString DEBUG_GetPlayerUniqueID() // [0x208dbd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[108]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerState.CommitTimeStats
	void CommitTimeStats() // [0x208dbb0] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[109]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.ClientRefreshMetaGameData
	void ClientRefreshMetaGameData() // [0x208d810] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[110]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.Client_UpdateUnlockablesUnlockedAtStart
	void Client_UpdateUnlockablesUnlockedAtStart() // [0x208db90] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[111]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.Client_ResponseSessionInfo
	void Client_ResponseSessionInfo(FBBQMatchBackfillPreferences NewMatchBackfillPreferences, EOnlineSessionTypeBBQ SessionType) // [0x208daa0] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)(FBBQMatchBackfillPreferences, EOnlineSessionTypeBBQ);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[112]);
		func(NewMatchBackfillPreferences, SessionType);
	}
	// Function /Script/BBQCore.BBQPlayerState.Client_RequestEOSUserId
	void Client_RequestEOSUserId() // [0x2080710] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[113]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.Client_OnLoadoutChanged
	void Client_OnLoadoutChanged(FBBQLoadoutData LoadoutData) // [0x208d9e0] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)(FBBQLoadoutData);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[114]);
		func(LoadoutData);
	}
	// Function /Script/BBQCore.BBQPlayerState.Client_OnCharSwapRequest
	void Client_OnCharSwapRequest(ECharacterRequestState RequestState, ABBQPlayerState* Requester, ABBQPlayerState* Requestee) // [0x208d8d0] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)(ECharacterRequestState, ABBQPlayerState*, ABBQPlayerState*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[115]);
		func(RequestState, Requester, Requestee);
	}
	// Function /Script/BBQCore.BBQPlayerState.Client_NoVictimSelected
	void Client_NoVictimSelected() // [0x1e44ff0] Net|NetReliableNative|Event|Public|NetClient|Const 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[116]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.Client_NoLFSelected
	void Client_NoLFSelected() // [0x1e44fd0] Net|NetReliableNative|Event|Public|NetClient|Const 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[117]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.CharacterSwap_UpdateSwapTimer
	void CharacterSwap_UpdateSwapTimer() // [0x208d7f0] Final|Native|Private 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[118]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerState.Auth_SetLobbyWantedCharacterInfo
	void Auth_SetLobbyWantedCharacterInfo(FString WantedCharacter, ETeamID WantedTeamID, bool bCharSwap) // [0x208d6c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, ETeamID, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[119]);
		func(WantedCharacter, WantedTeamID, bCharSwap);
	}
	// Function /Script/BBQCore.BBQPlayerState.AssignExecution
	void AssignExecution(UBBQEquippableExecutionData* WantedExec) // [0x208d630] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UBBQEquippableExecutionData*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[120]);
		func(WantedExec);
	}
};

/// Class /Script/BBQCore.BBQUtilitiesLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQUtilitiesLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQCore.BBQUtilitiesLibrary.WrapStringWithRichTextPlatformId
	FString WrapStringWithRichTextPlatformId(EUserPlatform LocalUserPlatform, EUserPlatform OtherUserPlatform, FString inString, bool bApplyPlayerStyle, FString PlayerNameStyle) // [0x20977c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(EUserPlatform, EUserPlatform, FString, bool, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(LocalUserPlatform, OtherUserPlatform, inString, bApplyPlayerStyle, PlayerNameStyle);
	}
	// Function /Script/BBQCore.BBQUtilitiesLibrary.EnableExpensiveShadows
	void EnableExpensiveShadows() // [0x20976f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/BBQCore.BBQUtilitiesLibrary.DisableExpensiveShadows
	void DisableExpensiveShadows() // [0x20976d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
};

/// Class /Script/BBQCore.BBQCorePlayerController
/// Size: 0x0618 (1560 bytes) (0x000578 - 0x000618) align 8 MaxSize: 0x0618
class ABBQCorePlayerController : public APlayerController
{ 
public:
	SDK_UNDEFINED(16,433) /* FMulticastInlineDelegate */ __um(IsGamepadInUseChangedDelegate);                      // 0x0578   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0588   (0x0018)  MISSED
	SDK_UNDEFINED(16,434) /* FMulticastInlineDelegate */ __um(OnInputMappingChanged);                              // 0x05A0   (0x0010)  
	float                                              KickPingMargin;                                             // 0x05B0   (0x0004)  
	float                                              KickPingTimeout;                                            // 0x05B4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x05B8   (0x0038)  MISSED
	class UBBQControlScheme*                           ControlScheme;                                              // 0x05F0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x05F8   (0x0020)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQCorePlayerController.SetIsGamepadInUse
	void SetIsGamepadInUse(bool bInUse) // [0x20722a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(bInUse);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.SetActiveUINavigation
	void SetActiveUINavigation(bool bKeyNavigation, bool bAnalogNavigation, bool bTabNavigation) // [0x2072180] Net|NetReliableNative|Event|Protected|NetClient|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(bKeyNavigation, bAnalogNavigation, bTabNavigation);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Server_UpdateUniqueNetId
	void Server_UpdateUniqueNetId(FUniqueNetIdRepl UniqueId) // [0x2072090] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(FUniqueNetIdRepl);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(UniqueId);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Server_RequestServerId
	void Server_RequestServerId() // [0x2072070] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Server_RequestLeave
	void Server_RequestLeave(EBBQUtilsPlayerLeaveReason LeaveReason) // [0x2071ff0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(EBBQUtilsPlayerLeaveReason);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(LeaveReason);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Server_RequestKick
	void Server_RequestKick(EBBQNetError NetError) // [0x2071f70] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(EBBQNetError);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(NetError);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Server_ReportPlayer
	void Server_ReportPlayer(FString InPlayerId, EBBQPlayerReportReason InReportReason) // [0x2071e80] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(FString, EBBQPlayerReportReason);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(InPlayerId, InReportReason);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Server_RegisterPlayer
	void Server_RegisterPlayer(TArray<char> InEOSUserId) // [0x2071de0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(InEOSUserId);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Server_ReceiveAntiCheatMessage
	void Server_ReceiveAntiCheatMessage(TArray<char> Message) // [0x2071d40] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Message);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Server_PartyReformMembers
	// void Server_PartyReformMembers(FString PartyNetworkDescriptor, TArray<FString> PartyMembers);                            // [0x2071c20] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/BBQCore.BBQCorePlayerController.Server_PartyReformComplete
	// void Server_PartyReformComplete(EBBQNetPartyReformType PartyReformType, TArray<FString> PartyMembers);                   // [0x2071b10] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/BBQCore.BBQCorePlayerController.Server_DemoResetAll
	void Server_DemoResetAll() // [0x2071af0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Server_DemoForceReady
	void Server_DemoForceReady() // [0x2071ad0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Server_CrashServer
	void Server_CrashServer() // [0x2071ab0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.RebuildEnhancedInputControlMappings
	void RebuildEnhancedInputControlMappings() // [0x2071a90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.IsGamepadInUseChanged__DelegateSignature
	void IsGamepadInUseChanged__DelegateSignature(bool IsInUse) // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(IsInUse);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.InputMappingChangedDelegate__DelegateSignature
	void InputMappingChangedDelegate__DelegateSignature() // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.GetLastInputTimeSeconds
	float GetLastInputTimeSeconds() // [0x2071a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.GetLastInputRealTimeSeconds
	float GetLastInputRealTimeSeconds() // [0x2071a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.GetIsGamepadInUse
	bool GetIsGamepadInUse() // [0x2071a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.DemoResetAll
	void DemoResetAll() // [0x20719f0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.DemoReset
	void DemoReset() // [0x20719d0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.DemoForceReady
	void DemoForceReady() // [0x20719b0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.CrashServer
	void CrashServer() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Client_WasKicked
	void Client_WasKicked(EBBQNetError NetError) // [0x2071930] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)(EBBQNetError);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		func(NetError);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Client_ResponseServerId
	void Client_ResponseServerId(FString ServerId) // [0x2071890] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		func(ServerId);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Client_RequestRegisterPlayer
	void Client_RequestRegisterPlayer() // [0x2071870] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Client_RequestNextMatch
	void Client_RequestNextMatch() // [0x2071850] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		func();
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Client_ReceiveAntiCheatMessage
	void Client_ReceiveAntiCheatMessage(TArray<char> Message) // [0x20717b0] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)(TArray<char>);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		func(Message);
	}
	// Function /Script/BBQCore.BBQCorePlayerController.Client_PartyReformMembers
	// void Client_PartyReformMembers(FString PartyNetworkDescriptor, TArray<FString> PartyMembers);                            // [0x2071690] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/BBQCore.BBQCorePlayerController.Client_PartyReformComplete
	// void Client_PartyReformComplete(EBBQNetPartyReformType PartyReformType, TArray<FString> PartyMembers);                   // [0x2071580] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/BBQCore.BBQInputModifierInputID
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UBBQInputModifierInputID : public UInputModifier
{ 
public:
	int32_t                                            InputID;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/BBQCore.BBQAbilitySystemComponent
/// Size: 0x1778 (6008 bytes) (0x001308 - 0x001778) align 8 MaxSize: 0x1778
class UBBQAbilitySystemComponent : public UAbilitySystemComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x468];                                     // 0x1308   (0x0468)  MISSED
	class ABBQBaseCharacter*                           OwnerCharacter;                                             // 0x1770   (0x0008)  


	/// Functions
	// Function /Script/BBQCore.BBQAbilitySystemComponent.RemoveGameplayCueLocal
	void RemoveGameplayCueLocal(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters) // [0x20695f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(GameplayCueTag, GameplayCueParameters);
	}
	// Function /Script/BBQCore.BBQAbilitySystemComponent.MakeOutgoingSpecWithTags
	FGameplayEffectSpecHandle MakeOutgoingSpecWithTags(UClass* GameplayEffectClass, float level, FGameplayEffectContextHandle Context, FGameplayTagContainer& DynamicGrantedTags) // [0x2067ef0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(UClass*, float, FGameplayEffectContextHandle, FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(GameplayEffectClass, level, Context, DynamicGrantedTags);
	}
	// Function /Script/BBQCore.BBQAbilitySystemComponent.ExecuteGameplayCueLocal
	void ExecuteGameplayCueLocal(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters) // [0x2066cc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(GameplayCueTag, GameplayCueParameters);
	}
	// Function /Script/BBQCore.BBQAbilitySystemComponent.BP_UnregisterGameplayTagEvent
	void BP_UnregisterGameplayTagEvent(FGameplayTag Tag, FGameplayTagBPDelegateHandle DelegateHandle) // [0x2066af0] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag, FGameplayTagBPDelegateHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Tag, DelegateHandle);
	}
	// Function /Script/BBQCore.BBQAbilitySystemComponent.BP_TagEventRemoveTag
	void BP_TagEventRemoveTag(FGameplayTag Tag) // [0x2066a60] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Tag);
	}
	// Function /Script/BBQCore.BBQAbilitySystemComponent.BP_TagEventRemoveAll
	void BP_TagEventRemoveAll() // [0x2066a40] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func();
	}
	// Function /Script/BBQCore.BBQAbilitySystemComponent.BP_RegisterGameplayTagEvent
	// FGameplayTagBPDelegateHandle BP_RegisterGameplayTagEvent(FGameplayTag Tag, FDelegateProperty OnBPGameplayTagChanged);    // [0x2066950] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BBQCore.BBQAbilitySystemComponent.AddGameplayCueLocal
	void AddGameplayCueLocal(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters) // [0x2066670] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(GameplayCueTag, GameplayCueParameters);
	}
};

/// Class /Script/BBQCore.BBQAbilitySystemGlobals
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 8 MaxSize: 0x0260
class UBBQAbilitySystemGlobals : public UAbilitySystemGlobals
{ 
public:
};

/// Class /Script/BBQCore.BBQAchievementsComponent
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBBQAchievementsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/BBQCore.BBQAchievementUnlockCalculation
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQAchievementUnlockCalculation : public UObject
{ 
public:
};

/// Class /Script/BBQCore.BBQAchievementUnlockCalculationAddition
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQAchievementUnlockCalculationAddition : public UBBQAchievementUnlockCalculation
{ 
public:
};

/// Class /Script/BBQCore.BBQAchievementUnlockCalculationAnd
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQAchievementUnlockCalculationAnd : public UBBQAchievementUnlockCalculation
{ 
public:
};

/// Class /Script/BBQCore.BBQAkComponentPoolSubsystem
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UBBQAkComponentPoolSubsystem : public UWorldSubsystem
{ 
public:
	class AActor*                                      AmbiencePoolOwner;                                          // 0x0030   (0x0008)  
	TArray<FAkPoolItem>                                AmbiencePoolItems;                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQAkComponentPoolSubsystem.ReturnAmbienceAkComponent
	void ReturnAmbienceAkComponent(UAkComponent* AkComponent) // [0x20698d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UAkComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(AkComponent);
	}
	// Function /Script/BBQCore.BBQAkComponentPoolSubsystem.PostOneShotAmbienceEvent
	int32_t PostOneShotAmbienceEvent(UAkAudioEvent* AkEvent, FVector Location, EAkPoolPriority Priority) // [0x20694d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UAkAudioEvent*, FVector, EAkPoolPriority);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(AkEvent, Location, Priority);
	}
	// Function /Script/BBQCore.BBQAkComponentPoolSubsystem.OneShotAmbienceEventCallback
	void OneShotAmbienceEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) // [0x2069400] Final|Native|Protected 
	{
		typedef void (*FuncPtr)(EAkCallbackType, UAkCallbackInfo*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(CallbackType, CallbackInfo);
	}
	// Function /Script/BBQCore.BBQAkComponentPoolSubsystem.GetAmbienceAkComponent
	UAkComponent* GetAmbienceAkComponent(FVector Location, EAkPoolPriority Priority) // [0x2066f10] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef class UAkComponent* (*FuncPtr)(FVector, EAkPoolPriority);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Location, Priority);
	}
};

/// Class /Script/BBQCore.BBQAmbientAudioSubsystem
/// Size: 0x0100 (256 bytes) (0x000030 - 0x000100) align 8 MaxSize: 0x0100
class UBBQAmbientAudioSubsystem : public UWorldSubsystem
{ 
public:
	float                                              RoomToneFadeTime;                                           // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TMap<class UAkAudioEvent*, FBBQMultiPosAmbienceData> ActiveAmbiences;                                          // 0x0038   (0x0050)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0088   (0x0010)  MISSED
	TMap<class UAkRoomComponent*, FBBQConnectedRooms>  RoomConnectionGraph;                                        // 0x0098   (0x0050)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x00E8   (0x0018)  MISSED
};

/// Class /Script/BBQCore.BBQAmbientSound
/// Size: 0x0260 (608 bytes) (0x000228 - 0x000260) align 8 MaxSize: 0x0260
class ABBQAmbientSound : public AActor
{ 
public:
	class UAkAudioEvent*                               AkEvent;                                                    // 0x0228   (0x0008)  
	EAkPoolPriority                                    Priority;                                                   // 0x0230   (0x0001)  
	bool                                               bUseMultiplePositions;                                      // 0x0231   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0232   (0x0006)  MISSED
	class UBBQAkComponentPoolSubsystem*                AkPool;                                                     // 0x0238   (0x0008)  
	class UBBQAudioListenerSubsystem*                  ListenerSys;                                                // 0x0240   (0x0008)  
	class UBBQAmbientAudioSubsystem*                   AmbientSys;                                                 // 0x0248   (0x0008)  
	class UAkComponent*                                PooledAkComp;                                               // 0x0250   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0258   (0x0008)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQAmbientSound.IsPlaying
	bool IsPlaying() // [0x2067e70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

/// Class /Script/BBQCore.BBQAnimNotify_Audio
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UBBQAnimNotify_Audio : public UAnimNotify
{ 
public:
	bool                                               bFollow;                                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            AttachName;                                                 // 0x0040   (0x0010)  
	class UAkAudioEvent*                               Event;                                                      // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/BBQCore.BBQAnimNotify_Audio.Received_NotifyAudio
	bool Received_NotifyAudio(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, UAkComponent* AkComponent) // [0x2438a30] Event|Public|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)(USkeletalMeshComponent*, UAnimSequenceBase*, UAkComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(MeshComp, Animation, AkComponent);
	}
};

/// Class /Script/BBQCore.BBQAnimNotifyState_Audio
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UBBQAnimNotifyState_Audio : public UAnimNotifyState
{ 
public:
	bool                                               bPostAtLocation;                                            // 0x0030   (0x0001)  
	bool                                               bForceStopOnEnd;                                            // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              ForceStopFadeout;                                           // 0x0034   (0x0004)  
	class UAkAudioEvent*                               Event;                                                      // 0x0038   (0x0008)  
	class UAkAudioEvent*                               HapticsEvent;                                               // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/BBQCore.BBQAttributeSet
/// Size: 0x0338 (824 bytes) (0x000038 - 0x000338) align 8 MaxSize: 0x0338
class UBBQAttributeSet : public UBBQBaseAttributeSet
{ 
public:
	FGameplayAttributeData                             Health;                                                     // 0x0038   (0x0010)  
	FGameplayAttributeData                             MaxHealth;                                                  // 0x0048   (0x0010)  
	FGameplayAttributeData                             SpeedMultiplier;                                            // 0x0058   (0x0010)  
	FGameplayAttributeData                             MinimumSpeedMultiplier;                                     // 0x0068   (0x0010)  
	FGameplayAttributeData                             WillToLive;                                                 // 0x0078   (0x0010)  
	FGameplayAttributeData                             WillToLiveMin;                                              // 0x0088   (0x0010)  
	FGameplayAttributeData                             WillToLiveMax;                                              // 0x0098   (0x0010)  
	FGameplayAttributeData                             Heartrate;                                                  // 0x00A8   (0x0010)  
	FGameplayAttributeData                             HeartRateMin;                                               // 0x00B8   (0x0010)  
	FGameplayAttributeData                             HeartRateMax;                                               // 0x00C8   (0x0010)  
	FGameplayAttributeData                             Stamina;                                                    // 0x00D8   (0x0010)  
	FGameplayAttributeData                             MaxStamina;                                                 // 0x00E8   (0x0010)  
	FGameplayAttributeData                             TotalStaminaChunks;                                         // 0x00F8   (0x0010)  
	FGameplayAttributeData                             StaminaPerChunk;                                            // 0x0108   (0x0010)  
	FGameplayAttributeData                             StaminaRegenRateMultiplier;                                 // 0x0118   (0x0010)  
	FGameplayAttributeData                             StaminaRegenRateMultiplierMin;                              // 0x0128   (0x0010)  
	FGameplayAttributeData                             StaminaRegenRateMultiplierMax;                              // 0x0138   (0x0010)  
	FGameplayAttributeData                             SprintStaminaConsumptionRate;                               // 0x0148   (0x0010)  
	FGameplayAttributeData                             BleedingOutRateMultiplier;                                  // 0x0158   (0x0010)  
	FGameplayAttributeData                             BleedingOutRateMultiplierMin;                               // 0x0168   (0x0010)  
	FGameplayAttributeData                             BleedingOutRateMultiplierMax;                               // 0x0178   (0x0010)  
	FGameplayAttributeData                             FamilyBond;                                                 // 0x0188   (0x0010)  
	FGameplayAttributeData                             FamilyBondMax;                                              // 0x0198   (0x0010)  
	FGameplayAttributeData                             FamilyBondMin;                                              // 0x01A8   (0x0010)  
	FGameplayAttributeData                             FamilyBondLevel;                                            // 0x01B8   (0x0010)  
	FGameplayAttributeData                             FamilyBondLevelMin;                                         // 0x01C8   (0x0010)  
	FGameplayAttributeData                             FamilyBondLevelMax;                                         // 0x01D8   (0x0010)  
	FGameplayAttributeData                             MeleeAttackMultiplier;                                      // 0x01E8   (0x0010)  
	FGameplayAttributeData                             TrackingAbilityCharge;                                      // 0x01F8   (0x0010)  
	FGameplayAttributeData                             TrackingAbilityChargeMax;                                   // 0x0208   (0x0010)  
	FGameplayAttributeData                             SissyAbilityCharge;                                         // 0x0218   (0x0010)  
	FGameplayAttributeData                             SissyAbilityChargeMax;                                      // 0x0228   (0x0010)  
	FGameplayAttributeData                             HandsAbilityCharge;                                         // 0x0238   (0x0010)  
	FGameplayAttributeData                             HandsAbilityChargeMax;                                      // 0x0248   (0x0010)  
	FGameplayAttributeData                             PerkCharges;                                                // 0x0258   (0x0010)  
	FGameplayAttributeData                             PerkChargeMax;                                              // 0x0268   (0x0010)  
	FGameplayAttributeData                             ProximityRadius;                                            // 0x0278   (0x0010)  
	FGameplayAttributeData                             HarvestRescueDuration;                                      // 0x0288   (0x0010)  
	FGameplayAttributeData                             IncapRescueDuration;                                        // 0x0298   (0x0010)  
	FGameplayAttributeData                             DamageReceiveMultiplier;                                    // 0x02A8   (0x0010)  
	FGameplayAttributeData                             StaminaCostReductionMultiplier;                             // 0x02B8   (0x0010)  
	FGameplayAttributeData                             InteractionDisplayRadius;                                   // 0x02C8   (0x0010)  
	FGameplayAttributeData                             BloodTrailDurationMultiplier;                               // 0x02D8   (0x0010)  
	FGameplayAttributeData                             BloodTrailSpawnDelayMultiplier;                             // 0x02E8   (0x0010)  
	FGameplayAttributeData                             MovementActionMultiplier;                                   // 0x02F8   (0x0010)  
	FGameplayAttributeData                             FamilyAbilityCharge;                                        // 0x0308   (0x0010)  
	FGameplayAttributeData                             FamilyAbilityChargeMax;                                     // 0x0318   (0x0010)  
	FGameplayAttributeData                             MercuryFear;                                                // 0x0328   (0x0010)  


	/// Functions
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_WillToLive
	void OnRep_WillToLive(FGameplayAttributeData& OldValue) // [0x20690f0] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_TotalStaminaChunks
	void OnRep_TotalStaminaChunks(FGameplayAttributeData& OldValue) // [0x2069050] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_StaminaPerChunk
	void OnRep_StaminaPerChunk(FGameplayAttributeData& OldValue) // [0x2068fb0] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_StaminaCostMultiplier
	void OnRep_StaminaCostMultiplier(FGameplayAttributeData& OldValue) // [0x2068f10] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_Stamina
	void OnRep_Stamina(FGameplayAttributeData& OldValue) // [0x2068e70] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_ProximityRadius
	void OnRep_ProximityRadius(FGameplayAttributeData& OldValue) // [0x2068dd0] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_MercuryFear
	void OnRep_MercuryFear(FGameplayAttributeData& OldValue) // [0x2068d30] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_MaxStamina
	void OnRep_MaxStamina(FGameplayAttributeData& OldValue) // [0x2068c90] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_MaxHealth
	void OnRep_MaxHealth(FGameplayAttributeData& OldValue) // [0x2068bf0] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_InteractionDisplayRadius
	void OnRep_InteractionDisplayRadius(FGameplayAttributeData& OldValue) // [0x2068b50] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_Health
	void OnRep_Health(FGameplayAttributeData& OldValue) // [0x2068ab0] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_FamilyBondLevelMin
	void OnRep_FamilyBondLevelMin(FGameplayAttributeData& OldValue) // [0x2068a10] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_FamilyBondLevelMax
	void OnRep_FamilyBondLevelMax(FGameplayAttributeData& OldValue) // [0x2068970] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_FamilyBondLevel
	void OnRep_FamilyBondLevel(FGameplayAttributeData& OldValue) // [0x20688d0] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(OldValue);
	}
	// Function /Script/BBQCore.BBQAttributeSet.OnRep_FamilyBond
	void OnRep_FamilyBond(FGameplayAttributeData& OldValue) // [0x2068830] Final|Native|Protected|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAttributeData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(OldValue);
	}
};

/// Class /Script/BBQCore.BBQAudioEngineSupportSubsystem
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 16 MaxSize: 0x0070
class UBBQAudioEngineSupportSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED
};

/// Class /Script/BBQCore.BBQAudioListenerSubsystem
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UBBQAudioListenerSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0030   (0x0028)  MISSED
	class UObject*                                     CinematicCameraOwner;                                       // 0x0058   (0x0008)  
	class USceneComponent*                             CinematicCamera;                                            // 0x0060   (0x0008)  
	class UAkComponent*                                DefaultListener;                                            // 0x0068   (0x0008)  
	class UAkRoomComponent*                            ListenerRoom;                                               // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/BBQCore.BBQAudioListenerSubsystem.IsListenerWithinMaxDistance
	bool IsListenerWithinMaxDistance(FVector Location, UAkAudioEvent* AkEvent) // [0x2067d30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FVector, UAkAudioEvent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Location, AkEvent);
	}
	// Function /Script/BBQCore.BBQAudioListenerSubsystem.GetCurrentListenerRoom
	UAkRoomComponent* GetCurrentListenerRoom() // [0x2067030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UAkRoomComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/BBQCore.BBQAudioListenerSubsystem.GetCurrentListenerLocation
	FVector GetCurrentListenerLocation() // [0x2066ff0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVector (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/BBQCore.BBQAudioListenerSubsystem.DrawListenerSphere
	void DrawListenerSphere() // [0xb888e0] Final|Native|Public|BlueprintCallable|Const 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
};

/// Class /Script/BBQCore.BBQSaveGame
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UBBQSaveGame : public USaveGame
{ 
public:
	FString                                            SaveSlotName;                                               // 0x0028   (0x0010)  
	int32_t                                            UserIndex;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/BBQCore.BBQAudioPreferencesSave
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UBBQAudioPreferencesSave : public UBBQSaveGame
{ 
public:
	float                                              MasterVolume;                                               // 0x0040   (0x0004)  
	float                                              MusicVolume;                                                // 0x0044   (0x0004)  
	float                                              DialogVolume;                                               // 0x0048   (0x0004)  
	float                                              SFXVolume;                                                  // 0x004C   (0x0004)  
	int32_t                                            AudioOutput;                                                // 0x0050   (0x0004)  
	bool                                               VoiceChatEnabled;                                           // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            microphoneMode;                                             // 0x0058   (0x0004)  
	float                                              VoiceChatVolume;                                            // 0x005C   (0x0004)  
};

/// Class /Script/BBQCore.BBQBasePlayerAttributeAsset
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UBBQBasePlayerAttributeAsset : public UDataAsset
{ 
public:
	TArray<FIntVariable>                               BaseAttributes;                                             // 0x0030   (0x0010)  
	FIntRange                                          GlobalLevelScaleRange;                                      // 0x0040   (0x0008)  
	TMap<FName, FAttributeLocalData>                   AttributeLocalData;                                         // 0x0048   (0x0050)  
	int32_t                                            MaxPointsToDistribute;                                      // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQBasePlayerAttributeAsset.GetGlobalLevelRange
	FIntRange GetGlobalLevelRange() // [0x206cd50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FIntRange (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/BBQCore.BBQBasePlayerAttributeAsset.GetAttributeData
	void GetAttributeData(FName Name, FAttributeLocalData& LocalData) // [0x206cb90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FName, FAttributeLocalData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Name, LocalData);
	}
	// Function /Script/BBQCore.BBQBasePlayerAttributeAsset.GetAllowedAttributeRange
	void GetAllowedAttributeRange(FName Name, FIntRange& OutRange) // [0x206cac0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef void (*FuncPtr)(FName, FIntRange&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Name, OutRange);
	}
	// Function /Script/BBQCore.BBQBasePlayerAttributeAsset.GetAllBaseAttributes
	// TArray<FIntVariable> GetAllBaseAttributes();                                                                             // [0x206ca90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BBQCore.BBQBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.SortStringArray
	// void SortStringArray(TArray<FString>& ArrayToSort);                                                                      // [0x206de60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.SetRTPCValueByPlayingID
	void SetRTPCValueByPlayingID(UAkRtpc* Rtpc, float Value, int32_t PlayingID, float TransitionDuration) // [0x206dd20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UAkRtpc*, float, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Rtpc, Value, PlayingID, TransitionDuration);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.SetLightmassDiffuseBoost
	void SetLightmassDiffuseBoost(UStaticMeshComponent* StaticMeshComponent, float DiffuseBoost) // [0x206dc60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UStaticMeshComponent*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(StaticMeshComponent, DiffuseBoost);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.SetLightmapResolutionOverride
	void SetLightmapResolutionOverride(UStaticMeshComponent* StaticMeshComponent, bool bEnableOverride, int32_t LightmapRes) // [0x206db50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UStaticMeshComponent*, bool, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(StaticMeshComponent, bEnableOverride, LightmapRes);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.SetGlobalRTPCValue
	void SetGlobalRTPCValue(UAkRtpc* Rtpc, float Value, float TransitionDuration) // [0x206da50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UAkRtpc*, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Rtpc, Value, TransitionDuration);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.SetDrawDistances
	void SetDrawDistances(ULightComponent* LightComponent, float MaxDrawDistance, float MaxDistanceFadeRange) // [0x206d950] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ULightComponent*, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(LightComponent, MaxDrawDistance, MaxDistanceFadeRange);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.SetActorEditorOnly
	void SetActorEditorOnly(AActor* Actor, bool bIsEditorOnly) // [0x1482440] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Actor, bIsEditorOnly);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.ResetGlobalRTPCValue
	void ResetGlobalRTPCValue(UAkRtpc* Rtpc, float TransitionDuration) // [0x206d890] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UAkRtpc*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Rtpc, TransitionDuration);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.RandomElement
	void RandomElement(TArray<int32_t>& Array, int32_t& Elem) // [0x206d7a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(TArray<int32_t>&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Array, Elem);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.PrintToScreen
	void PrintToScreen(FName CategoryName, FString DebugString, FLinearColor Color, float TimeToDisplay) // [0x206d640] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName, FString, FLinearColor, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(CategoryName, DebugString, Color, TimeToDisplay);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.PreStreamActor
	void PreStreamActor(AActor* ActorToStream, float Duration, bool WaitForPendingInitOrStreaming) // [0x206d530] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, float, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(ActorToStream, Duration, WaitForPendingInitOrStreaming);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.ModifyActor
	void ModifyActor(AActor* Actor, bool bMarkActorPackageDirty, bool bMarkRenderStateDirty) // [0x206d420] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(Actor, bMarkActorPackageDirty, bMarkRenderStateDirty);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.IsShippingBuild
	bool IsShippingBuild() // [0x1aaddc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func();
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.IsPlayInEditor
	bool IsPlayInEditor(UObject* WorldContextObject) // [0x206d390] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(WorldContextObject);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.IsPlatformGen8
	bool IsPlatformGen8() // [0xd654e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func();
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.IsEmpty
	// bool IsEmpty(TArray<FVector>& Array);                                                                                    // [0x206d2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.IsDemoBuild
	bool IsDemoBuild() // [0x206d2b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.IsActorEditorOnly
	bool IsActorEditorOnly(AActor* Actor) // [0x206d220] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(Actor);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.InEditor
	bool InEditor(UObject* WorldContextObject) // [0x206d190] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(WorldContextObject);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.IfIsPlayInEditor
	void IfIsPlayInEditor(UObject* WorldContextObject, EBlueprintHelperIsInEditorResult& OutputPath) // [0x206d0c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, EBlueprintHelperIsInEditorResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func(WorldContextObject, OutputPath);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.IfInEditor
	void IfInEditor(UObject* WorldContextObject, EBlueprintHelperIsInEditorResult& OutputPath) // [0x206cff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, EBlueprintHelperIsInEditorResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func(WorldContextObject, OutputPath);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.GetWorldType
	FString GetWorldType(UObject* WorldContextObject) // [0x206cf20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func(WorldContextObject);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.GetMatchTime
	float GetMatchTime(UObject* WorldContextObject) // [0x206ce90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(WorldContextObject);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.GetLightmassDiffuseBoost
	float GetLightmassDiffuseBoost(UStaticMeshComponent* StaticMeshComponent) // [0x206ce00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UStaticMeshComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(StaticMeshComponent);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.GetLastFrameLuminance
	float GetLastFrameLuminance(UObject* WorldContextObject) // [0x206cd70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(WorldContextObject);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.GetConnectedServerName
	FString GetConnectedServerName() // [0x206ccd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func();
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.GetBuildUID
	int32_t GetBuildUID() // [0x206cca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func();
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.FindCommandLineArg
	bool FindCommandLineArg(FString WantedParam, FString& ParamValueOut) // [0x206c990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FString&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(WantedParam, ParamValueOut);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.DoesComponentOverrideWalkableSlopeSettings
	bool DoesComponentOverrideWalkableSlopeSettings(UPrimitiveComponent* Component) // [0x206c900] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UPrimitiveComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(Component);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.CanEnforceFocusRequirements
	bool CanEnforceFocusRequirements() // [0x1aaddc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		return func();
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.AreAnyConsoleCommandsOpen
	bool AreAnyConsoleCommandsOpen() // [0x206c8d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func();
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.AlwaysLog
	void AlwaysLog(FString Msg) // [0x206c7b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func(Msg);
	}
	// Function /Script/BBQCore.BBQBlueprintFunctionLibrary.AddNewSerializedComponentByClass
	UActorComponent* AddNewSerializedComponentByClass(AActor* TargetActor, UClass* ComponentClass) // [0x206c6e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UActorComponent* (*FuncPtr)(AActor*, UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func(TargetActor, ComponentClass);
	}
};

/// Class /Script/BBQCore.BBQChangeOutfitMain
/// Size: 0x0228 (552 bytes) (0x000228 - 0x000228) align 8 MaxSize: 0x0228
class ABBQChangeOutfitMain : public AActor
{ 
public:
};

/// Class /Script/BBQCore.BBQChangeOutfitSP
/// Size: 0x0228 (552 bytes) (0x000228 - 0x000228) align 8 MaxSize: 0x0228
class ABBQChangeOutfitSP : public AActor
{ 
public:
};

/// Class /Script/BBQCore.BBQCharacterCosmeticsData
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UBBQCharacterCosmeticsData : public UDataAsset
{ 
public:
	TArray<class UBBQCharacterOutfit*>                 Outfits;                                                    // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0040   (0x0068)  MISSED
};

/// Class /Script/BBQCore.BBQChainsawSkin
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UBBQChainsawSkin : public UDataAsset
{ 
public:
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FName                                              SkinID;                                                     // 0x0034   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	class UAkSwitchValue*                              AudioSwitch;                                                // 0x0040   (0x0008)  
	TWeakObjectPtr<class USkeletalMesh*>               WeaponMesh;                                                 // 0x0048   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0050   (0x0020)  MISSED
	FName                                              CoreMaterialSlotName;                                       // 0x0070   (0x0008)  
	TWeakObjectPtr<class UMaterialInstance*>           CoreMaterial;                                               // 0x0078   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0080   (0x0020)  MISSED
	TWeakObjectPtr<class UMaterialInstance*>           BladeMaterial;                                              // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x00A8   (0x0020)  MISSED
	FText                                              SkinName;                                                   // 0x00C8   (0x0018)  
	TWeakObjectPtr<class UTexture2D*>                  Thumbnail;                                                  // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData05_6[0x20];                                      // 0x00E8   (0x0020)  MISSED
	FName                                              UnlockUID;                                                  // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/BBQCore.BBQChainsawSkin.ApplyToMeshComponent
	void ApplyToMeshComponent(USkeletalMeshComponent* MeshComponent) // [0x206c840] Final|Native|Public|BlueprintCallable|Const 
	{
		typedef void (*FuncPtr)(USkeletalMeshComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(MeshComponent);
	}
};

/// Class /Script/BBQCore.BBQChainsawSkinData
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UBBQChainsawSkinData : public UDataAsset
{ 
public:
	TArray<class UBBQChainsawSkin*>                    Skins;                                                      // 0x0030   (0x0010)  
};

/// Class /Script/BBQCore.BBQCharacterOutfit
/// Size: 0x0128 (296 bytes) (0x000030 - 0x000128) align 8 MaxSize: 0x0128
class UBBQCharacterOutfit : public UDataAsset
{ 
public:
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TWeakObjectPtr<class USkeletalMesh*>               CharacterMesh;                                              // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0040   (0x0020)  MISSED
	class UBBQChainsawSkin*                            WeaponSkinOverride;                                         // 0x0060   (0x0008)  
	TMap<EBBQOutfitProfile, FOutfitMaterialData>       OutfitProfiles;                                             // 0x0068   (0x0050)  
	bool                                               bUseBaseProfileOnly;                                        // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	FName                                              OutfitId;                                                   // 0x00BC   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FText                                              OutfitName;                                                 // 0x00C8   (0x0018)  
	TWeakObjectPtr<class UTexture2D*>                  OutfitIcon;                                                 // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x00E8   (0x0020)  MISSED
	bool                                               bHasSpecialChainsaw;                                        // 0x0108   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0109   (0x0003)  MISSED
	FName                                              UnlockUID;                                                  // 0x010C   (0x0008)  
	bool                                               bCanShowUpOnImposters;                                      // 0x0114   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0115   (0x0003)  MISSED
	TArray<FLinkedOutfitData>                          LinkedOutfitData;                                           // 0x0118   (0x0010)  
};

/// Class /Script/BBQCore.BBQClientSave
/// Size: 0x0290 (656 bytes) (0x000040 - 0x000290) align 8 MaxSize: 0x0290
class UBBQClientSave : public UBBQSaveGame
{ 
public:
	FDateTime                                          LastTitleNewsSeen;                                          // 0x0040   (0x0008)  
	bool                                               InvertCameraPitch;                                          // 0x0048   (0x0001)  
	bool                                               FirstFlowCompleted;                                         // 0x0049   (0x0001)  
	bool                                               LegalScreenAccepted;                                        // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x004B   (0x0001)  MISSED
	float                                              MouseSensitivity;                                           // 0x004C   (0x0004)  
	FVector2D                                          GamepadSensitivity;                                         // 0x0050   (0x0008)  
	bool                                               AutoCrouch;                                                 // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	SDK_UNDEFINED(80,435) /* TSet<FName> */            __um(CompletedTutorials);                                   // 0x0060   (0x0050)  
	TMap<FName, class UBBQCharacterOutfit*>            CharactersOutfits;                                          // 0x00B0   (0x0050)  
	SDK_UNDEFINED(80,436) /* TSet<FName> */            __um(VisitedExecutions);                                    // 0x0100   (0x0050)  
	SDK_UNDEFINED(80,437) /* TSet<FName> */            __um(VisitedOutfits);                                       // 0x0150   (0x0050)  
	SDK_UNDEFINED(80,438) /* TSet<FName> */            __um(VisitedWeapons);                                       // 0x01A0   (0x0050)  
	SDK_UNDEFINED(80,439) /* TSet<FName> */            __um(VisitedCharacters);                                    // 0x01F0   (0x0050)  
	TMap<FName, FName>                                 WeaponSkins;                                                // 0x0240   (0x0050)  
};

/// Class /Script/BBQCore.BBQControlScheme
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UBBQControlScheme : public UDataAsset
{ 
public:
	class UInputMappingContext*                        GlobalControls;                                             // 0x0030   (0x0008)  
	class UInputMappingContext*                        GenericCharacterControls;                                   // 0x0038   (0x0008)  
	class UInputMappingContext*                        TeamCharacterControls;                                      // 0x0040   (0x0008)  
	class UInputMappingContext*                        HidingSpotControls;                                         // 0x0048   (0x0008)  
	class UInputMappingContext*                        MinigameControls;                                           // 0x0050   (0x0008)  
	TMap<FName, class UInputMappingContext*>           CharacterSpecificContexts;                                  // 0x0058   (0x0050)  
};

/// Class /Script/BBQCore.BBQControlSchemeSet
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UBBQControlSchemeSet : public UDataAsset
{ 
public:
	class UBBQControlScheme*                           ControlSchemeVictim;                                        // 0x0030   (0x0008)  
	class UBBQControlScheme*                           ControlSchemeFamily;                                        // 0x0038   (0x0008)  
	class UBBQControlScheme*                           ControlSchemeLeatherface;                                   // 0x0040   (0x0008)  
};

/// Class /Script/BBQCore.BBQControlSchemeSettings
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UBBQControlSchemeSettings : public UDataAsset
{ 
public:
	class UBBQControlSchemeSet*                        TemplateControlSchemeSet;                                   // 0x0030   (0x0008)  
	TMap<int32_t, class UInputMappingContext*>         PresetModifiers;                                            // 0x0038   (0x0050)  
};

/// Class /Script/BBQCore.BBQControlSchemePersonaliser
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UBBQControlSchemePersonaliser : public UObject
{ 
public:
	class UBBQControlSchemeSet*                        ControlSchemeSet;                                           // 0x0028   (0x0008)  
};

/// Class /Script/BBQCore.BBQControlSchemePresets
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UBBQControlSchemePresets : public UDataAsset
{ 
public:
	TArray<class UBBQControlScheme*>                   ControlSchemePresetsVictims;                                // 0x0030   (0x0010)  
	TArray<class UBBQControlScheme*>                   ControlSchemePresetsFamily;                                 // 0x0040   (0x0010)  
};

/// Class /Script/BBQCore.BBQControlsPresetPreferencesSave
/// Size: 0x00C0 (192 bytes) (0x000040 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBBQControlsPresetPreferencesSave : public UBBQSaveGame
{ 
public:
	TMap<char, FBBQActionKeyMappings>                  ReboundKeys;                                                // 0x0040   (0x0050)  
	FBBQControlPresetPreferences                       PreferencesStruct;                                          // 0x0090   (0x0030)  
};

/// Class /Script/BBQCore.BBQCustomizableCharacter
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQCustomizableCharacter : public UInterface
{ 
public:


	/// Functions
	// Function /Script/BBQCore.BBQCustomizableCharacter.SetWeaponSkin
	void SetWeaponSkin(UBBQChainsawSkin* WeaponSkin) // [0x2438a30] Event|Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(UBBQChainsawSkin*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(WeaponSkin);
	}
	// Function /Script/BBQCore.BBQCustomizableCharacter.SetWeaponMesh
	void SetWeaponMesh(USkeletalMesh* SkeletalMesh) // [0x2438a30] Event|Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(USkeletalMesh*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(SkeletalMesh);
	}
};

/// Class /Script/BBQCore.BBQCustomMatchSubsystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UBBQCustomMatchSubsystem : public UGameInstanceSubsystem
{ 
public:
	FBBQCustomMatchSettings                            CachedCustomMatchSettings;                                  // 0x0030   (0x0018)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Class /Script/BBQCore.BBQDebugGameCheats
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UBBQDebugGameCheats : public UDeveloperSettings
{ 
public:
	TArray<FString>                                    CheatsList;                                                 // 0x0038   (0x0010)  
};

/// Class /Script/BBQCore.BBQDemoMode
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UBBQDemoMode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	bool                                               bSkipFirstTimeBoot;                                         // 0x0030   (0x0001)  
	bool                                               bIsMetaGameDisabled;                                        // 0x0031   (0x0001)  
	bool                                               bIsCharacterSelectionAvailable;                             // 0x0032   (0x0001)  
	bool                                               bShouldProceedToPlayMenu;                                   // 0x0033   (0x0001)  
	bool                                               bIsPartyEnabled;                                            // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	int32_t                                            MinPlayersCount;                                            // 0x0038   (0x0004)  
	float                                              MaxInactivityIngameTime;                                    // 0x003C   (0x0004)  
	float                                              MaxInactivityLobbyTime;                                     // 0x0040   (0x0004)  
	FName                                              DemoTutorial;                                               // 0x0044   (0x0008)  
	float                                              ResultsScreenFadeDuration;                                  // 0x004C   (0x0004)  
	float                                              ResultsScreenFadeTime;                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_7[0x34];                                      // 0x0054   (0x0034)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQDemoMode.ShouldSkipFirstTimeBoot
	bool ShouldSkipFirstTimeBoot() // [0x1180d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/BBQCore.BBQDemoMode.ShouldProceedToPlayMenu
	bool ShouldProceedToPlayMenu() // [0x207a340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/BBQCore.BBQDemoMode.ResetGame
	void ResetGame() // [0x2079d40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/BBQCore.BBQDemoMode.OnAdvancingFromStartScreen
	bool OnAdvancingFromStartScreen() // [0x113bd20] Native|Event|Public|BlueprintEvent 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/BBQCore.BBQDemoMode.IsPartyEnabled
	bool IsPartyEnabled() // [0x2077fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/BBQCore.BBQDemoMode.IsMetaGameDisabled
	bool IsMetaGameDisabled() // [0x2077f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/BBQCore.BBQDemoMode.IsCharacterSelectionAvailable
	bool IsCharacterSelectionAvailable() // [0x2077e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/BBQCore.BBQDemoMode.GetDemoMode
	UBBQDemoMode* GetDemoMode(UObject* WorldContextObject) // [0x2077630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQDemoMode* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(WorldContextObject);
	}
	// Function /Script/BBQCore.BBQDemoMode.ConnectWithLoadingScreen
	bool ConnectWithLoadingScreen() // [0x20771f0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
};

/// Class /Script/BBQCore.BBQDeveloperSettings
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UBBQDeveloperSettings : public UDeveloperSettings
{ 
public:
	bool                                               bSkipToInGameIfInEditor;                                    // 0x0038   (0x0001)  
	bool                                               bEndGameASAP;                                               // 0x0039   (0x0001)  
	bool                                               bDontEndIfNoOpposition;                                     // 0x003A   (0x0001)  
	bool                                               bDisableRestrainers;                                        // 0x003B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FSoftObjectPath                                    IntroLFOutfitOverride;                                      // 0x0040   (0x0018)  
	int32_t                                            IntroLFChainsawOverride;                                    // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            IntroVictimOverride;                                        // 0x0060   (0x0010)  
	FSoftObjectPath                                    IntroVictimOutfitOverride;                                  // 0x0070   (0x0018)  
};

/// Class /Script/BBQCore.BBQEquippableExecutionData
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UBBQEquippableExecutionData : public UDataAsset
{ 
public:
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FName                                              ExecutionDataName;                                          // 0x0034   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FText                                              ExecutionDisplayName;                                       // 0x0040   (0x0018)  
	FText                                              ExecutionDisplayDescription;                                // 0x0058   (0x0018)  
	TWeakObjectPtr<class UTexture2D*>                  ExecutionThumbnail;                                         // 0x0070   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0078   (0x0020)  MISSED
	FName                                              UnlockUID;                                                  // 0x0098   (0x0008)  
	TArray<FName>                                      ContentPackUnlockIDs;                                       // 0x00A0   (0x0010)  
};

/// Class /Script/BBQCore.BBQEventManagerFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQEventManagerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQCore.BBQEventManagerFunctionLibrary.IsEventActive
	bool IsEventActive(APlayerState* WorldContextObject, FString EventName) // [0x2077e50] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(APlayerState*, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, EventName);
	}
	// Function /Script/BBQCore.BBQEventManagerFunctionLibrary.GetEventValue
	FString GetEventValue(APlayerState* WorldContextObject, FString EventName, FString PropertyName) // [0x20777d0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(APlayerState*, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject, EventName, PropertyName);
	}
	// Function /Script/BBQCore.BBQEventManagerFunctionLibrary.GetEventFloatValue
	float GetEventFloatValue(APlayerState* WorldContextObject, BaseEventCategory EventCategory, float DefaultValue) // [0x20776c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(APlayerState*, BaseEventCategory, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(WorldContextObject, EventCategory, DefaultValue);
	}
};

/// Class /Script/BBQCore.BBQEventsDataAsset
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UBBQEventsDataAsset : public UDataAsset
{ 
public:
	TMap<BaseEventCategory, FBBQEventContainer>        EventDataMap;                                               // 0x0030   (0x0050)  
};

/// Class /Script/BBQCore.BBQPerk
/// Size: 0x0288 (648 bytes) (0x000028 - 0x000288) align 8 MaxSize: 0x0288
class UBBQPerk : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0028   (0x0050)  MISSED
	TArray<FName>                                      LevelModsApplied;                                           // 0x0078   (0x0010)  
	bool                                               bIsActivated;                                               // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            CurrentLevel;                                               // 0x008C   (0x0004)  
	int32_t                                            CurrentPoints;                                              // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0098   (0x0018)  
	FText                                              Description;                                                // 0x00B0   (0x0018)  
	FName                                              UIAssetIdentifier;                                          // 0x00C8   (0x0008)  
	FGameplayVariableInt                               ChargesVar;                                                 // 0x00D0   (0x0058)  
	bool                                               bUseDurationEffects;                                        // 0x0128   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0129   (0x0007)  MISSED
	TArray<class UClass*>                              DurationEffects;                                            // 0x0130   (0x0010)  
	FGameplayTagContainer                              DurationTags;                                               // 0x0140   (0x0020)  
	FGameplayVariableFloat                             DurationVar;                                                // 0x0160   (0x0058)  
	FGameplayTagContainer                              IconActivateTags;                                           // 0x01B8   (0x0020)  
	FGameplayTagContainer                              GrantedTags;                                                // 0x01D8   (0x0020)  
	FGameplayTagContainer                              InputReadyTags;                                             // 0x01F8   (0x0020)  
	TArray<class UClass*>                              Abilities;                                                  // 0x0218   (0x0010)  
	TArray<class UClass*>                              Effects;                                                    // 0x0228   (0x0010)  
	TArray<class UGameplayVariableMod*>                GameplayVariableMods;                                       // 0x0238   (0x0010)  
	TArray<FBBQBaseAttributeLevelModifier>             BaseAttributeLevelMods;                                     // 0x0248   (0x0010)  
	class UBBQPerkData*                                PerkData;                                                   // 0x0258   (0x0008)  
	FGameplayTagContainer                              ActivationRequiredTags;                                     // 0x0260   (0x0020)  
	bool                                               bActivatableWithPlayerContext;                              // 0x0280   (0x0001)  
	bool                                               bShowActivateButtonOnHUD;                                   // 0x0281   (0x0001)  
	bool                                               bShouldActivateAbilitiesOnActivate;                         // 0x0282   (0x0001)  
	unsigned char                                      UnknownData04_7[0x5];                                       // 0x0283   (0x0005)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQPerk.ShouldBeActive
	bool ShouldBeActive(ABBQBaseCharacter* Character) // [0x20853b0] Native|Event|Protected|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Character);
	}
	// Function /Script/BBQCore.BBQPerk.OnUpdate
	void OnUpdate(ABBQBaseCharacter* Character) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Character);
	}
	// Function /Script/BBQCore.BBQPerk.OnRep_CurrentLevel
	void OnRep_CurrentLevel(int32_t OldLevel) // [0x2084c50] Native|Protected     
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(OldLevel);
	}
	// Function /Script/BBQCore.BBQPerk.OnDeactivated
	void OnDeactivated(ABBQBaseCharacter* Character) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Character);
	}
	// Function /Script/BBQCore.BBQPerk.OnActivated
	void OnActivated(ABBQBaseCharacter* Character) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Character);
	}
	// Function /Script/BBQCore.BBQPerk.IsActivated
	bool IsActivated() // [0x2084bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/BBQCore.BBQPerk.GetPerkType
	EBBQPerkType GetPerkType(UClass*& PerkClass) // [0x20849d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef EBBQPerkType (*FuncPtr)(UClass*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(PerkClass);
	}
	// Function /Script/BBQCore.BBQPerk.ActivateAssignedAbilities
	void ActivateAssignedAbilities() // [0x20842c0] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func();
	}
};

/// Class /Script/BBQCore.BBQAbilityPerk
/// Size: 0x02D0 (720 bytes) (0x000288 - 0x0002D0) align 8 MaxSize: 0x02D0
class UBBQAbilityPerk : public UBBQPerk
{ 
public:
	FGameplayTagContainer                              NonActivatableAbilities;                                    // 0x0288   (0x0020)  
	FGameplayTagContainer                              NonCancelableAbilities;                                     // 0x02A8   (0x0020)  
	bool                                               bDisplayOnlyActiveAbilityDuration;                          // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02C9   (0x0007)  MISSED
};

/// Class /Script/BBQCore.BBQFamilyAbilityPerk
/// Size: 0x02D0 (720 bytes) (0x0002D0 - 0x0002D0) align 8 MaxSize: 0x02D0
class UBBQFamilyAbilityPerk : public UBBQAbilityPerk
{ 
public:
};

/// Class /Script/BBQCore.BBQFamilyMottoPerk
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UBBQFamilyMottoPerk : public UObject
{ 
public:
	int32_t                                            PerkUnlockBondLevel;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UClass*                                      perk;                                                       // 0x0030   (0x0008)  
	class UBBQMottoPerk*                               PerkPtr;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/BBQCore.BBQMottoPerk
/// Size: 0x0298 (664 bytes) (0x000288 - 0x000298) align 8 MaxSize: 0x0298
class UBBQMottoPerk : public UBBQPerk
{ 
public:
	int32_t                                            PerkUnlockBondLevel;                                        // 0x0288   (0x0004)  
	EMottoPerkCategory                                 PerkCategory;                                               // 0x028C   (0x0001)  
	ETeamID                                            ApplyPerkTo;                                                // 0x028D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x028E   (0x0002)  MISSED
	int32_t                                            MaxEffectStackingLimit;                                     // 0x0290   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0294   (0x0004)  MISSED
};

/// Class /Script/BBQCore.BBQFlickeringLightAudioComponent
/// Size: 0x00F0 (240 bytes) (0x0000B0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UBBQFlickeringLightAudioComponent : public UActorComponent
{ 
public:
	class UAkAudioEvent*                               AkEvent;                                                    // 0x00B0   (0x0008)  
	class UAkRtpc*                                     LightIntensityRtpc;                                         // 0x00B8   (0x0008)  
	EAkPoolPriority                                    Priority;                                                   // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	class UAkComponent*                                AkComponent;                                                // 0x00C8   (0x0008)  
	class UBBQAudioListenerSubsystem*                  ListenerSys;                                                // 0x00D0   (0x0008)  
	class UBBQAkComponentPoolSubsystem*                AkPool;                                                     // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQFlickeringLightAudioComponent.StopAudioAndDisableTick
	void StopAudioAndDisableTick(float FadeOutTime) // [0x207a650] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(FadeOutTime);
	}
	// Function /Script/BBQCore.BBQFlickeringLightAudioComponent.SetLightIntensityValue
	void SetLightIntensityValue(float Value) // [0x2079f40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Value);
	}
};

/// Class /Script/BBQCore.BBQPickupItemData
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UBBQPickupItemData : public UPrimaryDataAsset
{ 
public:
	class UTexture2D*                                  InventorySlotFilledIcon;                                    // 0x0030   (0x0008)  
	class UStaticMesh*                                 HeldItemMesh;                                               // 0x0038   (0x0008)  
	class UAkAudioEvent*                               SelectedInventoryItemAkEvent;                               // 0x0040   (0x0008)  
	TArray<EBBQAnimSlot>                               ConsumeItemAnimSlots;                                       // 0x0048   (0x0010)  
	FVector                                            HandPositionOffset;                                         // 0x0058   (0x000C)  
	FRotator                                           HandRotationOffset;                                         // 0x0064   (0x000C)  
	bool                                               bCanBeSwapped;                                              // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/BBQCore.BBQGameConstants
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 8 MaxSize: 0x0120
class UBBQGameConstants : public UDataAsset
{ 
public:
	int32_t                                            MaxFamilyBond;                                              // 0x0030   (0x0004)  
	int32_t                                            MinFamilyBond;                                              // 0x0034   (0x0004)  
	int32_t                                            MaxFamilyBondLevel;                                         // 0x0038   (0x0004)  
	int32_t                                            MinFamilyBondLevel;                                         // 0x003C   (0x0004)  
	int32_t                                            FamilyMottoPerksCount;                                      // 0x0040   (0x0004)  
	int32_t                                            PerFamilyMemberMottoPerksCount;                             // 0x0044   (0x0004)  
	TArray<class UClass*>                              DefaultFamilyMottoPerks;                                    // 0x0048   (0x0010)  
	class UDataTable*                                  FamilyBondLevelProgressionTable;                            // 0x0058   (0x0008)  
	int32_t                                            StartingFamilyBondPoints;                                   // 0x0060   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     InteractionLineOfSightChannel;                              // 0x0064   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     InteractionObjectChannel;                                   // 0x0065   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     InteractionCharacterChannel;                                // 0x0066   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     MeleeLineOfSightChannel;                                    // 0x0067   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     MeleeCollisionChannel;                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	TMap<FGameplayTag, class UBBQPickupItemData*>      PickupItemData;                                             // 0x0070   (0x0050)  
	TArray<FName>                                      LeatherfaceExecutionsForAchievement;                        // 0x00C0   (0x0010)  
	TArray<FName>                                      CookExecutionsForAchievement;                               // 0x00D0   (0x0010)  
	TArray<FName>                                      HitchhikerExecutionsForAchievement;                         // 0x00E0   (0x0010)  
	TArray<FName>                                      JohnnyExecutionsForAchievement;                             // 0x00F0   (0x0010)  
	TArray<FName>                                      SissyExecutionsForAchievement;                              // 0x0100   (0x0010)  
	int32_t                                            MaxVictimPlayers;                                           // 0x0110   (0x0004)  
	float                                              DisconnectedPlayerKillTime;                                 // 0x0114   (0x0004)  
	class UDataTable*                                  CustomMatchSettingDefinitionDataTable;                      // 0x0118   (0x0008)  
};

/// Class /Script/BBQCore.BBQGameInstance
/// Size: 0x09A0 (2464 bytes) (0x0001A8 - 0x0009A0) align 8 MaxSize: 0x09A0
class UBBQGameInstance : public UGameInstance
{ 
public:
	class ABBQPlayerPrefs*                             LocalPlayerPrefs;                                           // 0x01A8   (0x0008)  
	TArray<class APlayerState*>                        DisconnectedPlayers;                                        // 0x01B0   (0x0010)  
	class UClass*                                      DebugCLAndSeverWidgetClass;                                 // 0x01C0   (0x0008)  
	class UUserWidget*                                 DebugCLAndSeverWidget;                                      // 0x01C8   (0x0008)  
	class UClass*                                      DemoModeClass;                                              // 0x01D0   (0x0008)  
	class UBBQDemoMode*                                DemoMode;                                                   // 0x01D8   (0x0008)  
	class UBBQMapDataList*                             MapList;                                                    // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x01E8   (0x0088)  MISSED
	TWeakObjectPtr<class UBBQGameConstants*>           BBQGameConstants;                                           // 0x0270   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0278   (0x0020)  MISSED
	TWeakObjectPtr<class UBBQMetaGameConstants*>       MetaGameConstants;                                          // 0x0298   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x02A0   (0x0020)  MISSED
	class UStringTable*                                DefaultStringTable;                                         // 0x02C0   (0x0008)  
	TWeakObjectPtr<class UAkAudioEvent*>               MatchmakingSuccessAkEvent;                                  // 0x02C8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x02D0   (0x0020)  MISSED
	TMap<EMMGameMode, class UAkSwitchValue*>           GameModeSwitchValues;                                       // 0x02F0   (0x0050)  
	class UClass*                                      BBQMusicManagerClass;                                       // 0x0340   (0x0008)  
	class UBBQMusicManager*                            MusicManagerInstance;                                       // 0x0348   (0x0008)  
	class UClass*                                      BBQSaveManagerClass;                                        // 0x0350   (0x0008)  
	class UBBQControlSchemeSettings*                   BBQControlSchemeSettings;                                   // 0x0358   (0x0008)  
	class UBBQSaveManager*                             SaveManagerInstance;                                        // 0x0360   (0x0008)  
	class UBBQSocialService*                           SocialServiceInstance;                                      // 0x0368   (0x0008)  
	class UBBQTutorialManager*                         TutorialManagerInstance;                                    // 0x0370   (0x0008)  
	class UGameMessagesQueue*                          GameMessagesQueue;                                          // 0x0378   (0x0008)  
	class UClass*                                      PreloadManagerClass;                                        // 0x0380   (0x0008)  
	class UBBQPreloadManager*                          PreloadManagerInstance;                                     // 0x0388   (0x0008)  
	class UBBQLoadoutManager*                          LoadoutManagerInstance;                                     // 0x0390   (0x0008)  
	class UBBQUnlockableManager*                       UnlockableManagerInstance;                                  // 0x0398   (0x0008)  
	class UBBQPlayerAvatarCache*                       PlayerAvatarCacheInstance;                                  // 0x03A0   (0x0008)  
	class UBBQTitleUpsellData*                         TitleUpsellDataInstance;                                    // 0x03A8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x180];                                     // 0x03B0   (0x0180)  MISSED
	bool                                               bAllowTeamSelect;                                           // 0x0530   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0531   (0x0007)  MISSED
	SDK_UNDEFINED(16,440) /* FMulticastInlineDelegate */ __um(TravelFailureDelegate);                              // 0x0538   (0x0010)  
	SDK_UNDEFINED(16,441) /* FMulticastInlineDelegate */ __um(PlayerJoinedPartyDelegate);                          // 0x0548   (0x0010)  
	SDK_UNDEFINED(16,442) /* FMulticastInlineDelegate */ __um(PlayerLeftPartyDelegate);                            // 0x0558   (0x0010)  
	SDK_UNDEFINED(16,443) /* FMulticastInlineDelegate */ __um(NetworkCreatedDelegate);                             // 0x0568   (0x0010)  
	SDK_UNDEFINED(16,444) /* FMulticastInlineDelegate */ __um(PlayerJoinedLobbyDelegate);                          // 0x0578   (0x0010)  
	SDK_UNDEFINED(16,445) /* FMulticastInlineDelegate */ __um(PlayerLeftLobbyDelegate);                            // 0x0588   (0x0010)  
	SDK_UNDEFINED(16,446) /* FMulticastInlineDelegate */ __um(MatchmakeCompleteDelegate);                          // 0x0598   (0x0010)  
	SDK_UNDEFINED(16,447) /* FMulticastInlineDelegate */ __um(CancelMatchCompleteDelegate);                        // 0x05A8   (0x0010)  
	SDK_UNDEFINED(16,448) /* FMulticastInlineDelegate */ __um(NetworkJoinedDelegate);                              // 0x05B8   (0x0010)  
	unsigned char                                      UnknownData06_6[0x10];                                      // 0x05C8   (0x0010)  MISSED
	SDK_UNDEFINED(16,449) /* FMulticastInlineDelegate */ __um(OnSessionTypeChangedDelegate);                       // 0x05D8   (0x0010)  
	SDK_UNDEFINED(16,450) /* FMulticastInlineDelegate */ __um(LoadingScreenProgressEnableDelegate);                // 0x05E8   (0x0010)  
	SDK_UNDEFINED(16,451) /* FMulticastInlineDelegate */ __um(LoadingScreenProgressPercentageDelegate);            // 0x05F8   (0x0010)  
	SDK_UNDEFINED(16,452) /* FMulticastInlineDelegate */ __um(LoadingScreenProgressDateTimeStartSyncDelegate);     // 0x0608   (0x0010)  
	SDK_UNDEFINED(16,453) /* FMulticastInlineDelegate */ __um(OnRemoveLoadingScreenComplete);                      // 0x0618   (0x0010)  
	SDK_UNDEFINED(16,454) /* FMulticastInlineDelegate */ __um(OnServerTitleDataLoaded);                            // 0x0628   (0x0010)  
	SDK_UNDEFINED(16,455) /* FMulticastInlineDelegate */ __um(OnLoadingScreenShown);                               // 0x0638   (0x0010)  
	unsigned char                                      UnknownData07_6[0x60];                                      // 0x0648   (0x0060)  MISSED
	bool                                               bLoadingScreenVisible;                                      // 0x06A8   (0x0001)  
	unsigned char                                      UnknownData08_6[0x5F];                                      // 0x06A9   (0x005F)  MISSED
	TArray<FString>                                    AllowedPakList;                                             // 0x0708   (0x0010)  
	TArray<FString>                                    DisallowedPakList;                                          // 0x0718   (0x0010)  
	float                                              HttpTimeout;                                                // 0x0728   (0x0004)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x072C   (0x0004)  MISSED
	FString                                            RecordingName;                                              // 0x0730   (0x0010)  
	FString                                            FriendlyRecordingName;                                      // 0x0740   (0x0010)  
	float                                              ServerConnectDelay;                                         // 0x0750   (0x0004)  
	unsigned char                                      UnknownData10_6[0x4];                                       // 0x0754   (0x0004)  MISSED
	EBBQTimeOfDay                                      WantedTimeOfDay;                                            // 0x0758   (0x0001)  
	unsigned char                                      UnknownData11_6[0x7];                                       // 0x0759   (0x0007)  MISSED
	FString                                            WantedMap;                                                  // 0x0760   (0x0010)  
	int32_t                                            WantedMapIndex;                                             // 0x0770   (0x0004)  
	unsigned char                                      UnknownData12_6[0x4];                                       // 0x0774   (0x0004)  MISSED
	FBBQCustomMatchSettings                            CachedCustomMatchSettings;                                  // 0x0778   (0x0018)  
	unsigned char                                      UnknownData13_6[0x18];                                      // 0x0790   (0x0018)  MISSED
	class UMaterialParameterCollection*                BushParametersAsset;                                        // 0x07A8   (0x0008)  
	unsigned char                                      UnknownData14_6[0x70];                                      // 0x07B0   (0x0070)  MISSED
	FMatchResults                                      ActiveMatchResults;                                         // 0x0820   (0x0010)  
	unsigned char                                      UnknownData15_6[0x30];                                      // 0x0830   (0x0030)  MISSED
	class UBBQAchievements*                            BBQAchievements;                                            // 0x0860   (0x0008)  
	class UBBQControlSchemePersonaliser*               ControlSchemePersonaliser;                                  // 0x0868   (0x0008)  
	unsigned char                                      UnknownData16_7[0x130];                                     // 0x0870   (0x0130)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQGameInstance.UpdateAchievement
	void UpdateAchievement(FString AchievementTypeName, int32_t Progress, int32_t Required) // [0x207a710] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(AchievementTypeName, Progress, Required);
	}
	// Function /Script/BBQCore.BBQGameInstance.TrySetMapRandom
	void TrySetMapRandom() // [0x207a6f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.TitleDataRemoveKey
	void TitleDataRemoveKey(FString Key) // [0x1e13820] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Key);
	}
	// Function /Script/BBQCore.BBQGameInstance.TitleDataOverride
	void TitleDataOverride(FString Filename) // [0x1e13820] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Filename);
	}
	// Function /Script/BBQCore.BBQGameInstance.TitleDataDownload
	void TitleDataDownload() // [0x207a6d0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.TitleDataClear
	void TitleDataClear() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.TitleDataAddKey
	void TitleDataAddKey(FString Key, FString Value) // [0x1e75890] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Key, Value);
	}
	// Function /Script/BBQCore.BBQGameInstance.TagPlayer
	void TagPlayer(FString Tag) // [0x1e13820] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Tag);
	}
	// Function /Script/BBQCore.BBQGameInstance.StopRecording
	void StopRecording() // [0xb888e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.StartReplay
	void StartReplay() // [0x207a630] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.StartRecording
	void StartRecording() // [0x207a610] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.StartClientViewportFade
	void StartClientViewportFade(bool bToBlack, float Duration) // [0x207a540] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(bToBlack, Duration);
	}
	// Function /Script/BBQCore.BBQGameInstance.ShowTutorial
	void ShowTutorial(FName& Name) // [0x207a4b0] Final|Exec|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(Name);
	}
	// Function /Script/BBQCore.BBQGameInstance.ShowStoreUI
	bool ShowStoreUI() // [0x207a480] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.ShowNetState
	void ShowNetState() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.ShowLoadingScreen
	void ShowLoadingScreen(bool bIsMatchmakingScreen) // [0x207a3f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(bIsMatchmakingScreen);
	}
	// Function /Script/BBQCore.BBQGameInstance.ShowDebugLoadingScreen
	void ShowDebugLoadingScreen(bool bIsVictim) // [0x1e13bc0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(bIsVictim);
	}
	// Function /Script/BBQCore.BBQGameInstance.ShowCLAndServerName
	void ShowCLAndServerName(bool bShow) // [0x207a360] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func(bShow);
	}
	// Function /Script/BBQCore.BBQGameInstance.SetTeamSelection
	void SetTeamSelection(bool bSelect) // [0x207a2b0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func(bSelect);
	}
	// Function /Script/BBQCore.BBQGameInstance.SetStartMatchMakeOnReturn
	void SetStartMatchMakeOnReturn(bool bShouldStart) // [0x207a220] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func(bShouldStart);
	}
	// Function /Script/BBQCore.BBQGameInstance.SetPresenceTest
	void SetPresenceTest() // [0x207a200] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.SetNetworkFailure
	// void SetNetworkFailure(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);                                        // [0x207a130] Final|Native|Public|BlueprintCallable 
	// Function /Script/BBQCore.BBQGameInstance.SetNetworkError
	void SetNetworkError(EBBQNetError InNetworkError) // [0x207a0b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EBBQNetError);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		func(InNetworkError);
	}
	// Function /Script/BBQCore.BBQGameInstance.SetMercuryMaps
	void SetMercuryMaps() // [0x207a090] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.SetMenuError
	void SetMenuError(FText& Text) // [0x2079fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FText&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		func(Text);
	}
	// Function /Script/BBQCore.BBQGameInstance.SetGameMode
	void SetGameMode(EMMGameMode GAMEMODE) // [0x2079ec0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EMMGameMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		func(GAMEMODE);
	}
	// Function /Script/BBQCore.BBQGameInstance.SetAudioPreferenceOutputType
	void SetAudioPreferenceOutputType(bool bIsSpeakers) // [0x2079e30] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		func(bIsSpeakers);
	}
	// Function /Script/BBQCore.BBQGameInstance.SetAudioPreference
	void SetAudioPreference(FName Preference, float Amount) // [0x2079d60] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		func(Preference, Amount);
	}
	// Function /Script/BBQCore.BBQGameInstance.ResetOnlineUserData
	void ResetOnlineUserData() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.RemoveLoadingScreen
	void RemoveLoadingScreen() // [0x2079d20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.Relog
	void Relog(FString Username) // [0x2079c30] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func(Username);
	}
	// Function /Script/BBQCore.BBQGameInstance.ReceiveMenuError
	FText ReceiveMenuError() // [0x2079b90] Final|Native|Public|BlueprintCallable 
	{
		typedef FText (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.QueryPresenceTest
	void QueryPresenceTest() // [0x2079b70] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.PreLoadMap_UnrealCB
	void PreLoadMap_UnrealCB(FString InMapName) // [0x2079ad0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		func(InMapName);
	}
	// Function /Script/BBQCore.BBQGameInstance.PostLoadMap_UnrealCB
	void PostLoadMap_UnrealCB(UWorld* InLoadedWorld) // [0x2079a40] Final|Native|Protected 
	{
		typedef void (*FuncPtr)(UWorld*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		func(InLoadedWorld);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPUnBlockPlayer
	void PFPUnBlockPlayer(FString PlayerName) // [0x2079950] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		func(PlayerName);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPShowInviteUI
	void PFPShowInviteUI(EBBQNetworkType Type) // [0x20798d0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EBBQNetworkType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		func(Type);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPSetVoiceChatEnabled
	void PFPSetVoiceChatEnabled(bool bEnableVoiceChat) // [0x2079840] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		func(bEnableVoiceChat);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPSetTextToSpeechEnabled
	void PFPSetTextToSpeechEnabled(bool bEnableTTS) // [0x20797b0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		func(bEnableTTS);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPSetSpeechToTextEnabled
	void PFPSetSpeechToTextEnabled(bool bEnableSTT) // [0x2079720] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		func(bEnableSTT);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPSetPlayerRank
	void PFPSetPlayerRank(int32_t Rank) // [0x1e138c0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		func(Rank);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPSetPlayerLevel
	void PFPSetPlayerLevel(int32_t level) // [0x1e138c0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		func(level);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPSetMicrophoneMode
	void PFPSetMicrophoneMode(int32_t microphoneMode) // [0x2079690] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		func(microphoneMode);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPSetMatchmakingQueue
	void PFPSetMatchmakingQueue(int32_t QueueType) // [0x1e138c0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		func(QueueType);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPSendMessage
	void PFPSendMessage(uint32_t uSkinId, uint32_t uTeamId) // [0x20795c0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(uint32_t, uint32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		func(uSkinId, uTeamId);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPRedeemServerInvite
	void PFPRedeemServerInvite(FString InviteCode) // [0xc5f270] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		func(InviteCode);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPRedeemPartyInvite
	void PFPRedeemPartyInvite(FString InviteCode) // [0x20794d0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[46]);
		func(InviteCode);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPPrintServerInvite
	void PFPPrintServerInvite() // [0x20794b0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[47]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPPrintPlayerIds
	void PFPPrintPlayerIds(int32_t networkId) // [0x2079420] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[48]);
		func(networkId);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPPrintPartyInvite
	void PFPPrintPartyInvite() // [0x2079400] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPMatchmakeFlow
	void PFPMatchmakeFlow(int32_t Team) // [0x1e138c0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		func(Team);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPLeaveParty
	void PFPLeaveParty() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPLeaveNetwork
	void PFPLeaveNetwork(int32_t networkId) // [0x1e138c0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		func(networkId);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPKickMember
	void PFPKickMember(FString PlayerId, int32_t networkId) // [0x2079320] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[53]);
		func(PlayerId, networkId);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPJoinNetwork
	void PFPJoinNetwork(FString serializedNetworkDescriptor, FString networkInvite, int32_t networkId) // [0x20791e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		func(serializedNetworkDescriptor, networkInvite, networkId);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPGetNetworkMemberNames
	// TMap<FString, FString> PFPGetNetworkMemberNames(int32_t networkId);                                                      // [0x2079140] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/BBQCore.BBQGameInstance.PFPGetNetworkDescriptor
	void PFPGetNetworkDescriptor(int32_t networkId) // [0x1e138c0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		func(networkId);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPDebugSetIndicatorsEnabled
	void PFPDebugSetIndicatorsEnabled(bool bEnableDebugIndicators) // [0x20790b0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		func(bEnableDebugIndicators);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPDebugSetAllowAllPlayersToChat
	void PFPDebugSetAllowAllPlayersToChat(bool bAllowAllPlayers) // [0x2079020] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		func(bAllowAllPlayers);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPDebugPrintLibraryStatistics
	void PFPDebugPrintLibraryStatistics() // [0x2079000] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPDebugPrintLibraryState
	void PFPDebugPrintLibraryState() // [0x2078fe0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[60]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPDebugEnableVerboseLogging
	void PFPDebugEnableVerboseLogging(bool bEnableVerboseLogging) // [0x2078f50] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[61]);
		func(bEnableVerboseLogging);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPCreateNetwork
	void PFPCreateNetwork(int32_t networkId) // [0x2078ec0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[62]);
		func(networkId);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPCreateCustomLobby
	void PFPCreateCustomLobby() // [0xb888e0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[63]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPCopyPlayFabId
	void PFPCopyPlayFabId() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[64]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPChatSynthesizeTextToSpeech
	void PFPChatSynthesizeTextToSpeech(FString Message) // [0x2078e20] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[65]);
		func(Message);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPChatMute
	void PFPChatMute(bool bMute, int32_t networkId) // [0x2078d50] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[66]);
		func(bMute, networkId);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPChatMessage
	void PFPChatMessage(FString Message, int32_t networkId) // [0x2078c70] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[67]);
		func(Message, networkId);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPChatButtonStateChanged
	void PFPChatButtonStateChanged(bool bIsPressed) // [0x2078be0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[68]);
		func(bIsPressed);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPCanShowInviteUI
	bool PFPCanShowInviteUI(EBBQNetworkType Type) // [0x2078ac0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(EBBQNetworkType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[69]);
		return func(Type);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPCancelMatchMakeFlow
	void PFPCancelMatchMakeFlow(bool BroadcastCancelation) // [0x2078b50] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[70]);
		func(BroadcastCancelation);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFPBlockPlayer
	void PFPBlockPlayer(FString PlayerName) // [0x20789d0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[71]);
		func(PlayerName);
	}
	// Function /Script/BBQCore.BBQGameInstance.PFFetchPlayerData
	void PFFetchPlayerData(FName& PlayFabId) // [0x2078940] Final|Exec|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[72]);
		func(PlayFabId);
	}
	// Function /Script/BBQCore.BBQGameInstance.OnTravelFailure__DelegateSignature
	// void OnTravelFailure__DelegateSignature(TEnumAsByte<ETravelFailure> FailureType);                                        // [0x2438a30] MulticastDelegate|Public|Delegate 
	// Function /Script/BBQCore.BBQGameInstance.OnPlayerLeftParty
	void OnPlayerLeftParty(FString EntityId) // [0x2078860] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[74]);
		func(EntityId);
	}
	// Function /Script/BBQCore.BBQGameInstance.OnPlayerLeftLobby
	void OnPlayerLeftLobby(FString EntityId) // [0x20787c0] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[75]);
		func(EntityId);
	}
	// Function /Script/BBQCore.BBQGameInstance.OnPlayerJoinedParty
	void OnPlayerJoinedParty(FString EntityId, FString PlayerName) // [0x20786c0] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[76]);
		func(EntityId, PlayerName);
	}
	// Function /Script/BBQCore.BBQGameInstance.OnPlayerJoinedLobby
	void OnPlayerJoinedLobby(FString EntityId, FString PlayerName) // [0x20785c0] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[77]);
		func(EntityId, PlayerName);
	}
	// Function /Script/BBQCore.BBQGameInstance.OnlineHotfixAvailability
	void OnlineHotfixAvailability() // [0x2078920] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[78]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.OnlineHotfixApply
	void OnlineHotfixApply() // [0x2078900] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[79]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.MercuryMatchCreate
	void MercuryMatchCreate() // [0x20785a0] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[80]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.Logout
	void Logout() // [0x2078580] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[81]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.LoginWithPlayFab
	void LoginWithPlayFab(FString Username, FString Password) // [0x2078400] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[82]);
		func(Username, Password);
	}
	// Function /Script/BBQCore.BBQGameInstance.LoginWithPlatform
	void LoginWithPlatform(bool bCreate) // [0x2078370] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[83]);
		func(bCreate);
	}
	// Function /Script/BBQCore.BBQGameInstance.LoginWithCustomID
	void LoginWithCustomID(FString CustomId, bool bCreate) // [0x2078240] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[84]);
		func(CustomId, bCreate);
	}
	// Function /Script/BBQCore.BBQGameInstance.ListPlatformSessions
	void ListPlatformSessions() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[85]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.LinkWithPlatform
	void LinkWithPlatform(bool bForce) // [0x20781b0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[86]);
		func(bForce);
	}
	// Function /Script/BBQCore.BBQGameInstance.LinkWithCustomID
	void LinkWithCustomID(FString CustomId, bool bForce) // [0x2078080] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[87]);
		func(CustomId, bForce);
	}
	// Function /Script/BBQCore.BBQGameInstance.JoinSerialMode
	void JoinSerialMode(FString ConnectionString) // [0x1e13820] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[88]);
		func(ConnectionString);
	}
	// Function /Script/BBQCore.BBQGameInstance.IsSerialMode
	bool IsSerialMode() // [0x2078050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[89]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.IsPlayMenuError
	bool IsPlayMenuError() // [0x2078020] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[90]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.IsPartyRestrictedMode
	bool IsPartyRestrictedMode() // [0x2077ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[91]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.IsMuseumMode
	bool IsMuseumMode() // [0x2077fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[92]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.IsMatchmakingLoadingScreenVisible
	bool IsMatchmakingLoadingScreenVisible() // [0x2077f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[93]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.IsMatchMakeSession
	bool IsMatchMakeSession() // [0x2077f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[94]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.IsCustomSession
	bool IsCustomSession() // [0x2077e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[95]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.IsAchievementUnlocked
	bool IsAchievementUnlocked(FString AchievementName, bool& bError) // [0x2077d00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FString, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[96]);
		return func(AchievementName, bError);
	}
	// Function /Script/BBQCore.BBQGameInstance.HideDebugLoadingScreen
	void HideDebugLoadingScreen() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[97]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetWantedTimeOfDay
	EBBQTimeOfDay GetWantedTimeOfDay() // [0x2077ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EBBQTimeOfDay (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[98]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetUnlockableManagerInstance
	UBBQUnlockableManager* GetUnlockableManagerInstance() // [0x2077cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQUnlockableManager* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[99]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetTutorialManagerInstance
	UBBQTutorialManager* GetTutorialManagerInstance() // [0x2077ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQTutorialManager* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[100]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetTitleUpsellDataInstance
	UBBQTitleUpsellData* GetTitleUpsellDataInstance() // [0x2077c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQTitleUpsellData* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[101]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetTeamIDForClass
	ETeamID GetTeamIDForClass(UClass* ClassType) // [0x2077be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef ETeamID (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[102]);
		return func(ClassType);
	}
	// Function /Script/BBQCore.BBQGameInstance.GetSocialServiceInstance
	UBBQSocialService* GetSocialServiceInstance() // [0x2077bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQSocialService* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[103]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetServerName
	FString GetServerName() // [0x2077b40] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[104]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetSaveManagerInstance
	UBBQSaveManager* GetSaveManagerInstance() // [0x2077b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQSaveManager* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[105]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetPreloadManagerInstance
	UBBQPreloadManager* GetPreloadManagerInstance() // [0x2077b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQPreloadManager* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[106]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetPlayerSetupProperties
	UPlayerSetupProperties* GetPlayerSetupProperties() // [0x2077ad0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UPlayerSetupProperties* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[107]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetPlayerAvatarCacheInstance
	UBBQPlayerAvatarCache* GetPlayerAvatarCacheInstance() // [0x1e1c630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQPlayerAvatarCache* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[108]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetNetworkError
	EBBQNetError GetNetworkError() // [0x2077ab0] Final|Native|Public|BlueprintCallable 
	{
		typedef EBBQNetError (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[109]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetMusicManagerInstance
	UBBQMusicManager* GetMusicManagerInstance() // [0x1e4e140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQMusicManager* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[110]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetMMTeamId
	EMMTeamID GetMMTeamId() // [0x20779a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef EMMTeamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[111]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetMetaGameConstants
	UBBQMetaGameConstants* GetMetaGameConstants() // [0x20779d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQMetaGameConstants* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[112]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetLocalPlayerPrefs
	ABBQPlayerPrefs* GetLocalPlayerPrefs() // [0x2077970] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class ABBQPlayerPrefs* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[113]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetLoadoutManagerInstance
	UBBQLoadoutManager* GetLoadoutManagerInstance() // [0x2077950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQLoadoutManager* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[114]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.GetBBQGameConstants
	UBBQGameConstants* GetBBQGameConstants() // [0x20774c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQGameConstants* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[115]);
		return func();
	}
	// Function /Script/BBQCore.BBQGameInstance.FakePartyError
	void FakePartyError() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[116]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.FakeNetworkError
	void FakeNetworkError() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[117]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.FakeLobbyPenalties
	void FakeLobbyPenalties(int64_t PenaltyTimeSeconds) // [0x2077430] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(int64_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[118]);
		func(PenaltyTimeSeconds);
	}
	// Function /Script/BBQCore.BBQGameInstance.EnableTitleDataCmds
	void EnableTitleDataCmds() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[119]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.CreatePlayFabAccount
	void CreatePlayFabAccount(FString Username, FString Email, FString Password) // [0x2077220] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString, FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[120]);
		func(Username, Email, Password);
	}
	// Function /Script/BBQCore.BBQGameInstance.ClearTutorialProgress
	void ClearTutorialProgress() // [0x20771d0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[121]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.ChangeLevel
	void ChangeLevel(FString InTravelURL) // [0x2077130] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[122]);
		func(InTravelURL);
	}
	// Function /Script/BBQCore.BBQGameInstance.BroadcastTravelFailure
	// void BroadcastTravelFailure(TEnumAsByte<ETravelFailure> FailureType);                                                    // [0x20770a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BBQCore.BBQGameInstance.BP_ShowLoadingScreen
	void BP_ShowLoadingScreen() // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[124]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.BP_RemoveLoadingScreen
	void BP_RemoveLoadingScreen() // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[125]);
		func();
	}
	// Function /Script/BBQCore.BBQGameInstance.AddMatchEvent
	void AddMatchEvent(FMatchFact& NewMatchFact) // [0x2076ff0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FMatchFact&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[126]);
		func(NewMatchFact);
	}
};

/// Class /Script/BBQCore.BBQBlueprintFunctionLibraryGameInstance
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQBlueprintFunctionLibraryGameInstance : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQCore.BBQBlueprintFunctionLibraryGameInstance.GetBBQGameInstance
	UBBQGameInstance* GetBBQGameInstance(UObject* WorldContextObject) // [0x20775a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQGameInstance* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject);
	}
};

/// Class /Script/BBQCore.BBQBlueprintFunctionLibraryGameMode
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQBlueprintFunctionLibraryGameMode : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQCore.BBQBlueprintFunctionLibraryGameMode.GetBBQGameMode
	ABBQGameMode* GetBBQGameMode(UObject* WorldContextObject) // [0x207f550] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class ABBQGameMode* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject);
	}
};

/// Class /Script/BBQCore.BBQGameModifierDefinitionAsset
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UBBQGameModifierDefinitionAsset : public UDataAsset
{ 
public:
	FText                                              LocalizedName;                                              // 0x0030   (0x0018)  
	FText                                              LocalizedDescription;                                       // 0x0048   (0x0018)  
	FName                                              ModifierName;                                               // 0x0060   (0x0008)  
	UBBQGameModifierType                               ModifierType;                                               // 0x0068   (0x0001)  
	bool                                               DefaultBoolValue;                                           // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	int32_t                                            DefaultIntegerValue;                                        // 0x006C   (0x0004)  
	int32_t                                            MinIntegerValue;                                            // 0x0070   (0x0004)  
	int32_t                                            MaxIntegerValue;                                            // 0x0074   (0x0004)  
	float                                              DefaultFloatValue;                                          // 0x0078   (0x0004)  
	float                                              MinFloatValue;                                              // 0x007C   (0x0004)  
	float                                              MaxFloatValue;                                              // 0x0080   (0x0004)  
	char                                               DefaultEnumValue;                                           // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0085   (0x0003)  MISSED
};

/// Class /Script/BBQCore.BBQGameModifierFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQGameModifierFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQCore.BBQGameModifierFunctionLibrary.ApplyIntegerGameModifier
	void ApplyIntegerGameModifier(UObject* WorldContextObject, FName ModifierName, int32_t& Value) // [0x207eb60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FName, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(WorldContextObject, ModifierName, Value);
	}
	// Function /Script/BBQCore.BBQGameModifierFunctionLibrary.ApplyFloatGameModifier
	void ApplyFloatGameModifier(UObject* WorldContextObject, FName ModifierName, float& Value) // [0x207ea50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FName, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(WorldContextObject, ModifierName, Value);
	}
	// Function /Script/BBQCore.BBQGameModifierFunctionLibrary.ApplyEnumGameModifier
	void ApplyEnumGameModifier(UObject* WorldContextObject, FName ModifierName, char& Value) // [0x207e940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FName, char&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(WorldContextObject, ModifierName, Value);
	}
	// Function /Script/BBQCore.BBQGameModifierFunctionLibrary.ApplyBooleanGameModifier
	void ApplyBooleanGameModifier(UObject* WorldContextObject, FName ModifierName, bool& Value) // [0x207e830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FName, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(WorldContextObject, ModifierName, Value);
	}
};

/// Class /Script/BBQCore.BBQGameplayAbilitySet
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UBBQGameplayAbilitySet : public UDataAsset
{ 
public:
	TArray<FBBQGameplayAbilityInfo>                    Abilities;                                                  // 0x0030   (0x0010)  
};

/// Class /Script/BBQCore.BBQGameplayCueManager
/// Size: 0x0310 (784 bytes) (0x000310 - 0x000310) align 8 MaxSize: 0x0310
class UBBQGameplayCueManager : public UGameplayCueManager
{ 
public:
};

/// Class /Script/BBQCore.BBQVariableBasedModifiersExecutionCalculation
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBBQVariableBasedModifiersExecutionCalculation : public UGameplayEffectExecutionCalculation
{ 
public:
};

/// Class /Script/BBQCore.BBQVariableBasedMagnitudeCalculation
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UBBQVariableBasedMagnitudeCalculation : public UGameplayModMagnitudeCalculation
{ 
public:
	FName                                              BackingVariableKey;                                         // 0x0040   (0x0008)  
};

/// Class /Script/BBQCore.BBQGameplayEffect
/// Size: 0x08F8 (2296 bytes) (0x000800 - 0x0008F8) align 8 MaxSize: 0x08F8
class UBBQGameplayEffect : public UGameplayEffect
{ 
public:
	float                                              DefaultLevel;                                               // 0x0800   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0804   (0x0004)  MISSED
	FDataTableRowHandle                                ActivityEventOnApplication;                                 // 0x0808   (0x0010)  
	class UGameplayVariableMod*                        GameplayVariableModToApply;                                 // 0x0818   (0x0008)  
	TMap<FName, FBBQBackingGameplayVariable>           BackingGameplayVariables;                                   // 0x0820   (0x0050)  
	TArray<FGameplayVariable>                          GameplayVariablesToCaptureFromTarget;                       // 0x0870   (0x0010)  
	TArray<FBBQVariableBasedModifierInfo>              VariableBasedModifiers;                                     // 0x0880   (0x0010)  
	FInheritedTagContainer                             CancelActiveAbilitiesWithTags;                              // 0x0890   (0x0060)  
	bool                                               bRemoveConditionalGameplayEffects;                          // 0x08F0   (0x0001)  
	bool                                               bUseOriginalInstigator;                                     // 0x08F1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x08F2   (0x0006)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQGameplayEffect.GetCapturedGameplayVariable
	float GetCapturedGameplayVariable(FGameplayEffectSpec& Spec, FGameplayVariable Variable, float DefaultValue) // [0x207f7d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&, FGameplayVariable, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec, Variable, DefaultValue);
	}
	// Function /Script/BBQCore.BBQGameplayEffect.GetBackingGameplayVariableValue
	float GetBackingGameplayVariableValue(FGameplayEffectSpec& Spec, FName Key, float DefaultValue) // [0x207f670] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&, FName, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Spec, Key, DefaultValue);
	}
};

/// Class /Script/BBQCore.BBQGamePreferencesSave
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UBBQGamePreferencesSave : public UBBQSaveGame
{ 
public:
	int32_t                                            Language;                                                   // 0x0040   (0x0004)  
	bool                                               Subtitles;                                                  // 0x0044   (0x0001)  
	bool                                               AnonymiseNames;                                             // 0x0045   (0x0001)  
	EHUDVisibilityOptions                              HUDVisibility;                                              // 0x0046   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0047   (0x0001)  MISSED
	float                                              VibrationIntensity;                                         // 0x0048   (0x0004)  
	bool                                               CrossPlayAllowed;                                           // 0x004C   (0x0001)  
	bool                                               CrossPlayConsoleOnly;                                       // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x004E   (0x0002)  MISSED
};

/// Class /Script/BBQCore.BBQGameSession
/// Size: 0x0258 (600 bytes) (0x000240 - 0x000258) align 8 MaxSize: 0x0258
class ABBQGameSession : public AGameSession
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0240   (0x0018)  MISSED
};

/// Class /Script/BBQCore.BBQBlueprintFunctionLibraryGameState
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQBlueprintFunctionLibraryGameState : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQCore.BBQBlueprintFunctionLibraryGameState.GetBBQGameState
	ABBQGameState* GetBBQGameState(UObject* WorldContextObject) // [0x207f5e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class ABBQGameState* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject);
	}
};

/// Class /Script/BBQCore.BBQGameUserSettings
/// Size: 0x0130 (304 bytes) (0x000120 - 0x000130) align 8 MaxSize: 0x0130
class UBBQGameUserSettings : public UGameUserSettings
{ 
public:
	bool                                               bDLSSEnabled;                                               // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	int32_t                                            DLSSMode;                                                   // 0x0124   (0x0004)  
	bool                                               bFSREnabled;                                                // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0129   (0x0003)  MISSED
	int32_t                                            FSRMode;                                                    // 0x012C   (0x0004)  
};

/// Class /Script/BBQCore.BBQLoadoutComponent
/// Size: 0x0200 (512 bytes) (0x0000B0 - 0x000200) align 8 MaxSize: 0x0200
class UBBQLoadoutComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0xA0];                                      // 0x00B0   (0x00A0)  MISSED
	FAttributePointDistribution                        PointDistribution;                                          // 0x0150   (0x0018)  
	class UClass*                                      StarSignPerk;                                               // 0x0168   (0x0008)  
	class UBBQBasePlayerAttributeAsset*                DefaultAttributeAsset;                                      // 0x0170   (0x0008)  
	TArray<FAppliedLevelMod>                           AttributeLevelModsApplied;                                  // 0x0178   (0x0010)  
	TArray<FAppliedLevelMod>                           LevelModsAppliedInGame;                                     // 0x0188   (0x0010)  
	TArray<FAppliedLevelMod>                           CustomAttributeModsApplied;                                 // 0x0198   (0x0010)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x01A8   (0x0058)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQLoadoutComponent.Server_ScaleAttributeLevelInGame
	void Server_ScaleAttributeLevelInGame(FAttributePointDistribution NewDistribution) // [0x20850f0] Net|NetReliableNative|Event|Protected|NetServer 
	{
		typedef void (*FuncPtr)(FAttributePointDistribution);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewDistribution);
	}
	// Function /Script/BBQCore.BBQLoadoutComponent.Server_ScaleAttributeLevel
	void Server_ScaleAttributeLevel(FAttributePointDistribution From) // [0x2085040] Net|NetReliableNative|Event|Protected|NetServer 
	{
		typedef void (*FuncPtr)(FAttributePointDistribution);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(From);
	}
	// Function /Script/BBQCore.BBQLoadoutComponent.Server_SaveAssignedPerks
	void Server_SaveAssignedPerks(UClass* PerkClass) // [0x1e59760] Net|NetReliableNative|Event|Protected|NetServer 
	{
		typedef void (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(PerkClass);
	}
	// Function /Script/BBQCore.BBQLoadoutComponent.OnRep_StarSignPerkChanged
	void OnRep_StarSignPerkChanged() // [0x2084ce0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/BBQCore.BBQLoadoutComponent.OnRep_AttributePointsChanged
	void OnRep_AttributePointsChanged() // [0x2084c30] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
};

/// Class /Script/BBQCore.BBQLoadoutManager
/// Size: 0x0160 (352 bytes) (0x000028 - 0x000160) align 8 MaxSize: 0x0160
class UBBQLoadoutManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UBBQGameInstance*                            GameInstance;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_7[0x120];                                     // 0x0040   (0x0120)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQLoadoutManager.SaveLoadoutData
	void SaveLoadoutData(FName& CharacterName, int32_t LoadoutIndex, FBBQLoadoutData& LoadoutData) // [0x2084ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName&, int32_t, FBBQLoadoutData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(CharacterName, LoadoutIndex, LoadoutData);
	}
	// Function /Script/BBQCore.BBQLoadoutManager.PlayerLoadoutCollectionInitialized__DelegateSignature
	void PlayerLoadoutCollectionInitialized__DelegateSignature() // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/BBQCore.BBQLoadoutManager.IsPlayerLoadoutCollectionInitialized
	bool IsPlayerLoadoutCollectionInitialized() // [0x2084c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/BBQCore.BBQLoadoutManager.GetSavedLoadoutData
	FBBQLoadoutData GetSavedLoadoutData(FName& CharacterName, int32_t LoadoutIndex) // [0x2084a60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FBBQLoadoutData (*FuncPtr)(FName&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(CharacterName, LoadoutIndex);
	}
	// Function /Script/BBQCore.BBQLoadoutManager.GetLastUsedLoadoutSlotIndex
	int32_t GetLastUsedLoadoutSlotIndex(FName& CharacterName) // [0x2084730] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(CharacterName);
	}
	// Function /Script/BBQCore.BBQLoadoutManager.GetDefaultLoadoutData
	FBBQLoadoutData GetDefaultLoadoutData(FName& CharacterName, int32_t DesiredIndex) // [0x20845c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FBBQLoadoutData (*FuncPtr)(FName&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(CharacterName, DesiredIndex);
	}
	// Function /Script/BBQCore.BBQLoadoutManager.Get
	UBBQLoadoutManager* Get(UObject* WorldContextObject) // [0x20844a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UBBQLoadoutManager* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(WorldContextObject);
	}
};

/// Class /Script/BBQCore.BBQMapDataAsset
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x0000D8) align 8 MaxSize: 0x00D8
class UBBQMapDataAsset : public UPrimaryDataAsset
{ 
public:
	bool                                               bDeveloperMap;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            MenuOrder;                                                  // 0x0034   (0x0004)  
	FName                                              MapID;                                                      // 0x0038   (0x0008)  
	FBBQMapData                                        MapData;                                                    // 0x0040   (0x0098)  
};

/// Class /Script/BBQCore.BBQMapDataList
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UBBQMapDataList : public UObject
{ 
public:
	TArray<class UBBQMapDataAsset*>                    MapData;                                                    // 0x0028   (0x0010)  
	TArray<class UBBQMapDataAsset*>                    DeveloperMapData;                                           // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED
};

/// Class /Script/BBQCore.BBQMetaGameConstants
/// Size: 0x0220 (544 bytes) (0x000030 - 0x000220) align 8 MaxSize: 0x0220
class UBBQMetaGameConstants : public UDataAsset
{ 
public:
	float                                              PerkGainedXpMultiplier;                                     // 0x0030   (0x0004)  
	int32_t                                            AttributePointsCost;                                        // 0x0034   (0x0004)  
	int32_t                                            RandomNodesCost;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FString>                                    RequiredCharactersForAllCharacterLevelsAchievement;         // 0x0040   (0x0010)  
	int32_t                                            StartingCharacterLevel;                                     // 0x0050   (0x0004)  
	int32_t                                            RequiredLevelForAllCharacterLevelsAchievement;              // 0x0054   (0x0004)  
	class UBBQEventsDataAsset*                         BBQEventsDataAsset;                                         // 0x0058   (0x0008)  
	class UDataTable*                                  LevelProgressionTable;                                      // 0x0060   (0x0008)  
	class UDataTable*                                  CharacterLevelDataTable;                                    // 0x0068   (0x0008)  
	class UDataTable*                                  PerksDataTable;                                             // 0x0070   (0x0008)  
	class UDataTable*                                  TutorialsDataTable;                                         // 0x0078   (0x0008)  
	class UDataTable*                                  AchievementsDataTable;                                      // 0x0080   (0x0008)  
	class UCompositeDataTable*                         UnlockableDefinitionsCompositeDataTable;                    // 0x0088   (0x0008)  
	class UDataTable*                                  UnlockableConditionsDataTable;                              // 0x0090   (0x0008)  
	class UDataTable*                                  UnlockableArtDataTable;                                     // 0x0098   (0x0008)  
	class UDataTable*                                  UnlockableModelSkinDataTable;                               // 0x00A0   (0x0008)  
	class UDataTable*                                  UnlockableTextureSkinDataTable;                             // 0x00A8   (0x0008)  
	class UDataTable*                                  UnlockableExecutionDataTable;                               // 0x00B0   (0x0008)  
	class UDataTable*                                  UnlockableWeaponDataTable;                                  // 0x00B8   (0x0008)  
	FDataTableRowHandle                                ActivityEventOnKill;                                        // 0x00C0   (0x0010)  
	FDataTableRowHandle                                ActivityEventOnKillMercury;                                 // 0x00D0   (0x0010)  
	FDataTableRowHandle                                ActivityEventMercuryFearNotifyJohnny;                       // 0x00E0   (0x0010)  
	FDataTableRowHandle                                ActivityEventMercuryFearNotify;                             // 0x00F0   (0x0010)  
	FDataTableRowHandle                                LastVictimStandingVictimEvent;                              // 0x0100   (0x0010)  
	FDataTableRowHandle                                LastVictimStandingFamilyEvent;                              // 0x0110   (0x0010)  
	FDataTableRowHandle                                ActivityEventOnIncapacitate;                                // 0x0120   (0x0010)  
	FDataTableRowHandle                                FamilyBondUpEvent;                                          // 0x0130   (0x0010)  
	FDataTableRowHandle                                FamilyBondDownEvent;                                        // 0x0140   (0x0010)  
	FDataTableRowHandle                                SonarActivationWarningEvent;                                // 0x0150   (0x0010)  
	FDataTableRowHandle                                SonarActivationMAXWarningEvent;                             // 0x0160   (0x0010)  
	FDataTableRowHandle                                SonarActivationWarningFamilyForVictimsEvent;                // 0x0170   (0x0010)  
	FDataTableRowHandle                                SonarActivationWarningFamilyEvent;                          // 0x0180   (0x0010)  
	FDataTableRowHandle                                SonarActivationMAXWarningFamilyEvent;                       // 0x0190   (0x0010)  
	FDataTableRowHandle                                SonarActivationWarningFamilySpottedEvent;                   // 0x01A0   (0x0010)  
	FDataTableRowHandle                                ActivityEventPlayerDisconnected;                            // 0x01B0   (0x0010)  
	TMap<class UClass*, FName>                         PerkIdMap;                                                  // 0x01C0   (0x0050)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0210   (0x0010)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQMetaGameConstants.GetPerkId
	FName GetPerkId(UObject* WorldContextObject, UClass* PerkClass) // [0x2084900] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FName (*FuncPtr)(UObject*, UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, PerkClass);
	}
	// Function /Script/BBQCore.BBQMetaGameConstants.GetPerkCost
	int32_t GetPerkCost(FName PerkId) // [0x2084860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(PerkId);
	}
	// Function /Script/BBQCore.BBQMetaGameConstants.GetMetaGameConstants
	UBBQMetaGameConstants* GetMetaGameConstants(UObject* WorldContextObject) // [0x20847d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQMetaGameConstants* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(WorldContextObject);
	}
	// Function /Script/BBQCore.BBQMetaGameConstants.FindPerkId
	FName FindPerkId(UClass* PerkClass) // [0x2084410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FName (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(PerkClass);
	}
	// Function /Script/BBQCore.BBQMetaGameConstants.FindPerkClassFromUIAssetID
	UClass* FindPerkClassFromUIAssetID(FName& PerkUIAssetID) // [0x2084370] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UClass* (*FuncPtr)(FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(PerkUIAssetID);
	}
	// Function /Script/BBQCore.BBQMetaGameConstants.FindPerkClass
	UClass* FindPerkClass(FName PerkId) // [0x20842e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UClass* (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(PerkId);
	}
};

/// Class /Script/BBQCore.BBQMusicManager
/// Size: 0x01A0 (416 bytes) (0x000028 - 0x0001A0) align 8 MaxSize: 0x01A0
class UBBQMusicManager : public UObject
{ 
public:
	class UAkAudioEvent*                               MusicStartEvent;                                            // 0x0028   (0x0008)  
	class UAkAudioEvent*                               MusicStopEvent;                                             // 0x0030   (0x0008)  
	class UAkAudioEvent*                               LoadingAudioEvent;                                          // 0x0038   (0x0008)  
	class UAkAudioEvent*                               LoadingAudioEventMercury;                                   // 0x0040   (0x0008)  
	class UAkRtpc*                                     IngameUILevelRtpc;                                          // 0x0048   (0x0008)  
	float                                              LoadingAudioEventFadeOut;                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            MusicFlowSwitchName;                                        // 0x0058   (0x0010)  
	FString                                            PlayerStateSwitchName;                                      // 0x0068   (0x0010)  
	FString                                            PlayerNameSwitchName;                                       // 0x0078   (0x0010)  
	FString                                            DefaultPlayerStateMusicName;                                // 0x0088   (0x0010)  
	TMap<EMusicFlowState, FMusicFlowInfo>              MusicFlowStateSwitchMap;                                    // 0x0098   (0x0050)  
	TMap<FString, FMusicPlayerStateList>               IgnoredPlayerStateTransitions;                              // 0x00E8   (0x0050)  
	TMap<class UAkAudioEvent*, int32_t>                AudioEventMap;                                              // 0x0138   (0x0050)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0188   (0x0018)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQMusicManager.StopLoadingEvent
	void StopLoadingEvent() // [0x20854e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/BBQCore.BBQMusicManager.StopEvent
	void StopEvent(UAkAudioEvent* AudioEvent) // [0x2085450] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UAkAudioEvent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(AudioEvent);
	}
	// Function /Script/BBQCore.BBQMusicManager.SetSwitchGlobal
	void SetSwitchGlobal(UAkSwitchValue* SwitchValue) // [0x2085320] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UAkSwitchValue*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(SwitchValue);
	}
	// Function /Script/BBQCore.BBQMusicManager.SetSwitchByStringGlobal
	void SetSwitchByStringGlobal(FString SwitchGroup, FString SwitchName) // [0x2085220] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(SwitchGroup, SwitchName);
	}
	// Function /Script/BBQCore.BBQMusicManager.SetMusicFlowState
	void SetMusicFlowState(EMusicFlowState NewState) // [0x20851a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EMusicFlowState);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(NewState);
	}
	// Function /Script/BBQCore.BBQMusicManager.PushPlayerStateMusic
	void PushPlayerStateMusic(FString Name) // [0x2084e30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Name);
	}
	// Function /Script/BBQCore.BBQMusicManager.PostEvent
	void PostEvent(UAkAudioEvent* AudioEvent) // [0x2084da0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UAkAudioEvent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(AudioEvent);
	}
	// Function /Script/BBQCore.BBQMusicManager.PopPlayerStateMusic
	void PopPlayerStateMusic(FString Name) // [0x2084d00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Name);
	}
	// Function /Script/BBQCore.BBQMusicManager.Get
	UBBQMusicManager* Get(UObject* WorldContextObject) // [0x2084530] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UBBQMusicManager* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(WorldContextObject);
	}
};

/// Class /Script/BBQCore.BBQPerkGameplayEffect
/// Size: 0x0800 (2048 bytes) (0x000800 - 0x000800) align 8 MaxSize: 0x0800
class UBBQPerkGameplayEffect : public UGameplayEffect
{ 
public:
};

/// Class /Script/BBQCore.BBQPerkData
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UBBQPerkData : public UDataAsset
{ 
public:
	TArray<FPerkLevelData>                             LevelData;                                                  // 0x0030   (0x0010)  
	TMap<FName, FModifierIdContainer>                  LevelModifierRelationship;                                  // 0x0040   (0x0050)  


	/// Functions
	// Function /Script/BBQCore.BBQPerkData.GetModifierAtLevel
	void GetModifierAtLevel(int32_t CurrentLevel, FName ID, FPerkLevelModifier& OutLevelMod) // [0x208e910] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef void (*FuncPtr)(int32_t, FName, FPerkLevelModifier&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(CurrentLevel, ID, OutLevelMod);
	}
	// Function /Script/BBQCore.BBQPerkData.GetMaxPoints
	int32_t GetMaxPoints() // [0x208e8b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/BBQCore.BBQPerkData.GetMaxLevel
	int32_t GetMaxLevel() // [0x208e800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/BBQCore.BBQPerkData.GetLevelData
	void GetLevelData(int32_t CurrentLevel, FPerkLevelData& OutLevelData) // [0x208e530] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef void (*FuncPtr)(int32_t, FPerkLevelData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(CurrentLevel, OutLevelData);
	}
};

/// Class /Script/BBQCore.BBQPlayerPrefs
/// Size: 0x0278 (632 bytes) (0x000228 - 0x000278) align 8 MaxSize: 0x0278
class ABBQPlayerPrefs : public AActor
{ 
public:
	SDK_UNDEFINED(16,456) /* FMulticastInlineDelegate */ __um(OnPullSuccess);                                      // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,457) /* FMulticastInlineDelegate */ __um(OnPullFailed);                                       // 0x0238   (0x0010)  
	SDK_UNDEFINED(16,458) /* FMulticastInlineDelegate */ __um(OnPushSuccess);                                      // 0x0248   (0x0010)  
	SDK_UNDEFINED(16,459) /* FMulticastInlineDelegate */ __um(OnPushFailed);                                       // 0x0258   (0x0010)  
	FBBQPlayerPrefsRaw                                 RawPrefs;                                                   // 0x0268   (0x0010)  


	/// Functions
	// Function /Script/BBQCore.BBQPlayerPrefs.ServerStartLoadPreferencesFromServer
	void ServerStartLoadPreferencesFromServer() // [0x208fe20] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerPrefs.ServerSetPreferredCharacter
	void ServerSetPreferredCharacter(FString NewPreferredChar) // [0x208fd80] Final|Native|Public  
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewPreferredChar);
	}
	// Function /Script/BBQCore.BBQPlayerPrefs.GetPreferredCharacter
	FString GetPreferredCharacter() // [0x208eac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerPrefs.DEBUG_PushToBackendServer
	void DEBUG_PushToBackendServer(bool bDEBUGWriteSuccess) // [0x208dc50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(bDEBUGWriteSuccess);
	}
	// Function /Script/BBQCore.BBQPlayerPrefs.DEBUG_PullFromBackendServer
	void DEBUG_PullFromBackendServer(FString DebugServerSetPreferredCharacter) // [0x1e13820] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(DebugServerSetPreferredCharacter);
	}
};

/// Class /Script/BBQCore.PlayerSetupPerkSet
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UPlayerSetupPerkSet : public UDataAsset
{ 
public:
	TArray<class UClass*>                              Perks;                                                      // 0x0030   (0x0010)  
	TArray<class UClass*>                              FamilyMottoPerks;                                           // 0x0040   (0x0010)  
	TArray<class UClass*>                              StarSignPerks;                                              // 0x0050   (0x0010)  
	TArray<class UClass*>                              AbilityPerks;                                               // 0x0060   (0x0010)  
};

/// Class /Script/BBQCore.PlayerSetupDataAsset
/// Size: 0x05C8 (1480 bytes) (0x000030 - 0x0005C8) align 8 MaxSize: 0x05C8
class UPlayerSetupDataAsset : public UPrimaryDataAsset
{ 
public:
	FName                                              CharacterName;                                              // 0x0030   (0x0008)  
	int32_t                                            MenuOrder;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FPlayerSetup                                       PlayerSetup;                                                // 0x0040   (0x0588)  
};

/// Class /Script/BBQCore.PlayerSetupProperties
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UPlayerSetupProperties : public UObject
{ 
public:
	TMap<FString, FPlayerSetup>                        PlayerSetups;                                               // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0078   (0x0028)  MISSED
};

/// Class /Script/BBQCore.BBQPlayerStatComponent
/// Size: 0x0238 (568 bytes) (0x0000B0 - 0x000238) align 8 MaxSize: 0x0238
class UBBQPlayerStatComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x00B0   (0x0048)  MISSED
	FStatArray                                         SavedStats;                                                 // 0x00F8   (0x0118)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0210   (0x0010)  MISSED
	TArray<FStatOperation>                             PendingUpdates;                                             // 0x0220   (0x0010)  
	bool                                               bStatsLoaded;                                               // 0x0230   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0231   (0x0007)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQPlayerStatComponent.UpdatePlayerStat
	void UpdatePlayerStat(EPlayerStatType StatType, int32_t DELTA, EStatUpdateOp Op) // [0x20914a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(EPlayerStatType, int32_t, EStatUpdateOp);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(StatType, DELTA, Op);
	}
	// Function /Script/BBQCore.BBQPlayerStatComponent.Server_ClientResponsePlayerStats
	void Server_ClientResponsePlayerStats(bool bResult, FString PlayerStatsString, EBBQNetError NetError, uint32_t InternalErrorCode) // [0x20905e0] Net|NetReliableNative|Event|Protected|NetServer 
	{
		typedef void (*FuncPtr)(bool, FString, EBBQNetError, uint32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(bResult, PlayerStatsString, NetError, InternalErrorCode);
	}
	// Function /Script/BBQCore.BBQPlayerStatComponent.OnRep_StatsLoaded
	void OnRep_StatsLoaded() // [0x208f530] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerStatComponent.OnRep_SavedStats
	void OnRep_SavedStats() // [0x208f4d0] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerStatComponent.GetStat
	int32_t GetStat(EPlayerStatType Stat) // [0x208eb30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(EPlayerStatType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(Stat);
	}
	// Function /Script/BBQCore.BBQPlayerStatComponent.GetSavedStats
	FStatArray GetSavedStats() // [0x208eb00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FStatArray (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerStatComponent.GetPlayerStatsLoaded
	bool GetPlayerStatsLoaded() // [0x208eaa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/BBQCore.BBQPlayerStatComponent.Client_HostRequestSavePlayerStats
	void Client_HostRequestSavePlayerStats(FString PlayerStatsString) // [0x208d830] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(PlayerStatsString);
	}
	// Function /Script/BBQCore.BBQPlayerStatComponent.Client_HostRequestPlayerStats
	void Client_HostRequestPlayerStats() // [0x1e10620] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func();
	}
	// Function /Script/BBQCore.BBQPlayerStatComponent.AddOrUpdatePlayerStats
	void AddOrUpdatePlayerStats(EPlayerStatType StatType, int32_t DELTA, EStatUpdateOp Op) // [0x208d520] Final|Native|Public  
	{
		typedef void (*FuncPtr)(EPlayerStatType, int32_t, EStatUpdateOp);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(StatType, DELTA, Op);
	}
};

/// Class /Script/BBQCore.BBQBlueprintFunctionLibraryPlayerState
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQBlueprintFunctionLibraryPlayerState : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQCore.BBQBlueprintFunctionLibraryPlayerState.GetBBQPlayerState
	ABBQPlayerState* GetBBQPlayerState(UObject* WorldContextObject) // [0x208e1a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class ABBQPlayerState* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject);
	}
};

/// Class /Script/BBQCore.BBQPlayerStatsUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQPlayerStatsUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/BBQCore.BBQPreloadManager
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align 8 MaxSize: 0x0120
class UBBQPreloadManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TMap<FString, class UDataTable*>                   LevelDataAssets;                                            // 0x0030   (0x0050)  
	class UDataTable*                                  MuseumPreloadAssetTable;                                    // 0x0080   (0x0008)  
	unsigned char                                      UnknownData01_7[0x98];                                      // 0x0088   (0x0098)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQPreloadManager.ResumeStreaming
	void ResumeStreaming() // [0x2095db0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/BBQCore.BBQPreloadManager.PauseStreaming
	void PauseStreaming() // [0x2095d50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/BBQCore.BBQPreloadManager.Get
	UBBQPreloadManager* Get(UObject* WorldContextObject) // [0x2094ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQPreloadManager* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(WorldContextObject);
	}
	// Function /Script/BBQCore.BBQPreloadManager.Block
	void Block(float BlockedTime) // [0x20948e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(BlockedTime);
	}
};

/// Class /Script/BBQCore.BBQRenderQualitySubsystem
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UBBQRenderQualitySubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/BBQCore.BBQRenderQualityVolume
/// Size: 0x0250 (592 bytes) (0x000228 - 0x000250) align 8 MaxSize: 0x0250
class ABBQRenderQualityVolume : public AActor
{ 
public:
	class USceneComponent*                             Root;                                                       // 0x0228   (0x0008)  
	class UBoxComponent*                               VolumeCollision;                                            // 0x0230   (0x0008)  
	float                                              ViewDistanceScale;                                          // 0x0238   (0x0004)  
	bool                                               ApplyFoliageSecondaryMinimumScreenSize;                     // 0x023C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x023D   (0x0003)  MISSED
	float                                              FoliageSecondaryMinimumScreenSize;                          // 0x0240   (0x0004)  
	float                                              DecalScreenSizeMultiplier;                                  // 0x0244   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0248   (0x0008)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQRenderQualityVolume.OnEndOverlap
	void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) // [0x2095800] Final|Native|Protected 
	{
		typedef void (*FuncPtr)(AActor*, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(OverlappedActor, OtherActor);
	}
	// Function /Script/BBQCore.BBQRenderQualityVolume.OnBeginOverlap
	void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) // [0x20954f0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)(AActor*, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(OverlappedActor, OtherActor);
	}
};

/// Class /Script/BBQCore.BBQReverbVolume
/// Size: 0x0280 (640 bytes) (0x000260 - 0x000280) align 8 MaxSize: 0x0280
class ABBQReverbVolume : public AVolume
{ 
public:
	class UAkAuxBus*                                   AuxBus;                                                     // 0x0260   (0x0008)  
	float                                              Priority;                                                   // 0x0268   (0x0004)  
	float                                              SendLevel;                                                  // 0x026C   (0x0004)  
	float                                              Fade;                                                       // 0x0270   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0274   (0x0004)  MISSED
	class UAkLateReverbComponent*                      ReverbComp;                                                 // 0x0278   (0x0008)  
};

/// Class /Script/BBQCore.BBQSaveManager
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x0000F8) align 8 MaxSize: 0x00F8
class UBBQSaveManager : public UObject
{ 
public:
	SDK_UNDEFINED(16,460) /* FMulticastInlineDelegate */ __um(OnSaveStatusChanged);                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,461) /* FMulticastInlineDelegate */ __um(OnLoadStatusChanged);                                // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0048   (0x0028)  MISSED
	class UBBQMetaGameService*                         MetaGameService;                                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	class UBBQClientSave*                              ClientSave;                                                 // 0x0080   (0x0008)  
	class UBBQSessionRecoverySave*                     SessionRecoverySave;                                        // 0x0088   (0x0008)  
	class UBBQAudioPreferencesSave*                    AudioPreferences;                                           // 0x0090   (0x0008)  
	class UBBQVideoPreferencesSave*                    VideoPreferences;                                           // 0x0098   (0x0008)  
	class UBBQGamePreferencesSave*                     GamePreferences;                                            // 0x00A0   (0x0008)  
	class UBBQControlsPresetPreferencesSave*           ControlsPresetPreferences;                                  // 0x00A8   (0x0008)  
	class UBBQUnlockTreeSave*                          UnlockTreeSave;                                             // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
	TArray<class UBBQSaveGame*>                        PendingSaveTasks;                                           // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData03_7[0x28];                                      // 0x00D0   (0x0028)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQSaveManager.SaveLoadStatusChangedDelegate__DelegateSignature
	void SaveLoadStatusChangedDelegate__DelegateSignature(bool bIsSaving) // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(bIsSaving);
	}
	// Function /Script/BBQCore.BBQSaveManager.SaveGameDataAsync
	void SaveGameDataAsync(UBBQSaveGame* ToSave) // [0x2095dd0] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UBBQSaveGame*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(ToSave);
	}
	// Function /Script/BBQCore.BBQSaveManager.SaveDataUnlockStatusChanged__DelegateSignature
	void SaveDataUnlockStatusChanged__DelegateSignature() // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/BBQCore.BBQSaveManager.OnVideoPreferencesLoaded
	void OnVideoPreferencesLoaded(FString SlotName, int32_t UserIndex, USaveGame* VideoData) // [0x2095c30] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString, int32_t, USaveGame*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(SlotName, UserIndex, VideoData);
	}
	// Function /Script/BBQCore.BBQSaveManager.OnUnlockTreeSaveLoaded
	void OnUnlockTreeSaveLoaded(FString SlotName, int32_t UserIndex, USaveGame* GameData) // [0x2095b10] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString, int32_t, USaveGame*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(SlotName, UserIndex, GameData);
	}
	// Function /Script/BBQCore.BBQSaveManager.OnSessionRecoveryLoaded
	void OnSessionRecoveryLoaded(FString SlotName, int32_t UserIndex, USaveGame* SessionRecoveryData) // [0x20959f0] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString, int32_t, USaveGame*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(SlotName, UserIndex, SessionRecoveryData);
	}
	// Function /Script/BBQCore.BBQSaveManager.OnGamePreferencesLoaded
	void OnGamePreferencesLoaded(FString SlotName, int32_t UserIndex, USaveGame* GameData) // [0x20958d0] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString, int32_t, USaveGame*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(SlotName, UserIndex, GameData);
	}
	// Function /Script/BBQCore.BBQSaveManager.OnControlsPresetPreferencesLoaded
	void OnControlsPresetPreferencesLoaded(FString SlotName, int32_t UserIndex, USaveGame* GameData) // [0x20956e0] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString, int32_t, USaveGame*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(SlotName, UserIndex, GameData);
	}
	// Function /Script/BBQCore.BBQSaveManager.OnClientSaveLoaded
	void OnClientSaveLoaded(FString SlotName, int32_t UserIndex, USaveGame* Data) // [0x20955c0] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString, int32_t, USaveGame*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(SlotName, UserIndex, Data);
	}
	// Function /Script/BBQCore.BBQSaveManager.OnAudioPreferencesLoaded
	void OnAudioPreferencesLoaded(FString SlotName, int32_t UserIndex, USaveGame* AudioData) // [0x20953d0] Final|Native|Private 
	{
		typedef void (*FuncPtr)(FString, int32_t, USaveGame*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(SlotName, UserIndex, AudioData);
	}
	// Function /Script/BBQCore.BBQSaveManager.LoadGameDataAsync
	void LoadGameDataAsync(UObject* Caller, FName DelegateFunctionName, FString SlotName) // [0x2095270] Final|Exec|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FName, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(Caller, DelegateFunctionName, SlotName);
	}
	// Function /Script/BBQCore.BBQSaveManager.HasLastSaveSucceeded
	bool HasLastSaveSucceeded() // [0x20950e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func();
	}
	// Function /Script/BBQCore.BBQSaveManager.GetVideoPreferences
	UBBQVideoPreferencesSave* GetVideoPreferences() // [0x2095000] Final|Native|Public|BlueprintCallable 
	{
		typedef class UBBQVideoPreferencesSave* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func();
	}
	// Function /Script/BBQCore.BBQSaveManager.GetUnlockTreeSave
	UBBQUnlockTreeSave* GetUnlockTreeSave() // [0x14449e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQUnlockTreeSave* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
	// Function /Script/BBQCore.BBQSaveManager.GetSessionRecoverySave
	UBBQSessionRecoverySave* GetSessionRecoverySave() // [0x2094e10] Final|Native|Public|BlueprintCallable 
	{
		typedef class UBBQSessionRecoverySave* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func();
	}
	// Function /Script/BBQCore.BBQSaveManager.GetMetaGameService
	UBBQMetaGameService* GetMetaGameService(UObject* WorldContextObject) // [0x2094d80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQMetaGameService* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(WorldContextObject);
	}
	// Function /Script/BBQCore.BBQSaveManager.GetGamePreferences
	UBBQGamePreferencesSave* GetGamePreferences() // [0x2094d60] Final|Native|Public|BlueprintCallable 
	{
		typedef class UBBQGamePreferencesSave* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
	// Function /Script/BBQCore.BBQSaveManager.GetControlsPresetPreferences
	UBBQControlsPresetPreferencesSave* GetControlsPresetPreferences() // [0x2094d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UBBQControlsPresetPreferencesSave* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func();
	}
	// Function /Script/BBQCore.BBQSaveManager.GetClientSave
	UBBQClientSave* GetClientSave() // [0x2094d20] Final|Native|Public|BlueprintCallable 
	{
		typedef class UBBQClientSave* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func();
	}
	// Function /Script/BBQCore.BBQSaveManager.GetAudioPreferences
	UBBQAudioPreferencesSave* GetAudioPreferences() // [0x143dcf0] Final|Native|Public|BlueprintCallable 
	{
		typedef class UBBQAudioPreferencesSave* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/BBQCore.BBQSaveManager.Get
	UBBQSaveManager* Get(UObject* WorldContextObject) // [0x2094b70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQSaveManager* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(WorldContextObject);
	}
};

/// Class /Script/BBQCore.BBQSessionRecoverySave
/// Size: 0x0108 (264 bytes) (0x000040 - 0x000108) align 8 MaxSize: 0x0108
class UBBQSessionRecoverySave : public UBBQSaveGame
{ 
public:
	float                                              Timestamp;                                                  // 0x0040   (0x0004)  
	FName                                              SessionName;                                                // 0x0044   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            SessionVersion;                                             // 0x0050   (0x0010)  
	FString                                            ID;                                                         // 0x0060   (0x0010)  
	EOnlineSessionTypeBBQ                              SessionType;                                                // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	SDK_UNDEFINED(16,462) /* FMulticastInlineDelegate */ __um(OnTryReconnectingComplete);                          // 0x0078   (0x0010)  
	unsigned char                                      UnknownData02_7[0x80];                                      // 0x0088   (0x0080)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQSessionRecoverySave.TryReconnectingToSession
	void TryReconnectingToSession(APlayerController* PlayerController) // [0x2095f40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(PlayerController);
	}
	// Function /Script/BBQCore.BBQSessionRecoverySave.Reset
	void Reset() // [0x2095d90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/BBQCore.BBQSessionRecoverySave.OnTryReconnectingComplete__DelegateSignature
	void OnTryReconnectingComplete__DelegateSignature(bool bSuccess) // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(bSuccess);
	}
	// Function /Script/BBQCore.BBQSessionRecoverySave.HasSessionToTryAndRejoin
	bool HasSessionToTryAndRejoin(float RejoinWindowTimeLimitInSeconds) // [0x2095140] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(RejoinWindowTimeLimitInSeconds);
	}
	// Function /Script/BBQCore.BBQSessionRecoverySave.HasSessionSaved
	bool HasSessionSaved() // [0x2095110] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
};

/// Class /Script/BBQCore.BBQStarSignPerk
/// Size: 0x0390 (912 bytes) (0x0002D0 - 0x000390) align 8 MaxSize: 0x0390
class UBBQStarSignPerk : public UBBQAbilityPerk
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x02D0   (0x00C0)  MISSED
};

/// Class /Script/BBQCore.BBQTeleportLocation
/// Size: 0x0238 (568 bytes) (0x000228 - 0x000238) align 8 MaxSize: 0x0238
class ABBQTeleportLocation : public AActor
{ 
public:
	FString                                            Name;                                                       // 0x0228   (0x0010)  
};

/// Class /Script/BBQCore.BBQTutorialManager
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UBBQTutorialManager : public UObject
{ 
public:
	SDK_UNDEFINED(16,463) /* FMulticastInlineDelegate */ __um(OnTutorialRequested);                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,464) /* FMulticastInlineDelegate */ __um(OnTutorialComplete);                                 // 0x0038   (0x0010)  
	class UDataTable*                                  TutorialsDataTable;                                         // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/BBQCore.BBQTutorialManager.ShowTutorial
	void ShowTutorial(FName& Name, bool Force) // [0x2095e60] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Name, Force);
	}
	// Function /Script/BBQCore.BBQTutorialManager.IsTutorialComplete
	bool IsTutorialComplete(FName& Name) // [0x20951d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Name);
	}
	// Function /Script/BBQCore.BBQTutorialManager.HasCompletedAllTutorials
	// bool HasCompletedAllTutorials(TArray<FName>& Names);                                                                     // [0x2095020] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BBQCore.BBQTutorialManager.GetTutorials
	// void GetTutorials(TArray<FBBQTutorialDefinition>& Tutorials);                                                            // [0x2094e30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BBQCore.BBQTutorialManager.Get
	UBBQTutorialManager* Get(UObject* WorldContextObject) // [0x2094c00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQTutorialManager* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(WorldContextObject);
	}
	// Function /Script/BBQCore.BBQTutorialManager.FindTutorial
	FBBQTutorialDefinition FindTutorial(FName& Name) // [0x2094a10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef FBBQTutorialDefinition (*FuncPtr)(FName&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Name);
	}
	// Function /Script/BBQCore.BBQTutorialManager.CompleteTutorial
	void CompleteTutorial(FBBQTutorialDefinition& Tutorial) // [0x2094960] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FBBQTutorialDefinition&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Tutorial);
	}
};

/// Class /Script/BBQCore.BBQUnlockableManager
/// Size: 0x01F8 (504 bytes) (0x000028 - 0x0001F8) align 8 MaxSize: 0x01F8
class UBBQUnlockableManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0028   (0x0018)  MISSED
	class UCompositeDataTable*                         UnlockableDefinitionDataTable;                              // 0x0040   (0x0008)  
	class UDataTable*                                  UnlockableConditionsDataTable;                              // 0x0048   (0x0008)  
	TMap<FName, FBBQUnlockableStatus>                  UnlockableStatus;                                           // 0x0050   (0x0050)  
	unsigned char                                      UnknownData01_7[0x158];                                     // 0x00A0   (0x0158)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQUnlockableManager.ReportExitMenuThatCanGoToPlatformStore
	void ReportExitMenuThatCanGoToPlatformStore() // [0x2095d70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/BBQCore.BBQUnlockableManager.Get
	UBBQUnlockableManager* Get(UObject* WorldContextObject) // [0x2094c90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UBBQUnlockableManager* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(WorldContextObject);
	}
};

/// Class /Script/BBQCore.BBQUnlockTreeSave
/// Size: 0x0098 (152 bytes) (0x000040 - 0x000098) align 8 MaxSize: 0x0098
class UBBQUnlockTreeSave : public UBBQSaveGame
{ 
public:
	TMap<FName, FBBQUnlockTreeRevealedPositions>       CharacterUnlockTreeRevealedNodes;                           // 0x0040   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Class /Script/BBQCore.BBQVideoPreferencesSave
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UBBQVideoPreferencesSave : public UBBQSaveGame
{ 
public:
	float                                              SavedGamma;                                                 // 0x0040   (0x0004)  
	FIntPoint                                          SavedResolution;                                            // 0x0044   (0x0008)  
	TEnumAsByte<EWindowMode>                           SavedFullscreenMode;                                        // 0x004C   (0x0001)  
	EConsoleGraphicsMode                               ConsoleGraphicsMode;                                        // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x004E   (0x0002)  MISSED
};

/// Class /Script/BBQCore.BBQViewportClient
/// Size: 0x0418 (1048 bytes) (0x000360 - 0x000418) align 8 MaxSize: 0x0418
class UBBQViewportClient : public UGameViewportClient
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0360   (0x0018)  MISSED
	int32_t                                            PopUpWidgetZ;                                               // 0x0378   (0x0004)  
	int32_t                                            LoadingScreenWidgetZ;                                       // 0x037C   (0x0004)  
	int32_t                                            FadeWidgetZ;                                                // 0x0380   (0x0004)  
	int32_t                                            AutoSaveWarningWidgetZ;                                     // 0x0384   (0x0004)  
	int32_t                                            VoiceChatIndicatorGroupWidgetZ;                             // 0x0388   (0x0004)  
	int32_t                                            WatermarkWidgetZ;                                           // 0x038C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0390   (0x0010)  MISSED
	class UWidget*                                     LoadingScreenWidget;                                        // 0x03A0   (0x0008)  
	class UWidget*                                     ActivePopUpWidget;                                          // 0x03A8   (0x0008)  
	class UWidget*                                     AutoSaveWarningWidget;                                      // 0x03B0   (0x0008)  
	class UWidget*                                     WatermarkWidget;                                            // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x03C0   (0x0010)  MISSED
	class UClass*                                      WatermarkClass;                                             // 0x03D0   (0x0008)  
	class UClass*                                      AutoSaveWarningWidgetClass;                                 // 0x03D8   (0x0008)  
	float                                              AutoSaveMinimumDisplayTime;                                 // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x03E4   (0x0004)  MISSED
	class UClass*                                      TopLeftVoiceChatIndicatorGroupClass;                        // 0x03E8   (0x0008)  
	class UClass*                                      BottomRightVoiceChatIndicatorGroupClass;                    // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x20];                                      // 0x03F8   (0x0020)  MISSED


	/// Functions
	// Function /Script/BBQCore.BBQViewportClient.OnSaveStatusChanged
	void OnSaveStatusChanged(bool bIsSaving) // [0x2097730] Final|Native|Protected 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(bIsSaving);
	}
	// Function /Script/BBQCore.BBQViewportClient.FadeToBlackComplete
	void FadeToBlackComplete() // [0x2097710] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/BBQCore.BBQViewportClient.CreateLoadingScreenWidget
	UWidget* CreateLoadingScreenWidget(bool IsVictim, bool bIsMatchmakingScreen) // [0x20975e0] Native|Event|Public|BlueprintEvent 
	{
		typedef class UWidget* (*FuncPtr)(bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(IsVictim, bIsMatchmakingScreen);
	}
	// Function /Script/BBQCore.BBQViewportClient.BP_ShowLoadingScreen
	void BP_ShowLoadingScreen(bool bIsMatchmakingScreen) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(bIsMatchmakingScreen);
	}
	// Function /Script/BBQCore.BBQViewportClient.BP_HideLoadingScreen
	void BP_HideLoadingScreen() // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
};

/// Class /Script/BBQCore.BBQWwiseNiagaraDataInterface
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UBBQWwiseNiagaraDataInterface : public UNiagaraDataInterface
{ 
public:
	class UAkAudioEvent*                               AkEvent;                                                    // 0x0038   (0x0008)  
	class UAkRtpc*                                     AkRtpc;                                                     // 0x0040   (0x0008)  
	float                                              DefaultCooldown;                                            // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/BBQCore.OnScreenDebugger
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOnScreenDebugger : public UObject
{ 
public:
};

/// Class /Script/BBQCore.BBQProximityCheckComponent
/// Size: 0x0560 (1376 bytes) (0x000480 - 0x000560) align 16 MaxSize: 0x0560
class UBBQProximityCheckComponent : public USphereComponent
{ 
public:
	SDK_UNDEFINED(16,465) /* FMulticastInlineDelegate */ __um(OnProximityBegin);                                   // 0x0480   (0x0010)  
	SDK_UNDEFINED(16,466) /* FMulticastInlineDelegate */ __um(OnProximityEnd);                                     // 0x0490   (0x0010)  
	SDK_UNDEFINED(16,467) /* TArray<TSoftObjectPtr<UClass*>> */ __um(UsesActorsOfClass);                           // 0x04A0   (0x0010)  
	TArray<FName>                                      UseActorsWithTag;                                           // 0x04B0   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA0];                                      // 0x04C0   (0x00A0)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UBBQGameplayAbility) == 0x04F0); // 1264 bytes (0x0003B0 - 0x0004F0)
static_assert(sizeof(UBBQBaseAttributeSet) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UBBQGameplayModMagnitudeCalc) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBBQCoreCheatManager) == 0x00E0); // 224 bytes (0x000088 - 0x0000E0)
static_assert(sizeof(ABBQBaseCharacter) == 0x05F0); // 1520 bytes (0x0004B8 - 0x0005F0)
static_assert(sizeof(ABBQGameMode) == 0x03B0); // 944 bytes (0x000310 - 0x0003B0)
static_assert(sizeof(FBBQGameModifier) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMatchFact) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMatchResults) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBBQ_PartyIds) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBBQCustomMatchVariable) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBBQCustomMatchSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(ABBQGameState) == 0x05D0); // 1488 bytes (0x000298 - 0x0005D0)
static_assert(sizeof(FBBQCharacterSwapInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FBBQAssignedPerkInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBBQ_WantedCharacterInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBBQCharacterCosmeticsInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FActorInstanceID) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ABBQPlayerState) == 0x0BB0); // 2992 bytes (0x000328 - 0x000BB0)
static_assert(sizeof(UBBQUtilitiesLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ABBQCorePlayerController) == 0x0618); // 1560 bytes (0x000578 - 0x000618)
static_assert(sizeof(UBBQInputModifierInputID) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UBBQAbilitySystemComponent) == 0x1778); // 6008 bytes (0x001308 - 0x001778)
static_assert(sizeof(UBBQAbilitySystemGlobals) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UBBQAchievementsComponent) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UBBQAchievementUnlockCalculation) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQAchievementUnlockCalculationAddition) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQAchievementUnlockCalculationAnd) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAkPoolItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBBQAkComponentPoolSubsystem) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FBBQMultiPosAmbienceData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBBQConnectedRooms) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBBQAmbientAudioSubsystem) == 0x0100); // 256 bytes (0x000030 - 0x000100)
static_assert(sizeof(ABBQAmbientSound) == 0x0260); // 608 bytes (0x000228 - 0x000260)
static_assert(sizeof(UBBQAnimNotify_Audio) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UBBQAnimNotifyState_Audio) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UBBQAttributeSet) == 0x0338); // 824 bytes (0x000038 - 0x000338)
static_assert(sizeof(UBBQAudioEngineSupportSubsystem) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UBBQAudioListenerSubsystem) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UBBQSaveGame) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UBBQAudioPreferencesSave) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(FAttributeVariable) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FIntVariable) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FIntRange) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGASAttribute) == 0x0048); // 72 bytes (0x00000C - 0x000048)
static_assert(sizeof(FGameplaySysVariable) == 0x0060); // 96 bytes (0x00000C - 0x000060)
static_assert(sizeof(FBaseCoreStats) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGASAttributeModifier) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FCoreStatLevelModifier) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FScalableCoreStatLevelModifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAttributeLocalData) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(UBBQBasePlayerAttributeAsset) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UBBQBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ABBQChangeOutfitMain) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(ABBQChangeOutfitSP) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(UBBQCharacterCosmeticsData) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UBBQChainsawSkin) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UBBQChainsawSkinData) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FOutfitMaterialData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FLinkedOutfitData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBBQCharacterOutfit) == 0x0128); // 296 bytes (0x000030 - 0x000128)
static_assert(sizeof(UBBQClientSave) == 0x0290); // 656 bytes (0x000040 - 0x000290)
static_assert(sizeof(UBBQControlScheme) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UBBQControlSchemeSet) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UBBQControlSchemeSettings) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UBBQControlSchemePersonaliser) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UBBQControlSchemePresets) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FBBQActionKeyMapping) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FBBQActionKeyMappings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBBQControlPresetPreferences) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UBBQControlsPresetPreferencesSave) == 0x00C0); // 192 bytes (0x000040 - 0x0000C0)
static_assert(sizeof(UBBQCustomizableCharacter) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQCustomMatchSubsystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UBBQDebugGameCheats) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UBBQDemoMode) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UBBQDeveloperSettings) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UBBQEquippableExecutionData) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UBBQEventManagerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FBBQEventData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FBBQEventContainer) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UBBQEventsDataAsset) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(FBBQBaseAttributeLevelModifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBBQPerk) == 0x0288); // 648 bytes (0x000028 - 0x000288)
static_assert(sizeof(UBBQAbilityPerk) == 0x02D0); // 720 bytes (0x000288 - 0x0002D0)
static_assert(sizeof(UBBQFamilyAbilityPerk) == 0x02D0); // 720 bytes (0x0002D0 - 0x0002D0)
static_assert(sizeof(UBBQFamilyMottoPerk) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UBBQMottoPerk) == 0x0298); // 664 bytes (0x000288 - 0x000298)
static_assert(sizeof(UBBQFlickeringLightAudioComponent) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(UBBQPickupItemData) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UBBQGameConstants) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(UBBQGameInstance) == 0x09A0); // 2464 bytes (0x0001A8 - 0x0009A0)
static_assert(sizeof(UBBQBlueprintFunctionLibraryGameInstance) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQBlueprintFunctionLibraryGameMode) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQGameModifierDefinitionAsset) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UBBQGameModifierFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FBBQGameplayAbilityInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UBBQGameplayAbilitySet) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UBBQGameplayCueManager) == 0x0310); // 784 bytes (0x000310 - 0x000310)
static_assert(sizeof(UBBQVariableBasedModifiersExecutionCalculation) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBBQVariableBasedMagnitudeCalculation) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FBBQBackingGameplayVariable) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FBBQVariableBasedFloat) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FBBQVariableBasedModifierInfo) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(UBBQGameplayEffect) == 0x08F8); // 2296 bytes (0x000800 - 0x0008F8)
static_assert(sizeof(UBBQGamePreferencesSave) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(ABBQGameSession) == 0x0258); // 600 bytes (0x000240 - 0x000258)
static_assert(sizeof(UBBQBlueprintFunctionLibraryGameState) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQGameUserSettings) == 0x0130); // 304 bytes (0x000120 - 0x000130)
static_assert(sizeof(FAttributePointDistribution) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAppliedLevelMod) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UBBQLoadoutComponent) == 0x0200); // 512 bytes (0x0000B0 - 0x000200)
static_assert(sizeof(UBBQLoadoutManager) == 0x0160); // 352 bytes (0x000028 - 0x000160)
static_assert(sizeof(FBBQMapData) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(UBBQMapDataAsset) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(UBBQMapDataList) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UBBQMetaGameConstants) == 0x0220); // 544 bytes (0x000030 - 0x000220)
static_assert(sizeof(FMusicFlowInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMusicPlayerStateList) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBBQMusicManager) == 0x01A0); // 416 bytes (0x000028 - 0x0001A0)
static_assert(sizeof(UBBQPerkGameplayEffect) == 0x0800); // 2048 bytes (0x000800 - 0x000800)
static_assert(sizeof(FPerkLevelModifier) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FPerkLevelData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FModifierIdContainer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBBQPerkData) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(FBBQPlayerPrefsRaw) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ABBQPlayerPrefs) == 0x0278); // 632 bytes (0x000228 - 0x000278)
static_assert(sizeof(UPlayerSetupPerkSet) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FCharacterInitialLoadout) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FPlayerSetup) == 0x0588); // 1416 bytes (0x000000 - 0x000588)
static_assert(sizeof(UPlayerSetupDataAsset) == 0x05C8); // 1480 bytes (0x000030 - 0x0005C8)
static_assert(sizeof(UPlayerSetupProperties) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(FPlayerSingleStat) == 0x0018); // 24 bytes (0x00000C - 0x000018)
static_assert(sizeof(FStatArray) == 0x0118); // 280 bytes (0x000108 - 0x000118)
static_assert(sizeof(FStatOperation) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UBBQPlayerStatComponent) == 0x0238); // 568 bytes (0x0000B0 - 0x000238)
static_assert(sizeof(UBBQBlueprintFunctionLibraryPlayerState) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQPlayerStatsUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQPreloadManager) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(UBBQRenderQualitySubsystem) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(ABBQRenderQualityVolume) == 0x0250); // 592 bytes (0x000228 - 0x000250)
static_assert(sizeof(ABBQReverbVolume) == 0x0280); // 640 bytes (0x000260 - 0x000280)
static_assert(sizeof(UBBQSaveManager) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UBBQSessionRecoverySave) == 0x0108); // 264 bytes (0x000040 - 0x000108)
static_assert(sizeof(UBBQStarSignPerk) == 0x0390); // 912 bytes (0x0002D0 - 0x000390)
static_assert(sizeof(ABBQTeleportLocation) == 0x0238); // 568 bytes (0x000228 - 0x000238)
static_assert(sizeof(UBBQTutorialManager) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FBBQUnlockableStatus) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(UBBQUnlockableManager) == 0x01F8); // 504 bytes (0x000028 - 0x0001F8)
static_assert(sizeof(FBBQUnlockTreeGridPosition) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FBBQUnlockTreeRevealedPositions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBBQUnlockTreeSave) == 0x0098); // 152 bytes (0x000040 - 0x000098)
static_assert(sizeof(UBBQVideoPreferencesSave) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UBBQViewportClient) == 0x0418); // 1048 bytes (0x000360 - 0x000418)
static_assert(sizeof(UBBQWwiseNiagaraDataInterface) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UOnScreenDebugger) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQProximityCheckComponent) == 0x0560); // 1376 bytes (0x000480 - 0x000560)
static_assert(sizeof(FBBQLoadoutData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FLinkedStatProgress) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FBBQTutorialSubtitleEntry) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FBBQTutorialDefinition) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FGameplayTagBPDelegateHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FBBQAchievementDataRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FFloatVariable) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FBBQCustomMatchSettingDefinition) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FValueSelector) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FBBQGameplayTagListener) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBBQInputActionRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FBBQLoadoutDataArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBBQLoadoutDataCollection) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FBBQCharacterLevelData) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FBBQMetaGamePerkData) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FBBQMetaRef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBBQLoadoutApplicationData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSavedExecution) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FDataAssetToPreload) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FBBQUnlockableBaseData) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FBBQUnlockableArtData) == 0x00C8); // 200 bytes (0x000010 - 0x0000C8)
static_assert(sizeof(FBBQUnlockableExecutionData) == 0x0058); // 88 bytes (0x000010 - 0x000058)
static_assert(sizeof(FBBQUnlockConditions) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FBBQUnlockableDefinition) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FBBQUnlockableWeaponData) == 0x0028); // 40 bytes (0x000010 - 0x000028)
static_assert(sizeof(FBBQURLResourceOption) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FScreenLogCategory) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(UBBQGameplayAbility, ActivationInputID) == 0x03B4);
static_assert(offsetof(UBBQGameplayAbility, SecondaryInputID) == 0x03B5);
static_assert(offsetof(UBBQGameplayAbility, AbilityIcon) == 0x03B8);
static_assert(offsetof(UBBQGameplayAbility, AbilityName) == 0x03C0);
static_assert(offsetof(UBBQGameplayAbility, FamilyBondActivityRow) == 0x03D0);
static_assert(offsetof(UBBQGameplayAbility, ActivityEvent) == 0x03E0);
static_assert(offsetof(UBBQGameplayAbility, AbilityBlockedFailureReasonTag) == 0x03F0);
static_assert(offsetof(UBBQGameplayAbility, FailureMessages) == 0x03F8);
static_assert(offsetof(UBBQGameplayAbility, AbilityFailAudioEvents) == 0x0448);
static_assert(offsetof(UBBQGameplayAbility, AudioEventWhenFailed) == 0x0498);
static_assert(offsetof(UBBQGameplayAbility, AudioEventWhenActivated) == 0x04A0);
static_assert(offsetof(UBBQGameplayAbility, AudioEventWhenEnded) == 0x04A8);
static_assert(offsetof(UBBQGameplayAbility, AnimSlotWhenActivated) == 0x04B0);
static_assert(offsetof(UBBQGameplayAbility, InterruptTags) == 0x04B8);
static_assert(offsetof(UBBQBaseAttributeSet, CurrentDataTable) == 0x0030);
static_assert(offsetof(ABBQBaseCharacter, AttributeSet) == 0x04D8);
static_assert(offsetof(ABBQBaseCharacter, AbilitySystemComponent) == 0x04E0);
static_assert(offsetof(ABBQBaseCharacter, CrouchedTag) == 0x04E8);
static_assert(offsetof(ABBQBaseCharacter, IncapacitatedTag) == 0x04F0);
static_assert(offsetof(ABBQBaseCharacter, VictimHasEscapedTag) == 0x04F8);
static_assert(offsetof(ABBQBaseCharacter, VictimHasSurvivedTag) == 0x0500);
static_assert(offsetof(ABBQBaseCharacter, DeadTag) == 0x0508);
static_assert(offsetof(ABBQBaseCharacter, WalkingTag) == 0x0510);
static_assert(offsetof(ABBQBaseCharacter, RunningTag) == 0x0518);
static_assert(offsetof(ABBQBaseCharacter, SprintingTag) == 0x0520);
static_assert(offsetof(ABBQBaseCharacter, MeleeImmunityTag) == 0x0528);
static_assert(offsetof(ABBQBaseCharacter, BackstabbedTag) == 0x0530);
static_assert(offsetof(ABBQBaseCharacter, IncapacitatedEffectClass) == 0x0538);
static_assert(offsetof(ABBQBaseCharacter, DeadEffectClass) == 0x0540);
static_assert(offsetof(ABBQBaseCharacter, VictimEscapedEffectClass) == 0x0548);
static_assert(offsetof(ABBQBaseCharacter, FootstepAudioEvents) == 0x0550);
static_assert(offsetof(ABBQBaseCharacter, Gender) == 0x0570);
static_assert(offsetof(ABBQBaseCharacter, CommonAbilitySet) == 0x0578);
static_assert(offsetof(ABBQBaseCharacter, TeamAbilitySet) == 0x0580);
static_assert(offsetof(ABBQBaseCharacter, StartingAbilities) == 0x0588);
static_assert(offsetof(ABBQBaseCharacter, StartingEffects) == 0x0598);
static_assert(offsetof(ABBQBaseCharacter, DefaultTeamID) == 0x05A8);
static_assert(offsetof(ABBQBaseCharacter, AssignedPerks) == 0x05B0);
static_assert(offsetof(ABBQBaseCharacter, StarSignPerk) == 0x05C0);
static_assert(offsetof(ABBQBaseCharacter, BonusPerks) == 0x05C8);
static_assert(offsetof(ABBQBaseCharacter, FamilyMottoPerks) == 0x05E0);
static_assert(offsetof(ABBQGameMode, DefaultGameModifiers) == 0x0318);
static_assert(offsetof(FBBQGameModifier, Definition) == 0x0000);
static_assert(offsetof(FBBQGameModifier, LoadedDefinition) == 0x0028);
static_assert(offsetof(FBBQGameModifier, ModifierName) == 0x0030);
static_assert(offsetof(FMatchResults, AllMatchEvents) == 0x0000);
static_assert(offsetof(FBBQ_PartyIds, PartyIds) == 0x0000);
static_assert(offsetof(FBBQCustomMatchVariable, CustomKey) == 0x0000);
static_assert(offsetof(FBBQCustomMatchSettings, CustomVariables) == 0x0008);
static_assert(offsetof(ABBQGameState, PerkUseAudioEvent) == 0x0360);
static_assert(offsetof(ABBQGameState, PerkDeactivateAudioEvent) == 0x0388);
static_assert(offsetof(ABBQGameState, WantedMap) == 0x0418);
static_assert(offsetof(ABBQGameState, WantedMode) == 0x0430);
static_assert(offsetof(ABBQGameState, WantedTimeOfDay) == 0x0438);
static_assert(offsetof(ABBQGameState, GameModifiers) == 0x0460);
static_assert(offsetof(ABBQGameState, CacheGameModifierMap) == 0x0478);
static_assert(offsetof(ABBQGameState, CombinedVictimHealthRtpcName) == 0x04D0);
static_assert(offsetof(ABBQGameState, DEBUG_ServerGameState) == 0x04D8);
static_assert(offsetof(ABBQGameState, LastMatchResults) == 0x04E8);
static_assert(offsetof(ABBQGameState, AssignedFamilyMottoPerks) == 0x04F8);
static_assert(offsetof(ABBQGameState, PartiesMembersIds) == 0x0510);
static_assert(offsetof(ABBQGameState, FoliageInteractionParameters) == 0x0540);
static_assert(offsetof(ABBQGameState, CustomMatchSettings) == 0x05B8);
static_assert(offsetof(FBBQCharacterSwapInfo, SwapPartner) == 0x0000);
static_assert(offsetof(FBBQCharacterSwapInfo, Character) == 0x000C);
static_assert(offsetof(FBBQCharacterSwapInfo, PartnerCharacter) == 0x0014);
static_assert(offsetof(FBBQCharacterSwapInfo, RequestState) == 0x001C);
static_assert(offsetof(FBBQAssignedPerkInfo, perk) == 0x0000);
static_assert(offsetof(FBBQ_WantedCharacterInfo, WantedCharacter) == 0x0000);
static_assert(offsetof(FBBQ_WantedCharacterInfo, TeamId) == 0x0010);
static_assert(offsetof(FBBQCharacterCosmeticsInfo, Outfit) == 0x0000);
static_assert(offsetof(FBBQCharacterCosmeticsInfo, WeaponSkin) == 0x0008);
static_assert(offsetof(FActorInstanceID, ActorName) == 0x0000);
static_assert(offsetof(ABBQPlayerState, LoadoutComponent) == 0x0488);
static_assert(offsetof(ABBQPlayerState, PlayerStatComponent) == 0x0490);
static_assert(offsetof(ABBQPlayerState, CharacterSwapInfo) == 0x0558);
static_assert(offsetof(ABBQPlayerState, AchievementComponent) == 0x05A8);
static_assert(offsetof(ABBQPlayerState, GameplayVariableModStackComponent) == 0x05B0);
static_assert(offsetof(ABBQPlayerState, AssignedPerks) == 0x05B8);
static_assert(offsetof(ABBQPlayerState, AssignedStarSignPerkInfo) == 0x05C8);
static_assert(offsetof(ABBQPlayerState, FamilyMottoAssignedPerks) == 0x05D8);
static_assert(offsetof(ABBQPlayerState, FamilyMottoLocallyAssignedPerks) == 0x05E8);
static_assert(offsetof(ABBQPlayerState, MottoCategoryBonusPerk) == 0x05F8);
static_assert(offsetof(ABBQPlayerState, AssignedPerksInfo) == 0x0600);
static_assert(offsetof(ABBQPlayerState, CurrentlyAssignedMottoPerksCount) == 0x0620);
static_assert(offsetof(ABBQPlayerState, CommitTimedStatsTimer) == 0x06D0);
static_assert(offsetof(ABBQPlayerState, TotalPlayTimeHandle) == 0x06D8);
static_assert(offsetof(ABBQPlayerState, TimeSurvivedTimeHandle) == 0x06E0);
static_assert(offsetof(ABBQPlayerState, UserPlatform) == 0x0752);
static_assert(offsetof(ABBQPlayerState, WantedCharacterInfo) == 0x0840);
static_assert(offsetof(ABBQPlayerState, AssignedCharacter) == 0x0860);
static_assert(offsetof(ABBQPlayerState, CharacterCosmeticsInfo) == 0x0870);
static_assert(offsetof(ABBQPlayerState, KillerPlayerState) == 0x0888);
static_assert(offsetof(ABBQPlayerState, EscapeZoneUsed) == 0x0890);
static_assert(offsetof(ABBQPlayerState, LocalPartyMembersNetIds) == 0x08B8);
static_assert(offsetof(ABBQPlayerState, EscZoneStatForLevel) == 0x08D0);
static_assert(offsetof(ABBQPlayerState, MetaGamePlayerData) == 0x0920);
static_assert(offsetof(ABBQPlayerState, MatchStartMetaGamePlayerData) == 0x0A38);
static_assert(offsetof(ABBQCorePlayerController, ControlScheme) == 0x05F0);
static_assert(offsetof(UBBQAbilitySystemComponent, OwnerCharacter) == 0x1770);
static_assert(offsetof(FAkPoolItem, AkComp) == 0x0000);
static_assert(offsetof(UBBQAkComponentPoolSubsystem, AmbiencePoolOwner) == 0x0030);
static_assert(offsetof(UBBQAkComponentPoolSubsystem, AmbiencePoolItems) == 0x0038);
static_assert(offsetof(FBBQMultiPosAmbienceData, AkComponent) == 0x0000);
static_assert(offsetof(FBBQMultiPosAmbienceData, Positions) == 0x0008);
static_assert(offsetof(FBBQConnectedRooms, Rooms) == 0x0000);
static_assert(offsetof(UBBQAmbientAudioSubsystem, ActiveAmbiences) == 0x0038);
static_assert(offsetof(UBBQAmbientAudioSubsystem, RoomConnectionGraph) == 0x0098);
static_assert(offsetof(ABBQAmbientSound, AkEvent) == 0x0228);
static_assert(offsetof(ABBQAmbientSound, Priority) == 0x0230);
static_assert(offsetof(ABBQAmbientSound, AkPool) == 0x0238);
static_assert(offsetof(ABBQAmbientSound, ListenerSys) == 0x0240);
static_assert(offsetof(ABBQAmbientSound, AmbientSys) == 0x0248);
static_assert(offsetof(ABBQAmbientSound, PooledAkComp) == 0x0250);
static_assert(offsetof(UBBQAnimNotify_Audio, AttachName) == 0x0040);
static_assert(offsetof(UBBQAnimNotify_Audio, Event) == 0x0050);
static_assert(offsetof(UBBQAnimNotifyState_Audio, Event) == 0x0038);
static_assert(offsetof(UBBQAnimNotifyState_Audio, HapticsEvent) == 0x0040);
static_assert(offsetof(UBBQAttributeSet, Health) == 0x0038);
static_assert(offsetof(UBBQAttributeSet, MaxHealth) == 0x0048);
static_assert(offsetof(UBBQAttributeSet, SpeedMultiplier) == 0x0058);
static_assert(offsetof(UBBQAttributeSet, MinimumSpeedMultiplier) == 0x0068);
static_assert(offsetof(UBBQAttributeSet, WillToLive) == 0x0078);
static_assert(offsetof(UBBQAttributeSet, WillToLiveMin) == 0x0088);
static_assert(offsetof(UBBQAttributeSet, WillToLiveMax) == 0x0098);
static_assert(offsetof(UBBQAttributeSet, Heartrate) == 0x00A8);
static_assert(offsetof(UBBQAttributeSet, HeartRateMin) == 0x00B8);
static_assert(offsetof(UBBQAttributeSet, HeartRateMax) == 0x00C8);
static_assert(offsetof(UBBQAttributeSet, Stamina) == 0x00D8);
static_assert(offsetof(UBBQAttributeSet, MaxStamina) == 0x00E8);
static_assert(offsetof(UBBQAttributeSet, TotalStaminaChunks) == 0x00F8);
static_assert(offsetof(UBBQAttributeSet, StaminaPerChunk) == 0x0108);
static_assert(offsetof(UBBQAttributeSet, StaminaRegenRateMultiplier) == 0x0118);
static_assert(offsetof(UBBQAttributeSet, StaminaRegenRateMultiplierMin) == 0x0128);
static_assert(offsetof(UBBQAttributeSet, StaminaRegenRateMultiplierMax) == 0x0138);
static_assert(offsetof(UBBQAttributeSet, SprintStaminaConsumptionRate) == 0x0148);
static_assert(offsetof(UBBQAttributeSet, BleedingOutRateMultiplier) == 0x0158);
static_assert(offsetof(UBBQAttributeSet, BleedingOutRateMultiplierMin) == 0x0168);
static_assert(offsetof(UBBQAttributeSet, BleedingOutRateMultiplierMax) == 0x0178);
static_assert(offsetof(UBBQAttributeSet, FamilyBond) == 0x0188);
static_assert(offsetof(UBBQAttributeSet, FamilyBondMax) == 0x0198);
static_assert(offsetof(UBBQAttributeSet, FamilyBondMin) == 0x01A8);
static_assert(offsetof(UBBQAttributeSet, FamilyBondLevel) == 0x01B8);
static_assert(offsetof(UBBQAttributeSet, FamilyBondLevelMin) == 0x01C8);
static_assert(offsetof(UBBQAttributeSet, FamilyBondLevelMax) == 0x01D8);
static_assert(offsetof(UBBQAttributeSet, MeleeAttackMultiplier) == 0x01E8);
static_assert(offsetof(UBBQAttributeSet, TrackingAbilityCharge) == 0x01F8);
static_assert(offsetof(UBBQAttributeSet, TrackingAbilityChargeMax) == 0x0208);
static_assert(offsetof(UBBQAttributeSet, SissyAbilityCharge) == 0x0218);
static_assert(offsetof(UBBQAttributeSet, SissyAbilityChargeMax) == 0x0228);
static_assert(offsetof(UBBQAttributeSet, HandsAbilityCharge) == 0x0238);
static_assert(offsetof(UBBQAttributeSet, HandsAbilityChargeMax) == 0x0248);
static_assert(offsetof(UBBQAttributeSet, PerkCharges) == 0x0258);
static_assert(offsetof(UBBQAttributeSet, PerkChargeMax) == 0x0268);
static_assert(offsetof(UBBQAttributeSet, ProximityRadius) == 0x0278);
static_assert(offsetof(UBBQAttributeSet, HarvestRescueDuration) == 0x0288);
static_assert(offsetof(UBBQAttributeSet, IncapRescueDuration) == 0x0298);
static_assert(offsetof(UBBQAttributeSet, DamageReceiveMultiplier) == 0x02A8);
static_assert(offsetof(UBBQAttributeSet, StaminaCostReductionMultiplier) == 0x02B8);
static_assert(offsetof(UBBQAttributeSet, InteractionDisplayRadius) == 0x02C8);
static_assert(offsetof(UBBQAttributeSet, BloodTrailDurationMultiplier) == 0x02D8);
static_assert(offsetof(UBBQAttributeSet, BloodTrailSpawnDelayMultiplier) == 0x02E8);
static_assert(offsetof(UBBQAttributeSet, MovementActionMultiplier) == 0x02F8);
static_assert(offsetof(UBBQAttributeSet, FamilyAbilityCharge) == 0x0308);
static_assert(offsetof(UBBQAttributeSet, FamilyAbilityChargeMax) == 0x0318);
static_assert(offsetof(UBBQAttributeSet, MercuryFear) == 0x0328);
static_assert(offsetof(UBBQAudioListenerSubsystem, CinematicCameraOwner) == 0x0058);
static_assert(offsetof(UBBQAudioListenerSubsystem, CinematicCamera) == 0x0060);
static_assert(offsetof(UBBQAudioListenerSubsystem, DefaultListener) == 0x0068);
static_assert(offsetof(UBBQAudioListenerSubsystem, ListenerRoom) == 0x0070);
static_assert(offsetof(UBBQSaveGame, SaveSlotName) == 0x0028);
static_assert(offsetof(FAttributeVariable, AttributeName) == 0x0000);
static_assert(offsetof(FAttributeVariable, VariableType) == 0x0008);
static_assert(offsetof(FGASAttribute, LinkedAttribute) == 0x0010);
static_assert(offsetof(FGameplaySysVariable, LinkedProperty) == 0x0010);
static_assert(offsetof(FBaseCoreStats, CharacterStats) == 0x0000);
static_assert(offsetof(FBaseCoreStats, GameplayVariables) == 0x0010);
static_assert(offsetof(FGASAttributeModifier, LinkedProperty) == 0x0000);
static_assert(offsetof(FCoreStatLevelModifier, CharacterStatModifier) == 0x0000);
static_assert(offsetof(FCoreStatLevelModifier, PositiveGASModifier) == 0x0010);
static_assert(offsetof(FCoreStatLevelModifier, NegativeGASModifier) == 0x0018);
static_assert(offsetof(FCoreStatLevelModifier, PositiveGameplayModifier) == 0x0020);
static_assert(offsetof(FCoreStatLevelModifier, NegativeGameplayModifier) == 0x0028);
static_assert(offsetof(FScalableCoreStatLevelModifier, GameplayEffectModifier) == 0x0000);
static_assert(offsetof(FScalableCoreStatLevelModifier, GameplayVariableModifier) == 0x0008);
static_assert(offsetof(FAttributeLocalData, Title) == 0x0000);
static_assert(offsetof(FAttributeLocalData, Description) == 0x0018);
static_assert(offsetof(FAttributeLocalData, AllowedLevelRange) == 0x0030);
static_assert(offsetof(FAttributeLocalData, AttributeRelationship) == 0x0040);
static_assert(offsetof(FAttributeLocalData, UniformCoreStatModifier) == 0x0068);
static_assert(offsetof(FAttributeLocalData, ScalableCoreStatModifier) == 0x0098);
static_assert(offsetof(FAttributeLocalData, PerLevelCoreStatModifier) == 0x00A8);
static_assert(offsetof(UBBQBasePlayerAttributeAsset, BaseAttributes) == 0x0030);
static_assert(offsetof(UBBQBasePlayerAttributeAsset, GlobalLevelScaleRange) == 0x0040);
static_assert(offsetof(UBBQBasePlayerAttributeAsset, AttributeLocalData) == 0x0048);
static_assert(offsetof(UBBQCharacterCosmeticsData, Outfits) == 0x0030);
static_assert(offsetof(UBBQChainsawSkin, SkinID) == 0x0034);
static_assert(offsetof(UBBQChainsawSkin, AudioSwitch) == 0x0040);
static_assert(offsetof(UBBQChainsawSkin, WeaponMesh) == 0x0048);
static_assert(offsetof(UBBQChainsawSkin, CoreMaterialSlotName) == 0x0070);
static_assert(offsetof(UBBQChainsawSkin, CoreMaterial) == 0x0078);
static_assert(offsetof(UBBQChainsawSkin, BladeMaterial) == 0x00A0);
static_assert(offsetof(UBBQChainsawSkin, SkinName) == 0x00C8);
static_assert(offsetof(UBBQChainsawSkin, Thumbnail) == 0x00E0);
static_assert(offsetof(UBBQChainsawSkin, UnlockUID) == 0x0108);
static_assert(offsetof(UBBQChainsawSkinData, Skins) == 0x0030);
static_assert(offsetof(FLinkedOutfitData, Character) == 0x0000);
static_assert(offsetof(FLinkedOutfitData, Outfit) == 0x0008);
static_assert(offsetof(UBBQCharacterOutfit, CharacterMesh) == 0x0038);
static_assert(offsetof(UBBQCharacterOutfit, WeaponSkinOverride) == 0x0060);
static_assert(offsetof(UBBQCharacterOutfit, OutfitProfiles) == 0x0068);
static_assert(offsetof(UBBQCharacterOutfit, OutfitId) == 0x00BC);
static_assert(offsetof(UBBQCharacterOutfit, OutfitName) == 0x00C8);
static_assert(offsetof(UBBQCharacterOutfit, OutfitIcon) == 0x00E0);
static_assert(offsetof(UBBQCharacterOutfit, UnlockUID) == 0x010C);
static_assert(offsetof(UBBQCharacterOutfit, LinkedOutfitData) == 0x0118);
static_assert(offsetof(UBBQClientSave, LastTitleNewsSeen) == 0x0040);
static_assert(offsetof(UBBQClientSave, GamepadSensitivity) == 0x0050);
static_assert(offsetof(UBBQClientSave, CharactersOutfits) == 0x00B0);
static_assert(offsetof(UBBQClientSave, WeaponSkins) == 0x0240);
static_assert(offsetof(UBBQControlScheme, GlobalControls) == 0x0030);
static_assert(offsetof(UBBQControlScheme, GenericCharacterControls) == 0x0038);
static_assert(offsetof(UBBQControlScheme, TeamCharacterControls) == 0x0040);
static_assert(offsetof(UBBQControlScheme, HidingSpotControls) == 0x0048);
static_assert(offsetof(UBBQControlScheme, MinigameControls) == 0x0050);
static_assert(offsetof(UBBQControlScheme, CharacterSpecificContexts) == 0x0058);
static_assert(offsetof(UBBQControlSchemeSet, ControlSchemeVictim) == 0x0030);
static_assert(offsetof(UBBQControlSchemeSet, ControlSchemeFamily) == 0x0038);
static_assert(offsetof(UBBQControlSchemeSet, ControlSchemeLeatherface) == 0x0040);
static_assert(offsetof(UBBQControlSchemeSettings, TemplateControlSchemeSet) == 0x0030);
static_assert(offsetof(UBBQControlSchemeSettings, PresetModifiers) == 0x0038);
static_assert(offsetof(UBBQControlSchemePersonaliser, ControlSchemeSet) == 0x0028);
static_assert(offsetof(UBBQControlSchemePresets, ControlSchemePresetsVictims) == 0x0030);
static_assert(offsetof(UBBQControlSchemePresets, ControlSchemePresetsFamily) == 0x0040);
static_assert(offsetof(FBBQActionKeyMapping, Action) == 0x0000);
static_assert(offsetof(FBBQActionKeyMapping, Key) == 0x0008);
static_assert(offsetof(FBBQActionKeyMappings, Mappings) == 0x0000);
static_assert(offsetof(UBBQControlsPresetPreferencesSave, ReboundKeys) == 0x0040);
static_assert(offsetof(UBBQControlsPresetPreferencesSave, PreferencesStruct) == 0x0090);
static_assert(offsetof(UBBQCustomMatchSubsystem, CachedCustomMatchSettings) == 0x0030);
static_assert(offsetof(UBBQDebugGameCheats, CheatsList) == 0x0038);
static_assert(offsetof(UBBQDemoMode, DemoTutorial) == 0x0044);
static_assert(offsetof(UBBQDeveloperSettings, IntroLFOutfitOverride) == 0x0040);
static_assert(offsetof(UBBQDeveloperSettings, IntroVictimOverride) == 0x0060);
static_assert(offsetof(UBBQDeveloperSettings, IntroVictimOutfitOverride) == 0x0070);
static_assert(offsetof(UBBQEquippableExecutionData, ExecutionDataName) == 0x0034);
static_assert(offsetof(UBBQEquippableExecutionData, ExecutionDisplayName) == 0x0040);
static_assert(offsetof(UBBQEquippableExecutionData, ExecutionDisplayDescription) == 0x0058);
static_assert(offsetof(UBBQEquippableExecutionData, ExecutionThumbnail) == 0x0070);
static_assert(offsetof(UBBQEquippableExecutionData, UnlockUID) == 0x0098);
static_assert(offsetof(UBBQEquippableExecutionData, ContentPackUnlockIDs) == 0x00A0);
static_assert(offsetof(FBBQEventData, EventName) == 0x0000);
static_assert(offsetof(FBBQEventData, PropertyNameOverride) == 0x0010);
static_assert(offsetof(FBBQEventContainer, GlobalPropertyName) == 0x0000);
static_assert(offsetof(FBBQEventContainer, EventDataList) == 0x0010);
static_assert(offsetof(UBBQEventsDataAsset, EventDataMap) == 0x0030);
static_assert(offsetof(FBBQBaseAttributeLevelModifier, BaseAttributeName) == 0x0000);
static_assert(offsetof(UBBQPerk, LevelModsApplied) == 0x0078);
static_assert(offsetof(UBBQPerk, Name) == 0x0098);
static_assert(offsetof(UBBQPerk, Description) == 0x00B0);
static_assert(offsetof(UBBQPerk, UIAssetIdentifier) == 0x00C8);
static_assert(offsetof(UBBQPerk, ChargesVar) == 0x00D0);
static_assert(offsetof(UBBQPerk, DurationEffects) == 0x0130);
static_assert(offsetof(UBBQPerk, DurationTags) == 0x0140);
static_assert(offsetof(UBBQPerk, DurationVar) == 0x0160);
static_assert(offsetof(UBBQPerk, IconActivateTags) == 0x01B8);
static_assert(offsetof(UBBQPerk, GrantedTags) == 0x01D8);
static_assert(offsetof(UBBQPerk, InputReadyTags) == 0x01F8);
static_assert(offsetof(UBBQPerk, Abilities) == 0x0218);
static_assert(offsetof(UBBQPerk, Effects) == 0x0228);
static_assert(offsetof(UBBQPerk, GameplayVariableMods) == 0x0238);
static_assert(offsetof(UBBQPerk, BaseAttributeLevelMods) == 0x0248);
static_assert(offsetof(UBBQPerk, PerkData) == 0x0258);
static_assert(offsetof(UBBQPerk, ActivationRequiredTags) == 0x0260);
static_assert(offsetof(UBBQAbilityPerk, NonActivatableAbilities) == 0x0288);
static_assert(offsetof(UBBQAbilityPerk, NonCancelableAbilities) == 0x02A8);
static_assert(offsetof(UBBQFamilyMottoPerk, perk) == 0x0030);
static_assert(offsetof(UBBQFamilyMottoPerk, PerkPtr) == 0x0038);
static_assert(offsetof(UBBQMottoPerk, PerkCategory) == 0x028C);
static_assert(offsetof(UBBQMottoPerk, ApplyPerkTo) == 0x028D);
static_assert(offsetof(UBBQFlickeringLightAudioComponent, AkEvent) == 0x00B0);
static_assert(offsetof(UBBQFlickeringLightAudioComponent, LightIntensityRtpc) == 0x00B8);
static_assert(offsetof(UBBQFlickeringLightAudioComponent, Priority) == 0x00C0);
static_assert(offsetof(UBBQFlickeringLightAudioComponent, AkComponent) == 0x00C8);
static_assert(offsetof(UBBQFlickeringLightAudioComponent, ListenerSys) == 0x00D0);
static_assert(offsetof(UBBQFlickeringLightAudioComponent, AkPool) == 0x00D8);
static_assert(offsetof(UBBQPickupItemData, InventorySlotFilledIcon) == 0x0030);
static_assert(offsetof(UBBQPickupItemData, HeldItemMesh) == 0x0038);
static_assert(offsetof(UBBQPickupItemData, SelectedInventoryItemAkEvent) == 0x0040);
static_assert(offsetof(UBBQPickupItemData, ConsumeItemAnimSlots) == 0x0048);
static_assert(offsetof(UBBQPickupItemData, HandPositionOffset) == 0x0058);
static_assert(offsetof(UBBQPickupItemData, HandRotationOffset) == 0x0064);
static_assert(offsetof(UBBQGameConstants, DefaultFamilyMottoPerks) == 0x0048);
static_assert(offsetof(UBBQGameConstants, FamilyBondLevelProgressionTable) == 0x0058);
static_assert(offsetof(UBBQGameConstants, InteractionLineOfSightChannel) == 0x0064);
static_assert(offsetof(UBBQGameConstants, InteractionObjectChannel) == 0x0065);
static_assert(offsetof(UBBQGameConstants, InteractionCharacterChannel) == 0x0066);
static_assert(offsetof(UBBQGameConstants, MeleeLineOfSightChannel) == 0x0067);
static_assert(offsetof(UBBQGameConstants, MeleeCollisionChannel) == 0x0068);
static_assert(offsetof(UBBQGameConstants, PickupItemData) == 0x0070);
static_assert(offsetof(UBBQGameConstants, LeatherfaceExecutionsForAchievement) == 0x00C0);
static_assert(offsetof(UBBQGameConstants, CookExecutionsForAchievement) == 0x00D0);
static_assert(offsetof(UBBQGameConstants, HitchhikerExecutionsForAchievement) == 0x00E0);
static_assert(offsetof(UBBQGameConstants, JohnnyExecutionsForAchievement) == 0x00F0);
static_assert(offsetof(UBBQGameConstants, SissyExecutionsForAchievement) == 0x0100);
static_assert(offsetof(UBBQGameConstants, CustomMatchSettingDefinitionDataTable) == 0x0118);
static_assert(offsetof(UBBQGameInstance, LocalPlayerPrefs) == 0x01A8);
static_assert(offsetof(UBBQGameInstance, DisconnectedPlayers) == 0x01B0);
static_assert(offsetof(UBBQGameInstance, DebugCLAndSeverWidgetClass) == 0x01C0);
static_assert(offsetof(UBBQGameInstance, DebugCLAndSeverWidget) == 0x01C8);
static_assert(offsetof(UBBQGameInstance, DemoModeClass) == 0x01D0);
static_assert(offsetof(UBBQGameInstance, DemoMode) == 0x01D8);
static_assert(offsetof(UBBQGameInstance, MapList) == 0x01E0);
static_assert(offsetof(UBBQGameInstance, BBQGameConstants) == 0x0270);
static_assert(offsetof(UBBQGameInstance, MetaGameConstants) == 0x0298);
static_assert(offsetof(UBBQGameInstance, DefaultStringTable) == 0x02C0);
static_assert(offsetof(UBBQGameInstance, MatchmakingSuccessAkEvent) == 0x02C8);
static_assert(offsetof(UBBQGameInstance, GameModeSwitchValues) == 0x02F0);
static_assert(offsetof(UBBQGameInstance, BBQMusicManagerClass) == 0x0340);
static_assert(offsetof(UBBQGameInstance, MusicManagerInstance) == 0x0348);
static_assert(offsetof(UBBQGameInstance, BBQSaveManagerClass) == 0x0350);
static_assert(offsetof(UBBQGameInstance, BBQControlSchemeSettings) == 0x0358);
static_assert(offsetof(UBBQGameInstance, SaveManagerInstance) == 0x0360);
static_assert(offsetof(UBBQGameInstance, SocialServiceInstance) == 0x0368);
static_assert(offsetof(UBBQGameInstance, TutorialManagerInstance) == 0x0370);
static_assert(offsetof(UBBQGameInstance, GameMessagesQueue) == 0x0378);
static_assert(offsetof(UBBQGameInstance, PreloadManagerClass) == 0x0380);
static_assert(offsetof(UBBQGameInstance, PreloadManagerInstance) == 0x0388);
static_assert(offsetof(UBBQGameInstance, LoadoutManagerInstance) == 0x0390);
static_assert(offsetof(UBBQGameInstance, UnlockableManagerInstance) == 0x0398);
static_assert(offsetof(UBBQGameInstance, PlayerAvatarCacheInstance) == 0x03A0);
static_assert(offsetof(UBBQGameInstance, TitleUpsellDataInstance) == 0x03A8);
static_assert(offsetof(UBBQGameInstance, AllowedPakList) == 0x0708);
static_assert(offsetof(UBBQGameInstance, DisallowedPakList) == 0x0718);
static_assert(offsetof(UBBQGameInstance, RecordingName) == 0x0730);
static_assert(offsetof(UBBQGameInstance, FriendlyRecordingName) == 0x0740);
static_assert(offsetof(UBBQGameInstance, WantedTimeOfDay) == 0x0758);
static_assert(offsetof(UBBQGameInstance, WantedMap) == 0x0760);
static_assert(offsetof(UBBQGameInstance, CachedCustomMatchSettings) == 0x0778);
static_assert(offsetof(UBBQGameInstance, BushParametersAsset) == 0x07A8);
static_assert(offsetof(UBBQGameInstance, ActiveMatchResults) == 0x0820);
static_assert(offsetof(UBBQGameInstance, BBQAchievements) == 0x0860);
static_assert(offsetof(UBBQGameInstance, ControlSchemePersonaliser) == 0x0868);
static_assert(offsetof(UBBQGameModifierDefinitionAsset, LocalizedName) == 0x0030);
static_assert(offsetof(UBBQGameModifierDefinitionAsset, LocalizedDescription) == 0x0048);
static_assert(offsetof(UBBQGameModifierDefinitionAsset, ModifierName) == 0x0060);
static_assert(offsetof(UBBQGameModifierDefinitionAsset, ModifierType) == 0x0068);
static_assert(offsetof(FBBQGameplayAbilityInfo, GameplayAbilityClass) == 0x0000);
static_assert(offsetof(UBBQGameplayAbilitySet, Abilities) == 0x0030);
static_assert(offsetof(UBBQVariableBasedMagnitudeCalculation, BackingVariableKey) == 0x0040);
static_assert(offsetof(FBBQBackingGameplayVariable, Variable) == 0x0000);
static_assert(offsetof(FBBQVariableBasedFloat, Coefficient) == 0x0000);
static_assert(offsetof(FBBQVariableBasedFloat, PreMultiplyAdditiveValue) == 0x0028);
static_assert(offsetof(FBBQVariableBasedFloat, PostMultiplyAdditiveValue) == 0x0050);
static_assert(offsetof(FBBQVariableBasedFloat, BackingVariable) == 0x0078);
static_assert(offsetof(FBBQVariableBasedFloat, VariableCalculationType) == 0x00C8);
static_assert(offsetof(FBBQVariableBasedModifierInfo, Attribute) == 0x0000);
static_assert(offsetof(FBBQVariableBasedModifierInfo, ModifierOp) == 0x0038);
static_assert(offsetof(FBBQVariableBasedModifierInfo, Magnitude) == 0x0040);
static_assert(offsetof(UBBQGameplayEffect, ActivityEventOnApplication) == 0x0808);
static_assert(offsetof(UBBQGameplayEffect, GameplayVariableModToApply) == 0x0818);
static_assert(offsetof(UBBQGameplayEffect, BackingGameplayVariables) == 0x0820);
static_assert(offsetof(UBBQGameplayEffect, GameplayVariablesToCaptureFromTarget) == 0x0870);
static_assert(offsetof(UBBQGameplayEffect, VariableBasedModifiers) == 0x0880);
static_assert(offsetof(UBBQGameplayEffect, CancelActiveAbilitiesWithTags) == 0x0890);
static_assert(offsetof(UBBQGamePreferencesSave, HUDVisibility) == 0x0046);
static_assert(offsetof(FAttributePointDistribution, AttributeLevelOffsets) == 0x0008);
static_assert(offsetof(FAppliedLevelMod, AttributeName) == 0x0000);
static_assert(offsetof(UBBQLoadoutComponent, PointDistribution) == 0x0150);
static_assert(offsetof(UBBQLoadoutComponent, StarSignPerk) == 0x0168);
static_assert(offsetof(UBBQLoadoutComponent, DefaultAttributeAsset) == 0x0170);
static_assert(offsetof(UBBQLoadoutComponent, AttributeLevelModsApplied) == 0x0178);
static_assert(offsetof(UBBQLoadoutComponent, LevelModsAppliedInGame) == 0x0188);
static_assert(offsetof(UBBQLoadoutComponent, CustomAttributeModsApplied) == 0x0198);
static_assert(offsetof(UBBQLoadoutManager, GameInstance) == 0x0038);
static_assert(offsetof(FBBQMapData, MapName) == 0x0000);
static_assert(offsetof(FBBQMapData, DisplayName) == 0x0010);
static_assert(offsetof(FBBQMapData, TimeOfDay) == 0x0028);
static_assert(offsetof(FBBQMapData, PreviewTexture) == 0x0030);
static_assert(offsetof(FBBQMapData, MainTexture) == 0x0058);
static_assert(offsetof(FBBQMapData, LobbyMusicSwitchValue) == 0x0080);
static_assert(offsetof(FBBQMapData, AssetsToPreload) == 0x0088);
static_assert(offsetof(UBBQMapDataAsset, MapID) == 0x0038);
static_assert(offsetof(UBBQMapDataAsset, MapData) == 0x0040);
static_assert(offsetof(UBBQMapDataList, MapData) == 0x0028);
static_assert(offsetof(UBBQMapDataList, DeveloperMapData) == 0x0038);
static_assert(offsetof(UBBQMetaGameConstants, RequiredCharactersForAllCharacterLevelsAchievement) == 0x0040);
static_assert(offsetof(UBBQMetaGameConstants, BBQEventsDataAsset) == 0x0058);
static_assert(offsetof(UBBQMetaGameConstants, LevelProgressionTable) == 0x0060);
static_assert(offsetof(UBBQMetaGameConstants, CharacterLevelDataTable) == 0x0068);
static_assert(offsetof(UBBQMetaGameConstants, PerksDataTable) == 0x0070);
static_assert(offsetof(UBBQMetaGameConstants, TutorialsDataTable) == 0x0078);
static_assert(offsetof(UBBQMetaGameConstants, AchievementsDataTable) == 0x0080);
static_assert(offsetof(UBBQMetaGameConstants, UnlockableDefinitionsCompositeDataTable) == 0x0088);
static_assert(offsetof(UBBQMetaGameConstants, UnlockableConditionsDataTable) == 0x0090);
static_assert(offsetof(UBBQMetaGameConstants, UnlockableArtDataTable) == 0x0098);
static_assert(offsetof(UBBQMetaGameConstants, UnlockableModelSkinDataTable) == 0x00A0);
static_assert(offsetof(UBBQMetaGameConstants, UnlockableTextureSkinDataTable) == 0x00A8);
static_assert(offsetof(UBBQMetaGameConstants, UnlockableExecutionDataTable) == 0x00B0);
static_assert(offsetof(UBBQMetaGameConstants, UnlockableWeaponDataTable) == 0x00B8);
static_assert(offsetof(UBBQMetaGameConstants, ActivityEventOnKill) == 0x00C0);
static_assert(offsetof(UBBQMetaGameConstants, ActivityEventOnKillMercury) == 0x00D0);
static_assert(offsetof(UBBQMetaGameConstants, ActivityEventMercuryFearNotifyJohnny) == 0x00E0);
static_assert(offsetof(UBBQMetaGameConstants, ActivityEventMercuryFearNotify) == 0x00F0);
static_assert(offsetof(UBBQMetaGameConstants, LastVictimStandingVictimEvent) == 0x0100);
static_assert(offsetof(UBBQMetaGameConstants, LastVictimStandingFamilyEvent) == 0x0110);
static_assert(offsetof(UBBQMetaGameConstants, ActivityEventOnIncapacitate) == 0x0120);
static_assert(offsetof(UBBQMetaGameConstants, FamilyBondUpEvent) == 0x0130);
static_assert(offsetof(UBBQMetaGameConstants, FamilyBondDownEvent) == 0x0140);
static_assert(offsetof(UBBQMetaGameConstants, SonarActivationWarningEvent) == 0x0150);
static_assert(offsetof(UBBQMetaGameConstants, SonarActivationMAXWarningEvent) == 0x0160);
static_assert(offsetof(UBBQMetaGameConstants, SonarActivationWarningFamilyForVictimsEvent) == 0x0170);
static_assert(offsetof(UBBQMetaGameConstants, SonarActivationWarningFamilyEvent) == 0x0180);
static_assert(offsetof(UBBQMetaGameConstants, SonarActivationMAXWarningFamilyEvent) == 0x0190);
static_assert(offsetof(UBBQMetaGameConstants, SonarActivationWarningFamilySpottedEvent) == 0x01A0);
static_assert(offsetof(UBBQMetaGameConstants, ActivityEventPlayerDisconnected) == 0x01B0);
static_assert(offsetof(UBBQMetaGameConstants, PerkIdMap) == 0x01C0);
static_assert(offsetof(FMusicFlowInfo, SwitchName) == 0x0000);
static_assert(offsetof(FMusicFlowInfo, AudioState) == 0x0010);
static_assert(offsetof(FMusicPlayerStateList, States) == 0x0000);
static_assert(offsetof(UBBQMusicManager, MusicStartEvent) == 0x0028);
static_assert(offsetof(UBBQMusicManager, MusicStopEvent) == 0x0030);
static_assert(offsetof(UBBQMusicManager, LoadingAudioEvent) == 0x0038);
static_assert(offsetof(UBBQMusicManager, LoadingAudioEventMercury) == 0x0040);
static_assert(offsetof(UBBQMusicManager, IngameUILevelRtpc) == 0x0048);
static_assert(offsetof(UBBQMusicManager, MusicFlowSwitchName) == 0x0058);
static_assert(offsetof(UBBQMusicManager, PlayerStateSwitchName) == 0x0068);
static_assert(offsetof(UBBQMusicManager, PlayerNameSwitchName) == 0x0078);
static_assert(offsetof(UBBQMusicManager, DefaultPlayerStateMusicName) == 0x0088);
static_assert(offsetof(UBBQMusicManager, MusicFlowStateSwitchMap) == 0x0098);
static_assert(offsetof(UBBQMusicManager, IgnoredPlayerStateTransitions) == 0x00E8);
static_assert(offsetof(UBBQMusicManager, AudioEventMap) == 0x0138);
static_assert(offsetof(FPerkLevelModifier, ID) == 0x0000);
static_assert(offsetof(FPerkLevelModifier, DescriptionShort) == 0x0008);
static_assert(offsetof(FPerkLevelModifier, DescriptionFull) == 0x0020);
static_assert(offsetof(FPerkLevelModifier, ArgumentAndAssociatedValueTextMap) == 0x0038);
static_assert(offsetof(FPerkLevelModifier, OverrideText) == 0x0088);
static_assert(offsetof(FPerkLevelModifier, GrantedTags) == 0x00A8);
static_assert(offsetof(FPerkLevelModifier, Abilities) == 0x00C8);
static_assert(offsetof(FPerkLevelModifier, Effects) == 0x00D8);
static_assert(offsetof(FPerkLevelModifier, GameplayVariableMods) == 0x00E8);
static_assert(offsetof(FPerkLevelModifier, BaseAttributeLevelMods) == 0x00F8);
static_assert(offsetof(FPerkLevelData, LevelModifiers) == 0x0000);
static_assert(offsetof(FModifierIdContainer, ModifierIds) == 0x0000);
static_assert(offsetof(UBBQPerkData, LevelData) == 0x0030);
static_assert(offsetof(UBBQPerkData, LevelModifierRelationship) == 0x0040);
static_assert(offsetof(FBBQPlayerPrefsRaw, WantedCharacter) == 0x0000);
static_assert(offsetof(ABBQPlayerPrefs, RawPrefs) == 0x0268);
static_assert(offsetof(UPlayerSetupPerkSet, Perks) == 0x0030);
static_assert(offsetof(UPlayerSetupPerkSet, FamilyMottoPerks) == 0x0040);
static_assert(offsetof(UPlayerSetupPerkSet, StarSignPerks) == 0x0050);
static_assert(offsetof(UPlayerSetupPerkSet, AbilityPerks) == 0x0060);
static_assert(offsetof(FCharacterInitialLoadout, Perks) == 0x0000);
static_assert(offsetof(FCharacterInitialLoadout, StarSignPerk) == 0x0010);
static_assert(offsetof(FCharacterInitialLoadout, MottoPerk) == 0x0018);
static_assert(offsetof(FCharacterInitialLoadout, FamilyAbilityPerk) == 0x0020);
static_assert(offsetof(FPlayerSetup, CharacterName) == 0x0004);
static_assert(offsetof(FPlayerSetup, Description) == 0x0010);
static_assert(offsetof(FPlayerSetup, PlayableCharacterClass) == 0x0020);
static_assert(offsetof(FPlayerSetup, LevelIntroImposterClass) == 0x0048);
static_assert(offsetof(FPlayerSetup, TeamId) == 0x0070);
static_assert(offsetof(FPlayerSetup, Gender) == 0x0074);
static_assert(offsetof(FPlayerSetup, ProximityRadiusVar) == 0x0080);
static_assert(offsetof(FPlayerSetup, StartingNumberOfHealthChunksVar) == 0x00D8);
static_assert(offsetof(FPlayerSetup, ValueOfEachHealthChunkVar) == 0x0130);
static_assert(offsetof(FPlayerSetup, InitStaminaVar) == 0x01A0);
static_assert(offsetof(FPlayerSetup, MaxStaminaVar) == 0x01F8);
static_assert(offsetof(FPlayerSetup, TotalStaminaChunks) == 0x0250);
static_assert(offsetof(FPlayerSetup, StartingStaminaChunks) == 0x02A8);
static_assert(offsetof(FPlayerSetup, StaminaPerChunk) == 0x0300);
static_assert(offsetof(FPlayerSetup, StaminaChainingRangeMin) == 0x0358);
static_assert(offsetof(FPlayerSetup, StaminaChainingRangeMax) == 0x03B0);
static_assert(offsetof(FPlayerSetup, SprintStaminaConsumptionRateVar) == 0x0408);
static_assert(offsetof(FPlayerSetup, PerkSets) == 0x0480);
static_assert(offsetof(FPlayerSetup, InitialLoadout) == 0x0490);
static_assert(offsetof(FPlayerSetup, BasePlayerAttributes) == 0x04B8);
static_assert(offsetof(FPlayerSetup, AvailableOnSpotExecutions) == 0x04C0);
static_assert(offsetof(FPlayerSetup, AvailableHarvestExecutions) == 0x04D0);
static_assert(offsetof(FPlayerSetup, CharacterCosmeticsData) == 0x04E0);
static_assert(offsetof(FPlayerSetup, CharacterSkinOverride) == 0x04E8);
static_assert(offsetof(FPlayerSetup, WeaponSkins) == 0x04F0);
static_assert(offsetof(FPlayerSetup, DisplayName) == 0x04F8);
static_assert(offsetof(FPlayerSetup, CharacterDescription) == 0x0510);
static_assert(offsetof(FPlayerSetup, CharacterImage) == 0x0528);
static_assert(offsetof(FPlayerSetup, CharacterSelectImage) == 0x0550);
static_assert(offsetof(FPlayerSetup, UnlockUID) == 0x0578);
static_assert(offsetof(UPlayerSetupDataAsset, CharacterName) == 0x0030);
static_assert(offsetof(UPlayerSetupDataAsset, PlayerSetup) == 0x0040);
static_assert(offsetof(UPlayerSetupProperties, PlayerSetups) == 0x0028);
static_assert(offsetof(FPlayerSingleStat, StatType) == 0x000C);
static_assert(offsetof(FStatArray, Items) == 0x0108);
static_assert(offsetof(UBBQPlayerStatComponent, SavedStats) == 0x00F8);
static_assert(offsetof(UBBQPlayerStatComponent, PendingUpdates) == 0x0220);
static_assert(offsetof(UBBQPreloadManager, LevelDataAssets) == 0x0030);
static_assert(offsetof(UBBQPreloadManager, MuseumPreloadAssetTable) == 0x0080);
static_assert(offsetof(ABBQRenderQualityVolume, Root) == 0x0228);
static_assert(offsetof(ABBQRenderQualityVolume, VolumeCollision) == 0x0230);
static_assert(offsetof(ABBQReverbVolume, AuxBus) == 0x0260);
static_assert(offsetof(ABBQReverbVolume, ReverbComp) == 0x0278);
static_assert(offsetof(UBBQSaveManager, MetaGameService) == 0x0070);
static_assert(offsetof(UBBQSaveManager, ClientSave) == 0x0080);
static_assert(offsetof(UBBQSaveManager, SessionRecoverySave) == 0x0088);
static_assert(offsetof(UBBQSaveManager, AudioPreferences) == 0x0090);
static_assert(offsetof(UBBQSaveManager, VideoPreferences) == 0x0098);
static_assert(offsetof(UBBQSaveManager, GamePreferences) == 0x00A0);
static_assert(offsetof(UBBQSaveManager, ControlsPresetPreferences) == 0x00A8);
static_assert(offsetof(UBBQSaveManager, UnlockTreeSave) == 0x00B0);
static_assert(offsetof(UBBQSaveManager, PendingSaveTasks) == 0x00C0);
static_assert(offsetof(UBBQSessionRecoverySave, SessionName) == 0x0044);
static_assert(offsetof(UBBQSessionRecoverySave, SessionVersion) == 0x0050);
static_assert(offsetof(UBBQSessionRecoverySave, ID) == 0x0060);
static_assert(offsetof(UBBQSessionRecoverySave, SessionType) == 0x0070);
static_assert(offsetof(ABBQTeleportLocation, Name) == 0x0228);
static_assert(offsetof(UBBQTutorialManager, TutorialsDataTable) == 0x0048);
static_assert(offsetof(UBBQUnlockableManager, UnlockableDefinitionDataTable) == 0x0040);
static_assert(offsetof(UBBQUnlockableManager, UnlockableConditionsDataTable) == 0x0048);
static_assert(offsetof(UBBQUnlockableManager, UnlockableStatus) == 0x0050);
static_assert(offsetof(FBBQUnlockTreeRevealedPositions, RevealedPositions) == 0x0000);
static_assert(offsetof(UBBQUnlockTreeSave, CharacterUnlockTreeRevealedNodes) == 0x0040);
static_assert(offsetof(UBBQVideoPreferencesSave, SavedResolution) == 0x0044);
static_assert(offsetof(UBBQVideoPreferencesSave, SavedFullscreenMode) == 0x004C);
static_assert(offsetof(UBBQVideoPreferencesSave, ConsoleGraphicsMode) == 0x004D);
static_assert(offsetof(UBBQViewportClient, LoadingScreenWidget) == 0x03A0);
static_assert(offsetof(UBBQViewportClient, ActivePopUpWidget) == 0x03A8);
static_assert(offsetof(UBBQViewportClient, AutoSaveWarningWidget) == 0x03B0);
static_assert(offsetof(UBBQViewportClient, WatermarkWidget) == 0x03B8);
static_assert(offsetof(UBBQViewportClient, WatermarkClass) == 0x03D0);
static_assert(offsetof(UBBQViewportClient, AutoSaveWarningWidgetClass) == 0x03D8);
static_assert(offsetof(UBBQViewportClient, TopLeftVoiceChatIndicatorGroupClass) == 0x03E8);
static_assert(offsetof(UBBQViewportClient, BottomRightVoiceChatIndicatorGroupClass) == 0x03F0);
static_assert(offsetof(UBBQWwiseNiagaraDataInterface, AkEvent) == 0x0038);
static_assert(offsetof(UBBQWwiseNiagaraDataInterface, AkRtpc) == 0x0040);
static_assert(offsetof(UBBQProximityCheckComponent, UseActorsWithTag) == 0x04B0);
static_assert(offsetof(FBBQLoadoutData, Exec) == 0x0000);
static_assert(offsetof(FBBQLoadoutData, perk) == 0x0008);
static_assert(offsetof(FBBQLoadoutData, Slot) == 0x0018);
static_assert(offsetof(FBBQLoadoutData, attr) == 0x0030);
static_assert(offsetof(FLinkedStatProgress, Stat) == 0x0000);
static_assert(offsetof(FBBQTutorialSubtitleEntry, Text) == 0x0008);
static_assert(offsetof(FBBQTutorialSubtitleEntry, ActionsForIconDisplayInText) == 0x0020);
static_assert(offsetof(FBBQTutorialDefinition, LinkedCharacterName) == 0x0010);
static_assert(offsetof(FBBQTutorialDefinition, Title) == 0x0018);
static_assert(offsetof(FBBQTutorialDefinition, SecondTitle) == 0x0030);
static_assert(offsetof(FBBQTutorialDefinition, Description) == 0x0048);
static_assert(offsetof(FBBQTutorialDefinition, Team) == 0x0060);
static_assert(offsetof(FBBQTutorialDefinition, UnlockableUID) == 0x0068);
static_assert(offsetof(FBBQTutorialDefinition, Thumbnail) == 0x0070);
static_assert(offsetof(FBBQTutorialDefinition, Subtitles) == 0x0098);
static_assert(offsetof(FBBQTutorialDefinition, Video) == 0x00A8);
static_assert(offsetof(FBBQAchievementDataRow, AchievementName) == 0x0008);
static_assert(offsetof(FBBQAchievementDataRow, RequiredStatsProgress) == 0x0018);
static_assert(offsetof(FBBQAchievementDataRow, UnlockCondition) == 0x0028);
static_assert(offsetof(FBBQCustomMatchSettingDefinition, CustomKey) == 0x0008);
static_assert(offsetof(FBBQCustomMatchSettingDefinition, SettingType) == 0x0010);
static_assert(offsetof(FBBQCustomMatchSettingDefinition, PayloadType) == 0x0014);
static_assert(offsetof(FBBQCustomMatchSettingDefinition, AttributeName) == 0x0028);
static_assert(offsetof(FValueSelector, AttributeValue) == 0x0000);
static_assert(offsetof(FValueSelector, BackingGameplayVarValue) == 0x0040);
static_assert(offsetof(FBBQInputActionRow, InputAction) == 0x0008);
static_assert(offsetof(FBBQLoadoutDataArray, Loadouts) == 0x0000);
static_assert(offsetof(FBBQLoadoutDataCollection, Characters) == 0x0000);
static_assert(offsetof(FBBQMetaGamePerkData, perk) == 0x0030);
static_assert(offsetof(FBBQMetaRef, Actor) == 0x0000);
static_assert(offsetof(FBBQMetaRef, Name) == 0x0008);
static_assert(offsetof(FBBQLoadoutApplicationData, Perks) == 0x0000);
static_assert(offsetof(FBBQLoadoutApplicationData, StarSignPerk) == 0x0010);
static_assert(offsetof(FBBQLoadoutApplicationData, FamilyMottoPerk) == 0x0018);
static_assert(offsetof(FBBQLoadoutApplicationData, OnSpotExecutionType) == 0x0024);
static_assert(offsetof(FBBQLoadoutApplicationData, AttributePointDistribution) == 0x0030);
static_assert(offsetof(FSavedExecution, CharacterName) == 0x0000);
static_assert(offsetof(FSavedExecution, TeamId) == 0x0008);
static_assert(offsetof(FSavedExecution, PerformedExecutions) == 0x0010);
static_assert(offsetof(FDataAssetToPreload, DataAsset) == 0x0008);
static_assert(offsetof(FBBQUnlockableBaseData, UnlockUID) == 0x0008);
static_assert(offsetof(FBBQUnlockableArtData, DisplayName) == 0x0010);
static_assert(offsetof(FBBQUnlockableArtData, DescriptionTitle) == 0x0028);
static_assert(offsetof(FBBQUnlockableArtData, ShortDescription) == 0x0040);
static_assert(offsetof(FBBQUnlockableArtData, FullDescription) == 0x0058);
static_assert(offsetof(FBBQUnlockableArtData, UnlockableType) == 0x0070);
static_assert(offsetof(FBBQUnlockableArtData, PreviewTexture) == 0x0078);
static_assert(offsetof(FBBQUnlockableArtData, MediaItem) == 0x00A0);
static_assert(offsetof(FBBQUnlockableExecutionData, DisplayName) == 0x0010);
static_assert(offsetof(FBBQUnlockableExecutionData, PreviewTexture) == 0x0028);
static_assert(offsetof(FBBQUnlockableExecutionData, ExecutionDataName) == 0x0050);
static_assert(offsetof(FBBQUnlockConditions, UnlockCriteria) == 0x0008);
static_assert(offsetof(FBBQUnlockConditions, StatRequirements) == 0x0010);
static_assert(offsetof(FBBQUnlockConditions, UnlockConditions) == 0x0020);
static_assert(offsetof(FBBQUnlockableDefinition, UnlockUID) == 0x0008);
static_assert(offsetof(FBBQUnlockableDefinition, UnlockCriteria) == 0x0010);
static_assert(offsetof(FBBQUnlockableDefinition, UnlockRequirements) == 0x0020);
static_assert(offsetof(FBBQUnlockableDefinition, Achievement) == 0x0030);
static_assert(offsetof(FBBQUnlockableDefinition, Character) == 0x0040);
static_assert(offsetof(FBBQUnlockableWeaponData, DisplayName) == 0x0010);
static_assert(offsetof(FBBQURLResourceOption, WantedCharacters) == 0x0000);
static_assert(offsetof(FBBQURLResourceOption, WantedOutfits) == 0x0010);
static_assert(offsetof(FBBQURLResourceOption, GameInstance) == 0x0020);
static_assert(offsetof(FBBQURLResourceOption, AssetsToLoad) == 0x0028);
static_assert(offsetof(FScreenLogCategory, CategoryName) == 0x0004);
