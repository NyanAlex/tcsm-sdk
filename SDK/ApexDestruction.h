
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

class ADestructibleActor;
class UDestructibleComponent;
class UDestructibleFractureSettings;
class UDestructibleMesh;

/// Enum /Script/ApexDestruction.EImpactDamageOverride
/// Size: 0x01 (1 bytes)
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                                                                         = 0,
	IDO_On                                                                           = 1,
	IDO_Off                                                                          = 2
};

/// Struct /Script/ApexDestruction.FractureMaterial
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FFractureMaterial
{ 
	FVector2D                                          UVScale;                                                    // 0x0000   (0x0008)  
	FVector2D                                          UVOffset;                                                   // 0x0008   (0x0008)  
	FVector                                            Tangent;                                                    // 0x0010   (0x000C)  
	float                                              UAngle;                                                     // 0x001C   (0x0004)  
	int32_t                                            InteriorElementIndex;                                       // 0x0020   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleChunkParameters
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FDestructibleChunkParameters
{ 
	bool                                               bIsSupportChunk;                                            // 0x0000   (0x0001)  
	bool                                               bDoNotFracture;                                             // 0x0001   (0x0001)  
	bool                                               bDoNotDamage;                                               // 0x0002   (0x0001)  
	bool                                               bDoNotCrumble;                                              // 0x0003   (0x0001)  
};

/// Struct /Script/ApexDestruction.DestructibleDamageParameters
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FDestructibleDamageParameters
{ 
	float                                              DamageThreshold;                                            // 0x0000   (0x0004)  
	float                                              DamageSpread;                                               // 0x0004   (0x0004)  
	bool                                               bEnableImpactDamage;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ImpactDamage;                                               // 0x000C   (0x0004)  
	int32_t                                            DefaultImpactDamageDepth;                                   // 0x0010   (0x0004)  
	bool                                               bCustomImpactResistance;                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              ImpactResistance;                                           // 0x0018   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleDebrisParameters
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FDestructibleDebrisParameters
{ 
	float                                              DebrisLifetimeMin;                                          // 0x0000   (0x0004)  
	float                                              DebrisLifetimeMax;                                          // 0x0004   (0x0004)  
	float                                              DebrisMaxSeparationMin;                                     // 0x0008   (0x0004)  
	float                                              DebrisMaxSeparationMax;                                     // 0x000C   (0x0004)  
	FBox                                               ValidBounds;                                                // 0x0010   (0x001C)  
};

/// Struct /Script/ApexDestruction.DestructibleAdvancedParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FDestructibleAdvancedParameters
{ 
	float                                              DamageCap;                                                  // 0x0000   (0x0004)  
	float                                              ImpactVelocityThreshold;                                    // 0x0004   (0x0004)  
	float                                              MaxChunkSpeed;                                              // 0x0008   (0x0004)  
	float                                              FractureImpulseScale;                                       // 0x000C   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleSpecialHierarchyDepths
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FDestructibleSpecialHierarchyDepths
{ 
	int32_t                                            SupportDepth;                                               // 0x0000   (0x0004)  
	int32_t                                            MinimumFractureDepth;                                       // 0x0004   (0x0004)  
	bool                                               bEnableDebris;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            DebrisDepth;                                                // 0x000C   (0x0004)  
	int32_t                                            EssentialDepth;                                             // 0x0010   (0x0004)  
};

/// Struct /Script/ApexDestruction.DestructibleDepthParameters
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FDestructibleDepthParameters
{ 
	TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                       // 0x0000   (0x0001)  
};

/// Struct /Script/ApexDestruction.DestructibleParametersFlag
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FDestructibleParametersFlag
{ 
	bool                                               bAccumulateDamage : 1;                                      // 0x0000:0 (0x0001)  
	bool                                               bAssetDefinedSupport : 1;                                   // 0x0000:1 (0x0001)  
	bool                                               bWorldSupport : 1;                                          // 0x0000:2 (0x0001)  
	bool                                               bDebrisTimeout : 1;                                         // 0x0000:3 (0x0001)  
	bool                                               bDebrisMaxSeparation : 1;                                   // 0x0000:4 (0x0001)  
	bool                                               bCrumbleSmallestChunks : 1;                                 // 0x0000:5 (0x0001)  
	bool                                               bAccurateRaycasts : 1;                                      // 0x0000:6 (0x0001)  
	bool                                               bUseValidBounds : 1;                                        // 0x0000:7 (0x0001)  
	bool                                               bFormExtendedStructures : 1;                                // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Struct /Script/ApexDestruction.DestructibleParameters
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FDestructibleParameters
{ 
	FDestructibleDamageParameters                      DamageParameters;                                           // 0x0000   (0x001C)  
	FDestructibleDebrisParameters                      DebrisParameters;                                           // 0x001C   (0x002C)  
	FDestructibleAdvancedParameters                    AdvancedParameters;                                         // 0x0048   (0x0010)  
	FDestructibleSpecialHierarchyDepths                SpecialHierarchyDepths;                                     // 0x0058   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FDestructibleDepthParameters>               DepthParameters;                                            // 0x0070   (0x0010)  
	FDestructibleParametersFlag                        Flags;                                                      // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/ApexDestruction.DestructibleActor
/// Size: 0x0240 (576 bytes) (0x000228 - 0x000240) align 8 MaxSize: 0x0240
class ADestructibleActor : public AActor
{ 
public:
	class UDestructibleComponent*                      DestructibleComponent;                                      // 0x0228   (0x0008)  
	SDK_UNDEFINED(16,313) /* FMulticastInlineDelegate */ __um(OnActorFracture);                                    // 0x0230   (0x0010)  
};

/// Class /Script/ApexDestruction.DestructibleComponent
/// Size: 0x07B0 (1968 bytes) (0x0006D0 - 0x0007B0) align 16 MaxSize: 0x07B0
class UDestructibleComponent : public USkinnedMeshComponent
{ 
public:
	bool                                               bFractureEffectOverride : 1;                                // 0x06D0:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x06D1   (0x0007)  MISSED
	TArray<FFractureEffect>                            FractureEffects;                                            // 0x06D8   (0x0010)  
	bool                                               bEnableHardSleeping;                                        // 0x06E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x06E9   (0x0003)  MISSED
	float                                              LargeChunkThreshold;                                        // 0x06EC   (0x0004)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x06F0   (0x0010)  MISSED
	SDK_UNDEFINED(16,314) /* FMulticastInlineDelegate */ __um(OnComponentFracture);                                // 0x0700   (0x0010)  
	unsigned char                                      UnknownData03_7[0xA0];                                      // 0x0710   (0x00A0)  MISSED


	/// Functions
	// Function /Script/ApexDestruction.DestructibleComponent.SetDestructibleMesh
	void SetDestructibleMesh(UDestructibleMesh* NewMesh) // [0xc9d280] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UDestructibleMesh*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewMesh);
	}
	// Function /Script/ApexDestruction.DestructibleComponent.GetDestructibleMesh
	UDestructibleMesh* GetDestructibleMesh() // [0xc9d250] Final|Native|Public|BlueprintCallable 
	{
		typedef class UDestructibleMesh* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/ApexDestruction.DestructibleComponent.ApplyRadiusDamage
	void ApplyRadiusDamage(float BaseDamage, FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage) // [0xc9d090] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, FVector&, float, float, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(BaseDamage, HurtOrigin, DamageRadius, ImpulseStrength, bFullDamage);
	}
	// Function /Script/ApexDestruction.DestructibleComponent.ApplyDamage
	void ApplyDamage(float DamageAmount, FVector& HitLocation, FVector& ImpulseDir, float ImpulseStrength) // [0xc9cf10] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float, FVector&, FVector&, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(DamageAmount, HitLocation, ImpulseDir, ImpulseStrength);
	}
};

/// Class /Script/ApexDestruction.DestructibleFractureSettings
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align 8 MaxSize: 0x00B8
class UDestructibleFractureSettings : public UObject
{ 
public:
	int32_t                                            CellSiteCount;                                              // 0x0028   (0x0004)  
	FFractureMaterial                                  FractureMaterialDesc;                                       // 0x002C   (0x0024)  
	int32_t                                            RandomSeed;                                                 // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FVector>                                    VoronoiSites;                                               // 0x0058   (0x0010)  
	int32_t                                            OriginalSubmeshCount;                                       // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0070   (0x0010)  
	TArray<FDestructibleChunkParameters>               ChunkParameters;                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_7[0x28];                                      // 0x0090   (0x0028)  MISSED
};

/// Class /Script/ApexDestruction.DestructibleMesh
/// Size: 0x0440 (1088 bytes) (0x0003A0 - 0x000440) align 8 MaxSize: 0x0440
class UDestructibleMesh : public USkeletalMesh
{ 
public:
	FDestructibleParameters                            DefaultDestructibleParameters;                              // 0x03A0   (0x0088)  
	TArray<FFractureEffect>                            FractureEffects;                                            // 0x0428   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0438   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(ADestructibleActor) == 0x0240); // 576 bytes (0x000228 - 0x000240)
static_assert(sizeof(UDestructibleComponent) == 0x07B0); // 1968 bytes (0x0006D0 - 0x0007B0)
static_assert(sizeof(FFractureMaterial) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FDestructibleChunkParameters) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UDestructibleFractureSettings) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(FDestructibleDamageParameters) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FDestructibleDebrisParameters) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FDestructibleAdvancedParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDestructibleSpecialHierarchyDepths) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FDestructibleDepthParameters) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FDestructibleParametersFlag) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDestructibleParameters) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(UDestructibleMesh) == 0x0440); // 1088 bytes (0x0003A0 - 0x000440)
static_assert(offsetof(ADestructibleActor, DestructibleComponent) == 0x0228);
static_assert(offsetof(UDestructibleComponent, FractureEffects) == 0x06D8);
static_assert(offsetof(FFractureMaterial, UVScale) == 0x0000);
static_assert(offsetof(FFractureMaterial, UVOffset) == 0x0008);
static_assert(offsetof(FFractureMaterial, Tangent) == 0x0010);
static_assert(offsetof(UDestructibleFractureSettings, FractureMaterialDesc) == 0x002C);
static_assert(offsetof(UDestructibleFractureSettings, VoronoiSites) == 0x0058);
static_assert(offsetof(UDestructibleFractureSettings, Materials) == 0x0070);
static_assert(offsetof(UDestructibleFractureSettings, ChunkParameters) == 0x0080);
static_assert(offsetof(FDestructibleDebrisParameters, ValidBounds) == 0x0010);
static_assert(offsetof(FDestructibleDepthParameters, ImpactDamageOverride) == 0x0000);
static_assert(offsetof(FDestructibleParameters, DamageParameters) == 0x0000);
static_assert(offsetof(FDestructibleParameters, DebrisParameters) == 0x001C);
static_assert(offsetof(FDestructibleParameters, AdvancedParameters) == 0x0048);
static_assert(offsetof(FDestructibleParameters, SpecialHierarchyDepths) == 0x0058);
static_assert(offsetof(FDestructibleParameters, DepthParameters) == 0x0070);
static_assert(offsetof(FDestructibleParameters, Flags) == 0x0080);
static_assert(offsetof(UDestructibleMesh, DefaultDestructibleParameters) == 0x03A0);
static_assert(offsetof(UDestructibleMesh, FractureEffects) == 0x0428);
