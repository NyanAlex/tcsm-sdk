
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UMeshDescription;
class UMeshDescriptionBase;

/// Enum /Script/MeshDescription.EComputeNTBsOptions
/// Size: 0x01 (1 bytes)
enum class EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None                                                        = 0,
	EComputeNTBsOptions__Normals                                                     = 1,
	EComputeNTBsOptions__Tangents                                                    = 2,
	EComputeNTBsOptions__WeightedNTBs                                                = 4
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FElementID
{ 
	int32_t                                            IDValue;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FPolygonGroupID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FPolygonID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FVertexID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FVertexInstanceID : FElementID
{ 
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FEdgeID : FElementID
{ 
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FTriangleID : FElementID
{ 
};

/// Class /Script/MeshDescription.MeshDescription
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshDescription : public UObject
{ 
public:
};

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x0390 (912 bytes) (0x000028 - 0x000390) align 8 MaxSize: 0x0390
class UMeshDescriptionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x368];                                     // 0x0028   (0x0368)  MISSED


	/// Functions
	// Function /Script/MeshDescription.MeshDescriptionBase.SetVertexPosition
	void SetVertexPosition(FVertexID VertexID, FVector& position) // [0x3807f40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FVertexID, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(VertexID, position);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	void SetPolygonVertexInstance(FPolygonID PolygonID, int32_t PerimeterIndex, FVertexInstanceID VertexInstanceID) // [0x3807e20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPolygonID, int32_t, FVertexInstanceID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(PolygonID, PerimeterIndex, VertexInstanceID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID) // [0x3807d50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPolygonID, FPolygonGroupID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(PolygonID, PolygonGroupID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	void ReversePolygonFacing(FPolygonID PolygonID) // [0x3807cd0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPolygonID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(PolygonID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertices
	void ReserveNewVertices(int32_t NumberOfNewVertices) // [0x3807c40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(NumberOfNewVertices);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances) // [0x3807a00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(NumberOfNewVertexInstances);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	void ReserveNewTriangles(int32_t NumberOfNewTriangles) // [0x3807bb0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(NumberOfNewTriangles);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	void ReserveNewPolygons(int32_t NumberOfNewPolygons) // [0x3807b20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(NumberOfNewPolygons);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups) // [0x3807a90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(NumberOfNewPolygonGroups);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewEdges
	void ReserveNewEdges(int32_t NumberOfNewEdges) // [0x3807a00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(NumberOfNewEdges);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexValid
	bool IsVertexValid(FVertexID VertexID) // [0x3807970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	bool IsVertexOrphaned(FVertexID VertexID) // [0x38078e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID) // [0x3807850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FVertexInstanceID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(VertexInstanceID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTriangleValid
	bool IsTriangleValid(FTriangleID TriangleID) // [0x38077c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FTriangleID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(TriangleID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	bool IsTrianglePartOfNgon(FTriangleID TriangleID) // [0x3807730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FTriangleID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(TriangleID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonValid
	bool IsPolygonValid(FPolygonID PolygonID) // [0x38076a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FPolygonID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(PolygonID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID) // [0x3807610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FPolygonGroupID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(PolygonGroupID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEmpty
	bool IsEmpty() // [0x38075e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func();
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeValid
	bool IsEdgeValid(FEdgeID EdgeID) // [0x3807550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FEdgeID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(EdgeID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID) // [0x3807470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FEdgeID, FPolygonID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(EdgeID, PolygonID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternal
	bool IsEdgeInternal(FEdgeID EdgeID) // [0x38073e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FEdgeID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(EdgeID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	// void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                      // [0x38072f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPosition
	FVector GetVertexPosition(FVertexID VertexID) // [0x3807250] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVector (*FuncPtr)(FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1) // [0x3807170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FEdgeID (*FuncPtr)(FVertexID, FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(VertexID0, VertexID1);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID) // [0x38070d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVertexID (*FuncPtr)(FVertexInstanceID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(VertexInstanceID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1) // [0x3806ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FEdgeID (*FuncPtr)(FVertexInstanceID, FVertexInstanceID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(VertexInstanceID0, VertexInstanceID1);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID) // [0x3806f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVertexInstanceID (*FuncPtr)(FTriangleID, FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(TriangleID, VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID) // [0x3806e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVertexInstanceID (*FuncPtr)(FPolygonID, FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(PolygonID, VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	// void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs); // [0x3806d40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	// void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0x3806c50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	// void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs);                      // [0x3806b60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	// void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                         // [0x3806a70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	// void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs);                                           // [0x3806980] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	// void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                             // [0x3806890] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertices
	// void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs);                                       // [0x38067a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	// void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                // [0x38066b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index) // [0x38065d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVertexInstanceID (*FuncPtr)(FTriangleID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func(TriangleID, Index);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID) // [0x3806530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FPolygonGroupID (*FuncPtr)(FTriangleID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		return func(TriangleID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	FPolygonID GetTrianglePolygon(FTriangleID TriangleID) // [0x3806490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FPolygonID (*FuncPtr)(FTriangleID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func(TriangleID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleEdges
	// void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs);                                              // [0x38063a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	// void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs);                          // [0x38062b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertices
	// void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs);                                          // [0x38061c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	// void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                   // [0x38060d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	// void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs);                                     // [0x3805fe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID) // [0x3805f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FPolygonGroupID (*FuncPtr)(FPolygonID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[44]);
		return func(PolygonID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	// void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                        // [0x3805e50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	// void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                         // [0x3805d60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	// void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs);                         // [0x3805c70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	// void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs);                                // [0x3805b80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	int32_t GetNumVertexVertexInstances(FVertexID VertexID) // [0x3805af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		return func(VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	int32_t GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID) // [0x3805a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FVertexInstanceID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		return func(VertexInstanceID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	int32_t GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID) // [0x38059d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FVertexInstanceID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		return func(VertexInstanceID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	int32_t GetNumVertexConnectedTriangles(FVertexID VertexID) // [0x3805940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		return func(VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	int32_t GetNumVertexConnectedPolygons(FVertexID VertexID) // [0x38058b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[53]);
		return func(VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	int32_t GetNumVertexConnectedEdges(FVertexID VertexID) // [0x3805820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		return func(VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	int32_t GetNumPolygonVertices(FPolygonID PolygonID) // [0x3805790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FPolygonID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[55]);
		return func(PolygonID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	int32_t GetNumPolygonTriangles(FPolygonID PolygonID) // [0x3805700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FPolygonID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		return func(PolygonID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	int32_t GetNumPolygonInternalEdges(FPolygonID PolygonID) // [0x3805670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FPolygonID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		return func(PolygonID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	int32_t GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID) // [0x38055e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FPolygonGroupID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		return func(PolygonGroupID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	int32_t GetNumEdgeConnectedTriangles(FEdgeID EdgeID) // [0x3805550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FEdgeID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		return func(EdgeID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	int32_t GetNumEdgeConnectedPolygons(FEdgeID EdgeID) // [0x38054c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)(FEdgeID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[60]);
		return func(EdgeID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertices
	// void GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs);                                                   // [0x38053d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertex
	FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber) // [0x38052f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FVertexID (*FuncPtr)(FEdgeID, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[62]);
		return func(EdgeID, VertexNumber);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	// void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs);                            // [0x3805200] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	// void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                               // [0x3805110] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.Empty
	void Empty() // [0x38050f0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[65]);
		func();
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	// void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices);                      // [0x3805000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertex
	void DeleteVertex(FVertexID VertexID) // [0x3804f80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[67]);
		func(VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteTriangle
	// void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr); // [0x3804dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	void DeletePolygonGroup(FPolygonGroupID PolygonGroupID) // [0x3804d40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPolygonGroupID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[69]);
		func(PolygonGroupID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygon
	// void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups); // [0x3804b80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteEdge
	// void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices);                                                    // [0x3804a90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexWithID
	void CreateVertexWithID(FVertexID VertexID) // [0x3804a10] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[72]);
		func(VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID) // [0x3804940] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FVertexInstanceID, FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[73]);
		func(VertexInstanceID, VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstance
	FVertexInstanceID CreateVertexInstance(FVertexID VertexID) // [0x38048a0] Final|Native|Public|BlueprintCallable 
	{
		typedef FVertexInstanceID (*FuncPtr)(FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[74]);
		return func(VertexID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertex
	FVertexID CreateVertex() // [0x3804860] Final|Native|Public|BlueprintCallable 
	{
		typedef FVertexID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[75]);
		return func();
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	// void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x38046b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangle
	// FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x3804540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	// void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x3804390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID) // [0x3804310] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPolygonGroupID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[79]);
		func(PolygonGroupID);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	FPolygonGroupID CreatePolygonGroup() // [0x38042d0] Final|Native|Public|BlueprintCallable 
	{
		typedef FPolygonGroupID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[80]);
		return func();
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygon
	// FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x3804160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1) // [0x3804040] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FEdgeID, FVertexID, FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[82]);
		func(EdgeID, VertexID0, VertexID1);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdge
	FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1) // [0x3803f60] Final|Native|Public|BlueprintCallable 
	{
		typedef FEdgeID (*FuncPtr)(FVertexID, FVertexID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[83]);
		return func(VertexID0, VertexID1);
	}
	// Function /Script/MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	void ComputePolygonTriangulation(FPolygonID PolygonID) // [0x3803ee0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FPolygonID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[84]);
		func(PolygonID);
	}
};

#pragma pack(pop)


static_assert(sizeof(UMeshDescription) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshDescriptionBase) == 0x0390); // 912 bytes (0x000028 - 0x000390)
static_assert(sizeof(FElementID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPolygonGroupID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FPolygonID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FVertexID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FVertexInstanceID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FEdgeID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FTriangleID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
