
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "OnlineSubsystemUtils.h"
#include "PacketHandler.h"

#pragma pack(push, 0x1)

class USteamAuthComponentModuleInterface;
class USteamNetConnection;
class USteamNetDriver;

/// Class /Script/OnlineSubsystemSteam.SteamAuthComponentModuleInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{ 
public:
};

/// Class /Script/OnlineSubsystemSteam.SteamNetConnection
/// Size: 0x1C50 (7248 bytes) (0x001C48 - 0x001C50) align 8 MaxSize: 0x1C50
class USteamNetConnection : public UIpConnection
{ 
public:
	bool                                               bIsPassthrough;                                             // 0x1C48   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x1C49   (0x0007)  MISSED
};

/// Class /Script/OnlineSubsystemSteam.SteamNetDriver
/// Size: 0x07D8 (2008 bytes) (0x0007D0 - 0x0007D8) align 8 MaxSize: 0x07D8
class USteamNetDriver : public UIpNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x07D0   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(USteamAuthComponentModuleInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamNetConnection) == 0x1C50); // 7248 bytes (0x001C48 - 0x001C50)
static_assert(sizeof(USteamNetDriver) == 0x07D8); // 2008 bytes (0x0007D0 - 0x0007D8)
