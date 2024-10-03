
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

class ACableActor;
class UCableComponent;

/// Class /Script/CableComponent.CableActor
/// Size: 0x0230 (560 bytes) (0x000228 - 0x000230) align 8 MaxSize: 0x0230
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x0228   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0520 (1312 bytes) (0x000488 - 0x000520) align 16 MaxSize: 0x0520
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0488   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0489   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x048A   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0490   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x04B8   (0x0008)  
	FVector                                            EndLocation;                                                // 0x04C0   (0x000C)  
	float                                              CableLength;                                                // 0x04CC   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x04D0   (0x0004)  
	float                                              SubstepTime;                                                // 0x04D4   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x04D8   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x04DC   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x04DD   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x04DE   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x04DF   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x04E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x04E1   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x04E4   (0x0004)  
	FVector                                            CableForce;                                                 // 0x04E8   (0x000C)  
	float                                              CableGravityScale;                                          // 0x04F4   (0x0004)  
	float                                              CableWidth;                                                 // 0x04F8   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x04FC   (0x0004)  
	float                                              TileMaterial;                                               // 0x0500   (0x0004)  
	unsigned char                                      UnknownData02_7[0x1C];                                      // 0x0504   (0x001C)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndToComponent(USceneComponent* Component, FName SocketName) // [0x1b4bd90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(USceneComponent*, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Component, SocketName);
	}
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName) // [0x1b4bc80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, FName, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Actor, ComponentProperty, SocketName);
	}
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x1b4bbd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	USceneComponent* GetAttachedComponent() // [0x1b4bba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class USceneComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	AActor* GetAttachedActor() // [0x1b4bb70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class AActor* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(ACableActor) == 0x0230); // 560 bytes (0x000228 - 0x000230)
static_assert(sizeof(UCableComponent) == 0x0520); // 1312 bytes (0x000488 - 0x000520)
static_assert(offsetof(ACableActor, CableComponent) == 0x0228);
static_assert(offsetof(UCableComponent, AttachEndTo) == 0x0490);
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 0x04B8);
static_assert(offsetof(UCableComponent, EndLocation) == 0x04C0);
static_assert(offsetof(UCableComponent, CableForce) == 0x04E8);
