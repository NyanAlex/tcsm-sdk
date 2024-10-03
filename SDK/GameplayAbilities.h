
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "DataRegistry.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "GameplayTags.h"
#include "GameplayTasks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "PhysicsCore.h"

#pragma pack(push, 0x1)

class AAbilitySystemDebugHUD;
class AAbilitySystemTestPawn;
class AGameplayAbilityTargetActor;
class AGameplayAbilityTargetActor_ActorPlacement;
class AGameplayAbilityTargetActor_GroundTrace;
class AGameplayAbilityTargetActor_Radius;
class AGameplayAbilityTargetActor_SingleLineTrace;
class AGameplayAbilityTargetActor_Trace;
class AGameplayAbilityWorldReticle;
class AGameplayAbilityWorldReticle_ActorVisualization;
class AGameplayCueNotify_Actor;
class UAbilityAsync;
class UAbilityAsync_WaitGameplayEffectApplied;
class UAbilityAsync_WaitGameplayEvent;
class UAbilityAsync_WaitGameplayTag;
class UAbilityAsync_WaitGameplayTagAdded;
class UAbilityAsync_WaitGameplayTagRemoved;
class UAbilitySystemBlueprintLibrary;
class UAbilitySystemComponent;
class UAbilitySystemGlobals;
class UAbilitySystemInterface;
class UAbilitySystemReplicationProxyInterface;
class UAbilitySystemTestAttributeSet;
class UAbilityTask;
class UAbilityTask_ApplyRootMotionConstantForce;
class UAbilityTask_ApplyRootMotionJumpForce;
class UAbilityTask_ApplyRootMotionMoveToActorForce;
class UAbilityTask_ApplyRootMotionMoveToForce;
class UAbilityTask_ApplyRootMotionRadialForce;
class UAbilityTask_ApplyRootMotion_Base;
class UAbilityTask_MoveToLocation;
class UAbilityTask_NetworkSyncPoint;
class UAbilityTask_PlayMontageAndWait;
class UAbilityTask_Repeat;
class UAbilityTask_SpawnActor;
class UAbilityTask_StartAbilityState;
class UAbilityTask_VisualizeTargeting;
class UAbilityTask_WaitAbilityActivate;
class UAbilityTask_WaitAbilityCommit;
class UAbilityTask_WaitAttributeChange;
class UAbilityTask_WaitAttributeChangeRatioThreshold;
class UAbilityTask_WaitAttributeChangeThreshold;
class UAbilityTask_WaitCancel;
class UAbilityTask_WaitConfirm;
class UAbilityTask_WaitConfirmCancel;
class UAbilityTask_WaitDelay;
class UAbilityTask_WaitGameplayEffectApplied;
class UAbilityTask_WaitGameplayEffectApplied_Self;
class UAbilityTask_WaitGameplayEffectApplied_Target;
class UAbilityTask_WaitGameplayEffectBlockedImmunity;
class UAbilityTask_WaitGameplayEffectRemoved;
class UAbilityTask_WaitGameplayEffectStackChange;
class UAbilityTask_WaitGameplayEvent;
class UAbilityTask_WaitGameplayTag;
class UAbilityTask_WaitGameplayTagAdded;
class UAbilityTask_WaitGameplayTagRemoved;
class UAbilityTask_WaitInputPress;
class UAbilityTask_WaitInputRelease;
class UAbilityTask_WaitMovementModeChange;
class UAbilityTask_WaitOverlap;
class UAbilityTask_WaitTargetData;
class UAbilityTask_WaitVelocityChange;
class UAttributeSet;
class UGameplayAbility;
class UGameplayAbilityBlueprint;
class UGameplayAbilitySet;
class UGameplayAbility_CharacterJump;
class UGameplayAbility_Montage;
class UGameplayCueInterface;
class UGameplayCueManager;
class UGameplayCueNotify_HitImpact;
class UGameplayCueNotify_Static;
class UGameplayCueSet;
class UGameplayCueTranslator;
class UGameplayCueTranslator_Test;
class UGameplayEffect;
class UGameplayEffectCalculation;
class UGameplayEffectCustomApplicationRequirement;
class UGameplayEffectExecutionCalculation;
class UGameplayEffectUIData;
class UGameplayEffectUIData_TextOnly;
class UGameplayModMagnitudeCalculation;
class UGameplayTagReponseTable;
class UMovieSceneGameplayCueSection;
class UMovieSceneGameplayCueTrack;
class UMovieSceneGameplayCueTriggerSection;
class UTickableAttributeSetInterface;

/// Enum /Script/GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately              = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd                    = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectAttributeCaptureSource
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source                                    = 0,
	EGameplayEffectAttributeCaptureSource__Target                                    = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityActivationMode
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority                                        = 0,
	EGameplayAbilityActivationMode__NonAuthority                                     = 1,
	EGameplayAbilityActivationMode__Predicting                                       = 2,
	EGameplayAbilityActivationMode__Confirmed                                        = 3,
	EGameplayAbilityActivationMode__Rejected                                         = 4
};

/// Enum /Script/GameplayAbilities.EAbilityGenericReplicatedEvent
/// Size: 0x01 (1 bytes)
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm                                   = 0,
	EAbilityGenericReplicatedEvent__GenericCancel                                    = 1,
	EAbilityGenericReplicatedEvent__InputPressed                                     = 2,
	EAbilityGenericReplicatedEvent__InputReleased                                    = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient                          = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer                          = 5,
	EAbilityGenericReplicatedEvent__GameCustom1                                      = 6,
	EAbilityGenericReplicatedEvent__GameCustom2                                      = 7,
	EAbilityGenericReplicatedEvent__GameCustom3                                      = 8,
	EAbilityGenericReplicatedEvent__GameCustom4                                      = 9,
	EAbilityGenericReplicatedEvent__GameCustom5                                      = 10,
	EAbilityGenericReplicatedEvent__GameCustom6                                      = 11
};

/// Enum /Script/GameplayAbilities.EGameplayCueEvent
/// Size: 0x01 (1 bytes)
enum class EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive                                                      = 0,
	EGameplayCueEvent__WhileActive                                                   = 1,
	EGameplayCueEvent__Executed                                                      = 2,
	EGameplayCueEvent__Removed                                                       = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectReplicationMode
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal                                          = 0,
	EGameplayEffectReplicationMode__Mixed                                            = 1,
	EGameplayEffectReplicationMode__Full                                             = 2
};

/// Enum /Script/GameplayAbilities.EAbilityTaskWaitState
/// Size: 0x01 (1 bytes)
enum class EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame                                             = 1,
	EAbilityTaskWaitState__WaitingOnUser                                             = 2,
	EAbilityTaskWaitState__WaitingOnAvatar                                           = 4
};

/// Enum /Script/GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
/// Size: 0x01 (1 bytes)
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource                  = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward                     = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace                        = 2
};

/// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
/// Size: 0x01 (1 bytes)
enum class EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait                                                = 0,
	EAbilityTaskNetSyncType__OnlyServerWait                                          = 1,
	EAbilityTaskNetSyncType__OnlyClientWait                                          = 2
};

/// Enum /Script/GameplayAbilities.EWaitAttributeChangeComparison
/// Size: 0x01 (1 bytes)
enum class EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None                                             = 0,
	EWaitAttributeChangeComparison__GreaterThan                                      = 1,
	EWaitAttributeChangeComparison__LessThan                                         = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo                             = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo                                = 4,
	EWaitAttributeChangeComparison__NotEqualTo                                       = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo                                   = 6
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInputBinds
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1                                             = 0,
	EGameplayAbilityInputBinds__Ability2                                             = 1,
	EGameplayAbilityInputBinds__Ability3                                             = 2,
	EGameplayAbilityInputBinds__Ability4                                             = 3,
	EGameplayAbilityInputBinds__Ability5                                             = 4,
	EGameplayAbilityInputBinds__Ability6                                             = 5,
	EGameplayAbilityInputBinds__Ability7                                             = 6,
	EGameplayAbilityInputBinds__Ability8                                             = 7,
	EGameplayAbilityInputBinds__Ability9                                             = 8
};

/// Enum /Script/GameplayAbilities.ETargetDataFilterSelf
/// Size: 0x01 (1 bytes)
enum class ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any                                                  = 0,
	ETargetDataFilterSelf__TDFS_NoSelf                                               = 1,
	ETargetDataFilterSelf__TDFS_NoOthers                                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTargetingLocationType
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform                          = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform                            = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform                           = 2
};

/// Enum /Script/GameplayAbilities.EGameplayTargetingConfirmation
/// Size: 0x01 (1 bytes)
enum class EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant                                          = 0,
	EGameplayTargetingConfirmation__UserConfirmed                                    = 1,
	EGameplayTargetingConfirmation__Custom                                           = 2,
	EGameplayTargetingConfirmation__CustomMulti                                      = 3
};

/// Enum /Script/GameplayAbilities.ERepAnimPositionMethod
/// Size: 0x01 (1 bytes)
enum class ERepAnimPositionMethod : uint8_t
{
	ERepAnimPositionMethod__Position                                                 = 0,
	ERepAnimPositionMethod__CurrentSectionId                                         = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTriggerSource
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent                                     = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded                                     = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent                                   = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityReplicationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo                                   = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetSecurityPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	EGameplayAbilityNetSecurityPolicy__ClientOrServer                                = 0,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution                           = 1,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination                         = 2,
	EGameplayAbilityNetSecurityPolicy__ServerOnly                                    = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetExecutionPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted                               = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly                                    = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated                              = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly                                   = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInstancingPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced                                   = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor                              = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution                          = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCuePayloadType
/// Size: 0x01 (1 bytes)
enum class EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__CueParameters                                           = 0,
	EGameplayCuePayloadType__FromSpec                                                = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset                         = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod                        = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod              = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack                        = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration     = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingPeriodPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication                = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingDurationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication            = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh                              = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectDurationType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant                                             = 0,
	EGameplayEffectDurationType__Infinite                                            = 1,
	EGameplayEffectDurationType__HasDuration                                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked             = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient                           = 1
};

/// Enum /Script/GameplayAbilities.EAttributeBasedFloatCalculationType
/// Size: 0x01 (1 bytes)
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude                          = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue                          = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude                     = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel      = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat                               = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased                              = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass                      = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller                                 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayTagEventType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved                                              = 0,
	EGameplayTagEventType__AnyCountChange                                            = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None                                                = 0,
	EGameplayEffectStackingType__AggregateBySource                                   = 1,
	EGameplayEffectStackingType__AggregateByTarget                                   = 2
};

/// Enum /Script/GameplayAbilities.EGameplayModOp
/// Size: 0x01 (1 bytes)
enum class EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive                                                         = 0,
	EGameplayModOp__Multiplicitive                                                   = 1,
	EGameplayModOp__Division                                                         = 2,
	EGameplayModOp__Override                                                         = 3,
	EGameplayModOp__Max                                                              = 4
};

/// Enum /Script/GameplayAbilities.EGameplayModEvaluationChannel
/// Size: 0x01 (1 bytes)
enum class EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0                                          = 0,
	EGameplayModEvaluationChannel__Channel1                                          = 1,
	EGameplayModEvaluationChannel__Channel2                                          = 2,
	EGameplayModEvaluationChannel__Channel3                                          = 3,
	EGameplayModEvaluationChannel__Channel4                                          = 4,
	EGameplayModEvaluationChannel__Channel5                                          = 5,
	EGameplayModEvaluationChannel__Channel6                                          = 6,
	EGameplayModEvaluationChannel__Channel7                                          = 7,
	EGameplayModEvaluationChannel__Channel8                                          = 8,
	EGameplayModEvaluationChannel__Channel9                                          = 9
};

