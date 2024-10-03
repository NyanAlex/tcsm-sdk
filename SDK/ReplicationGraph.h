
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

class AReplicationGraphDebugActor;
class UBasicReplicationGraph;
class UNetReplicationGraphConnection;
class UReplicationGraph;
class UReplicationGraphNode;
class UReplicationGraphNode_ActorList;
class UReplicationGraphNode_ActorListFrequencyBuckets;
class UReplicationGraphNode_AlwaysRelevant;
class UReplicationGraphNode_AlwaysRelevant_ForConnection;
class UReplicationGraphNode_ConnectionDormancyNode;
class UReplicationGraphNode_DormancyNode;
class UReplicationGraphNode_DynamicSpatialFrequency;
class UReplicationGraphNode_GridCell;
class UReplicationGraphNode_GridSpatialization2D;
class UReplicationGraphNode_TearOff_ForConnection;

/// Struct /Script/ReplicationGraph.ConnectionAlwaysRelevantNodePair
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FConnectionAlwaysRelevantNodePair
{ 
	class UNetConnection*                              NetConnection;                                              // 0x0000   (0x0008)  
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/ReplicationGraph.AlwaysRelevantActorInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAlwaysRelevantActorInfo
{ 
	class UNetConnection*                              Connection;                                                 // 0x0000   (0x0008)  
	class AActor*                                      LastViewer;                                                 // 0x0008   (0x0008)  
	class AActor*                                      LastViewTarget;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/ReplicationGraph.TearOffActorInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTearOffActorInfo
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      Actor;                                                      // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/ReplicationGraph.LastLocationGatherInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLastLocationGatherInfo
{ 
	class UNetConnection*                              Connection;                                                 // 0x0000   (0x0008)  
	FVector                                            LastLocation;                                               // 0x0008   (0x000C)  
	FVector                                            LastOutOfRangeLocationCheck;                                // 0x0014   (0x000C)  
};

/// Struct /Script/ReplicationGraph.ClassReplicationInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FClassReplicationInfo
{ 
	float                                              DistancePriorityScale;                                      // 0x0000   (0x0004)  
	float                                              StarvationPriorityScale;                                    // 0x0004   (0x0004)  
	float                                              AccumulatedNetPriorityBias;                                 // 0x0008   (0x0004)  
	uint16_t                                           ReplicationPeriodFrame;                                     // 0x000C   (0x0002)  
	uint16_t                                           FastPath_ReplicationPeriodFrame;                            // 0x000E   (0x0002)  
	uint16_t                                           ActorChannelFrameTimeout;                                   // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_6[0x56];                                      // 0x0012   (0x0056)  MISSED
	float                                              CullDistance;                                               // 0x0068   (0x0004)  
	float                                              CullDistanceSquared;                                        // 0x006C   (0x0004)  
};

/// Class /Script/ReplicationGraph.ReplicationGraph
/// Size: 0x04B0 (1200 bytes) (0x000028 - 0x0004B0) align 16 MaxSize: 0x04A8
class UReplicationGraph : public UReplicationDriver
{ 
public:
	class UClass*                                      ReplicationConnectionManagerClass;                          // 0x0028   (0x0008)  
	class UNetDriver*                                  NetDriver;                                                  // 0x0030   (0x0008)  
	TArray<class UNetReplicationGraphConnection*>      Connections;                                                // 0x0038   (0x0010)  
	TArray<class UNetReplicationGraphConnection*>      PendingConnections;                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0058   (0x0040)  MISSED
	TArray<class UReplicationGraphNode*>               GlobalGraphNodes;                                           // 0x0098   (0x0010)  
	TArray<class UReplicationGraphNode*>               PrepareForReplicationNodes;                                 // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x3F0];                                     // 0x00B8   (0x03F0)  MISSED
};

/// Class /Script/ReplicationGraph.BasicReplicationGraph
/// Size: 0x04E0 (1248 bytes) (0x0004A8 - 0x0004E0) align 16 MaxSize: 0x04E0
class UBasicReplicationGraph : public UReplicationGraph
{ 
public:
	class UReplicationGraphNode_GridSpatialization2D*  GridNode;                                                   // 0x04A8   (0x0008)  
	class UReplicationGraphNode_ActorList*             AlwaysRelevantNode;                                         // 0x04B0   (0x0008)  
	TArray<FConnectionAlwaysRelevantNodePair>          AlwaysRelevantForConnectionList;                            // 0x04B8   (0x0010)  
	TArray<class AActor*>                              ActorsWithoutNetConnection;                                 // 0x04C8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x04D8   (0x0008)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UReplicationGraphNode : public UObject
{ 
public:
	TArray<class UReplicationGraphNode*>               AllChildNodes;                                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorList
/// Size: 0x00D0 (208 bytes) (0x000050 - 0x0000D0) align 8 MaxSize: 0x00D0
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0050   (0x0080)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
/// Size: 0x0108 (264 bytes) (0x000050 - 0x000108) align 8 MaxSize: 0x0108
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0050   (0x00B8)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
/// Size: 0x0100 (256 bytes) (0x0000D0 - 0x000100) align 8 MaxSize: 0x0100
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00D0   (0x0030)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
/// Size: 0x0150 (336 bytes) (0x0000D0 - 0x000150) align 8 MaxSize: 0x0150
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x00D0   (0x0080)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DormancyNode
/// Size: 0x00E0 (224 bytes) (0x0000D0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridCell
/// Size: 0x0120 (288 bytes) (0x0000D0 - 0x000120) align 16 MaxSize: 0x0120
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x00D0   (0x0040)  MISSED
	class UReplicationGraphNode*                       DynamicNode;                                                // 0x0110   (0x0008)  
	class UReplicationGraphNode_DormancyNode*          DormancyNode;                                               // 0x0118   (0x0008)  
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
/// Size: 0x0230 (560 bytes) (0x000050 - 0x000230) align 16 MaxSize: 0x0230
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x1E0];                                     // 0x0050   (0x01E0)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
/// Size: 0x0068 (104 bytes) (0x000050 - 0x000068) align 8 MaxSize: 0x0068
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{ 
public:
	class UReplicationGraphNode*                       ChildNode;                                                  // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x00D0   (0x0010)  MISSED
	TArray<FAlwaysRelevantActorInfo>                   PastRelevantActors;                                         // 0x00E0   (0x0010)  
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
/// Size: 0x0070 (112 bytes) (0x000050 - 0x000070) align 8 MaxSize: 0x0070
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{ 
public:
	TArray<FTearOffActorInfo>                          TearOffActors;                                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/ReplicationGraph.NetReplicationGraphConnection
/// Size: 0x0238 (568 bytes) (0x000028 - 0x000238) align 8 MaxSize: 0x0238
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{ 
public:
	class UNetConnection*                              NetConnection;                                              // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x140];                                     // 0x0030   (0x0140)  MISSED
	class AReplicationGraphDebugActor*                 DebugActor;                                                 // 0x0170   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0178   (0x0010)  MISSED
	TArray<FLastLocationGatherInfo>                    LastGatherLocations;                                        // 0x0188   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0198   (0x0008)  MISSED
	TArray<class UReplicationGraphNode*>               ConnectionGraphNodes;                                       // 0x01A0   (0x0010)  
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                                // 0x01B0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x80];                                      // 0x01B8   (0x0080)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphDebugActor
/// Size: 0x0238 (568 bytes) (0x000228 - 0x000238) align 8 MaxSize: 0x0238
class AReplicationGraphDebugActor : public AActor
{ 
public:
	class UReplicationGraph*                           ReplicationGraph;                                           // 0x0228   (0x0008)  
	class UNetReplicationGraphConnection*              ConnectionManager;                                          // 0x0230   (0x0008)  


	/// Functions
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	void ServerStopDebugging() // [0x43e8e70] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	void ServerStartDebugging() // [0x43e8e50] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
	void ServerSetPeriodFrameForClass(UClass* Class, int32_t PeriodFrame) // [0x43e8d80] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(UClass*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Class, PeriodFrame);
	}
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	void ServerSetCullDistanceForClass(UClass* Class, float CullDistance) // [0x43e8ca0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(UClass*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Class, CullDistance);
	}
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
	void ServerSetConditionalActorBreakpoint(AActor* Actor) // [0x1e06420] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(AActor*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Actor);
	}
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
	void ServerPrintCullDistances() // [0x1e1d010] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func();
	}
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	void ServerPrintAllActorInfo(FString Str) // [0x43e8c00] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Str);
	}
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	void ServerCellInfo() // [0x1e4e8f0] Net|NetReliableNative|Event|Public|NetServer 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func();
	}
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	// void ClientCellInfo(FVector CellLocation, FVector CellExtent, TArray<AActor*> Actors);                                   // [0x43e8ab0] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
};

