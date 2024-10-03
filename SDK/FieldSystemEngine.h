
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "Chaos.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class AFieldSystemActor;
class UBoxFalloff;
class UCullingField;
class UFieldNodeBase;
class UFieldNodeFloat;
class UFieldNodeInt;
class UFieldNodeVector;
class UFieldSystem;
class UFieldSystemComponent;
class UFieldSystemMetaData;
class UFieldSystemMetaDataFilter;
class UFieldSystemMetaDataIteration;
class UFieldSystemMetaDataProcessingResolution;
class UNoiseField;
class UOperatorField;
class UPlaneFalloff;
class URadialFalloff;
class URadialIntMask;
class URadialVector;
class URandomVector;
class UReturnResultsTerminal;
class UToFloatField;
class UToIntegerField;
class UUniformInteger;
class UUniformScalar;
class UUniformVector;
class UWaveScalar;

/// Struct /Script/FieldSystemEngine.FieldObjectCommands
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FFieldObjectCommands
{ 
	TArray<FName>                                      TargetNames;                                                // 0x0000   (0x0010)  
	TArray<class UFieldNodeBase*>                      RootNodes;                                                  // 0x0010   (0x0010)  
	TArray<class UFieldSystemMetaData*>                MetaDatas;                                                  // 0x0020   (0x0010)  
};

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x0230 (560 bytes) (0x000228 - 0x000230) align 8 MaxSize: 0x0230
class AFieldSystemActor : public AActor
{ 
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                       // 0x0228   (0x0008)  
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UFieldSystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x0530 (1328 bytes) (0x000460 - 0x000530) align 16 MaxSize: 0x0530
class UFieldSystemComponent : public UPrimitiveComponent
{ 
public:
	class UFieldSystem*                                FieldSystem;                                                // 0x0460   (0x0008)  
	bool                                               bIsWorldField;                                              // 0x0468   (0x0001)  
	bool                                               bIsChaosField;                                              // 0x0469   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x046A   (0x0006)  MISSED
	SDK_UNDEFINED(16,690) /* TArray<TWeakObjectPtr<AChaosSolverActor*>> */ __um(SupportedSolvers);                 // 0x0470   (0x0010)  
	FFieldObjectCommands                               ConstructionCommands;                                       // 0x0480   (0x0030)  
	FFieldObjectCommands                               BufferCommands;                                             // 0x04B0   (0x0030)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x04E0   (0x0050)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	void ResetFieldSystem() // [0x437f390] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
	void RemovePersistentFields() // [0x437f370] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	void ApplyUniformVectorFalloffForce(bool Enabled, FVector position, FVector Direction, float Radius, float Magnitude) // [0x437f1b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool, FVector, FVector, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Enabled, position, Direction, Radius, Magnitude);
	}
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	void ApplyStrainField(bool Enabled, FVector position, float Radius, float Magnitude, int32_t Iterations) // [0x437efe0] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool, FVector, float, float, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Enabled, position, Radius, Magnitude, Iterations);
	}
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	void ApplyStayDynamicField(bool Enabled, FVector position, float Radius) // [0x437eeb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool, FVector, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Enabled, position, Radius);
	}
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	void ApplyRadialVectorFalloffForce(bool Enabled, FVector position, float Radius, float Magnitude) // [0x437ed20] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool, FVector, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Enabled, position, Radius, Magnitude);
	}
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	void ApplyRadialForce(bool Enabled, FVector position, float Magnitude) // [0x437ebf0] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool, FVector, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Enabled, position, Magnitude);
	}
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field); // [0x437ea90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude) // [0x437e960] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool, FVector, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Enabled, Direction, Magnitude);
	}
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddPersistentField
	// void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field); // [0x437e800] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	// void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field); // [0x437e6a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaData
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UFieldSystemMetaData : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{ 
public:
	int32_t                                            Iterations;                                                 // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations) // [0x437f7a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UFieldSystemMetaDataIteration* (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Iterations);
	}
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                             // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	// UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType); // [0x437f710] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataFilter
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldFilterType>                      FilterType;                                                 // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
	// UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> FilterType);                             // [0x437f710] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldNodeBase
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UFieldNodeBase : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeInt
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UFieldNodeInt : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeFloat
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UFieldNodeFloat : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeVector
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UFieldNodeVector : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.UniformInteger
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UUniformInteger : public UFieldNodeInt
{ 
public:
	int32_t                                            Magnitude;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformInteger.SetUniformInteger
	UUniformInteger* SetUniformInteger(int32_t Magnitude) // [0x437f7a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UUniformInteger* (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Magnitude);
	}
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 8 MaxSize: 0x00D0
class URadialIntMask : public UFieldNodeInt
{ 
public:
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	FVector                                            position;                                                   // 0x00B4   (0x000C)  
	int32_t                                            InteriorValue;                                              // 0x00C0   (0x0004)  
	int32_t                                            ExteriorValue;                                              // 0x00C4   (0x0004)  
	TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                           // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask
	// URadialIntMask* SetRadialIntMask(float Radius, FVector position, int32_t InteriorValue, int32_t ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn); // [0x4380020] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UUniformScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformScalar.SetUniformScalar
	UUniformScalar* SetUniformScalar(float Magnitude) // [0x43802f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UUniformScalar* (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Magnitude);
	}
};

