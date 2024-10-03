
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "Foliage.h"
#include "PhysicsCore.h"

#pragma pack(push, 0x1)

class AHoudiniAssetActor;
class UHoudiniAsset;
class UHoudiniAssetBlueprintComponent;
class UHoudiniAssetComponent;
class UHoudiniAssetComponentMaterials_V1;
class UHoudiniAssetComponent_V1;
class UHoudiniAssetInput;
class UHoudiniAssetInstanceInput;
class UHoudiniAssetInstanceInputField;
class UHoudiniAssetParameter;
class UHoudiniAssetParameterButton;
class UHoudiniAssetParameterChoice;
class UHoudiniAssetParameterColor;
class UHoudiniAssetParameterFile;
class UHoudiniAssetParameterFloat;
class UHoudiniAssetParameterFolder;
class UHoudiniAssetParameterFolderList;
class UHoudiniAssetParameterInt;
class UHoudiniAssetParameterLabel;
class UHoudiniAssetParameterMultiparm;
class UHoudiniAssetParameterRamp;
class UHoudiniAssetParameterSeparator;
class UHoudiniAssetParameterString;
class UHoudiniAssetParameterToggle;
class UHoudiniAssetStateEvents;
class UHoudiniEngineCopyPropertiesInterface;
class UHoudiniHandleComponent;
class UHoudiniHandleComponent_V1;
class UHoudiniHandleParameter;
class UHoudiniInput;
class UHoudiniInputActor;
class UHoudiniInputBrush;
class UHoudiniInputCameraComponent;
class UHoudiniInputDataTable;
class UHoudiniInputFoliageType_InstancedStaticMesh;
class UHoudiniInputHoudiniAsset;
class UHoudiniInputHoudiniSplineComponent;
class UHoudiniInputInstancedMeshComponent;
class UHoudiniInputLandscape;
class UHoudiniInputMeshComponent;
class UHoudiniInputObject;
class UHoudiniInputSceneComponent;
class UHoudiniInputSkeletalMesh;
class UHoudiniInputSplineComponent;
class UHoudiniInputStaticMesh;
class UHoudiniInstancedActorComponent;
class UHoudiniInstancedActorComponent_V1;
class UHoudiniLandscapeEditLayer;
class UHoudiniLandscapePtr;
class UHoudiniMeshSplitInstancerComponent;
class UHoudiniMeshSplitInstancerComponent_V1;
class UHoudiniOutput;
class UHoudiniPDGAssetLink;
class UHoudiniParameter;
class UHoudiniParameterButton;
class UHoudiniParameterButtonStrip;
class UHoudiniParameterChoice;
class UHoudiniParameterColor;
class UHoudiniParameterFile;
class UHoudiniParameterFloat;
class UHoudiniParameterFolder;
class UHoudiniParameterFolderList;
class UHoudiniParameterInt;
class UHoudiniParameterLabel;
class UHoudiniParameterMultiParm;
class UHoudiniParameterOperatorPath;
class UHoudiniParameterRampColor;
class UHoudiniParameterRampColorPoint;
class UHoudiniParameterRampFloat;
class UHoudiniParameterRampFloatPoint;
class UHoudiniParameterRampModificationEvent;
class UHoudiniParameterSeparator;
class UHoudiniParameterString;
class UHoudiniParameterToggle;
class UHoudiniRuntimeSettings;
class UHoudiniSplineComponent;
class UHoudiniSplineComponent_V1;
class UHoudiniStaticMesh;
class UHoudiniStaticMeshComponent;
class UTOPNetwork;
class UTOPNode;