#pragma pack(pop)


static_assert(sizeof(UReplicationGraph) == 0x04A8); // 1192 bytes (0x000028 - 0x0004A8)
static_assert(sizeof(FConnectionAlwaysRelevantNodePair) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBasicReplicationGraph) == 0x04E0); // 1248 bytes (0x0004A8 - 0x0004E0)
static_assert(sizeof(UReplicationGraphNode) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UReplicationGraphNode_ActorList) == 0x00D0); // 208 bytes (0x000050 - 0x0000D0)
static_assert(sizeof(UReplicationGraphNode_ActorListFrequencyBuckets) == 0x0108); // 264 bytes (0x000050 - 0x000108)
static_assert(sizeof(UReplicationGraphNode_DynamicSpatialFrequency) == 0x0100); // 256 bytes (0x0000D0 - 0x000100)
static_assert(sizeof(UReplicationGraphNode_ConnectionDormancyNode) == 0x0150); // 336 bytes (0x0000D0 - 0x000150)
static_assert(sizeof(UReplicationGraphNode_DormancyNode) == 0x00E0); // 224 bytes (0x0000D0 - 0x0000E0)
static_assert(sizeof(UReplicationGraphNode_GridCell) == 0x0120); // 288 bytes (0x0000D0 - 0x000120)
static_assert(sizeof(UReplicationGraphNode_GridSpatialization2D) == 0x0230); // 560 bytes (0x000050 - 0x000230)
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(FAlwaysRelevantActorInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FTearOffActorInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UReplicationGraphNode_TearOff_ForConnection) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(FLastLocationGatherInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNetReplicationGraphConnection) == 0x0238); // 568 bytes (0x000028 - 0x000238)
static_assert(sizeof(AReplicationGraphDebugActor) == 0x0238); // 568 bytes (0x000228 - 0x000238)
static_assert(sizeof(FClassReplicationInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(offsetof(UReplicationGraph, ReplicationConnectionManagerClass) == 0x0028);
static_assert(offsetof(UReplicationGraph, NetDriver) == 0x0030);
static_assert(offsetof(UReplicationGraph, Connections) == 0x0038);
static_assert(offsetof(UReplicationGraph, PendingConnections) == 0x0048);
static_assert(offsetof(UReplicationGraph, GlobalGraphNodes) == 0x0098);
static_assert(offsetof(UReplicationGraph, PrepareForReplicationNodes) == 0x00A8);
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, NetConnection) == 0x0000);
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, Node) == 0x0008);
static_assert(offsetof(UBasicReplicationGraph, GridNode) == 0x04A8);
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantNode) == 0x04B0);
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantForConnectionList) == 0x04B8);
static_assert(offsetof(UBasicReplicationGraph, ActorsWithoutNetConnection) == 0x04C8);
static_assert(offsetof(UReplicationGraphNode, AllChildNodes) == 0x0028);
static_assert(offsetof(UReplicationGraphNode_GridCell, DynamicNode) == 0x0110);
static_assert(offsetof(UReplicationGraphNode_GridCell, DormancyNode) == 0x0118);
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant, ChildNode) == 0x0050);
static_assert(offsetof(FAlwaysRelevantActorInfo, Connection) == 0x0000);
static_assert(offsetof(FAlwaysRelevantActorInfo, LastViewer) == 0x0008);
static_assert(offsetof(FAlwaysRelevantActorInfo, LastViewTarget) == 0x0010);
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant_ForConnection, PastRelevantActors) == 0x00E0);
static_assert(offsetof(FTearOffActorInfo, Actor) == 0x0008);
static_assert(offsetof(UReplicationGraphNode_TearOff_ForConnection, TearOffActors) == 0x0050);
static_assert(offsetof(FLastLocationGatherInfo, Connection) == 0x0000);
static_assert(offsetof(FLastLocationGatherInfo, LastLocation) == 0x0008);
static_assert(offsetof(FLastLocationGatherInfo, LastOutOfRangeLocationCheck) == 0x0014);
static_assert(offsetof(UNetReplicationGraphConnection, NetConnection) == 0x0028);
static_assert(offsetof(UNetReplicationGraphConnection, DebugActor) == 0x0170);
static_assert(offsetof(UNetReplicationGraphConnection, LastGatherLocations) == 0x0188);
static_assert(offsetof(UNetReplicationGraphConnection, ConnectionGraphNodes) == 0x01A0);
static_assert(offsetof(UNetReplicationGraphConnection, TearOffNode) == 0x01B0);
static_assert(offsetof(AReplicationGraphDebugActor, ReplicationGraph) == 0x0228);
static_assert(offsetof(AReplicationGraphDebugActor, ConnectionManager) == 0x0230);
