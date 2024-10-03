
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

class ACameraRig_Crane;
class ACameraRig_Rail;
class ACineCameraActor;
class UCineCameraComponent;

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x01 (1 bytes)
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0008   (0x0010)  MISSED
	TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0018   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0020   (0x0020)  MISSED
	FVector                                            RelativeOffset;                                             // 0x0040   (0x000C)  
	bool                                               bAllowRoll : 1;                                             // 0x004C:0 (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FCameraFilmbackSettings
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0014   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FCameraTrackingFocusSettings
{ 
	TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	FVector                                            RelativeOffset;                                             // 0x0028   (0x000C)  
	bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0038)  
	bool                                               bDrawDebugFocusPlane : 1;                                   // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FColor                                             DebugFocusPlaneColor;                                       // 0x0044   (0x0004)  
	bool                                               bSmoothFocusChanges : 1;                                    // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x004C   (0x0004)  
	float                                              FocusOffset;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNamedFilmbackPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNamedLensPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x0018)  
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0258 (600 bytes) (0x000228 - 0x000258) align 8 MaxSize: 0x0258
class ACameraRig_Crane : public AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x0228   (0x0004)  
	float                                              CraneYaw;                                                   // 0x022C   (0x0004)  
	float                                              CraneArmLength;                                             // 0x0230   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x0234   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x0235   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0236   (0x0002)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0238   (0x0008)  
	class USceneComponent*                             CraneYawControl;                                            // 0x0240   (0x0008)  
	class USceneComponent*                             CranePitchControl;                                          // 0x0248   (0x0008)  
	class USceneComponent*                             CraneCameraMount;                                           // 0x0250   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0248 (584 bytes) (0x000228 - 0x000248) align 8 MaxSize: 0x0248
class ACameraRig_Rail : public AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x0228   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x022C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x022D   (0x0003)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0230   (0x0008)  
	class USplineComponent*                            RailSplineComponent;                                        // 0x0238   (0x0008)  
	class USceneComponent*                             RailCameraMount;                                            // 0x0240   (0x0008)  


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	USplineComponent* GetRailSplineComponent() // [0x370c460] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class USplineComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0830 (2096 bytes) (0x0007D0 - 0x000830) align 16 MaxSize: 0x0830
class ACineCameraActor : public ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x07D0   (0x0050)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0820   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	UCineCameraComponent* GetCineCameraComponent() // [0x370c090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UCineCameraComponent* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x08E0 (2272 bytes) (0x0007E0 - 0x0008E0) align 16 MaxSize: 0x08E0
class UCineCameraComponent : public UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x07E0   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x07EC   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x07F8   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x0810   (0x0058)  
	float                                              CurrentFocalLength;                                         // 0x0868   (0x0004)  
	float                                              CurrentAperture;                                            // 0x086C   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0870   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0874   (0x000C)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0880   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0890   (0x0010)  
	FString                                            DefaultFilmbackPresetName;                                  // 0x08A0   (0x0010)  
	FString                                            DefaultFilmbackPreset;                                      // 0x08B0   (0x0010)  
	FString                                            DefaultLensPresetName;                                      // 0x08C0   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x08D0   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x08D4   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x08D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	void SetLensPresetByName(FString InPresetName) // [0x370c5d0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InPresetName);
	}
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	void SetFilmbackPresetByName(FString InPresetName) // [0x370c530] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InPresetName);
	}
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	void SetCurrentFocalLength(float InFocalLength) // [0x370c4b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InFocalLength);
	}
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	float GetVerticalFieldOfView() // [0x370c480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                           // [0x370c380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	FString GetLensPresetName() // [0x370c300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	float GetHorizontalFieldOfView() // [0x370c2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                   // [0x370c1f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	FString GetFilmbackPresetName() // [0x370c170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	FString GetDefaultFilmbackPresetName() // [0x370c0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(ACameraRig_Crane) == 0x0258); // 600 bytes (0x000228 - 0x000258)
static_assert(sizeof(ACameraRig_Rail) == 0x0248); // 584 bytes (0x000228 - 0x000248)
static_assert(sizeof(FCameraLookatTrackingSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(ACineCameraActor) == 0x0830); // 2096 bytes (0x0007D0 - 0x000830)
static_assert(sizeof(FCameraFilmbackSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCameraLensSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCameraTrackingFocusSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FCameraFocusSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNamedFilmbackPreset) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNamedLensPreset) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UCineCameraComponent) == 0x08E0); // 2272 bytes (0x0007E0 - 0x0008E0)
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x0238);
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x0240);
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x0248);
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x0250);
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x0230);
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x0238);
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x0240);
static_assert(offsetof(FCameraLookatTrackingSettings, ActorToTrack) == 0x0018);
static_assert(offsetof(FCameraLookatTrackingSettings, RelativeOffset) == 0x0040);
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x07D0);
static_assert(offsetof(FCameraTrackingFocusSettings, ActorToTrack) == 0x0000);
static_assert(offsetof(FCameraTrackingFocusSettings, RelativeOffset) == 0x0028);
static_assert(offsetof(FCameraFocusSettings, FocusMethod) == 0x0000);
static_assert(offsetof(FCameraFocusSettings, TrackingFocusSettings) == 0x0008);
static_assert(offsetof(FCameraFocusSettings, DebugFocusPlaneColor) == 0x0044);
static_assert(offsetof(FNamedFilmbackPreset, Name) == 0x0000);
static_assert(offsetof(FNamedFilmbackPreset, FilmbackSettings) == 0x0010);
static_assert(offsetof(FNamedLensPreset, Name) == 0x0000);
static_assert(offsetof(FNamedLensPreset, LensSettings) == 0x0010);
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x07E0);
static_assert(offsetof(UCineCameraComponent, Filmback) == 0x07EC);
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x07F8);
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x0810);
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x0880);
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x0890);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x08A0);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPreset) == 0x08B0);
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x08C0);