/// Class /Script/FieldSystemEngine.WaveScalar
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UWaveScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	FVector                                            position;                                                   // 0x00B4   (0x000C)  
	float                                              Wavelength;                                                 // 0x00C0   (0x0004)  
	float                                              Period;                                                     // 0x00C4   (0x0004)  
	TEnumAsByte<EWaveFunctionType>                     Function;                                                   // 0x00C8   (0x0001)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00CA   (0x0006)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.WaveScalar.SetWaveScalar
	// UWaveScalar* SetWaveScalar(float Magnitude, FVector position, float Wavelength, float Period, float Time, TEnumAsByte<EWaveFunctionType> Function, TEnumAsByte<EFieldFalloffType> Falloff); // [0x4380450] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x00D8 (216 bytes) (0x0000B0 - 0x0000D8) align 8 MaxSize: 0x00D8
class URadialFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	float                                              MinRange;                                                   // 0x00B4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00B8   (0x0004)  
	float                                              Default;                                                    // 0x00BC   (0x0004)  
	float                                              Radius;                                                     // 0x00C0   (0x0004)  
	FVector                                            position;                                                   // 0x00C4   (0x000C)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff
	// URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector position, TEnumAsByte<EFieldFalloffType> Falloff); // [0x437fdd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x00E0 (224 bytes) (0x0000B0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPlaneFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	float                                              MinRange;                                                   // 0x00B4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00B8   (0x0004)  
	float                                              Default;                                                    // 0x00BC   (0x0004)  
	float                                              Distance;                                                   // 0x00C0   (0x0004)  
	FVector                                            position;                                                   // 0x00C4   (0x000C)  
	FVector                                            Normal;                                                     // 0x00D0   (0x000C)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00DD   (0x0003)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	// UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff); // [0x437fb30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0100 (256 bytes) (0x0000B0 - 0x000100) align 16 MaxSize: 0x0100
class UBoxFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	float                                              MinRange;                                                   // 0x00B4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00B8   (0x0004)  
	float                                              Default;                                                    // 0x00BC   (0x0004)  
	FTransform                                         Transform;                                                  // 0x00C0   (0x0030)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x00F1   (0x000F)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff
	// UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff); // [0x437f3b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x00F0 (240 bytes) (0x0000B0 - 0x0000F0) align 16 MaxSize: 0x00F0
class UNoiseField : public UFieldNodeFloat
{ 
public:
	float                                              MinRange;                                                   // 0x00B0   (0x0004)  
	float                                              MaxRange;                                                   // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x00C0   (0x0030)  


