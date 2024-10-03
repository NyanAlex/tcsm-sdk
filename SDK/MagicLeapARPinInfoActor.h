
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MagicLeapARPin.h"

#pragma pack(push, 0x1)

class AMagicLeapARPinInfoActor_C;

/// Class /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
/// Size: 0x02CC (716 bytes) (0x000240 - 0x0002CC) align 8 MaxSize: 0x02CC
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0240   (0x0008)  
	class UStaticMeshComponent*                        Right;                                                      // 0x0248   (0x0008)  
	class UStaticMeshComponent*                        Forward;                                                    // 0x0250   (0x0008)  
	class UStaticMeshComponent*                        Up;                                                         // 0x0258   (0x0008)  
	class USphereComponent*                            ValidRadiusVisualizer;                                      // 0x0260   (0x0008)  
	class USceneComponent*                             AxisRoot;                                                   // 0x0268   (0x0008)  
	class USceneComponent*                             VisualizerRoot;                                             // 0x0270   (0x0008)  
	class UTextRenderComponent*                        TypeValue;                                                  // 0x0278   (0x0008)  
	class UTextRenderComponent*                        TransErrValue;                                              // 0x0280   (0x0008)  
	class UTextRenderComponent*                        RotErrValue;                                                // 0x0288   (0x0008)  
	class UTextRenderComponent*                        ConfidenceValue;                                            // 0x0290   (0x0008)  
	class UTextRenderComponent*                        TransErrLabel;                                              // 0x0298   (0x0008)  
	class UTextRenderComponent*                        RotErrLabel;                                                // 0x02A0   (0x0008)  
	class UTextRenderComponent*                        ConfidenceLabel;                                            // 0x02A8   (0x0008)  
	class UTextRenderComponent*                        PinIDValue;                                                 // 0x02B0   (0x0008)  
	class USceneComponent*                             InfoRoot;                                                   // 0x02B8   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x02C0   (0x0008)  
	float                                              RotationSmoothSpeed;                                        // 0x02C8   (0x0004)  


	/// Functions
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
	void UpdatePinState() // [0x2438a30] Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
	void UserConstructionScript() // [0x2438a30] Event|Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
	void OnUpdateARPinState() // [0x2438a30] Event|Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds) // [0x2438a30] Event|Public|BlueprintEvent 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(DeltaSeconds);
	}
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
	void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint) // [0x2438a30] Final|HasDefaults    
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(EntryPoint);
	}
};

#pragma pack(pop)


static_assert(sizeof(AMagicLeapARPinInfoActor_C) == 0x02CC); // 716 bytes (0x000240 - 0x0002CC)
static_assert(offsetof(AMagicLeapARPinInfoActor_C, UberGraphFrame) == 0x0240);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Right) == 0x0248);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Forward) == 0x0250);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Up) == 0x0258);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ValidRadiusVisualizer) == 0x0260);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, AxisRoot) == 0x0268);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, VisualizerRoot) == 0x0270);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TypeValue) == 0x0278);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrValue) == 0x0280);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrValue) == 0x0288);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceValue) == 0x0290);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrLabel) == 0x0298);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrLabel) == 0x02A0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceLabel) == 0x02A8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, PinIDValue) == 0x02B0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, InfoRoot) == 0x02B8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Root) == 0x02C0);