/// Struct /Script/GameplayAbilities.AttributeDefaults
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAttributeDefaults
{ 
	class UClass*                                      Attributes;                                                 // 0x0000   (0x0008)  
	class UDataTable*                                  DefaultStartingTable;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGameplayAbilitySpecHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.PredictionKey
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPredictionKey
{ 
	class UPackageMap*                                 PredictiveConnection;                                       // 0x0000   (0x0008)  
	int16_t                                            Current;                                                    // 0x0008   (0x0002)  
	int16_t                                            Base;                                                       // 0x000A   (0x0002)  
	bool                                               bIsStale;                                                   // 0x000C   (0x0001)  
	bool                                               bIsServerInitiated;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActivationInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayAbilityActivationInfo
{ 
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                             // 0x0000   (0x0001)  
	bool                                               bCanBeEndedByOtherInstance : 1;                             // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPredictionKey                                     PredictionKeyWhenActivated;                                 // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FActiveGameplayEffectHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
	bool                                               bPassedFiltersAndWasExecuted;                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpec
/// Size: 0x00E0 (224 bytes) (0x00000C - 0x0000E0) align 8 MaxSize: 0x00E0
struct FGameplayAbilitySpec : FFastArraySerializerItem
{ 
	FGameplayAbilitySpecHandle                         Handle;                                                     // 0x000C   (0x0004)  
	class UGameplayAbility*                            Ability;                                                    // 0x0010   (0x0008)  
	int32_t                                            level;                                                      // 0x0018   (0x0004)  
	int32_t                                            InputID;                                                    // 0x001C   (0x0004)  
	class UObject*                                     SourceObject;                                               // 0x0020   (0x0008)  
	char                                               ActiveCount;                                                // 0x0028   (0x0001)  
	bool                                               InputPressed : 1;                                           // 0x0029:0 (0x0001)  
	bool                                               RemoveAfterActivation : 1;                                  // 0x0029:1 (0x0001)  
	bool                                               PendingRemove : 1;                                          // 0x0029:2 (0x0001)  
	bool                                               bActivateOnce : 1;                                          // 0x0029:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     ActivationInfo;                                             // 0x0030   (0x0018)  
	FGameplayTagContainer                              DynamicAbilityTags;                                         // 0x0048   (0x0020)  
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                     // 0x0068   (0x0010)  
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                        // 0x0078   (0x0010)  
	FActiveGameplayEffectHandle                        GameplayEffectHandle;                                       // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0090   (0x0050)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecContainer
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{ 
	TArray<FGameplayAbilitySpec>                       Items;                                                      // 0x0108   (0x0010)  
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0118   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGameplayAbilityRepAnimMontage
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	float                                              position;                                                   // 0x000C   (0x0004)  
	float                                              BlendTime;                                                  // 0x0010   (0x0004)  
	char                                               NextSectionID;                                              // 0x0014   (0x0001)  
	bool                                               bRepPosition : 1;                                           // 0x0015:0 (0x0001)  
	bool                                               IsStopped : 1;                                              // 0x0015:1 (0x0001)  
	bool                                               ForcePlayBit : 1;                                           // 0x0015:2 (0x0001)  
	bool                                               SkipPositionCorrection : 1;                                 // 0x0015:3 (0x0001)  
	bool                                               bSkipPlayRate : 1;                                          // 0x0015:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0010)  
	char                                               SectionIdToPlay;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayAbilityLocalAnimMontage
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	bool                                               PlayBit;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0010)  
	class UGameplayAbility*                            AnimatingAbility;                                           // 0x0020   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAttribute
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGameplayAttribute
{ 
	FString                                            AttributeName;                                              // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UStruct*                                     AttributeOwner;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifiedAttribute
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayEffectModifiedAttribute
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	float                                              TotalMagnitude;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayEffectAttributeCaptureDefinition
{ 
	FGameplayAttribute                                 AttributeToCapture;                                         // 0x0000   (0x0038)  
	EGameplayEffectAttributeCaptureSource              AttributeSource;                                            // 0x0038   (0x0001)  
	bool                                               bSnapshot;                                                  // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayEffectAttributeCaptureSpec
{ 
	FGameplayEffectAttributeCaptureDefinition          BackingDefinition;                                          // 0x0000   (0x0040)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{ 
	TArray<FGameplayEffectAttributeCaptureSpec>        SourceAttributes;                                           // 0x0000   (0x0010)  
	TArray<FGameplayEffectAttributeCaptureSpec>        TargetAttributes;                                           // 0x0010   (0x0010)  
	bool                                               bHasNonSnapshottedAttributes;                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.TagContainerAggregator
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FTagContainerAggregator
{ 
	FGameplayTagContainer                              CapturedActorTags;                                          // 0x0000   (0x0020)  
	FGameplayTagContainer                              CapturedSpecTags;                                           // 0x0020   (0x0020)  
	FGameplayTagContainer                              ScopedTags;                                                 // 0x0040   (0x0020)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.ModifierSpec
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FModifierSpec
{ 
	float                                              EvaluatedMagnitude;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.ScalableFloat
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FScalableFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FCurveTableRowHandle                               Curve;                                                      // 0x0008   (0x0010)  
	FDataRegistryType                                  RegistryType;                                               // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecDef
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FGameplayAbilitySpecDef
{ 
	class UClass*                                      Ability;                                                    // 0x0000   (0x0008)  
	FScalableFloat                                     LevelScalableFloat;                                         // 0x0008   (0x0028)  
	int32_t                                            InputID;                                                    // 0x0030   (0x0004)  
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	class UObject*                                     SourceObject;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0040   (0x0050)  MISSED
	FGameplayAbilitySpecHandle                         AssignedHandle;                                             // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandle
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayEffectContextHandle
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpec
/// Size: 0x0298 (664 bytes) (0x000000 - 0x000298) align 8 MaxSize: 0x0298
struct FGameplayEffectSpec
{ 
	class UGameplayEffect*                             Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectAttributeCaptureSpecContainer       CapturedRelevantAttributes;                                 // 0x0018   (0x0028)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              Duration;                                                   // 0x0050   (0x0004)  
	float                                              Period;                                                     // 0x0054   (0x0004)  
	float                                              ChanceToApplyToTarget;                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FTagContainerAggregator                            CapturedSourceTags;                                         // 0x0060   (0x0088)  
	FTagContainerAggregator                            CapturedTargetTags;                                         // 0x00E8   (0x0088)  
	FGameplayTagContainer                              DynamicGrantedTags;                                         // 0x0170   (0x0020)  
	FGameplayTagContainer                              DynamicAssetTags;                                           // 0x0190   (0x0020)  
	TArray<FModifierSpec>                              Modifiers;                                                  // 0x01B0   (0x0010)  
	int32_t                                            StackCount;                                                 // 0x01C0   (0x0004)  
	bool                                               bCompletedSourceAttributeCapture : 1;                       // 0x01C4:0 (0x0001)  
	bool                                               bCompletedTargetAttributeCapture : 1;                       // 0x01C4:1 (0x0001)  
	bool                                               bDurationLocked : 1;                                        // 0x01C4:2 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01C5   (0x0003)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilitySpecs;                                        // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData03_6[0xA0];                                      // 0x01D8   (0x00A0)  MISSED
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0278   (0x0018)  
	float                                              level;                                                      // 0x0290   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x0294   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffect
/// Size: 0x0368 (872 bytes) (0x00000C - 0x000368) align 8 MaxSize: 0x0368
struct FActiveGameplayEffect : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0xC];                                       // 0x000C   (0x000C)  MISSED
	FGameplayEffectSpec                                Spec;                                                       // 0x0018   (0x0298)  
	FPredictionKey                                     PredictionKey;                                              // 0x02B0   (0x0010)  
	float                                              StartServerWorldTime;                                       // 0x02C0   (0x0004)  
	float                                              CachedStartServerWorldTime;                                 // 0x02C4   (0x0004)  
	float                                              StartWorldTime;                                             // 0x02C8   (0x0004)  
	bool                                               bIsInhibited;                                               // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x9B];                                      // 0x02CD   (0x009B)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
/// Size: 0x0478 (1144 bytes) (0x000108 - 0x000478) align 8 MaxSize: 0x0478
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0108   (0x0028)  MISSED
	TArray<FActiveGameplayEffect>                      GameplayEffects_Internal;                                   // 0x0130   (0x0010)  
	unsigned char                                      UnknownData01_6[0x310];                                     // 0x0140   (0x0310)  MISSED
	TArray<class UGameplayEffect*>                     ApplicationImmunityQueryEffects;                            // 0x0450   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0460   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueParameters
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FGameplayCueParameters
{ 
	float                                              NormalizedMagnitude;                                        // 0x0000   (0x0004)  
	float                                              RawMagnitude;                                               // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
	FGameplayTag                                       MatchedTagName;                                             // 0x0020   (0x0008)  
	FGameplayTag                                       OriginalTag;                                                // 0x0028   (0x0008)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	FVector_NetQuantize10                              Location;                                                   // 0x0070   (0x000C)  
	FVector_NetQuantizeNormal                          Normal;                                                     // 0x007C   (0x000C)  
	TWeakObjectPtr<class AActor*>                      Instigator;                                                 // 0x0088   (0x0008)  
	TWeakObjectPtr<class AActor*>                      EffectCauser;                                               // 0x0090   (0x0008)  
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x0098   (0x0008)  
	TWeakObjectPtr<class UPhysicalMaterial*>           PhysicalMaterial;                                           // 0x00A0   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x00A8   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x00AC   (0x0004)  
	TWeakObjectPtr<class USceneComponent*>             TargetAttachComponent;                                      // 0x00B0   (0x0008)  
	bool                                               bReplicateLocationWhenUsingMinimalRepProxy;                 // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCue
/// Size: 0x00F0 (240 bytes) (0x00000C - 0x0000F0) align 8 MaxSize: 0x00F0
struct FActiveGameplayCue : FFastArraySerializerItem
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0010)  
	FGameplayCueParameters                             Parameters;                                                 // 0x0028   (0x00C0)  
	bool                                               bPredictivelyRemoved;                                       // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCueContainer
/// Size: 0x0128 (296 bytes) (0x000108 - 0x000128) align 8 MaxSize: 0x0128
struct FActiveGameplayCueContainer : FFastArraySerializer
{ 
	TArray<FActiveGameplayCue>                         GameplayCues;                                               // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0120   (0x0008)  
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMap
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMinimalReplicationTagCountMap
{ 
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0000   (0x0050)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyItem
/// Size: 0x0020 (32 bytes) (0x00000C - 0x000020) align 8 MaxSize: 0x0020
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyMap
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
struct FReplicatedPredictionKeyMap : FFastArraySerializer
{ 
	TArray<FReplicatedPredictionKeyItem>               PredictionKeys;                                             // 0x0108   (0x0010)  
};

/// Struct /Script/GameplayAbilities.NetSerializeScriptStructCache
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNetSerializeScriptStructCache
{ 
	TArray<class UScriptStruct*>                       ScriptStructs;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayAbilityTargetDataHandle
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEventData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FGameplayEventData
{ 
	FGameplayTag                                       EventTag;                                                   // 0x0000   (0x0008)  
	class AActor*                                      Instigator;                                                 // 0x0008   (0x0008)  
	class AActor*                                      Target;                                                     // 0x0010   (0x0008)  
	class UObject*                                     OptionalObject;                                             // 0x0018   (0x0008)  
	class UObject*                                     OptionalObject2;                                            // 0x0020   (0x0008)  
	FGameplayEffectContextHandle                       ContextHandle;                                              // 0x0028   (0x0018)  
	FGameplayTagContainer                              InstigatorTags;                                             // 0x0040   (0x0020)  
	FGameplayTagContainer                              TargetTags;                                                 // 0x0060   (0x0020)  
	float                                              EventMagnitude;                                             // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0088   (0x0028)  
};

/// Struct /Script/GameplayAbilities.AbilityTriggerData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAbilityTriggerData
{ 
	FGameplayTag                                       TriggerTag;                                                 // 0x0000   (0x0008)  
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityBindInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAbilityBindInfo
{ 
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      GameplayAbilityClass;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FGameplayAbilityTargetingLocationInfo
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         LiteralTransform;                                           // 0x0020   (0x0030)  
	class AActor*                                      SourceActor;                                                // 0x0050   (0x0008)  
	class UMeshComponent*                              SourceComponent;                                            // 0x0058   (0x0008)  
	class UGameplayAbility*                            SourceAbility;                                              // 0x0060   (0x0008)  
	FName                                              SourceSocketName;                                           // 0x0068   (0x0008)  
};

/// Struct /Script/GameplayAbilities.WorldReticleParameters
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWorldReticleParameters
{ 
	FVector                                            AOEScale;                                                   // 0x0000   (0x000C)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilterHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayTargetDataFilterHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueObjectLibrary
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayCueObjectLibrary
{ 
	TArray<FString>                                    Paths;                                                      // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UObjectLibrary*                              ActorObjectLibrary;                                         // 0x0030   (0x0008)  
	class UObjectLibrary*                              StaticObjectLibrary;                                        // 0x0038   (0x0008)  
	class UGameplayCueSet*                             CueSet;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0048   (0x0004)  MISSED
	bool                                               bShouldSyncScan;                                            // 0x004C   (0x0001)  
	bool                                               bShouldAsyncLoad;                                           // 0x004D   (0x0001)  
	bool                                               bShouldSyncLoad;                                            // 0x004E   (0x0001)  
	bool                                               bHasBeenInitialized;                                        // 0x004F   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecForRPC
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FGameplayEffectSpecForRPC
{ 
	class UGameplayEffect*                             Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0018   (0x0018)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	float                                              level;                                                      // 0x0070   (0x0004)  
	float                                              AbilityLevel;                                               // 0x0074   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCuePendingExecute
/// Size: 0x0170 (368 bytes) (0x000000 - 0x000170) align 8 MaxSize: 0x0170
struct FGameplayCuePendingExecute
{ 
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0000   (0x0018)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0010)  
	EGameplayCuePayloadType                            PayloadType;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UAbilitySystemComponent*                     OwningComponent;                                            // 0x0030   (0x0008)  
	FGameplayEffectSpecForRPC                          FromSpec;                                                   // 0x0038   (0x0078)  
	FGameplayCueParameters                             CueParameters;                                              // 0x00B0   (0x00C0)  
};

/// Struct /Script/GameplayAbilities.PreallocationInfo
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FPreallocationInfo
{ 
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0000   (0x0050)  MISSED
	TArray<class UClass*>                              ClassesNeedingPreallocation;                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGameplayCueNotifyData
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x0008)  
	FSoftObjectPath                                    GameplayCueNotifyObj;                                       // 0x0008   (0x0018)  
	class UClass*                                      LoadedGameplayCueClass;                                     // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.AttributeBasedFloat
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FAttributeBasedFloat
{ 
	FScalableFloat                                     Coefficient;                                                // 0x0000   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0028   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0050   (0x0028)  
	FGameplayEffectAttributeCaptureDefinition          BackingAttribute;                                           // 0x0078   (0x0040)  
	FCurveTableRowHandle                               AttributeCurve;                                             // 0x00B8   (0x0010)  
	EAttributeBasedFloatCalculationType                AttributeCalculationType;                                   // 0x00C8   (0x0001)  
	EGameplayModEvaluationChannel                      FinalChannel;                                               // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00CA   (0x0006)  MISSED
	FGameplayTagContainer                              SourceTagFilter;                                            // 0x00D0   (0x0020)  
	FGameplayTagContainer                              TargetTagFilter;                                            // 0x00F0   (0x0020)  
};

/// Struct /Script/GameplayAbilities.CustomCalculationBasedFloat
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FCustomCalculationBasedFloat
{ 
	class UClass*                                      CalculationClassMagnitude;                                  // 0x0000   (0x0008)  
	FScalableFloat                                     Coefficient;                                                // 0x0008   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0030   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0058   (0x0028)  
	FCurveTableRowHandle                               FinalLookupCurve;                                           // 0x0080   (0x0010)  
};

/// Struct /Script/GameplayAbilities.SetByCallerFloat
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSetByCallerFloat
{ 
	FName                                              DataName;                                                   // 0x0000   (0x0008)  
	FGameplayTag                                       DataTag;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
/// Size: 0x01E0 (480 bytes) (0x000000 - 0x0001E0) align 8 MaxSize: 0x01E0
struct FGameplayEffectModifierMagnitude
{ 
	EGameplayEffectMagnitudeCalculation                MagnitudeCalculationType;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FScalableFloat                                     ScalableFloatMagnitude;                                     // 0x0008   (0x0028)  
	FAttributeBasedFloat                               AttributeBasedMagnitude;                                    // 0x0030   (0x0110)  
	FCustomCalculationBasedFloat                       CustomMagnitude;                                            // 0x0140   (0x0090)  
	FSetByCallerFloat                                  SetByCallerMagnitude;                                       // 0x01D0   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGameplayModEvaluationChannelSettings
{ 
	EGameplayModEvaluationChannel                      Channel;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayTagRequirements
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayTagRequirements
{ 
	FGameplayTagContainer                              RequireTags;                                                // 0x0000   (0x0020)  
	FGameplayTagContainer                              IgnoreTags;                                                 // 0x0020   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayModifierInfo
/// Size: 0x02D0 (720 bytes) (0x000000 - 0x0002D0) align 8 MaxSize: 0x02D0
struct FGameplayModifierInfo
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FScalableFloat                                     Magnitude;                                                  // 0x0040   (0x0028)  
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0068   (0x01E0)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0248   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0249   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0250   (0x0040)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x0290   (0x0040)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
/// Size: 0x02B8 (696 bytes) (0x000000 - 0x0002B8) align 8 MaxSize: 0x02B8
struct FGameplayEffectExecutionScopedModifierInfo
{ 
	FGameplayEffectAttributeCaptureDefinition          CapturedAttribute;                                          // 0x0000   (0x0040)  
	FGameplayTag                                       TransientAggregatorIdentifier;                              // 0x0040   (0x0008)  
	EGameplayEffectScopedModifierAggregatorType        AggregatorType;                                             // 0x0048   (0x0001)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0050   (0x01E0)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0230   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0231   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0238   (0x0040)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x0278   (0x0040)  
};

/// Struct /Script/GameplayAbilities.ConditionalGameplayEffect
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FConditionalGameplayEffect
{ 
	class UClass*                                      EffectClass;                                                // 0x0000   (0x0008)  
	FGameplayTagContainer                              RequiredSourceTags;                                         // 0x0008   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FGameplayEffectExecutionDefinition
{ 
	class UClass*                                      CalculationClass;                                           // 0x0000   (0x0008)  
	FGameplayTagContainer                              PassedInTags;                                               // 0x0008   (0x0020)  
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                       // 0x0028   (0x0010)  
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                           // 0x0038   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x0048   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectCue
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FGameplayEffectCue
{ 
	FGameplayAttribute                                 MagnitudeAttribute;                                         // 0x0000   (0x0038)  
	float                                              MinLevel;                                                   // 0x0038   (0x0004)  
	float                                              MaxLevel;                                                   // 0x003C   (0x0004)  
	FGameplayTagContainer                              GameplayCueTags;                                            // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.InheritedTagContainer
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FInheritedTagContainer
{ 
	FGameplayTagContainer                              CombinedTags;                                               // 0x0000   (0x0020)  
	FGameplayTagContainer                              Added;                                                      // 0x0020   (0x0020)  
	FGameplayTagContainer                              Removed;                                                    // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectQuery
/// Size: 0x0150 (336 bytes) (0x000000 - 0x000150) align 8 MaxSize: 0x0150
struct FGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	SDK_UNDEFINED(16,351) /* FDelegateProperty */      __um(CustomMatchDelegate_BP);                               // 0x0010   (0x0010)  
	FGameplayTagQuery                                  OwningTagQuery;                                             // 0x0020   (0x0048)  
	FGameplayTagQuery                                  EffectTagQuery;                                             // 0x0068   (0x0048)  
	FGameplayTagQuery                                  SourceTagQuery;                                             // 0x00B0   (0x0048)  
	FGameplayAttribute                                 ModifyingAttribute;                                         // 0x00F8   (0x0038)  
	class UObject*                                     EffectSource;                                               // 0x0130   (0x0008)  
	class UClass*                                      EffectDefinition;                                           // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0140   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagReponsePair
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayTagReponsePair
{ 
	FGameplayTag                                       Tag;                                                        // 0x0000   (0x0008)  
	class UClass*                                      ResponseGameplayEffect;                                     // 0x0008   (0x0008)  
	TArray<class UClass*>                              ResponseGameplayEffects;                                    // 0x0010   (0x0010)  
	int32_t                                            SoftCountCap;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagResponseTableEntry
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayTagResponseTableEntry
{ 
	FGameplayTagReponsePair                            Positive;                                                   // 0x0000   (0x0028)  
	FGameplayTagReponsePair                            Negative;                                                   // 0x0028   (0x0028)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTag
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGameplayCueTag
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x0008)  
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueKey
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FMovieSceneGameplayCueKey
{ 
	FGameplayCueTag                                    Cue;                                                        // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Normal;                                                     // 0x0014   (0x000C)  
	FName                                              AttachSocketName;                                           // 0x0020   (0x0008)  
	float                                              NormalizedMagnitude;                                        // 0x0028   (0x0004)  
	FMovieSceneObjectBindingID                         Instigator;                                                 // 0x002C   (0x0018)  
	FMovieSceneObjectBindingID                         EffectCauser;                                               // 0x0044   (0x0018)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0060   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x0068   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x006C   (0x0004)  
	bool                                               bAttachToBinding;                                           // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueChannel
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FMovieSceneGameplayCueChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0008   (0x0010)  
	TArray<FMovieSceneGameplayCueKey>                  KeyValues;                                                  // 0x0018   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayEffectSpecHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectRemovalInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayEffectRemovalInfo
{ 
	bool                                               bPrematureRemoval;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            StackCount;                                                 // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
};

/// Struct /Script/GameplayAbilities.ServerAbilityRPCBatch
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FServerAbilityRPCBatch
{ 
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0008   (0x0010)  
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0018   (0x0028)  
	bool                                               InputPressed;                                               // 0x0040   (0x0001)  
	bool                                               Ended;                                                      // 0x0041   (0x0001)  
	bool                                               Started;                                                    // 0x0042   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Struct /Script/GameplayAbilities.AbilityEndedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAbilityEndedData
{ 
	class UGameplayAbility*                            AbilityThatEnded;                                           // 0x0000   (0x0008)  
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0008   (0x0004)  
	bool                                               bReplicateEndAbility;                                       // 0x000C   (0x0001)  
	bool                                               bWasCancelled;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayAbilities.AttributeMetaData
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FAttributeMetaData : FTableRowBase
{ 
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              MinValue;                                                   // 0x000C   (0x0004)  
	float                                              MaxValue;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            DerivedAttributeInfo;                                       // 0x0018   (0x0010)  
	bool                                               bCanStack;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAttributeData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAttributeData
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              CurrentValue;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilter
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTargetDataFilter
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      SelfActor;                                                  // 0x0008   (0x0008)  
	class UClass*                                      RequiredActorClass;                                         // 0x0010   (0x0008)  
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                                 // 0x0018   (0x0001)  
	bool                                               bReverseFilter;                                             // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{ 
	FHitResult                                         HitResult;                                                  // 0x0008   (0x0088)  
	bool                                               bHitReplaced;                                               // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 16 MaxSize: 0x0090
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x0070)  
	SDK_UNDEFINED(16,352) /* TArray<TWeakObjectPtr<AActor*>> */ __um(TargetActorArray);                            // 0x0080   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x0070)  
	FGameplayAbilityTargetingLocationInfo              TargetLocation;                                             // 0x0080   (0x0070)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{ 
	FGameplayAbilitySpecHandle                         AbilityHandle;                                              // 0x0000   (0x0004)  
	int32_t                                            PredictionKeyAtCreation;                                    // 0x0004   (0x0004)  
};

/// Struct /Script/GameplayAbilities.AbilityTaskDebugMessage
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAbilityTaskDebugMessage
{ 
	class UGameplayTask*                               FromTask;                                                   // 0x0000   (0x0008)  
	FString                                            Message;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActorInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayAbilityActorInfo
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class AActor*>                      OwnerActor;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<class AActor*>                      AvatarActor;                                                // 0x0010   (0x0008)  
	TWeakObjectPtr<class APlayerController*>           PlayerController;                                           // 0x0018   (0x0008)  
	TWeakObjectPtr<class UAbilitySystemComponent*>     AbilitySystemComponent;                                     // 0x0020   (0x0008)  
	TWeakObjectPtr<class USkeletalMeshComponent*>      SkeletalMeshComponent;                                      // 0x0028   (0x0008)  
	TWeakObjectPtr<class UAnimInstance*>               AnimInstance;                                               // 0x0030   (0x0008)  
	TWeakObjectPtr<class UMovementComponent*>          MovementComponent;                                          // 0x0038   (0x0008)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0040   (0x0008)  
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
/// Size: 0x0290 (656 bytes) (0x000000 - 0x000290) align 16 MaxSize: 0x0290
struct FMinimalGameplayCueReplicationProxy
{ 
	unsigned char                                      UnknownData00_7[0x280];                                     // 0x0000   (0x0280)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0280   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0288   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationLink
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayCueTranslationLink
{ 
	class UGameplayCueTranslator*                      RulesCDO;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGameplayCueTranslatorNodeIndex
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNode
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FGameplayCueTranslatorNode
{ 
	TArray<FGameplayCueTranslationLink>                Links;                                                      // 0x0000   (0x0010)  
	FGameplayCueTranslatorNodeIndex                    CachedIndex;                                                // 0x0010   (0x0004)  
	FGameplayTag                                       CachedGameplayTag;                                          // 0x0014   (0x0008)  
	FName                                              CachedGameplayTagName;                                      // 0x001C   (0x0008)  
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x0024   (0x0054)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationManager
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FGameplayCueTranslationManager
{ 
	TArray<FGameplayCueTranslatorNode>                 TranslationLUT;                                             // 0x0000   (0x0010)  
	TMap<FName, FGameplayCueTranslatorNodeIndex>       TranslationNameToIndexMap;                                  // 0x0010   (0x0050)  
	class UGameplayTagsManager*                        TagManager;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectQuery
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FActiveGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayModifierEvaluatedData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayModifierEvaluatedData
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Magnitude;                                                  // 0x003C   (0x0004)  
	FActiveGameplayEffectHandle                        Handle;                                                     // 0x0040   (0x0008)  
	bool                                               IsValid;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayEffectCustomExecutionOutput
{ 
	TArray<FGameplayModifierEvaluatedData>             OutputModifiers;                                            // 0x0000   (0x0010)  
	bool                                               bTriggerConditionalGameplayEffects : 1;                     // 0x0010:0 (0x0001)  
	bool                                               bHandledStackCountManually : 1;                             // 0x0010:1 (0x0001)  
	bool                                               bHandledGameplayCuesManually : 1;                           // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FGameplayEffectCustomExecutionParameters
{ 
	unsigned char                                      UnknownData00_2[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayTagBlueprintPropertyMapping
{ 
	FGameplayTag                                       TagToMap;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	FName                                              PropertyName;                                               // 0x0028   (0x0008)  
	FGuid                                              PropertyGuid;                                               // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagBlueprintPropertyMap
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<FGameplayTagBlueprintPropertyMapping>       PropertyMappings;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectContext
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FGameplayEffectContext
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class AActor*>                      Instigator;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<class AActor*>                      EffectCauser;                                               // 0x0010   (0x0008)  
	TWeakObjectPtr<class UGameplayAbility*>            AbilityCDO;                                                 // 0x0018   (0x0008)  
	TWeakObjectPtr<class UGameplayAbility*>            AbilityInstanceNotReplicated;                               // 0x0020   (0x0008)  
	int32_t                                            AbilityLevel;                                               // 0x0028   (0x0004)  
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x002C   (0x0008)  
	TWeakObjectPtr<class UAbilitySystemComponent*>     InstigatorAbilitySystemComponent;                           // 0x0034   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	SDK_UNDEFINED(16,353) /* TArray<TWeakObjectPtr<AActor*>> */ __um(Actors);                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	FVector                                            WorldOrigin;                                                // 0x0060   (0x000C)  
	bool                                               bHasWorldOrigin : 1;                                        // 0x006C:0 (0x0001)  
	bool                                               bReplicateSourceObject : 1;                                 // 0x006C:1 (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityAsync
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAbilityAsync : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync.EndAction
	void EndAction() // [0xc4ca80] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
/// Size: 0x00F8 (248 bytes) (0x000038 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{ 
public:
	SDK_UNDEFINED(16,354) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0xB0];                                      // 0x0048   (0x00B0)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
	UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(AActor* TargetActor, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect) // [0xc52800] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityAsync_WaitGameplayEffectApplied* (*FuncPtr)(AActor*, FGameplayTargetDataFilterHandle, FGameplayTagRequirements, FGameplayTagRequirements, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(TargetActor, SourceFilter, SourceTagRequirements, TargetTagRequirements, TriggerOnce, ListenForPeriodicEffect);
	}
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
	void OnAppliedDelegate__DelegateSignature(AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle) // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(AActor*, FGameplayEffectSpecHandle, FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Source, SpecHandle, ActiveHandle);
	}
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{ 
public:
	SDK_UNDEFINED(16,355) /* FMulticastInlineDelegate */ __um(EventReceived);                                      // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0048   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
	UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact) // [0xc52b90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityAsync_WaitGameplayEvent* (*FuncPtr)(AActor*, FGameplayTag, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(TargetActor, EventTag, OnlyTriggerOnce, OnlyMatchExact);
	}
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
	void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload) // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(FGameplayEventData);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Payload);
	}
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTag
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,356) /* FMulticastInlineDelegate */ __um(Added);                                              // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
	UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce) // [0xc52cf0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityAsync_WaitGameplayTagAdded* (*FuncPtr)(AActor*, FGameplayTag, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(TargetActor, Tag, OnlyTriggerOnce);
	}
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,357) /* FMulticastInlineDelegate */ __um(Removed);                                            // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
	UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce) // [0xc52df0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityAsync_WaitGameplayTagRemoved* (*FuncPtr)(AActor*, FGameplayTag, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(TargetActor, Tag, OnlyTriggerOnce);
	}
};

/// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	bool TargetDataHasOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index) // [0xc526a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayAbilityTargetDataHandle&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(TargetData, Index);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	bool TargetDataHasHitResult(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index) // [0xc52540] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayAbilityTargetDataHandle&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(HitResult, Index);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	bool TargetDataHasEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index) // [0xc523e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayAbilityTargetDataHandle&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(TargetData, Index);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	bool TargetDataHasActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index) // [0xc52280] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayAbilityTargetDataHandle&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(TargetData, Index);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle) // [0xc52170] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(SpecHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32_t StackCount) // [0xc52020] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(SpecHandle, StackCount);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float Duration) // [0xc51ed0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(SpecHandle, Duration);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	void SendGameplayEventToActor(AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload) // [0xc51bc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, FGameplayTag, FGameplayEventData);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Actor, EventTag, Payload);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB) // [0xc51860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayAttribute, FGameplayAttribute);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(AttributeA, AttributeB);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	FGameplayEffectSpecHandle MakeSpecHandle(UGameplayEffect* InGameplayEffect, AActor* InInstigator, AActor* InEffectCauser, float InLevel) // [0xc516c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(UGameplayEffect*, AActor*, AActor*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(InGameplayEffect, InInstigator, InEffectCauser, InLevel);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
	FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, AActor* Instigator, AActor* EffectCauser, UObject* SourceObject, UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy) // [0xc50f40] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayCueParameters (*FuncPtr)(float, float, FGameplayEffectContextHandle, FGameplayTag, FGameplayTag, FGameplayTagContainer, FGameplayTagContainer, FVector, FVector, AActor*, AActor*, UObject*, UPhysicalMaterial*, int32_t, int32_t, USceneComponent*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(NormalizedMagnitude, RawMagnitude, EffectContext, MatchedTagName, OriginalTag, AggregatedSourceTags, AggregatedTargetTags, Location, Normal, Instigator, EffectCauser, SourceObject, PhysicalMaterial, GameplayEffectLevel, AbilityLevel, TargetAttachComponent, bReplicateLocationWhenUsingMinimalRepProxy);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, AActor* FilterActor) // [0xc50da0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayTargetDataFilterHandle (*FuncPtr)(FGameplayTargetDataFilter, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Filter, FilterActor);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	bool IsValid(FGameplayAttribute Attribute) // [0xc50bc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayAttribute);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(Attribute);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters) // [0xc50a20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(Parameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters) // [0xc50880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(Parameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	bool HasHitResult(FGameplayCueParameters Parameters) // [0xc506e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(Parameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	FTransform GetTargetDataOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index) // [0xc50550] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FTransform (*FuncPtr)(FGameplayAbilityTargetDataHandle&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(TargetData, Index);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	FTransform GetTargetDataEndPointTransform(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index) // [0xc503c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FTransform (*FuncPtr)(FGameplayAbilityTargetDataHandle&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(TargetData, Index);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	FVector GetTargetDataEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index) // [0xc50250] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FVector (*FuncPtr)(FGameplayAbilityTargetDataHandle&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(TargetData, Index);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	FVector GetOrigin(FGameplayCueParameters Parameters) // [0xc500a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FVector (*FuncPtr)(FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(Parameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute) // [0xc4fe30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpecHandle, FGameplayAttribute);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(SpecHandle, Attribute);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	FTransform GetInstigatorTransform(FGameplayCueParameters Parameters) // [0xc4fc60] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FTransform (*FuncPtr)(FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func(Parameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	AActor* GetInstigatorActor(FGameplayCueParameters Parameters) // [0xc4fac0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class AActor* (*FuncPtr)(FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(Parameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	FHitResult GetHitResultFromTargetData(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index) // [0xc4f8f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef FHitResult (*FuncPtr)(FGameplayAbilityTargetDataHandle&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(HitResult, Index);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	FHitResult GetHitResult(FGameplayCueParameters Parameters) // [0xc4f700] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FHitResult (*FuncPtr)(FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(Parameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	bool GetGameplayCueEndLocationAndNormal(AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal) // [0xc4f480] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(AActor*, FGameplayCueParameters, FVector&, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(TargetActor, Parameters, Location, Normal);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	bool GetGameplayCueDirection(AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction) // [0xc4f240] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(AActor*, FGameplayCueParameters, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(TargetActor, Parameters, Direction);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	float GetFloatAttributeFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute) // [0xc4efe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UAbilitySystemComponent*, FGameplayAttribute, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(AbilitySystem, Attribute, bSuccessfullyFoundAttribute);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	float GetFloatAttributeBaseFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute) // [0xc4ed80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UAbilitySystemComponent*, FGameplayAttribute, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(AbilitySystemComponent, Attribute, bSuccessfullyFoundAttribute);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	float GetFloatAttributeBase(AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute) // [0xc4eb20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(AActor*, FGameplayAttribute, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		return func(Actor, Attribute, bSuccessfullyFoundAttribute);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	float GetFloatAttribute(AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute) // [0xc4e8c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(AActor*, FGameplayAttribute, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func(Actor, Attribute, bSuccessfullyFoundAttribute);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle) // [0xc4e7b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectContextHandle (*FuncPtr)(FGameplayEffectSpecHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func(SpecHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	int32_t GetDataCountFromTargetData(FGameplayAbilityTargetDataHandle& TargetData) // [0xc4e690] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FGameplayAbilityTargetDataHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func(TargetData);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
	// TArray<FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle);           // [0xc4e4d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
	// TArray<AActor*> GetAllActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                // [0xc4e360] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	// TArray<AActor*> GetActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                    // [0xc4e1c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	int32_t GetActorCount(FGameplayCueParameters Parameters) // [0xc4e020] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func(Parameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	AActor* GetActorByIndex(FGameplayCueParameters Parameters, int32_t Index) // [0xc4de40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class AActor* (*FuncPtr)(FGameplayCueParameters, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		return func(Parameters, Index);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
	float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle) // [0xc4ddb0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func(ActiveHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
	float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle) // [0xc4dd20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		return func(ActiveHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	int32_t GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle) // [0xc4dc90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		return func(ActiveHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	int32_t GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle) // [0xc4dc00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		return func(ActiveHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
	float GetActiveGameplayEffectRemainingDuration(UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle) // [0xc4db20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(UObject*, FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		return func(WorldContextObject, ActiveHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
	float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle) // [0xc4da90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		return func(ActiveHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle) // [0xc4d9c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		return func(ActiveHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	UAbilitySystemComponent* GetAbilitySystemComponent(AActor* Actor) // [0xc4d930] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UAbilitySystemComponent* (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		return func(Actor);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	// void ForwardGameplayCueToTarget(TScriptInterface<Class> TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0xc4d6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	FGameplayAbilityTargetDataHandle FilterTargetData(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass) // [0xc4d510] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayAbilityTargetDataHandle (*FuncPtr)(FGameplayAbilityTargetDataHandle&, FGameplayTargetDataFilterHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[47]);
		return func(TargetDataHandle, ActorFilterClass);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	float EvaluateAttributeValueWithTagsAndBase(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess) // [0xc4d160] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UAbilitySystemComponent*, FGameplayAttribute, FGameplayTagContainer&, FGameplayTagContainer&, float, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[48]);
		return func(AbilitySystem, Attribute, SourceTags, TargetTags, BaseValue, bSuccess);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	float EvaluateAttributeValueWithTags(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, bool& bSuccess) // [0xc4ce00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UAbilitySystemComponent*, FGameplayAttribute, FGameplayTagContainer&, FGameplayTagContainer&, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		return func(AbilitySystem, Attribute, SourceTags, TargetTags, bSuccess);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB) // [0xc4caa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayAttribute, FGameplayAttribute);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		return func(AttributeA, AttributeB);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin) // [0xc4c950] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayEffectContextHandle, FVector);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		func(EffectContext, Origin);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext) // [0xc4c860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		return func(EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext) // [0xc4c770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[53]);
		return func(EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext) // [0xc4c680] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		return func(EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	UObject* EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext) // [0xc4c590] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UObject* (*FuncPtr)(FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[55]);
		return func(EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	AActor* EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext) // [0xc4c4a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class AActor* (*FuncPtr)(FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		return func(EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext) // [0xc4c3a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FVector (*FuncPtr)(FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		return func(EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	AActor* EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext) // [0xc4c2b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class AActor* (*FuncPtr)(FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		return func(EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext) // [0xc4c170] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FHitResult (*FuncPtr)(FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		return func(EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	AActor* EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext) // [0xc4c080] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class AActor* (*FuncPtr)(FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[60]);
		return func(EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset) // [0xc4be70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayEffectContextHandle, FHitResult, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[61]);
		func(EffectContext, HitResult, bReset);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	bool DoesTargetDataContainActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, AActor* Actor) // [0xc4bcc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayAbilityTargetDataHandle&, int32_t, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[62]);
		return func(TargetData, Index, Actor);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, FGameplayTagRequirements& SourceTagReqs, FGameplayTagRequirements& TargetTagReqs) // [0xc4b9c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayCueParameters, FGameplayTagRequirements&, FGameplayTagRequirements&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[63]);
		return func(Parameters, SourceTagReqs, TargetTagReqs);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
	FGameplayEffectSpecHandle CloneSpecHandle(AActor* InNewInstigator, AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone) // [0xc4b820] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(AActor*, AActor*, FGameplayEffectSpecHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[64]);
		return func(InNewInstigator, InEffectCauser, GameplayEffectSpecHandle_Clone);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
	void BreakGameplayCueParameters(FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, AActor*& Instigator, AActor*& EffectCauser, UObject*& SourceObject, UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy) // [0xc4b000] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(FGameplayCueParameters&, float&, float&, FGameplayEffectContextHandle&, FGameplayTag&, FGameplayTag&, FGameplayTagContainer&, FGameplayTagContainer&, FVector&, FVector&, AActor*&, AActor*&, UObject*&, UPhysicalMaterial*&, int32_t&, int32_t&, USceneComponent*&, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[65]);
		func(Parameters, NormalizedMagnitude, RawMagnitude, EffectContext, MatchedTagName, OriginalTag, AggregatedSourceTags, AggregatedTargetTags, Location, Normal, Instigator, EffectCauser, SourceObject, PhysicalMaterial, GameplayEffectLevel, AbilityLevel, TargetAttachComponent, bReplicateLocationWhenUsingMinimalRepProxy);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
	FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude) // [0xc4ae60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle, FGameplayTag, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[66]);
		return func(SpecHandle, DataTag, Magnitude);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude) // [0xc4acc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle, FName, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[67]);
		return func(SpecHandle, DataName, Magnitude);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, FGameplayAbilityTargetDataHandle& HandleToAdd) // [0xc4aac0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef FGameplayAbilityTargetDataHandle (*FuncPtr)(FGameplayAbilityTargetDataHandle, FGameplayAbilityTargetDataHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[68]);
		return func(TargetHandle, HandleToAdd);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec) // [0xc4a920] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle, FGameplayEffectSpecHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[69]);
		return func(SpecHandle, LinkedGameplayEffectSpec);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
	FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, UClass* LinkedGameplayEffect) // [0xc4a7c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle, UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[70]);
		return func(SpecHandle, LinkedGameplayEffect);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags) // [0xc4a610] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle, FGameplayTagContainer);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[71]);
		return func(SpecHandle, NewGameplayTags);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag) // [0xc4a4b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle, FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[72]);
		return func(SpecHandle, NewGameplayTag);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags) // [0xc4a300] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle, FGameplayTagContainer);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[73]);
		return func(SpecHandle, NewGameplayTags);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag) // [0xc4a1a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(FGameplayEffectSpecHandle, FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[74]);
		return func(SpecHandle, NewGameplayTag);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(FGameplayAbilityTargetingLocationInfo& SourceLocation, FGameplayAbilityTargetingLocationInfo& TargetLocation) // [0xc49ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayAbilityTargetDataHandle (*FuncPtr)(FGameplayAbilityTargetingLocationInfo&, FGameplayAbilityTargetingLocationInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[75]);
		return func(SourceLocation, TargetLocation);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(FHitResult& HitResult) // [0xc49ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayAbilityTargetDataHandle (*FuncPtr)(FHitResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[76]);
		return func(HitResult);
	}
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<AActor*>& ActorArray, bool OneTargetPerHandle);  // [0xc49db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(AActor* Actor) // [0xc49cf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayAbilityTargetDataHandle (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[78]);
		return func(Actor);
	}
};

/// Class /Script/GameplayAbilities.AbilitySystemComponent
/// Size: 0x1308 (4872 bytes) (0x000120 - 0x001308) align 8 MaxSize: 0x1308
class UAbilitySystemComponent : public UGameplayTasksComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0120   (0x0010)  MISSED
	TArray<FAttributeDefaults>                         DefaultStartingData;                                        // 0x0130   (0x0010)  
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                          // 0x0140   (0x0010)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0150   (0x0008)  
	unsigned char                                      UnknownData01_6[0x198];                                     // 0x0158   (0x0198)  MISSED
	float                                              OutgoingDuration;                                           // 0x02F0   (0x0004)  
	float                                              IncomingDuration;                                           // 0x02F4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x02F8   (0x0020)  MISSED
	TArray<FString>                                    ClientDebugStrings;                                         // 0x0318   (0x0010)  
	TArray<FString>                                    ServerDebugStrings;                                         // 0x0328   (0x0010)  
	unsigned char                                      UnknownData03_6[0x58];                                      // 0x0338   (0x0058)  MISSED
	bool                                               UserAbilityActivationInhibited;                             // 0x0390   (0x0001)  
	bool                                               ReplicationProxyEnabled;                                    // 0x0391   (0x0001)  
	bool                                               bSuppressGrantAbility;                                      // 0x0392   (0x0001)  
	bool                                               bSuppressGameplayCues;                                      // 0x0393   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0394   (0x0004)  MISSED
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                        // 0x0398   (0x0010)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x03A8   (0x0028)  MISSED
	class AActor*                                      OwnerActor;                                                 // 0x03D0   (0x0008)  
	class AActor*                                      AvatarActor;                                                // 0x03D8   (0x0008)  
	unsigned char                                      UnknownData06_6[0x10];                                      // 0x03E0   (0x0010)  MISSED
	FGameplayAbilitySpecContainer                      ActivatableAbilities;                                       // 0x03F0   (0x0120)  
	unsigned char                                      UnknownData07_6[0x30];                                      // 0x0510   (0x0030)  MISSED
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                            // 0x0540   (0x0010)  
	unsigned char                                      UnknownData08_6[0x200];                                     // 0x0550   (0x0200)  MISSED
	FGameplayAbilityRepAnimMontage                     RepAnimMontageInfo;                                         // 0x0750   (0x0030)  
	bool                                               bCachedIsNetSimulated;                                      // 0x0780   (0x0001)  
	bool                                               bPendingMontageRep;                                         // 0x0781   (0x0001)  
	unsigned char                                      UnknownData09_6[0x6];                                       // 0x0782   (0x0006)  MISSED
	FGameplayAbilityLocalAnimMontage                   LocalAnimMontageInfo;                                       // 0x0788   (0x0028)  
	unsigned char                                      UnknownData10_6[0xA0];                                      // 0x07B0   (0x00A0)  MISSED
	FActiveGameplayEffectsContainer                    ActiveGameplayEffects;                                      // 0x0850   (0x0478)  
	FActiveGameplayCueContainer                        ActiveGameplayCues;                                         // 0x0CC8   (0x0128)  
	FActiveGameplayCueContainer                        MinimalReplicationGameplayCues;                             // 0x0DF0   (0x0128)  
	unsigned char                                      UnknownData11_6[0x128];                                     // 0x0F18   (0x0128)  MISSED
	TArray<char>                                       BlockedAbilityBindings;                                     // 0x1040   (0x0010)  
	unsigned char                                      UnknownData12_6[0x128];                                     // 0x1050   (0x0128)  MISSED
	FMinimalReplicationTagCountMap                     MinimalReplicationTags;                                     // 0x1178   (0x0060)  
	unsigned char                                      UnknownData13_6[0x18];                                      // 0x11D8   (0x0018)  MISSED
	FReplicatedPredictionKeyMap                        ReplicatedPredictionKeyMap;                                 // 0x11F0   (0x0118)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	bool TryActivateAbilityByClass(UClass* InAbilityToActivate, bool bAllowRemoteActivation) // [0xc5a860] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UClass*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(InAbilityToActivate, bAllowRemoteActivation);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation) // [0xc5a750] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(GameplayTagContainer, bAllowRemoteActivation);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetConfirm
	void TargetConfirm() // [0xc5a730] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetCancel
	void TargetCancel() // [0xc5a710] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	void SetUserAbilityActivationInhibited(bool NewInhibit) // [0xc5a680] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(NewInhibit);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel) // [0xc5a580] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayEffectQuery, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Query, NewLevel);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel) // [0xc5a4a0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FActiveGameplayEffectHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(ActiveHandle, NewLevel);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData) // [0xc5a020] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, bool, FPredictionKey, FGameplayEventData);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(AbilityToActivate, InputPressed, PredictionKey, TriggerEventData);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey) // [0xc59eb0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, bool, FPredictionKey);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(AbilityToActivate, InputPressed, PredictionKey);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey) // [0xc59d30] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, FPredictionKey, FPredictionKey);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(AbilityHandle, AbilityOriginalPredictionKey, CurrentPredictionKey);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey) // [0xc59aa0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, FPredictionKey, FGameplayAbilityTargetDataHandle, FGameplayTag, FPredictionKey);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(AbilityHandle, AbilityOriginalPredictionKey, ReplicatedTargetDataHandle, ApplicationTag, CurrentPredictionKey);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	// void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // [0xc59870] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	// void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0xc596a0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle) // [0xc595f0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(AbilityHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle) // [0xc59540] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(AbilityHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	// void ServerPrintDebug_RequestWithStrings(TArray<FString> Strings);                                                       // [0xc59450] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	void ServerPrintDebug_Request() // [0xc59400] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey) // [0xc59260] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, FGameplayAbilityActivationInfo, FPredictionKey);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func(AbilityToEnd, ActivationInfo, PredictionKey);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	void ServerCurrentMontageSetPlayRate(UAnimMontage* ClientAnimMontage, float InPlayRate) // [0xc59150] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(UAnimMontage*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func(ClientAnimMontage, InPlayRate);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	void ServerCurrentMontageSetNextSectionName(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName) // [0xc58fc0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(UAnimMontage*, float, FName, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func(ClientAnimMontage, ClientPosition, SectionName, NextSectionName);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	void ServerCurrentMontageJumpToSectionName(UAnimMontage* ClientAnimMontage, FName SectionName) // [0xc58eb0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(UAnimMontage*, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func(ClientAnimMontage, SectionName);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo) // [0xc58d80] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, FGameplayAbilityActivationInfo);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		func(AbilityToCancel, ActivationInfo);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo) // [0xc58bd0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FServerAbilityRPCBatch);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		func(BatchInfo);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	void RemoveActiveGameplayEffectBySourceEffect(UClass* GameplayEffect, UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove) // [0xc58ac0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UClass*, UAbilitySystemComponent*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		func(GameplayEffect, InstigatorAbilitySystemComponent, StacksToRemove);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove) // [0xc589e0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FActiveGameplayEffectHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(Handle, StacksToRemove);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags) // [0xc588f0] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FGameplayTagContainer);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(Tags);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags) // [0xc58800] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FGameplayTagContainer);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(Tags);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags) // [0xc58710] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FGameplayTagContainer);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(Tags);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags) // [0xc58710] Final|Native|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FGameplayTagContainer);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(Tags);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	void OnRep_ServerDebugString() // [0xc586f0] Native|Public        
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	void OnRep_ReplicatedAnimMontage() // [0xc586d0] Native|Protected     
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	void OnRep_OwningActor() // [0xc586b0] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	void OnRep_ClientDebugString() // [0xc58690] Native|Public        
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	void OnRep_ActivateAbilities() // [0xc58670] Native|Protected     
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) // [0xc583e0] Net|Native|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer, FPredictionKey, FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		func(GameplayCueTags, PredictionKey, GameplayCueParameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) // [0xc58200] Net|Native|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer, FPredictionKey, FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		func(GameplayCueTags, PredictionKey, EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) // [0xc57f70] Net|Native|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer, FPredictionKey, FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		func(GameplayCueTags, PredictionKey, GameplayCueParameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) // [0xc57d30] Net|Native|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayTag, FPredictionKey, FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		func(GameplayCueTag, PredictionKey, GameplayCueParameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey) // [0xc57ba0] Net|Native|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayEffectSpecForRPC, FPredictionKey);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		func(Spec, PredictionKey);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) // [0xc57a20] Net|Native|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayTag, FPredictionKey, FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		func(GameplayCueTag, PredictionKey, EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) // [0xc575a0] Net|Native|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayTag, FPredictionKey, FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		func(GameplayCueTag, PredictionKey, GameplayCueParameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey) // [0xc57420] Net|Native|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayEffectSpecForRPC, FPredictionKey);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		func(Spec, PredictionKey);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters) // [0xc577e0] Net|Native|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayTag, FPredictionKey, FGameplayCueParameters);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		func(GameplayCueTag, PredictionKey, Parameters);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) // [0xc572a0] Net|Native|Event|NetMulticast|Public 
	{
		typedef void (*FuncPtr)(FGameplayTag, FPredictionKey, FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		func(GameplayCueTag, PredictionKey, EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	FGameplayEffectSpecHandle MakeOutgoingSpec(UClass* GameplayEffectClass, float level, FGameplayEffectContextHandle Context) // [0xc57080] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(UClass*, float, FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		return func(GameplayEffectClass, level, Context);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	FGameplayEffectContextHandle MakeEffectContext() // [0xc57000] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FGameplayEffectContextHandle (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		return func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_InitStats
	void K2_InitStats(UClass* Attributes, UDataTable* DataTable) // [0xc56f30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UClass*, UDataTable*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[46]);
		func(Attributes, DataTable);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	bool IsGameplayCueActive(FGameplayTag GameplayCueTag) // [0xc56e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[47]);
		return func(GameplayCueTag);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	bool GetUserAbilityActivationInhibited() // [0xc56e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[48]);
		return func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute) // [0xc56c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)(FActiveGameplayEffectHandle, FGameplayAttribute);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		return func(Handle, Attribute);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	int32_t GetGameplayEffectCount(UClass* SourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck) // [0xc56b20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(UClass*, UAbilitySystemComponent*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		return func(SourceGameplayEffect, OptionalInstigatorFilterComponent, bEnforceOnGoingCheck);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	// TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);                             // [0xc569f0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	// TArray<FActiveGameplayEffectHandle> GetActiveEffects(FGameplayEffectQuery& Query);                                       // [0xc568f0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate) // [0xc56860] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[53]);
		func(AbilityToActivate);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	// void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // [0xc56730] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	// void ClientPrintDebug_Response(TArray<FString> Strings, int32_t GameFlags);                                              // [0xc56620] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo) // [0xc56520] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, FGameplayAbilityActivationInfo);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		func(AbilityToEnd, ActivationInfo);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo) // [0xc56420] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, FGameplayAbilityActivationInfo);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		func(AbilityToCancel, ActivationInfo);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData) // [0xc560e0] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, FPredictionKey, FGameplayEventData);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		func(AbilityToActivate, PredictionKey, TriggerEventData);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey) // [0xc55ff0] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, FPredictionKey);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		func(AbilityToActivate, PredictionKey);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey) // [0xc55f10] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FGameplayAbilitySpecHandle, int16_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[60]);
		func(AbilityToActivate, PredictionKey);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(UClass* GameplayEffectClass, UAbilitySystemComponent* Target, float level, FGameplayEffectContextHandle Context) // [0xc55d50] Final|Native|Public|BlueprintCallable 
	{
		typedef FActiveGameplayEffectHandle (*FuncPtr)(UClass*, UAbilitySystemComponent*, float, FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[61]);
		return func(GameplayEffectClass, Target, level, Context);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(UClass* GameplayEffectClass, float level, FGameplayEffectContextHandle EffectContext) // [0xc55bb0] Final|Native|Public|BlueprintCallable 
	{
		typedef FActiveGameplayEffectHandle (*FuncPtr)(UClass*, float, FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[62]);
		return func(GameplayEffectClass, level, EffectContext);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, UAbilitySystemComponent* Target) // [0xc55a90] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef FActiveGameplayEffectHandle (*FuncPtr)(FGameplayEffectSpecHandle&, UAbilitySystemComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[63]);
		return func(SpecHandle, Target);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle) // [0xc559b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef FActiveGameplayEffectHandle (*FuncPtr)(FGameplayEffectSpecHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[64]);
		return func(SpecHandle);
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	void AbilityConfirmOrCancel__DelegateSignature() // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[65]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	void AbilityAbilityKey__DelegateSignature(int32_t InputID) // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[66]);
		func(InputID);
	}
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUD
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class AAbilitySystemDebugHUD : public AHUD
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemGlobals
/// Size: 0x0260 (608 bytes) (0x000028 - 0x000260) align 8 MaxSize: 0x0260
class UAbilitySystemGlobals : public UObject
{ 
public:
	FSoftClassPath                                     AbilitySystemGlobalsClassName;                              // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0040   (0x0028)  MISSED
	FGameplayTag                                       ActivateFailIsDeadTag;                                      // 0x0068   (0x0008)  
	FName                                              ActivateFailIsDeadName;                                     // 0x0070   (0x0008)  
	FGameplayTag                                       ActivateFailCooldownTag;                                    // 0x0078   (0x0008)  
	FName                                              ActivateFailCooldownName;                                   // 0x0080   (0x0008)  
	FGameplayTag                                       ActivateFailCostTag;                                        // 0x0088   (0x0008)  
	FName                                              ActivateFailCostName;                                       // 0x0090   (0x0008)  
	FGameplayTag                                       ActivateFailTagsBlockedTag;                                 // 0x0098   (0x0008)  
	FName                                              ActivateFailTagsBlockedName;                                // 0x00A0   (0x0008)  
	FGameplayTag                                       ActivateFailTagsMissingTag;                                 // 0x00A8   (0x0008)  
	FName                                              ActivateFailTagsMissingName;                                // 0x00B0   (0x0008)  
	FGameplayTag                                       ActivateFailNetworkingTag;                                  // 0x00B8   (0x0008)  
	FName                                              ActivateFailNetworkingName;                                 // 0x00C0   (0x0008)  
	int32_t                                            MinimalReplicationTagCountBits;                             // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FNetSerializeScriptStructCache                     TargetDataStructCache;                                      // 0x00D0   (0x0010)  
	bool                                               bAllowGameplayModEvaluationChannels;                        // 0x00E0   (0x0001)  
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                        // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	FName                                              GameplayModEvaluationChannelAliases[10];                    // 0x00E4   (0x0050)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0134   (0x0004)  MISSED
	FSoftObjectPath                                    GlobalCurveTableName;                                       // 0x0138   (0x0018)  
	class UCurveTable*                                 GlobalCurveTable;                                           // 0x0150   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeMetaDataTableName;                           // 0x0158   (0x0018)  
	class UDataTable*                                  GlobalAttributeMetaDataTable;                               // 0x0170   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeSetDefaultsTableName;                        // 0x0178   (0x0018)  
	TArray<FSoftObjectPath>                            GlobalAttributeSetDefaultsTableNames;                       // 0x0190   (0x0010)  
	TArray<class UCurveTable*>                         GlobalAttributeDefaultsTables;                              // 0x01A0   (0x0010)  
	FSoftObjectPath                                    GlobalGameplayCueManagerClass;                              // 0x01B0   (0x0018)  
	FSoftObjectPath                                    GlobalGameplayCueManagerName;                               // 0x01C8   (0x0018)  
	TArray<FString>                                    GameplayCueNotifyPaths;                                     // 0x01E0   (0x0010)  
	FSoftObjectPath                                    GameplayTagResponseTableName;                               // 0x01F0   (0x0018)  
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                   // 0x0208   (0x0008)  
	bool                                               PredictTargetGameplayEffects;                               // 0x0210   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0211   (0x0007)  MISSED
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                   // 0x0218   (0x0008)  
	unsigned char                                      UnknownData05_7[0x40];                                      // 0x0220   (0x0040)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	void ToggleIgnoreAbilitySystemCosts() // [0xc5f380] Exec|Native|Public   
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	void ToggleIgnoreAbilitySystemCooldowns() // [0xc5f360] Exec|Native|Public   
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility
	void ServerEndPlayerAbility(FString AbilityNameMatch) // [0xc5f270] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(AbilityNameMatch);
	}
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility
	void ServerCancelPlayerAbility(FString AbilityNameMatch) // [0xc5f270] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(AbilityNameMatch);
	}
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility
	void ServerActivatePlayerAbility(FString AbilityNameMatch) // [0xc5f270] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(AbilityNameMatch);
	}
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities
	void ListPlayerAbilities() // [0xb888e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func();
	}
};

