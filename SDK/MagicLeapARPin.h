
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

class AMagicLeapARPinInfoActorBase;
class AMagicLeapARPinRenderer;
class UMagicLeapARPinComponent;
class UMagicLeapARPinContentBindings;
class UMagicLeapARPinFunctionLibrary;
class UMagicLeapARPinSaveGame;
class UMagicLeapARPinSettings;

/// Enum /Script/MagicLeapARPin.EMagicLeapARPinType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapARPinType : uint8_t
{
	EMagicLeapARPinType__SingleUserSingleSession                                     = 0,
	EMagicLeapARPinType__SingleUserMultiSession                                      = 1,
	EMagicLeapARPinType__MultiUserMultiSession                                       = 2
};

/// Enum /Script/MagicLeapARPin.EMagicLeapAutoPinType
/// Size: 0x01 (1 bytes)
enum class EMagicLeapAutoPinType : uint8_t
{
	EMagicLeapAutoPinType__OnlyOnDataRestoration                                     = 0,
	EMagicLeapAutoPinType__Always                                                    = 1,
	EMagicLeapAutoPinType__Never                                                     = 2
};

/// Enum /Script/MagicLeapARPin.EMagicLeapPassableWorldError
/// Size: 0x01 (1 bytes)
enum class EMagicLeapPassableWorldError : uint8_t
{
	EMagicLeapPassableWorldError__None                                               = 0,
	EMagicLeapPassableWorldError__LowMapQuality                                      = 1,
	EMagicLeapPassableWorldError__UnableToLocalize                                   = 2,
	EMagicLeapPassableWorldError__Unavailable                                        = 3,
	EMagicLeapPassableWorldError__PrivilegeDenied                                    = 4,
	EMagicLeapPassableWorldError__InvalidParam                                       = 5,
	EMagicLeapPassableWorldError__UnspecifiedFailure                                 = 6,
	EMagicLeapPassableWorldError__PrivilegeRequestPending                            = 7,
	EMagicLeapPassableWorldError__StartupPending                                     = 8,
	EMagicLeapPassableWorldError__SharedWorldNotEnabled                              = 9,
	EMagicLeapPassableWorldError__NotImplemented                                     = 10,
	EMagicLeapPassableWorldError__PinNotFound                                        = 11
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinState
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMagicLeapARPinState
{ 
	float                                              Confidence;                                                 // 0x0000   (0x0004)  
	float                                              ValidRadius;                                                // 0x0004   (0x0004)  
	float                                              RotationError;                                              // 0x0008   (0x0004)  
	float                                              TranslationError;                                           // 0x000C   (0x0004)  
	EMagicLeapARPinType                                PinType;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinObjectIdList
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMagicLeapARPinObjectIdList
{ 
	SDK_UNDEFINED(80,782) /* TSet<FString> */          __um(ObjectIdList);                                         // 0x0000   (0x0050)  
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinQuery
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMagicLeapARPinQuery
{ 
	SDK_UNDEFINED(80,783) /* TSet<EMagicLeapARPinType> */ __um(Types);                                             // 0x0000   (0x0050)  
	int32_t                                            MaxResults;                                                 // 0x0050   (0x0004)  
	FVector                                            TargetPoint;                                                // 0x0054   (0x000C)  
	float                                              Radius;                                                     // 0x0060   (0x0004)  
	bool                                               bSorted;                                                    // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinComponent
/// Size: 0x03B0 (944 bytes) (0x0001F8 - 0x0003B0) align 16 MaxSize: 0x03B0
class UMagicLeapARPinComponent : public USceneComponent
{ 
public:
	FString                                            ObjectUID;                                                  // 0x01F8   (0x0010)  
	int32_t                                            UserIndex;                                                  // 0x0208   (0x0004)  
	EMagicLeapAutoPinType                              AutoPinType;                                                // 0x020C   (0x0001)  
	bool                                               bShouldPinActor;                                            // 0x020D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x020E   (0x0002)  MISSED
	class UClass*                                      PinDataClass;                                               // 0x0210   (0x0008)  
	SDK_UNDEFINED(80,784) /* TSet<EMagicLeapARPinType> */ __um(SearchPinTypes);                                    // 0x0218   (0x0050)  
	class USphereComponent*                            SearchVolume;                                               // 0x0268   (0x0008)  
	SDK_UNDEFINED(16,785) /* FMulticastInlineDelegate */ __um(OnPersistentEntityPinned);                           // 0x0270   (0x0010)  
	SDK_UNDEFINED(16,786) /* FMulticastInlineDelegate */ __um(OnPersistentEntityPinLost);                          // 0x0280   (0x0010)  
	SDK_UNDEFINED(16,787) /* FMulticastInlineDelegate */ __um(OnPinDataLoadAttemptCompleted);                      // 0x0290   (0x0010)  
	FGuid                                              PinnedCFUID;                                                // 0x02A0   (0x0010)  
	class USceneComponent*                             PinnedSceneComponent;                                       // 0x02B0   (0x0008)  
	class UMagicLeapARPinSaveGame*                     PinData;                                                    // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData01_7[0xF0];                                      // 0x02C0   (0x00F0)  MISSED


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.UnPin
	void UnPin() // [0x1aa0030] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
	UMagicLeapARPinSaveGame* TryGetPinData(UClass* InPinDataClass, bool& OutPinDataValid) // [0x1a9fe10] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef class UMagicLeapARPinSaveGame* (*FuncPtr)(UClass*, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(InPinDataClass, OutPinDataValid);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
	bool PinToRestoredOrSyncedID() // [0x1a9fab0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToID
	bool PinToID(FGuid& PinId) // [0x1a9fa00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FGuid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(PinId);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
	void PinToBestFit() // [0x1a9f9e0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
	bool PinSceneComponent(USceneComponent* ComponentToPin) // [0x1a9f940] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(USceneComponent*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(ComponentToPin);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
	bool PinRestoredOrSynced() // [0x1a9f910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinActor
	bool PinActor(AActor* ActorToPin) // [0x1a9f870] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(ActorToPin);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced) // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(bRestoredOrSynced);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
	void PersistentEntityPinLost__DelegateSignature() // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
	void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored) // [0x2438a30] MulticastDelegate|Public|Delegate 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(bDataRestored);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.IsPinned
	bool IsPinned() // [0x1a9f720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinState
	bool GetPinState(FMagicLeapARPinState& State) // [0x1a9f5c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FMagicLeapARPinState&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(State);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
	bool GetPinnedPinID(FGuid& PinId) // [0x1a9f670] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGuid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(PinId);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinData
	UMagicLeapARPinSaveGame* GetPinData(UClass* PinDataClass) // [0x1a9f520] Final|Native|Public|BlueprintCallable 
	{
		typedef class UMagicLeapARPinSaveGame* (*FuncPtr)(UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(PinDataClass);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
	void AttemptPinDataRestorationAsync() // [0x1a9eae0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
	bool AttemptPinDataRestoration() // [0x1a9eab0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
	// void UnBindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty& Delegate);                                        // [0x1a9ff90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
	// void UnBindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty& Delegate);                                               // [0x1a9fef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
	EMagicLeapPassableWorldError SetGlobalQueryFilter(FMagicLeapARPinQuery& InGlobalFilter) // [0x1a9fca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef EMagicLeapPassableWorldError (*FuncPtr)(FMagicLeapARPinQuery&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(InGlobalFilter);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
	void SetContentBindingSaveGameUserIndex(int32_t UserIndex) // [0x1a9fc20] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(UserIndex);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
	// EMagicLeapPassableWorldError QueryARPins(FMagicLeapARPinQuery& Query, TArray<FGuid>& Pins);                              // [0x1a9fae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
	bool ParseStringToARPinId(FString PinIdString, FGuid& ARPinId) // [0x1a9f780] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FString, FGuid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(PinIdString, ARPinId);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
	bool IsTrackerValid() // [0x1a9f750] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
	EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t& Count) // [0x1a9f490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef EMagicLeapPassableWorldError (*FuncPtr)(int32_t&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(Count);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
	EMagicLeapPassableWorldError GetGlobalQueryFilter(FMagicLeapARPinQuery& CurrentGlobalFilter) // [0x1a9f3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef EMagicLeapPassableWorldError (*FuncPtr)(FMagicLeapARPinQuery&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(CurrentGlobalFilter);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
	int32_t GetContentBindingSaveGameUserIndex() // [0x1a9f380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
	EMagicLeapPassableWorldError GetClosestARPin(FVector& SearchPoint, FGuid& PinId) // [0x1a9f290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef EMagicLeapPassableWorldError (*FuncPtr)(FVector&, FGuid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(SearchPoint, PinId);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
	// EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, TArray<FGuid>& Pins);                              // [0x1a9f1a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
	FString GetARPinStateToString(FMagicLeapARPinState& State) // [0x1a9f0c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FMagicLeapARPinState&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(State);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
	EMagicLeapPassableWorldError GetARPinState(FGuid& PinId, FMagicLeapARPinState& State) // [0x1a9efc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef EMagicLeapPassableWorldError (*FuncPtr)(FGuid&, FMagicLeapARPinState&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(PinId, State);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
	bool GetARPinPositionAndOrientation_TrackingSpace(FGuid& PinId, FVector& position, FRotator& Orientation, bool& PinFoundInEnvironment) // [0x1a9ee30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FGuid&, FVector&, FRotator&, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(PinId, position, Orientation, PinFoundInEnvironment);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
	bool GetARPinPositionAndOrientation(FGuid& PinId, FVector& position, FRotator& Orientation, bool& PinFoundInEnvironment) // [0x1a9eca0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FGuid&, FVector&, FRotator&, bool&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(PinId, position, Orientation, PinFoundInEnvironment);
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
	EMagicLeapPassableWorldError DestroyTracker() // [0x1a9ec70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef EMagicLeapPassableWorldError (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
	EMagicLeapPassableWorldError CreateTracker() // [0x1a9ec40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef EMagicLeapPassableWorldError (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func();
	}
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
	// void BindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty& Delegate);                                          // [0x1a9eba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
	// void BindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty& Delegate);                                                 // [0x1a9eb00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
	FString ARPinIdToString(FGuid& ARPinId) // [0x1a9e9d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FGuid&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(ARPinId);
	}
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase
/// Size: 0x0240 (576 bytes) (0x000228 - 0x000240) align 8 MaxSize: 0x0240
class AMagicLeapARPinInfoActorBase : public AActor
{ 
public:
	FGuid                                              PinId;                                                      // 0x0228   (0x0010)  
	bool                                               bVisibilityOverride;                                        // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0239   (0x0007)  MISSED


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
	void OnUpdateARPinState() // [0x2438a30] Event|Public|BlueprintCallable|BlueprintEvent 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinRenderer
/// Size: 0x0290 (656 bytes) (0x000228 - 0x000290) align 8 MaxSize: 0x0290
class AMagicLeapARPinRenderer : public AActor
{ 
public:
	bool                                               bInfoActorsVisibilityOverride;                              // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0229   (0x0007)  MISSED
	TMap<FGuid, class AMagicLeapARPinInfoActorBase*>   AllInfoActors;                                              // 0x0230   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0280   (0x0008)  MISSED
	class UClass*                                      ClassToSpawn;                                               // 0x0288   (0x0008)  


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
	void SetVisibilityOverride(bool InVisibilityOverride) // [0x1a9fd80] Final|Native|Private|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InVisibilityOverride);
	}
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMagicLeapARPinSettings : public UObject
{ 
public:
	float                                              UpdateCheckFrequency;                                       // 0x0028   (0x0004)  
	FMagicLeapARPinState                               OnUpdatedEventTriggerDelta;                                 // 0x002C   (0x0014)  
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSaveGame
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 16 MaxSize: 0x00B0
class UMagicLeapARPinSaveGame : public USaveGame
{ 
public:
	FGuid                                              PinnedID;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         ComponentWorldTransform;                                    // 0x0040   (0x0030)  
	FTransform                                         PinTransform;                                               // 0x0070   (0x0030)  
	bool                                               bShouldPinActor;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinContentBindings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UMagicLeapARPinContentBindings : public USaveGame
{ 
public:
	TMap<FGuid, FMagicLeapARPinObjectIdList>           AllContentBindings;                                         // 0x0028   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapARPinComponent) == 0x03B0); // 944 bytes (0x0001F8 - 0x0003B0)
static_assert(sizeof(UMagicLeapARPinFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AMagicLeapARPinInfoActorBase) == 0x0240); // 576 bytes (0x000228 - 0x000240)
static_assert(sizeof(AMagicLeapARPinRenderer) == 0x0290); // 656 bytes (0x000228 - 0x000290)
static_assert(sizeof(FMagicLeapARPinState) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UMagicLeapARPinSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMagicLeapARPinSaveGame) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(FMagicLeapARPinObjectIdList) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UMagicLeapARPinContentBindings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FMagicLeapARPinQuery) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(offsetof(UMagicLeapARPinComponent, ObjectUID) == 0x01F8);
static_assert(offsetof(UMagicLeapARPinComponent, AutoPinType) == 0x020C);
static_assert(offsetof(UMagicLeapARPinComponent, PinDataClass) == 0x0210);
static_assert(offsetof(UMagicLeapARPinComponent, SearchVolume) == 0x0268);
static_assert(offsetof(UMagicLeapARPinComponent, PinnedCFUID) == 0x02A0);
static_assert(offsetof(UMagicLeapARPinComponent, PinnedSceneComponent) == 0x02B0);
static_assert(offsetof(UMagicLeapARPinComponent, PinData) == 0x02B8);
static_assert(offsetof(AMagicLeapARPinInfoActorBase, PinId) == 0x0228);
static_assert(offsetof(AMagicLeapARPinRenderer, AllInfoActors) == 0x0230);
static_assert(offsetof(AMagicLeapARPinRenderer, ClassToSpawn) == 0x0288);
static_assert(offsetof(FMagicLeapARPinState, PinType) == 0x0010);
static_assert(offsetof(UMagicLeapARPinSettings, OnUpdatedEventTriggerDelta) == 0x002C);
static_assert(offsetof(UMagicLeapARPinSaveGame, PinnedID) == 0x0028);
static_assert(offsetof(UMagicLeapARPinSaveGame, ComponentWorldTransform) == 0x0040);
static_assert(offsetof(UMagicLeapARPinSaveGame, PinTransform) == 0x0070);
static_assert(offsetof(UMagicLeapARPinContentBindings, AllContentBindings) == 0x0028);
static_assert(offsetof(FMagicLeapARPinQuery, TargetPoint) == 0x0054);
