
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class USumoWwiseAudioPreferences;

/// Enum /Script/SumoWwiseHelpers.ESumoWwiseAudioOutputType
/// Size: 0x01 (1 bytes)
enum class ESumoWwiseAudioOutputType : uint8_t
{
	ESumoWwiseAudioOutputType__Speakers                                              = 0,
	ESumoWwiseAudioOutputType__Headphones                                            = 1
};

/// Class /Script/SumoWwiseHelpers.SumoWwiseAudioPreferences
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class USumoWwiseAudioPreferences : public UObject
{ 
public:
	SDK_UNDEFINED(80,831) /* TMap<FName, TWeakObjectPtr<UAkRtpc*>> */ __um(PreferencesToRTPCs);                    // 0x0028   (0x0050)  


	/// Functions
	// Function /Script/SumoWwiseHelpers.SumoWwiseAudioPreferences.SetAudioPreference
	void SetAudioPreference(FName Preference, float Amount) // [0xca0820] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FName, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Preference, Amount);
	}
	// Function /Script/SumoWwiseHelpers.SumoWwiseAudioPreferences.SetAudioOutputType
	void SetAudioOutputType(ESumoWwiseAudioOutputType OutputType) // [0xca07a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(ESumoWwiseAudioOutputType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(OutputType);
	}
};

#pragma pack(pop)


static_assert(sizeof(USumoWwiseAudioPreferences) == 0x0078); // 120 bytes (0x000028 - 0x000078)
