
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

class UMultiplayGameServerSubsystem;
class UMultiplayServerConfigSubsystem;
class UMultiplayServerQueryHandlerSubsystem;

/// Struct /Script/MultiplayGameServerSDK.MultiplayServerConfig
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMultiplayServerConfig
{ 
	int64_t                                            ServerId;                                                   // 0x0000   (0x0008)  
	FString                                            AllocationId;                                               // 0x0008   (0x0010)  
	int32_t                                            QueryPort;                                                  // 0x0018   (0x0004)  
	int32_t                                            Port;                                                       // 0x001C   (0x0004)  
	FString                                            ServerLogDirectory;                                         // 0x0020   (0x0010)  
};

/// Struct /Script/MultiplayGameServerSDK.MultiplayAllocation
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMultiplayAllocation
{ 
	FString                                            EventId;                                                    // 0x0000   (0x0010)  
	int64_t                                            ServerId;                                                   // 0x0010   (0x0008)  
	FString                                            AllocationId;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/MultiplayGameServerSDK.MultiplayDeallocation
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMultiplayDeallocation
{ 
	FString                                            EventId;                                                    // 0x0000   (0x0010)  
	int64_t                                            ServerId;                                                   // 0x0010   (0x0008)  
	FString                                            AllocationId;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/MultiplayGameServerSDK.MultiplayErrorResponse
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMultiplayErrorResponse
{ 
	int32_t                                            Status;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Detail;                                                     // 0x0008   (0x0010)  
	FString                                            Title;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/MultiplayGameServerSDK.MultiplayPayloadAllocationErrorResponse
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMultiplayPayloadAllocationErrorResponse
{ 
	bool                                               Success;                                                    // 0x0000   (0x0001)  
	bool                                               Error;                                                      // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            ErrorCode;                                                  // 0x0004   (0x0004)  
	FString                                            ErrorMessage;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/MultiplayGameServerSDK.MultiplayPayloadTokenResponse
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMultiplayPayloadTokenResponse
{ 
	FString                                            Token;                                                      // 0x0000   (0x0010)  
	FString                                            Error;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/MultiplayGameServerSDK.MultiplayGameServerSubsystem
/// Size: 0x00F8 (248 bytes) (0x000030 - 0x0000F8) align 8 MaxSize: 0x00F8
class UMultiplayGameServerSubsystem : public UGameInstanceSubsystem
{ 
public:
	SDK_UNDEFINED(16,801) /* FMulticastInlineDelegate */ __um(OnAllocate);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,802) /* FMulticastInlineDelegate */ __um(OnDeallocate);                                       // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,803) /* FDelegateProperty */      __um(OnReadyServerSuccess);                                 // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,804) /* FDelegateProperty */      __um(OnReadyServerFailure);                                 // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,805) /* FDelegateProperty */      __um(OnUnreadyServerSuccess);                               // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,806) /* FDelegateProperty */      __um(OnUnreadyServerFailure);                               // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,807) /* FDelegateProperty */      __um(OnPayloadAllocationSuccess);                           // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,808) /* FDelegateProperty */      __um(OnPayloadAllocationFailure);                           // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,809) /* FDelegateProperty */      __um(OnPayloadTokenSuccess);                                // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,810) /* FDelegateProperty */      __um(OnPayloadTokenFailure);                                // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00D0   (0x0028)  MISSED


	/// Functions
	// Function /Script/MultiplayGameServerSDK.MultiplayGameServerSubsystem.UnsubscribeToServerEvents
	void UnsubscribeToServerEvents() // [0x15686c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayGameServerSubsystem.UnreadyServer
	// void UnreadyServer(FDelegateProperty onSuccess, FDelegateProperty onFailure);                                            // [0x15685c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MultiplayGameServerSDK.MultiplayGameServerSubsystem.SubscribeToServerEvents
	void SubscribeToServerEvents() // [0x15685a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayGameServerSubsystem.ReadyServerForPlayers
	// void ReadyServerForPlayers(FDelegateProperty onSuccess, FDelegateProperty onFailure);                                    // [0x1567f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MultiplayGameServerSDK.MultiplayGameServerSubsystem.GetPayloadToken
	// void GetPayloadToken(FDelegateProperty onSuccess, FDelegateProperty onFailure);                                          // [0x1567d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MultiplayGameServerSDK.MultiplayGameServerSubsystem.GetPayloadAllocation
	// void GetPayloadAllocation(FDelegateProperty onSuccess, FDelegateProperty onFailure);                                     // [0x1567c70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MultiplayGameServerSDK.MultiplayServerConfigSubsystem
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMultiplayServerConfigSubsystem : public UGameInstanceSubsystem
{ 
public:
	FMultiplayServerConfig                             ServerConfig;                                               // 0x0030   (0x0030)  
};

/// Class /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMultiplayServerQueryHandlerSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0030   (0x0060)  MISSED
	int32_t                                            CurrentPlayers;                                             // 0x0090   (0x0004)  
	int32_t                                            MaxPlayers;                                                 // 0x0094   (0x0004)  
	FString                                            ServerName;                                                 // 0x0098   (0x0010)  
	FString                                            GameType;                                                   // 0x00A8   (0x0010)  
	FString                                            BuildId;                                                    // 0x00B8   (0x0010)  
	FString                                            Map;                                                        // 0x00C8   (0x0010)  
	int32_t                                            Port;                                                       // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.SetServerName
	void SetServerName(FString Value) // [0x15684b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Value);
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.SetPort
	void SetPort(int32_t Value) // [0x1568420] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Value);
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.SetMaxPlayers
	void SetMaxPlayers(int32_t Value) // [0x1568390] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Value);
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.SetMap
	void SetMap(FString Value) // [0x15682a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Value);
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.SetGameType
	void SetGameType(FString Value) // [0x15681b0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Value);
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.SetCurrentPlayers
	void SetCurrentPlayers(int32_t Value) // [0x1568120] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Value);
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.SetBuildId
	void SetBuildId(FString Value) // [0x1568030] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Value);
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.IsConnected
	bool IsConnected() // [0x1567f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.IncrementCurrentPlayers
	void IncrementCurrentPlayers() // [0x1567ee0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.GetServerName
	FString GetServerName() // [0x1567ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.GetPort
	int32_t GetPort() // [0x1567e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.GetMaxPlayers
	int32_t GetMaxPlayers() // [0x1567c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.GetMap
	FString GetMap() // [0x1567c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.GetGameType
	FString GetGameType() // [0x1567bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.GetCurrentPlayers
	int32_t GetCurrentPlayers() // [0x1567b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.GetBuildId
	FString GetBuildId() // [0x1567b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.Disconnect
	void Disconnect() // [0x1567b30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.DecrementCurrentPlayers
	void DecrementCurrentPlayers() // [0x1567b10] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func();
	}
	// Function /Script/MultiplayGameServerSDK.MultiplayServerQueryHandlerSubsystem.Connect
	bool Connect() // [0x1567ae0] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func();
	}
};

#pragma pack(pop)


static_assert(sizeof(UMultiplayGameServerSubsystem) == 0x00F8); // 248 bytes (0x000030 - 0x0000F8)
static_assert(sizeof(FMultiplayServerConfig) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMultiplayServerConfigSubsystem) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMultiplayServerQueryHandlerSubsystem) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(FMultiplayAllocation) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMultiplayDeallocation) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMultiplayErrorResponse) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMultiplayPayloadAllocationErrorResponse) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMultiplayPayloadTokenResponse) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FMultiplayServerConfig, AllocationId) == 0x0008);
static_assert(offsetof(FMultiplayServerConfig, ServerLogDirectory) == 0x0020);
static_assert(offsetof(UMultiplayServerConfigSubsystem, ServerConfig) == 0x0030);
static_assert(offsetof(UMultiplayServerQueryHandlerSubsystem, ServerName) == 0x0098);
static_assert(offsetof(UMultiplayServerQueryHandlerSubsystem, GameType) == 0x00A8);
static_assert(offsetof(UMultiplayServerQueryHandlerSubsystem, BuildId) == 0x00B8);
static_assert(offsetof(UMultiplayServerQueryHandlerSubsystem, Map) == 0x00C8);
static_assert(offsetof(FMultiplayAllocation, EventId) == 0x0000);
static_assert(offsetof(FMultiplayAllocation, AllocationId) == 0x0018);
static_assert(offsetof(FMultiplayDeallocation, EventId) == 0x0000);
static_assert(offsetof(FMultiplayDeallocation, AllocationId) == 0x0018);
static_assert(offsetof(FMultiplayErrorResponse, Detail) == 0x0008);
static_assert(offsetof(FMultiplayErrorResponse, Title) == 0x0018);
static_assert(offsetof(FMultiplayPayloadAllocationErrorResponse, ErrorMessage) == 0x0008);
static_assert(offsetof(FMultiplayPayloadTokenResponse, Token) == 0x0000);
static_assert(offsetof(FMultiplayPayloadTokenResponse, Error) == 0x0010);
