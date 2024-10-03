
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "BBQCore.h"
#include "merged_BBQAddOn_Alpha_BBQGame_BBQAddOn_Mercury.h"
#include "BBQGameSession.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "GameplayAbilities.h"
#include "GameplayVariables.h"

#pragma pack(push, 0x1)

class ABP_CB_SweetTalkGrandpa_C;
class UBPI_DLC1_CHARLIE_C;
class UBP_BBQPerk_Dietician_C;
class UBP_BBQPerk_MariaOnACross_C;
class UBP_BBQPerk_PepTalk_C;
class UBP_BBQPerk_TalkAndRun_C;
class UBP_BBQSSP_CHARLIE_Ability_C;
class UBP_BBQ_Calculation_CHARLIEFindGrandpa_ActiveTime_C;
class UBP_BBQ_Calculation_CHARLIEFindGrandpa_C;
class UBP_BBQ_Calculation_CHARLIEFindGrandpa_CooldownDuration_C;
class UBP_BBQ_Calculation_CHARLIESweetTalkCooldownDelay_C;
class UBP_BBQ_Calculation_CHARLIESweetTalkGrandpa_C;
class UBP_BBQ_Calculation_CHARLIESweetTalk_ActiveTime_C;
class UBP_BBQ_Calculation_CHARLIE_EndRechage_C;
class UBP_BBQ_Calculation_MariaOnCross_C;
class UBP_BBQ_Calculation_PepTalk_C;
class UBP_BBQ_Calculation_TalkAndRun_C;
class UBP_BBQ_Calculation_TalkAndRun_Duration_C;
class UBP_CHARLIEAbility_FindGrandpa_StartingCooldownCalculation_C;
class UBP_VarSet_DLC1_CHARLIE_C;
class UGAA_CHARLIE_UseAbility_C;
class UGAA_CHARLIE_UseSweetTalk_C;
class UGAE_BBQPerk_TalkAndRun_C;
class UGAE_CHARILEAbility_FindGrandpa_RechargeBuff_C;
class UGAE_CHARLIEAbilityRecharge_C;
class UGAE_CHARLIEAbility_FindGrandPa_Cooldown_C;
class UGAE_CHARLIEAbility_FindGrandpaCost_C;
class UGAE_CHARLIEAbility_FindGrandpa_Duration_C;
class UGAE_CHARLIEAbility_GrantCharges_C;
class UGAE_CHARLIEAbility_Starting_Cooldown_C;
class UGAE_CHARLIEAbility_SweetTalkCost_C;
class UGAE_CHARLIEAbility_SweetTalk_Duration_C;
class UGAE_CHARLIEAbility_SweetTralkGrandpa_Cooldown_C;
class UGAE_Dietician_Active_C;
class UGAE_Dietician_ChargeSpent_C;
class UGAE_Dietician_LV1_C;
class UGAE_Dietician_LV2_C;
class UGAE_Dietician_LV3_C;
class UGAE_Dietician_Reset_C;
class UGAE_MariaOnACross_Active_C;
class UGAE_PerkUI_PepTalk_C;
class UGAE_Perk_PepTalk_C;

/// Enum /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/ECHARLIELocateState.ECHARLIELocateState
/// Size: 0x01 (1 bytes)
enum class ECHARLIELocateState : uint8_t
{
	ECHARLIELocateState__NewEnumerator0                                              = 0,
	ECHARLIELocateState__NewEnumerator1                                              = 1,
	ECHARLIELocateState__NewEnumerator2                                              = 2
};

