
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "GameplayAbilities.h"

#pragma pack(push, 0x1)

class UGameplayVariableMod;
class UGameplayVariableModStackComponent;
class UGameplayVariableModStackInterface;
class UGameplayVariableOp;
class UGameplayVariableOpBool;
class UGameplayVariableOpBoolInterface;
class UGameplayVariableOpFloat;
class UGameplayVariableOpFloatInterface;
class UGameplayVariableOpInt;
class UGameplayVariableOpIntInterface;
class UGameplayVariableOpOverrideSet;
class UGameplayVariableSet;
class UGameplayVariablesBlueprintLibrary;
class UGameplayVariablesSettings;

/// Enum /Script/GameplayVariables.EGameplayVariableType
/// Size: 0x01 (1 bytes)
enum class EGameplayVariableType : uint8_t
{
	EGameplayVariableType__None                                                      = 0,
	EGameplayVariableType__Float                                                     = 1,
	EGameplayVariableType__Integer                                                   = 2,
	EGameplayVariableType__Boolean                                                   = 3
};

/// Enum /Script/GameplayVariables.EGameplayVariableBooleanOp
/// Size: 0x01 (1 bytes)
enum class EGameplayVariableBooleanOp : uint8_t
{
	EGameplayVariableBooleanOp__Override                                             = 0,
	EGameplayVariableBooleanOp__And                                                  = 1,
	EGameplayVariableBooleanOp__Or                                                   = 2,
	EGameplayVariableBooleanOp__Xor                                                  = 3
};

/// Enum /Script/GameplayVariables.EGameplayVariableNumericOp
/// Size: 0x01 (1 bytes)
enum class EGameplayVariableNumericOp : uint8_t
{
	EGameplayVariableNumericOp__Override                                             = 0,
	EGameplayVariableNumericOp__Add                                                  = 1,
	EGameplayVariableNumericOp__Multiply                                             = 2,
	EGameplayVariableNumericOp__Min                                                  = 3,
	EGameplayVariableNumericOp__Max                                                  = 4
};

/// Struct /Script/GameplayVariables.AppliedModInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAppliedModInfo
{ 
	int32_t                                            Priority;                                                   // 0x0000   (0x0004)  
	int32_t                                            Handle;                                                     // 0x0004   (0x0004)  
	float                                              level;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UGameplayVariableMod*                        mod;                                                        // 0x0010   (0x0008)  
};

