
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UBBQBackfillPreferencesInterface;
class UBBQEnhancedInputInterface;
class UBBQPopUpSystemBlueprintLibrary;
class UBBQSubtitleSystemBlueprintLibrary;
class UHUDMessagesBlueprintLibrary;
class UTeamIDInterface;

/// Enum /Script/BBQInterface.ETeamID
/// Size: 0x01 (1 bytes)
enum class ETeamID : uint8_t
{
	ETeamID__TI_Invalid                                                              = 0,
	ETeamID__TI_PlayerTeam1                                                          = 17,
	ETeamID__TI_PlayerTeam2                                                          = 18,
	ETeamID__TI_PlayerTeam3                                                          = 19,
	ETeamID__TI_PlayerTeam4                                                          = 20,
	ETeamID__TI_AITeam1                                                              = 33,
	ETeamID__TI_AITeam2                                                              = 34,
	ETeamID__TI_MaxPlayerTeams                                                       = 4,
	ETeamID__TI_MaxAITeams                                                           = 2,
	ETeamID__TI_VictimTeam                                                           = 17,
	ETeamID__TI_FamilyTeam                                                           = 18,
	ETeamID__TI_QuickTeam                                                            = 1
};

/// Enum /Script/BBQInterface.EBloodCollectionSource
/// Size: 0x01 (1 bytes)
enum class EBloodCollectionSource : uint8_t
{
	EBloodCollectionSource__None                                                     = 0,
	EBloodCollectionSource__Damage                                                   = 1,
	EBloodCollectionSource__BloodBucket                                              = 2,
	EBloodCollectionSource__Perks                                                    = 3
};

/// Enum /Script/BBQInterface.EHealthState
/// Size: 0x01 (1 bytes)
enum class EHealthState : uint8_t
{
	EHealthState__Normal                                                             = 0,
	EHealthState__Injured                                                            = 1
};

/// Enum /Script/BBQInterface.EMoveMode
/// Size: 0x01 (1 bytes)
enum class EMoveMode : uint8_t
{
	EMoveMode__Idle                                                                  = 0,
	EMoveMode__Walk                                                                  = 1,
	EMoveMode__Run                                                                   = 2,
	EMoveMode__Sprint                                                                = 3,
	EMoveMode__Fly                                                                   = 4,
	EMoveMode__GravMod                                                               = 5
};

/// Enum /Script/BBQInterface.BBQMovementAction
/// Size: 0x01 (1 bytes)
enum class BBQMovementAction : uint8_t
{
	BBQMovementAction__None                                                          = 0,
	BBQMovementAction__LowMantle                                                     = 1,
	BBQMovementAction__HightMantle                                                   = 2,
	BBQMovementAction__ClimbOver                                                     = 3,
	BBQMovementAction__JumpOver                                                      = 4,
	BBQMovementAction__GettingUp                                                     = 5
};

/// Enum /Script/BBQInterface.BBQStance
/// Size: 0x01 (1 bytes)
enum class BBQStance : uint8_t
{
	BBQStance__Standing                                                              = 0,
	BBQStance__Crouching                                                             = 1
};

/// Enum /Script/BBQInterface.EBBQEmotion
/// Size: 0x01 (1 bytes)
enum class EBBQEmotion : uint8_t
{
	EBBQEmotion__Neutral                                                             = 0,
	EBBQEmotion__Anger                                                               = 1,
	EBBQEmotion__Fear                                                                = 2,
	EBBQEmotion__Injured                                                             = 3,
	EBBQEmotion__Pain                                                                = 4,
	EBBQEmotion__Scream                                                              = 5,
	EBBQEmotion__Laugh                                                               = 6,
	EBBQEmotion__Custom                                                              = 7,
	EBBQEmotion__Custom9                                                             = 8,
	EBBQEmotion__Custom10                                                            = 9,
	EBBQEmotion__Custom11                                                            = 10
};

/// Enum /Script/BBQInterface.EHitDirection
/// Size: 0x01 (1 bytes)
enum class EHitDirection : uint8_t
{
	EHitDirection__Invalid                                                           = 0,
	EHitDirection__Right                                                             = 1,
	EHitDirection__RightBack                                                         = 2,
	EHitDirection__Back                                                              = 3,
	EHitDirection__LeftBack                                                          = 4,
	EHitDirection__LeftFront                                                         = 5,
	EHitDirection__Front                                                             = 6,
	EHitDirection__Left                                                              = 7,
	EHitDirection__RightFront                                                        = 8
};

/// Enum /Script/BBQInterface.ESmoothTurnState
/// Size: 0x01 (1 bytes)
enum class ESmoothTurnState : uint8_t
{
	ESmoothTurnState__TS_None                                                        = 0,
	ESmoothTurnState__TS_TurnLeft                                                    = 1,
	ESmoothTurnState__TS_TurnRight                                                   = 2
};

/// Enum /Script/BBQInterface.EAnimStance
/// Size: 0x01 (1 bytes)
enum class EAnimStance : uint8_t
{
	EAnimStance__AS_None                                                             = 0,
	EAnimStance__AS_SideArm                                                          = 1,
	EAnimStance__AS_NanoHive                                                         = 2,
	EAnimStance__AS_Ivalid                                                           = 3
};