	/// Functions
	// Function /Script/FieldSystemEngine.NoiseField.SetNoiseField
	UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform) // [0x437f840] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef class UNoiseField* (*FuncPtr)(float, float, FTransform);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(MinRange, MaxRange, Transform);
	}
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUniformVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	FVector                                            Direction;                                                  // 0x00B4   (0x000C)  


	/// Functions
	// Function /Script/FieldSystemEngine.UniformVector.SetUniformVector
	UUniformVector* SetUniformVector(float Magnitude, FVector Direction) // [0x4380200] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef class UUniformVector* (*FuncPtr)(float, FVector);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Magnitude, Direction);
	}
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class URadialVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	FVector                                            position;                                                   // 0x00B4   (0x000C)  


	/// Functions
	// Function /Script/FieldSystemEngine.RadialVector.SetRadialVector
	URadialVector* SetRadialVector(float Magnitude, FVector position) // [0x4380200] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef class URadialVector* (*FuncPtr)(float, FVector);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Magnitude, position);
	}
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class URandomVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RandomVector.SetRandomVector
	URandomVector* SetRandomVector(float Magnitude) // [0x43802f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class URandomVector* (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Magnitude);
	}
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOperatorField : public UFieldNodeBase
{ 
public:
	float                                              Magnitude;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	class UFieldNodeBase*                              RightField;                                                 // 0x00B8   (0x0008)  
	class UFieldNodeBase*                              LeftField;                                                  // 0x00C0   (0x0008)  
	TEnumAsByte<EFieldOperationType>                   Operation;                                                  // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.OperatorField.SetOperatorField
	// UOperatorField* SetOperatorField(float Magnitude, UFieldNodeBase* LeftField, UFieldNodeBase* RightField, TEnumAsByte<EFieldOperationType> Operation); // [0x437f9d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UToIntegerField : public UFieldNodeInt
{ 
public:
	class UFieldNodeFloat*                             FloatField;                                                 // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToIntegerField.SetToIntegerField
	UToIntegerField* SetToIntegerField(UFieldNodeFloat* FloatField) // [0x43803b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UToIntegerField* (*FuncPtr)(UFieldNodeFloat*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(FloatField);
	}
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UToFloatField : public UFieldNodeFloat
{ 
public:
	class UFieldNodeInt*                               IntField;                                                   // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToFloatField.SetToFloatField
	UToFloatField* SetToFloatField(UFieldNodeInt* IntegerField) // [0x43803b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UToFloatField* (*FuncPtr)(UFieldNodeInt*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(IntegerField);
	}
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x00C8 (200 bytes) (0x0000B0 - 0x0000C8) align 8 MaxSize: 0x00C8
class UCullingField : public UFieldNodeBase
{ 
public:
	class UFieldNodeBase*                              Culling;                                                    // 0x00B0   (0x0008)  
	class UFieldNodeBase*                              Field;                                                      // 0x00B8   (0x0008)  
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                  // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00C1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.CullingField.SetCullingField
	// UCullingField* SetCullingField(UFieldNodeBase* Culling, UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation); // [0x437f600] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UReturnResultsTerminal : public UFieldNodeBase
{ 
public:


	/// Functions
	// Function /Script/FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	UReturnResultsTerminal* SetReturnResultsTerminal() // [0x4380380] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UReturnResultsTerminal* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(AFieldSystemActor) == 0x0230); // 560 bytes (0x000228 - 0x000230)
static_assert(sizeof(UFieldSystem) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FFieldObjectCommands) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UFieldSystemComponent) == 0x0530); // 1328 bytes (0x000460 - 0x000530)
static_assert(sizeof(UFieldSystemMetaData) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldSystemMetaDataIteration) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UFieldSystemMetaDataProcessingResolution) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UFieldSystemMetaDataFilter) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UFieldNodeBase) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldNodeInt) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldNodeFloat) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldNodeVector) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UUniformInteger) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(URadialIntMask) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(UUniformScalar) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UWaveScalar) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(URadialFalloff) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(UPlaneFalloff) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UBoxFalloff) == 0x0100); // 256 bytes (0x0000B0 - 0x000100)
static_assert(sizeof(UNoiseField) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(UUniformVector) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(URadialVector) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(URandomVector) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UOperatorField) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(UToIntegerField) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UToFloatField) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UCullingField) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(UReturnResultsTerminal) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(offsetof(AFieldSystemActor, FieldSystemComponent) == 0x0228);
static_assert(offsetof(FFieldObjectCommands, TargetNames) == 0x0000);
static_assert(offsetof(FFieldObjectCommands, RootNodes) == 0x0010);
static_assert(offsetof(FFieldObjectCommands, MetaDatas) == 0x0020);
static_assert(offsetof(UFieldSystemComponent, FieldSystem) == 0x0460);
static_assert(offsetof(UFieldSystemComponent, ConstructionCommands) == 0x0480);
static_assert(offsetof(UFieldSystemComponent, BufferCommands) == 0x04B0);
static_assert(offsetof(UFieldSystemMetaDataProcessingResolution, ResolutionType) == 0x00B0);
static_assert(offsetof(UFieldSystemMetaDataFilter, FilterType) == 0x00B0);
static_assert(offsetof(URadialIntMask, position) == 0x00B4);
static_assert(offsetof(URadialIntMask, SetMaskCondition) == 0x00C8);
static_assert(offsetof(UWaveScalar, position) == 0x00B4);
static_assert(offsetof(UWaveScalar, Function) == 0x00C8);
static_assert(offsetof(UWaveScalar, Falloff) == 0x00C9);
static_assert(offsetof(URadialFalloff, position) == 0x00C4);
static_assert(offsetof(URadialFalloff, Falloff) == 0x00D0);
static_assert(offsetof(UPlaneFalloff, position) == 0x00C4);
static_assert(offsetof(UPlaneFalloff, Normal) == 0x00D0);
static_assert(offsetof(UPlaneFalloff, Falloff) == 0x00DC);
static_assert(offsetof(UBoxFalloff, Transform) == 0x00C0);
static_assert(offsetof(UBoxFalloff, Falloff) == 0x00F0);
static_assert(offsetof(UNoiseField, Transform) == 0x00C0);
static_assert(offsetof(UUniformVector, Direction) == 0x00B4);
static_assert(offsetof(URadialVector, position) == 0x00B4);
static_assert(offsetof(UOperatorField, RightField) == 0x00B8);
static_assert(offsetof(UOperatorField, LeftField) == 0x00C0);
static_assert(offsetof(UOperatorField, Operation) == 0x00C8);
static_assert(offsetof(UToIntegerField, FloatField) == 0x00B0);
static_assert(offsetof(UToFloatField, IntField) == 0x00B0);
static_assert(offsetof(UCullingField, Culling) == 0x00B0);
static_assert(offsetof(UCullingField, Field) == 0x00B8);
static_assert(offsetof(UCullingField, Operation) == 0x00C0);