/// Struct /Script/GameplayVariables.GameplayVariable
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayVariable
{ 
	TSoftObjectPtr<class UClass*>                      OwnerSet;                                                   // 0x0000   (0x0028)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0028   (0x0020)  MISSED
	bool                                               Dummy;                                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/GameplayVariables.GameplayVariableModHandle
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGameplayVariableModHandle
{ 
	TWeakObjectPtr<class UGameplayVariableModStackComponent*> ModStack;                                            // 0x0000   (0x0008)  
	int32_t                                            Handle;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/GameplayVariables.GameplayVariableFloat
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FGameplayVariableFloat
{ 
	FGameplayVariable                                  Variable;                                                   // 0x0000   (0x0050)  
	float                                              DefaultValue;                                               // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/GameplayVariables.GameplayVariableBool
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FGameplayVariableBool
{ 
	FGameplayVariable                                  Variable;                                                   // 0x0000   (0x0050)  
	bool                                               DefaultValue;                                               // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/GameplayVariables.GameplayVariableModOperationData
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FGameplayVariableModOperationData : FTableRowBase
{ 
	FString                                            Variable;                                                   // 0x0008   (0x0010)  
	EGameplayVariableType                              Type;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	FString                                            mod;                                                        // 0x0020   (0x0010)  
	int32_t                                            Priority;                                                   // 0x0030   (0x0004)  
	bool                                               bApplyToBaseValue;                                          // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FString                                            Operator;                                                   // 0x0038   (0x0010)  
	FString                                            Value;                                                      // 0x0048   (0x0010)  
	FSoftObjectPath                                    ObjectPath;                                                 // 0x0058   (0x0018)  
};

/// Struct /Script/GameplayVariables.GameplayVariableInt
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FGameplayVariableInt
{ 
	FGameplayVariable                                  Variable;                                                   // 0x0000   (0x0050)  
	int32_t                                            DefaultValue;                                               // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/GameplayVariables.GameplayVariableSet
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UGameplayVariableSet : public UDataAsset
{ 
public:
	class UGameplayVariableSet*                        Override;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/GameplayVariables.GameplayVariableMod
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UGameplayVariableMod : public UDataAsset
{ 
public:
	int32_t                                            Priority;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<class UGameplayVariableOp*>                 Operations;                                                 // 0x0038   (0x0010)  
	class UGameplayVariableMod*                        Override;                                                   // 0x0048   (0x0008)  
};

/// Class /Script/GameplayVariables.GameplayVariableModStackComponent
/// Size: 0x0120 (288 bytes) (0x0000B0 - 0x000120) align 8 MaxSize: 0x0120
class UGameplayVariableModStackComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,405) /* FMulticastInlineDelegate */ __um(OnModApplied);                                       // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,406) /* FMulticastInlineDelegate */ __um(OnModRemoved);                                       // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00D0   (0x0018)  MISSED
	TWeakObjectPtr<class UGameplayVariableModStackComponent*> ParentModStack;                                      // 0x00E8   (0x0008)  
	TArray<FAppliedModInfo>                            ActiveMods;                                                 // 0x00F0   (0x0010)  
	TArray<FAppliedModInfo>                            PreviouslyActiveMods;                                       // 0x0100   (0x0010)  
	int32_t                                            NextHandleId;                                               // 0x0110   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0114   (0x000C)  MISSED


	/// Functions
	// Function /Script/GameplayVariables.GameplayVariableModStackComponent.RemoveMod
	void RemoveMod(FGameplayVariableModHandle& Handle) // [0x14a5a90] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayVariableModHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Handle);
	}
	// Function /Script/GameplayVariables.GameplayVariableModStackComponent.RemoveAllModsByAsset
	void RemoveAllModsByAsset(UGameplayVariableMod* mod) // [0x14a5860] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UGameplayVariableMod*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(mod);
	}
	// Function /Script/GameplayVariables.GameplayVariableModStackComponent.RemoveAllMods
	void RemoveAllMods() // [0x14a5840] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/GameplayVariables.GameplayVariableModStackComponent.OnRep_ActiveMods
	void OnRep_ActiveMods() // [0x14a5820] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/GameplayVariables.GameplayVariableModStackComponent.OnModRemovedDelegate__DelegateSignature
	void OnModRemovedDelegate__DelegateSignature(UGameplayVariableMod* mod) // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(UGameplayVariableMod*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(mod);
	}
	// Function /Script/GameplayVariables.GameplayVariableModStackComponent.OnModAppliedDelegate__DelegateSignature
	void OnModAppliedDelegate__DelegateSignature(FGameplayVariableModHandle& ModHandle) // [0x2438a30] MulticastDelegate|Public|Delegate|HasOutParms 
	{
		typedef void (*FuncPtr)(FGameplayVariableModHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(ModHandle);
	}
	// Function /Script/GameplayVariables.GameplayVariableModStackComponent.Auth_ApplyUniqueMod
	FGameplayVariableModHandle Auth_ApplyUniqueMod(UGameplayVariableMod* InMod, int32_t InPriority, float InLevel) // [0x14a4d20] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	{
		typedef FGameplayVariableModHandle (*FuncPtr)(UGameplayVariableMod*, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(InMod, InPriority, InLevel);
	}
	// Function /Script/GameplayVariables.GameplayVariableModStackComponent.ApplyMod
	FGameplayVariableModHandle ApplyMod(UGameplayVariableMod* mod, int32_t Prioriry, float level) // [0x14a4bf0] Final|Native|Public|BlueprintCallable 
	{
		typedef FGameplayVariableModHandle (*FuncPtr)(UGameplayVariableMod*, int32_t, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(mod, Prioriry, level);
	}
};

/// Class /Script/GameplayVariables.GameplayVariableModStackInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayVariableModStackInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/GameplayVariables.GameplayVariableModStackInterface.GetGameplayVariableModStackComponent
	UGameplayVariableModStackComponent* GetGameplayVariableModStackComponent() // [0x14a4f20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UGameplayVariableModStackComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

/// Class /Script/GameplayVariables.GameplayVariableOp
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UGameplayVariableOp : public UObject
{ 
public:
	bool                                               bApplyToBaseValue;                                          // 0x0028   (0x0001)  
	bool                                               bUseScalableValue;                                          // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
	FScalableFloat                                     ScalableValue;                                              // 0x0030   (0x0028)  
};

/// Class /Script/GameplayVariables.GameplayVariableOpFloat
/// Size: 0x00C0 (192 bytes) (0x000058 - 0x0000C0) align 8 MaxSize: 0x00C0
class UGameplayVariableOpFloat : public UGameplayVariableOp
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0058   (0x0010)  MISSED
	FGameplayVariable                                  Variable;                                                   // 0x0068   (0x0050)  
	EGameplayVariableNumericOp                         Operator;                                                   // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              Value;                                                      // 0x00BC   (0x0004)  
};

/// Class /Script/GameplayVariables.GameplayVariableOpInt
/// Size: 0x00C0 (192 bytes) (0x000058 - 0x0000C0) align 8 MaxSize: 0x00C0
class UGameplayVariableOpInt : public UGameplayVariableOp
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0058   (0x0010)  MISSED
	FGameplayVariable                                  Variable;                                                   // 0x0068   (0x0050)  
	EGameplayVariableNumericOp                         Operator;                                                   // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x00BC   (0x0004)  
};

/// Class /Script/GameplayVariables.GameplayVariableOpBool
/// Size: 0x00B8 (184 bytes) (0x000058 - 0x0000B8) align 8 MaxSize: 0x00B8
class UGameplayVariableOpBool : public UGameplayVariableOp
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0058   (0x0008)  MISSED
	FGameplayVariable                                  Variable;                                                   // 0x0060   (0x0050)  
	EGameplayVariableBooleanOp                         Operator;                                                   // 0x00B0   (0x0001)  
	bool                                               Value;                                                      // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00B2   (0x0006)  MISSED
};

