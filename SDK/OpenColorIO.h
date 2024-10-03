
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

class UOpenColorIOBlueprintLibrary;
class UOpenColorIOColorTransform;
class UOpenColorIOConfiguration;
class UOpenColorIODisplayExtensionWrapper;

/// Struct /Script/OpenColorIO.OpenColorIOColorSpace
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FOpenColorIOColorSpace
{ 
	FString                                            ColorSpaceName;                                             // 0x0000   (0x0010)  
	int32_t                                            ColorSpaceIndex;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            FamilyName;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/OpenColorIO.OpenColorIOColorConversionSettings
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FOpenColorIOColorConversionSettings
{ 
	class UOpenColorIOConfiguration*                   ConfigurationSource;                                        // 0x0000   (0x0008)  
	FOpenColorIOColorSpace                             SourceColorSpace;                                           // 0x0008   (0x0028)  
	FOpenColorIOColorSpace                             DestinationColorSpace;                                      // 0x0030   (0x0028)  
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayConfiguration
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FOpenColorIODisplayConfiguration
{ 
	bool                                               bIsEnabled;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FOpenColorIOColorConversionSettings                ColorConfiguration;                                         // 0x0008   (0x0058)  
};

/// Class /Script/OpenColorIO.OpenColorIOBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
	bool ApplyColorSpaceTransform(UObject* WorldContextObject, FOpenColorIOColorConversionSettings& ConversionSettings, UTexture* InputTexture, UTextureRenderTarget2D* OutputRenderTarget) // [0x146a100] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UObject*, FOpenColorIOColorConversionSettings&, UTexture*, UTextureRenderTarget2D*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject, ConversionSettings, InputTexture, OutputRenderTarget);
	}
};

/// Class /Script/OpenColorIO.OpenColorIOColorTransform
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UOpenColorIOColorTransform : public UObject
{ 
public:
	class UOpenColorIOConfiguration*                   ConfigurationOwner;                                         // 0x0028   (0x0008)  
	FString                                            SourceColorSpace;                                           // 0x0030   (0x0010)  
	FString                                            DestinationColorSpace;                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED
};

/// Class /Script/OpenColorIO.OpenColorIOConfiguration
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UOpenColorIOConfiguration : public UObject
{ 
public:
	FFilePath                                          ConfigurationFile;                                          // 0x0028   (0x0010)  
	TArray<FOpenColorIOColorSpace>                     DesiredColorSpaces;                                         // 0x0038   (0x0010)  
	TArray<class UOpenColorIOColorTransform*>          ColorTransforms;                                            // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0058   (0x0028)  MISSED
};

/// Class /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOpenColorIODisplayExtensionWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	// void SetSceneExtensionIsActiveFunctions(TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);                  // [0x146a6d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	void SetSceneExtensionIsActiveFunction(FSceneViewExtensionIsActiveFunctor& IsActiveFunction) // [0x146a5e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSceneViewExtensionIsActiveFunctor&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(IsActiveFunction);
	}
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration) // [0x146a4c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FOpenColorIODisplayConfiguration);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InDisplayConfiguration);
	}
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	void RemoveSceneExtension() // [0x146a4a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
	UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, FSceneViewExtensionIsActiveFunctor& IsActiveFunction) // [0x146a2d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef class UOpenColorIODisplayExtensionWrapper* (*FuncPtr)(FOpenColorIODisplayConfiguration, FSceneViewExtensionIsActiveFunctor&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(InDisplayConfiguration, IsActiveFunction);
	}
};

#pragma pack(pop)


static_assert(sizeof(UOpenColorIOBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOpenColorIOColorTransform) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(FOpenColorIOColorSpace) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UOpenColorIOConfiguration) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UOpenColorIODisplayExtensionWrapper) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FOpenColorIOColorConversionSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FOpenColorIODisplayConfiguration) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(UOpenColorIOColorTransform, ConfigurationOwner) == 0x0028);
static_assert(offsetof(UOpenColorIOColorTransform, SourceColorSpace) == 0x0030);
static_assert(offsetof(UOpenColorIOColorTransform, DestinationColorSpace) == 0x0040);
static_assert(offsetof(FOpenColorIOColorSpace, ColorSpaceName) == 0x0000);
static_assert(offsetof(FOpenColorIOColorSpace, FamilyName) == 0x0018);
static_assert(offsetof(UOpenColorIOConfiguration, ConfigurationFile) == 0x0028);
static_assert(offsetof(UOpenColorIOConfiguration, DesiredColorSpaces) == 0x0038);
static_assert(offsetof(UOpenColorIOConfiguration, ColorTransforms) == 0x0048);
static_assert(offsetof(FOpenColorIOColorConversionSettings, ConfigurationSource) == 0x0000);
static_assert(offsetof(FOpenColorIOColorConversionSettings, SourceColorSpace) == 0x0008);
static_assert(offsetof(FOpenColorIOColorConversionSettings, DestinationColorSpace) == 0x0030);
static_assert(offsetof(FOpenColorIODisplayConfiguration, ColorConfiguration) == 0x0008);
