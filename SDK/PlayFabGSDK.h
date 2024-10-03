
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

class UGSDKUtils;

/// Struct /Script/PlayFabGSDK.ConnectedPlayer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FConnectedPlayer
{ 
	FString                                            PlayerId;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/PlayFabGSDK.GamePort
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGamePort
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            ServerListeningPort;                                        // 0x0010   (0x0004)  
	int32_t                                            ClientConnectionPort;                                       // 0x0014   (0x0004)  
};

/// Struct /Script/PlayFabGSDK.GameServerConnectionInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameServerConnectionInfo
{ 
	FString                                            PublicIpV4Address;                                          // 0x0000   (0x0010)  
	TArray<FGamePort>                                  GamePortsConfiguration;                                     // 0x0010   (0x0010)  
};

/// Class /Script/PlayFabGSDK.GSDKUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGSDKUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PlayFabGSDK.GSDKUtils.UpdateConnectedPlayers
	// void UpdateConnectedPlayers(TArray<FConnectedPlayer>& CurrentlyConnectedPlayers);                                        // [0x1982a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.SetDefaultServerHostPort
	bool SetDefaultServerHostPort() // [0x19829e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.RegisterGSDKShutdownDelegate
	// void RegisterGSDKShutdownDelegate(FDelegateProperty& OnGSDKShutdownDelegate);                                            // [0x1982940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.RegisterGSDKServerActiveDelegate
	// void RegisterGSDKServerActiveDelegate(FDelegateProperty& OnGSDKServerActiveDelegate);                                    // [0x19828a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.RegisterGSDKReadyForPlayers
	// void RegisterGSDKReadyForPlayers(FDelegateProperty& OnGSDKReadyForPlayersDelegate);                                      // [0x1982800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.RegisterGSDKMaintenanceDelegate
	// void RegisterGSDKMaintenanceDelegate(FDelegateProperty& OnGSDKMaintenanceDelegate);                                      // [0x1982760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.RegisterGSDKHealthCheckDelegate
	// void RegisterGSDKHealthCheckDelegate(FDelegateProperty& OnGSDKHealthCheckDelegate);                                      // [0x19826c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.ReadyForPlayers
	void ReadyForPlayers() // [0x19826a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetVMId
	FString GetVMId() // [0x1982650] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetTitleId
	FString GetTitleId() // [0x1982600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetSharedContentDirectory
	FString GetSharedContentDirectory() // [0x19823b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetServerId
	FString GetServerId() // [0x19825b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetRegionName
	FString GetRegionName() // [0x1982560] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetMetaDataValue
	FString GetMetaDataValue(FString MetaDataName) // [0x19824a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(MetaDataName);
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetMatchSessionCookie
	FString GetMatchSessionCookie() // [0x1982450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetMatchId
	FString GetMatchId() // [0x1982400] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetLogsDirectory
	FString GetLogsDirectory() // [0x19823b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetInitialPlayers
	// TArray<FString> GetInitialPlayers();                                                                                     // [0x1982260] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetGameServerConnectionInfo
	FGameServerConnectionInfo GetGameServerConnectionInfo() // [0x19821d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FGameServerConnectionInfo (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func();
	}
	// Function /Script/PlayFabGSDK.GSDKUtils.GetBuildId
	FString GetBuildId() // [0x1982180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(UGSDKUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FConnectedPlayer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGamePort) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameServerConnectionInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FConnectedPlayer, PlayerId) == 0x0000);
static_assert(offsetof(FGamePort, Name) == 0x0000);
static_assert(offsetof(FGameServerConnectionInfo, PublicIpV4Address) == 0x0000);
static_assert(offsetof(FGameServerConnectionInfo, GamePortsConfiguration) == 0x0010);
