
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

class UBBQNetDriver;
class UPlayFabNetConnection;

/// Class /Script/BBQNetworking.BBQNetDriver
/// Size: 0x07F8 (2040 bytes) (0x0007D0 - 0x0007F8) align 8 MaxSize: 0x07F8
class UBBQNetDriver : public UIpNetDriver
{ 
public:
	FString                                            OnlineSubsystemName;                                        // 0x07D0   (0x0010)  
	FString                                            PlayFabNetConnectionClassName;                              // 0x07E0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x07F0   (0x0008)  MISSED
};

/// Class /Script/BBQNetworking.PlayFabNetConnection
/// Size: 0x1C48 (7240 bytes) (0x001C48 - 0x001C48) align 8 MaxSize: 0x1C48
class UPlayFabNetConnection : public UIpConnection
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UBBQNetDriver) == 0x07F8); // 2040 bytes (0x0007D0 - 0x0007F8)
static_assert(sizeof(UPlayFabNetConnection) == 0x1C48); // 7240 bytes (0x001C48 - 0x001C48)
static_assert(offsetof(UBBQNetDriver, OnlineSubsystemName) == 0x07D0);
static_assert(offsetof(UBBQNetDriver, PlayFabNetConnectionClassName) == 0x07E0);