/// Class /Script/GameplayVariables.GameplayVariableOpOverrideSet
/// Size: 0x0078 (120 bytes) (0x000058 - 0x000078) align 8 MaxSize: 0x0078
class UGameplayVariableOpOverrideSet : public UGameplayVariableOp
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0058   (0x0018)  MISSED
	class UGameplayVariableSet*                        VariableSetDataAsset;                                       // 0x0070   (0x0008)  
};

/// Class /Script/GameplayVariables.GameplayVariableOpFloatInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayVariableOpFloatInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayVariables.GameplayVariableOpIntInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayVariableOpIntInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayVariables.GameplayVariableOpBoolInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayVariableOpBoolInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayVariables.GameplayVariablesBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayVariablesBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.RemoveGameplayVariableModsByAsset
	void RemoveGameplayVariableModsByAsset(AActor* ModStackOwner, UGameplayVariableMod* mod) // [0x14a59d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, UGameplayVariableMod*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(ModStackOwner, mod);
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.RemoveGameplayVariableMod
	void RemoveGameplayVariableMod(AActor* ModStackOwner, FGameplayVariableModHandle& Handle) // [0x14a58f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(AActor*, FGameplayVariableModHandle&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(ModStackOwner, Handle);
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.IsGameplayVariableValid
	bool IsGameplayVariableValid(FGameplayVariable& VariableRef) // [0x14a5730] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayVariable&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(VariableRef);
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.ImportGameplayVariablesData
	void ImportGameplayVariablesData() // [0x14a5710] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.GetVariableValueInt
	int32_t GetVariableValueInt(FGameplayVariable Variable, int32_t DefaultValue, AActor* ModStackOwner) // [0x14a55a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FGameplayVariable, int32_t, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(Variable, DefaultValue, ModStackOwner);
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.GetVariableValueFloat
	float GetVariableValueFloat(FGameplayVariable Variable, float DefaultValue, AActor* ModStackOwner) // [0x14a5430] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(FGameplayVariable, float, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Variable, DefaultValue, ModStackOwner);
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.GetVariableValueBool
	bool GetVariableValueBool(FGameplayVariable Variable, bool DefaultValue, AActor* ModStackOwner) // [0x14a52b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayVariable, bool, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(Variable, DefaultValue, ModStackOwner);
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.GetVariablePropertyValueInt
	int32_t GetVariablePropertyValueInt(FGameplayVariableInt& VariableInt, AActor* ModStackOwner) // [0x14a5190] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FGameplayVariableInt&, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(VariableInt, ModStackOwner);
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.GetVariablePropertyValueFloat
	float GetVariablePropertyValueFloat(FGameplayVariableFloat& VariableFloat, AActor* ModStackOwner) // [0x14a5070] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(FGameplayVariableFloat&, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(VariableFloat, ModStackOwner);
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.GetVariablePropertyValueBool
	bool GetVariablePropertyValueBool(FGameplayVariableBool& VariableBool, AActor* ModStackOwner) // [0x14a4f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayVariableBool&, AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(VariableBool, ModStackOwner);
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.GetGameplayVariableModFromHandle
	UGameplayVariableMod* GetGameplayVariableModFromHandle(FGameplayVariableModHandle Handle) // [0x14a4e70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UGameplayVariableMod* (*FuncPtr)(FGameplayVariableModHandle);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Handle);
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.ClearGameplayVariablesImportedData
	void ClearGameplayVariablesImportedData() // [0x14a4e50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func();
	}
	// Function /Script/GameplayVariables.GameplayVariablesBlueprintLibrary.ApplyGameplayVariableMod
	FGameplayVariableModHandle ApplyGameplayVariableMod(AActor* ModStackOwner, UGameplayVariableMod* mod, int32_t Priority) // [0x14a4ae0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FGameplayVariableModHandle (*FuncPtr)(AActor*, UGameplayVariableMod*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(ModStackOwner, mod, Priority);
	}
};