/// Class /Script/GameplayAbilities.AbilitySystemInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemReplicationProxyInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemReplicationProxyInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AttributeSet
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UAttributeSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemTestAttributeSet
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UAbilitySystemTestAttributeSet : public UAttributeSet
{ 
public:
	float                                              MaxHealth;                                                  // 0x0030   (0x0004)  
	float                                              Health;                                                     // 0x0034   (0x0004)  
	float                                              Mana;                                                       // 0x0038   (0x0004)  
	float                                              MaxMana;                                                    // 0x003C   (0x0004)  
	float                                              Damage;                                                     // 0x0040   (0x0004)  
	float                                              SpellDamage;                                                // 0x0044   (0x0004)  
	float                                              PhysicalDamage;                                             // 0x0048   (0x0004)  
	float                                              CritChance;                                                 // 0x004C   (0x0004)  
	float                                              CritMultiplier;                                             // 0x0050   (0x0004)  
	float                                              ArmorDamageReduction;                                       // 0x0054   (0x0004)  
	float                                              DodgeChance;                                                // 0x0058   (0x0004)  
	float                                              LifeSteal;                                                  // 0x005C   (0x0004)  
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              StackingAttribute1;                                         // 0x0064   (0x0004)  
	float                                              StackingAttribute2;                                         // 0x0068   (0x0004)  
	float                                              NoStackAttribute;                                           // 0x006C   (0x0004)  
};

