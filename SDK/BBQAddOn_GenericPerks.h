
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BBQCore.h"
#include "BBQGameSession.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "GameplayAbilities.h"
#include "GameplayTags.h"
#include "GameplayVariables.h"

#pragma pack(push, 0x1)

class UBPI_DLC1_ForwardThinking_C;
class UBP_BBQPerk_ArtfulDodger_C;
class UBP_BBQPerk_BackForBlood_C;
class UBP_BBQPerk_BarrierBreaker_C;
class UBP_BBQPerk_BloodclotCry_C;
class UBP_BBQPerk_CrimsonCocktail_C;
class UBP_BBQPerk_DoOrDie_C;
class UBP_BBQPerk_FirstInLastOut_C;
class UBP_BBQPerk_ForwardThinking_C;
class UBP_BBQPerk_FreshIsBest_C;
class UBP_BBQPerk_NoTimeToBleed_C;
class UBP_BBQPerk_SeeingRed_C;
class UBP_BBQPerk_SpringClean_C;
class UBP_BBQPerk_WellMarker_C;
class UBP_BBQPerk_WhiteMeat_C;
class UBP_BBQPerk_Wired_C;
class UBP_BBQ_Calculation_BackForBlood_C;
class UBP_BBQ_Calculation_BloodclotCry_C;
class UBP_BBQ_Calculation_ForwardThinking_C;
class UBP_BBQ_Calculation_NoTimeToBleed_C;
class UBP_BBQ_Calculation_SeeingRed_Duration_C;
class UBP_BBQ_Calculation_SpringClean_C;
class UBP_BBQ_Calculation_WellMarker_C;
class UBP_BBQ_Calculation_Wired_Duration_C;
class UBP_VarSet_GenericPerks_C;
class UGAA_BBQPerk_SeeingRedApplied_C;
class UGAE_BBQPerk_ArtfulDodger_Active_C;
class UGAE_BBQPerk_ForwardThinking_UI_C;
class UGAE_NoTimeToBleed_Active_C;
class UGAE_PerkUI_BackForBlood_C;
class UGAE_Perk_BackForBlood_C;
class UGAE_Perk_BloodclotCry_C;
class UGAE_Perk_SpringClean_C;
class UGAE_SeeingRed_Active_C;
class UGAE_SeeingRed_Applied_C;
class UGAE_WellMarker_Active_C;
class UGAE_Wired_Active_C;