/// Class /Script/GameplayVariables.GameplayVariablesSettings
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UGameplayVariablesSettings : public UObject
{ 
public:
	TArray<class UClass*>                              VariableSetClasses;                                         // 0x0028   (0x0010)  
	TArray<FFilePath>                                  FilesToImport;                                              // 0x0038   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UGameplayVariableSet) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UGameplayVariableMod) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FAppliedModInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UGameplayVariableModStackComponent) == 0x0120); // 288 bytes (0x0000B0 - 0x000120)
static_assert(sizeof(UGameplayVariableModStackInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayVariableOp) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FGameplayVariable) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UGameplayVariableOpFloat) == 0x00C0); // 192 bytes (0x000058 - 0x0000C0)
static_assert(sizeof(UGameplayVariableOpInt) == 0x00C0); // 192 bytes (0x000058 - 0x0000C0)
static_assert(sizeof(UGameplayVariableOpBool) == 0x00B8); // 184 bytes (0x000058 - 0x0000B8)
static_assert(sizeof(UGameplayVariableOpOverrideSet) == 0x0078); // 120 bytes (0x000058 - 0x000078)
static_assert(sizeof(UGameplayVariableOpFloatInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayVariableOpIntInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayVariableOpBoolInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayVariablesBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayVariablesSettings) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FGameplayVariableModHandle) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FGameplayVariableFloat) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FGameplayVariableBool) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FGameplayVariableModOperationData) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FGameplayVariableInt) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(offsetof(UGameplayVariableSet, Override) == 0x0030);
static_assert(offsetof(UGameplayVariableMod, Operations) == 0x0038);
static_assert(offsetof(UGameplayVariableMod, Override) == 0x0048);
static_assert(offsetof(FAppliedModInfo, mod) == 0x0010);
static_assert(offsetof(UGameplayVariableModStackComponent, ParentModStack) == 0x00E8);
static_assert(offsetof(UGameplayVariableModStackComponent, ActiveMods) == 0x00F0);
static_assert(offsetof(UGameplayVariableModStackComponent, PreviouslyActiveMods) == 0x0100);
static_assert(offsetof(UGameplayVariableOp, ScalableValue) == 0x0030);
static_assert(offsetof(FGameplayVariable, OwnerSet) == 0x0000);
static_assert(offsetof(UGameplayVariableOpFloat, Variable) == 0x0068);
static_assert(offsetof(UGameplayVariableOpFloat, Operator) == 0x00B8);
static_assert(offsetof(UGameplayVariableOpInt, Variable) == 0x0068);
static_assert(offsetof(UGameplayVariableOpInt, Operator) == 0x00B8);
static_assert(offsetof(UGameplayVariableOpBool, Variable) == 0x0060);
static_assert(offsetof(UGameplayVariableOpBool, Operator) == 0x00B0);
static_assert(offsetof(UGameplayVariableOpOverrideSet, VariableSetDataAsset) == 0x0070);
static_assert(offsetof(UGameplayVariablesSettings, VariableSetClasses) == 0x0028);
static_assert(offsetof(UGameplayVariablesSettings, FilesToImport) == 0x0038);
static_assert(offsetof(FGameplayVariableModHandle, ModStack) == 0x0000);
static_assert(offsetof(FGameplayVariableFloat, Variable) == 0x0000);
static_assert(offsetof(FGameplayVariableBool, Variable) == 0x0000);
static_assert(offsetof(FGameplayVariableModOperationData, Variable) == 0x0008);
static_assert(offsetof(FGameplayVariableModOperationData, Type) == 0x0018);
static_assert(offsetof(FGameplayVariableModOperationData, mod) == 0x0020);
static_assert(offsetof(FGameplayVariableModOperationData, Operator) == 0x0038);
static_assert(offsetof(FGameplayVariableModOperationData, Value) == 0x0048);
static_assert(offsetof(FGameplayVariableModOperationData, ObjectPath) == 0x0058);
static_assert(offsetof(FGameplayVariableInt, Variable) == 0x0000);