/// Class /Script/GameplayAbilities.AbilitySystemTestPawn
/// Size: 0x02D0 (720 bytes) (0x0002B0 - 0x0002D0) align 8 MaxSize: 0x02D0
class AAbilitySystemTestPawn : public ADefaultPawn
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x02B0   (0x0018)  MISSED
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x02C8   (0x0008)  
};

/// Class /Script/GameplayAbilities.AbilityTask
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UAbilityTask : public UGameplayTask
{ 
public:
	class UGameplayAbility*                            Ability;                                                    // 0x0068   (0x0008)  
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{ 
public:
	FName                                              ForceName;                                                  // 0x0080   (0x0008)  
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                         // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FVector                                            FinishSetVelocity;                                          // 0x008C   (0x000C)  
	float                                              FinishClampVelocity;                                        // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UCharacterMovementComponent*                 MovementComponent;                                          // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00A8   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
/// Size: 0x00F0 (240 bytes) (0x0000B8 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,358) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00B8   (0x0010)  
	FVector                                            WorldDirection;                                             // 0x00C8   (0x000C)  
	float                                              Strength;                                                   // 0x00D4   (0x0004)  
	float                                              Duration;                                                   // 0x00D8   (0x0004)  
	bool                                               bIsAdditive;                                                // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x00E0   (0x0008)  
	bool                                               bEnableGravity;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity) // [0xc5d580] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef class UAbilityTask_ApplyRootMotionConstantForce* (*FuncPtr)(UGameplayAbility*, FName, FVector, float, float, bool, UCurveFloat*, ERootMotionFinishVelocityMode, FVector, float, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, TaskInstanceName, WorldDirection, Strength, Duration, bIsAdditive, StrengthOverTime, VelocityOnFinishMode, SetVelocityOnFinish, ClampVelocityOnFinish, bEnableGravity);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
/// Size: 0x0110 (272 bytes) (0x0000B8 - 0x000110) align 8 MaxSize: 0x0110
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,359) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,360) /* FMulticastInlineDelegate */ __um(OnLanded);                                           // 0x00C8   (0x0010)  
	FRotator                                           Rotation;                                                   // 0x00D8   (0x000C)  
	float                                              Distance;                                                   // 0x00E4   (0x0004)  
	float                                              Height;                                                     // 0x00E8   (0x0004)  
	float                                              Duration;                                                   // 0x00EC   (0x0004)  
	float                                              MinimumLandedTriggerTime;                                   // 0x00F0   (0x0004)  
	bool                                               bFinishOnLanded;                                            // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F5   (0x0003)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x00F8   (0x0008)  
	class UCurveFloat*                                 TimeMappingCurve;                                           // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0108   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	void OnLandedCallback(FHitResult& Hit) // [0xc5f0a0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FHitResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Hit);
	}
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	void Finish() // [0xc5f080] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve) // [0xc5d8d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef class UAbilityTask_ApplyRootMotionJumpForce* (*FuncPtr)(UGameplayAbility*, FName, FRotator, float, float, float, float, bool, ERootMotionFinishVelocityMode, FVector, float, UCurveVector*, UCurveFloat*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(OwningAbility, TaskInstanceName, Rotation, Distance, Height, Duration, MinimumLandedTriggerTime, bFinishOnLanded, VelocityOnFinishMode, SetVelocityOnFinish, ClampVelocityOnFinish, PathOffsetCurve, TimeMappingCurve);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
/// Size: 0x0130 (304 bytes) (0x0000B8 - 0x000130) align 8 MaxSize: 0x0130
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,361) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FVector                                            StartLocation;                                              // 0x00D0   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00DC   (0x000C)  
	class AActor*                                      TargetActor;                                                // 0x00E8   (0x0008)  
	FVector                                            TargetLocationOffset;                                       // 0x00F0   (0x000C)  
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                            // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x0100   (0x0004)  
	bool                                               bDisableDestinationReachedInterrupt;                        // 0x0104   (0x0001)  
	bool                                               bSetNewMovementMode;                                        // 0x0105   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x0106   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x0107   (0x0001)  
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0108   (0x0008)  
	class UCurveFloat*                                 TimeMappingCurve;                                           // 0x0110   (0x0008)  
	class UCurveFloat*                                 TargetLerpSpeedHorizontalCurve;                             // 0x0118   (0x0008)  
	class UCurveFloat*                                 TargetLerpSpeedVerticalCurve;                               // 0x0120   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0128   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	void OnTargetActorSwapped(AActor* OriginalTarget, AActor* NewTarget) // [0xc5f1a0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(AActor*, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(OriginalTarget, NewTarget);
	}
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	void OnRep_TargetLocation() // [0xc5f180] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	// UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0xc5e4e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	// UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0xc5dca0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
/// Size: 0x0108 (264 bytes) (0x0000B8 - 0x000108) align 8 MaxSize: 0x0108
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,362) /* FMulticastInlineDelegate */ __um(OnTimedOut);                                         // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,363) /* FMulticastInlineDelegate */ __um(OnTimedOutAndDestinationReached);                    // 0x00C8   (0x0010)  
	FVector                                            StartLocation;                                              // 0x00D8   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00E4   (0x000C)  
	float                                              Duration;                                                   // 0x00F0   (0x0004)  
	bool                                               bSetNewMovementMode;                                        // 0x00F4   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x00F5   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x00F6   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00F7   (0x0001)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0100   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	// UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0xc5e190] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
/// Size: 0x0110 (272 bytes) (0x0000B8 - 0x000110) align 8 MaxSize: 0x0110
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,364) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00B8   (0x0010)  
	FVector                                            Location;                                                   // 0x00C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	class AActor*                                      LocationActor;                                              // 0x00D8   (0x0008)  
	float                                              Strength;                                                   // 0x00E0   (0x0004)  
	float                                              Duration;                                                   // 0x00E4   (0x0004)  
	float                                              Radius;                                                     // 0x00E8   (0x0004)  
	bool                                               bIsPush;                                                    // 0x00EC   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x00ED   (0x0001)  
	bool                                               bNoZForce;                                                  // 0x00EE   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00EF   (0x0001)  MISSED
	class UCurveFloat*                                 StrengthDistanceFalloff;                                    // 0x00F0   (0x0008)  
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x00F8   (0x0008)  
	bool                                               bUseFixedWorldDirection;                                    // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	FRotator                                           FixedWorldDirection;                                        // 0x0104   (0x000C)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, UCurveFloat* StrengthDistanceFalloff, UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish) // [0xc5eb70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef class UAbilityTask_ApplyRootMotionRadialForce* (*FuncPtr)(UGameplayAbility*, FName, FVector, AActor*, float, float, float, bool, bool, bool, UCurveFloat*, UCurveFloat*, bool, FRotator, ERootMotionFinishVelocityMode, FVector, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, TaskInstanceName, Location, LocationActor, Strength, Duration, Radius, bIsPush, bIsAdditive, bNoZForce, StrengthDistanceFalloff, StrengthOverTime, bUseFixedWorldDirection, FixedWorldDirection, VelocityOnFinishMode, SetVelocityOnFinish, ClampVelocityOnFinish);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
/// Size: 0x00C8 (200 bytes) (0x000080 - 0x0000C8) align 8 MaxSize: 0x00C8
class UAbilityTask_MoveToLocation : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,365) /* FMulticastInlineDelegate */ __um(OnTargetLocationReached);                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0090   (0x0004)  MISSED
	FVector                                            StartLocation;                                              // 0x0094   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00A0   (0x000C)  
	float                                              DurationOfMovement;                                         // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B0   (0x0008)  MISSED
	class UCurveFloat*                                 LerpCurve;                                                  // 0x00B8   (0x0008)  
	class UCurveVector*                                LerpCurveVector;                                            // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	UAbilityTask_MoveToLocation* MoveToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve) // [0xc61d60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef class UAbilityTask_MoveToLocation* (*FuncPtr)(UGameplayAbility*, FName, FVector, float, UCurveFloat*, UCurveVector*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, TaskInstanceName, Location, Duration, OptionalInterpolationCurve, OptionalVectorInterpolationCurve);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,366) /* FMulticastInlineDelegate */ __um(OnSync);                                             // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	UAbilityTask_NetworkSyncPoint* WaitNetSync(UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType) // [0xc64390] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_NetworkSyncPoint* (*FuncPtr)(UGameplayAbility*, EAbilityTaskNetSyncType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, SyncType);
	}
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	void OnSignalCallback() // [0xc62370] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
/// Size: 0x0108 (264 bytes) (0x000080 - 0x000108) align 8 MaxSize: 0x0108
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,367) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,368) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,369) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                      // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,370) /* FMulticastInlineDelegate */ __um(OnCancelled);                                        // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00C0   (0x0028)  MISSED
	class UAnimMontage*                                MontageToPlay;                                              // 0x00E8   (0x0008)  
	float                                              Rate;                                                       // 0x00F0   (0x0004)  
	FName                                              StartSection;                                               // 0x00F4   (0x0008)  
	float                                              AnimRootMotionTranslationScale;                             // 0x00FC   (0x0004)  
	float                                              StartTimeSeconds;                                           // 0x0100   (0x0004)  
	bool                                               bStopWhenAbilityEnds;                                       // 0x0104   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0105   (0x0003)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	void OnMontageInterrupted() // [0xc62350] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) // [0xc62280] Final|Native|Public  
	{
		typedef void (*FuncPtr)(UAnimMontage*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Montage, bInterrupted);
	}
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) // [0xc621b0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(UAnimMontage*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Montage, bInterrupted);
	}
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds) // [0xc61870] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_PlayMontageAndWait* (*FuncPtr)(UGameplayAbility*, FName, UAnimMontage*, float, FName, bool, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(OwningAbility, TaskInstanceName, MontageToPlay, Rate, StartSection, bStopWhenAbilityEnds, AnimRootMotionTranslationScale, StartTimeSeconds);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_Repeat
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_Repeat : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,371) /* FMulticastInlineDelegate */ __um(OnPerformAction);                                    // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,372) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_Repeat.RepeatAction
	UAbilityTask_Repeat* RepeatAction(UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount) // [0xc62390] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_Repeat* (*FuncPtr)(UGameplayAbility*, float, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, TimeBetweenActions, TotalActionCount);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