/// Enum /Script/BBQInterface.EPose
/// Size: 0x01 (1 bytes)
enum class EPose : uint8_t
{
	EPose__Stand                                                                     = 0,
	EPose__Crouch                                                                    = 1,
	EPose__Jump                                                                      = 2,
	EPose__Incapacity                                                                = 3,
	EPose__Fly                                                                       = 4,
	EPose__Swim                                                                      = 5,
	EPose__Climb                                                                     = 6,
	EPose__Weakened                                                                  = 7,
	EPose__Armoured                                                                  = 8,
	EPose__Deployed                                                                  = 9,
	EPose__HighG                                                                     = 10,
	EPose__Peeking                                                                   = 11
};

/// Enum /Script/BBQInterface.EBBQFootstepType
/// Size: 0x01 (1 bytes)
enum class EBBQFootstepType : uint8_t
{
	EBBQFootstepType__Step                                                           = 0,
	EBBQFootstepType__WalkRun                                                        = 1,
	EBBQFootstepType__Jump                                                           = 2,
	EBBQFootstepType__Land                                                           = 3
};

/// Enum /Script/BBQInterface.EBBQGroundedEntryState
/// Size: 0x01 (1 bytes)
enum class EBBQGroundedEntryState : uint8_t
{
	EBBQGroundedEntryState__None                                                     = 0,
	EBBQGroundedEntryState__Roll                                                     = 1
};

/// Enum /Script/BBQInterface.EBBQHipsDirection
/// Size: 0x01 (1 bytes)
enum class EBBQHipsDirection : uint8_t
{
	EBBQHipsDirection__F                                                             = 0,
	EBBQHipsDirection__B                                                             = 1,
	EBBQHipsDirection__RF                                                            = 2,
	EBBQHipsDirection__RB                                                            = 3,
	EBBQHipsDirection__LF                                                            = 4,
	EBBQHipsDirection__LB                                                            = 5
};

/// Enum /Script/BBQInterface.EBBQMovementDirection
/// Size: 0x01 (1 bytes)
enum class EBBQMovementDirection : uint8_t
{
	EBBQMovementDirection__Forward                                                   = 0,
	EBBQMovementDirection__Right                                                     = 1,
	EBBQMovementDirection__Left                                                      = 2,
	EBBQMovementDirection__Backward                                                  = 3,
	EBBQMovementDirection__ForwardRight                                              = 4,
	EBBQMovementDirection__ForwardLeft                                               = 5,
	EBBQMovementDirection__BackwardRight                                             = 6,
	EBBQMovementDirection__BackwardLeft                                              = 7
};

/// Enum /Script/BBQInterface.BBQMantleType
/// Size: 0x01 (1 bytes)
enum class BBQMantleType : uint8_t
{
	BBQMantleType__HightMantle                                                       = 0,
	BBQMantleType__LowMantle                                                         = 1,
	BBQMantleType__FallingCatch                                                      = 2,
	BBQMantleType__ClimbOver                                                         = 3,
	BBQMantleType__JumpOver                                                          = 4
};

/// Enum /Script/BBQInterface.BBQOverlayState
/// Size: 0x01 (1 bytes)
enum class BBQOverlayState : uint8_t
{
	BBQOverlayState__Default                                                         = 0,
	BBQOverlayState__Feminine                                                        = 1,
	BBQOverlayState__Injured                                                         = 2,
	BBQOverlayState__Torch                                                           = 3,
	BBQOverlayState__Sneaking                                                        = 4,
	BBQOverlayState__Dragging                                                        = 5,
	BBQOverlayState__Dragged                                                         = 6
};

/// Enum /Script/BBQInterface.BBQGait
/// Size: 0x01 (1 bytes)
enum class BBQGait : uint8_t
{
	BBQGait__Walking                                                                 = 0,
	BBQGait__Running                                                                 = 1,
	BBQGait__Sprinting                                                               = 2
};

/// Enum /Script/BBQInterface.BBQRotationMode
/// Size: 0x01 (1 bytes)
enum class BBQRotationMode : uint8_t
{
	BBQRotationMode__VelocityDirection                                               = 0,
	BBQRotationMode__LookingDirection                                                = 1,
	BBQRotationMode__LockOn                                                          = 2
};

/// Struct /Script/BBQInterface.BBQPopUpSpec
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FBBQPopUpSpec : FTableRowBase
{ 
	FName                                              TemplateName;                                               // 0x0008   (0x0008)  
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              Message;                                                    // 0x0028   (0x0018)  
	FName                                              MetagameIconAssetID;                                        // 0x0040   (0x0008)  
	FText                                              MetagameText;                                               // 0x0048   (0x0018)  
	TArray<FName>                                      ResultOptions;                                              // 0x0060   (0x0010)  
	FText                                              Option1Text;                                                // 0x0070   (0x0018)  
	FName                                              Option1Result;                                              // 0x0088   (0x0008)  
	FText                                              Option2Text;                                                // 0x0090   (0x0018)  
	FName                                              Option2Result;                                              // 0x00A8   (0x0008)  
	FText                                              Option3Text;                                                // 0x00B0   (0x0018)  
	FName                                              Option3Result;                                              // 0x00C8   (0x0008)  
	FName                                              DefaultResult;                                              // 0x00D0   (0x0008)  
	int32_t                                            Priority;                                                   // 0x00D8   (0x0004)  
	bool                                               bShouldPauseGame;                                           // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00DD   (0x0003)  MISSED
};