/// Enum /Script/HoudiniEngineRuntime.EHoudiniStaticMeshMethod
/// Size: 0x01 (1 bytes)
enum class EHoudiniStaticMeshMethod : uint8_t
{
	EHoudiniStaticMeshMethod__RawMesh                                                = 0,
	EHoudiniStaticMeshMethod__FMeshDescription                                       = 1,
	EHoudiniStaticMeshMethod__UHoudiniStaticMesh                                     = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniAssetStateResult
/// Size: 0x01 (1 bytes)
enum class EHoudiniAssetStateResult : uint8_t
{
	EHoudiniAssetStateResult__None                                                   = 0,
	EHoudiniAssetStateResult__Working                                                = 1,
	EHoudiniAssetStateResult__Success                                                = 2,
	EHoudiniAssetStateResult__FinishedWithError                                      = 3,
	EHoudiniAssetStateResult__FinishedWithFatalError                                 = 4,
	EHoudiniAssetStateResult__Aborted                                                = 5
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniAssetState
/// Size: 0x01 (1 bytes)
enum class EHoudiniAssetState : uint8_t
{
	EHoudiniAssetState__NeedInstantiation                                            = 0,
	EHoudiniAssetState__NewHDA                                                       = 1,
	EHoudiniAssetState__PreInstantiation                                             = 2,
	EHoudiniAssetState__Instantiating                                                = 3,
	EHoudiniAssetState__PreCook                                                      = 4,
	EHoudiniAssetState__Cooking                                                      = 5,
	EHoudiniAssetState__PostCook                                                     = 6,
	EHoudiniAssetState__PreProcess                                                   = 7,
	EHoudiniAssetState__Processing                                                   = 8,
	EHoudiniAssetState__None                                                         = 9,
	EHoudiniAssetState__NeedRebuild                                                  = 10,
	EHoudiniAssetState__NeedDelete                                                   = 11,
	EHoudiniAssetState__Deleting                                                     = 12,
	EHoudiniAssetState__ProcessTemplate                                              = 13
};

/// Enum /Script/HoudiniEngineRuntime.EAttribOwner
/// Size: 0x01 (1 bytes)
enum class EAttribOwner : uint8_t
{
	EAttribOwner__Invalid                                                            = -1,
	EAttribOwner__Vertex                                                             = 0,
	EAttribOwner__Point                                                              = 1,
	EAttribOwner__Prim                                                               = 2,
	EAttribOwner__Detail                                                             = 3
};

/// Enum /Script/HoudiniEngineRuntime.EAttribStorageType
/// Size: 0x01 (1 bytes)
enum class EAttribStorageType : uint8_t
{
	EAttribStorageType__Invalid                                                      = -1,
	EAttribStorageType__INT                                                          = 0,
	EAttribStorageType__INT64                                                        = 1,
	EAttribStorageType__FLOAT                                                        = 2,
	EAttribStorageType__FLOAT64                                                      = 3,
	EAttribStorageType__STRING                                                       = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveMethod
/// Size: 0x01 (1 bytes)
enum class EHoudiniCurveMethod : uint8_t
{
	EHoudiniCurveMethod__Invalid                                                     = -1,
	EHoudiniCurveMethod__CVs                                                         = 0,
	EHoudiniCurveMethod__Breakpoints                                                 = 1,
	EHoudiniCurveMethod__Freehand                                                    = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveType
/// Size: 0x01 (1 bytes)
enum class EHoudiniCurveType : uint8_t
{
	EHoudiniCurveType__Invalid                                                       = -1,
	EHoudiniCurveType__Polygon                                                       = 0,
	EHoudiniCurveType__Nurbs                                                         = 1,
	EHoudiniCurveType__Bezier                                                        = 2,
	EHoudiniCurveType__Points                                                        = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInstancerType
/// Size: 0x01 (1 bytes)
enum class EHoudiniInstancerType : uint8_t
{
	EHoudiniInstancerType__Invalid                                                   = 0,
	EHoudiniInstancerType__ObjectInstancer                                           = 1,
	EHoudiniInstancerType__PackedPrimitive                                           = 2,
	EHoudiniInstancerType__AttributeInstancer                                        = 3,
	EHoudiniInstancerType__OldSchoolAttributeInstancer                               = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniPartType
/// Size: 0x01 (1 bytes)
enum class EHoudiniPartType : uint8_t
{
	EHoudiniPartType__Invalid                                                        = 0,
	EHoudiniPartType__Mesh                                                           = 1,
	EHoudiniPartType__Instancer                                                      = 2,
	EHoudiniPartType__Curve                                                          = 3,
	EHoudiniPartType__Volume                                                         = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniGeoType
/// Size: 0x01 (1 bytes)
enum class EHoudiniGeoType : uint8_t
{
	EHoudiniGeoType__Invalid                                                         = 0,
	EHoudiniGeoType__Default                                                         = 1,
	EHoudiniGeoType__Intermediate                                                    = 2,
	EHoudiniGeoType__Input                                                           = 3,
	EHoudiniGeoType__Curve                                                           = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniHandleType
/// Size: 0x01 (1 bytes)
enum class EHoudiniHandleType : uint8_t
{
	EHoudiniHandleType__Xform                                                        = 0,
	EHoudiniHandleType__Bounder                                                      = 1,
	EHoudiniHandleType__Unsupported                                                  = 2
};

/// Enum /Script/HoudiniEngineRuntime.EXformParameter
/// Size: 0x01 (1 bytes)
enum class EXformParameter : uint8_t
{
	EXformParameter__TX                                                              = 0,
	EXformParameter__TY                                                              = 1,
	EXformParameter__TZ                                                              = 2,
	EXformParameter__RX                                                              = 3,
	EXformParameter__RY                                                              = 4,
	EXformParameter__RZ                                                              = 5,
	EXformParameter__SX                                                              = 6,
	EXformParameter__SY                                                              = 7,
	EXformParameter__SZ                                                              = 8,
	EXformParameter__COUNT                                                           = 9
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInputObjectType
/// Size: 0x01 (1 bytes)
enum class EHoudiniInputObjectType : uint8_t
{
	EHoudiniInputObjectType__Invalid                                                 = 0,
	EHoudiniInputObjectType__Object                                                  = 1,
	EHoudiniInputObjectType__StaticMesh                                              = 2,
	EHoudiniInputObjectType__SkeletalMesh                                            = 3,
	EHoudiniInputObjectType__SceneComponent                                          = 4,
	EHoudiniInputObjectType__StaticMeshComponent                                     = 5,
	EHoudiniInputObjectType__InstancedStaticMeshComponent                            = 6,
	EHoudiniInputObjectType__SplineComponent                                         = 7,
	EHoudiniInputObjectType__HoudiniSplineComponent                                  = 8,
	EHoudiniInputObjectType__HoudiniAssetComponent                                   = 9,
	EHoudiniInputObjectType__Actor                                                   = 10,
	EHoudiniInputObjectType__Landscape                                               = 11,
	EHoudiniInputObjectType__Brush                                                   = 12,
	EHoudiniInputObjectType__CameraComponent                                         = 13,
	EHoudiniInputObjectType__DataTable                                               = 14,
	EHoudiniInputObjectType__HoudiniAssetActor                                       = 15,
	EHoudiniInputObjectType__FoliageType_InstancedStaticMesh                         = 16
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniLandscapeExportType
/// Size: 0x01 (1 bytes)
enum class EHoudiniLandscapeExportType : uint8_t
{
	EHoudiniLandscapeExportType__Heightfield                                         = 0,
	EHoudiniLandscapeExportType__Mesh                                                = 1,
	EHoudiniLandscapeExportType__Points                                              = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniXformType
/// Size: 0x01 (1 bytes)
enum class EHoudiniXformType : uint8_t
{
	EHoudiniXformType__None                                                          = 0,
	EHoudiniXformType__IntoThisObject                                                = 1,
	EHoudiniXformType__Auto                                                          = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInputType
/// Size: 0x01 (1 bytes)
enum class EHoudiniInputType : uint8_t
{
	EHoudiniInputType__Invalid                                                       = 0,
	EHoudiniInputType__Geometry                                                      = 1,
	EHoudiniInputType__Curve                                                         = 2,
	EHoudiniInputType__Asset                                                         = 3,
	EHoudiniInputType__Landscape                                                     = 4,
	EHoudiniInputType__World                                                         = 5,
	EHoudiniInputType__Skeletal                                                      = 6
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
/// Size: 0x01 (1 bytes)
enum class EHoudiniLandscapeOutputBakeType : uint8_t
{
	EHoudiniLandscapeOutputBakeType__Detachment                                      = 0,
	EHoudiniLandscapeOutputBakeType__BakeToImage                                     = 1,
	EHoudiniLandscapeOutputBakeType__BakeToWorld                                     = 2,
	EHoudiniLandscapeOutputBakeType__InValid                                         = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveOutputType
/// Size: 0x01 (1 bytes)
enum class EHoudiniCurveOutputType : uint8_t
{
	EHoudiniCurveOutputType__UnrealSpline                                            = 0,
	EHoudiniCurveOutputType__HoudiniSpline                                           = 1
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniOutputType
/// Size: 0x01 (1 bytes)
enum class EHoudiniOutputType : uint8_t
{
	EHoudiniOutputType__Invalid                                                      = 0,
	EHoudiniOutputType__Mesh                                                         = 1,
	EHoudiniOutputType__Instancer                                                    = 2,
	EHoudiniOutputType__Landscape                                                    = 3,
	EHoudiniOutputType__Curve                                                        = 4,
	EHoudiniOutputType__Skeletal                                                     = 5
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRampInterpolationType
/// Size: 0x01 (1 bytes)
enum class EHoudiniRampInterpolationType : uint8_t
{
	EHoudiniRampInterpolationType__InValid                                           = -1,
	EHoudiniRampInterpolationType__CONSTANT                                          = 0,
	EHoudiniRampInterpolationType__LINEAR                                            = 1,
	EHoudiniRampInterpolationType__CATMULL_ROM                                       = 2,
	EHoudiniRampInterpolationType__MONOTONE_CUBIC                                    = 3,
	EHoudiniRampInterpolationType__BEZIER                                            = 4,
	EHoudiniRampInterpolationType__BSPLINE                                           = 5,
	EHoudiniRampInterpolationType__HERMITE                                           = 6
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniParameterType
/// Size: 0x01 (1 bytes)
enum class EHoudiniParameterType : uint8_t
{
	EHoudiniParameterType__Invalid                                                   = 0,
	EHoudiniParameterType__Button                                                    = 1,
	EHoudiniParameterType__ButtonStrip                                               = 2,
	EHoudiniParameterType__Color                                                     = 3,
	EHoudiniParameterType__ColorRamp                                                 = 4,
	EHoudiniParameterType__File                                                      = 5,
	EHoudiniParameterType__FileDir                                                   = 6,
	EHoudiniParameterType__FileGeo                                                   = 7,
	EHoudiniParameterType__FileImage                                                 = 8,
	EHoudiniParameterType__Float                                                     = 9,
	EHoudiniParameterType__FloatRamp                                                 = 10,
	EHoudiniParameterType__Folder                                                    = 11,
	EHoudiniParameterType__FolderList                                                = 12,
	EHoudiniParameterType__Input                                                     = 13,
	EHoudiniParameterType__Int                                                       = 14,
	EHoudiniParameterType__IntChoice                                                 = 15,
	EHoudiniParameterType__Label                                                     = 16,
	EHoudiniParameterType__MultiParm                                                 = 17,
	EHoudiniParameterType__Separator                                                 = 18,
	EHoudiniParameterType__String                                                    = 19,
	EHoudiniParameterType__StringChoice                                              = 20,
	EHoudiniParameterType__StringAssetRef                                            = 21,
	EHoudiniParameterType__Toggle                                                    = 22
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniFolderParameterType
/// Size: 0x01 (1 bytes)
enum class EHoudiniFolderParameterType : uint8_t
{
	EHoudiniFolderParameterType__Invalid                                             = 0,
	EHoudiniFolderParameterType__Collapsible                                         = 1,
	EHoudiniFolderParameterType__Simple                                              = 2,
	EHoudiniFolderParameterType__Tabs                                                = 3,
	EHoudiniFolderParameterType__Radio                                               = 4,
	EHoudiniFolderParameterType__Other                                               = 5
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniMultiParmModificationType
/// Size: 0x01 (1 bytes)
enum class EHoudiniMultiParmModificationType : uint8_t
{
	EHoudiniMultiParmModificationType__None                                          = 0,
	EHoudiniMultiParmModificationType__Inserted                                      = 1,
	EHoudiniMultiParmModificationType__Removed                                       = 2,
	EHoudiniMultiParmModificationType__Modified                                      = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
/// Size: 0x01 (1 bytes)
enum class EHoudiniRampPointConstructStatus : uint8_t
{
	EHoudiniRampPointConstructStatus__None                                           = 0,
	EHoudiniRampPointConstructStatus__INITIALIZED                                    = 1,
	EHoudiniRampPointConstructStatus__POSITION_INSERTED                              = 2,
	EHoudiniRampPointConstructStatus__VALUE_INSERTED                                 = 3,
	EHoudiniRampPointConstructStatus__INTERPTYPE_INSERTED                            = 4
};

/// Enum /Script/HoudiniEngineRuntime.EPDGWorkResultState
/// Size: 0x01 (1 bytes)
enum class EPDGWorkResultState : uint8_t
{
	EPDGWorkResultState__None                                                        = 0,
	EPDGWorkResultState__ToLoad                                                      = 1,
	EPDGWorkResultState__Loading                                                     = 2,
	EPDGWorkResultState__Loaded                                                      = 3,
	EPDGWorkResultState__ToDelete                                                    = 4,
	EPDGWorkResultState__Deleting                                                    = 5,
	EPDGWorkResultState__Deleted                                                     = 6,
	EPDGWorkResultState__NotLoaded                                                   = 7
};

/// Enum /Script/HoudiniEngineRuntime.EPDGNodeState
/// Size: 0x01 (1 bytes)
enum class EPDGNodeState : uint8_t
{
	EPDGNodeState__None                                                              = 0,
	EPDGNodeState__Dirtied                                                           = 1,
	EPDGNodeState__Dirtying                                                          = 2,
	EPDGNodeState__Cooking                                                           = 3,
	EPDGNodeState__Cook_Complete                                                     = 4,
	EPDGNodeState__Cook_Failed                                                       = 5
};

/// Enum /Script/HoudiniEngineRuntime.EPDGLinkState
/// Size: 0x01 (1 bytes)
enum class EPDGLinkState : uint8_t
{
	EPDGLinkState__Inactive                                                          = 0,
	EPDGLinkState__Linking                                                           = 1,
	EPDGLinkState__Linked                                                            = 2,
	EPDGLinkState__Error_Not_Linked                                                  = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
/// Size: 0x01 (1 bytes)
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                                                                     = 0,
	HRSRF_OnlyIfMissing                                                              = 1,
	HRSRF_Never                                                                      = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
/// Size: 0x01 (1 bytes)
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                                                                  = 0,
	HRSST_Socket                                                                     = 1,
	HRSST_NamedPipe                                                                  = 2,
	HRSST_None                                                                       = 3
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
/// Size: 0x01A8 (424 bytes) (0x000000 - 0x0001A8) align 8 MaxSize: 0x01A8
struct FHoudiniStaticMeshGenerationProperties
{ 
	bool                                               bGeneratedDoubleSidedGeometry : 1;                          // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                      // 0x0008   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x0010   (0x0158)  
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                                // 0x0168   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0169   (0x0003)  MISSED
	int32_t                                            GeneratedLightMapResolution;                                // 0x016C   (0x0004)  
	float                                              GeneratedLpvBiasMultiplier;                                 // 0x0170   (0x0004)  
	FWalkableSlopeOverride                             GeneratedWalkableSlopeOverride;                             // 0x0174   (0x0010)  
	int32_t                                            GeneratedLightMapCoordinateIndex;                           // 0x0184   (0x0004)  
	bool                                               bGeneratedUseMaximumStreamingTexelRatio : 1;                // 0x0188:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0189   (0x0003)  MISSED
	float                                              GeneratedStreamingDistanceMultiplier;                       // 0x018C   (0x0004)  
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                            // 0x0190   (0x0008)  
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                     // 0x0198   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FHoudiniBakedOutputObjectIdentifier
{ 
	int32_t                                            PartId;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            SplitIdentifier;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutputObject
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FHoudiniBakedOutputObject
{ 
	FString                                            Actor;                                                      // 0x0000   (0x0010)  
	FString                                            Blueprint;                                                  // 0x0010   (0x0010)  
	FName                                              ActorBakeName;                                              // 0x0020   (0x0008)  
	FString                                            BakedObject;                                                // 0x0028   (0x0010)  
	FString                                            BakedComponent;                                             // 0x0038   (0x0010)  
	TArray<FString>                                    InstancedActors;                                            // 0x0048   (0x0010)  
	TArray<FString>                                    InstancedComponents;                                        // 0x0058   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutput
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FHoudiniBakedOutput
{ 
	TMap<FHoudiniBakedOutputObjectIdentifier, FHoudiniBakedOutputObject> BakedOutputObjects;                       // 0x0000   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FHoudiniOutputObjectIdentifier
{ 
	int32_t                                            ObjectId;                                                   // 0x0000   (0x0004)  
	int32_t                                            GeoId;                                                      // 0x0004   (0x0004)  
	int32_t                                            PartId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            SplitIdentifier;                                            // 0x0010   (0x0010)  
	FString                                            PartName;                                                   // 0x0020   (0x0010)  
	int32_t                                            PrimitiveIndex;                                             // 0x0030   (0x0004)  
	int32_t                                            PointIndex;                                                 // 0x0034   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBrushInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FHoudiniBrushInfo
{ 
	TWeakObjectPtr<class ABrush*>                      BrushActor;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         CachedTransform;                                            // 0x0010   (0x0030)  
	FVector                                            CachedOrigin;                                               // 0x0040   (0x000C)  
	FVector                                            CachedExtent;                                               // 0x004C   (0x000C)  
	TEnumAsByte<EBrushType>                            CachedBrushType;                                            // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	uint64_t                                           CachedSurfaceHash;                                          // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniMeshSocket
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FHoudiniMeshSocket
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGeoPartObject
/// Size: 0x0220 (544 bytes) (0x000000 - 0x000220) align 16 MaxSize: 0x0220
struct FHoudiniGeoPartObject
{ 
	int32_t                                            AssetId;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AssetName;                                                  // 0x0008   (0x0010)  
	int32_t                                            ObjectId;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ObjectName;                                                 // 0x0020   (0x0010)  
	int32_t                                            GeoId;                                                      // 0x0030   (0x0004)  
	int32_t                                            PartId;                                                     // 0x0034   (0x0004)  
	FString                                            PartName;                                                   // 0x0038   (0x0010)  
	bool                                               bHasCustomPartName;                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FString>                                    SplitGroups;                                                // 0x0050   (0x0010)  
	FTransform                                         TransformMatrix;                                            // 0x0060   (0x0030)  
	FString                                            NodePath;                                                   // 0x0090   (0x0010)  
	EHoudiniPartType                                   Type;                                                       // 0x00A0   (0x0001)  
	EHoudiniInstancerType                              InstancerType;                                              // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x00A2   (0x0006)  MISSED
	FString                                            VolumeName;                                                 // 0x00A8   (0x0010)  
	int32_t                                            VolumeTileIndex;                                            // 0x00B8   (0x0004)  
	bool                                               bIsVisible;                                                 // 0x00BC   (0x0001)  
	bool                                               bIsEditable;                                                // 0x00BD   (0x0001)  
	bool                                               bIsTemplated;                                               // 0x00BE   (0x0001)  
	bool                                               bIsInstanced;                                               // 0x00BF   (0x0001)  
	bool                                               bHasGeoChanged;                                             // 0x00C0   (0x0001)  
	bool                                               bHasPartChanged;                                            // 0x00C1   (0x0001)  
	bool                                               bHasTransformChanged;                                       // 0x00C2   (0x0001)  
	bool                                               bHasMaterialsChanged;                                       // 0x00C3   (0x0001)  
	unsigned char                                      UnknownData04_6[0x14C];                                     // 0x00C4   (0x014C)  MISSED
	TArray<FHoudiniMeshSocket>                         AllMeshSockets;                                             // 0x0210   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniCurveOutputProperties
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FHoudiniCurveOutputProperties
{ 
	EHoudiniCurveOutputType                            CurveOutputType;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            NumPoints;                                                  // 0x0004   (0x0004)  
	bool                                               bClosed;                                                    // 0x0008   (0x0001)  
	EHoudiniCurveType                                  CurveType;                                                  // 0x0009   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniOutputObject
/// Size: 0x00E8 (232 bytes) (0x000000 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FHoudiniOutputObject
{ 
	class UObject*                                     OutputObject;                                               // 0x0000   (0x0008)  
	class UObject*                                     OutputComponent;                                            // 0x0008   (0x0008)  
	class UObject*                                     ProxyObject;                                                // 0x0010   (0x0008)  
	class UObject*                                     ProxyComponent;                                             // 0x0018   (0x0008)  
	bool                                               bProxyIsCurrent;                                            // 0x0020   (0x0001)  
	bool                                               bIsImplicit;                                                // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
	FString                                            BakeName;                                                   // 0x0028   (0x0010)  
	FHoudiniCurveOutputProperties                      CurveOutputProperty;                                        // 0x0038   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TMap<FString, FString>                             CachedAttributes;                                           // 0x0048   (0x0050)  
	TMap<FString, FString>                             CachedTokens;                                               // 0x0098   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniInstancedOutput
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FHoudiniInstancedOutput
{ 
	TWeakObjectPtr<class UObject*>                     OriginalObject;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	int32_t                                            OriginalObjectIndex;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FTransform>                                 OriginalTransforms;                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,715) /* TArray<TWeakObjectPtr<UObject*>> */ __um(VariationObjects);                           // 0x0040   (0x0010)  
	TArray<FTransform>                                 VariationTransformOffsets;                                  // 0x0050   (0x0010)  
	TArray<int32_t>                                    TransformVariationIndices;                                  // 0x0060   (0x0010)  
	bool                                               bChanged;                                                   // 0x0070   (0x0001)  
	bool                                               bStale;                                                     // 0x0071   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x0072   (0x0006)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.OutputActorOwner
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FOutputActorOwner
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      OutputActor;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/HoudiniEngineRuntime.TOPWorkResultObject
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FTOPWorkResultObject
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            FilePath;                                                   // 0x0018   (0x0010)  
	EPDGWorkResultState                                State;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            WorkItemResultInfoIndex;                                    // 0x002C   (0x0004)  
	TArray<class UHoudiniOutput*>                      ResultOutputs;                                              // 0x0030   (0x0010)  
	bool                                               bAutoBakedSinceLastLoad;                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<class UObject*>                             OutputObjectsToDelete;                                      // 0x0048   (0x0010)  
	FOutputActorOwner                                  OutputActorOwner;                                           // 0x0058   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.TOPWorkResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTOPWorkResult
{ 
	int32_t                                            WorkItemIndex;                                              // 0x0000   (0x0004)  
	int32_t                                            WorkItemID;                                                 // 0x0004   (0x0004)  
	TArray<FTOPWorkResultObject>                       ResultObjects;                                              // 0x0008   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FHoudiniPDGWorkResultObjectBakedOutput
{ 
	TArray<FHoudiniBakedOutput>                        BakedOutputs;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.WorkItemTallyBase
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FWorkItemTallyBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.WorkItemTally
/// Size: 0x0238 (568 bytes) (0x000008 - 0x000238) align 8 MaxSize: 0x0238
struct FWorkItemTally : FWorkItemTallyBase
{ 
	SDK_UNDEFINED(80,716) /* TSet<int32_t> */          __um(AllWorkItems);                                         // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,717) /* TSet<int32_t> */          __um(WaitingWorkItems);                                     // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,718) /* TSet<int32_t> */          __um(ScheduledWorkItems);                                   // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,719) /* TSet<int32_t> */          __um(CookingWorkItems);                                     // 0x00F8   (0x0050)  
	SDK_UNDEFINED(80,720) /* TSet<int32_t> */          __um(CookedWorkItems);                                      // 0x0148   (0x0050)  
	SDK_UNDEFINED(80,721) /* TSet<int32_t> */          __um(ErroredWorkItems);                                     // 0x0198   (0x0050)  
	SDK_UNDEFINED(80,722) /* TSet<int32_t> */          __um(CookCancelledWorkItems);                               // 0x01E8   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.AggregatedWorkItemTally
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FAggregatedWorkItemTally : FWorkItemTallyBase
{ 
	int32_t                                            TotalWorkItems;                                             // 0x0008   (0x0004)  
	int32_t                                            WaitingWorkItems;                                           // 0x000C   (0x0004)  
	int32_t                                            ScheduledWorkItems;                                         // 0x0010   (0x0004)  
	int32_t                                            CookingWorkItems;                                           // 0x0014   (0x0004)  
	int32_t                                            CookedWorkItems;                                            // 0x0018   (0x0004)  
	int32_t                                            ErroredWorkItems;                                           // 0x001C   (0x0004)  
	int32_t                                            CookCancelledWorkItems;                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FHoudiniAssetBlueprintOutput
{ 
	int32_t                                            OutputIndex;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FHoudiniOutputObject                               OutputObject;                                               // 0x0008   (0x00E8)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
/// Size: 0x0120 (288 bytes) (0x000068 - 0x000120) align 8 MaxSize: 0x0120
struct FHoudiniAssetBlueprintInstanceData : FActorComponentInstanceData
{ 
	class UHoudiniAsset*                               HoudiniAsset;                                               // 0x0068   (0x0008)  
	int32_t                                            AssetId;                                                    // 0x0070   (0x0004)  
	EHoudiniAssetState                                 AssetState;                                                 // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	uint32_t                                           SubAssetIndex;                                              // 0x0078   (0x0004)  
	uint32_t                                           AssetCookCount;                                             // 0x007C   (0x0004)  
	bool                                               bHasBeenLoaded;                                             // 0x0080   (0x0001)  
	bool                                               bHasBeenDuplicated;                                         // 0x0081   (0x0001)  
	bool                                               bPendingDelete;                                             // 0x0082   (0x0001)  
	bool                                               bRecookRequested;                                           // 0x0083   (0x0001)  
	bool                                               bRebuildRequested;                                          // 0x0084   (0x0001)  
	bool                                               bEnableCooking;                                             // 0x0085   (0x0001)  
	bool                                               bForceNeedUpdate;                                           // 0x0086   (0x0001)  
	bool                                               bLastCookSuccess;                                           // 0x0087   (0x0001)  
	FGuid                                              ComponentGUID;                                              // 0x0088   (0x0010)  
	FGuid                                              HapiGUID;                                                   // 0x0098   (0x0010)  
	bool                                               bRegisteredComponentTemplate;                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FString                                            SourceName;                                                 // 0x00B0   (0x0010)  
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniAssetBlueprintOutput> Outputs;                                    // 0x00C0   (0x0050)  
	TArray<class UHoudiniInput*>                       Inputs;                                                     // 0x0110   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGenericAttribute
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FHoudiniGenericAttribute
{ 
	FString                                            AttributeName;                                              // 0x0000   (0x0010)  
	EAttribStorageType                                 AttributeType;                                              // 0x0010   (0x0001)  
	EAttribOwner                                       AttributeOwner;                                             // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            AttributeCount;                                             // 0x0014   (0x0004)  
	int32_t                                            AttributeTupleSize;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<double>                                     DoubleValues;                                               // 0x0020   (0x0010)  
	TArray<int64_t>                                    IntValues;                                                  // 0x0030   (0x0010)  
	TArray<FString>                                    StringValues;                                               // 0x0040   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniCurveInfo
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FHoudiniCurveInfo
{ 
	unsigned char                                      UnknownData00_2[0x1C];                                      // 0x0000   (0x001C)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniVolumeInfo
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FHoudiniVolumeInfo
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniPartInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FHoudiniPartInfo
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGeoInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FHoudiniGeoInfo
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniObjectInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FHoudiniObjectInfo
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align 8 MaxSize: 0x0098
struct FHoudiniSplineComponentInstanceData : FActorComponentInstanceData
{ 
	TArray<FTransform>                                 CurvePoints;                                                // 0x0068   (0x0010)  
	TArray<FVector>                                    DisplayPoints;                                              // 0x0078   (0x0010)  
	TArray<int32_t>                                    DisplayPointIndexDivider;                                   // 0x0088   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAsset
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UHoudiniAsset : public UObject
{ 
public:
	FString                                            AssetFileName;                                              // 0x0028   (0x0010)  
	TArray<char>                                       AssetBytes;                                                 // 0x0038   (0x0010)  
	uint32_t                                           AssetBytesCount;                                            // 0x0048   (0x0004)  
	bool                                               bAssetLimitedCommercial;                                    // 0x004C   (0x0001)  
	bool                                               bAssetNonCommercial;                                        // 0x004D   (0x0001)  
	bool                                               bAssetExpanded;                                             // 0x004E   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x004F   (0x0001)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetActor
/// Size: 0x0230 (560 bytes) (0x000228 - 0x000230) align 8 MaxSize: 0x0230
class AHoudiniAssetActor : public AActor
{ 
public:
	class UHoudiniAssetComponent*                      HoudiniAssetComponent;                                      // 0x0228   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent
/// Size: 0x08A0 (2208 bytes) (0x000460 - 0x0008A0) align 16 MaxSize: 0x08A0
class UHoudiniAssetComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0460   (0x0008)  MISSED
	class UHoudiniAsset*                               HoudiniAsset;                                               // 0x0468   (0x0008)  
	bool                                               bCookOnParameterChange;                                     // 0x0470   (0x0001)  
	bool                                               bUploadTransformsToHoudiniEngine;                           // 0x0471   (0x0001)  
	bool                                               bCookOnTransformChange;                                     // 0x0472   (0x0001)  
	bool                                               bCookOnAssetInputCook;                                      // 0x0473   (0x0001)  
	bool                                               bOutputless;                                                // 0x0474   (0x0001)  
	bool                                               bOutputTemplateGeos;                                        // 0x0475   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0476   (0x0002)  MISSED
	FDirectoryPath                                     TemporaryCookFolder;                                        // 0x0478   (0x0010)  
	FDirectoryPath                                     BakeFolder;                                                 // 0x0488   (0x0010)  
	EHoudiniStaticMeshMethod                           StaticMeshMethod;                                           // 0x0498   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0499   (0x0007)  MISSED
	FHoudiniStaticMeshGenerationProperties             StaticMeshGenerationProperties;                             // 0x04A0   (0x01A8)  
	FMeshBuildSettings                                 StaticMeshBuildSettings;                                    // 0x0648   (0x0030)  
	bool                                               bOverrideGlobalProxyStaticMeshSettings;                     // 0x0678   (0x0001)  
	bool                                               bEnableProxyStaticMeshOverride;                             // 0x0679   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementByTimerOverride;            // 0x067A   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x067B   (0x0001)  MISSED
	float                                              ProxyMeshAutoRefineTimeoutSecondsOverride;                  // 0x067C   (0x0004)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;     // 0x0680   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;      // 0x0681   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x0682   (0x0002)  MISSED
	int32_t                                            AssetId;                                                    // 0x0684   (0x0004)  
	SDK_UNDEFINED(80,723) /* TSet<UHoudiniAssetComponent*> */ __um(DownstreamHoudiniAssets);                       // 0x0688   (0x0050)  
	FGuid                                              ComponentGUID;                                              // 0x06D8   (0x0010)  
	FGuid                                              HapiGUID;                                                   // 0x06E8   (0x0010)  
	FString                                            HapiAssetName;                                              // 0x06F8   (0x0010)  
	EHoudiniAssetState                                 AssetState;                                                 // 0x0708   (0x0001)  
	EHoudiniAssetState                                 DebugLastAssetState;                                        // 0x0709   (0x0001)  
	EHoudiniAssetStateResult                           AssetStateResult;                                           // 0x070A   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x070B   (0x0001)  MISSED
	uint32_t                                           SubAssetIndex;                                              // 0x070C   (0x0004)  
	int32_t                                            AssetCookCount;                                             // 0x0710   (0x0004)  
	bool                                               bHasBeenLoaded;                                             // 0x0714   (0x0001)  
	bool                                               bHasBeenDuplicated;                                         // 0x0715   (0x0001)  
	bool                                               bPendingDelete;                                             // 0x0716   (0x0001)  
	bool                                               bRecookRequested;                                           // 0x0717   (0x0001)  
	bool                                               bRebuildRequested;                                          // 0x0718   (0x0001)  
	bool                                               bEnableCooking;                                             // 0x0719   (0x0001)  
	bool                                               bForceNeedUpdate;                                           // 0x071A   (0x0001)  
	bool                                               bLastCookSuccess;                                           // 0x071B   (0x0001)  
	bool                                               bParameterDefinitionUpdateNeeded;                           // 0x071C   (0x0001)  
	bool                                               bBlueprintStructureModified;                                // 0x071D   (0x0001)  
	bool                                               bBlueprintModified;                                         // 0x071E   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x071F   (0x0001)  MISSED
	TArray<class UHoudiniParameter*>                   Parameters;                                                 // 0x0720   (0x0010)  
	TArray<class UHoudiniInput*>                       Inputs;                                                     // 0x0730   (0x0010)  
	TArray<class UHoudiniOutput*>                      Outputs;                                                    // 0x0740   (0x0010)  
	TArray<FHoudiniBakedOutput>                        BakedOutputs;                                               // 0x0750   (0x0010)  
	SDK_UNDEFINED(16,724) /* TArray<TWeakObjectPtr<AActor*>> */ __um(UntrackedOutputs);                            // 0x0760   (0x0010)  
	TArray<class UHoudiniHandleComponent*>             HandleComponents;                                           // 0x0770   (0x0010)  
	bool                                               bHasComponentTransformChanged;                              // 0x0780   (0x0001)  
	bool                                               bFullyLoaded;                                               // 0x0781   (0x0001)  
	unsigned char                                      UnknownData07_6[0x6];                                       // 0x0782   (0x0006)  MISSED
	class UHoudiniPDGAssetLink*                        PDGAssetLink;                                               // 0x0788   (0x0008)  
	FTimerHandle                                       RefineMeshesTimer;                                          // 0x0790   (0x0008)  
	unsigned char                                      UnknownData08_6[0x18];                                      // 0x0798   (0x0018)  MISSED
	bool                                               bNoProxyMeshNextCookRequested;                              // 0x07B0   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x07B1   (0x0007)  MISSED
	TMap<class UObject*, int32_t>                      InputPresets;                                               // 0x07B8   (0x0050)  
	bool                                               bBakeAfterNextCook;                                         // 0x0808   (0x0001)  
	unsigned char                                      UnknownData10_6[0x5F];                                      // 0x0809   (0x005F)  MISSED
	bool                                               bCachedIsPreview;                                           // 0x0868   (0x0001)  
	unsigned char                                      UnknownData11_6[0xF];                                       // 0x0869   (0x000F)  MISSED
	double                                             LastTickTime;                                               // 0x0878   (0x0008)  
	unsigned char                                      UnknownData12_7[0x20];                                      // 0x0880   (0x0020)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
/// Size: 0x0990 (2448 bytes) (0x0008A0 - 0x000990) align 16 MaxSize: 0x0990
class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x08A0   (0x0040)  MISSED
	bool                                               FauxBPProperty;                                             // 0x08E0   (0x0001)  
	bool                                               bHoudiniAssetChanged;                                       // 0x08E1   (0x0001)  
	bool                                               bUpdatedFromTemplate;                                       // 0x08E2   (0x0001)  
	bool                                               bIsInBlueprintEditor;                                       // 0x08E3   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x08E4   (0x0001)  
	bool                                               bHasRegisteredComponentTemplate;                            // 0x08E5   (0x0001)  
	unsigned char                                      UnknownData01_6[0xA];                                       // 0x08E6   (0x000A)  MISSED
	TMap<FHoudiniOutputObjectIdentifier, FGuid>        CachedOutputNodes;                                          // 0x08F0   (0x0050)  
	TMap<FGuid, FGuid>                                 CachedInputNodes;                                           // 0x0940   (0x0050)  


	/// Functions
	// Function /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
	void SetToggleValueAt(FString Name, bool Value, int32_t Index) // [0x11791a0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, bool, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Name, Value, Index);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
	void SetFloatParameter(FString Name, float Value, int32_t Index) // [0x1179040] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString, float, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Name, Value, Index);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
	bool HasParameter(FString Name) // [0x1178f40] Final|Native|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Name);
	}
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameter
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UHoudiniAssetParameter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterButton
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterChoice
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0080   (0x0038)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterColor
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFile
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0080   (0x0028)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFloat
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0080   (0x0038)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolder
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolderList
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterInt
/// Size: 0x00B0 (176 bytes) (0x000080 - 0x0000B0) align 8 MaxSize: 0x00B0
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0080   (0x0030)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterLabel
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterRamp
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0080   (0x0018)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterSeparator
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterString
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterToggle
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000C8) align 8 MaxSize: 0x00C8
class UHoudiniAssetComponentMaterials_V1 : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent_V1
/// Size: 0x0290 (656 bytes) (0x0001F8 - 0x000290) align 16 MaxSize: 0x0290
class UHoudiniHandleComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x01F8   (0x0098)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniSplineComponent_V1
/// Size: 0x02F0 (752 bytes) (0x0001F8 - 0x0002F0) align 16 MaxSize: 0x02F0
class UHoudiniSplineComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xF8];                                      // 0x01F8   (0x00F8)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInput
/// Size: 0x01A0 (416 bytes) (0x000080 - 0x0001A0) align 16 MaxSize: 0x01A0
class UHoudiniAssetInput : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x120];                                     // 0x0080   (0x0120)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInput
/// Size: 0x0160 (352 bytes) (0x000080 - 0x000160) align 16 MaxSize: 0x0160
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0080   (0x00E0)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInputField
/// Size: 0x0190 (400 bytes) (0x000028 - 0x000190) align 16 MaxSize: 0x0190
class UHoudiniAssetInstanceInputField : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x168];                                     // 0x0028   (0x0168)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent_V1
/// Size: 0x0980 (2432 bytes) (0x000460 - 0x000980) align 16 MaxSize: 0x0980
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
{ 
public:
	bool                                               bGeneratedDoubleSidedGeometry : 1;                          // 0x0460:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0461   (0x0007)  MISSED
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                      // 0x0468   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x0470   (0x0158)  
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                                // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x05C9   (0x0003)  MISSED
	int32_t                                            GeneratedLightMapResolution;                                // 0x05CC   (0x0004)  
	float                                              GeneratedLpvBiasMultiplier;                                 // 0x05D0   (0x0004)  
	float                                              GeneratedDistanceFieldResolutionScale;                      // 0x05D4   (0x0004)  
	FWalkableSlopeOverride                             GeneratedWalkableSlopeOverride;                             // 0x05D8   (0x0010)  
	int32_t                                            GeneratedLightMapCoordinateIndex;                           // 0x05E8   (0x0004)  
	bool                                               bGeneratedUseMaximumStreamingTexelRatio : 1;                // 0x05EC:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x05ED   (0x0003)  MISSED
	float                                              GeneratedStreamingDistanceMultiplier;                       // 0x05F0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x05F4   (0x0004)  MISSED
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                            // 0x05F8   (0x0008)  
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                     // 0x0600   (0x0010)  
	FText                                              BakeFolder;                                                 // 0x0610   (0x0018)  
	FText                                              TempCookFolder;                                             // 0x0628   (0x0018)  
	unsigned char                                      UnknownData04_7[0x340];                                     // 0x0640   (0x0340)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
/// Size: 0x0210 (528 bytes) (0x0001F8 - 0x000210) align 16 MaxSize: 0x0210
class UHoudiniInstancedActorComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x01F8   (0x0018)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
/// Size: 0x0220 (544 bytes) (0x0001F8 - 0x000220) align 16 MaxSize: 0x0220
class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x01F8   (0x0028)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHoudiniEngineCopyPropertiesInterface : public UInterface
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleParameter
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UHoudiniHandleParameter : public UObject
{ 
public:
	class UHoudiniParameter*                           AssetParameter;                                             // 0x0028   (0x0008)  
	int32_t                                            TupleIndex;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent
/// Size: 0x0230 (560 bytes) (0x0001F8 - 0x000230) align 16 MaxSize: 0x0230
class UHoudiniHandleComponent : public USceneComponent
{ 
public:
	TArray<class UHoudiniHandleParameter*>             XformParms;                                                 // 0x01F8   (0x0010)  
	class UHoudiniHandleParameter*                     RSTParm;                                                    // 0x0208   (0x0008)  
	class UHoudiniHandleParameter*                     RotOrderParm;                                               // 0x0210   (0x0008)  
	EHoudiniHandleType                                 HandleType;                                                 // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0219   (0x0007)  MISSED
	FString                                            HandleName;                                                 // 0x0220   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInput
/// Size: 0x0158 (344 bytes) (0x000028 - 0x000158) align 8 MaxSize: 0x0158
class UHoudiniInput : public UObject
{ 
public:
	FString                                            Name;                                                       // 0x0028   (0x0010)  
	FString                                            Label;                                                      // 0x0038   (0x0010)  
	EHoudiniInputType                                  Type;                                                       // 0x0048   (0x0001)  
	EHoudiniInputType                                  PreviousType;                                               // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            AssetNodeId;                                                // 0x004C   (0x0004)  
	int32_t                                            InputNodeId;                                                // 0x0050   (0x0004)  
	int32_t                                            InputIndex;                                                 // 0x0054   (0x0004)  
	int32_t                                            ParmId;                                                     // 0x0058   (0x0004)  
	bool                                               bIsObjectPathParameter;                                     // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<int32_t>                                    CreatedDataNodeIds;                                         // 0x0060   (0x0010)  
	bool                                               bHasChanged;                                                // 0x0070   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x0071   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0072   (0x0006)  MISSED
	FString                                            Help;                                                       // 0x0078   (0x0010)  
	EHoudiniXformType                                  KeepWorldTransform;                                         // 0x0088   (0x0001)  
	bool                                               bPackBeforeMerge;                                           // 0x0089   (0x0001)  
	bool                                               bImportAsReference;                                         // 0x008A   (0x0001)  
	bool                                               bExportLODs;                                                // 0x008B   (0x0001)  
	bool                                               bExportSockets;                                             // 0x008C   (0x0001)  
	bool                                               bExportColliders;                                           // 0x008D   (0x0001)  
	bool                                               bCookOnCurveChanged;                                        // 0x008E   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x008F   (0x0001)  MISSED
	TArray<class UHoudiniInputObject*>                 GeometryInputObjects;                                       // 0x0090   (0x0010)  
	bool                                               bStaticMeshChanged;                                         // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<class UHoudiniInputObject*>                 AssetInputObjects;                                          // 0x00A8   (0x0010)  
	bool                                               bInputAssetConnectedInHoudini;                              // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TArray<class UHoudiniInputObject*>                 CurveInputObjects;                                          // 0x00C0   (0x0010)  
	float                                              DefaultCurveOffset;                                         // 0x00D0   (0x0004)  
	bool                                               bAddRotAndScaleAttributesOnCurves;                          // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
	TArray<class UHoudiniInputObject*>                 LandscapeInputObjects;                                      // 0x00D8   (0x0010)  
	bool                                               bLandscapeHasExportTypeChanged;                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData07_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	TArray<class UHoudiniInputObject*>                 WorldInputObjects;                                          // 0x00F0   (0x0010)  
	TArray<class AActor*>                              WorldInputBoundSelectorObjects;                             // 0x0100   (0x0010)  
	bool                                               bIsWorldInputBoundSelector;                                 // 0x0110   (0x0001)  
	bool                                               bWorldInputBoundSelectorAutoUpdate;                         // 0x0111   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x0112   (0x0002)  MISSED
	float                                              UnrealSplineResolution;                                     // 0x0114   (0x0004)  
	TArray<class UHoudiniInputObject*>                 SkeletalInputObjects;                                       // 0x0118   (0x0010)  
	TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;                                         // 0x0128   (0x0010)  
	TArray<class UHoudiniInputObject*>                 LastUndoDeletedInputs;                                      // 0x0138   (0x0010)  
	bool                                               bUpdateInputLandscape;                                      // 0x0148   (0x0001)  
	EHoudiniLandscapeExportType                        LandscapeExportType;                                        // 0x0149   (0x0001)  
	bool                                               bLandscapeExportSelectionOnly;                              // 0x014A   (0x0001)  
	bool                                               bLandscapeAutoSelectComponent;                              // 0x014B   (0x0001)  
	bool                                               bLandscapeExportMaterials;                                  // 0x014C   (0x0001)  
	bool                                               bLandscapeExportLighting;                                   // 0x014D   (0x0001)  
	bool                                               bLandscapeExportNormalizedUVs;                              // 0x014E   (0x0001)  
	bool                                               bLandscapeExportTileUVs;                                    // 0x014F   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x0150   (0x0001)  
	unsigned char                                      UnknownData09_7[0x7];                                       // 0x0151   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputObject
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 16 MaxSize: 0x00A8
class UHoudiniInputObject : public UObject
{ 
public:
	TWeakObjectPtr<class UObject*>                     InputObject;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0030)  
	EHoudiniInputObjectType                            Type;                                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            InputNodeId;                                                // 0x0084   (0x0004)  
	int32_t                                            InputObjectNodeId;                                          // 0x0088   (0x0004)  
	FGuid                                              Guid;                                                       // 0x008C   (0x0010)  
	bool                                               bHasChanged;                                                // 0x009C   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x009D   (0x0001)  
	bool                                               bTransformChanged;                                          // 0x009E   (0x0001)  
	bool                                               bImportAsReference;                                         // 0x009F   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputStaticMesh
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 16 MaxSize: 0x00C0
class UHoudiniInputStaticMesh : public UHoudiniInputObject
{ 
public:
	TArray<class UHoudiniInputStaticMesh*>             BlueprintStaticMeshes;                                      // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSkeletalMesh
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 16 MaxSize: 0x00B0
class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSceneComponent
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align 16 MaxSize: 0x00E0
class UHoudiniInputSceneComponent : public UHoudiniInputObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FTransform                                         ActorTransform;                                             // 0x00B0   (0x0030)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputMeshComponent
/// Size: 0x0120 (288 bytes) (0x0000E0 - 0x000120) align 16 MaxSize: 0x0118
class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{ 
public:
	TWeakObjectPtr<class UStaticMesh*>                 StaticMesh;                                                 // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00E8   (0x0020)  MISSED
	TArray<FString>                                    MeshComponentsMaterials;                                    // 0x0108   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
/// Size: 0x0130 (304 bytes) (0x000118 - 0x000130) align 16 MaxSize: 0x0130
class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{ 
public:
	TArray<FTransform>                                 InstanceTransforms;                                         // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0128   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSplineComponent
/// Size: 0x0100 (256 bytes) (0x0000E0 - 0x000100) align 16 MaxSize: 0x0100
class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{ 
public:
	int32_t                                            NumberOfSplineControlPoints;                                // 0x00E0   (0x0004)  
	float                                              SplineLength;                                               // 0x00E4   (0x0004)  
	float                                              SplineResolution;                                           // 0x00E8   (0x0004)  
	bool                                               SplineClosed;                                               // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00ED   (0x0003)  MISSED
	TArray<FTransform>                                 SplineControlPoints;                                        // 0x00F0   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 16 MaxSize: 0x00C0
class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{ 
public:
	EHoudiniCurveType                                  CurveType;                                                  // 0x00A8   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x00A9   (0x0001)  
	bool                                               Reversed;                                                   // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00AB   (0x0005)  MISSED
	class UHoudiniSplineComponent*                     CachedComponent;                                            // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputCameraComponent
/// Size: 0x0100 (256 bytes) (0x0000E0 - 0x000100) align 16 MaxSize: 0x0100
class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{ 
public:
	float                                              FOV;                                                        // 0x00E0   (0x0004)  
	float                                              AspectRatio;                                                // 0x00E4   (0x0004)  
	bool                                               bIsOrthographic;                                            // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              OrthoWidth;                                                 // 0x00EC   (0x0004)  
	float                                              OrthoNearClipPlane;                                         // 0x00F0   (0x0004)  
	float                                              OrthoFarClipPlane;                                          // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputHoudiniAsset
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 16 MaxSize: 0x00B0
class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{ 
public:
	int32_t                                            AssetOutputIndex;                                           // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputActor
/// Size: 0x0110 (272 bytes) (0x0000A8 - 0x000110) align 16 MaxSize: 0x0110
class UHoudiniInputActor : public UHoudiniInputObject
{ 
public:
	TArray<class UHoudiniInputSceneComponent*>         ActorComponents;                                            // 0x00A8   (0x0010)  
	SDK_UNDEFINED(80,725) /* TSet<TWeakObjectPtr<UObject*>> */ __um(ActorSceneComponents);                         // 0x00B8   (0x0050)  
	int32_t                                            LastUpdateNumComponentsAdded;                               // 0x0108   (0x0004)  
	int32_t                                            LastUpdateNumComponentsRemoved;                             // 0x010C   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputLandscape
/// Size: 0x0140 (320 bytes) (0x000110 - 0x000140) align 16 MaxSize: 0x0140
class UHoudiniInputLandscape : public UHoudiniInputActor
{ 
public:
	FTransform                                         CachedInputLandscapeTraqnsform;                             // 0x0110   (0x0030)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputBrush
/// Size: 0x0130 (304 bytes) (0x000110 - 0x000130) align 16 MaxSize: 0x0130
class UHoudiniInputBrush : public UHoudiniInputActor
{ 
public:
	TArray<FHoudiniBrushInfo>                          BrushesInfo;                                                // 0x0110   (0x0010)  
	class UModel*                                      CombinedModel;                                              // 0x0120   (0x0008)  
	bool                                               bIgnoreInputObject;                                         // 0x0128   (0x0001)  
	TEnumAsByte<EBrushType>                            CachedInputBrushType;                                       // 0x0129   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x012A   (0x0006)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputDataTable
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 16 MaxSize: 0x00B0
class UHoudiniInputDataTable : public UHoudiniInputObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 16 MaxSize: 0x00C0
class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInstancedActorComponent
/// Size: 0x0210 (528 bytes) (0x0001F8 - 0x000210) align 16 MaxSize: 0x0210
class UHoudiniInstancedActorComponent : public USceneComponent
{ 
public:
	class UObject*                                     InstancedObject;                                            // 0x01F8   (0x0008)  
	TArray<class AActor*>                              InstancedActors;                                            // 0x0200   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
/// Size: 0x0220 (544 bytes) (0x0001F8 - 0x000220) align 16 MaxSize: 0x0220
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{ 
public:
	TArray<class UStaticMeshComponent*>                Instances;                                                  // 0x01F8   (0x0010)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0208   (0x0010)  
	class UStaticMesh*                                 InstancedMesh;                                              // 0x0218   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniLandscapePtr
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UHoudiniLandscapePtr : public UObject
{ 
public:
	TWeakObjectPtr<class ALandscapeProxy*>             LandscapeSoftPtr;                                           // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	EHoudiniLandscapeOutputBakeType                    BakeType;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniLandscapeEditLayer
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UHoudiniLandscapeEditLayer : public UObject
{ 
public:
	TWeakObjectPtr<class ALandscapeProxy*>             LandscapeSoftPtr;                                           // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	FString                                            LayerName;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniOutput
/// Size: 0x01B0 (432 bytes) (0x000028 - 0x0001B0) align 8 MaxSize: 0x01B0
class UHoudiniOutput : public UObject
{ 
public:
	EHoudiniOutputType                                 Type;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FHoudiniGeoPartObject>                      HoudiniGeoPartObjects;                                      // 0x0030   (0x0010)  
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject> OutputObjects;                                      // 0x0040   (0x0050)  
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput> InstancedOutputs;                                // 0x0090   (0x0050)  
	TMap<FString, class UMaterialInterface*>           AssignementMaterials;                                       // 0x00E0   (0x0050)  
	TMap<FString, class UMaterialInterface*>           ReplacementMaterials;                                       // 0x0130   (0x0050)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0180   (0x0004)  MISSED
	bool                                               bLandscapeWorldComposition;                                 // 0x0184   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0185   (0x0003)  MISSED
	TArray<class AActor*>                              HoudiniCreatedSocketActors;                                 // 0x0188   (0x0010)  
	TArray<class AActor*>                              HoudiniAttachedSocketActors;                                // 0x0198   (0x0010)  
	bool                                               bIsEditableNode;                                            // 0x01A8   (0x0001)  
	bool                                               bHasEditableNodeBuilt;                                      // 0x01A9   (0x0001)  
	bool                                               bIsUpdating;                                                // 0x01AA   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x01AB   (0x0001)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameter
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class UHoudiniParameter : public UObject
{ 
public:
	FString                                            Name;                                                       // 0x0028   (0x0010)  
	FString                                            Label;                                                      // 0x0038   (0x0010)  
	EHoudiniParameterType                              ParmType;                                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	uint32_t                                           TupleSize;                                                  // 0x004C   (0x0004)  
	int32_t                                            NodeId;                                                     // 0x0050   (0x0004)  
	int32_t                                            ParmId;                                                     // 0x0054   (0x0004)  
	int32_t                                            ParentParmId;                                               // 0x0058   (0x0004)  
	int32_t                                            ChildIndex;                                                 // 0x005C   (0x0004)  
	bool                                               bIsVisible;                                                 // 0x0060   (0x0001)  
	bool                                               bIsDisabled;                                                // 0x0061   (0x0001)  
	bool                                               bHasChanged;                                                // 0x0062   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x0063   (0x0001)  
	bool                                               bIsDefault;                                                 // 0x0064   (0x0001)  
	bool                                               bIsSpare;                                                   // 0x0065   (0x0001)  
	bool                                               bJoinNext;                                                  // 0x0066   (0x0001)  
	bool                                               bIsChildOfMultiParm;                                        // 0x0067   (0x0001)  
	bool                                               bIsDirectChildOfMultiParm;                                  // 0x0068   (0x0001)  
	bool                                               bPendingRevertToDefault;                                    // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x006A   (0x0006)  MISSED
	TArray<int32_t>                                    TuplePendingRevertToDefault;                                // 0x0070   (0x0010)  
	FString                                            Help;                                                       // 0x0080   (0x0010)  
	uint32_t                                           TagCount;                                                   // 0x0090   (0x0004)  
	int32_t                                            ValueIndex;                                                 // 0x0094   (0x0004)  
	bool                                               bHasExpression;                                             // 0x0098   (0x0001)  
	bool                                               bShowExpression;                                            // 0x0099   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x009A   (0x0006)  MISSED
	FString                                            ParamExpression;                                            // 0x00A0   (0x0010)  
	TMap<FString, FString>                             Tags;                                                       // 0x00B0   (0x0050)  
	bool                                               bAutoUpdate;                                                // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterButton
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UHoudiniParameterButton : public UHoudiniParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterButtonStrip
/// Size: 0x0130 (304 bytes) (0x000108 - 0x000130) align 8 MaxSize: 0x0130
class UHoudiniParameterButtonStrip : public UHoudiniParameter
{ 
public:
	int32_t                                            Count;                                                      // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	TArray<FString>                                    Labels;                                                     // 0x0110   (0x0010)  
	TArray<int32_t>                                    Values;                                                     // 0x0120   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterChoice
/// Size: 0x0168 (360 bytes) (0x000108 - 0x000168) align 8 MaxSize: 0x0168
class UHoudiniParameterChoice : public UHoudiniParameter
{ 
public:
	int32_t                                            IntValue;                                                   // 0x0108   (0x0004)  
	int32_t                                            DefaultIntValue;                                            // 0x010C   (0x0004)  
	FString                                            StringValue;                                                // 0x0110   (0x0010)  
	FString                                            DefaultStringValue;                                         // 0x0120   (0x0010)  
	TArray<FString>                                    StringChoiceValues;                                         // 0x0130   (0x0010)  
	TArray<FString>                                    StringChoiceLabels;                                         // 0x0140   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0150   (0x0010)  MISSED
	bool                                               bIsChildOfRamp;                                             // 0x0160   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0161   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterColor
/// Size: 0x0130 (304 bytes) (0x000108 - 0x000130) align 8 MaxSize: 0x0130
class UHoudiniParameterColor : public UHoudiniParameter
{ 
public:
	FLinearColor                                       Color;                                                      // 0x0108   (0x0010)  
	FLinearColor                                       DefaultColor;                                               // 0x0118   (0x0010)  
	bool                                               bIsChildOfRamp;                                             // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFile
/// Size: 0x0140 (320 bytes) (0x000108 - 0x000140) align 8 MaxSize: 0x0140
class UHoudiniParameterFile : public UHoudiniParameter
{ 
public:
	TArray<FString>                                    Values;                                                     // 0x0108   (0x0010)  
	TArray<FString>                                    DefaultValues;                                              // 0x0118   (0x0010)  
	FString                                            Filters;                                                    // 0x0128   (0x0010)  
	bool                                               bIsReadOnly;                                                // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0139   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFloat
/// Size: 0x0158 (344 bytes) (0x000108 - 0x000158) align 8 MaxSize: 0x0158
class UHoudiniParameterFloat : public UHoudiniParameter
{ 
public:
	TArray<float>                                      Values;                                                     // 0x0108   (0x0010)  
	TArray<float>                                      DefaultValues;                                              // 0x0118   (0x0010)  
	FString                                            Unit;                                                       // 0x0128   (0x0010)  
	bool                                               bNoSwap;                                                    // 0x0138   (0x0001)  
	bool                                               bHasMin;                                                    // 0x0139   (0x0001)  
	bool                                               bHasMax;                                                    // 0x013A   (0x0001)  
	bool                                               bHasUIMin;                                                  // 0x013B   (0x0001)  
	bool                                               bHasUIMax;                                                  // 0x013C   (0x0001)  
	bool                                               bIsLogarithmic;                                             // 0x013D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x013E   (0x0002)  MISSED
	float                                              Min;                                                        // 0x0140   (0x0004)  
	float                                              Max;                                                        // 0x0144   (0x0004)  
	float                                              UIMin;                                                      // 0x0148   (0x0004)  
	float                                              UIMax;                                                      // 0x014C   (0x0004)  
	bool                                               bIsChildOfRamp;                                             // 0x0150   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0151   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFolder
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
class UHoudiniParameterFolder : public UHoudiniParameter
{ 
public:
	EHoudiniFolderParameterType                        FolderType;                                                 // 0x0108   (0x0001)  
	bool                                               bExpanded;                                                  // 0x0109   (0x0001)  
	bool                                               bChosen;                                                    // 0x010A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x010B   (0x0001)  MISSED
	int32_t                                            ChildCounter;                                               // 0x010C   (0x0004)  
	bool                                               bIsContentShown;                                            // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0111   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFolderList
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
class UHoudiniParameterFolderList : public UHoudiniParameter
{ 
public:
	bool                                               bIsTabMenu;                                                 // 0x0108   (0x0001)  
	bool                                               bIsTabsShown;                                               // 0x0109   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x010A   (0x0006)  MISSED
	TArray<class UHoudiniParameterFolder*>             TabFolders;                                                 // 0x0110   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterInt
/// Size: 0x0150 (336 bytes) (0x000108 - 0x000150) align 8 MaxSize: 0x0150
class UHoudiniParameterInt : public UHoudiniParameter
{ 
public:
	TArray<int32_t>                                    Values;                                                     // 0x0108   (0x0010)  
	TArray<int32_t>                                    DefaultValues;                                              // 0x0118   (0x0010)  
	FString                                            Unit;                                                       // 0x0128   (0x0010)  
	bool                                               bHasMin;                                                    // 0x0138   (0x0001)  
	bool                                               bHasMax;                                                    // 0x0139   (0x0001)  
	bool                                               bHasUIMin;                                                  // 0x013A   (0x0001)  
	bool                                               bHasUIMax;                                                  // 0x013B   (0x0001)  
	bool                                               bIsLogarithmic;                                             // 0x013C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x013D   (0x0003)  MISSED
	int32_t                                            Min;                                                        // 0x0140   (0x0004)  
	int32_t                                            Max;                                                        // 0x0144   (0x0004)  
	int32_t                                            UIMin;                                                      // 0x0148   (0x0004)  
	int32_t                                            UIMax;                                                      // 0x014C   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterLabel
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
class UHoudiniParameterLabel : public UHoudiniParameter
{ 
public:
	TArray<FString>                                    LabelStrings;                                               // 0x0108   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterMultiParm
/// Size: 0x0150 (336 bytes) (0x000108 - 0x000150) align 8 MaxSize: 0x0150
class UHoudiniParameterMultiParm : public UHoudiniParameter
{ 
public:
	bool                                               bIsShown;                                                   // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0109   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x010C   (0x0004)  
	FString                                            TemplateName;                                               // 0x0110   (0x0010)  
	int32_t                                            MultiparmValue;                                             // 0x0120   (0x0004)  
	uint32_t                                           MultiParmInstanceNum;                                       // 0x0124   (0x0004)  
	uint32_t                                           MultiParmInstanceLength;                                    // 0x0128   (0x0004)  
	uint32_t                                           MultiParmInstanceCount;                                     // 0x012C   (0x0004)  
	uint32_t                                           InstanceStartOffset;                                        // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0134   (0x0004)  MISSED
	TArray<EHoudiniMultiParmModificationType>          MultiParmInstanceLastModifyArray;                           // 0x0138   (0x0010)  
	int32_t                                            DefaultInstanceCount;                                       // 0x0148   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterOperatorPath
/// Size: 0x0110 (272 bytes) (0x000108 - 0x000110) align 8 MaxSize: 0x0110
class UHoudiniParameterOperatorPath : public UHoudiniParameter
{ 
public:
	TWeakObjectPtr<class UHoudiniInput*>               HoudiniInput;                                               // 0x0108   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UHoudiniParameterRampModificationEvent : public UObject
{ 
public:
	bool                                               bIsInsertEvent;                                             // 0x0028   (0x0001)  
	bool                                               bIsFloatRamp;                                               // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            DeleteInstanceIndex;                                        // 0x002C   (0x0004)  
	float                                              InsertPosition;                                             // 0x0030   (0x0004)  
	float                                              InsertFloat;                                                // 0x0034   (0x0004)  
	FLinearColor                                       InsertColor;                                                // 0x0038   (0x0010)  
	EHoudiniRampInterpolationType                      InsertInterpolation;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UHoudiniParameterRampFloatPoint : public UObject
{ 
public:
	float                                              position;                                                   // 0x0028   (0x0004)  
	float                                              Value;                                                      // 0x002C   (0x0004)  
	EHoudiniRampInterpolationType                      Interpolation;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            InstanceIndex;                                              // 0x0034   (0x0004)  
	class UHoudiniParameterFloat*                      PositionParentParm;                                         // 0x0038   (0x0008)  
	class UHoudiniParameterFloat*                      ValueParentParm;                                            // 0x0040   (0x0008)  
	class UHoudiniParameterChoice*                     InterpolationParentParm;                                    // 0x0048   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampColorPoint
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UHoudiniParameterRampColorPoint : public UObject
{ 
public:
	float                                              position;                                                   // 0x0028   (0x0004)  
	FLinearColor                                       Value;                                                      // 0x002C   (0x0010)  
	EHoudiniRampInterpolationType                      Interpolation;                                              // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            InstanceIndex;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UHoudiniParameterFloat*                      PositionParentParm;                                         // 0x0048   (0x0008)  
	class UHoudiniParameterColor*                      ValueParentParm;                                            // 0x0050   (0x0008)  
	class UHoudiniParameterChoice*                     InterpolationParentParm;                                    // 0x0058   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampFloat
/// Size: 0x01B8 (440 bytes) (0x000150 - 0x0001B8) align 8 MaxSize: 0x01B8
class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{ 
public:
	TArray<class UHoudiniParameterRampFloatPoint*>     Points;                                                     // 0x0150   (0x0010)  
	TArray<class UHoudiniParameterRampFloatPoint*>     CachedPoints;                                               // 0x0160   (0x0010)  
	TArray<float>                                      DefaultPositions;                                           // 0x0170   (0x0010)  
	TArray<float>                                      DefaultValues;                                              // 0x0180   (0x0010)  
	TArray<int32_t>                                    DefaultChoices;                                             // 0x0190   (0x0010)  
	int32_t                                            NumDefaultPoints;                                           // 0x01A0   (0x0004)  
	bool                                               bCaching;                                                   // 0x01A4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A5   (0x0003)  MISSED
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                      // 0x01A8   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampColor
/// Size: 0x01C0 (448 bytes) (0x000150 - 0x0001C0) align 8 MaxSize: 0x01C0
class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{ 
public:
	TArray<class UHoudiniParameterRampColorPoint*>     Points;                                                     // 0x0150   (0x0010)  
	bool                                               bCaching;                                                   // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0161   (0x0007)  MISSED
	TArray<class UHoudiniParameterRampColorPoint*>     CachedPoints;                                               // 0x0168   (0x0010)  
	TArray<float>                                      DefaultPositions;                                           // 0x0178   (0x0010)  
	TArray<FLinearColor>                               DefaultValues;                                              // 0x0188   (0x0010)  
	TArray<int32_t>                                    DefaultChoices;                                             // 0x0198   (0x0010)  
	int32_t                                            NumDefaultPoints;                                           // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                      // 0x01B0   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterSeparator
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UHoudiniParameterSeparator : public UHoudiniParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterString
/// Size: 0x0140 (320 bytes) (0x000108 - 0x000140) align 8 MaxSize: 0x0140
class UHoudiniParameterString : public UHoudiniParameter
{ 
public:
	TArray<FString>                                    Values;                                                     // 0x0108   (0x0010)  
	TArray<FString>                                    DefaultValues;                                              // 0x0118   (0x0010)  
	TArray<class UObject*>                             ChosenAssets;                                               // 0x0128   (0x0010)  
	bool                                               bIsAssetRef;                                                // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0139   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterToggle
/// Size: 0x0128 (296 bytes) (0x000108 - 0x000128) align 8 MaxSize: 0x0128
class UHoudiniParameterToggle : public UHoudiniParameter
{ 
public:
	TArray<int32_t>                                    Values;                                                     // 0x0108   (0x0010)  
	TArray<int32_t>                                    DefaultValues;                                              // 0x0118   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.TOPNode
/// Size: 0x0420 (1056 bytes) (0x000028 - 0x000420) align 16 MaxSize: 0x0420
class UTOPNode : public UObject
{ 
public:
	int32_t                                            NodeId;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            NodeName;                                                   // 0x0030   (0x0010)  
	FString                                            NodePath;                                                   // 0x0040   (0x0010)  
	FString                                            ParentName;                                                 // 0x0050   (0x0010)  
	class UObject*                                     WorkResultParent;                                           // 0x0060   (0x0008)  
	TArray<FTOPWorkResult>                             WorkResult;                                                 // 0x0068   (0x0010)  
	bool                                               bHidden;                                                    // 0x0078   (0x0001)  
	bool                                               bAutoLoad;                                                  // 0x0079   (0x0001)  
	EPDGNodeState                                      NodeState;                                                  // 0x007A   (0x0001)  
	bool                                               bCachedHaveNotLoadedWorkResults;                            // 0x007B   (0x0001)  
	bool                                               bCachedHaveLoadedWorkResults;                               // 0x007C   (0x0001)  
	bool                                               bHasChildNodes;                                             // 0x007D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x007E   (0x0002)  MISSED
	SDK_UNDEFINED(80,726) /* TSet<FString> */          __um(ClearedLandscapeLayers);                               // 0x0080   (0x0050)  
	unsigned char                                      UnknownData02_6[0x80];                                      // 0x00D0   (0x0080)  MISSED
	bool                                               bShow;                                                      // 0x0150   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0151   (0x0007)  MISSED
	TMap<FString, FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;                            // 0x0158   (0x0050)  
	FWorkItemTally                                     WorkItemTally;                                              // 0x01A8   (0x0238)  
	FAggregatedWorkItemTally                           AggregatedWorkItemTally;                                    // 0x03E0   (0x0028)  
	bool                                               bHasReceivedCookCompleteEvent;                              // 0x0408   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0409   (0x0007)  MISSED
	FOutputActorOwner                                  OutputActorOwner;                                           // 0x0410   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.TOPNetwork
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UTOPNetwork : public UObject
{ 
public:
	int32_t                                            NodeId;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            NodeName;                                                   // 0x0030   (0x0010)  
	FString                                            NodePath;                                                   // 0x0040   (0x0010)  
	TArray<class UTOPNode*>                            AllTOPNodes;                                                // 0x0050   (0x0010)  
	int32_t                                            SelectedTOPIndex;                                           // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FString                                            ParentName;                                                 // 0x0068   (0x0010)  
	bool                                               bShowResults;                                               // 0x0078   (0x0001)  
	bool                                               bAutoLoadResults;                                           // 0x0079   (0x0001)  
	unsigned char                                      UnknownData02_7[0x1E];                                      // 0x007A   (0x001E)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniPDGAssetLink
/// Size: 0x0130 (304 bytes) (0x000028 - 0x000130) align 8 MaxSize: 0x0130
class UHoudiniPDGAssetLink : public UObject
{ 
public:
	FString                                            AssetName;                                                  // 0x0028   (0x0010)  
	FString                                            AssetNodePath;                                              // 0x0038   (0x0010)  
	int32_t                                            AssetId;                                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<class UTOPNetwork*>                         AllTOPNetworks;                                             // 0x0050   (0x0010)  
	int32_t                                            SelectedTOPNetworkIndex;                                    // 0x0060   (0x0004)  
	EPDGLinkState                                      LinkState;                                                  // 0x0064   (0x0001)  
	bool                                               bAutoCook;                                                  // 0x0065   (0x0001)  
	bool                                               bUseTOPNodeFilter;                                          // 0x0066   (0x0001)  
	bool                                               bUseTOPOutputFilter;                                        // 0x0067   (0x0001)  
	FString                                            TOPNodeFilter;                                              // 0x0068   (0x0010)  
	FString                                            TOPOutputFilter;                                            // 0x0078   (0x0010)  
	int32_t                                            NumWorkitems;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FAggregatedWorkItemTally                           WorkItemTally;                                              // 0x0090   (0x0028)  
	FString                                            OutputCachePath;                                            // 0x00B8   (0x0010)  
	bool                                               bNeedsUIRefresh;                                            // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	class AActor*                                      OutputParentActor;                                          // 0x00D0   (0x0008)  
	FDirectoryPath                                     BakeFolder;                                                 // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x48];                                      // 0x00E8   (0x0048)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniRuntimeSettings
/// Size: 0x02F0 (752 bytes) (0x000028 - 0x0002F0) align 8 MaxSize: 0x02F0
class UHoudiniRuntimeSettings : public UObject
{ 
public:
	TEnumAsByte<EHoudiniRuntimeSettingsSessionType>    SessionType;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            ServerHost;                                                 // 0x0030   (0x0010)  
	int32_t                                            ServerPort;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            ServerPipeName;                                             // 0x0048   (0x0010)  
	bool                                               bStartAutomaticServer;                                      // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              AutomaticServerTimeout;                                     // 0x005C   (0x0004)  
	bool                                               bSyncWithHoudiniCook;                                       // 0x0060   (0x0001)  
	bool                                               bCookUsingHoudiniTime;                                      // 0x0061   (0x0001)  
	bool                                               bSyncViewport;                                              // 0x0062   (0x0001)  
	bool                                               bSyncHoudiniViewport;                                       // 0x0063   (0x0001)  
	bool                                               bSyncUnrealViewport;                                        // 0x0064   (0x0001)  
	bool                                               bShowMultiAssetDialog;                                      // 0x0065   (0x0001)  
	bool                                               bPreferHdaMemoryCopyOverHdaSourceFile;                      // 0x0066   (0x0001)  
	bool                                               bPauseCookingOnStart;                                       // 0x0067   (0x0001)  
	bool                                               bDisplaySlateCookingNotifications;                          // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            DefaultTemporaryCookFolder;                                 // 0x0070   (0x0010)  
	FString                                            DefaultBakeFolder;                                          // 0x0080   (0x0010)  
	bool                                               MarshallingLandscapesUseDefaultUnrealScaling;               // 0x0090   (0x0001)  
	bool                                               MarshallingLandscapesUseFullResolution;                     // 0x0091   (0x0001)  
	bool                                               MarshallingLandscapesForceMinMaxValues;                     // 0x0092   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0093   (0x0001)  MISSED
	float                                              MarshallingLandscapesForcedMinValue;                        // 0x0094   (0x0004)  
	float                                              MarshallingLandscapesForcedMaxValue;                        // 0x0098   (0x0004)  
	bool                                               bAddRotAndScaleAttributesOnCurves;                          // 0x009C   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	float                                              MarshallingSplineResolution;                                // 0x00A0   (0x0004)  
	bool                                               bEnableProxyStaticMesh;                                     // 0x00A4   (0x0001)  
	bool                                               bShowDefaultMesh;                                           // 0x00A5   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementByTimer;                    // 0x00A6   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x00A7   (0x0001)  MISSED
	float                                              ProxyMeshAutoRefineTimeoutSeconds;                          // 0x00A8   (0x0004)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreSaveWorld;             // 0x00AC   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreBeginPIE;              // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
	bool                                               bDoubleSidedGeometry : 1;                                   // 0x00B0:0 (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x00B8   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x00C0   (0x0158)  
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                         // 0x0218   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x0219   (0x0003)  MISSED
	int32_t                                            LightMapResolution;                                         // 0x021C   (0x0004)  
	float                                              LpvBiasMultiplier;                                          // 0x0220   (0x0004)  
	float                                              GeneratedDistanceFieldResolutionScale;                      // 0x0224   (0x0004)  
	FWalkableSlopeOverride                             WalkableSlopeOverride;                                      // 0x0228   (0x0010)  
	int32_t                                            LightMapCoordinateIndex;                                    // 0x0238   (0x0004)  
	bool                                               bUseMaximumStreamingTexelRatio : 1;                         // 0x023C:0 (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x023D   (0x0003)  MISSED
	float                                              StreamingDistanceMultiplier;                                // 0x0240   (0x0004)  
	unsigned char                                      UnknownData11_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	class UFoliageType_InstancedStaticMesh*            FoliageDefaultSettings;                                     // 0x0248   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0250   (0x0010)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x0260   (0x0001)  
	unsigned char                                      UnknownData12_6[0x3];                                       // 0x0261   (0x0003)  MISSED
	int32_t                                            SrcLightmapIndex;                                           // 0x0264   (0x0004)  
	int32_t                                            DstLightmapIndex;                                           // 0x0268   (0x0004)  
	int32_t                                            MinLightmapResolution;                                      // 0x026C   (0x0004)  
	bool                                               bRemoveDegenerates;                                         // 0x0270   (0x0001)  
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  GenerateLightmapUVsFlag;                                    // 0x0271   (0x0001)  
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeNormalsFlag;                                       // 0x0272   (0x0001)  
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeTangentsFlag;                                      // 0x0273   (0x0001)  
	bool                                               bUseMikkTSpace;                                             // 0x0274   (0x0001)  
	bool                                               bBuildAdjacencyBuffer;                                      // 0x0275   (0x0001)  
	bool                                               bComputeWeightedNormals : 1;                                // 0x0276:0 (0x0001)  
	bool                                               bBuildReversedIndexBuffer : 1;                              // 0x0276:1 (0x0001)  
	bool                                               bUseHighPrecisionTangentBasis : 1;                          // 0x0276:2 (0x0001)  
	unsigned char                                      UnknownData13_5[0x1];                                       // 0x0277   (0x0001)  MISSED
	float                                              DistanceFieldResolutionScale;                               // 0x0278   (0x0004)  
	bool                                               bGenerateDistanceFieldAsIfTwoSided : 1;                     // 0x027C:0 (0x0001)  
	bool                                               bSupportFaceRemap : 1;                                      // 0x027C:1 (0x0001)  
	bool                                               bPDGAsyncCommandletImportEnabled;                           // 0x027D   (0x0001)  
	bool                                               bEnableBackwardCompatibility;                               // 0x027E   (0x0001)  
	bool                                               bAutomaticLegacyHDARebuild;                                 // 0x027F   (0x0001)  
	bool                                               bUseCustomHoudiniLocation;                                  // 0x0280   (0x0001)  
	unsigned char                                      UnknownData14_6[0x7];                                       // 0x0281   (0x0007)  MISSED
	FDirectoryPath                                     CustomHoudiniLocation;                                      // 0x0288   (0x0010)  
	int32_t                                            CookingThreadStackSize;                                     // 0x0298   (0x0004)  
	unsigned char                                      UnknownData15_6[0x4];                                       // 0x029C   (0x0004)  MISSED
	FString                                            HoudiniEnvironmentFiles;                                    // 0x02A0   (0x0010)  
	FString                                            OtlSearchPath;                                              // 0x02B0   (0x0010)  
	FString                                            DsoSearchPath;                                              // 0x02C0   (0x0010)  
	FString                                            ImageDsoSearchPath;                                         // 0x02D0   (0x0010)  
	FString                                            AudioDsoSearchPath;                                         // 0x02E0   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniSplineComponent
/// Size: 0x0490 (1168 bytes) (0x0001F8 - 0x000490) align 16 MaxSize: 0x0490
class UHoudiniSplineComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x01F8   (0x0008)  MISSED
	TArray<FTransform>                                 CurvePoints;                                                // 0x0200   (0x0010)  
	TArray<FVector>                                    DisplayPoints;                                              // 0x0210   (0x0010)  
	TArray<int32_t>                                    DisplayPointIndexDivider;                                   // 0x0220   (0x0010)  
	FString                                            HoudiniSplineName;                                          // 0x0230   (0x0010)  
	bool                                               bClosed;                                                    // 0x0240   (0x0001)  
	bool                                               bReversed;                                                  // 0x0241   (0x0001)  
	bool                                               bIsHoudiniSplineVisible;                                    // 0x0242   (0x0001)  
	EHoudiniCurveType                                  CurveType;                                                  // 0x0243   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x0244   (0x0001)  
	bool                                               bIsOutputCurve;                                             // 0x0245   (0x0001)  
	bool                                               bCookOnCurveChanged;                                        // 0x0246   (0x0001)  
	unsigned char                                      UnknownData01_6[0x229];                                     // 0x0247   (0x0229)  MISSED
	bool                                               bHasChanged;                                                // 0x0470   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x0471   (0x0001)  
	bool                                               bIsInputCurve;                                              // 0x0472   (0x0001)  
	bool                                               bIsEditableOutputCurve;                                     // 0x0473   (0x0001)  
	int32_t                                            NodeId;                                                     // 0x0474   (0x0004)  
	FString                                            PartName;                                                   // 0x0478   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0488   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniStaticMesh
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000C8) align 8 MaxSize: 0x00C8
class UHoudiniStaticMesh : public UObject
{ 
public:
	bool                                               bHasNormals;                                                // 0x0028   (0x0001)  
	bool                                               bHasTangents;                                               // 0x0029   (0x0001)  
	bool                                               bHasColors;                                                 // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002B   (0x0001)  MISSED
	uint32_t                                           NumUVLayers;                                                // 0x002C   (0x0004)  
	bool                                               bHasPerFaceMaterials;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FVector>                                    VertexPositions;                                            // 0x0038   (0x0010)  
	TArray<FIntVector>                                 TriangleIndices;                                            // 0x0048   (0x0010)  
	TArray<FColor>                                     VertexInstanceColors;                                       // 0x0058   (0x0010)  
	TArray<FVector>                                    VertexInstanceNormals;                                      // 0x0068   (0x0010)  
	TArray<FVector>                                    VertexInstanceUTangents;                                    // 0x0078   (0x0010)  
	TArray<FVector>                                    VertexInstanceVTangents;                                    // 0x0088   (0x0010)  
	TArray<FVector2D>                                  VertexInstanceUVs;                                          // 0x0098   (0x0010)  
	TArray<int32_t>                                    MaterialIDsPerTriangle;                                     // 0x00A8   (0x0010)  
	TArray<FStaticMaterial>                            StaticMaterials;                                            // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
	void SetVertexPosition(uint32_t InVertexIndex, FVector& InPosition) // [0x1181e30] Final|Native|Public|HasOutParms|HasDefaults 
	{
		typedef void (*FuncPtr)(uint32_t, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InVertexIndex, InPosition);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
	void SetTriangleVertexVTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InVTangent) // [0x1181d10] Final|Native|Public|HasOutParms|HasDefaults 
	{
		typedef void (*FuncPtr)(uint32_t, char, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InTriangleIndex, InTriangleVertexIndex, InVTangent);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
	void SetTriangleVertexUV(uint32_t InTriangleIndex, char InTriangleVertexIndex, char InUVLayer, FVector2D& InUV) // [0x1181bb0] Final|Native|Public|HasOutParms|HasDefaults 
	{
		typedef void (*FuncPtr)(uint32_t, char, char, FVector2D&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InTriangleIndex, InTriangleVertexIndex, InUVLayer, InUV);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
	void SetTriangleVertexUTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InUTangent) // [0x1181a90] Final|Native|Public|HasOutParms|HasDefaults 
	{
		typedef void (*FuncPtr)(uint32_t, char, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(InTriangleIndex, InTriangleVertexIndex, InUTangent);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
	void SetTriangleVertexNormal(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InNormal) // [0x1181970] Final|Native|Public|HasOutParms|HasDefaults 
	{
		typedef void (*FuncPtr)(uint32_t, char, FVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(InTriangleIndex, InTriangleVertexIndex, InNormal);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
	void SetTriangleVertexIndices(uint32_t InTriangleIndex, FIntVector& InTriangleVertexIndices) // [0x11818a0] Final|Native|Public|HasOutParms|HasDefaults 
	{
		typedef void (*FuncPtr)(uint32_t, FIntVector&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(InTriangleIndex, InTriangleVertexIndices);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
	void SetTriangleVertexColor(uint32_t InTriangleIndex, char InTriangleVertexIndex, FColor& InColor) // [0x1181780] Final|Native|Public|HasOutParms|HasDefaults 
	{
		typedef void (*FuncPtr)(uint32_t, char, FColor&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(InTriangleIndex, InTriangleVertexIndex, InColor);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
	void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID) // [0x11816b0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(uint32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(InTriangleIndex, InMaterialID);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
	void SetStaticMaterial(uint32_t InMaterialIndex, FStaticMaterial& InStaticMaterial) // [0x11815a0] Final|Native|Public|HasOutParms 
	{
		typedef void (*FuncPtr)(uint32_t, FStaticMaterial&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(InMaterialIndex, InStaticMaterial);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
	void SetNumUVLayers(uint32_t InNumUVLayers) // [0x1181510] Final|Native|Public  
	{
		typedef void (*FuncPtr)(uint32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(InNumUVLayers);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
	void SetNumStaticMaterials(uint32_t InNumStaticMaterials) // [0x1181480] Final|Native|Public  
	{
		typedef void (*FuncPtr)(uint32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(InNumStaticMaterials);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
	void SetHasTangents(bool bInHasTangents) // [0x11812d0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(bInHasTangents);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials) // [0x1181240] Final|Native|Public  
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(bInHasPerFaceMaterials);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
	void SetHasNormals(bool bInHasNormals) // [0x11811b0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(bInHasNormals);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
	void SetHasColors(bool bInHasColors) // [0x1181120] Final|Native|Public  
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(bInHasColors);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
	void Optimize() // [0x1181100] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
	bool IsValid(bool bInSkipVertexIndicesCheck) // [0x1181040] Final|Native|Public|Const 
	{
		typedef bool (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(bInSkipVertexIndicesCheck);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
	void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials) // [0x1180db0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(uint32_t, uint32_t, uint32_t, uint32_t, bool, bool, bool, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		func(InNumVertices, InNumTriangles, InNumUVLayers, InInitialNumStaticMaterials, bInHasNormals, bInHasTangents, bInHasColors, bInHasPerFaceMaterials);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
	bool HasTangents() // [0x1180d90] Final|Native|Public|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
	bool HasPerFaceMaterials() // [0x1180d70] Final|Native|Public|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
	bool HasNormals() // [0x1180d50] Final|Native|Public|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
	bool HasColors() // [0x1180d30] Final|Native|Public|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
	// TArray<FVector> GetVertexPositions();                                                                                    // [0x1180d00] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
	// TArray<FVector> GetVertexInstanceVTangents();                                                                            // [0x1180cd0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
	// TArray<FVector2D> GetVertexInstanceUVs();                                                                                // [0x1180c40] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
	// TArray<FVector> GetVertexInstanceUTangents();                                                                            // [0x1180c10] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
	// TArray<FVector> GetVertexInstanceNormals();                                                                              // [0x1180be0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
	// TArray<FColor> GetVertexInstanceColors();                                                                                // [0x1180b50] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
	// TArray<FIntVector> GetTriangleIndices();                                                                                 // [0x1180ac0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
	// TArray<FStaticMaterial> GetStaticMaterials();                                                                            // [0x1180a30] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
	uint32_t GetNumVertices() // [0x1180a10] Final|Native|Public|Const 
	{
		typedef uint32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[30]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
	uint32_t GetNumVertexInstances() // [0x11809f0] Final|Native|Public|Const 
	{
		typedef uint32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[31]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
	uint32_t GetNumUVLayers() // [0x11809d0] Final|Native|Public|Const 
	{
		typedef uint32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
	uint32_t GetNumTriangles() // [0x11809b0] Final|Native|Public|Const 
	{
		typedef uint32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
	uint32_t GetNumStaticMaterials() // [0x1180990] Final|Native|Public|Const 
	{
		typedef uint32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
	int32_t GetMaterialIndex(FName InMaterialSlotName) // [0x11808d0] Final|Native|Public|Const 
	{
		typedef int32_t (*FuncPtr)(FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		return func(InMaterialSlotName);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
	TArray<int32_t> GetMaterialIDsPerTriangle() // [0x11808a0] Final|Native|Public|Const 
	{
		typedef TArray<int32_t> (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
	UMaterialInterface* GetMaterial(int32_t InMaterialIndex) // [0x1180800] Final|Native|Public  
	{
		typedef class UMaterialInterface* (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		return func(InMaterialIndex);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
	FBox CalcBounds() // [0x11807b0] Final|Native|Public|HasDefaults|Const 
	{
		typedef FBox (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
	uint32_t AddStaticMaterial(FStaticMaterial& InStaticMaterial) // [0x11806a0] Final|Native|Public|HasOutParms 
	{
		typedef uint32_t (*FuncPtr)(FStaticMaterial&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[39]);
		return func(InStaticMaterial);
	}
};

/// Class /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent
/// Size: 0x04B0 (1200 bytes) (0x000488 - 0x0004B0) align 16 MaxSize: 0x04B0
class UHoudiniStaticMeshComponent : public UMeshComponent
{ 
public:
	class UHoudiniStaticMesh*                          Mesh;                                                       // 0x0488   (0x0008)  
	FBox                                               LocalBounds;                                                // 0x0490   (0x001C)  
	bool                                               bHoudiniIconVisible;                                        // 0x04AC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x04AD   (0x0003)  MISSED


	/// Functions
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
	void SetMesh(UHoudiniStaticMesh* InMesh) // [0x11813f0] Final|Native|Public  
	{
		typedef void (*FuncPtr)(UHoudiniStaticMesh*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InMesh);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible) // [0x1181360] Final|Native|Public  
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(bInHoudiniIconVisible);
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
	void NotifyMeshUpdated() // [0x11810e0] Final|Native|Public  
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
	bool IsHoudiniIconVisible() // [0x1181020] Final|Native|Public|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
	UHoudiniStaticMesh* GetMesh() // [0x1180970] Final|Native|Public  
	{
		typedef class UHoudiniStaticMesh* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetStateEvents
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHoudiniAssetStateEvents : public UInterface
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UHoudiniAsset) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(AHoudiniAssetActor) == 0x0230); // 560 bytes (0x000228 - 0x000230)
static_assert(sizeof(FHoudiniStaticMeshGenerationProperties) == 0x01A8); // 424 bytes (0x000000 - 0x0001A8)
static_assert(sizeof(FHoudiniBakedOutputObjectIdentifier) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHoudiniBakedOutputObject) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FHoudiniBakedOutput) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UHoudiniAssetComponent) == 0x08A0); // 2208 bytes (0x000460 - 0x0008A0)
static_assert(sizeof(FHoudiniOutputObjectIdentifier) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UHoudiniAssetBlueprintComponent) == 0x0990); // 2448 bytes (0x0008A0 - 0x000990)
static_assert(sizeof(UHoudiniAssetParameter) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UHoudiniAssetParameterButton) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UHoudiniAssetParameterChoice) == 0x00B8); // 184 bytes (0x000080 - 0x0000B8)
static_assert(sizeof(UHoudiniAssetParameterColor) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UHoudiniAssetParameterFile) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(UHoudiniAssetParameterFloat) == 0x00B8); // 184 bytes (0x000080 - 0x0000B8)
static_assert(sizeof(UHoudiniAssetParameterFolder) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UHoudiniAssetParameterFolderList) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UHoudiniAssetParameterInt) == 0x00B0); // 176 bytes (0x000080 - 0x0000B0)
static_assert(sizeof(UHoudiniAssetParameterLabel) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UHoudiniAssetParameterMultiparm) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UHoudiniAssetParameterRamp) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(sizeof(UHoudiniAssetParameterSeparator) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UHoudiniAssetParameterString) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UHoudiniAssetParameterToggle) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UHoudiniAssetComponentMaterials_V1) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UHoudiniHandleComponent_V1) == 0x0290); // 656 bytes (0x0001F8 - 0x000290)
static_assert(sizeof(UHoudiniSplineComponent_V1) == 0x02F0); // 752 bytes (0x0001F8 - 0x0002F0)
static_assert(sizeof(UHoudiniAssetInput) == 0x01A0); // 416 bytes (0x000080 - 0x0001A0)
static_assert(sizeof(UHoudiniAssetInstanceInput) == 0x0160); // 352 bytes (0x000080 - 0x000160)
static_assert(sizeof(UHoudiniAssetInstanceInputField) == 0x0190); // 400 bytes (0x000028 - 0x000190)
static_assert(sizeof(UHoudiniAssetComponent_V1) == 0x0980); // 2432 bytes (0x000460 - 0x000980)
static_assert(sizeof(UHoudiniInstancedActorComponent_V1) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(UHoudiniMeshSplitInstancerComponent_V1) == 0x0220); // 544 bytes (0x0001F8 - 0x000220)
static_assert(sizeof(UHoudiniEngineCopyPropertiesInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHoudiniHandleParameter) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UHoudiniHandleComponent) == 0x0230); // 560 bytes (0x0001F8 - 0x000230)
static_assert(sizeof(UHoudiniInput) == 0x0158); // 344 bytes (0x000028 - 0x000158)
static_assert(sizeof(UHoudiniInputObject) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UHoudiniInputStaticMesh) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UHoudiniInputSkeletalMesh) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UHoudiniInputSceneComponent) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(UHoudiniInputMeshComponent) == 0x0118); // 280 bytes (0x0000E0 - 0x000118)
static_assert(sizeof(UHoudiniInputInstancedMeshComponent) == 0x0130); // 304 bytes (0x000118 - 0x000130)
static_assert(sizeof(UHoudiniInputSplineComponent) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(UHoudiniInputHoudiniSplineComponent) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UHoudiniInputCameraComponent) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(UHoudiniInputHoudiniAsset) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UHoudiniInputActor) == 0x0110); // 272 bytes (0x0000A8 - 0x000110)
static_assert(sizeof(UHoudiniInputLandscape) == 0x0140); // 320 bytes (0x000110 - 0x000140)
static_assert(sizeof(FHoudiniBrushInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UHoudiniInputBrush) == 0x0130); // 304 bytes (0x000110 - 0x000130)
static_assert(sizeof(UHoudiniInputDataTable) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UHoudiniInputFoliageType_InstancedStaticMesh) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UHoudiniInstancedActorComponent) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(UHoudiniMeshSplitInstancerComponent) == 0x0220); // 544 bytes (0x0001F8 - 0x000220)
static_assert(sizeof(UHoudiniLandscapePtr) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UHoudiniLandscapeEditLayer) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FHoudiniMeshSocket) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FHoudiniGeoPartObject) == 0x0220); // 544 bytes (0x000000 - 0x000220)
static_assert(sizeof(FHoudiniCurveOutputProperties) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHoudiniOutputObject) == 0x00E8); // 232 bytes (0x000000 - 0x0000E8)
static_assert(sizeof(FHoudiniInstancedOutput) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(UHoudiniOutput) == 0x01B0); // 432 bytes (0x000028 - 0x0001B0)
static_assert(sizeof(UHoudiniParameter) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UHoudiniParameterButton) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UHoudiniParameterButtonStrip) == 0x0130); // 304 bytes (0x000108 - 0x000130)
static_assert(sizeof(UHoudiniParameterChoice) == 0x0168); // 360 bytes (0x000108 - 0x000168)
static_assert(sizeof(UHoudiniParameterColor) == 0x0130); // 304 bytes (0x000108 - 0x000130)
static_assert(sizeof(UHoudiniParameterFile) == 0x0140); // 320 bytes (0x000108 - 0x000140)
static_assert(sizeof(UHoudiniParameterFloat) == 0x0158); // 344 bytes (0x000108 - 0x000158)
static_assert(sizeof(UHoudiniParameterFolder) == 0x0118); // 280 bytes (0x000108 - 0x000118)
static_assert(sizeof(UHoudiniParameterFolderList) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(UHoudiniParameterInt) == 0x0150); // 336 bytes (0x000108 - 0x000150)
static_assert(sizeof(UHoudiniParameterLabel) == 0x0118); // 280 bytes (0x000108 - 0x000118)
static_assert(sizeof(UHoudiniParameterMultiParm) == 0x0150); // 336 bytes (0x000108 - 0x000150)
static_assert(sizeof(UHoudiniParameterOperatorPath) == 0x0110); // 272 bytes (0x000108 - 0x000110)
static_assert(sizeof(UHoudiniParameterRampModificationEvent) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UHoudiniParameterRampFloatPoint) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UHoudiniParameterRampColorPoint) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UHoudiniParameterRampFloat) == 0x01B8); // 440 bytes (0x000150 - 0x0001B8)
static_assert(sizeof(UHoudiniParameterRampColor) == 0x01C0); // 448 bytes (0x000150 - 0x0001C0)
static_assert(sizeof(UHoudiniParameterSeparator) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UHoudiniParameterString) == 0x0140); // 320 bytes (0x000108 - 0x000140)
static_assert(sizeof(UHoudiniParameterToggle) == 0x0128); // 296 bytes (0x000108 - 0x000128)
static_assert(sizeof(FOutputActorOwner) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTOPWorkResultObject) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FTOPWorkResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHoudiniPDGWorkResultObjectBakedOutput) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWorkItemTallyBase) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWorkItemTally) == 0x0238); // 568 bytes (0x000008 - 0x000238)
static_assert(sizeof(FAggregatedWorkItemTally) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(UTOPNode) == 0x0420); // 1056 bytes (0x000028 - 0x000420)
static_assert(sizeof(UTOPNetwork) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UHoudiniPDGAssetLink) == 0x0130); // 304 bytes (0x000028 - 0x000130)
static_assert(sizeof(UHoudiniRuntimeSettings) == 0x02F0); // 752 bytes (0x000028 - 0x0002F0)
static_assert(sizeof(UHoudiniSplineComponent) == 0x0490); // 1168 bytes (0x0001F8 - 0x000490)
static_assert(sizeof(UHoudiniStaticMesh) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UHoudiniStaticMeshComponent) == 0x04B0); // 1200 bytes (0x000488 - 0x0004B0)
static_assert(sizeof(UHoudiniAssetStateEvents) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FHoudiniAssetBlueprintOutput) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FHoudiniAssetBlueprintInstanceData) == 0x0120); // 288 bytes (0x000068 - 0x000120)
static_assert(sizeof(FHoudiniGenericAttribute) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FHoudiniCurveInfo) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FHoudiniVolumeInfo) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FHoudiniPartInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FHoudiniGeoInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FHoudiniObjectInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FHoudiniSplineComponentInstanceData) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(offsetof(UHoudiniAsset, AssetFileName) == 0x0028);
static_assert(offsetof(UHoudiniAsset, AssetBytes) == 0x0038);
static_assert(offsetof(AHoudiniAssetActor, HoudiniAssetComponent) == 0x0228);
static_assert(offsetof(FHoudiniStaticMeshGenerationProperties, GeneratedPhysMaterial) == 0x0008);
static_assert(offsetof(FHoudiniStaticMeshGenerationProperties, DefaultBodyInstance) == 0x0010);
static_assert(offsetof(FHoudiniStaticMeshGenerationProperties, GeneratedCollisionTraceFlag) == 0x0168);
static_assert(offsetof(FHoudiniStaticMeshGenerationProperties, GeneratedWalkableSlopeOverride) == 0x0174);
static_assert(offsetof(FHoudiniStaticMeshGenerationProperties, GeneratedFoliageDefaultSettings) == 0x0190);
static_assert(offsetof(FHoudiniStaticMeshGenerationProperties, GeneratedAssetUserData) == 0x0198);
static_assert(offsetof(FHoudiniBakedOutputObjectIdentifier, SplitIdentifier) == 0x0008);
static_assert(offsetof(FHoudiniBakedOutputObject, Actor) == 0x0000);
static_assert(offsetof(FHoudiniBakedOutputObject, Blueprint) == 0x0010);
static_assert(offsetof(FHoudiniBakedOutputObject, ActorBakeName) == 0x0020);
static_assert(offsetof(FHoudiniBakedOutputObject, BakedObject) == 0x0028);
static_assert(offsetof(FHoudiniBakedOutputObject, BakedComponent) == 0x0038);
static_assert(offsetof(FHoudiniBakedOutputObject, InstancedActors) == 0x0048);
static_assert(offsetof(FHoudiniBakedOutputObject, InstancedComponents) == 0x0058);
static_assert(offsetof(FHoudiniBakedOutput, BakedOutputObjects) == 0x0000);
static_assert(offsetof(UHoudiniAssetComponent, HoudiniAsset) == 0x0468);
static_assert(offsetof(UHoudiniAssetComponent, TemporaryCookFolder) == 0x0478);
static_assert(offsetof(UHoudiniAssetComponent, BakeFolder) == 0x0488);
static_assert(offsetof(UHoudiniAssetComponent, StaticMeshMethod) == 0x0498);
static_assert(offsetof(UHoudiniAssetComponent, StaticMeshGenerationProperties) == 0x04A0);
static_assert(offsetof(UHoudiniAssetComponent, StaticMeshBuildSettings) == 0x0648);
static_assert(offsetof(UHoudiniAssetComponent, ComponentGUID) == 0x06D8);
static_assert(offsetof(UHoudiniAssetComponent, HapiGUID) == 0x06E8);
static_assert(offsetof(UHoudiniAssetComponent, HapiAssetName) == 0x06F8);
static_assert(offsetof(UHoudiniAssetComponent, AssetState) == 0x0708);
static_assert(offsetof(UHoudiniAssetComponent, DebugLastAssetState) == 0x0709);
static_assert(offsetof(UHoudiniAssetComponent, AssetStateResult) == 0x070A);
static_assert(offsetof(UHoudiniAssetComponent, Parameters) == 0x0720);
static_assert(offsetof(UHoudiniAssetComponent, Inputs) == 0x0730);
static_assert(offsetof(UHoudiniAssetComponent, Outputs) == 0x0740);
static_assert(offsetof(UHoudiniAssetComponent, BakedOutputs) == 0x0750);
static_assert(offsetof(UHoudiniAssetComponent, HandleComponents) == 0x0770);
static_assert(offsetof(UHoudiniAssetComponent, PDGAssetLink) == 0x0788);
static_assert(offsetof(UHoudiniAssetComponent, RefineMeshesTimer) == 0x0790);
static_assert(offsetof(UHoudiniAssetComponent, InputPresets) == 0x07B8);
static_assert(offsetof(FHoudiniOutputObjectIdentifier, SplitIdentifier) == 0x0010);
static_assert(offsetof(FHoudiniOutputObjectIdentifier, PartName) == 0x0020);
static_assert(offsetof(UHoudiniAssetBlueprintComponent, CachedOutputNodes) == 0x08F0);
static_assert(offsetof(UHoudiniAssetBlueprintComponent, CachedInputNodes) == 0x0940);
static_assert(offsetof(UHoudiniAssetComponent_V1, GeneratedPhysMaterial) == 0x0468);
static_assert(offsetof(UHoudiniAssetComponent_V1, DefaultBodyInstance) == 0x0470);
static_assert(offsetof(UHoudiniAssetComponent_V1, GeneratedCollisionTraceFlag) == 0x05C8);
static_assert(offsetof(UHoudiniAssetComponent_V1, GeneratedWalkableSlopeOverride) == 0x05D8);
static_assert(offsetof(UHoudiniAssetComponent_V1, GeneratedFoliageDefaultSettings) == 0x05F8);
static_assert(offsetof(UHoudiniAssetComponent_V1, GeneratedAssetUserData) == 0x0600);
static_assert(offsetof(UHoudiniAssetComponent_V1, BakeFolder) == 0x0610);
static_assert(offsetof(UHoudiniAssetComponent_V1, TempCookFolder) == 0x0628);
static_assert(offsetof(UHoudiniHandleParameter, AssetParameter) == 0x0028);
static_assert(offsetof(UHoudiniHandleComponent, XformParms) == 0x01F8);
static_assert(offsetof(UHoudiniHandleComponent, RSTParm) == 0x0208);
static_assert(offsetof(UHoudiniHandleComponent, RotOrderParm) == 0x0210);
static_assert(offsetof(UHoudiniHandleComponent, HandleType) == 0x0218);
static_assert(offsetof(UHoudiniHandleComponent, HandleName) == 0x0220);
static_assert(offsetof(UHoudiniInput, Name) == 0x0028);
static_assert(offsetof(UHoudiniInput, Label) == 0x0038);
static_assert(offsetof(UHoudiniInput, Type) == 0x0048);
static_assert(offsetof(UHoudiniInput, PreviousType) == 0x0049);
static_assert(offsetof(UHoudiniInput, CreatedDataNodeIds) == 0x0060);
static_assert(offsetof(UHoudiniInput, Help) == 0x0078);
static_assert(offsetof(UHoudiniInput, KeepWorldTransform) == 0x0088);
static_assert(offsetof(UHoudiniInput, GeometryInputObjects) == 0x0090);
static_assert(offsetof(UHoudiniInput, AssetInputObjects) == 0x00A8);
static_assert(offsetof(UHoudiniInput, CurveInputObjects) == 0x00C0);
static_assert(offsetof(UHoudiniInput, LandscapeInputObjects) == 0x00D8);
static_assert(offsetof(UHoudiniInput, WorldInputObjects) == 0x00F0);
static_assert(offsetof(UHoudiniInput, WorldInputBoundSelectorObjects) == 0x0100);
static_assert(offsetof(UHoudiniInput, SkeletalInputObjects) == 0x0118);
static_assert(offsetof(UHoudiniInput, LastInsertedInputs) == 0x0128);
static_assert(offsetof(UHoudiniInput, LastUndoDeletedInputs) == 0x0138);
static_assert(offsetof(UHoudiniInput, LandscapeExportType) == 0x0149);
static_assert(offsetof(UHoudiniInputObject, InputObject) == 0x0028);
static_assert(offsetof(UHoudiniInputObject, Transform) == 0x0050);
static_assert(offsetof(UHoudiniInputObject, Type) == 0x0080);
static_assert(offsetof(UHoudiniInputObject, Guid) == 0x008C);
static_assert(offsetof(UHoudiniInputStaticMesh, BlueprintStaticMeshes) == 0x00A8);
static_assert(offsetof(UHoudiniInputSceneComponent, ActorTransform) == 0x00B0);
static_assert(offsetof(UHoudiniInputMeshComponent, StaticMesh) == 0x00E0);
static_assert(offsetof(UHoudiniInputMeshComponent, MeshComponentsMaterials) == 0x0108);
static_assert(offsetof(UHoudiniInputInstancedMeshComponent, InstanceTransforms) == 0x0118);
static_assert(offsetof(UHoudiniInputSplineComponent, SplineControlPoints) == 0x00F0);
static_assert(offsetof(UHoudiniInputHoudiniSplineComponent, CurveType) == 0x00A8);
static_assert(offsetof(UHoudiniInputHoudiniSplineComponent, CurveMethod) == 0x00A9);
static_assert(offsetof(UHoudiniInputHoudiniSplineComponent, CachedComponent) == 0x00B0);
static_assert(offsetof(UHoudiniInputActor, ActorComponents) == 0x00A8);
static_assert(offsetof(UHoudiniInputLandscape, CachedInputLandscapeTraqnsform) == 0x0110);
static_assert(offsetof(FHoudiniBrushInfo, BrushActor) == 0x0000);
static_assert(offsetof(FHoudiniBrushInfo, CachedTransform) == 0x0010);
static_assert(offsetof(FHoudiniBrushInfo, CachedOrigin) == 0x0040);
static_assert(offsetof(FHoudiniBrushInfo, CachedExtent) == 0x004C);
static_assert(offsetof(FHoudiniBrushInfo, CachedBrushType) == 0x0058);
static_assert(offsetof(UHoudiniInputBrush, BrushesInfo) == 0x0110);
static_assert(offsetof(UHoudiniInputBrush, CombinedModel) == 0x0120);
static_assert(offsetof(UHoudiniInputBrush, CachedInputBrushType) == 0x0129);
static_assert(offsetof(UHoudiniInstancedActorComponent, InstancedObject) == 0x01F8);
static_assert(offsetof(UHoudiniInstancedActorComponent, InstancedActors) == 0x0200);
static_assert(offsetof(UHoudiniMeshSplitInstancerComponent, Instances) == 0x01F8);
static_assert(offsetof(UHoudiniMeshSplitInstancerComponent, OverrideMaterials) == 0x0208);
static_assert(offsetof(UHoudiniMeshSplitInstancerComponent, InstancedMesh) == 0x0218);
static_assert(offsetof(UHoudiniLandscapePtr, LandscapeSoftPtr) == 0x0028);
static_assert(offsetof(UHoudiniLandscapePtr, BakeType) == 0x0050);
static_assert(offsetof(UHoudiniLandscapeEditLayer, LandscapeSoftPtr) == 0x0028);
static_assert(offsetof(UHoudiniLandscapeEditLayer, LayerName) == 0x0050);
static_assert(offsetof(FHoudiniGeoPartObject, AssetName) == 0x0008);
static_assert(offsetof(FHoudiniGeoPartObject, ObjectName) == 0x0020);
static_assert(offsetof(FHoudiniGeoPartObject, PartName) == 0x0038);
static_assert(offsetof(FHoudiniGeoPartObject, SplitGroups) == 0x0050);
static_assert(offsetof(FHoudiniGeoPartObject, TransformMatrix) == 0x0060);
static_assert(offsetof(FHoudiniGeoPartObject, NodePath) == 0x0090);
static_assert(offsetof(FHoudiniGeoPartObject, Type) == 0x00A0);
static_assert(offsetof(FHoudiniGeoPartObject, InstancerType) == 0x00A1);
static_assert(offsetof(FHoudiniGeoPartObject, VolumeName) == 0x00A8);
static_assert(offsetof(FHoudiniGeoPartObject, AllMeshSockets) == 0x0210);
static_assert(offsetof(FHoudiniCurveOutputProperties, CurveOutputType) == 0x0000);
static_assert(offsetof(FHoudiniCurveOutputProperties, CurveType) == 0x0009);
static_assert(offsetof(FHoudiniCurveOutputProperties, CurveMethod) == 0x000A);
static_assert(offsetof(FHoudiniOutputObject, OutputObject) == 0x0000);
static_assert(offsetof(FHoudiniOutputObject, OutputComponent) == 0x0008);
static_assert(offsetof(FHoudiniOutputObject, ProxyObject) == 0x0010);
static_assert(offsetof(FHoudiniOutputObject, ProxyComponent) == 0x0018);
static_assert(offsetof(FHoudiniOutputObject, BakeName) == 0x0028);
static_assert(offsetof(FHoudiniOutputObject, CurveOutputProperty) == 0x0038);
static_assert(offsetof(FHoudiniOutputObject, CachedAttributes) == 0x0048);
static_assert(offsetof(FHoudiniOutputObject, CachedTokens) == 0x0098);
static_assert(offsetof(FHoudiniInstancedOutput, OriginalObject) == 0x0000);
static_assert(offsetof(FHoudiniInstancedOutput, OriginalTransforms) == 0x0030);
static_assert(offsetof(FHoudiniInstancedOutput, VariationTransformOffsets) == 0x0050);
static_assert(offsetof(FHoudiniInstancedOutput, TransformVariationIndices) == 0x0060);
static_assert(offsetof(UHoudiniOutput, Type) == 0x0028);
static_assert(offsetof(UHoudiniOutput, HoudiniGeoPartObjects) == 0x0030);
static_assert(offsetof(UHoudiniOutput, OutputObjects) == 0x0040);
static_assert(offsetof(UHoudiniOutput, InstancedOutputs) == 0x0090);
static_assert(offsetof(UHoudiniOutput, AssignementMaterials) == 0x00E0);
static_assert(offsetof(UHoudiniOutput, ReplacementMaterials) == 0x0130);
static_assert(offsetof(UHoudiniOutput, HoudiniCreatedSocketActors) == 0x0188);
static_assert(offsetof(UHoudiniOutput, HoudiniAttachedSocketActors) == 0x0198);
static_assert(offsetof(UHoudiniParameter, Name) == 0x0028);
static_assert(offsetof(UHoudiniParameter, Label) == 0x0038);
static_assert(offsetof(UHoudiniParameter, ParmType) == 0x0048);
static_assert(offsetof(UHoudiniParameter, TuplePendingRevertToDefault) == 0x0070);
static_assert(offsetof(UHoudiniParameter, Help) == 0x0080);
static_assert(offsetof(UHoudiniParameter, ParamExpression) == 0x00A0);
static_assert(offsetof(UHoudiniParameter, Tags) == 0x00B0);
static_assert(offsetof(UHoudiniParameterButtonStrip, Labels) == 0x0110);
static_assert(offsetof(UHoudiniParameterButtonStrip, Values) == 0x0120);
static_assert(offsetof(UHoudiniParameterChoice, StringValue) == 0x0110);
static_assert(offsetof(UHoudiniParameterChoice, DefaultStringValue) == 0x0120);
static_assert(offsetof(UHoudiniParameterChoice, StringChoiceValues) == 0x0130);
static_assert(offsetof(UHoudiniParameterChoice, StringChoiceLabels) == 0x0140);
static_assert(offsetof(UHoudiniParameterColor, Color) == 0x0108);
static_assert(offsetof(UHoudiniParameterColor, DefaultColor) == 0x0118);
static_assert(offsetof(UHoudiniParameterFile, Values) == 0x0108);
static_assert(offsetof(UHoudiniParameterFile, DefaultValues) == 0x0118);
static_assert(offsetof(UHoudiniParameterFile, Filters) == 0x0128);
static_assert(offsetof(UHoudiniParameterFloat, Values) == 0x0108);
static_assert(offsetof(UHoudiniParameterFloat, DefaultValues) == 0x0118);
static_assert(offsetof(UHoudiniParameterFloat, Unit) == 0x0128);
static_assert(offsetof(UHoudiniParameterFolder, FolderType) == 0x0108);
static_assert(offsetof(UHoudiniParameterFolderList, TabFolders) == 0x0110);
static_assert(offsetof(UHoudiniParameterInt, Values) == 0x0108);
static_assert(offsetof(UHoudiniParameterInt, DefaultValues) == 0x0118);
static_assert(offsetof(UHoudiniParameterInt, Unit) == 0x0128);
static_assert(offsetof(UHoudiniParameterLabel, LabelStrings) == 0x0108);
static_assert(offsetof(UHoudiniParameterMultiParm, TemplateName) == 0x0110);
static_assert(offsetof(UHoudiniParameterMultiParm, MultiParmInstanceLastModifyArray) == 0x0138);
static_assert(offsetof(UHoudiniParameterOperatorPath, HoudiniInput) == 0x0108);
static_assert(offsetof(UHoudiniParameterRampModificationEvent, InsertColor) == 0x0038);
static_assert(offsetof(UHoudiniParameterRampModificationEvent, InsertInterpolation) == 0x0048);
static_assert(offsetof(UHoudiniParameterRampFloatPoint, Interpolation) == 0x0030);
static_assert(offsetof(UHoudiniParameterRampFloatPoint, PositionParentParm) == 0x0038);
static_assert(offsetof(UHoudiniParameterRampFloatPoint, ValueParentParm) == 0x0040);
static_assert(offsetof(UHoudiniParameterRampFloatPoint, InterpolationParentParm) == 0x0048);
static_assert(offsetof(UHoudiniParameterRampColorPoint, Value) == 0x002C);
static_assert(offsetof(UHoudiniParameterRampColorPoint, Interpolation) == 0x003C);
static_assert(offsetof(UHoudiniParameterRampColorPoint, PositionParentParm) == 0x0048);
static_assert(offsetof(UHoudiniParameterRampColorPoint, ValueParentParm) == 0x0050);
static_assert(offsetof(UHoudiniParameterRampColorPoint, InterpolationParentParm) == 0x0058);
static_assert(offsetof(UHoudiniParameterRampFloat, Points) == 0x0150);
static_assert(offsetof(UHoudiniParameterRampFloat, CachedPoints) == 0x0160);
static_assert(offsetof(UHoudiniParameterRampFloat, DefaultPositions) == 0x0170);
static_assert(offsetof(UHoudiniParameterRampFloat, DefaultValues) == 0x0180);
static_assert(offsetof(UHoudiniParameterRampFloat, DefaultChoices) == 0x0190);
static_assert(offsetof(UHoudiniParameterRampFloat, ModificationEvents) == 0x01A8);
static_assert(offsetof(UHoudiniParameterRampColor, Points) == 0x0150);
static_assert(offsetof(UHoudiniParameterRampColor, CachedPoints) == 0x0168);
static_assert(offsetof(UHoudiniParameterRampColor, DefaultPositions) == 0x0178);
static_assert(offsetof(UHoudiniParameterRampColor, DefaultValues) == 0x0188);
static_assert(offsetof(UHoudiniParameterRampColor, DefaultChoices) == 0x0198);
static_assert(offsetof(UHoudiniParameterRampColor, ModificationEvents) == 0x01B0);
static_assert(offsetof(UHoudiniParameterString, Values) == 0x0108);
static_assert(offsetof(UHoudiniParameterString, DefaultValues) == 0x0118);
static_assert(offsetof(UHoudiniParameterString, ChosenAssets) == 0x0128);
static_assert(offsetof(UHoudiniParameterToggle, Values) == 0x0108);
static_assert(offsetof(UHoudiniParameterToggle, DefaultValues) == 0x0118);
static_assert(offsetof(FOutputActorOwner, OutputActor) == 0x0008);
static_assert(offsetof(FTOPWorkResultObject, Name) == 0x0008);
static_assert(offsetof(FTOPWorkResultObject, FilePath) == 0x0018);
static_assert(offsetof(FTOPWorkResultObject, State) == 0x0028);
static_assert(offsetof(FTOPWorkResultObject, ResultOutputs) == 0x0030);
static_assert(offsetof(FTOPWorkResultObject, OutputObjectsToDelete) == 0x0048);
static_assert(offsetof(FTOPWorkResultObject, OutputActorOwner) == 0x0058);
static_assert(offsetof(FTOPWorkResult, ResultObjects) == 0x0008);
static_assert(offsetof(FHoudiniPDGWorkResultObjectBakedOutput, BakedOutputs) == 0x0000);
static_assert(offsetof(UTOPNode, NodeName) == 0x0030);
static_assert(offsetof(UTOPNode, NodePath) == 0x0040);
static_assert(offsetof(UTOPNode, ParentName) == 0x0050);
static_assert(offsetof(UTOPNode, WorkResultParent) == 0x0060);
static_assert(offsetof(UTOPNode, WorkResult) == 0x0068);
static_assert(offsetof(UTOPNode, NodeState) == 0x007A);
static_assert(offsetof(UTOPNode, BakedWorkResultObjectOutputs) == 0x0158);
static_assert(offsetof(UTOPNode, WorkItemTally) == 0x01A8);
static_assert(offsetof(UTOPNode, AggregatedWorkItemTally) == 0x03E0);
static_assert(offsetof(UTOPNode, OutputActorOwner) == 0x0410);
static_assert(offsetof(UTOPNetwork, NodeName) == 0x0030);
static_assert(offsetof(UTOPNetwork, NodePath) == 0x0040);
static_assert(offsetof(UTOPNetwork, AllTOPNodes) == 0x0050);
static_assert(offsetof(UTOPNetwork, ParentName) == 0x0068);
static_assert(offsetof(UHoudiniPDGAssetLink, AssetName) == 0x0028);
static_assert(offsetof(UHoudiniPDGAssetLink, AssetNodePath) == 0x0038);
static_assert(offsetof(UHoudiniPDGAssetLink, AllTOPNetworks) == 0x0050);
static_assert(offsetof(UHoudiniPDGAssetLink, LinkState) == 0x0064);
static_assert(offsetof(UHoudiniPDGAssetLink, TOPNodeFilter) == 0x0068);
static_assert(offsetof(UHoudiniPDGAssetLink, TOPOutputFilter) == 0x0078);
static_assert(offsetof(UHoudiniPDGAssetLink, WorkItemTally) == 0x0090);
static_assert(offsetof(UHoudiniPDGAssetLink, OutputCachePath) == 0x00B8);
static_assert(offsetof(UHoudiniPDGAssetLink, OutputParentActor) == 0x00D0);
static_assert(offsetof(UHoudiniPDGAssetLink, BakeFolder) == 0x00D8);
static_assert(offsetof(UHoudiniRuntimeSettings, SessionType) == 0x0028);
static_assert(offsetof(UHoudiniRuntimeSettings, ServerHost) == 0x0030);
static_assert(offsetof(UHoudiniRuntimeSettings, ServerPipeName) == 0x0048);
static_assert(offsetof(UHoudiniRuntimeSettings, DefaultTemporaryCookFolder) == 0x0070);
static_assert(offsetof(UHoudiniRuntimeSettings, DefaultBakeFolder) == 0x0080);
static_assert(offsetof(UHoudiniRuntimeSettings, PhysMaterial) == 0x00B8);
static_assert(offsetof(UHoudiniRuntimeSettings, DefaultBodyInstance) == 0x00C0);
static_assert(offsetof(UHoudiniRuntimeSettings, CollisionTraceFlag) == 0x0218);
static_assert(offsetof(UHoudiniRuntimeSettings, WalkableSlopeOverride) == 0x0228);
static_assert(offsetof(UHoudiniRuntimeSettings, FoliageDefaultSettings) == 0x0248);
static_assert(offsetof(UHoudiniRuntimeSettings, AssetUserData) == 0x0250);
static_assert(offsetof(UHoudiniRuntimeSettings, GenerateLightmapUVsFlag) == 0x0271);
static_assert(offsetof(UHoudiniRuntimeSettings, RecomputeNormalsFlag) == 0x0272);
static_assert(offsetof(UHoudiniRuntimeSettings, RecomputeTangentsFlag) == 0x0273);
static_assert(offsetof(UHoudiniRuntimeSettings, CustomHoudiniLocation) == 0x0288);
static_assert(offsetof(UHoudiniRuntimeSettings, HoudiniEnvironmentFiles) == 0x02A0);
static_assert(offsetof(UHoudiniRuntimeSettings, OtlSearchPath) == 0x02B0);
static_assert(offsetof(UHoudiniRuntimeSettings, DsoSearchPath) == 0x02C0);
static_assert(offsetof(UHoudiniRuntimeSettings, ImageDsoSearchPath) == 0x02D0);
static_assert(offsetof(UHoudiniRuntimeSettings, AudioDsoSearchPath) == 0x02E0);
static_assert(offsetof(UHoudiniSplineComponent, CurvePoints) == 0x0200);
static_assert(offsetof(UHoudiniSplineComponent, DisplayPoints) == 0x0210);
static_assert(offsetof(UHoudiniSplineComponent, DisplayPointIndexDivider) == 0x0220);
static_assert(offsetof(UHoudiniSplineComponent, HoudiniSplineName) == 0x0230);
static_assert(offsetof(UHoudiniSplineComponent, CurveType) == 0x0243);
static_assert(offsetof(UHoudiniSplineComponent, CurveMethod) == 0x0244);
static_assert(offsetof(UHoudiniSplineComponent, PartName) == 0x0478);
static_assert(offsetof(UHoudiniStaticMesh, VertexPositions) == 0x0038);
static_assert(offsetof(UHoudiniStaticMesh, TriangleIndices) == 0x0048);
static_assert(offsetof(UHoudiniStaticMesh, VertexInstanceColors) == 0x0058);
static_assert(offsetof(UHoudiniStaticMesh, VertexInstanceNormals) == 0x0068);
static_assert(offsetof(UHoudiniStaticMesh, VertexInstanceUTangents) == 0x0078);
static_assert(offsetof(UHoudiniStaticMesh, VertexInstanceVTangents) == 0x0088);
static_assert(offsetof(UHoudiniStaticMesh, VertexInstanceUVs) == 0x0098);
static_assert(offsetof(UHoudiniStaticMesh, MaterialIDsPerTriangle) == 0x00A8);
static_assert(offsetof(UHoudiniStaticMesh, StaticMaterials) == 0x00B8);
static_assert(offsetof(UHoudiniStaticMeshComponent, Mesh) == 0x0488);
static_assert(offsetof(UHoudiniStaticMeshComponent, LocalBounds) == 0x0490);
static_assert(offsetof(FHoudiniAssetBlueprintOutput, OutputObject) == 0x0008);
static_assert(offsetof(FHoudiniAssetBlueprintInstanceData, HoudiniAsset) == 0x0068);
static_assert(offsetof(FHoudiniAssetBlueprintInstanceData, AssetState) == 0x0074);
static_assert(offsetof(FHoudiniAssetBlueprintInstanceData, ComponentGUID) == 0x0088);
static_assert(offsetof(FHoudiniAssetBlueprintInstanceData, HapiGUID) == 0x0098);
static_assert(offsetof(FHoudiniAssetBlueprintInstanceData, SourceName) == 0x00B0);
static_assert(offsetof(FHoudiniAssetBlueprintInstanceData, Outputs) == 0x00C0);
static_assert(offsetof(FHoudiniAssetBlueprintInstanceData, Inputs) == 0x0110);
static_assert(offsetof(FHoudiniGenericAttribute, AttributeName) == 0x0000);
static_assert(offsetof(FHoudiniGenericAttribute, AttributeType) == 0x0010);
static_assert(offsetof(FHoudiniGenericAttribute, AttributeOwner) == 0x0011);
static_assert(offsetof(FHoudiniGenericAttribute, DoubleValues) == 0x0020);
static_assert(offsetof(FHoudiniGenericAttribute, IntValues) == 0x0030);
static_assert(offsetof(FHoudiniGenericAttribute, StringValues) == 0x0040);
static_assert(offsetof(FHoudiniSplineComponentInstanceData, CurvePoints) == 0x0068);
static_assert(offsetof(FHoudiniSplineComponentInstanceData, DisplayPoints) == 0x0078);
static_assert(offsetof(FHoudiniSplineComponentInstanceData, DisplayPointIndexDivider) == 0x0088);