/// Size: 0x00C8 (200 bytes) (0x000080 - 0x0000C8) align 8 MaxSize: 0x00C8
class UAbilityTask_SpawnActor : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,373) /* FMulticastInlineDelegate */ __um(Success);                                            // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,374) /* FMulticastInlineDelegate */ __um(DidNotSpawn);                                        // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	UAbilityTask_SpawnActor* SpawnActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass* Class) // [0xc624a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_SpawnActor* (*FuncPtr)(UGameplayAbility*, FGameplayAbilityTargetDataHandle, UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, TargetData, Class);
	}
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	void FinishSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor* SpawnedActor) // [0xc61ad0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UGameplayAbility*, FGameplayAbilityTargetDataHandle, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(OwningAbility, TargetData, SpawnedActor);
	}
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	bool BeginSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass* Class, AActor*& SpawnedActor) // [0xc61550] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UGameplayAbility*, FGameplayAbilityTargetDataHandle, UClass*, AActor*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(OwningAbility, TargetData, Class, SpawnedActor);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_StartAbilityState : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,375) /* FMulticastInlineDelegate */ __um(OnStateEnded);                                       // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,376) /* FMulticastInlineDelegate */ __um(OnStateInterrupted);                                 // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	UAbilityTask_StartAbilityState* StartAbilityState(UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState) // [0xc62660] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_StartAbilityState* (*FuncPtr)(UGameplayAbility*, FName, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, StateName, bEndCurrentState);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,377) /* FMulticastInlineDelegate */ __um(TimeElapsed);                                        // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0090   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration) // [0xc628b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_VisualizeTargeting* (*FuncPtr)(UGameplayAbility*, AGameplayAbilityTargetActor*, FName, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, TargetActor, TaskInstanceName, Duration);
	}
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	UAbilityTask_VisualizeTargeting* VisualizeTargeting(UGameplayAbility* OwningAbility, UClass* Class, FName TaskInstanceName, float Duration) // [0xc62760] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_VisualizeTargeting* (*FuncPtr)(UGameplayAbility*, UClass*, FName, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(OwningAbility, Class, TaskInstanceName, Duration);
	}
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor) // [0xc61c90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UGameplayAbility*, AGameplayAbilityTargetActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(OwningAbility, SpawnedActor);
	}
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	bool BeginSpawningActor(UGameplayAbility* OwningAbility, UClass* Class, AGameplayAbilityTargetActor*& SpawnedActor) // [0xc61750] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UGameplayAbility*, UClass*, AGameplayAbilityTargetActor*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(OwningAbility, Class, SpawnedActor);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
/// Size: 0x0138 (312 bytes) (0x000080 - 0x000138) align 8 MaxSize: 0x0138
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,378) /* FMulticastInlineDelegate */ __um(OnActivate);                                         // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x0090   (0x00A8)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce) // [0xc62e20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitAbilityActivate* (*FuncPtr)(UGameplayAbility*, FGameplayTagRequirements, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, TagRequirements, IncludeTriggeredAbilities, TriggerOnce);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce) // [0xc63020] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitAbilityActivate* (*FuncPtr)(UGameplayAbility*, FGameplayTagQuery, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(OwningAbility, Query, IncludeTriggeredAbilities, TriggerOnce);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce) // [0xc62c80] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitAbilityActivate* (*FuncPtr)(UGameplayAbility*, FGameplayTag, FGameplayTag, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(OwningAbility, WithTag, WithoutTag, IncludeTriggeredAbilities, TriggerOnce);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	void OnAbilityActivate(UGameplayAbility* ActivatedAbility) // [0xc61f40] Final|Native|Public  
	{
		typedef void (*FuncPtr)(UGameplayAbility*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(ActivatedAbility);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
/// Size: 0x00F8 (248 bytes) (0x000080 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,379) /* FMulticastInlineDelegate */ __um(OnCommit);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0090   (0x0068)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce) // [0xc63340] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitAbilityCommit* (*FuncPtr)(UGameplayAbility*, FGameplayTagQuery, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, Query, TriggerOnce);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce) // [0xc631f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitAbilityCommit* (*FuncPtr)(UGameplayAbility*, FGameplayTag, FGameplayTag, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(OwningAbility, WithTag, WithoutTage, TriggerOnce);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	void OnAbilityCommit(UGameplayAbility* ActivatedAbility) // [0xc61fd0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(UGameplayAbility*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(ActivatedAbility);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
/// Size: 0x00F8 (248 bytes) (0x000080 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,380) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0090   (0x0060)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	// UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, AActor* OptionalExternalOwner); // [0xc63fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	UAbilityTask_WaitAttributeChange* WaitForAttributeChange(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, AActor* OptionalExternalOwner) // [0xc634c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitAttributeChange* (*FuncPtr)(UGameplayAbility*, FGameplayAttribute, FGameplayTag, FGameplayTag, bool, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(OwningAbility, Attribute, WithSrcTag, WithoutSrcTag, TriggerOnce, OptionalExternalOwner);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
/// Size: 0x0140 (320 bytes) (0x000080 - 0x000140) align 8 MaxSize: 0x0140
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,381) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x0090   (0x00A8)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	// UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner); // [0xc637e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
/// Size: 0x00F0 (240 bytes) (0x000080 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,382) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0090   (0x0058)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x00E8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	// UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner); // [0xc63cc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityTask_WaitCancel : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,383) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	UAbilityTask_WaitCancel* WaitCancel(UGameplayAbility* OwningAbility) // [0xc62a00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitCancel* (*FuncPtr)(UGameplayAbility*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	void OnLocalCancelCallback() // [0xc62150] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	void OnCancelCallback() // [0xc62060] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitConfirm : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,384) /* FMulticastInlineDelegate */ __um(OnConfirm);                                          // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	UAbilityTask_WaitConfirm* WaitConfirm(UGameplayAbility* OwningAbility) // [0xc62a90] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitConfirm* (*FuncPtr)(UGameplayAbility*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	void OnConfirmCallback(UGameplayAbility* InAbility) // [0xc620a0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(UGameplayAbility*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InAbility);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,385) /* FMulticastInlineDelegate */ __um(OnConfirm);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,386) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(UGameplayAbility* OwningAbility) // [0xc62b20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitConfirmCancel* (*FuncPtr)(UGameplayAbility*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	void OnLocalConfirmCallback() // [0xc62190] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	void OnLocalCancelCallback() // [0xc62170] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	void OnConfirmCallback() // [0xc62130] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	void OnCancelCallback() // [0xc62080] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityTask_WaitDelay : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,387) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	UAbilityTask_WaitDelay* WaitDelay(UGameplayAbility* OwningAbility, float Time) // [0xc62bb0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitDelay* (*FuncPtr)(UGameplayAbility*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, Time);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
/// Size: 0x01B8 (440 bytes) (0x000080 - 0x0001B8) align 8 MaxSize: 0x01B8
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_8[0x128];                                     // 0x0080   (0x0128)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x01A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	void OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle) // [0xc66da0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(UAbilitySystemComponent*, FGameplayEffectSpec&, FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Target, SpecApplied, ActiveHandle);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
/// Size: 0x01D8 (472 bytes) (0x0001B8 - 0x0001D8) align 8 MaxSize: 0x01D8
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	SDK_UNDEFINED(16,388) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x01C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect) // [0xc67e10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitGameplayEffectApplied_Self* (*FuncPtr)(UGameplayAbility*, FGameplayTargetDataFilterHandle, FGameplayTagQuery, FGameplayTagQuery, bool, AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, SourceFilter, SourceTagQuery, TargetTagQuery, TriggerOnce, OptionalExternalOwner, ListenForPeriodicEffect);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect) // [0xc67a40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitGameplayEffectApplied_Self* (*FuncPtr)(UGameplayAbility*, FGameplayTargetDataFilterHandle, FGameplayTagRequirements, FGameplayTagRequirements, bool, AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(OwningAbility, SourceFilter, SourceTagRequirements, TargetTagRequirements, TriggerOnce, OptionalExternalOwner, ListenForPeriodicEffect);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
/// Size: 0x01D8 (472 bytes) (0x0001B8 - 0x0001D8) align 8 MaxSize: 0x01D8
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	SDK_UNDEFINED(16,389) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x01C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect) // [0xc68520] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitGameplayEffectApplied_Target* (*FuncPtr)(UGameplayAbility*, FGameplayTargetDataFilterHandle, FGameplayTagQuery, FGameplayTagQuery, bool, AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, SourceFilter, SourceTagQuery, TargetTagQuery, TriggerOnce, OptionalExternalOwner, ListenForPeriodicEffect);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffects) // [0xc68150] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitGameplayEffectApplied_Target* (*FuncPtr)(UGameplayAbility*, FGameplayTargetDataFilterHandle, FGameplayTagRequirements, FGameplayTagRequirements, bool, AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(OwningAbility, TargetFilter, SourceTagRequirements, TargetTagRequirements, TriggerOnce, OptionalExternalOwner, ListenForPeriodicEffects);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
/// Size: 0x0128 (296 bytes) (0x000080 - 0x000128) align 8 MaxSize: 0x0128
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,390) /* FMulticastInlineDelegate */ __um(bLocked);                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x0090   (0x0088)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0120   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, AActor* OptionalExternalTarget, bool OnlyTriggerOnce) // [0xc68860] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitGameplayEffectBlockedImmunity* (*FuncPtr)(UGameplayAbility*, FGameplayTagRequirements, FGameplayTagRequirements, AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, SourceTagRequirements, TargetTagRequirements, OptionalExternalTarget, OnlyTriggerOnce);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
/// Size: 0x00C0 (192 bytes) (0x000080 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,391) /* FMulticastInlineDelegate */ __um(OnRemoved);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,392) /* FMulticastInlineDelegate */ __um(InvalidHandle);                                      // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x00A0   (0x0020)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle) // [0xc677f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitGameplayEffectRemoved* (*FuncPtr)(UGameplayAbility*, FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, Handle);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo) // [0xc66f00] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayEffectRemovalInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InGameplayEffectRemovalInfo);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,393) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,394) /* FMulticastInlineDelegate */ __um(InvalidHandle);                                      // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle) // [0xc678d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitGameplayEffectStackChange* (*FuncPtr)(UGameplayAbility*, FActiveGameplayEffectHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, Handle);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount) // [0xc66fe0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(FActiveGameplayEffectHandle, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Handle, NewCount, OldCount);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
/// Size: 0x00B0 (176 bytes) (0x000080 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,395) /* FMulticastInlineDelegate */ __um(EventReceived);                                      // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTag, AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact) // [0xc68b20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitGameplayEvent* (*FuncPtr)(UGameplayAbility*, FGameplayTag, AActor*, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, EventTag, OptionalExternalTarget, OnlyTriggerOnce, OnlyMatchExact);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0080   (0x0010)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	void GameplayTagCallback(FGameplayTag Tag, int32_t NewCount) // [0xc66cd0] Native|Public        
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Tag, NewCount);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,396) /* FMulticastInlineDelegate */ __um(Added);                                              // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce) // [0xc68cc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitGameplayTagAdded* (*FuncPtr)(UGameplayAbility*, FGameplayTag, AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, Tag, InOptionalExternalTarget, OnlyTriggerOnce);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,397) /* FMulticastInlineDelegate */ __um(Removed);                                            // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce) // [0xc68e10] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitGameplayTagRemoved* (*FuncPtr)(UGameplayAbility*, FGameplayTag, AActor*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, Tag, InOptionalExternalTarget, OnlyTriggerOnce);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitInputPress : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,398) /* FMulticastInlineDelegate */ __um(OnPress);                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	UAbilityTask_WaitInputPress* WaitInputPress(UGameplayAbility* OwningAbility, bool bTestAlreadyPressed) // [0xc68f60] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitInputPress* (*FuncPtr)(UGameplayAbility*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, bTestAlreadyPressed);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	void OnPressCallback() // [0xc673f0] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitInputRelease : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,399) /* FMulticastInlineDelegate */ __um(OnRelease);                                          // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	UAbilityTask_WaitInputRelease* WaitInputRelease(UGameplayAbility* OwningAbility, bool bTestAlreadyReleased) // [0xc69030] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitInputRelease* (*FuncPtr)(UGameplayAbility*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, bTestAlreadyReleased);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	void OnReleaseCallback() // [0xc67410] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,400) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	// void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode);  // [0xc672e0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	// UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode); // [0xc66a00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UAbilityTask_WaitOverlap : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,401) /* FMulticastInlineDelegate */ __um(OnOverlap);                                          // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	UAbilityTask_WaitOverlap* WaitForOverlap(UGameplayAbility* OwningAbility) // [0xc679b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitOverlap* (*FuncPtr)(UGameplayAbility*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	void OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit) // [0xc67100] Final|Native|Public|HasOutParms|HasDefaults 
	{
		typedef void (*FuncPtr)(UPrimitiveComponent*, AActor*, UPrimitiveComponent*, FVector, FHitResult&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
/// Size: 0x00C0 (192 bytes) (0x000080 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitTargetData : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,402) /* FMulticastInlineDelegate */ __um(ValidData);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,403) /* FMulticastInlineDelegate */ __um(Cancelled);                                          // 0x0090   (0x0010)  
	class UClass*                                      TargetClass;                                                // 0x00A0   (0x0008)  
	class AGameplayAbilityTargetActor*                 TargetActor;                                                // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	// UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, AGameplayAbilityTargetActor* TargetActor); // [0xc69250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	// UAbilityTask_WaitTargetData* WaitTargetData(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, UClass* Class); // [0xc69100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	void OnTargetDataReplicatedCancelledCallback() // [0xc677d0] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag) // [0xc67670] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAbilityTargetDataHandle&, FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Data, ActivationTag);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data) // [0xc67550] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAbilityTargetDataHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Data);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data) // [0xc67430] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayAbilityTargetDataHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Data);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor) // [0xc66c00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UGameplayAbility*, AGameplayAbilityTargetActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(OwningAbility, SpawnedActor);
	}
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	bool BeginSpawningActor(UGameplayAbility* OwningAbility, UClass* Class, AGameplayAbilityTargetActor*& SpawnedActor) // [0xc668e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UGameplayAbility*, UClass*, AGameplayAbilityTargetActor*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(OwningAbility, Class, SpawnedActor);
	}
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,404) /* FMulticastInlineDelegate */ __um(OnVelocityChage);                                    // 0x0080   (0x0010)  
	class UMovementComponent*                          CachedMovementComponent;                                    // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude) // [0xc66ad0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef class UAbilityTask_WaitVelocityChange* (*FuncPtr)(UGameplayAbility*, FVector, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(OwningAbility, Direction, MinimumMagnitude);
	}
};

/// Class /Script/GameplayAbilities.GameplayAbility
/// Size: 0x03B0 (944 bytes) (0x000028 - 0x0003B0) align 8 MaxSize: 0x03B0
class UGameplayAbility : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x80];                                      // 0x0028   (0x0080)  MISSED
	FGameplayTagContainer                              AbilityTags;                                                // 0x00A8   (0x0020)  
	bool                                               bReplicateInputDirectly;                                    // 0x00C8   (0x0001)  
	bool                                               RemoteInstanceEnded;                                        // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CA   (0x0004)  MISSED
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                          // 0x00CE   (0x0001)  
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                           // 0x00CF   (0x0001)  
	bool                                               bServerRespectsRemoteAbilityCancellation;                   // 0x00D0   (0x0001)  
	bool                                               bRetriggerInstancedAbility;                                 // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00D2   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     CurrentActivationInfo;                                      // 0x00D8   (0x0018)  
	FGameplayEventData                                 CurrentEventData;                                           // 0x00F0   (0x00B0)  
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                         // 0x01A0   (0x0001)  
	TEnumAsByte<EGameplayAbilityNetSecurityPolicy>     NetSecurityPolicy;                                          // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x01A2   (0x0006)  MISSED
	class UClass*                                      CostGameplayEffectClass;                                    // 0x01A8   (0x0008)  
	TArray<FAbilityTriggerData>                        AbilityTriggers;                                            // 0x01B0   (0x0010)  
	class UClass*                                      CooldownGameplayEffectClass;                                // 0x01C0   (0x0008)  
	FGameplayTagContainer                              CancelAbilitiesWithTag;                                     // 0x01C8   (0x0020)  
	FGameplayTagContainer                              BlockAbilitiesWithTag;                                      // 0x01E8   (0x0020)  
	FGameplayTagContainer                              ActivationOwnedTags;                                        // 0x0208   (0x0020)  
	FGameplayTagContainer                              ActivationRequiredTags;                                     // 0x0228   (0x0020)  
	FGameplayTagContainer                              ActivationBlockedTags;                                      // 0x0248   (0x0020)  
	FGameplayTagContainer                              SourceRequiredTags;                                         // 0x0268   (0x0020)  
	FGameplayTagContainer                              SourceBlockedTags;                                          // 0x0288   (0x0020)  
	FGameplayTagContainer                              TargetRequiredTags;                                         // 0x02A8   (0x0020)  
	FGameplayTagContainer                              TargetBlockedTags;                                          // 0x02C8   (0x0020)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x02E8   (0x0020)  MISSED
	TArray<class UGameplayTask*>                       ActiveTasks;                                                // 0x0308   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0318   (0x0010)  MISSED
	class UAnimMontage*                                CurrentMontage;                                             // 0x0328   (0x0008)  
	unsigned char                                      UnknownData06_6[0x60];                                      // 0x0330   (0x0060)  MISSED
	bool                                               bIsActive;                                                  // 0x0390   (0x0001)  
	bool                                               bIsAbilityEnding;                                           // 0x0391   (0x0001)  
	bool                                               bIsCancelable;                                              // 0x0392   (0x0001)  
	bool                                               bIsBlockingOtherAbilities;                                  // 0x0393   (0x0001)  
	unsigned char                                      UnknownData07_6[0x14];                                      // 0x0394   (0x0014)  MISSED
	bool                                               bMarkPendingKillOnAbilityEnd;                               // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData08_7[0x7];                                       // 0x03A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities) // [0xc71940] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(bShouldBlockAbilities);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.SetCanBeCanceled
	void SetCanBeCanceled(bool bCanBeCanceled) // [0xc718b0] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(bCanBeCanceled);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.SendGameplayEvent
	void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload) // [0xc715e0] Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag, FGameplayEventData);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(EventTag, Payload);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	void RemoveGrantedByEffect() // [0xc715c0] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.MontageStop
	void MontageStop(float OverrideBlendOutTime) // [0xc71540] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(OverrideBlendOutTime);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName) // [0xc71470] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(FromSectionName, ToSectionName);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.MontageJumpToSection
	void MontageJumpToSection(FName SectionName) // [0xc713e0] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(SectionName);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName) // [0xc712e0] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayAbilityTargetingLocationInfo (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(SocketName);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor() // [0xc71240] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayAbilityTargetingLocationInfo (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(UClass* GameplayEffectClass, float level) // [0xc710e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FGameplayEffectSpecHandle (*FuncPtr)(UClass*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(GameplayEffectClass, level);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) // [0x2438a30] Event|Protected|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)(FGameplayAbilityActorInfo, FGameplayEventData);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(ActorInfo, Payload);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag) // [0xc71050] Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(GameplayCueTag);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_OnEndAbility
	void K2_OnEndAbility(bool bWasCancelled) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(bWasCancelled);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_HasAuthority
	bool K2_HasAuthority() // [0xc71020] Final|Native|Public|BlueprintCallable|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters) // [0xc70e60] Native|Protected|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(GameplayCueTag, GameplayCueParameters);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context) // [0xc70d20] Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag, FGameplayEffectContextHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(GameplayCueTag, Context);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbility
	void K2_EndAbility() // [0xc70d00] Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitExecute
	void K2_CommitExecute() // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent) // [0xc70c60] Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(BroadcastCommitEvent);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown) // [0xc70b70] Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(BroadcastCommitEvent, ForceCooldown);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbility
	bool K2_CommitAbility() // [0xc70b40] Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	bool K2_CheckAbilityCost() // [0xc70b10] Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	bool K2_CheckAbilityCooldown() // [0xc70ae0] Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CancelAbility
	void K2_CancelAbility() // [0xc70ac0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags) // [0x2438a30] Event|Protected|HasOutParms|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)(FGameplayAbilityActorInfo, FGameplayAbilitySpecHandle, FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(ActorInfo, Handle, RelevantTags);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	// TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // [0xc708a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle) // [0xc707b0] Final|Native|Protected|BlueprintCallable 
	{
		typedef FActiveGameplayEffectHandle (*FuncPtr)(FGameplayEffectSpecHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(EffectSpecHandle);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd) // [0xc705a0] Native|Protected|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag, FGameplayCueParameters&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		func(GameplayCueTag, GameplayCueParameter, bRemoveOnAbilityEnd);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd) // [0xc70420] Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTag, FGameplayEffectContextHandle, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		func(GameplayCueTag, Context, bRemoveOnAbilityEnd);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData) // [0x2438a30] Event|Protected|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayEventData&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func(EventData);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbility
	void K2_ActivateAbility() // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.IsLocallyControlled
	bool IsLocallyControlled() // [0xc703f0] Final|Native|Public|BlueprintCallable|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	void InvalidateClientPredictionKey() // [0xc703d0] Final|Native|Public|BlueprintCallable|Const 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetSourceObject_BP
	UObject* GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo) // [0xc702a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UObject* (*FuncPtr)(FGameplayAbilitySpecHandle, FGameplayAbilityActorInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func(Handle, ActorInfo);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	USkeletalMeshComponent* GetOwningComponentFromActorInfo() // [0xc70270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class USkeletalMeshComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	AActor* GetOwningActorFromActorInfo() // [0xc70240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class AActor* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	FGameplayEffectContextHandle GetGrantedByEffectContext() // [0xc701c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FGameplayEffectContextHandle (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	UObject* GetCurrentSourceObject() // [0xc70190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UObject* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentMontage
	UAnimMontage* GetCurrentMontage() // [0xc70160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UAnimMontage* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	float GetCooldownTimeRemaining() // [0xc70130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetContextFromOwner
	FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData) // [0xc6ffb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FGameplayEffectContextHandle (*FuncPtr)(FGameplayAbilityTargetDataHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[40]);
		return func(OptionalTargetData);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	AActor* GetAvatarActorFromActorInfo() // [0xc6ff80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class AActor* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetActorInfo
	FGameplayAbilityActorInfo GetActorInfo() // [0xc6ff10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FGameplayAbilityActorInfo (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo() // [0xc6fee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UAbilitySystemComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
	int32_t GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo) // [0xc6fdb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FGameplayAbilitySpecHandle, FGameplayAbilityActorInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		return func(Handle, ActorInfo);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel
	int32_t GetAbilityLevel() // [0xc6fd80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		return func();
	}
	// Function /Script/GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	void EndTaskByInstanceName(FName InstanceName) // [0xc6fcf0] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[46]);
		func(InstanceName);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.EndAbilityState
	void EndAbilityState(FName OptionalStateNameToEnd) // [0xc6fc60] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[47]);
		func(OptionalStateNameToEnd);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask) // [0xc6fb90] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[48]);
		func(InstanceName, bEndTask);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	void CancelTaskByInstanceName(FName InstanceName) // [0xc6fb00] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		func(InstanceName);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove) // [0xc6fa20] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FActiveGameplayEffectHandle, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		func(Handle, StacksToRemove);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove) // [0xc6f900] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		func(WithGrantedTags, StacksToRemove);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove) // [0xc6f7e0] Final|Native|Protected|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		func(WithAssetTags, StacksToRemove);
	}
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	// TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0xc6f5b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks) // [0xc6f490] Final|Native|Protected|BlueprintCallable 
	{
		typedef FActiveGameplayEffectHandle (*FuncPtr)(UClass*, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		return func(GameplayEffectClass, GameplayEffectLevel, Stacks);
	}
};

