
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"

#pragma pack(push, 0x1)

class ULowSpecAssetsSettings;

/// Class /Script/LowSpecAssets.LowSpecAssetsSettings
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class ULowSpecAssetsSettings : public UDeveloperSettings
{ 
public:
	TArray<FName>                                      SupportedPlatforms;                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0048   (0x0028)  MISSED
	float                                              TextureDownscaleMultiplier;                                 // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(ULowSpecAssetsSettings) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(offsetof(ULowSpecAssetsSettings, SupportedPlatforms) == 0x0038);
