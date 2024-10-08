
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UGauntletTestController;
class UGauntletTestControllerBootTest;
class UGauntletTestControllerErrorTest;

/// Class /Script/Gauntlet.GauntletTestController
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UGauntletTestController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/Gauntlet.GauntletTestControllerBootTest
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGauntletTestControllerBootTest : public UGauntletTestController
{ 
public:
};

/// Class /Script/Gauntlet.GauntletTestControllerErrorTest
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UGauntletTestControllerErrorTest : public UGauntletTestController
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UGauntletTestController) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UGauntletTestControllerBootTest) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGauntletTestControllerErrorTest) == 0x0050); // 80 bytes (0x000030 - 0x000050)
