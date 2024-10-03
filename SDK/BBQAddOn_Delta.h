
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
#include "Niagara.h"

#pragma pack(push, 0x1)

class ABP_CB_DELTAPickUpPowder_C;
class ABP_DELTA_PowderCloud_C;
class ABP_ProtectiveAuraCollider_C;
class UBPI_ContaminateItem_C;
class UBPI_DLC1_DELTA_C;
class UBPI_DLC1_DELTA_PowderCloud_C;
class UBP_BBQPerk_Bloodar_C;
class UBP_BBQPerk_Coagulant_C;
class UBP_BBQPerk_HandsOff_C;
class UBP_BBQPerk_NoisePollution_C;
class UBP_BBQPerk_ProtectiveAura_C;
class UBP_BBQPerk_TraceChemicals_C;
class UBP_BBQSSP_DELTA_Ability_C;
class UBP_BBQ_Calculation_DELTA_EffectDuration_C;
class UBP_BBQ_Calculation_DELTA_FamilyStaminaConsumption_C;
class UBP_BBQ_Calculation_DELTA_MedicalBenefits_C;
class UBP_BBQ_Calculation_DELTA_PowderCloud_RescueMedic_C;
class UBP_BBQ_Calculation_DELTA_UseCooldown_C;
class UBP_BBQ_Calculation_DELTA_UseCost_C;
class UBP_BBQ_Calculation_DELTA_VictimHeal_C;
class UBP_BBQ_Calculation_HandsOffDuration_C;
class UBP_BBQ_Calculation_NoisePollutionDuration_C;
class UBP_BBQ_Calculation_ProtectiveAura_C;
class UBP_VarSet_DLC1_DELTA_C;
class UGAA_BBQPerk_ProtectiveAura_C;
class UGAA_DELTA_UseAbility_C;
class UGAE_BBQPerk_Coagulant_UI_C;
class UGAE_BBQPerk_HandsOff_UI_C;
class UGAE_BBQPerk_NoisePollution_UI_C;
class UGAE_DELTAAbility_ConsumeFamilyStamina_C;
class UGAE_DELTAAbility_Duration_C;
class UGAE_DELTAAbility_FamilyEffect_C;
class UGAE_DELTAAbility_GrantCharges_C;
class UGAE_DELTAAbility_HealVictims_C;
class UGAE_DELTAAbility_MedicalBenefits_C;
class UGAE_DELTAAbility_PickedUpFlower_C;
class UGAE_DELTAAbility_RefreshUI_C;
class UGAE_DELTAAbility_RescueMedic_C;
class UGAE_DELTAAbility_UseCost_C;
class UGAE_DELTAAbility_Use_Cooldown_C;
class UGAE_DELTA_DrunkVisionAndMovement_C;
class UGAE_DELTA_PowderImmune_C;
class UGAE_ProtectiveAura_Active_C;
class UGAE_ProtectiveAura_Apply_C;