/// Struct /Script/BBQInterface.BBQSubtitleData
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FBBQSubtitleData : FTableRowBase
{ 
	FText                                              DisplayText;                                                // 0x0008   (0x0018)  
	float                                              Duration;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/BBQInterface.BBQBackfillPreferencesInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQBackfillPreferencesInterface : public UInterface
{ 
public:
};

/// Class /Script/BBQInterface.BBQEnhancedInputInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQEnhancedInputInterface : public UInterface
{ 
public:
};

/// Class /Script/BBQInterface.HUDMessagesBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHUDMessagesBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQInterface.HUDMessagesBlueprintLibrary.CanSendHUDMessage
	bool CanSendHUDMessage(UObject* WorldContextObject, UFunction* MessageFunction) // [0x20fff70] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(UObject*, UFunction*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, MessageFunction);
	}
};

/// Class /Script/BBQInterface.BBQPopUpSystemBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQPopUpSystemBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQInterface.BBQPopUpSystemBlueprintLibrary.ShowPopUp
	// bool ShowPopUp(APlayerController* PlayerController, FBBQPopUpSpec& PopUpSpec, FDelegateProperty PopUpResultDelegate);    // [0x2100610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BBQInterface.BBQPopUpSystemBlueprintLibrary.SetPopUpPriorityThreshold
	void SetPopUpPriorityThreshold(int32_t PriorityThreshold) // [0x2100590] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(PriorityThreshold);
	}
	// Function /Script/BBQInterface.BBQPopUpSystemBlueprintLibrary.ClearPopUpQueue
	void ClearPopUpQueue(int32_t PriorityThreshold) // [0x2100510] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(PriorityThreshold);
	}
};

/// Class /Script/BBQInterface.BBQSubtitleSystemBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBBQSubtitleSystemBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BBQInterface.BBQSubtitleSystemBlueprintLibrary.ShowSubtitle
	bool ShowSubtitle(FBBQSubtitleData& Subtitle, APlayerController* PlayerController) // [0x2100cf0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FBBQSubtitleData&, APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Subtitle, PlayerController);
	}
	// Function /Script/BBQInterface.BBQSubtitleSystemBlueprintLibrary.EnableAll
	void EnableAll() // [0x2100cd0] Final|Native|Static|Private|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/BBQInterface.BBQSubtitleSystemBlueprintLibrary.DisableAll
	void DisableAll() // [0x2100cb0] Final|Native|Static|Private|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/BBQInterface.BBQSubtitleSystemBlueprintLibrary.Clear
	void Clear(APlayerController* PlayerController) // [0x2100c30] Final|Native|Static|Private|BlueprintCallable 
	{
		typedef void (*FuncPtr)(APlayerController*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(PlayerController);
	}
};

/// Class /Script/BBQInterface.TeamIDInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTeamIDInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/BBQInterface.TeamIDInterface.GetTeamID
	ETeamID GetTeamID() // [0x1e71210] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef ETeamID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(UBBQBackfillPreferencesInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQEnhancedInputInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHUDMessagesBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQPopUpSystemBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBBQSubtitleSystemBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTeamIDInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FBBQPopUpSpec) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FBBQSubtitleData) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(offsetof(FBBQPopUpSpec, TemplateName) == 0x0008);
static_assert(offsetof(FBBQPopUpSpec, Title) == 0x0010);
static_assert(offsetof(FBBQPopUpSpec, Message) == 0x0028);
static_assert(offsetof(FBBQPopUpSpec, MetagameIconAssetID) == 0x0040);
static_assert(offsetof(FBBQPopUpSpec, MetagameText) == 0x0048);
static_assert(offsetof(FBBQPopUpSpec, ResultOptions) == 0x0060);
static_assert(offsetof(FBBQPopUpSpec, Option1Text) == 0x0070);
static_assert(offsetof(FBBQPopUpSpec, Option1Result) == 0x0088);
static_assert(offsetof(FBBQPopUpSpec, Option2Text) == 0x0090);
static_assert(offsetof(FBBQPopUpSpec, Option2Result) == 0x00A8);
static_assert(offsetof(FBBQPopUpSpec, Option3Text) == 0x00B0);
static_assert(offsetof(FBBQPopUpSpec, Option3Result) == 0x00C8);
static_assert(offsetof(FBBQPopUpSpec, DefaultResult) == 0x00D0);
static_assert(offsetof(FBBQSubtitleData, DisplayText) == 0x0008);