/// Class /Script/GameplayAbilities.GameplayAbility_CharacterJump
/// Size: 0x03B0 (944 bytes) (0x0003B0 - 0x0003B0) align 8 MaxSize: 0x03B0
class UGameplayAbility_CharacterJump : public UGameplayAbility
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbility_Montage
/// Size: 0x03E8 (1000 bytes) (0x0003B0 - 0x0003E8) align 8 MaxSize: 0x03E8
class UGameplayAbility_Montage : public UGameplayAbility
{ 
public:
	class UAnimMontage*                                MontageToPlay;                                              // 0x03B0   (0x0008)  
	float                                              PlayRate;                                                   // 0x03B8   (0x0004)  
	FName                                              SectionName;                                                // 0x03BC   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03C4   (0x0004)  MISSED
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                        // 0x03C8   (0x0010)  
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                              // 0x03D8   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayAbilityBlueprint
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UGameplayAbilityBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbilitySet
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayAbilitySet : public UDataAsset
{ 
public:
	TArray<FGameplayAbilityBindInfo>                   Abilities;                                                  // 0x0030   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
/// Size: 0x0340 (832 bytes) (0x000228 - 0x000340) align 16 MaxSize: 0x0338
class AGameplayAbilityTargetActor : public AActor
{ 
public:
	bool                                               ShouldProduceTargetDataOnServer;                            // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0229   (0x0007)  MISSED
	FGameplayAbilityTargetingLocationInfo              StartLocation;                                              // 0x0230   (0x0070)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x02A0   (0x0030)  MISSED
	class APlayerController*                           MasterPC;                                                   // 0x02D0   (0x0008)  
	class UGameplayAbility*                            OwningAbility;                                              // 0x02D8   (0x0008)  
	bool                                               bDestroyOnConfirmation;                                     // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02E1   (0x0007)  MISSED
	class AActor*                                      SourceActor;                                                // 0x02E8   (0x0008)  
	FWorldReticleParameters                            ReticleParams;                                              // 0x02F0   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x02FC   (0x0004)  MISSED
	class UClass*                                      ReticleClass;                                               // 0x0300   (0x0008)  
	FGameplayTargetDataFilterHandle                    Filter;                                                     // 0x0308   (0x0010)  
	bool                                               bDebug;                                                     // 0x0318   (0x0001)  
	unsigned char                                      UnknownData04_6[0x17];                                      // 0x0319   (0x0017)  MISSED
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                    // 0x0330   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	void ConfirmTargeting() // [0xc76210] Native|Public        
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	void CancelTargeting() // [0xc761f0] Native|Public        
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
/// Size: 0x0350 (848 bytes) (0x000338 - 0x000350) align 16 MaxSize: 0x0350
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{ 
public:
	float                                              MaxRange;                                                   // 0x0338   (0x0004)  
	FCollisionProfileName                              TraceProfile;                                               // 0x033C   (0x0008)  
	bool                                               bTraceAffectsAimPitch;                                      // 0x0344   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0345   (0x000B)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
/// Size: 0x0370 (880 bytes) (0x000350 - 0x000370) align 16 MaxSize: 0x0370
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
	float                                              CollisionRadius;                                            // 0x0350   (0x0004)  
	float                                              CollisionHeight;                                            // 0x0354   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0358   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
/// Size: 0x0390 (912 bytes) (0x000370 - 0x000390) align 16 MaxSize: 0x0390
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{ 
public:
	class UClass*                                      PlacedActorClass;                                           // 0x0370   (0x0008)  
	class UMaterialInterface*                          PlacedActorMaterial;                                        // 0x0378   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0380   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
/// Size: 0x0340 (832 bytes) (0x000338 - 0x000340) align 16 MaxSize: 0x0340
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{ 
public:
	float                                              Radius;                                                     // 0x0338   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x033C   (0x0004)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
/// Size: 0x0350 (848 bytes) (0x000350 - 0x000350) align 16 MaxSize: 0x0350
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle
/// Size: 0x0248 (584 bytes) (0x000228 - 0x000248) align 8 MaxSize: 0x0248
class AGameplayAbilityWorldReticle : public AActor
{ 
public:
	FWorldReticleParameters                            Parameters;                                                 // 0x0228   (0x000C)  
	bool                                               bFaceOwnerFlat;                                             // 0x0234   (0x0001)  
	bool                                               bSnapToTargetedActor;                                       // 0x0235   (0x0001)  
	bool                                               bIsTargetValid;                                             // 0x0236   (0x0001)  
	bool                                               bIsTargetAnActor;                                           // 0x0237   (0x0001)  
	class APlayerController*                           MasterPC;                                                   // 0x0238   (0x0008)  
	class AActor*                                      TargetingActor;                                             // 0x0240   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	void SetReticleMaterialParamVector(FName ParamName, FVector Value) // [0x2438a30] Event|Public|HasDefaults|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FName, FVector);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(ParamName, Value);
	}
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	void SetReticleMaterialParamFloat(FName ParamName, float Value) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FName, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(ParamName, Value);
	}
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	void OnValidTargetChanged(bool bNewValue) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(bNewValue);
	}
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	void OnTargetingAnActor(bool bNewValue) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(bNewValue);
	}
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	void OnParametersInitialized() // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	void FaceTowardSource(bool bFaceIn2D) // [0xc76230] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(bFaceIn2D);
	}
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
/// Size: 0x0260 (608 bytes) (0x000248 - 0x000260) align 8 MaxSize: 0x0260
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{ 
public:
	class UCapsuleComponent*                           CollisionComponent;                                         // 0x0248   (0x0008)  
	TArray<class UActorComponent*>                     VisualizationComponents;                                    // 0x0250   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayCueInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCueInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	void ForwardGameplayCueToParent() // [0xc762c0] BlueprintCosmetic|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	// void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters);               // [0x2438a30] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayAbilities.GameplayCueManager
/// Size: 0x0310 (784 bytes) (0x000030 - 0x000310) align 8 MaxSize: 0x0310
class UGameplayCueManager : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	FGameplayCueObjectLibrary                          RuntimeGameplayCueObjectLibrary;                            // 0x0048   (0x0050)  
	FGameplayCueObjectLibrary                          EditorGameplayCueObjectLibrary;                             // 0x0098   (0x0050)  
	unsigned char                                      UnknownData01_6[0x1C8];                                     // 0x00E8   (0x01C8)  MISSED
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                             // 0x02B0   (0x0010)  
	TArray<class UClass*>                              GameplayCueClassesForPreallocation;                         // 0x02C0   (0x0010)  
	TArray<FGameplayCuePendingExecute>                 PendingExecuteCues;                                         // 0x02D0   (0x0010)  
	int32_t                                            GameplayCueSendContextCount;                                // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02E4   (0x0004)  MISSED
	TArray<FPreallocationInfo>                         PreallocationInfoList_Internal;                             // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x02F8   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
/// Size: 0x0288 (648 bytes) (0x000228 - 0x000288) align 8 MaxSize: 0x0288
class AGameplayCueNotify_Actor : public AActor
{ 
public:
	bool                                               bAutoDestroyOnRemove;                                       // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0229   (0x0003)  MISSED
	float                                              AutoDestroyDelay;                                           // 0x022C   (0x0004)  
	bool                                               WarnIfTimelineIsStillRunning;                               // 0x0230   (0x0001)  
	bool                                               WarnIfLatentActionIsStillRunning;                           // 0x0231   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0232   (0x0002)  MISSED
	FGameplayTag                                       GameplayCueTag;                                             // 0x0234   (0x0008)  
	FName                                              GameplayCueName;                                            // 0x023C   (0x0008)  
	bool                                               bAutoAttachToOwner;                                         // 0x0244   (0x0001)  
	bool                                               IsOverride;                                                 // 0x0245   (0x0001)  
	bool                                               bUniqueInstancePerInstigator;                               // 0x0246   (0x0001)  
	bool                                               bUniqueInstancePerSourceObject;                             // 0x0247   (0x0001)  
	bool                                               bAllowMultipleOnActiveEvents;                               // 0x0248   (0x0001)  
	bool                                               bAllowMultipleWhileActiveEvents;                            // 0x0249   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x024A   (0x0002)  MISSED
	int32_t                                            NumPreallocatedInstances;                                   // 0x024C   (0x0004)  
	unsigned char                                      UnknownData03_7[0x38];                                      // 0x0250   (0x0038)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters) // [0xc7c6b0] Native|Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef bool (*FuncPtr)(AActor*, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(MyTarget, Parameters);
	}
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters) // [0xc7c310] Native|Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef bool (*FuncPtr)(AActor*, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(MyTarget, Parameters);
	}
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	void OnOwnerDestroyed(AActor* DestroyedActor) // [0xc7c280] Native|Public        
	{
		typedef void (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(DestroyedActor);
	}
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters) // [0xc7bee0] Native|Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef bool (*FuncPtr)(AActor*, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(MyTarget, Parameters);
	}
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnActive
	bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters) // [0xc7bb40] Native|Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef bool (*FuncPtr)(AActor*, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(MyTarget, Parameters);
	}
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x2438a30] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	void K2_EndGameplayCue() // [0xc7bb20] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func();
	}
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Static
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayCueNotify_Static : public UObject
{ 
public:
	FGameplayTag                                       GameplayCueTag;                                             // 0x0028   (0x0008)  
	FName                                              GameplayCueName;                                            // 0x0030   (0x0008)  
	bool                                               IsOverride;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.WhileActive
	bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters) // [0xc7c880] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(AActor*, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(MyTarget, Parameters);
	}
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnRemove
	bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters) // [0xc7c4e0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(AActor*, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(MyTarget, Parameters);
	}
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnExecute
	bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters) // [0xc7c0b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(AActor*, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(MyTarget, Parameters);
	}
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnActive
	bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters) // [0xc7bd10] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(AActor*, FGameplayCueParameters&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(MyTarget, Parameters);
	}
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x2438a30] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_HitImpact
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{ 
public:
	class USoundBase*                                  Sound;                                                      // 0x0040   (0x0008)  
	class UParticleSystem*                             ParticleSystem;                                             // 0x0048   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayCueSet
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UGameplayCueSet : public UDataAsset
{ 
public:
	TArray<FGameplayCueNotifyData>                     GameplayCueData;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCueTranslator : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator_Test
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffect
/// Size: 0x0800 (2048 bytes) (0x000028 - 0x000800) align 8 MaxSize: 0x0800
class UGameplayEffect : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	EGameplayEffectDurationType                        DurationPolicy;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FGameplayEffectModifierMagnitude                   DurationMagnitude;                                          // 0x0038   (0x01E0)  
	FScalableFloat                                     Period;                                                     // 0x0218   (0x0028)  
	bool                                               bExecutePeriodicEffectOnApplication;                        // 0x0240   (0x0001)  
	EGameplayEffectPeriodInhibitionRemovedPolicy       PeriodicInhibitionPolicy;                                   // 0x0241   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0242   (0x0006)  MISSED
	TArray<FGameplayModifierInfo>                      Modifiers;                                                  // 0x0248   (0x0010)  
	TArray<FGameplayEffectExecutionDefinition>         Executions;                                                 // 0x0258   (0x0010)  
	FScalableFloat                                     ChanceToApplyToTarget;                                      // 0x0268   (0x0028)  
	TArray<class UClass*>                              ApplicationRequirements;                                    // 0x0290   (0x0010)  
	TArray<class UClass*>                              TargetEffectClasses;                                        // 0x02A0   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x02B0   (0x0010)  
	TArray<class UClass*>                              OverflowEffects;                                            // 0x02C0   (0x0010)  
	bool                                               bDenyOverflowApplication;                                   // 0x02D0   (0x0001)  
	bool                                               bClearStackOnOverflow;                                      // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x02D2   (0x0006)  MISSED
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                           // 0x02D8   (0x0010)  
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                             // 0x02E8   (0x0010)  
	bool                                               bRequireModifierSuccessToTriggerCues;                       // 0x02F8   (0x0001)  
	bool                                               bSuppressStackingCues;                                      // 0x02F9   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x02FA   (0x0006)  MISSED
	TArray<FGameplayEffectCue>                         GameplayCues;                                               // 0x0300   (0x0010)  
	class UGameplayEffectUIData*                       UIData;                                                     // 0x0310   (0x0008)  
	FInheritedTagContainer                             InheritableGameplayEffectTags;                              // 0x0318   (0x0060)  
	FInheritedTagContainer                             InheritableOwnedTagsContainer;                              // 0x0378   (0x0060)  
	FGameplayTagRequirements                           OngoingTagRequirements;                                     // 0x03D8   (0x0040)  
	FGameplayTagRequirements                           ApplicationTagRequirements;                                 // 0x0418   (0x0040)  
	FGameplayTagRequirements                           RemovalTagRequirements;                                     // 0x0458   (0x0040)  
	FInheritedTagContainer                             RemoveGameplayEffectsWithTags;                              // 0x0498   (0x0060)  
	FGameplayTagRequirements                           GrantedApplicationImmunityTags;                             // 0x04F8   (0x0040)  
	FGameplayEffectQuery                               GrantedApplicationImmunityQuery;                            // 0x0538   (0x0150)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0688   (0x0008)  MISSED
	FGameplayEffectQuery                               RemoveGameplayEffectQuery;                                  // 0x0690   (0x0150)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x07E0   (0x0001)  MISSED
	EGameplayEffectStackingType                        StackingType;                                               // 0x07E1   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x07E2   (0x0002)  MISSED
	int32_t                                            StackLimitCount;                                            // 0x07E4   (0x0004)  
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                                 // 0x07E8   (0x0001)  
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                     // 0x07E9   (0x0001)  
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                      // 0x07EA   (0x0001)  
	unsigned char                                      UnknownData08_6[0x5];                                       // 0x07EB   (0x0005)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilities;                                           // 0x07F0   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCalculation
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGameplayEffectCalculation : public UObject
{ 
public:
	TArray<FGameplayEffectAttributeCaptureDefinition>  RelevantAttributesToCapture;                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayEffectCustomApplicationRequirement : public UObject
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	bool CanApplyGameplayEffect(UGameplayEffect* GameplayEffect, FGameplayEffectSpec& Spec, UAbilitySystemComponent* ASC) // [0xc81620] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)(UGameplayEffect*, FGameplayEffectSpec&, UAbilitySystemComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(GameplayEffect, Spec, ASC);
	}
};

/// Class /Script/GameplayAbilities.GameplayEffectExecutionCalculation
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bRequiresPassedInTags;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	void Execute(FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) // [0xc81780] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	{
		typedef void (*FuncPtr)(FGameplayEffectCustomExecutionParameters&, FGameplayEffectCustomExecutionOutput&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(ExecutionParams, OutExecutionOutput);
	}
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayEffectUIData : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData_TextOnly
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{ 
public:
	FText                                              Description;                                                // 0x0028   (0x0018)  
};

/// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0xc81550] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Script/GameplayAbilities.GameplayTagReponseTable
/// Size: 0x01E8 (488 bytes) (0x000030 - 0x0001E8) align 8 MaxSize: 0x01E8
class UGameplayTagReponseTable : public UDataAsset
{ 
public:
	TArray<FGameplayTagResponseTableEntry>             Entries;                                                    // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x1A8];                                     // 0x0040   (0x01A8)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	void TagResponseEvent(FGameplayTag Tag, int32_t NewCount, UAbilitySystemComponent* ASC, int32_t idx) // [0xc81980] Final|Native|Protected 
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t, UAbilitySystemComponent*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Tag, NewCount, ASC, idx);
	}
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTriggerSection
/// Size: 0x0188 (392 bytes) (0x000100 - 0x000188) align 8 MaxSize: 0x0188
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{ 
public:
	FMovieSceneGameplayCueChannel                      Channel;                                                    // 0x0100   (0x0088)  
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueSection
/// Size: 0x0178 (376 bytes) (0x000100 - 0x000178) align 8 MaxSize: 0x0178
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{ 
public:
	FMovieSceneGameplayCueKey                          Cue;                                                        // 0x0100   (0x0078)  
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTrack
/// Size: 0x00A0 (160 bytes) (0x000090 - 0x0000A0) align 8 MaxSize: 0x00A0
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
	// void SetSequencerTrackHandler(FDelegateProperty InGameplayCueTrackHandler);                                              // [0xc818f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.TickableAttributeSetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTickableAttributeSetInterface : public UInterface
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UAbilityAsync) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAbilityAsync_WaitGameplayEffectApplied) == 0x00F8); // 248 bytes (0x000038 - 0x0000F8)
static_assert(sizeof(UAbilityAsync_WaitGameplayEvent) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UAbilityAsync_WaitGameplayTag) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UAbilityAsync_WaitGameplayTagAdded) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UAbilityAsync_WaitGameplayTagRemoved) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UAbilitySystemBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAttributeDefaults) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayAbilitySpecHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPredictionKey) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayAbilityActivationInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FActiveGameplayEffectHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGameplayAbilitySpec) == 0x00E0); // 224 bytes (0x00000C - 0x0000E0)
static_assert(sizeof(FGameplayAbilitySpecContainer) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(FGameplayAbilityRepAnimMontage) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGameplayAbilityLocalAnimMontage) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayAttribute) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGameplayEffectModifiedAttribute) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGameplayEffectAttributeCaptureDefinition) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGameplayEffectAttributeCaptureSpec) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGameplayEffectAttributeCaptureSpecContainer) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FTagContainerAggregator) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FModifierSpec) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FScalableFloat) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayAbilitySpecDef) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FGameplayEffectContextHandle) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayEffectSpec) == 0x0298); // 664 bytes (0x000000 - 0x000298)
static_assert(sizeof(FActiveGameplayEffect) == 0x0368); // 872 bytes (0x00000C - 0x000368)
static_assert(sizeof(FActiveGameplayEffectsContainer) == 0x0478); // 1144 bytes (0x000108 - 0x000478)
static_assert(sizeof(FGameplayCueParameters) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FActiveGameplayCue) == 0x00F0); // 240 bytes (0x00000C - 0x0000F0)
static_assert(sizeof(FActiveGameplayCueContainer) == 0x0128); // 296 bytes (0x000108 - 0x000128)
static_assert(sizeof(FMinimalReplicationTagCountMap) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FReplicatedPredictionKeyItem) == 0x0020); // 32 bytes (0x00000C - 0x000020)
static_assert(sizeof(FReplicatedPredictionKeyMap) == 0x0118); // 280 bytes (0x000108 - 0x000118)
static_assert(sizeof(UAbilitySystemComponent) == 0x1308); // 4872 bytes (0x000120 - 0x001308)
static_assert(sizeof(AAbilitySystemDebugHUD) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(FNetSerializeScriptStructCache) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAbilitySystemGlobals) == 0x0260); // 608 bytes (0x000028 - 0x000260)
static_assert(sizeof(UAbilitySystemInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAbilitySystemReplicationProxyInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAttributeSet) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAbilitySystemTestAttributeSet) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(AAbilitySystemTestPawn) == 0x02D0); // 720 bytes (0x0002B0 - 0x0002D0)
static_assert(sizeof(UAbilityTask) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(UAbilityTask_ApplyRootMotion_Base) == 0x00B8); // 184 bytes (0x000080 - 0x0000B8)
static_assert(sizeof(UAbilityTask_ApplyRootMotionConstantForce) == 0x00F0); // 240 bytes (0x0000B8 - 0x0000F0)
static_assert(sizeof(UAbilityTask_ApplyRootMotionJumpForce) == 0x0110); // 272 bytes (0x0000B8 - 0x000110)
static_assert(sizeof(UAbilityTask_ApplyRootMotionMoveToActorForce) == 0x0130); // 304 bytes (0x0000B8 - 0x000130)
static_assert(sizeof(UAbilityTask_ApplyRootMotionMoveToForce) == 0x0108); // 264 bytes (0x0000B8 - 0x000108)
static_assert(sizeof(UAbilityTask_ApplyRootMotionRadialForce) == 0x0110); // 272 bytes (0x0000B8 - 0x000110)
static_assert(sizeof(UAbilityTask_MoveToLocation) == 0x00C8); // 200 bytes (0x000080 - 0x0000C8)
static_assert(sizeof(UAbilityTask_NetworkSyncPoint) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(sizeof(UAbilityTask_PlayMontageAndWait) == 0x0108); // 264 bytes (0x000080 - 0x000108)
static_assert(sizeof(UAbilityTask_Repeat) == 0x00B8); // 184 bytes (0x000080 - 0x0000B8)
static_assert(sizeof(UAbilityTask_SpawnActor) == 0x00C8); // 200 bytes (0x000080 - 0x0000C8)
static_assert(sizeof(UAbilityTask_StartAbilityState) == 0x00B8); // 184 bytes (0x000080 - 0x0000B8)
static_assert(sizeof(UAbilityTask_VisualizeTargeting) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(UAbilityTask_WaitAbilityActivate) == 0x0138); // 312 bytes (0x000080 - 0x000138)
static_assert(sizeof(UAbilityTask_WaitAbilityCommit) == 0x00F8); // 248 bytes (0x000080 - 0x0000F8)
static_assert(sizeof(UAbilityTask_WaitAttributeChange) == 0x00F8); // 248 bytes (0x000080 - 0x0000F8)
static_assert(sizeof(UAbilityTask_WaitAttributeChangeRatioThreshold) == 0x0140); // 320 bytes (0x000080 - 0x000140)
static_assert(sizeof(UAbilityTask_WaitAttributeChangeThreshold) == 0x00F0); // 240 bytes (0x000080 - 0x0000F0)
static_assert(sizeof(UAbilityTask_WaitCancel) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(sizeof(UAbilityTask_WaitConfirm) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(UAbilityTask_WaitConfirmCancel) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(UAbilityTask_WaitDelay) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectApplied) == 0x01B8); // 440 bytes (0x000080 - 0x0001B8)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectApplied_Self) == 0x01D8); // 472 bytes (0x0001B8 - 0x0001D8)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectApplied_Target) == 0x01D8); // 472 bytes (0x0001B8 - 0x0001D8)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectBlockedImmunity) == 0x0128); // 296 bytes (0x000080 - 0x000128)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectRemoved) == 0x00C0); // 192 bytes (0x000080 - 0x0000C0)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectStackChange) == 0x00B8); // 184 bytes (0x000080 - 0x0000B8)
static_assert(sizeof(UAbilityTask_WaitGameplayEvent) == 0x00B0); // 176 bytes (0x000080 - 0x0000B0)
static_assert(sizeof(UAbilityTask_WaitGameplayTag) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(UAbilityTask_WaitGameplayTagAdded) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UAbilityTask_WaitGameplayTagRemoved) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UAbilityTask_WaitInputPress) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(UAbilityTask_WaitInputRelease) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(UAbilityTask_WaitMovementModeChange) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(UAbilityTask_WaitOverlap) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UAbilityTask_WaitTargetData) == 0x00C0); // 192 bytes (0x000080 - 0x0000C0)
static_assert(sizeof(UAbilityTask_WaitVelocityChange) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(FGameplayAbilityTargetDataHandle) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayEventData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FAbilityTriggerData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UGameplayAbility) == 0x03B0); // 944 bytes (0x000028 - 0x0003B0)
static_assert(sizeof(UGameplayAbility_CharacterJump) == 0x03B0); // 944 bytes (0x0003B0 - 0x0003B0)
static_assert(sizeof(UGameplayAbility_Montage) == 0x03E8); // 1000 bytes (0x0003B0 - 0x0003E8)
static_assert(sizeof(UGameplayAbilityBlueprint) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FGameplayAbilityBindInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGameplayAbilitySet) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FGameplayAbilityTargetingLocationInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FWorldReticleParameters) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FGameplayTargetDataFilterHandle) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AGameplayAbilityTargetActor) == 0x0338); // 824 bytes (0x000228 - 0x000338)
static_assert(sizeof(AGameplayAbilityTargetActor_Trace) == 0x0350); // 848 bytes (0x000338 - 0x000350)
static_assert(sizeof(AGameplayAbilityTargetActor_GroundTrace) == 0x0370); // 880 bytes (0x000350 - 0x000370)
static_assert(sizeof(AGameplayAbilityTargetActor_ActorPlacement) == 0x0390); // 912 bytes (0x000370 - 0x000390)
static_assert(sizeof(AGameplayAbilityTargetActor_Radius) == 0x0340); // 832 bytes (0x000338 - 0x000340)
static_assert(sizeof(AGameplayAbilityTargetActor_SingleLineTrace) == 0x0350); // 848 bytes (0x000350 - 0x000350)
static_assert(sizeof(AGameplayAbilityWorldReticle) == 0x0248); // 584 bytes (0x000228 - 0x000248)
static_assert(sizeof(AGameplayAbilityWorldReticle_ActorVisualization) == 0x0260); // 608 bytes (0x000248 - 0x000260)
static_assert(sizeof(UGameplayCueInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayCueObjectLibrary) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGameplayEffectSpecForRPC) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FGameplayCuePendingExecute) == 0x0170); // 368 bytes (0x000000 - 0x000170)
static_assert(sizeof(FPreallocationInfo) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UGameplayCueManager) == 0x0310); // 784 bytes (0x000030 - 0x000310)
static_assert(sizeof(AGameplayCueNotify_Actor) == 0x0288); // 648 bytes (0x000228 - 0x000288)
static_assert(sizeof(UGameplayCueNotify_Static) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGameplayCueNotify_HitImpact) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FGameplayCueNotifyData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UGameplayCueSet) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UGameplayCueTranslator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayCueTranslator_Test) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAttributeBasedFloat) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FCustomCalculationBasedFloat) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FSetByCallerFloat) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayEffectModifierMagnitude) == 0x01E0); // 480 bytes (0x000000 - 0x0001E0)
static_assert(sizeof(FGameplayModEvaluationChannelSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGameplayTagRequirements) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGameplayModifierInfo) == 0x02D0); // 720 bytes (0x000000 - 0x0002D0)
static_assert(sizeof(FGameplayEffectExecutionScopedModifierInfo) == 0x02B8); // 696 bytes (0x000000 - 0x0002B8)
static_assert(sizeof(FConditionalGameplayEffect) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayEffectExecutionDefinition) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FGameplayEffectCue) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FInheritedTagContainer) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FGameplayEffectQuery) == 0x0150); // 336 bytes (0x000000 - 0x000150)
static_assert(sizeof(UGameplayEffect) == 0x0800); // 2048 bytes (0x000028 - 0x000800)
static_assert(sizeof(UGameplayEffectCalculation) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGameplayEffectCustomApplicationRequirement) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayEffectExecutionCalculation) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGameplayEffectUIData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayEffectUIData_TextOnly) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGameplayModMagnitudeCalculation) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FGameplayTagReponsePair) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayTagResponseTableEntry) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UGameplayTagReponseTable) == 0x01E8); // 488 bytes (0x000030 - 0x0001E8)
static_assert(sizeof(FGameplayCueTag) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneGameplayCueKey) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FMovieSceneGameplayCueChannel) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(UMovieSceneGameplayCueTriggerSection) == 0x0188); // 392 bytes (0x000100 - 0x000188)
static_assert(sizeof(UMovieSceneGameplayCueSection) == 0x0178); // 376 bytes (0x000100 - 0x000178)
static_assert(sizeof(UMovieSceneGameplayCueTrack) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(sizeof(UTickableAttributeSetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayEffectSpecHandle) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayEffectRemovalInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FServerAbilityRPCBatch) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAbilityEndedData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAttributeMetaData) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FGameplayAttributeData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayTargetDataFilter) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayAbilityTargetData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGameplayAbilityTargetData_SingleTargetHit) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FGameplayAbilityTargetData_ActorArray) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FGameplayAbilityTargetData_LocationInfo) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FGameplayAbilitySpecHandleAndPredictionKey) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAbilityTaskDebugMessage) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayAbilityActorInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMinimalGameplayCueReplicationProxy) == 0x0290); // 656 bytes (0x000000 - 0x000290)
static_assert(sizeof(FGameplayCueTranslationLink) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayCueTranslatorNodeIndex) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FGameplayCueTranslatorNode) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FGameplayCueTranslationManager) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FActiveGameplayEffectQuery) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FGameplayModifierEvaluatedData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGameplayEffectCustomExecutionOutput) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayEffectCustomExecutionParameters) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FGameplayTagBlueprintPropertyMapping) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FGameplayTagBlueprintPropertyMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayEffectContext) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(offsetof(FAttributeDefaults, Attributes) == 0x0000);
static_assert(offsetof(FAttributeDefaults, DefaultStartingTable) == 0x0008);
static_assert(offsetof(FPredictionKey, PredictiveConnection) == 0x0000);
static_assert(offsetof(FGameplayAbilityActivationInfo, ActivationMode) == 0x0000);
static_assert(offsetof(FGameplayAbilityActivationInfo, PredictionKeyWhenActivated) == 0x0008);
static_assert(offsetof(FGameplayAbilitySpec, Handle) == 0x000C);
static_assert(offsetof(FGameplayAbilitySpec, Ability) == 0x0010);
static_assert(offsetof(FGameplayAbilitySpec, SourceObject) == 0x0020);
static_assert(offsetof(FGameplayAbilitySpec, ActivationInfo) == 0x0030);
static_assert(offsetof(FGameplayAbilitySpec, DynamicAbilityTags) == 0x0048);
static_assert(offsetof(FGameplayAbilitySpec, NonReplicatedInstances) == 0x0068);
static_assert(offsetof(FGameplayAbilitySpec, ReplicatedInstances) == 0x0078);
static_assert(offsetof(FGameplayAbilitySpec, GameplayEffectHandle) == 0x0088);
static_assert(offsetof(FGameplayAbilitySpecContainer, Items) == 0x0108);
static_assert(offsetof(FGameplayAbilitySpecContainer, Owner) == 0x0118);
static_assert(offsetof(FGameplayAbilityRepAnimMontage, AnimMontage) == 0x0000);
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PredictionKey) == 0x0018);
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimMontage) == 0x0000);
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, PredictionKey) == 0x0010);
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimatingAbility) == 0x0020);
static_assert(offsetof(FGameplayAttribute, AttributeName) == 0x0000);
static_assert(offsetof(FGameplayAttribute, AttributeOwner) == 0x0030);
static_assert(offsetof(FGameplayEffectModifiedAttribute, Attribute) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeToCapture) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeSource) == 0x0038);
static_assert(offsetof(FGameplayEffectAttributeCaptureSpec, BackingDefinition) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, SourceAttributes) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, TargetAttributes) == 0x0010);
static_assert(offsetof(FTagContainerAggregator, CapturedActorTags) == 0x0000);
static_assert(offsetof(FTagContainerAggregator, CapturedSpecTags) == 0x0020);
static_assert(offsetof(FTagContainerAggregator, ScopedTags) == 0x0040);
static_assert(offsetof(FScalableFloat, Curve) == 0x0008);
static_assert(offsetof(FScalableFloat, RegistryType) == 0x0018);
static_assert(offsetof(FGameplayAbilitySpecDef, Ability) == 0x0000);
static_assert(offsetof(FGameplayAbilitySpecDef, LevelScalableFloat) == 0x0008);
static_assert(offsetof(FGameplayAbilitySpecDef, RemovalPolicy) == 0x0034);
static_assert(offsetof(FGameplayAbilitySpecDef, SourceObject) == 0x0038);
static_assert(offsetof(FGameplayAbilitySpecDef, AssignedHandle) == 0x0090);
static_assert(offsetof(FGameplayEffectSpec, Def) == 0x0000);
static_assert(offsetof(FGameplayEffectSpec, ModifiedAttributes) == 0x0008);
static_assert(offsetof(FGameplayEffectSpec, CapturedRelevantAttributes) == 0x0018);
static_assert(offsetof(FGameplayEffectSpec, CapturedSourceTags) == 0x0060);
static_assert(offsetof(FGameplayEffectSpec, CapturedTargetTags) == 0x00E8);
static_assert(offsetof(FGameplayEffectSpec, DynamicGrantedTags) == 0x0170);
static_assert(offsetof(FGameplayEffectSpec, DynamicAssetTags) == 0x0190);
static_assert(offsetof(FGameplayEffectSpec, Modifiers) == 0x01B0);
static_assert(offsetof(FGameplayEffectSpec, GrantedAbilitySpecs) == 0x01C8);
static_assert(offsetof(FGameplayEffectSpec, EffectContext) == 0x0278);
static_assert(offsetof(FActiveGameplayEffect, Spec) == 0x0018);
static_assert(offsetof(FActiveGameplayEffect, PredictionKey) == 0x02B0);
static_assert(offsetof(FActiveGameplayEffectsContainer, GameplayEffects_Internal) == 0x0130);
static_assert(offsetof(FActiveGameplayEffectsContainer, ApplicationImmunityQueryEffects) == 0x0450);
static_assert(offsetof(FGameplayCueParameters, EffectContext) == 0x0008);
static_assert(offsetof(FGameplayCueParameters, MatchedTagName) == 0x0020);
static_assert(offsetof(FGameplayCueParameters, OriginalTag) == 0x0028);
static_assert(offsetof(FGameplayCueParameters, AggregatedSourceTags) == 0x0030);
static_assert(offsetof(FGameplayCueParameters, AggregatedTargetTags) == 0x0050);
static_assert(offsetof(FGameplayCueParameters, Location) == 0x0070);
static_assert(offsetof(FGameplayCueParameters, Normal) == 0x007C);
static_assert(offsetof(FGameplayCueParameters, Instigator) == 0x0088);
static_assert(offsetof(FGameplayCueParameters, EffectCauser) == 0x0090);
static_assert(offsetof(FGameplayCueParameters, SourceObject) == 0x0098);
static_assert(offsetof(FGameplayCueParameters, PhysicalMaterial) == 0x00A0);
static_assert(offsetof(FGameplayCueParameters, TargetAttachComponent) == 0x00B0);
static_assert(offsetof(FActiveGameplayCue, GameplayCueTag) == 0x000C);
static_assert(offsetof(FActiveGameplayCue, PredictionKey) == 0x0018);
static_assert(offsetof(FActiveGameplayCue, Parameters) == 0x0028);
static_assert(offsetof(FActiveGameplayCueContainer, GameplayCues) == 0x0108);
static_assert(offsetof(FActiveGameplayCueContainer, Owner) == 0x0120);
static_assert(offsetof(FMinimalReplicationTagCountMap, Owner) == 0x0050);
static_assert(offsetof(FReplicatedPredictionKeyItem, PredictionKey) == 0x0010);
static_assert(offsetof(FReplicatedPredictionKeyMap, PredictionKeys) == 0x0108);
static_assert(offsetof(UAbilitySystemComponent, DefaultStartingData) == 0x0130);
static_assert(offsetof(UAbilitySystemComponent, SpawnedAttributes) == 0x0140);
static_assert(offsetof(UAbilitySystemComponent, AffectedAnimInstanceTag) == 0x0150);
static_assert(offsetof(UAbilitySystemComponent, ClientDebugStrings) == 0x0318);
static_assert(offsetof(UAbilitySystemComponent, ServerDebugStrings) == 0x0328);
static_assert(offsetof(UAbilitySystemComponent, SpawnedTargetActors) == 0x0398);
static_assert(offsetof(UAbilitySystemComponent, OwnerActor) == 0x03D0);
static_assert(offsetof(UAbilitySystemComponent, AvatarActor) == 0x03D8);
static_assert(offsetof(UAbilitySystemComponent, ActivatableAbilities) == 0x03F0);
static_assert(offsetof(UAbilitySystemComponent, AllReplicatedInstancedAbilities) == 0x0540);
static_assert(offsetof(UAbilitySystemComponent, RepAnimMontageInfo) == 0x0750);
static_assert(offsetof(UAbilitySystemComponent, LocalAnimMontageInfo) == 0x0788);
static_assert(offsetof(UAbilitySystemComponent, ActiveGameplayEffects) == 0x0850);
static_assert(offsetof(UAbilitySystemComponent, ActiveGameplayCues) == 0x0CC8);
static_assert(offsetof(UAbilitySystemComponent, MinimalReplicationGameplayCues) == 0x0DF0);
static_assert(offsetof(UAbilitySystemComponent, BlockedAbilityBindings) == 0x1040);
static_assert(offsetof(UAbilitySystemComponent, MinimalReplicationTags) == 0x1178);
static_assert(offsetof(UAbilitySystemComponent, ReplicatedPredictionKeyMap) == 0x11F0);
static_assert(offsetof(FNetSerializeScriptStructCache, ScriptStructs) == 0x0000);
static_assert(offsetof(UAbilitySystemGlobals, AbilitySystemGlobalsClassName) == 0x0028);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailIsDeadTag) == 0x0068);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailIsDeadName) == 0x0070);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCooldownTag) == 0x0078);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCooldownName) == 0x0080);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCostTag) == 0x0088);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCostName) == 0x0090);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsBlockedTag) == 0x0098);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsBlockedName) == 0x00A0);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsMissingTag) == 0x00A8);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsMissingName) == 0x00B0);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailNetworkingTag) == 0x00B8);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailNetworkingName) == 0x00C0);
static_assert(offsetof(UAbilitySystemGlobals, TargetDataStructCache) == 0x00D0);
static_assert(offsetof(UAbilitySystemGlobals, DefaultGameplayModEvaluationChannel) == 0x00E1);
static_assert(offsetof(UAbilitySystemGlobals, GameplayModEvaluationChannelAliases) == 0x00E4);
static_assert(offsetof(UAbilitySystemGlobals, GlobalCurveTableName) == 0x0138);
static_assert(offsetof(UAbilitySystemGlobals, GlobalCurveTable) == 0x0150);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeMetaDataTableName) == 0x0158);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeMetaDataTable) == 0x0170);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableName) == 0x0178);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableNames) == 0x0190);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeDefaultsTables) == 0x01A0);
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManagerClass) == 0x01B0);
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManagerName) == 0x01C8);
static_assert(offsetof(UAbilitySystemGlobals, GameplayCueNotifyPaths) == 0x01E0);
static_assert(offsetof(UAbilitySystemGlobals, GameplayTagResponseTableName) == 0x01F0);
static_assert(offsetof(UAbilitySystemGlobals, GameplayTagResponseTable) == 0x0208);
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManager) == 0x0218);
static_assert(offsetof(AAbilitySystemTestPawn, AbilitySystemComponent) == 0x02C8);
static_assert(offsetof(UAbilityTask, Ability) == 0x0068);
static_assert(offsetof(UAbilityTask, AbilitySystemComponent) == 0x0070);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, ForceName) == 0x0080);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, FinishVelocityMode) == 0x0088);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, FinishSetVelocity) == 0x008C);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, MovementComponent) == 0x00A0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, WorldDirection) == 0x00C8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, StrengthOverTime) == 0x00E0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, Rotation) == 0x00D8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, PathOffsetCurve) == 0x00F8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, TimeMappingCurve) == 0x0100);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, StartLocation) == 0x00D0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocation) == 0x00DC);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetActor) == 0x00E8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocationOffset) == 0x00F0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, OffsetAlignment) == 0x00FC);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, NewMovementMode) == 0x0106);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, PathOffsetCurve) == 0x0108);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TimeMappingCurve) == 0x0110);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedHorizontalCurve) == 0x0118);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedVerticalCurve) == 0x0120);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, StartLocation) == 0x00D8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, TargetLocation) == 0x00E4);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, NewMovementMode) == 0x00F5);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, PathOffsetCurve) == 0x00F8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, Location) == 0x00C8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, LocationActor) == 0x00D8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, StrengthDistanceFalloff) == 0x00F0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, StrengthOverTime) == 0x00F8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, FixedWorldDirection) == 0x0104);
static_assert(offsetof(UAbilityTask_MoveToLocation, StartLocation) == 0x0094);
static_assert(offsetof(UAbilityTask_MoveToLocation, TargetLocation) == 0x00A0);
static_assert(offsetof(UAbilityTask_MoveToLocation, LerpCurve) == 0x00B8);
static_assert(offsetof(UAbilityTask_MoveToLocation, LerpCurveVector) == 0x00C0);
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, MontageToPlay) == 0x00E8);
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, StartSection) == 0x00F4);
static_assert(offsetof(UAbilityTask_WaitAttributeChange, ExternalOwner) == 0x00F0);
static_assert(offsetof(UAbilityTask_WaitAttributeChangeRatioThreshold, ExternalOwner) == 0x0138);
static_assert(offsetof(UAbilityTask_WaitAttributeChangeThreshold, ExternalOwner) == 0x00E8);
static_assert(offsetof(UAbilityTask_WaitGameplayEffectApplied, ExternalOwner) == 0x01A8);
static_assert(offsetof(UAbilityTask_WaitGameplayEffectBlockedImmunity, ExternalOwner) == 0x0118);
static_assert(offsetof(UAbilityTask_WaitGameplayEvent, OptionalExternalTarget) == 0x0098);
static_assert(offsetof(UAbilityTask_WaitGameplayTag, OptionalExternalTarget) == 0x0090);
static_assert(offsetof(UAbilityTask_WaitTargetData, TargetClass) == 0x00A0);
static_assert(offsetof(UAbilityTask_WaitTargetData, TargetActor) == 0x00A8);
static_assert(offsetof(UAbilityTask_WaitVelocityChange, CachedMovementComponent) == 0x0090);
static_assert(offsetof(FGameplayEventData, EventTag) == 0x0000);
static_assert(offsetof(FGameplayEventData, Instigator) == 0x0008);
static_assert(offsetof(FGameplayEventData, Target) == 0x0010);
static_assert(offsetof(FGameplayEventData, OptionalObject) == 0x0018);
static_assert(offsetof(FGameplayEventData, OptionalObject2) == 0x0020);
static_assert(offsetof(FGameplayEventData, ContextHandle) == 0x0028);
static_assert(offsetof(FGameplayEventData, InstigatorTags) == 0x0040);
static_assert(offsetof(FGameplayEventData, TargetTags) == 0x0060);
static_assert(offsetof(FGameplayEventData, TargetData) == 0x0088);
static_assert(offsetof(FAbilityTriggerData, TriggerTag) == 0x0000);
static_assert(offsetof(FAbilityTriggerData, TriggerSource) == 0x0008);
static_assert(offsetof(UGameplayAbility, AbilityTags) == 0x00A8);
static_assert(offsetof(UGameplayAbility, ReplicationPolicy) == 0x00CE);
static_assert(offsetof(UGameplayAbility, InstancingPolicy) == 0x00CF);
static_assert(offsetof(UGameplayAbility, CurrentActivationInfo) == 0x00D8);
static_assert(offsetof(UGameplayAbility, CurrentEventData) == 0x00F0);
static_assert(offsetof(UGameplayAbility, NetExecutionPolicy) == 0x01A0);
static_assert(offsetof(UGameplayAbility, NetSecurityPolicy) == 0x01A1);
static_assert(offsetof(UGameplayAbility, CostGameplayEffectClass) == 0x01A8);
static_assert(offsetof(UGameplayAbility, AbilityTriggers) == 0x01B0);
static_assert(offsetof(UGameplayAbility, CooldownGameplayEffectClass) == 0x01C0);
static_assert(offsetof(UGameplayAbility, CancelAbilitiesWithTag) == 0x01C8);
static_assert(offsetof(UGameplayAbility, BlockAbilitiesWithTag) == 0x01E8);
static_assert(offsetof(UGameplayAbility, ActivationOwnedTags) == 0x0208);
static_assert(offsetof(UGameplayAbility, ActivationRequiredTags) == 0x0228);
static_assert(offsetof(UGameplayAbility, ActivationBlockedTags) == 0x0248);
static_assert(offsetof(UGameplayAbility, SourceRequiredTags) == 0x0268);
static_assert(offsetof(UGameplayAbility, SourceBlockedTags) == 0x0288);
static_assert(offsetof(UGameplayAbility, TargetRequiredTags) == 0x02A8);
static_assert(offsetof(UGameplayAbility, TargetBlockedTags) == 0x02C8);
static_assert(offsetof(UGameplayAbility, ActiveTasks) == 0x0308);
static_assert(offsetof(UGameplayAbility, CurrentMontage) == 0x0328);
static_assert(offsetof(UGameplayAbility_Montage, MontageToPlay) == 0x03B0);
static_assert(offsetof(UGameplayAbility_Montage, SectionName) == 0x03BC);
static_assert(offsetof(UGameplayAbility_Montage, GameplayEffectClassesWhileAnimating) == 0x03C8);
static_assert(offsetof(UGameplayAbility_Montage, GameplayEffectsWhileAnimating) == 0x03D8);
static_assert(offsetof(FGameplayAbilityBindInfo, Command) == 0x0000);
static_assert(offsetof(FGameplayAbilityBindInfo, GameplayAbilityClass) == 0x0008);
static_assert(offsetof(UGameplayAbilitySet, Abilities) == 0x0030);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LocationType) == 0x0010);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LiteralTransform) == 0x0020);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceActor) == 0x0050);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceComponent) == 0x0058);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceAbility) == 0x0060);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceSocketName) == 0x0068);
static_assert(offsetof(FWorldReticleParameters, AOEScale) == 0x0000);
static_assert(offsetof(AGameplayAbilityTargetActor, StartLocation) == 0x0230);
static_assert(offsetof(AGameplayAbilityTargetActor, MasterPC) == 0x02D0);
static_assert(offsetof(AGameplayAbilityTargetActor, OwningAbility) == 0x02D8);
static_assert(offsetof(AGameplayAbilityTargetActor, SourceActor) == 0x02E8);
static_assert(offsetof(AGameplayAbilityTargetActor, ReticleParams) == 0x02F0);
static_assert(offsetof(AGameplayAbilityTargetActor, ReticleClass) == 0x0300);
static_assert(offsetof(AGameplayAbilityTargetActor, Filter) == 0x0308);
static_assert(offsetof(AGameplayAbilityTargetActor, GenericDelegateBoundASC) == 0x0330);
static_assert(offsetof(AGameplayAbilityTargetActor_Trace, TraceProfile) == 0x033C);
static_assert(offsetof(AGameplayAbilityTargetActor_ActorPlacement, PlacedActorClass) == 0x0370);
static_assert(offsetof(AGameplayAbilityTargetActor_ActorPlacement, PlacedActorMaterial) == 0x0378);
static_assert(offsetof(AGameplayAbilityWorldReticle, Parameters) == 0x0228);
static_assert(offsetof(AGameplayAbilityWorldReticle, MasterPC) == 0x0238);
static_assert(offsetof(AGameplayAbilityWorldReticle, TargetingActor) == 0x0240);
static_assert(offsetof(AGameplayAbilityWorldReticle_ActorVisualization, CollisionComponent) == 0x0248);
static_assert(offsetof(AGameplayAbilityWorldReticle_ActorVisualization, VisualizationComponents) == 0x0250);
static_assert(offsetof(FGameplayCueObjectLibrary, Paths) == 0x0000);
static_assert(offsetof(FGameplayCueObjectLibrary, ActorObjectLibrary) == 0x0030);
static_assert(offsetof(FGameplayCueObjectLibrary, StaticObjectLibrary) == 0x0038);
static_assert(offsetof(FGameplayCueObjectLibrary, CueSet) == 0x0040);
static_assert(offsetof(FGameplayEffectSpecForRPC, Def) == 0x0000);
static_assert(offsetof(FGameplayEffectSpecForRPC, ModifiedAttributes) == 0x0008);
static_assert(offsetof(FGameplayEffectSpecForRPC, EffectContext) == 0x0018);
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedSourceTags) == 0x0030);
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedTargetTags) == 0x0050);
static_assert(offsetof(FGameplayCuePendingExecute, PredictionKey) == 0x0018);
static_assert(offsetof(FGameplayCuePendingExecute, PayloadType) == 0x0028);
static_assert(offsetof(FGameplayCuePendingExecute, OwningComponent) == 0x0030);
static_assert(offsetof(FGameplayCuePendingExecute, FromSpec) == 0x0038);
static_assert(offsetof(FGameplayCuePendingExecute, CueParameters) == 0x00B0);
static_assert(offsetof(FPreallocationInfo, ClassesNeedingPreallocation) == 0x0050);
static_assert(offsetof(UGameplayCueManager, RuntimeGameplayCueObjectLibrary) == 0x0048);
static_assert(offsetof(UGameplayCueManager, EditorGameplayCueObjectLibrary) == 0x0098);
static_assert(offsetof(UGameplayCueManager, LoadedGameplayCueNotifyClasses) == 0x02B0);
static_assert(offsetof(UGameplayCueManager, GameplayCueClassesForPreallocation) == 0x02C0);
static_assert(offsetof(UGameplayCueManager, PendingExecuteCues) == 0x02D0);
static_assert(offsetof(UGameplayCueManager, PreallocationInfoList_Internal) == 0x02E8);
static_assert(offsetof(AGameplayCueNotify_Actor, GameplayCueTag) == 0x0234);
static_assert(offsetof(AGameplayCueNotify_Actor, GameplayCueName) == 0x023C);
static_assert(offsetof(UGameplayCueNotify_Static, GameplayCueTag) == 0x0028);
static_assert(offsetof(UGameplayCueNotify_Static, GameplayCueName) == 0x0030);
static_assert(offsetof(UGameplayCueNotify_HitImpact, Sound) == 0x0040);
static_assert(offsetof(UGameplayCueNotify_HitImpact, ParticleSystem) == 0x0048);
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueTag) == 0x0000);
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueNotifyObj) == 0x0008);
static_assert(offsetof(FGameplayCueNotifyData, LoadedGameplayCueClass) == 0x0020);
static_assert(offsetof(UGameplayCueSet, GameplayCueData) == 0x0030);
static_assert(offsetof(FAttributeBasedFloat, Coefficient) == 0x0000);
static_assert(offsetof(FAttributeBasedFloat, PreMultiplyAdditiveValue) == 0x0028);
static_assert(offsetof(FAttributeBasedFloat, PostMultiplyAdditiveValue) == 0x0050);
static_assert(offsetof(FAttributeBasedFloat, BackingAttribute) == 0x0078);
static_assert(offsetof(FAttributeBasedFloat, AttributeCurve) == 0x00B8);
static_assert(offsetof(FAttributeBasedFloat, AttributeCalculationType) == 0x00C8);
static_assert(offsetof(FAttributeBasedFloat, FinalChannel) == 0x00C9);
static_assert(offsetof(FAttributeBasedFloat, SourceTagFilter) == 0x00D0);
static_assert(offsetof(FAttributeBasedFloat, TargetTagFilter) == 0x00F0);
static_assert(offsetof(FCustomCalculationBasedFloat, CalculationClassMagnitude) == 0x0000);
static_assert(offsetof(FCustomCalculationBasedFloat, Coefficient) == 0x0008);
static_assert(offsetof(FCustomCalculationBasedFloat, PreMultiplyAdditiveValue) == 0x0030);
static_assert(offsetof(FCustomCalculationBasedFloat, PostMultiplyAdditiveValue) == 0x0058);
static_assert(offsetof(FCustomCalculationBasedFloat, FinalLookupCurve) == 0x0080);
static_assert(offsetof(FSetByCallerFloat, DataName) == 0x0000);
static_assert(offsetof(FSetByCallerFloat, DataTag) == 0x0008);
static_assert(offsetof(FGameplayEffectModifierMagnitude, MagnitudeCalculationType) == 0x0000);
static_assert(offsetof(FGameplayEffectModifierMagnitude, ScalableFloatMagnitude) == 0x0008);
static_assert(offsetof(FGameplayEffectModifierMagnitude, AttributeBasedMagnitude) == 0x0030);
static_assert(offsetof(FGameplayEffectModifierMagnitude, CustomMagnitude) == 0x0140);
static_assert(offsetof(FGameplayEffectModifierMagnitude, SetByCallerMagnitude) == 0x01D0);
static_assert(offsetof(FGameplayModEvaluationChannelSettings, Channel) == 0x0000);
static_assert(offsetof(FGameplayTagRequirements, RequireTags) == 0x0000);
static_assert(offsetof(FGameplayTagRequirements, IgnoreTags) == 0x0020);
static_assert(offsetof(FGameplayModifierInfo, Attribute) == 0x0000);
static_assert(offsetof(FGameplayModifierInfo, ModifierOp) == 0x0038);
static_assert(offsetof(FGameplayModifierInfo, Magnitude) == 0x0040);
static_assert(offsetof(FGameplayModifierInfo, ModifierMagnitude) == 0x0068);
static_assert(offsetof(FGameplayModifierInfo, EvaluationChannelSettings) == 0x0248);
static_assert(offsetof(FGameplayModifierInfo, SourceTags) == 0x0250);
static_assert(offsetof(FGameplayModifierInfo, TargetTags) == 0x0290);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, CapturedAttribute) == 0x0000);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TransientAggregatorIdentifier) == 0x0040);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, AggregatorType) == 0x0048);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierOp) == 0x0049);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierMagnitude) == 0x0050);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, EvaluationChannelSettings) == 0x0230);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, SourceTags) == 0x0238);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TargetTags) == 0x0278);
static_assert(offsetof(FConditionalGameplayEffect, EffectClass) == 0x0000);
static_assert(offsetof(FConditionalGameplayEffect, RequiredSourceTags) == 0x0008);
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationClass) == 0x0000);
static_assert(offsetof(FGameplayEffectExecutionDefinition, PassedInTags) == 0x0008);
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationModifiers) == 0x0028);
static_assert(offsetof(FGameplayEffectExecutionDefinition, ConditionalGameplayEffectClasses) == 0x0038);
static_assert(offsetof(FGameplayEffectExecutionDefinition, ConditionalGameplayEffects) == 0x0048);
static_assert(offsetof(FGameplayEffectCue, MagnitudeAttribute) == 0x0000);
static_assert(offsetof(FGameplayEffectCue, GameplayCueTags) == 0x0040);
static_assert(offsetof(FInheritedTagContainer, CombinedTags) == 0x0000);
static_assert(offsetof(FInheritedTagContainer, Added) == 0x0020);
static_assert(offsetof(FInheritedTagContainer, Removed) == 0x0040);
static_assert(offsetof(FGameplayEffectQuery, OwningTagQuery) == 0x0020);
static_assert(offsetof(FGameplayEffectQuery, EffectTagQuery) == 0x0068);
static_assert(offsetof(FGameplayEffectQuery, SourceTagQuery) == 0x00B0);
static_assert(offsetof(FGameplayEffectQuery, ModifyingAttribute) == 0x00F8);
static_assert(offsetof(FGameplayEffectQuery, EffectSource) == 0x0130);
static_assert(offsetof(FGameplayEffectQuery, EffectDefinition) == 0x0138);
static_assert(offsetof(UGameplayEffect, DurationPolicy) == 0x0030);
static_assert(offsetof(UGameplayEffect, DurationMagnitude) == 0x0038);
static_assert(offsetof(UGameplayEffect, Period) == 0x0218);
static_assert(offsetof(UGameplayEffect, PeriodicInhibitionPolicy) == 0x0241);
static_assert(offsetof(UGameplayEffect, Modifiers) == 0x0248);
static_assert(offsetof(UGameplayEffect, Executions) == 0x0258);
static_assert(offsetof(UGameplayEffect, ChanceToApplyToTarget) == 0x0268);
static_assert(offsetof(UGameplayEffect, ApplicationRequirements) == 0x0290);
static_assert(offsetof(UGameplayEffect, TargetEffectClasses) == 0x02A0);
static_assert(offsetof(UGameplayEffect, ConditionalGameplayEffects) == 0x02B0);
static_assert(offsetof(UGameplayEffect, OverflowEffects) == 0x02C0);
static_assert(offsetof(UGameplayEffect, PrematureExpirationEffectClasses) == 0x02D8);
static_assert(offsetof(UGameplayEffect, RoutineExpirationEffectClasses) == 0x02E8);
static_assert(offsetof(UGameplayEffect, GameplayCues) == 0x0300);
static_assert(offsetof(UGameplayEffect, UIData) == 0x0310);
static_assert(offsetof(UGameplayEffect, InheritableGameplayEffectTags) == 0x0318);
static_assert(offsetof(UGameplayEffect, InheritableOwnedTagsContainer) == 0x0378);
static_assert(offsetof(UGameplayEffect, OngoingTagRequirements) == 0x03D8);
static_assert(offsetof(UGameplayEffect, ApplicationTagRequirements) == 0x0418);
static_assert(offsetof(UGameplayEffect, RemovalTagRequirements) == 0x0458);
static_assert(offsetof(UGameplayEffect, RemoveGameplayEffectsWithTags) == 0x0498);
static_assert(offsetof(UGameplayEffect, GrantedApplicationImmunityTags) == 0x04F8);
static_assert(offsetof(UGameplayEffect, GrantedApplicationImmunityQuery) == 0x0538);
static_assert(offsetof(UGameplayEffect, RemoveGameplayEffectQuery) == 0x0690);
static_assert(offsetof(UGameplayEffect, StackingType) == 0x07E1);
static_assert(offsetof(UGameplayEffect, StackDurationRefreshPolicy) == 0x07E8);
static_assert(offsetof(UGameplayEffect, StackPeriodResetPolicy) == 0x07E9);
static_assert(offsetof(UGameplayEffect, StackExpirationPolicy) == 0x07EA);
static_assert(offsetof(UGameplayEffect, GrantedAbilities) == 0x07F0);
static_assert(offsetof(UGameplayEffectCalculation, RelevantAttributesToCapture) == 0x0028);
static_assert(offsetof(UGameplayEffectUIData_TextOnly, Description) == 0x0028);
static_assert(offsetof(FGameplayTagReponsePair, Tag) == 0x0000);
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffect) == 0x0008);
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffects) == 0x0010);
static_assert(offsetof(FGameplayTagResponseTableEntry, Positive) == 0x0000);
static_assert(offsetof(FGameplayTagResponseTableEntry, Negative) == 0x0028);
static_assert(offsetof(UGameplayTagReponseTable, Entries) == 0x0030);
static_assert(offsetof(FGameplayCueTag, GameplayCueTag) == 0x0000);
static_assert(offsetof(FMovieSceneGameplayCueKey, Cue) == 0x0000);
static_assert(offsetof(FMovieSceneGameplayCueKey, Location) == 0x0008);
static_assert(offsetof(FMovieSceneGameplayCueKey, Normal) == 0x0014);
static_assert(offsetof(FMovieSceneGameplayCueKey, AttachSocketName) == 0x0020);
static_assert(offsetof(FMovieSceneGameplayCueKey, Instigator) == 0x002C);
static_assert(offsetof(FMovieSceneGameplayCueKey, EffectCauser) == 0x0044);
static_assert(offsetof(FMovieSceneGameplayCueKey, PhysicalMaterial) == 0x0060);
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyTimes) == 0x0008);
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyValues) == 0x0018);
static_assert(offsetof(UMovieSceneGameplayCueTriggerSection, Channel) == 0x0100);
static_assert(offsetof(UMovieSceneGameplayCueSection, Cue) == 0x0100);
static_assert(offsetof(UMovieSceneGameplayCueTrack, Sections) == 0x0090);
static_assert(offsetof(FGameplayEffectRemovalInfo, EffectContext) == 0x0008);
static_assert(offsetof(FServerAbilityRPCBatch, AbilitySpecHandle) == 0x0000);
static_assert(offsetof(FServerAbilityRPCBatch, PredictionKey) == 0x0008);
static_assert(offsetof(FServerAbilityRPCBatch, TargetData) == 0x0018);
static_assert(offsetof(FAbilityEndedData, AbilityThatEnded) == 0x0000);
static_assert(offsetof(FAbilityEndedData, AbilitySpecHandle) == 0x0008);
static_assert(offsetof(FAttributeMetaData, DerivedAttributeInfo) == 0x0018);
static_assert(offsetof(FGameplayTargetDataFilter, SelfActor) == 0x0008);
static_assert(offsetof(FGameplayTargetDataFilter, RequiredActorClass) == 0x0010);
static_assert(offsetof(FGameplayTargetDataFilter, SelfFilter) == 0x0018);
static_assert(offsetof(FGameplayAbilityTargetData_SingleTargetHit, HitResult) == 0x0008);
static_assert(offsetof(FGameplayAbilityTargetData_ActorArray, SourceLocation) == 0x0010);
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, SourceLocation) == 0x0010);
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, TargetLocation) == 0x0080);
static_assert(offsetof(FGameplayAbilitySpecHandleAndPredictionKey, AbilityHandle) == 0x0000);
static_assert(offsetof(FAbilityTaskDebugMessage, FromTask) == 0x0000);
static_assert(offsetof(FAbilityTaskDebugMessage, Message) == 0x0008);
static_assert(offsetof(FGameplayAbilityActorInfo, OwnerActor) == 0x0008);
static_assert(offsetof(FGameplayAbilityActorInfo, AvatarActor) == 0x0010);
static_assert(offsetof(FGameplayAbilityActorInfo, PlayerController) == 0x0018);
static_assert(offsetof(FGameplayAbilityActorInfo, AbilitySystemComponent) == 0x0020);
static_assert(offsetof(FGameplayAbilityActorInfo, SkeletalMeshComponent) == 0x0028);
static_assert(offsetof(FGameplayAbilityActorInfo, AnimInstance) == 0x0030);
static_assert(offsetof(FGameplayAbilityActorInfo, MovementComponent) == 0x0038);
static_assert(offsetof(FGameplayAbilityActorInfo, AffectedAnimInstanceTag) == 0x0040);
static_assert(offsetof(FMinimalGameplayCueReplicationProxy, Owner) == 0x0280);
static_assert(offsetof(FGameplayCueTranslationLink, RulesCDO) == 0x0000);
static_assert(offsetof(FGameplayCueTranslatorNode, Links) == 0x0000);
static_assert(offsetof(FGameplayCueTranslatorNode, CachedIndex) == 0x0010);
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTag) == 0x0014);
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTagName) == 0x001C);
static_assert(offsetof(FGameplayCueTranslationManager, TranslationLUT) == 0x0000);
static_assert(offsetof(FGameplayCueTranslationManager, TranslationNameToIndexMap) == 0x0010);
static_assert(offsetof(FGameplayCueTranslationManager, TagManager) == 0x0060);
static_assert(offsetof(FGameplayModifierEvaluatedData, Attribute) == 0x0000);
static_assert(offsetof(FGameplayModifierEvaluatedData, ModifierOp) == 0x0038);
static_assert(offsetof(FGameplayModifierEvaluatedData, Handle) == 0x0040);
static_assert(offsetof(FGameplayEffectCustomExecutionOutput, OutputModifiers) == 0x0000);
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, TagToMap) == 0x0000);
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyName) == 0x0028);
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyGuid) == 0x0030);
static_assert(offsetof(FGameplayTagBlueprintPropertyMap, PropertyMappings) == 0x0010);
static_assert(offsetof(FGameplayEffectContext, Instigator) == 0x0008);
static_assert(offsetof(FGameplayEffectContext, EffectCauser) == 0x0010);
static_assert(offsetof(FGameplayEffectContext, AbilityCDO) == 0x0018);
static_assert(offsetof(FGameplayEffectContext, AbilityInstanceNotReplicated) == 0x0020);
static_assert(offsetof(FGameplayEffectContext, SourceObject) == 0x002C);
static_assert(offsetof(FGameplayEffectContext, InstigatorAbilitySystemComponent) == 0x0034);
static_assert(offsetof(FGameplayEffectContext, WorldOrigin) == 0x0060);
