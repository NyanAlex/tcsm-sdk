
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

class ALevelVariantSetsActor;
class ASwitchActor;
class ULevelVariantSets;
class ULevelVariantSetsFunctionDirector;
class UPropertyValue;
class UPropertyValueColor;
class UPropertyValueMaterial;
class UPropertyValueOption;
class UPropertyValueSoftObject;
class UPropertyValueTransform;
class UPropertyValueVisibility;
class UVariant;
class UVariantObjectBinding;
class UVariantSet;

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x01 (1 bytes)
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined                                                = 0,
	EPropertyValueCategory__Generic                                                  = 1,
	EPropertyValueCategory__RelativeLocation                                         = 2,
	EPropertyValueCategory__RelativeRotation                                         = 4,
	EPropertyValueCategory__RelativeScale3D                                          = 8,
	EPropertyValueCategory__Visibility                                               = 16,
	EPropertyValueCategory__Material                                                 = 32,
	EPropertyValueCategory__Color                                                    = 64,
	EPropertyValueCategory__Option                                                   = 128
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCapturedPropSegment
{ 
	FString                                            PropertyName;                                               // 0x0000   (0x0010)  
	int32_t                                            PropertyIndex;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FVariantDependency
{ 
	TWeakObjectPtr<class UVariantSet*>                 VariantSet;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	TWeakObjectPtr<class UVariant*>                    Variant;                                                    // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	bool                                               bEnabled;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFunctionCaller
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
};

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class ULevelVariantSets : public UObject
{ 
public:
	class UBlueprintGeneratedClass*                    DirectorClass;                                              // 0x0028   (0x0008)  
	TArray<class UVariantSet*>                         VariantSets;                                                // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0040   (0x0050)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	UVariantSet* GetVariantSetByName(FString VariantSetName) // [0x19b3030] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UVariantSet* (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(VariantSetName);
	}
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	UVariantSet* GetVariantSet(int32_t VariantSetIndex) // [0x19b2f90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UVariantSet* (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(VariantSetIndex);
	}
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	int32_t GetNumVariantSets() // [0x19b2b80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0290 (656 bytes) (0x000228 - 0x000290) align 8 MaxSize: 0x0290
class ALevelVariantSetsActor : public AActor
{ 
public:
	FSoftObjectPath                                    LevelVariantSets;                                           // 0x0228   (0x0018)  
	TMap<class UBlueprintGeneratedClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;             // 0x0240   (0x0050)  


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	bool SwitchOnVariantByName(FString VariantSetName, FString VariantName) // [0x19b3d50] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(VariantSetName, VariantName);
	}
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex) // [0x19b3c80] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(VariantSetIndex, VariantIndex);
	}
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	void SetLevelVariantSets(ULevelVariantSets* InVariantSets) // [0x19b34d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ULevelVariantSets*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InVariantSets);
	}
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	ULevelVariantSets* GetLevelVariantSets(bool bLoad) // [0x19b2a80] Final|Native|Public|BlueprintCallable 
	{
		typedef class ULevelVariantSets* (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(bLoad);
	}
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULevelVariantSetsFunctionDirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x01B8 (440 bytes) (0x000028 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0028   (0x0060)  MISSED
	SDK_UNDEFINED(16,851) /* TArray<Properties> */     __um(Properties);                                           // 0x0088   (0x0010)  
	TArray<int32_t>                                    PropertyIndices;                                            // 0x0098   (0x0010)  
	TArray<FCapturedPropSegment>                       CapturedPropSegments;                                       // 0x00A8   (0x0010)  
	FString                                            FullDisplayString;                                          // 0x00B8   (0x0010)  
	FName                                              PropertySetterName;                                         // 0x00C8   (0x0008)  
	TMap<FString, FString>                             PropertySetterParameterDefaults;                            // 0x00D0   (0x0050)  
	bool                                               bHasRecordedData;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	class UClass*                                      LeafPropertyClass;                                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0130   (0x0008)  MISSED
	TArray<char>                                       ValueBytes;                                                 // 0x0138   (0x0010)  
	EPropertyValueCategory                             PropCategory;                                               // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6F];                                      // 0x0149   (0x006F)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	bool HasRecordedData() // [0x19b3130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	FText GetPropertyTooltip() // [0x19b2cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FText (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	FString GetFullDisplayString() // [0x1567b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueTransform : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueVisibility : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueColor : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueMaterial : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueOption : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueSoftObject : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x0250 (592 bytes) (0x000228 - 0x000250) align 8 MaxSize: 0x0250
class ASwitchActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0228   (0x0018)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x0240   (0x0008)  
	int32_t                                            LastSelectedOption;                                         // 0x0248   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x024C   (0x0004)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	void SelectOption(int32_t OptionIndex) // [0x19b3190] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(OptionIndex);
	}
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	int32_t GetSelectedOption() // [0x19b2d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                            // [0x19b2be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UVariant : public UObject
{ 
public:
	TArray<FVariantDependency>                         Dependencies;                                               // 0x0028   (0x0010)  
	FText                                              DisplayText;                                                // 0x0038   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                             // 0x0068   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	void SwitchOn() // [0x19b3c60] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	void SetThumbnailFromTexture(UTexture2D* NewThumbnail) // [0x19b3b40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UTexture2D*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewThumbnail);
	}
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	void SetThumbnailFromFile(FString FilePath) // [0x19b3960] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(FilePath);
	}
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	void SetThumbnailFromEditorViewport() // [0xb888e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma) // [0x19b3560] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FTransform&, float, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(WorldContextObject, CameraTransform, FOVDegrees, MinZ, Gamma);
	}
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	void SetDisplayText(FText& NewDisplayText) // [0x19b3330] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FText&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(NewDisplayText);
	}
	// Function /Script/VariantManagerContent.Variant.SetDependency
	void SetDependency(int32_t Index, FVariantDependency& Dependency) // [0x19b3220] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(int32_t, FVariantDependency&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Index, Dependency);
	}
	// Function /Script/VariantManagerContent.Variant.IsActive
	bool IsActive() // [0x19b3160] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	UTexture2D* GetThumbnail() // [0x19b2d90] Final|Native|Public|BlueprintCallable 
	{
		typedef class UTexture2D* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/VariantManagerContent.Variant.GetParent
	UVariantSet* GetParent() // [0x19b2c60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UVariantSet* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	int32_t GetNumDependencies() // [0x19b2b50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	int32_t GetNumActors() // [0x19b2b20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func();
	}
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	FText GetDisplayText() // [0x19b2940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FText (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func();
	}
	// Function /Script/VariantManagerContent.Variant.GetDependents
	// TArray<UVariant*> GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);                     // [0x19b2830] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	FVariantDependency GetDependency(int32_t Index) // [0x19b2790] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FVariantDependency (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(Index);
	}
	// Function /Script/VariantManagerContent.Variant.GetActor
	AActor* GetActor(int32_t ActorIndex) // [0x19b26f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class AActor* (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(ActorIndex);
	}
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	void DeleteDependency(int32_t Index) // [0x19b2660] Final|Native|Public  
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(Index);
	}
	// Function /Script/VariantManagerContent.Variant.AddDependency
	int32_t AddDependency(FVariantDependency& Dependency) // [0x19b2590] Final|Native|Public|HasOutParms 
	{
		typedef int32_t (*FuncPtr)(FVariantDependency&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(Dependency);
	}
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UVariantObjectBinding : public UObject
{ 
public:
	FString                                            CachedActorLabel;                                           // 0x0028   (0x0010)  
	FSoftObjectPath                                    ObjectPtr;                                                  // 0x0038   (0x0018)  
	TLazyObjectPtr<class UObject*>                     LazyObjectPtr;                                              // 0x0050   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<class UPropertyValue*>                      CapturedProperties;                                         // 0x0070   (0x0010)  
	TArray<FFunctionCaller>                            FunctionCallers;                                            // 0x0080   (0x0010)  
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UVariantSet : public UObject
{ 
public:
	FText                                              DisplayText;                                                // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0040   (0x0018)  MISSED
	bool                                               bExpanded;                                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<class UVariant*>                            Variants;                                                   // 0x0060   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	void SetThumbnailFromTexture(UTexture2D* NewThumbnail) // [0x19b3bd0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UTexture2D*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(NewThumbnail);
	}
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	void SetThumbnailFromFile(FString FilePath) // [0x19b3a50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(FilePath);
	}
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	void SetThumbnailFromEditorViewport() // [0xb888e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	void SetThumbnailFromCamera(UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma) // [0x19b3760] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*, FTransform&, float, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(WorldContextObject, CameraTransform, FOVDegrees, MinZ, Gamma);
	}
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	void SetDisplayText(FText& NewDisplayText) // [0x19b3400] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FText&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(NewDisplayText);
	}
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	UVariant* GetVariantByName(FString VariantName) // [0x19b2e90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UVariant* (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(VariantName);
	}
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	UVariant* GetVariant(int32_t VariantIndex) // [0x19b2df0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UVariant* (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(VariantIndex);
	}
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	UTexture2D* GetThumbnail() // [0x19b2dc0] Final|Native|Public|BlueprintCallable 
	{
		typedef class UTexture2D* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	ULevelVariantSets* GetParent() // [0x19b2c90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class ULevelVariantSets* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	int32_t GetNumVariants() // [0x19b2bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	FText GetDisplayText() // [0x19b29e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FText (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(ULevelVariantSets) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(ALevelVariantSetsActor) == 0x0290); // 656 bytes (0x000228 - 0x000290)
static_assert(sizeof(ULevelVariantSetsFunctionDirector) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FCapturedPropSegment) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UPropertyValue) == 0x01B8); // 440 bytes (0x000028 - 0x0001B8)
static_assert(sizeof(UPropertyValueTransform) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueVisibility) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueColor) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueMaterial) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueOption) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueSoftObject) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(ASwitchActor) == 0x0250); // 592 bytes (0x000228 - 0x000250)
static_assert(sizeof(FVariantDependency) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UVariant) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FFunctionCaller) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UVariantObjectBinding) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UVariantSet) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(ULevelVariantSets, DirectorClass) == 0x0028);
static_assert(offsetof(ULevelVariantSets, VariantSets) == 0x0030);
static_assert(offsetof(ALevelVariantSetsActor, LevelVariantSets) == 0x0228);
static_assert(offsetof(ALevelVariantSetsActor, DirectorInstances) == 0x0240);
static_assert(offsetof(FCapturedPropSegment, PropertyName) == 0x0000);
static_assert(offsetof(FCapturedPropSegment, ComponentName) == 0x0018);
static_assert(offsetof(UPropertyValue, PropertyIndices) == 0x0098);
static_assert(offsetof(UPropertyValue, CapturedPropSegments) == 0x00A8);
static_assert(offsetof(UPropertyValue, FullDisplayString) == 0x00B8);
static_assert(offsetof(UPropertyValue, PropertySetterName) == 0x00C8);
static_assert(offsetof(UPropertyValue, PropertySetterParameterDefaults) == 0x00D0);
static_assert(offsetof(UPropertyValue, LeafPropertyClass) == 0x0128);
static_assert(offsetof(UPropertyValue, ValueBytes) == 0x0138);
static_assert(offsetof(UPropertyValue, PropCategory) == 0x0148);
static_assert(offsetof(ASwitchActor, SceneComponent) == 0x0240);
static_assert(offsetof(FVariantDependency, VariantSet) == 0x0000);
static_assert(offsetof(FVariantDependency, Variant) == 0x0028);
static_assert(offsetof(UVariant, Dependencies) == 0x0028);
static_assert(offsetof(UVariant, DisplayText) == 0x0038);
static_assert(offsetof(UVariant, ObjectBindings) == 0x0068);
static_assert(offsetof(UVariant, Thumbnail) == 0x0078);
static_assert(offsetof(FFunctionCaller, FunctionName) == 0x0000);
static_assert(offsetof(UVariantObjectBinding, CachedActorLabel) == 0x0028);
static_assert(offsetof(UVariantObjectBinding, ObjectPtr) == 0x0038);
static_assert(offsetof(UVariantObjectBinding, LazyObjectPtr) == 0x0050);
static_assert(offsetof(UVariantObjectBinding, CapturedProperties) == 0x0070);
static_assert(offsetof(UVariantObjectBinding, FunctionCallers) == 0x0080);
static_assert(offsetof(UVariantSet, DisplayText) == 0x0028);
static_assert(offsetof(UVariantSet, Variants) == 0x0060);
static_assert(offsetof(UVariantSet, Thumbnail) == 0x0070);