/// Class /Game/BBQAddOn_Delta/Data/VariableSets/BP_VarSet_DLC1_DELTA.BP_VarSet_DLC1_DELTA_C
/// Size: 0x00B4 (180 bytes) (0x000038 - 0x0000B4) align 8 MaxSize: 0x00B4
class UBP_VarSet_DLC1_DELTA_C : public UGameplayVariableSet
{ 
public:
	float                                              DELTAAbility_CooldownAmount;                                // 0x0038   (0x0004)  
	float                                              DELTAAbility_CooldownStarting;                              // 0x003C   (0x0004)  
	float                                              DELTAAbility_MaxSSPoints;                                   // 0x0040   (0x0004)  
	float                                              DELTAAbility_UseCost;                                       // 0x0044   (0x0004)  
	float                                              DELTAAbility_RechargeRate;                                  // 0x0048   (0x0004)  
	float                                              DELTAAbility_LowHealthThreshold;                            // 0x004C   (0x0004)  
	float                                              DELTAAbility_MedHealthThreshold;                            // 0x0050   (0x0004)  
	float                                              DELTAAbility_HighlightLength;                               // 0x0054   (0x0004)  
	float                                              DELTAAbility_ObjectHighlightDistance;                       // 0x0058   (0x0004)  
	float                                              DELTAAbility_DiscoveryHighlightLength;                      // 0x005C   (0x0004)  
	float                                              DELTAAbility_StartSSPoints;                                 // 0x0060   (0x0004)  
	float                                              DELTAAbility_PickFlowerCharge;                              // 0x0064   (0x0004)  
	float                                              DELTAAbility_PowderLifeSpan;                                // 0x0068   (0x0004)  
	float                                              DELTAAbility_PowderEffectDuration;                          // 0x006C   (0x0004)  
	float                                              DELTAAbility_ContaminateUseCost;                            // 0x0070   (0x0004)  
	float                                              DELTAAbility_ContaminatedTime;                              // 0x0074   (0x0004)  
	float                                              DELTAAbility_CloudSize;                                     // 0x0078   (0x0004)  
	float                                              DELTAAbility_NeutralizationTime;                            // 0x007C   (0x0004)  
	float                                              DELTAAbility_NoisePollutionHighlight;                       // 0x0080   (0x0004)  
	float                                              DELTAAbility_HandsOffDuration;                              // 0x0084   (0x0004)  
	float                                              DELTAAbility_BloodarRadius;                                 // 0x0088   (0x0004)  
	float                                              DELTAAbility_PAHealthPercentage;                            // 0x008C   (0x0004)  
	float                                              DELTAAbility_CloudFamilyStaminaConsumption;                 // 0x0090   (0x0004)  
	float                                              DELTAAbility_CloudVictimHealAmount;                         // 0x0094   (0x0004)  
	float                                              DELTAAbility_ProtectiveAura_Radius;                         // 0x0098   (0x0004)  
	float                                              DELTAAbility_ProtectiveAura_DamageReduction;                // 0x009C   (0x0004)  
	float                                              DELTAAbility_ProtectiveAura_AboveHealthThreshold;           // 0x00A0   (0x0004)  
	float                                              DELTAAbility_CoagulantPercentage;                           // 0x00A4   (0x0004)  
	float                                              DELTAAbility_TraceChemicalsRange;                           // 0x00A8   (0x0004)  
	float                                              DELTAAbility_ContaminatedBucketBlindedDuration;             // 0x00AC   (0x0004)  
	float                                              DELTAAbility_CloudThrowDistance;                            // 0x00B0   (0x0004)  
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/PerkCalculations/BP_BBQ_Calculation_HandsOffDuration.BP_BBQ_Calculation_HandsOffDuration_C
/// Size: 0x0044 (68 bytes) (0x000040 - 0x000044) align 8 MaxSize: 0x0044
class UBP_BBQ_Calculation_HandsOffDuration_C : public UBBQGameplayModMagnitudeCalc
{ 
public:
	float                                              HandsOffDuration;                                           // 0x0040   (0x0004)  


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/PerkCalculations/BP_BBQ_Calculation_HandsOffDuration.BP_BBQ_Calculation_HandsOffDuration_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/PerkCalculations/BP_BBQ_Calculation_NoisePollutionDuration.BP_BBQ_Calculation_NoisePollutionDuration_C
/// Size: 0x0044 (68 bytes) (0x000040 - 0x000044) align 8 MaxSize: 0x0044
class UBP_BBQ_Calculation_NoisePollutionDuration_C : public UBBQGameplayModMagnitudeCalc
{ 
public:
	float                                              NoisePollutionDuration;                                     // 0x0040   (0x0004)  


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/PerkCalculations/BP_BBQ_Calculation_NoisePollutionDuration.BP_BBQ_Calculation_NoisePollutionDuration_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_FamilyStaminaConsumption.BP_BBQ_Calculation_DELTA_FamilyStaminaConsumption_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_DELTA_FamilyStaminaConsumption_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_FamilyStaminaConsumption.BP_BBQ_Calculation_DELTA_FamilyStaminaConsumption_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_EffectDuration.BP_BBQ_Calculation_DELTA_EffectDuration_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_DELTA_EffectDuration_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_EffectDuration.BP_BBQ_Calculation_DELTA_EffectDuration_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_VictimHeal.BP_BBQ_Calculation_DELTA_VictimHeal_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_DELTA_VictimHeal_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_VictimHeal.BP_BBQ_Calculation_DELTA_VictimHeal_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_MedicalBenefits.BP_BBQ_Calculation_DELTA_MedicalBenefits_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_DELTA_MedicalBenefits_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_MedicalBenefits.BP_BBQ_Calculation_DELTA_MedicalBenefits_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_MedicalBenefits.GAE_DELTAAbility_MedicalBenefits_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_MedicalBenefits_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_HealVictims.GAE_DELTAAbility_HealVictims_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_HealVictims_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_FamilyEffect.GAE_DELTAAbility_FamilyEffect_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_FamilyEffect_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_ConsumeFamilyStamina.GAE_DELTAAbility_ConsumeFamilyStamina_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_ConsumeFamilyStamina_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTA_DrunkVisionAndMovement.GAE_DELTA_DrunkVisionAndMovement_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTA_DrunkVisionAndMovement_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/PerkUI/GAE_BBQPerk_NoisePollution_UI.GAE_BBQPerk_NoisePollution_UI_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_BBQPerk_NoisePollution_UI_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/PerkUI/GAE_BBQPerk_Coagulant_UI.GAE_BBQPerk_Coagulant_UI_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_BBQPerk_Coagulant_UI_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTA_PowderImmune.GAE_DELTA_PowderImmune_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTA_PowderImmune_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BPI_ContaminateItem.BPI_ContaminateItem_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_ContaminateItem_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BPI_ContaminateItem.BPI_ContaminateItem_C.OnPickedUp
	void OnPickedUp(ABBQBaseCharacter* GameSessionCharcater) // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(GameSessionCharcater);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BPI_ContaminateItem.BPI_ContaminateItem_C.OnContaminated
	void OnContaminated(ABBQGameSessionCharacter* ContaminateInstgator) // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQGameSessionCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(ContaminateInstgator);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/PerkUI/GAE_BBQPerk_HandsOff_UI.GAE_BBQPerk_HandsOff_UI_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_BBQPerk_HandsOff_UI_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Misc/BPI_DLC1_DELTA.BPI_DLC1_DELTA_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_DLC1_DELTA_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Misc/BPI_DLC1_DELTA.BPI_DLC1_DELTA_C.GetMothersIntuitionListFromPlayer
	// void GetMothersIntuitionListFromPlayer(TArray<AActor*>& InutuitionList);                                                 // [0x2438a30] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BBQAddOn_Delta/GamePlay/Misc/BPI_DLC1_DELTA.BPI_DLC1_DELTA_C.GetLineOfSightLocation
	void GetLineOfSightLocation(FVector& LOSLocation) // [0x2438a30] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(LOSLocation);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Misc/BPI_DLC1_DELTA_PowderCloud.BPI_DLC1_DELTA_PowderCloud_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_DLC1_DELTA_PowderCloud_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Misc/BPI_DLC1_DELTA_PowderCloud.BPI_DLC1_DELTA_PowderCloud_C.AffectedByPowderCloud
	void AffectedByPowderCloud(ABBQGameSessionCharacter* CloudInstigator) // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQGameSessionCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(CloudInstigator);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Misc/BPI_DLC1_DELTA_PowderCloud.BPI_DLC1_DELTA_PowderCloud_C.PERK_CoagulantBloodReduction
	void PERK_CoagulantBloodReduction(ABBQBaseCharacter* DeltaCharacter) // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(DeltaCharacter);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Misc/BPI_DLC1_DELTA_PowderCloud.BPI_DLC1_DELTA_PowderCloud_C.ReduceBloodVialAmount
	void ReduceBloodVialAmount() // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_PowderCloud_RescueMedic.BP_BBQ_Calculation_DELTA_PowderCloud_RescueMedic_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_DELTA_PowderCloud_RescueMedic_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_PowderCloud_RescueMedic.BP_BBQ_Calculation_DELTA_PowderCloud_RescueMedic_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_RefreshUI.GAE_DELTAAbility_RefreshUI_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_RefreshUI_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_PickedUpFlower.GAE_DELTAAbility_PickedUpFlower_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_PickedUpFlower_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_RescueMedic.GAE_DELTAAbility_RescueMedic_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_RescueMedic_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C
/// Size: 0x02E0 (736 bytes) (0x000278 - 0x0002E0) align 8 MaxSize: 0x02E0
class ABP_DELTA_PowderCloud_C : public ABBQPowderCloud
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0278   (0x0008)  
	class UBBQTriggerAreaComponent*                    TriggerArea;                                                // 0x0280   (0x0008)  
	class UNiagaraComponent*                           TempCloudVFX;                                               // 0x0288   (0x0008)  
	class UBBQFlickeringLightAudioComponent*           BBQFlickeringLightAudio;                                    // 0x0290   (0x0008)  
	float                                              CloudSize;                                                  // 0x0298   (0x0004)  
	float                                              In_Lifespan;                                                // 0x029C   (0x0004)  
	float                                              CloudNeutralizationTime;                                    // 0x02A0   (0x0004)  
	float                                              NeutralizedCloudLifeSpan;                                   // 0x02A4   (0x0004)  
	float                                              DefaultCloudSize;                                           // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	FTimerHandle                                       NeutaliseEvent;                                             // 0x02B0   (0x0008)  
	float                                              CloudSizeScale;                                             // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
	FTimerHandle                                       DeactivateEvent;                                            // 0x02C0   (0x0008)  
	class ABBQBaseCharacter*                           Other_Actor;                                                // 0x02C8   (0x0008)  
	float                                              CloudMeshDefaultRadius;                                     // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02D4   (0x0004)  MISSED
	class ABBQGameSessionCharacter*                    Owning_Session_Player;                                      // 0x02D8   (0x0008)  


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.AffectInitiallyOverlappedActors
	void AffectInitiallyOverlappedActors() // [0x2438a30] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.Try To Apply Gameplay Notification
	void TryToApplyGameplayNotification(AActor* Instigator, AActor* ActorHitByPowder) // [0x2438a30] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(AActor*, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Instigator, ActorHitByPowder);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.PERK Noise Pollution
	void PERKNoisePollution() // [0x2438a30] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.ConsumeFamilyStaminaAbility
	void ConsumeFamilyStaminaAbility(bool ActivateAbility, ABBQBaseCharacter* ActorInstigator) // [0x2438a30] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool, ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(ActivateAbility, ActorInstigator);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.DEPRECATED_HealVictimsAbility
	void DEPRECATED_HealVictimsAbility(bool ActivateAbility, ABBQBaseCharacter* ActorInstigator) // [0x2438a30] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool, ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(ActivateAbility, ActorInstigator);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.ReduceBloodVialAbility
	void ReduceBloodVialAbility() // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.GetOwningPlayerDELTA
	void GetOwningPlayerDELTA(ABBQBaseCharacter*& BBQPlayerVictim) // [0x2438a30] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(BBQPlayerVictim);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.ReceiveBeginPlay
	void ReceiveBeginPlay() // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.DeactiveVFX
	void DeactiveVFX() // [0x2438a30] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.NeutraliseCloud
	void NeutraliseCloud() // [0x2438a30] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.BndEvt__BP_DELTA_PowderCloud_TriggerArea_K2Node_ComponentBoundEvent_2_OnTriggerStart__DelegateSignature
	void BndEvt__BP_DELTA_PowderCloud_TriggerArea_K2Node_ComponentBoundEvent_2_OnTriggerStart__DelegateSignature(ABBQGameSessionCharacter* Player) // [0x2438a30] BlueprintEvent       
	{
		typedef void (*FuncPtr)(ABBQGameSessionCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(Player);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.BndEvt__BP_DELTA_PowderCloud_TriggerArea_K2Node_ComponentBoundEvent_3_OnTriggerEnd__DelegateSignature
	void BndEvt__BP_DELTA_PowderCloud_TriggerArea_K2Node_ComponentBoundEvent_3_OnTriggerEnd__DelegateSignature(ABBQGameSessionCharacter* Player) // [0x2438a30] BlueprintEvent       
	{
		typedef void (*FuncPtr)(ABBQGameSessionCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(Player);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_DELTA_PowderCloud.BP_DELTA_PowderCloud_C.ExecuteUbergraph_BP_DELTA_PowderCloud
	void ExecuteUbergraph_BP_DELTA_PowderCloud(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(EntryPoint);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_CB_DELTAPickUpPowder.BP_CB_DELTAPickUpPowder_C
/// Size: 0x0450 (1104 bytes) (0x0003F0 - 0x000450) align 16 MaxSize: 0x0450
class ABP_CB_DELTAPickUpPowder_C : public ABP_CB_AnimatedHold_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03F0   (0x0008)  
	FGameplayVariableFloat                             ContaminatingItemSpeed;                                     // 0x03F8   (0x0058)  


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_CB_DELTAPickUpPowder.BP_CB_DELTAPickUpPowder_C.Server_OnHoldCompleted
	void Server_OnHoldCompleted() // [0x2438a30] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_CB_DELTAPickUpPowder.BP_CB_DELTAPickUpPowder_C.BP_OnEnterBehaviour
	void BP_OnEnterBehaviour(ABBQCharacterBehaviour* OldBehaviour) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQCharacterBehaviour*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(OldBehaviour);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_CB_DELTAPickUpPowder.BP_CB_DELTAPickUpPowder_C.ExecuteUbergraph_BP_CB_DELTAPickUpPowder
	void ExecuteUbergraph_BP_CB_DELTAPickUpPowder(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(EntryPoint);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_BBQPerk_TraceChemicals.BP_BBQPerk_TraceChemicals_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_TraceChemicals_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/PerkCalculations/BP_BBQ_Calculation_ProtectiveAura.BP_BBQ_Calculation_ProtectiveAura_C
/// Size: 0x0044 (68 bytes) (0x000040 - 0x000044) align 8 MaxSize: 0x0044
class UBP_BBQ_Calculation_ProtectiveAura_C : public UBBQGameplayModMagnitudeCalc
{ 
public:
	float                                              BloodarDuration;                                            // 0x0040   (0x0004)  


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/PerkCalculations/BP_BBQ_Calculation_ProtectiveAura.BP_BBQ_Calculation_ProtectiveAura_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/GAE_ProtectiveAura_Apply.GAE_ProtectiveAura_Apply_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_ProtectiveAura_Apply_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/GAE_ProtectiveAura_Active.GAE_ProtectiveAura_Active_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_ProtectiveAura_Active_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C
/// Size: 0x025D (605 bytes) (0x000228 - 0x00025D) align 8 MaxSize: 0x025D
class ABP_ProtectiveAuraCollider_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0228   (0x0008)  
	class USphereComponent*                            Sphere;                                                     // 0x0230   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0238   (0x0008)  
	TArray<class ABBQGameSessionCharacter*>            In_Range_List;                                              // 0x0240   (0x0010)  
	class ABBQGameSessionCharacter*                    OwnerCharacter;                                             // 0x0250   (0x0008)  
	float                                              HealthThreshold;                                            // 0x0258   (0x0004)  
	bool                                               IsActive;                                                   // 0x025C   (0x0001)  


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.IsAboveHealthThreshold
	void IsAboveHealthThreshold(bool& IsAboveThreshold) // [0x2438a30] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(IsAboveThreshold);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.OwnerHasAuthority
	void OwnerHasAuthority(bool& HasAuthority) // [0x2438a30] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(HasAuthority);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.IsClearLineOfSightToTarget
	void IsClearLineOfSightToTarget(ABBQGameSessionCharacter* TargetActor, bool& HasLOS) // [0x2438a30] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	{
		typedef void (*FuncPtr)(ABBQGameSessionCharacter*, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(TargetActor, HasLOS);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.ReceiveBeginPlay
	void ReceiveBeginPlay() // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(DeltaSeconds);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.BndEvt__BP_ProtectiveAuraCollider_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__BP_ProtectiveAuraCollider_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) // [0x2438a30] BlueprintEvent       
	{
		typedef void (*FuncPtr)(UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.BndEvt__BP_ProtectiveAuraCollider_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__BP_ProtectiveAuraCollider_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) // [0x2438a30] BlueprintEvent       
	{
		typedef void (*FuncPtr)(UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.AddToList
	void AddToList(ABBQGameSessionCharacter* TargetActor) // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQGameSessionCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(TargetActor);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.RemoveFromList
	void RemoveFromList(ABBQGameSessionCharacter* TargetActor) // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQGameSessionCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(TargetActor);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.RemoveInvalidItems
	void RemoveInvalidItems() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.Try_RemoveProtectiveAuraEffect
	void Try_RemoveProtectiveAuraEffect(ABBQBaseCharacter* Target) // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(Target);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.Try_ApplyProtectiveAuraEffect
	void Try_ApplyProtectiveAuraEffect(ABBQBaseCharacter* Target) // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(Target);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.EnableCollider
	void EnableCollider(bool Enabled) // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(Enabled);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_ProtectiveAuraCollider.BP_ProtectiveAuraCollider_C.ExecuteUbergraph_BP_ProtectiveAuraCollider
	void ExecuteUbergraph_BP_ProtectiveAuraCollider(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(EntryPoint);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_UseCooldown.BP_BBQ_Calculation_DELTA_UseCooldown_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_DELTA_UseCooldown_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_UseCooldown.BP_BBQ_Calculation_DELTA_UseCooldown_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_Duration.GAE_DELTAAbility_Duration_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_Duration_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_GrantCharges.GAE_DELTAAbility_GrantCharges_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_GrantCharges_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/GAA_BBQPerk_ProtectiveAura.GAA_BBQPerk_ProtectiveAura_C
/// Size: 0x0500 (1280 bytes) (0x0004F0 - 0x000500) align 8 MaxSize: 0x0500
class UGAA_BBQPerk_ProtectiveAura_C : public UBBQGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04F0   (0x0008)  
	class ABP_ProtectiveAuraCollider_C*                Aura;                                                       // 0x04F8   (0x0008)  


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/GAA_BBQPerk_ProtectiveAura.GAA_BBQPerk_ProtectiveAura_C.Added_3F17F2B54C550C8E031FA29226E88E8A
	void Added_3F17F2B54C550C8E031FA29226E88E8A() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/GAA_BBQPerk_ProtectiveAura.GAA_BBQPerk_ProtectiveAura_C.K2_OnEndAbility
	void K2_OnEndAbility(bool bWasCancelled) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(bWasCancelled);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/GAA_BBQPerk_ProtectiveAura.GAA_BBQPerk_ProtectiveAura_C.K2_ActivateAbility
	void K2_ActivateAbility() // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/GAA_BBQPerk_ProtectiveAura.GAA_BBQPerk_ProtectiveAura_C.ExecuteUbergraph_GAA_BBQPerk_ProtectiveAura
	void ExecuteUbergraph_GAA_BBQPerk_ProtectiveAura(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(EntryPoint);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_BBQPerk_ProtectiveAura.BP_BBQPerk_ProtectiveAura_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_ProtectiveAura_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_BBQPerk_NoisePollution.BP_BBQPerk_NoisePollution_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_NoisePollution_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_BBQPerk_HandsOff.BP_BBQPerk_HandsOff_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_HandsOff_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_BBQPerk_Coagulant.BP_BBQPerk_Coagulant_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_Coagulant_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/BP_BBQPerk_Bloodar.BP_BBQPerk_Bloodar_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_Bloodar_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQSSP_DELTA_Ability.BP_BBQSSP_DELTA_Ability_C
/// Size: 0x0390 (912 bytes) (0x000390 - 0x000390) align 8 MaxSize: 0x0390
class UBP_BBQSSP_DELTA_Ability_C : public UBBQStarSignPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_Use_Cooldown.GAE_DELTAAbility_Use_Cooldown_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_Use_Cooldown_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C
/// Size: 0x06A1 (1697 bytes) (0x0005E0 - 0x0006A1) align 16 MaxSize: 0x06A1
class UGAA_DELTA_UseAbility_C : public UBBQStarSignAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05E0   (0x0008)  
	FActiveGameplayEffectHandle                        DurationEffectHandle;                                       // 0x05E8   (0x0008)  
	float                                              PosionCloudOraginOffset;                                    // 0x05F0   (0x0004)  
	float                                              SpawnDelay;                                                 // 0x05F4   (0x0004)  
	float                                              AnimMontagePlayRate;                                        // 0x05F8   (0x0004)  
	float                                              BlowDistance;                                               // 0x05FC   (0x0004)  
	float                                              HeightOffset;                                               // 0x0600   (0x0004)  
	float                                              HeightOffsetCrouched;                                       // 0x0604   (0x0004)  
	class UClass*                                      PoisionCloudClass;                                          // 0x0608   (0x0008)  
	FGameplayVariableFloat                             PosionCloudLifetime;                                        // 0x0610   (0x0058)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0668   (0x0008)  MISSED
	FTransform                                         Spawn_Transform;                                            // 0x0670   (0x0030)  
	bool                                               IsSpawned;                                                  // 0x06A0   (0x0001)  


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.SpawnPoisonCloud
	void SpawnPoisonCloud() // [0x2438a30] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.SelectThrowMontage
	void SelectThrowMontage(AActor* Instigator, bool& IsMoving, UAnimMontage*& MontageToPlay) // [0x2438a30] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(AActor*, bool&, UAnimMontage*&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Instigator, IsMoving, MontageToPlay);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.GetSlideInPlaceLocation
	void GetSlideInPlaceLocation(ABBQGameSessionCharacterAnimated* Player, FRotator TargetRotation, FVector& Location) // [0x2438a30] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQGameSessionCharacterAnimated*, FRotator, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Player, TargetRotation, Location);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.OutlineActor
	void OutlineActor(AActor* TargetActor) // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(TargetActor);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.OutlinePlayer
	void OutlinePlayer(ABBQBaseCharacter* TargetPlayer) // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(TargetPlayer);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.InvalidHandle_CD982A774ECBF6D7CB78ADBD5911FC26
	void InvalidHandle_CD982A774ECBF6D7CB78ADBD5911FC26(FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo) // [0x2438a30] HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayEffectRemovalInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(GameplayEffectRemovalInfo);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.OnRemoved_CD982A774ECBF6D7CB78ADBD5911FC26
	void OnRemoved_CD982A774ECBF6D7CB78ADBD5911FC26(FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo) // [0x2438a30] HasOutParms|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayEffectRemovalInfo&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(GameplayEffectRemovalInfo);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.Added_9E8749374312F7880013E387A70C20DF
	void Added_9E8749374312F7880013E387A70C20DF() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.OnCancelled_EEAEF53B41E33FB99A10A58CEBC3ACA2
	void OnCancelled_EEAEF53B41E33FB99A10A58CEBC3ACA2() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.OnInterrupted_EEAEF53B41E33FB99A10A58CEBC3ACA2
	void OnInterrupted_EEAEF53B41E33FB99A10A58CEBC3ACA2() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.OnBlendOut_EEAEF53B41E33FB99A10A58CEBC3ACA2
	void OnBlendOut_EEAEF53B41E33FB99A10A58CEBC3ACA2() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.OnCompleted_EEAEF53B41E33FB99A10A58CEBC3ACA2
	void OnCompleted_EEAEF53B41E33FB99A10A58CEBC3ACA2() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.OutlineActorsDiscovered
	void OutlineActorsDiscovered() // [0x2438a30] BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.K2_ActivateAbility
	void K2_ActivateAbility() // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func();
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.K2_OnEndAbility
	void K2_OnEndAbility(bool bWasCancelled) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(bWasCancelled);
	}
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAA_DELTA_UseAbility.GAA_DELTA_UseAbility_C.ExecuteUbergraph_GAA_DELTA_UseAbility
	void ExecuteUbergraph_GAA_DELTA_UseAbility(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(EntryPoint);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_UseCost.BP_BBQ_Calculation_DELTA_UseCost_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_DELTA_UseCost_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/BP_BBQ_Calculation_DELTA_UseCost.BP_BBQ_Calculation_DELTA_UseCost_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Delta/GamePlay/Player/Abilities/Perks/VictimStarSignPerks/DELTAAbility/GAE_DELTAAbility_UseCost.GAE_DELTAAbility_UseCost_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_DELTAAbility_UseCost_C : public UBBQGameplayEffect
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UBP_VarSet_DLC1_DELTA_C) == 0x00B4); // 180 bytes (0x000038 - 0x0000B4)
static_assert(sizeof(UBP_BBQ_Calculation_HandsOffDuration_C) == 0x0044); // 68 bytes (0x000040 - 0x000044)
static_assert(sizeof(UBP_BBQ_Calculation_NoisePollutionDuration_C) == 0x0044); // 68 bytes (0x000040 - 0x000044)
static_assert(sizeof(UBP_BBQ_Calculation_DELTA_FamilyStaminaConsumption_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_DELTA_EffectDuration_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_DELTA_VictimHeal_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_DELTA_MedicalBenefits_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UGAE_DELTAAbility_MedicalBenefits_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_DELTAAbility_HealVictims_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_DELTAAbility_FamilyEffect_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_DELTAAbility_ConsumeFamilyStamina_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_DELTA_DrunkVisionAndMovement_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_BBQPerk_NoisePollution_UI_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_BBQPerk_Coagulant_UI_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_DELTA_PowderImmune_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UBPI_ContaminateItem_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGAE_BBQPerk_HandsOff_UI_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UBPI_DLC1_DELTA_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBPI_DLC1_DELTA_PowderCloud_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBP_BBQ_Calculation_DELTA_PowderCloud_RescueMedic_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UGAE_DELTAAbility_RefreshUI_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_DELTAAbility_PickedUpFlower_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_DELTAAbility_RescueMedic_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(ABP_DELTA_PowderCloud_C) == 0x02E0); // 736 bytes (0x000278 - 0x0002E0)
static_assert(sizeof(ABP_CB_DELTAPickUpPowder_C) == 0x0450); // 1104 bytes (0x0003F0 - 0x000450)
static_assert(sizeof(UBP_BBQPerk_TraceChemicals_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQ_Calculation_ProtectiveAura_C) == 0x0044); // 68 bytes (0x000040 - 0x000044)
static_assert(sizeof(UGAE_ProtectiveAura_Apply_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_ProtectiveAura_Active_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(ABP_ProtectiveAuraCollider_C) == 0x025D); // 605 bytes (0x000228 - 0x00025D)
static_assert(sizeof(UBP_BBQ_Calculation_DELTA_UseCooldown_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UGAE_DELTAAbility_Duration_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_DELTAAbility_GrantCharges_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAA_BBQPerk_ProtectiveAura_C) == 0x0500); // 1280 bytes (0x0004F0 - 0x000500)
static_assert(sizeof(UBP_BBQPerk_ProtectiveAura_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_NoisePollution_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_HandsOff_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_Coagulant_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_Bloodar_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQSSP_DELTA_Ability_C) == 0x0390); // 912 bytes (0x000390 - 0x000390)
static_assert(sizeof(UGAE_DELTAAbility_Use_Cooldown_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAA_DELTA_UseAbility_C) == 0x06A1); // 1697 bytes (0x0005E0 - 0x0006A1)
static_assert(sizeof(UBP_BBQ_Calculation_DELTA_UseCost_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UGAE_DELTAAbility_UseCost_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(offsetof(ABP_DELTA_PowderCloud_C, UberGraphFrame) == 0x0278);
static_assert(offsetof(ABP_DELTA_PowderCloud_C, TriggerArea) == 0x0280);
static_assert(offsetof(ABP_DELTA_PowderCloud_C, TempCloudVFX) == 0x0288);
static_assert(offsetof(ABP_DELTA_PowderCloud_C, BBQFlickeringLightAudio) == 0x0290);
static_assert(offsetof(ABP_DELTA_PowderCloud_C, NeutaliseEvent) == 0x02B0);
static_assert(offsetof(ABP_DELTA_PowderCloud_C, DeactivateEvent) == 0x02C0);
static_assert(offsetof(ABP_DELTA_PowderCloud_C, Other_Actor) == 0x02C8);
static_assert(offsetof(ABP_DELTA_PowderCloud_C, Owning_Session_Player) == 0x02D8);
static_assert(offsetof(ABP_CB_DELTAPickUpPowder_C, UberGraphFrame) == 0x03F0);
static_assert(offsetof(ABP_CB_DELTAPickUpPowder_C, ContaminatingItemSpeed) == 0x03F8);
static_assert(offsetof(ABP_ProtectiveAuraCollider_C, UberGraphFrame) == 0x0228);
static_assert(offsetof(ABP_ProtectiveAuraCollider_C, Sphere) == 0x0230);
static_assert(offsetof(ABP_ProtectiveAuraCollider_C, DefaultSceneRoot) == 0x0238);
static_assert(offsetof(ABP_ProtectiveAuraCollider_C, In_Range_List) == 0x0240);
static_assert(offsetof(ABP_ProtectiveAuraCollider_C, OwnerCharacter) == 0x0250);
static_assert(offsetof(UGAA_BBQPerk_ProtectiveAura_C, UberGraphFrame) == 0x04F0);
static_assert(offsetof(UGAA_BBQPerk_ProtectiveAura_C, Aura) == 0x04F8);
static_assert(offsetof(UGAA_DELTA_UseAbility_C, UberGraphFrame) == 0x05E0);
static_assert(offsetof(UGAA_DELTA_UseAbility_C, DurationEffectHandle) == 0x05E8);
static_assert(offsetof(UGAA_DELTA_UseAbility_C, PoisionCloudClass) == 0x0608);
static_assert(offsetof(UGAA_DELTA_UseAbility_C, PosionCloudLifetime) == 0x0610);
static_assert(offsetof(UGAA_DELTA_UseAbility_C, Spawn_Transform) == 0x0670);
