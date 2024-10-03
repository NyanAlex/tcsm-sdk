
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UHMEditorSettings;

/// Enum /Script/HeatMaps.EHMStorageType
/// Size: 0x04 (4 bytes)
enum class EHMStorageType : uint32_t
{
	EHMStorageType__File                                                             = 0,
	EHMStorageType__SumoContentDelivery                                              = 1,
	EHMStorageType__DEFAULT                                                          = 0
};

/// Class /Script/HeatMaps.HMEditorSettings
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UHMEditorSettings : public UObject
{ 
public:
	EHMStorageType                                     Storage;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            FilenameTemplate;                                           // 0x0030   (0x0010)  
	FString                                            DestinationDirectory;                                       // 0x0040   (0x0010)  
	FString                                            ProxyAddress;                                               // 0x0050   (0x0010)  
	FString                                            EndpointURL;                                                // 0x0060   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UHMEditorSettings) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(offsetof(UHMEditorSettings, Storage) == 0x0028);
static_assert(offsetof(UHMEditorSettings, FilenameTemplate) == 0x0030);
static_assert(offsetof(UHMEditorSettings, DestinationDirectory) == 0x0040);
static_assert(offsetof(UHMEditorSettings, ProxyAddress) == 0x0050);
static_assert(offsetof(UHMEditorSettings, EndpointURL) == 0x0060);
