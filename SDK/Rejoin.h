
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class URejoinCheck;

/// Enum /Script/Rejoin.ERejoinStatus
/// Size: 0x01 (1 bytes)
enum class ERejoinStatus : uint8_t
{
	ERejoinStatus__NoMatchToRejoin                                                   = 0,
	ERejoinStatus__RejoinAvailable                                                   = 1,
	ERejoinStatus__UpdatingStatus                                                    = 2,
	ERejoinStatus__NeedsRecheck                                                      = 3,
	ERejoinStatus__NoMatchToRejoin_MatchEnded                                        = 4
};

/// Class /Script/Rejoin.RejoinCheck
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align 8 MaxSize: 0x0170
class URejoinCheck : public UObject
{ 
public:
	ERejoinStatus                                      LastKnownStatus;                                            // 0x0028   (0x0001)  
	bool                                               bRejoinAfterCheck;                                          // 0x0029   (0x0001)  
	bool                                               bAttemptingRejoin;                                          // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x145];                                     // 0x002B   (0x0145)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(URejoinCheck) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(offsetof(URejoinCheck, LastKnownStatus) == 0x0028);
