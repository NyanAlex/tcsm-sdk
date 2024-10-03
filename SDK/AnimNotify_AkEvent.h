
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AkAudio.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAnimNotify_AkEvent_C;

/// Class /Wwise/AnimNotify_AkEvent.AnimNotify_AkEvent_C
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UAnimNotify_AkEvent_C : public UAnimNotify
{ 
public:
	FString                                            Attach_Name;                                                // 0x0038   (0x0010)  
	class UAkAudioEvent*                               Event;                                                      // 0x0048   (0x0008)  
	bool                                               Follow;                                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            EventName;                                                  // 0x0058   (0x0010)  


	/// Functions
	// Function /Wwise/AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
	bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) // [0x2438a30] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)(USkeletalMeshComponent*, UAnimSequenceBase*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(MeshComp, Animation);
	}
};

#pragma pack(pop)


static_assert(sizeof(UAnimNotify_AkEvent_C) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(offsetof(UAnimNotify_AkEvent_C, Attach_Name) == 0x0038);
static_assert(offsetof(UAnimNotify_AkEvent_C, Event) == 0x0048);
static_assert(offsetof(UAnimNotify_AkEvent_C, EventName) == 0x0058);
