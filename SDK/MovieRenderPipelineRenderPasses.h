
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "ActorLayerUtilities.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MovieRenderPipelineCore.h"

#pragma pack(push, 0x1)

class UMoviePipelineDeferredPassBase;
class UMoviePipelineDeferredPass_DetailLighting;
class UMoviePipelineDeferredPass_LightingOnly;
class UMoviePipelineDeferredPass_PathTracer;
class UMoviePipelineDeferredPass_ReflectionsOnly;
class UMoviePipelineDeferredPass_Unlit;
class UMoviePipelineImagePassBase;
class UMoviePipelineImageSequenceOutputBase;
class UMoviePipelineImageSequenceOutput_BMP;
class UMoviePipelineImageSequenceOutput_EXR;
class UMoviePipelineImageSequenceOutput_JPG;
class UMoviePipelineImageSequenceOutput_PNG;
class UMoviePipelineWaveOutput;

/// Enum /Script/MovieRenderPipelineRenderPasses.EEXRCompressionFormat
/// Size: 0x01 (1 bytes)
enum class EEXRCompressionFormat : uint8_t
{
	EEXRCompressionFormat__None                                                      = 0,
	EEXRCompressionFormat__PIZ                                                       = 1,
	EEXRCompressionFormat__ZIP                                                       = 2
};

/// Struct /Script/MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMoviePipelinePostProcessPass
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TWeakObjectPtr<class UMaterialInterface*>          Material;                                                   // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
/// Size: 0x00C8 (200 bytes) (0x000048 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0048   (0x0080)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
/// Size: 0x0170 (368 bytes) (0x0000C8 - 0x000170) align 8 MaxSize: 0x0170
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{ 
public:
	bool                                               bAccumulatorIncludesAlpha;                                  // 0x00C8   (0x0001)  
	bool                                               bDisableMultisampleEffects;                                 // 0x00C9   (0x0001)  
	bool                                               bUse32BitPostProcessMaterials;                              // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00CB   (0x0005)  MISSED
	TArray<FMoviePipelinePostProcessPass>              AdditionalPostProcessMaterials;                             // 0x00D0   (0x0010)  
	bool                                               bAddDefaultLayer;                                           // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
	TArray<FActorLayer>                                StencilLayers;                                              // 0x00E8   (0x0010)  
	TArray<class UMaterialInterface*>                  ActivePostProcessMaterials;                                 // 0x00F8   (0x0010)  
	class UMaterialInterface*                          StencilLayerMaterial;                                       // 0x0108   (0x0008)  
	TArray<class UTextureRenderTarget2D*>              TileRenderTargets;                                          // 0x0110   (0x0010)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x0120   (0x0050)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
/// Size: 0x0170 (368 bytes) (0x000170 - 0x000170) align 8 MaxSize: 0x0170
class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
/// Size: 0x0170 (368 bytes) (0x000170 - 0x000170) align 8 MaxSize: 0x0170
class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
/// Size: 0x0170 (368 bytes) (0x000170 - 0x000170) align 8 MaxSize: 0x0170
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
/// Size: 0x0170 (368 bytes) (0x000170 - 0x000170) align 8 MaxSize: 0x0170
class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
/// Size: 0x0170 (368 bytes) (0x000170 - 0x000170) align 8 MaxSize: 0x0170
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0048   (0x0020)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{ 
public:
	EEXRCompressionFormat                              Compression;                                                // 0x0068   (0x0001)  
	bool                                               bMultilayer;                                                // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
/// Size: 0x00B8 (184 bytes) (0x000048 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{ 
public:
	FString                                            FileNameFormatOverride;                                     // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0058   (0x0060)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMoviePipelineImagePassBase) == 0x00C8); // 200 bytes (0x000048 - 0x0000C8)
static_assert(sizeof(FMoviePipelinePostProcessPass) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMoviePipelineDeferredPassBase) == 0x0170); // 368 bytes (0x0000C8 - 0x000170)
static_assert(sizeof(UMoviePipelineDeferredPass_Unlit) == 0x0170); // 368 bytes (0x000170 - 0x000170)
static_assert(sizeof(UMoviePipelineDeferredPass_DetailLighting) == 0x0170); // 368 bytes (0x000170 - 0x000170)
static_assert(sizeof(UMoviePipelineDeferredPass_LightingOnly) == 0x0170); // 368 bytes (0x000170 - 0x000170)
static_assert(sizeof(UMoviePipelineDeferredPass_ReflectionsOnly) == 0x0170); // 368 bytes (0x000170 - 0x000170)
static_assert(sizeof(UMoviePipelineDeferredPass_PathTracer) == 0x0170); // 368 bytes (0x000170 - 0x000170)
static_assert(sizeof(UMoviePipelineImageSequenceOutputBase) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(UMoviePipelineImageSequenceOutput_EXR) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UMoviePipelineImageSequenceOutput_BMP) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMoviePipelineImageSequenceOutput_PNG) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMoviePipelineImageSequenceOutput_JPG) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMoviePipelineWaveOutput) == 0x00B8); // 184 bytes (0x000048 - 0x0000B8)
static_assert(offsetof(FMoviePipelinePostProcessPass, Material) == 0x0008);
static_assert(offsetof(UMoviePipelineDeferredPassBase, AdditionalPostProcessMaterials) == 0x00D0);
static_assert(offsetof(UMoviePipelineDeferredPassBase, StencilLayers) == 0x00E8);
static_assert(offsetof(UMoviePipelineDeferredPassBase, ActivePostProcessMaterials) == 0x00F8);
static_assert(offsetof(UMoviePipelineDeferredPassBase, StencilLayerMaterial) == 0x0108);
static_assert(offsetof(UMoviePipelineDeferredPassBase, TileRenderTargets) == 0x0110);
static_assert(offsetof(UMoviePipelineImageSequenceOutput_EXR, Compression) == 0x0068);
static_assert(offsetof(UMoviePipelineWaveOutput, FileNameFormatOverride) == 0x0048);