/// Class /Game/BBQAddOn_GenericPerks/Data/VariableSets/BP_VarSet_GenericPerks.BP_VarSet_GenericPerks_C
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UBP_VarSet_GenericPerks_C : public UGameplayVariableSet
{ 
public:
	float                                              PERK_SeeingRed_Duration;                                    // 0x0038   (0x0004)  
	float                                              CHARLIEAbility_ForwardThinkingHighlightDuration;            // 0x003C   (0x0004)  
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Effects/GAE_PerkUI_BackForBlood.GAE_PerkUI_BackForBlood_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_PerkUI_BackForBlood_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Effects/BP_BBQ_Calculation_BackForBlood.BP_BBQ_Calculation_BackForBlood_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_BackForBlood_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Effects/BP_BBQ_Calculation_BackForBlood.BP_BBQ_Calculation_BackForBlood_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Effects/BP_BBQ_Calculation_BloodclotCry.BP_BBQ_Calculation_BloodclotCry_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_BloodclotCry_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Effects/BP_BBQ_Calculation_BloodclotCry.BP_BBQ_Calculation_BloodclotCry_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkUI/BP_BBQ_Calculation_NoTimeToBleed.BP_BBQ_Calculation_NoTimeToBleed_C
/// Size: 0x0044 (68 bytes) (0x000040 - 0x000044) align 8 MaxSize: 0x0044
class UBP_BBQ_Calculation_NoTimeToBleed_C : public UBBQGameplayModMagnitudeCalc
{ 
public:
	float                                              NoTimeToBleedDurationDuration;                              // 0x0040   (0x0004)  


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkUI/BP_BBQ_Calculation_NoTimeToBleed.BP_BBQ_Calculation_NoTimeToBleed_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkUI/BP_BBQ_Calculation_WellMarker.BP_BBQ_Calculation_WellMarker_C
/// Size: 0x0044 (68 bytes) (0x000040 - 0x000044) align 8 MaxSize: 0x0044
class UBP_BBQ_Calculation_WellMarker_C : public UBBQGameplayModMagnitudeCalc
{ 
public:
	float                                              WellMarkerDuration;                                         // 0x0040   (0x0004)  


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkUI/BP_BBQ_Calculation_WellMarker.BP_BBQ_Calculation_WellMarker_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkGAE/GAA_BBQPerk_SeeingRedApplied.GAA_BBQPerk_SeeingRedApplied_C
/// Size: 0x04F8 (1272 bytes) (0x0004F0 - 0x0004F8) align 8 MaxSize: 0x04F8
class UGAA_BBQPerk_SeeingRedApplied_C : public UBBQGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04F0   (0x0008)  


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkGAE/GAA_BBQPerk_SeeingRedApplied.GAA_BBQPerk_SeeingRedApplied_C.K2_ShouldAbilityRespondToEvent
	bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) // [0x2438a30] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)(FGameplayAbilityActorInfo, FGameplayEventData);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(ActorInfo, Payload);
	}
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkGAE/GAA_BBQPerk_SeeingRedApplied.GAA_BBQPerk_SeeingRedApplied_C.K2_CanActivateAbility
	bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags) // [0x2438a30] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)(FGameplayAbilityActorInfo, FGameplayAbilitySpecHandle, FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(ActorInfo, Handle, RelevantTags);
	}
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkGAE/GAA_BBQPerk_SeeingRedApplied.GAA_BBQPerk_SeeingRedApplied_C.K2_ActivateAbility
	void K2_ActivateAbility() // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkGAE/GAA_BBQPerk_SeeingRedApplied.GAA_BBQPerk_SeeingRedApplied_C.K2_OnEndAbility
	void K2_OnEndAbility(bool bWasCancelled) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(bWasCancelled);
	}
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkGAE/GAA_BBQPerk_SeeingRedApplied.GAA_BBQPerk_SeeingRedApplied_C.BP_OnGiveAbility
	void BP_OnGiveAbility(FGameplayAbilityActorInfo& ActorInfo, FGameplayAbilitySpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayAbilityActorInfo&, FGameplayAbilitySpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(ActorInfo, Spec);
	}
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkGAE/GAA_BBQPerk_SeeingRedApplied.GAA_BBQPerk_SeeingRedApplied_C.ExecuteUbergraph_GAA_BBQPerk_SeeingRedApplied
	void ExecuteUbergraph_GAA_BBQPerk_SeeingRedApplied(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(EntryPoint);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQ_Calculation_SeeingRed_Duration.BP_BBQ_Calculation_SeeingRed_Duration_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_SeeingRed_Duration_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQ_Calculation_SeeingRed_Duration.BP_BBQ_Calculation_SeeingRed_Duration_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Family/BP_BBQ_Calculation_Wired_Duration.BP_BBQ_Calculation_Wired_Duration_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_Wired_Duration_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Family/BP_BBQ_Calculation_Wired_Duration.BP_BBQ_Calculation_Wired_Duration_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkGAE/GAE_SeeingRed_Applied.GAE_SeeingRed_Applied_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_SeeingRed_Applied_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkUI/GAE_WellMarker_Active.GAE_WellMarker_Active_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_WellMarker_Active_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkUI/GAE_NoTimeToBleed_Active.GAE_NoTimeToBleed_Active_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_NoTimeToBleed_Active_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkGAE/GAE_BBQPerk_ArtfulDodger_Active.GAE_BBQPerk_ArtfulDodger_Active_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_BBQPerk_ArtfulDodger_Active_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Effects/GAE_Perk_BloodclotCry.GAE_Perk_BloodclotCry_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Perk_BloodclotCry_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Effects/GAE_Perk_BackForBlood.GAE_Perk_BackForBlood_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Perk_BackForBlood_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkUI/GAE_SeeingRed_Active.GAE_SeeingRed_Active_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_SeeingRed_Active_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BPI_DLC1_ForwardThinking.BPI_DLC1_ForwardThinking_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBPI_DLC1_ForwardThinking_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BPI_DLC1_ForwardThinking.BPI_DLC1_ForwardThinking_C.BPI_ForwardThinking
	void BPI_ForwardThinking(ABBQGameSessionCharacter* PerkUser) // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQGameSessionCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(PerkUser);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkUI/BP_BBQ_Calculation_ForwardThinking.BP_BBQ_Calculation_ForwardThinking_C
/// Size: 0x0044 (68 bytes) (0x000040 - 0x000044) align 8 MaxSize: 0x0044
class UBP_BBQ_Calculation_ForwardThinking_C : public UBBQGameplayModMagnitudeCalc
{ 
public:
	float                                              ForwardThinkingDurationDuration;                            // 0x0040   (0x0004)  


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkUI/BP_BBQ_Calculation_ForwardThinking.BP_BBQ_Calculation_ForwardThinking_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/PerkUI/GAE_BBQPerk_ForwardThinking_UI.GAE_BBQPerk_ForwardThinking_UI_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_BBQPerk_ForwardThinking_UI_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Family/GAE_Wired_Active.GAE_Wired_Active_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Wired_Active_C : public UBBQGameplayEffect
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_WhiteMeat.BP_BBQPerk_WhiteMeat_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_WhiteMeat_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_WellMarker.BP_BBQPerk_WellMarker_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_WellMarker_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_SeeingRed.BP_BBQPerk_SeeingRed_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_SeeingRed_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_NoTimeToBleed.BP_BBQPerk_NoTimeToBleed_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_NoTimeToBleed_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_FirstInLastOut.BP_BBQPerk_FirstInLastOut_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_FirstInLastOut_C : public UBBQPerk
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_FirstInLastOut.BP_BBQPerk_FirstInLastOut_C.ShouldBeActive
	bool ShouldBeActive(ABBQBaseCharacter* Character) // [0x2438a30] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Character);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_DoOrDie.BP_BBQPerk_DoOrDie_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_DoOrDie_C : public UBBQPerk
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_DoOrDie.BP_BBQPerk_DoOrDie_C.ShouldBeActive
	bool ShouldBeActive(ABBQBaseCharacter* Character) // [0x2438a30] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Character);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_CrimsonCocktail.BP_BBQPerk_CrimsonCocktail_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_CrimsonCocktail_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_BloodclotCry.BP_BBQPerk_BloodclotCry_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_BloodclotCry_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_BackForBlood.BP_BBQPerk_BackForBlood_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_BackForBlood_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_ArtfulDodger.BP_BBQPerk_ArtfulDodger_C
/// Size: 0x02AC (684 bytes) (0x000288 - 0x0002AC) align 8 MaxSize: 0x02AC
class UBP_BBQPerk_ArtfulDodger_C : public UBBQPerk
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0288   (0x0008)  
	class ABBQBaseCharacter*                           Character;                                                  // 0x0290   (0x0008)  
	FGameplayTagBPDelegateHandle                       TagChangedDelegateHandler;                                  // 0x0298   (0x0008)  
	FGameplayVariableModHandle                         TriggerModHandle;                                           // 0x02A0   (0x000C)  


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_ArtfulDodger.BP_BBQPerk_ArtfulDodger_C.UpdateTriggerMods
	void UpdateTriggerMods() // [0x2438a30] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_ArtfulDodger.BP_BBQPerk_ArtfulDodger_C.OnTriggerTagChanged
	void OnTriggerTagChanged(FGameplayTag Tag, int32_t Count) // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)(FGameplayTag, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Tag, Count);
	}
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_ArtfulDodger.BP_BBQPerk_ArtfulDodger_C.OnActivated
	void OnActivated(ABBQBaseCharacter* Character) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Character);
	}
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_ArtfulDodger.BP_BBQPerk_ArtfulDodger_C.OnDeactivated
	void OnDeactivated(ABBQBaseCharacter* Character) // [0x2438a30] Event|Protected|BlueprintEvent 
	{
		typedef void (*FuncPtr)(ABBQBaseCharacter*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Character);
	}
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_ArtfulDodger.BP_BBQPerk_ArtfulDodger_C.ExecuteUbergraph_BP_BBQPerk_ArtfulDodger
	void ExecuteUbergraph_BP_BBQPerk_ArtfulDodger(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(EntryPoint);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Family/BP_BBQPerk_BarrierBreaker.BP_BBQPerk_BarrierBreaker_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_BarrierBreaker_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Family/BP_BBQPerk_Wired.BP_BBQPerk_Wired_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_Wired_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Family/BP_BBQPerk_SpringClean.BP_BBQPerk_SpringClean_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_SpringClean_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Family/BP_BBQPerk_FreshIsBest.BP_BBQPerk_FreshIsBest_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_FreshIsBest_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Abilities/Perks/Victims/BP_BBQPerk_ForwardThinking.BP_BBQPerk_ForwardThinking_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_ForwardThinking_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Effects/BP_BBQ_Calculation_SpringClean.BP_BBQ_Calculation_SpringClean_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_SpringClean_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_GenericPerks/Gameplay/Player/Effects/BP_BBQ_Calculation_SpringClean.BP_BBQ_Calculation_SpringClean_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_GenericPerks/Gameplay/Player/Effects/GAE_Perk_SpringClean.GAE_Perk_SpringClean_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Perk_SpringClean_C : public UBBQGameplayEffect
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UBP_VarSet_GenericPerks_C) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGAE_PerkUI_BackForBlood_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UBP_BBQ_Calculation_BackForBlood_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_BloodclotCry_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_NoTimeToBleed_C) == 0x0044); // 68 bytes (0x000040 - 0x000044)
static_assert(sizeof(UBP_BBQ_Calculation_WellMarker_C) == 0x0044); // 68 bytes (0x000040 - 0x000044)
static_assert(sizeof(UGAA_BBQPerk_SeeingRedApplied_C) == 0x04F8); // 1272 bytes (0x0004F0 - 0x0004F8)
static_assert(sizeof(UBP_BBQ_Calculation_SeeingRed_Duration_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_BBQ_Calculation_Wired_Duration_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UGAE_SeeingRed_Applied_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_WellMarker_Active_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_NoTimeToBleed_Active_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_BBQPerk_ArtfulDodger_Active_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_Perk_BloodclotCry_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_Perk_BackForBlood_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_SeeingRed_Active_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UBPI_DLC1_ForwardThinking_C) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBP_BBQ_Calculation_ForwardThinking_C) == 0x0044); // 68 bytes (0x000040 - 0x000044)
static_assert(sizeof(UGAE_BBQPerk_ForwardThinking_UI_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UGAE_Wired_Active_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(sizeof(UBP_BBQPerk_WhiteMeat_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_WellMarker_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_SeeingRed_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_NoTimeToBleed_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_FirstInLastOut_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_DoOrDie_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_CrimsonCocktail_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_BloodclotCry_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_BackForBlood_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_ArtfulDodger_C) == 0x02AC); // 684 bytes (0x000288 - 0x0002AC)
static_assert(sizeof(UBP_BBQPerk_BarrierBreaker_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_Wired_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_SpringClean_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_FreshIsBest_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQPerk_ForwardThinking_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQ_Calculation_SpringClean_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UGAE_Perk_SpringClean_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
static_assert(offsetof(UGAA_BBQPerk_SeeingRedApplied_C, UberGraphFrame) == 0x04F0);
static_assert(offsetof(UBP_BBQPerk_ArtfulDodger_C, UberGraphFrame) == 0x0288);
static_assert(offsetof(UBP_BBQPerk_ArtfulDodger_C, Character) == 0x0290);
static_assert(offsetof(UBP_BBQPerk_ArtfulDodger_C, TagChangedDelegateHandler) == 0x0298);
static_assert(offsetof(UBP_BBQPerk_ArtfulDodger_C, TriggerModHandle) == 0x02A0);
