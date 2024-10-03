
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

class UMobileInstalledContent;
class UMobilePatchingLibrary;
class UMobilePendingContent;

/// Class /Script/MobilePatchingUtils.MobileInstalledContent
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UMobileInstalledContent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED


	/// Functions
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.Mount
	bool Mount(int32_t PakOrder, FString MountPoint) // [0x1b59830] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(int32_t, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(PakOrder, MountPoint);
	}
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	float GetInstalledContentSize() // [0x1b596c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
	float GetDiskFreeSpace() // [0x1b594c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
};

/// Class /Script/MobilePatchingUtils.MobilePendingContent
/// Size: 0x0088 (136 bytes) (0x000048 - 0x000088) align 8 MaxSize: 0x0088
class UMobilePendingContent : public UMobileInstalledContent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0048   (0x0040)  MISSED


	/// Functions
	// Function /Script/MobilePatchingUtils.MobilePendingContent.StartInstall
	// void StartInstall(FDelegateProperty OnSucceeded, FDelegateProperty OnFailed);                                            // [0x1b59b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	float GetTotalDownloadedSize() // [0x1b59800] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	float GetRequiredDiskSpace() // [0x1b596f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	float GetInstallProgress() // [0x1b595f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	FText GetDownloadStatusText() // [0x1b59550] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FText (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	float GetDownloadSpeed() // [0x1b59520] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/MobilePatchingUtils.MobilePendingContent.GetDownloadSize
	float GetDownloadSize() // [0x1b594f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
};

/// Class /Script/MobilePatchingUtils.MobilePatchingLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	// void RequestContent(FString RemoteManifestURL, FString CloudURL, FString InstallDirectory, FDelegateProperty OnSucceeded, FDelegateProperty OnFailed); // [0x1b59920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	bool HasActiveWiFiConnection() // [0x1aaddc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	// TArray<FString> GetSupportedPlatformNames();                                                                             // [0x1b59720] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	UMobileInstalledContent* GetInstalledContent(FString InstallDirectory) // [0x1b59620] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UMobileInstalledContent* (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(InstallDirectory);
	}
	// Function /Script/MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
	FString GetActiveDeviceProfileName() // [0x1b59440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(UMobileInstalledContent) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UMobilePendingContent) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(UMobilePatchingLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
