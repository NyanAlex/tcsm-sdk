
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "OnlineSubsystemUtils.h"

#pragma pack(push, 0x1)

class AQosBeaconClient;
class AQosBeaconHost;
class UQosEvaluator;
class UQosRegionManager;

/// Enum /Script/Qos.EQosResponseType
/// Size: 0x01 (1 bytes)
enum class EQosResponseType : uint8_t
{
	EQosResponseType__NoResponse                                                     = 0,
	EQosResponseType__Success                                                        = 1,
	EQosResponseType__Failure                                                        = 2
};

/// Enum /Script/Qos.EQosCompletionResult
/// Size: 0x01 (1 bytes)
enum class EQosCompletionResult : uint8_t
{
	EQosCompletionResult__Invalid                                                    = 0,
	EQosCompletionResult__Success                                                    = 1,
	EQosCompletionResult__Failure                                                    = 2,
	EQosCompletionResult__Canceled                                                   = 3
};

/// Enum /Script/Qos.EQosDatacenterResult
/// Size: 0x01 (1 bytes)
enum class EQosDatacenterResult : uint8_t
{
	EQosDatacenterResult__Invalid                                                    = 0,
	EQosDatacenterResult__Success                                                    = 1,
	EQosDatacenterResult__Incomplete                                                 = 2
};

/// Struct /Script/Qos.QosPingServerInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FQosPingServerInfo
{ 
	FString                                            Address;                                                    // 0x0000   (0x0010)  
	int32_t                                            Port;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Qos.QosDatacenterInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FQosDatacenterInfo
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FString                                            RegionId;                                                   // 0x0010   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FQosPingServerInfo>                         Servers;                                                    // 0x0028   (0x0010)  
};

/// Struct /Script/Qos.DatacenterQosInstance
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FDatacenterQosInstance
{ 
	FQosDatacenterInfo                                 Definition;                                                 // 0x0000   (0x0038)  
	EQosDatacenterResult                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            AvgPingMs;                                                  // 0x003C   (0x0004)  
	TArray<int32_t>                                    PingResults;                                                // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0050   (0x0008)  MISSED
	FDateTime                                          LastCheckTimestamp;                                         // 0x0058   (0x0008)  
	bool                                               bUsable;                                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/Qos.QosRegionInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FQosRegionInfo
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	FString                                            RegionId;                                                   // 0x0018   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0028   (0x0001)  
	bool                                               bVisible;                                                   // 0x0029   (0x0001)  
	bool                                               bAutoAssignable;                                            // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Struct /Script/Qos.RegionQosInstance
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRegionQosInstance
{ 
	FQosRegionInfo                                     Definition;                                                 // 0x0000   (0x0030)  
	TArray<FDatacenterQosInstance>                     DatacenterOptions;                                          // 0x0030   (0x0010)  
};

/// Class /Script/Qos.QosBeaconClient
/// Size: 0x02F0 (752 bytes) (0x0002B8 - 0x0002F0) align 8 MaxSize: 0x02F0
class AQosBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x02B8   (0x0038)  MISSED


	/// Functions
	// Function /Script/Qos.QosBeaconClient.ServerQosRequest
	void ServerQosRequest(FString InSessionId) // [0xd94840] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InSessionId);
	}
	// Function /Script/Qos.QosBeaconClient.ClientQosResponse
	void ClientQosResponse(EQosResponseType response) // [0xd947c0] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(EQosResponseType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(response);
	}
};

/// Class /Script/Qos.QosBeaconHost
/// Size: 0x0260 (608 bytes) (0x000250 - 0x000260) align 8 MaxSize: 0x0260
class AQosBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0250   (0x0010)  MISSED
};

/// Class /Script/Qos.QosEvaluator
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UQosEvaluator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0028   (0x0020)  MISSED
	bool                                               bInProgress;                                                // 0x0048   (0x0001)  
	bool                                               bCancelOperation;                                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x004A   (0x0006)  MISSED
	TArray<FDatacenterQosInstance>                     Datacenters;                                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0060   (0x0020)  MISSED
};

/// Class /Script/Qos.QosRegionManager
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class UQosRegionManager : public UObject
{ 
public:
	int32_t                                            NumTestsPerRegion;                                          // 0x0028   (0x0004)  
	float                                              PingTimeout;                                                // 0x002C   (0x0004)  
	TArray<FQosRegionInfo>                             RegionDefinitions;                                          // 0x0030   (0x0010)  
	TArray<FQosDatacenterInfo>                         DatacenterDefinitions;                                      // 0x0040   (0x0010)  
	FDateTime                                          LastCheckTimestamp;                                         // 0x0050   (0x0008)  
	class UQosEvaluator*                               Evaluator;                                                  // 0x0058   (0x0008)  
	EQosCompletionResult                               QosEvalResult;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	TArray<FRegionQosInstance>                         RegionOptions;                                              // 0x0068   (0x0010)  
	FString                                            ForceRegionId;                                              // 0x0078   (0x0010)  
	bool                                               bRegionForcedViaCommandline;                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0089   (0x0007)  MISSED
	FString                                            SelectedRegionId;                                           // 0x0090   (0x0010)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x00A0   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(AQosBeaconClient) == 0x02F0); // 752 bytes (0x0002B8 - 0x0002F0)
static_assert(sizeof(AQosBeaconHost) == 0x0260); // 608 bytes (0x000250 - 0x000260)
static_assert(sizeof(FQosPingServerInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FQosDatacenterInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FDatacenterQosInstance) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UQosEvaluator) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FQosRegionInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRegionQosInstance) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UQosRegionManager) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(offsetof(FQosPingServerInfo, Address) == 0x0000);
static_assert(offsetof(FQosDatacenterInfo, ID) == 0x0000);
static_assert(offsetof(FQosDatacenterInfo, RegionId) == 0x0010);
static_assert(offsetof(FQosDatacenterInfo, Servers) == 0x0028);
static_assert(offsetof(FDatacenterQosInstance, Definition) == 0x0000);
static_assert(offsetof(FDatacenterQosInstance, Result) == 0x0038);
static_assert(offsetof(FDatacenterQosInstance, PingResults) == 0x0040);
static_assert(offsetof(FDatacenterQosInstance, LastCheckTimestamp) == 0x0058);
static_assert(offsetof(UQosEvaluator, Datacenters) == 0x0050);
static_assert(offsetof(FQosRegionInfo, DisplayName) == 0x0000);
static_assert(offsetof(FQosRegionInfo, RegionId) == 0x0018);
static_assert(offsetof(FRegionQosInstance, Definition) == 0x0000);
static_assert(offsetof(FRegionQosInstance, DatacenterOptions) == 0x0030);
static_assert(offsetof(UQosRegionManager, RegionDefinitions) == 0x0030);
static_assert(offsetof(UQosRegionManager, DatacenterDefinitions) == 0x0040);
static_assert(offsetof(UQosRegionManager, LastCheckTimestamp) == 0x0050);
static_assert(offsetof(UQosRegionManager, Evaluator) == 0x0058);
static_assert(offsetof(UQosRegionManager, QosEvalResult) == 0x0060);
static_assert(offsetof(UQosRegionManager, RegionOptions) == 0x0068);
static_assert(offsetof(UQosRegionManager, ForceRegionId) == 0x0078);
static_assert(offsetof(UQosRegionManager, SelectedRegionId) == 0x0090);
