
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

class UDLSSLibrary;

/// Enum /Script/DLSSBlueprint.UDLSSMode
/// Size: 0x01 (1 bytes)
enum class UDLSSMode : uint8_t
{
	UDLSSMode__Off                                                                   = 0,
	UDLSSMode__Auto                                                                  = 1,
	UDLSSMode__DLAA                                                                  = 2,
	UDLSSMode__UltraQuality                                                          = 3,
	UDLSSMode__Quality                                                               = 4,
	UDLSSMode__Balanced                                                              = 5,
	UDLSSMode__Performance                                                           = 6,
	UDLSSMode__UltraPerformance                                                      = 7
};

/// Enum /Script/DLSSBlueprint.UDLSSSupport
/// Size: 0x01 (1 bytes)
enum class UDLSSSupport : uint8_t
{
	UDLSSSupport__Supported                                                          = 0,
	UDLSSSupport__NotSupported                                                       = 1,
	UDLSSSupport__NotSupportedIncompatibleHardware                                   = 2,
	UDLSSSupport__NotSupportedDriverOutOfDate                                        = 3,
	UDLSSSupport__NotSupportedOperatingSystemOutOfDate                               = 4,
	UDLSSSupport__NotSupportedByPlatformAtBuildTime                                  = 5,
	UDLSSSupport__NotSupportedIncompatibleAPICaptureToolActive                       = 6
};

/// Class /Script/DLSSBlueprint.DLSSLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDLSSLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	void SetDLSSSharpness(float Sharpness) // [0x118e4b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Sharpness);
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSMode
	void SetDLSSMode(UDLSSMode DLSSMode) // [0x118e440] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UDLSSMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(DLSSMode);
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	UDLSSSupport QueryDLSSSupport() // [0x118e410] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef UDLSSSupport (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
	UDLSSSupport QueryDLSSRRSupport() // [0x118e3e0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef UDLSSSupport (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	bool IsDLSSSupported() // [0x118e3b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
	bool IsDLSSRRSupported() // [0x118e380] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
	bool IsDLSSRREnabled() // [0x118e350] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	bool IsDLSSModeSupported(UDLSSMode DLSSMode) // [0x118e2d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(UDLSSMode);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(DLSSMode);
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
	bool IsDLSSEnabled() // [0x118e2a0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	bool IsDLAAEnabled() // [0x118e270] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	// TArray<UDLSSMode> GetSupportedDLSSModes();                                                                               // [0x118e1f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	float GetDLSSSharpness() // [0x118e190] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func();
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage) // [0x118e0b0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(float&, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(MinScreenPercentage, MaxScreenPercentage);
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
	void GetDLSSRRMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor) // [0x118dfd0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(MinDriverVersionMajor, MinDriverVersionMinor);
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness) // [0x118dd30] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(UDLSSMode, FVector2D, bool&, float&, bool&, float&, float&, float&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(DLSSMode, ScreenResolution, bIsSupported, OptimalScreenPercentage, bIsFixedScreenPercentage, MinScreenPercentage, MaxScreenPercentage, OptimalSharpness);
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMode
	UDLSSMode GetDLSSMode() // [0x118dd00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef UDLSSMode (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func();
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor) // [0x118dc20] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef void (*FuncPtr)(int32_t&, int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func(MinDriverVersionMajor, MinDriverVersionMinor);
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	UDLSSMode GetDefaultDLSSMode() // [0x118e1c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef UDLSSMode (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func();
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSSRR
	void EnableDLSSRR(bool bEnabled) // [0x118dba0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		func(bEnabled);
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSS
	void EnableDLSS(bool bEnabled) // [0x118db20] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		func(bEnabled);
	}
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLAA
	void EnableDLAA(bool bEnabled) // [0x118daa0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		func(bEnabled);
	}
};

#pragma pack(pop)


static_assert(sizeof(UDLSSLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