/// Class /Game/BBQAddOn_Charlie/Data/VariableSets/BP_VarSet_DLC1_CHARLIE.BP_VarSet_DLC1_CHARLIE_C
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UBP_VarSet_DLC1_CHARLIE_C : public UGameplayVariableSet
{ 
public:
	float                                              CHARLIEAbility_SweetTalkCost;                               // 0x0038   (0x0004)  
	float                                              CHARLIEAbility_SweetTalk_ActiveAmount;                      // 0x003C   (0x0004)  
	float                                              CHARLIEAbility_CooldownAmount;                              // 0x0040   (0x0004)  
	float                                              CHARLIEAbility_CooldownStarting;                            // 0x0044   (0x0004)  
	float                                              CHARLIEAbility_MaxSSPoints;                                 // 0x0048   (0x0004)  
	float                                              CHARLIEAbility_FindGrandpaCost;                             // 0x004C   (0x0004)  
	float                                              CHARLIEAbility_RechargeRate;                                // 0x0050   (0x0004)  
	float                                              CHARLIEAbility_SweetTalkFamilyBondBase;                     // 0x0054   (0x0004)  
	float                                              CHARLIEAbility_SweetTalkWhisperTime;                        // 0x0058   (0x0004)  
	float                                              PERK_Dietician_GrandpaBloodCoefficient;                     // 0x005C   (0x0004)  
	int32_t                                            PERK_Dietician_GrandpaBloodReductionCharges;                // 0x0060   (0x0004)  
	int32_t                                            PERK_Dietician_GrandpaBloodReductionActiveCharges;          // 0x0064   (0x0004)  
	int32_t                                            CHARLIEAbility_SweetTalkSonarCount;                         // 0x0068   (0x0004)  
	float                                              CHARLIEAbility_GrandpaHighlightDuration;                    // 0x006C   (0x0004)  
	float                                              PERK_MariaOnACross_MaxGrandpaBlood;                         // 0x0070   (0x0004)  
	float                                              CHARILEAbility_FindGrandpa_CooldownAmount;                  // 0x0074   (0x0004)  
	float                                              CHARILEAbility_FindGrandpa_ActiveAmount;                    // 0x0078   (0x0004)  
	int32_t                                            CHARILEAbility_ReduceGrandpaLevel_Charge;                   // 0x007C   (0x0004)  
	float                                              PERK_MariaOnACross_HighlightDelay;                          // 0x0080   (0x0004)  
	float                                              PERK_MariaOnACross_HighlightDuration;                       // 0x0084   (0x0004)  
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Effects/BP_BBQ_Calculation_TalkAndRun_Duration.BP_BBQ_Calculation_TalkAndRun_Duration_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_TalkAndRun_Duration_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Effects/BP_BBQ_Calculation_TalkAndRun_Duration.BP_BBQ_Calculation_TalkAndRun_Duration_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Effects/BP_BBQ_Calculation_TalkAndRun.BP_BBQ_Calculation_TalkAndRun_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_TalkAndRun_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Effects/BP_BBQ_Calculation_TalkAndRun.BP_BBQ_Calculation_TalkAndRun_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Effects/GAE_PerkUI_PepTalk.GAE_PerkUI_PepTalk_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_PerkUI_PepTalk_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Effects/BP_BBQ_Calculation_PepTalk.BP_BBQ_Calculation_PepTalk_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_PepTalk_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Effects/BP_BBQ_Calculation_PepTalk.BP_BBQ_Calculation_PepTalk_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Effects/GAE_Perk_PepTalk.GAE_Perk_PepTalk_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Perk_PepTalk_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Effects/GAE_BBQPerk_TalkAndRun.GAE_BBQPerk_TalkAndRun_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_BBQPerk_TalkAndRun_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIESweetTalk_ActiveTime.BP_BBQ_Calculation_CHARLIESweetTalk_ActiveTime_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_CHARLIESweetTalk_ActiveTime_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIESweetTalk_ActiveTime.BP_BBQ_Calculation_CHARLIESweetTalk_ActiveTime_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIESweetTalkGrandpa.BP_BBQ_Calculation_CHARLIESweetTalkGrandpa_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_CHARLIESweetTalkGrandpa_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIESweetTalkGrandpa.BP_BBQ_Calculation_CHARLIESweetTalkGrandpa_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIESweetTalkCooldownDelay.BP_BBQ_Calculation_CHARLIESweetTalkCooldownDelay_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_CHARLIESweetTalkCooldownDelay_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIESweetTalkCooldownDelay.BP_BBQ_Calculation_CHARLIESweetTalkCooldownDelay_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIE_EndRechage.BP_BBQ_Calculation_CHARLIE_EndRechage_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_CHARLIE_EndRechage_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIE_EndRechage.BP_BBQ_Calculation_CHARLIE_EndRechage_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAE_CHARLIEAbilityRecharge.GAE_CHARLIEAbilityRecharge_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_CHARLIEAbilityRecharge_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAE_CHARLIEAbility_SweetTralkGrandpa_Cooldown.GAE_CHARLIEAbility_SweetTralkGrandpa_Cooldown_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_CHARLIEAbility_SweetTralkGrandpa_Cooldown_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAE_CHARLIEAbility_SweetTalkCost.GAE_CHARLIEAbility_SweetTalkCost_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_CHARLIEAbility_SweetTalkCost_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAE_CHARLIEAbility_SweetTalk_Duration.GAE_CHARLIEAbility_SweetTalk_Duration_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_CHARLIEAbility_SweetTalk_Duration_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/GAE_Dietician_LV1.GAE_Dietician_LV1_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Dietician_LV1_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/CalculationClass/BP_BBQ_Calculation_MariaOnCross.BP_BBQ_Calculation_MariaOnCross_C
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UBP_BBQ_Calculation_MariaOnCross_C : public UBBQGameplayModMagnitudeCalc
{ 
public:
	float                                              MOC_HighlightDelay;                                         // 0x0040   (0x0004)  
	float                                              MOC_HighlightDuration;                                      // 0x0044   (0x0004)  


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/CalculationClass/BP_BBQ_Calculation_MariaOnCross.BP_BBQ_Calculation_MariaOnCross_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/GAE_MariaOnACross_Active.GAE_MariaOnACross_Active_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_MariaOnACross_Active_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/GAE_Dietician_Reset.GAE_Dietician_Reset_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Dietician_Reset_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/GAE_Dietician_ChargeSpent.GAE_Dietician_ChargeSpent_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Dietician_ChargeSpent_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Misc/BPI_DLC1_CHARLIE.BPI_DLC1_CHARLIE_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_DLC1_CHARLIE_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Misc/BPI_DLC1_CHARLIE.BPI_DLC1_CHARLIE_C.BPI_DLC1_CHARLIE_SweetTalkGrandpa
	void BPI_DLC1_CHARLIE_SweetTalkGrandpa() // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/GAE_Dietician_LV3.GAE_Dietician_LV3_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Dietician_LV3_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/GAE_Dietician_LV2.GAE_Dietician_LV2_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Dietician_LV2_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/GAE_Dietician_Active.GAE_Dietician_Active_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Dietician_Active_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseSweetTalk.GAA_CHARLIE_UseSweetTalk_C
/// Size: 0x05F0 (1520 bytes) (0x0005E0 - 0x0005F0) align 8 MaxSize: 0x05F0
class UGAA_CHARLIE_UseSweetTalk_C : public UBBQStarSignAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05E0   (0x0008)  
	FActiveGameplayEffectHandle                        DurationEffectHandle;                                       // 0x05E8   (0x0008)  


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseSweetTalk.GAA_CHARLIE_UseSweetTalk_C.InvalidHandle_7B0871E24838977F8D79AA80D1245473
	void InvalidHandle_7B0871E24838977F8D79AA80D1245473(FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo) // [0x2438a30] HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayEffectRemovalInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(GameplayEffectRemovalInfo);
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseSweetTalk.GAA_CHARLIE_UseSweetTalk_C.OnRemoved_7B0871E24838977F8D79AA80D1245473
	void OnRemoved_7B0871E24838977F8D79AA80D1245473(FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo) // [0x2438a30] HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayEffectRemovalInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(GameplayEffectRemovalInfo);
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseSweetTalk.GAA_CHARLIE_UseSweetTalk_C.K2_ActivateAbility
	void K2_ActivateAbility() // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseSweetTalk.GAA_CHARLIE_UseSweetTalk_C.K2_OnEndAbility
	void K2_OnEndAbility(bool bWasCancelled) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(bWasCancelled);
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseSweetTalk.GAA_CHARLIE_UseSweetTalk_C.ExecuteUbergraph_GAA_CHARLIE_UseSweetTalk
	void ExecuteUbergraph_GAA_CHARLIE_UseSweetTalk(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(EntryPoint);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Behaviours/BP_CB_SweetTalkGrandpa.BP_CB_SweetTalkGrandpa_C
/// Size: 0x0400 (1024 bytes) (0x0003F0 - 0x000400) align 16 MaxSize: 0x0400
class ABP_CB_SweetTalkGrandpa_C : public ABP_CB_AnimatedHold_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03F0   (0x0008)  
	class ABP_BBQGrandpa_C*                            Grandpa_Ref;                                                // 0x03F8   (0x0008)  


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Behaviours/BP_CB_SweetTalkGrandpa.BP_CB_SweetTalkGrandpa_C.BP_OnEnterBehaviour
	void BP_OnEnterBehaviour(ABBQCharacterBehaviour* OldBehaviour) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQCharacterBehaviour*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(OldBehaviour);
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Behaviours/BP_CB_SweetTalkGrandpa.BP_CB_SweetTalkGrandpa_C.BP_OnExitBehaviour
	void BP_OnExitBehaviour(ABBQCharacterBehaviour* NewBehaviour) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQCharacterBehaviour*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewBehaviour);
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Behaviours/BP_CB_SweetTalkGrandpa.BP_CB_SweetTalkGrandpa_C.Server_OnHoldCompleted
	void Server_OnHoldCompleted() // [0x2438a30] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Behaviours/BP_CB_SweetTalkGrandpa.BP_CB_SweetTalkGrandpa_C.ActivateSweetTalkAbility
	void ActivateSweetTalkAbility() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Behaviours/BP_CB_SweetTalkGrandpa.BP_CB_SweetTalkGrandpa_C.ExecuteUbergraph_BP_CB_SweetTalkGrandpa
	void ExecuteUbergraph_BP_CB_SweetTalkGrandpa(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(EntryPoint);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/BP_BBQPerk_TalkAndRun.BP_BBQPerk_TalkAndRun_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_TalkAndRun_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/BP_BBQPerk_PepTalk.BP_BBQPerk_PepTalk_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_PepTalk_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/BP_BBQPerk_MariaOnACross.BP_BBQPerk_MariaOnACross_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_MariaOnACross_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/BP_BBQPerk_Dietician.BP_BBQPerk_Dietician_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_Dietician_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIEFindGrandpa_CooldownDuration.BP_BBQ_Calculation_CHARLIEFindGrandpa_CooldownDuration_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_CHARLIEFindGrandpa_CooldownDuration_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIEFindGrandpa_CooldownDuration.BP_BBQ_Calculation_CHARLIEFindGrandpa_CooldownDuration_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIEFindGrandpa_ActiveTime.BP_BBQ_Calculation_CHARLIEFindGrandpa_ActiveTime_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_CHARLIEFindGrandpa_ActiveTime_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIEFindGrandpa_ActiveTime.BP_BBQ_Calculation_CHARLIEFindGrandpa_ActiveTime_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIEFindGrandpa.BP_BBQ_Calculation_CHARLIEFindGrandpa_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_CHARLIEFindGrandpa_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQ_Calculation_CHARLIEFindGrandpa.BP_BBQ_Calculation_CHARLIEFindGrandpa_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_CHARLIEAbility_FindGrandpa_StartingCooldownCalculation.BP_CHARLIEAbility_FindGrandpa_StartingCooldownCalculation_C
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UBP_CHARLIEAbility_FindGrandpa_StartingCooldownCalculation_C : public UBBQCalculationSSACooldown
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAE_CHARLIEAbility_Starting_Cooldown.GAE_CHARLIEAbility_Starting_Cooldown_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_CHARLIEAbility_Starting_Cooldown_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAE_CHARLIEAbility_FindGrandpaCost.GAE_CHARLIEAbility_FindGrandpaCost_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_CHARLIEAbility_FindGrandpaCost_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAE_CHARLIEAbility_FindGrandpa_Duration.GAE_CHARLIEAbility_FindGrandpa_Duration_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_CHARLIEAbility_FindGrandpa_Duration_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAE_CHARLIEAbility_FindGrandPa_Cooldown.GAE_CHARLIEAbility_FindGrandPa_Cooldown_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_CHARLIEAbility_FindGrandPa_Cooldown_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAE_CHARILEAbility_FindGrandpa_RechargeBuff.GAE_CHARILEAbility_FindGrandpa_RechargeBuff_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_CHARILEAbility_FindGrandpa_RechargeBuff_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAE_CHARLIEAbility_GrantCharges.GAE_CHARLIEAbility_GrantCharges_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_CHARLIEAbility_GrantCharges_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseAbility.GAA_CHARLIE_UseAbility_C
/// Size: 0x05F9 (1529 bytes) (0x0005E0 - 0x0005F9) align 8 MaxSize: 0x05F9
class UGAA_CHARLIE_UseAbility_C : public UBBQAbilityLocateGrandpa
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05E0   (0x0008)  
	FActiveGameplayEffectHandle                        DurationEffectHandle;                                       // 0x05E8   (0x0008)  
	class UAnimMontage*                                MontageInUse;                                               // 0x05F0   (0x0008)  
	TEnumAsByte<ECHARLIELocateState>                   LocateState;                                                // 0x05F8   (0x0001)  


	/// Functions
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseAbility.GAA_CHARLIE_UseAbility_C.SelectMontageToPlay
	UAnimMontage* SelectMontageToPlay() // [0x2438a30] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	{
		typedef class UAnimMontage* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseAbility.GAA_CHARLIE_UseAbility_C.InvalidHandle_2CF6556E48D67D4DA490EF819D18F07B
	void InvalidHandle_2CF6556E48D67D4DA490EF819D18F07B(FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo) // [0x2438a30] HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayEffectRemovalInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(GameplayEffectRemovalInfo);
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseAbility.GAA_CHARLIE_UseAbility_C.OnRemoved_2CF6556E48D67D4DA490EF819D18F07B
	void OnRemoved_2CF6556E48D67D4DA490EF819D18F07B(FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo) // [0x2438a30] HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayEffectRemovalInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(GameplayEffectRemovalInfo);
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseAbility.GAA_CHARLIE_UseAbility_C.Added_61176B94430C0FBFEEB948A51B8B24C7
	void Added_61176B94430C0FBFEEB948A51B8B24C7() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseAbility.GAA_CHARLIE_UseAbility_C.Added_296332A747BCCA9A26ABB3AFB7F9CD43
	void Added_296332A747BCCA9A26ABB3AFB7F9CD43() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseAbility.GAA_CHARLIE_UseAbility_C.Added_F45C7AE149C3500C25B321A7E009851E
	void Added_F45C7AE149C3500C25B321A7E009851E() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func();
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseAbility.GAA_CHARLIE_UseAbility_C.K2_OnEndAbility
	void K2_OnEndAbility(bool bWasCancelled) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(bWasCancelled);
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseAbility.GAA_CHARLIE_UseAbility_C.K2_ActivateAbility
	void K2_ActivateAbility() // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func();
	}
	// Function /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/GAA_CHARLIE_UseAbility.GAA_CHARLIE_UseAbility_C.ExecuteUbergraph_GAA_CHARLIE_UseAbility
	void ExecuteUbergraph_GAA_CHARLIE_UseAbility(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(EntryPoint);
	}
};

/// Class /Game/BBQAddOn_Charlie/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/CHARLIEAbility/BP_BBQSSP_CHARLIE_Ability.BP_BBQSSP_CHARLIE_Ability_C
/// Size: 0x0390 (912 bytes) (0x000390 - 0x000390) align 8 MaxSize: 0x0390
class UBP_BBQSSP_CHARLIE_Ability_C : public UBBQStarSignPerk
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UBP_VarSet_DLC1_CHARLIE_C) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UBP_BBQ_Calculation_TalkAndRun_Duration_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_TalkAndRun_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UGAE_PerkUI_PepTalk_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UBP_BBQ_Calculation_PepTalk_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UGAE_Perk_PepTalk_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_BBQPerk_TalkAndRun_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UBP_BBQ_Calculation_CHARLIESweetTalk_ActiveTime_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_CHARLIESweetTalkGrandpa_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_CHARLIESweetTalkCooldownDelay_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_CHARLIE_EndRechage_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UGAE_CHARLIEAbilityRecharge_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_CHARLIEAbility_SweetTralkGrandpa_Cooldown_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_CHARLIEAbility_SweetTalkCost_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_CHARLIEAbility_SweetTalk_Duration_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_Dietician_LV1_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UBP_BBQ_Calculation_MariaOnCross_C) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UGAE_MariaOnACross_Active_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_Dietician_Reset_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_Dietician_ChargeSpent_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UBPI_DLC1_CHARLIE_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGAE_Dietician_LV3_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_Dietician_LV2_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_Dietician_Active_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAA_CHARLIE_UseSweetTalk_C) == 0x05F0); // 1520 bytes (0x0005E0 - 0x0005F0)
static_assert(sizeof(ABP_CB_SweetTalkGrandpa_C) == 0x0400); // 1024 bytes (0x0003F0 - 0x000400)
static_assert(sizeof(UBP_BBQPerk_TalkAndRun_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_PepTalk_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_MariaOnACross_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_Dietician_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQ_Calculation_CHARLIEFindGrandpa_CooldownDuration_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_CHARLIEFindGrandpa_ActiveTime_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_CHARLIEFindGrandpa_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_CHARLIEAbility_FindGrandpa_StartingCooldownCalculation_C) == 0x0138); // 312 bytes (0x000138 - 0x000138)
static_assert(sizeof(UGAE_CHARLIEAbility_Starting_Cooldown_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_CHARLIEAbility_FindGrandpaCost_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_CHARLIEAbility_FindGrandpa_Duration_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_CHARLIEAbility_FindGrandPa_Cooldown_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_CHARILEAbility_FindGrandpa_RechargeBuff_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_CHARLIEAbility_GrantCharges_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAA_CHARLIE_UseAbility_C) == 0x05F9); // 1529 bytes (0x0005E0 - 0x0005F9)
static_assert(sizeof(UBP_BBQSSP_CHARLIE_Ability_C) == 0x0390); // 912 bytes (0x000390 - 0x000390)
static_assert(offsetof(UGAA_CHARLIE_UseSweetTalk_C, UberGraphFrame) == 0x05E0);
static_assert(offsetof(UGAA_CHARLIE_UseSweetTalk_C, DurationEffectHandle) == 0x05E8);
static_assert(offsetof(ABP_CB_SweetTalkGrandpa_C, UberGraphFrame) == 0x03F0);
static_assert(offsetof(ABP_CB_SweetTalkGrandpa_C, Grandpa_Ref) == 0x03F8);
static_assert(offsetof(UGAA_CHARLIE_UseAbility_C, UberGraphFrame) == 0x05E0);
static_assert(offsetof(UGAA_CHARLIE_UseAbility_C, DurationEffectHandle) == 0x05E8);
static_assert(offsetof(UGAA_CHARLIE_UseAbility_C, MontageInUse) == 0x05F0);
static_assert(offsetof(UGAA_CHARLIE_UseAbility_C, LocateState) == 0x05F8);
