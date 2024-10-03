
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UOnlineHotfixManager;
class UUpdateManager;

/// Enum /Script/Hotfix.EHotfixResult
/// Size: 0x01 (1 bytes)
enum class EHotfixResult : uint8_t
{
	EHotfixResult__Failed                                                            = 0,
	EHotfixResult__Success                                                           = 1,
	EHotfixResult__SuccessNoChange                                                   = 2,
	EHotfixResult__SuccessNeedsReload                                                = 3,
	EHotfixResult__SuccessNeedsRelaunch                                              = 4
};

/// Enum /Script/Hotfix.EUpdateCompletionStatus
/// Size: 0x01 (1 bytes)
enum class EUpdateCompletionStatus : uint8_t
{
	EUpdateCompletionStatus__UpdateUnknown                                           = 0,
	EUpdateCompletionStatus__UpdateSuccess                                           = 1,
	EUpdateCompletionStatus__UpdateSuccess_NoChange                                  = 2,
	EUpdateCompletionStatus__UpdateSuccess_NeedsReload                               = 3,
	EUpdateCompletionStatus__UpdateSuccess_NeedsRelaunch                             = 4,
	EUpdateCompletionStatus__UpdateSuccess_NeedsPatch                                = 5,
	EUpdateCompletionStatus__UpdateFailure_PatchCheck                                = 6,
	EUpdateCompletionStatus__UpdateFailure_HotfixCheck                               = 7,
	EUpdateCompletionStatus__UpdateFailure_NotLoggedIn                               = 8
};

/// Enum /Script/Hotfix.EUpdateState
/// Size: 0x01 (1 bytes)
enum class EUpdateState : uint8_t
{
	EUpdateState__UpdateIdle                                                         = 0,
	EUpdateState__UpdatePending                                                      = 1,
	EUpdateState__CheckingForPatch                                                   = 2,
	EUpdateState__DetectingPlatformEnvironment                                       = 3,
	EUpdateState__CheckingForHotfix                                                  = 4,
	EUpdateState__WaitingOnInitialLoad                                               = 5,
	EUpdateState__InitialLoadComplete                                                = 6,
	EUpdateState__UpdateComplete                                                     = 7
};

/// Class /Script/Hotfix.OnlineHotfixManager
/// Size: 0x0228 (552 bytes) (0x000028 - 0x000228) align 8 MaxSize: 0x0228
class UOnlineHotfixManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x1C0];                                     // 0x0028   (0x01C0)  MISSED
	FString                                            OSSName;                                                    // 0x01E8   (0x0010)  
	FString                                            HotfixManagerClassName;                                     // 0x01F8   (0x0010)  
	FString                                            DebugPrefix;                                                // 0x0208   (0x0010)  
	TArray<class UObject*>                             AssetsHotfixedFromIniFiles;                                 // 0x0218   (0x0010)  


	/// Functions
	// Function /Script/Hotfix.OnlineHotfixManager.StartHotfixProcess
	void StartHotfixProcess() // [0xdf8550] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
};

/// Class /Script/Hotfix.UpdateManager
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000110) align 8 MaxSize: 0x0110
class UUpdateManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0028   (0x0060)  MISSED
	float                                              HotfixCheckCompleteDelay;                                   // 0x0088   (0x0004)  
	float                                              UpdateCheckCompleteDelay;                                   // 0x008C   (0x0004)  
	float                                              HotfixAvailabilityCheckCompleteDelay;                       // 0x0090   (0x0004)  
	float                                              UpdateCheckAvailabilityCompleteDelay;                       // 0x0094   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0098   (0x0004)  MISSED
	int32_t                                            AppSuspendedUpdateCheckTimeSeconds;                         // 0x009C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00A0   (0x0008)  MISSED
	bool                                               bPlatformEnvironmentDetected;                               // 0x00A8   (0x0001)  
	bool                                               bInitialUpdateFinished;                                     // 0x00A9   (0x0001)  
	bool                                               bCheckHotfixAvailabilityOnly;                               // 0x00AA   (0x0001)  
	EUpdateState                                       CurrentUpdateState;                                         // 0x00AB   (0x0001)  
	int32_t                                            WorstNumFilesPendingLoadViewed;                             // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00B0   (0x0004)  MISSED
	EHotfixResult                                      LastHotfixResult;                                           // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData04_6[0x23];                                      // 0x00B5   (0x0023)  MISSED
	FDateTime                                          LastUpdateCheck[2];                                         // 0x00D8   (0x0010)  
	EUpdateCompletionStatus                            LastCompletionResult[2];                                    // 0x00E8   (0x0002)  
	unsigned char                                      UnknownData05_6[0x16];                                      // 0x00EA   (0x0016)  MISSED
	class UEnum*                                       UpdateStateEnum;                                            // 0x0100   (0x0008)  
	class UEnum*                                       UpdateCompletionEnum;                                       // 0x0108   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UOnlineHotfixManager) == 0x0228); // 552 bytes (0x000028 - 0x000228)
static_assert(sizeof(UUpdateManager) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(offsetof(UOnlineHotfixManager, OSSName) == 0x01E8);
static_assert(offsetof(UOnlineHotfixManager, HotfixManagerClassName) == 0x01F8);
static_assert(offsetof(UOnlineHotfixManager, DebugPrefix) == 0x0208);
static_assert(offsetof(UOnlineHotfixManager, AssetsHotfixedFromIniFiles) == 0x0218);
static_assert(offsetof(UUpdateManager, CurrentUpdateState) == 0x00AB);
static_assert(offsetof(UUpdateManager, LastHotfixResult) == 0x00B4);
static_assert(offsetof(UUpdateManager, LastUpdateCheck) == 0x00D8);
static_assert(offsetof(UUpdateManager, LastCompletionResult) == 0x00E8);
static_assert(offsetof(UUpdateManager, UpdateStateEnum) == 0x0100);
static_assert(offsetof(UUpdateManager, UpdateCompletionEnum) == 0x0108);
