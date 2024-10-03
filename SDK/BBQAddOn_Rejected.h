
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BBQCore.h"
#include "CoreUObject.h"
#include "GameplayAbilities.h"

#pragma pack(push, 0x1)

class UBP_BBQPerk_FinalGirl_C;
class UBP_BBQ_Calculation_FinalGirl_C;
class UGAE_Perk_FinalGirl_C;

/// Class /Game/BBQAddOn_Rejected/Gameplay/Player/Abilities/Perks/Victim/BP_BBQPerk_FinalGirl.BP_BBQPerk_FinalGirl_C
/// Size: 0x0288 (648 bytes) (0x000288 - 0x000288) align 8 MaxSize: 0x0288
class UBP_BBQPerk_FinalGirl_C : public UBBQPerk
{ 
public:
};

/// Class /Game/BBQAddOn_Rejected/Gameplay/Player/Effects/BP_BBQ_Calculation_FinalGirl.BP_BBQ_Calculation_FinalGirl_C
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UBP_BBQ_Calculation_FinalGirl_C : public UBBQGameplayModMagnitudeCalc
{ 
public:


	/// Functions
	// Function /Game/BBQAddOn_Rejected/Gameplay/Player/Effects/BP_BBQ_Calculation_FinalGirl.BP_BBQ_Calculation_FinalGirl_C.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec) // [0x2438a30] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef float (*FuncPtr)(FGameplayEffectSpec&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Spec);
	}
};

/// Class /Game/BBQAddOn_Rejected/Gameplay/Player/Effects/GAE_Perk_FinalGirl.GAE_Perk_FinalGirl_C
/// Size: 0x08F8 (2296 bytes) (0x0008F8 - 0x0008F8) align 8 MaxSize: 0x08F8
class UGAE_Perk_FinalGirl_C : public UBBQGameplayEffect
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UBP_BBQPerk_FinalGirl_C) == 0x0288); // 648 bytes (0x000288 - 0x000288)
static_assert(sizeof(UBP_BBQ_Calculation_FinalGirl_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UGAE_Perk_FinalGirl_C) == 0x08F8); // 2296 bytes (0x0008F8 - 0x0008F8)
