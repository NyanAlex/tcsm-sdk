
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "BBQCore.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ABBQMetaGameCharacter;
class ABBQMetaGameGameMode;
class ABBQMetaGameGameState;
class ABBQMetaGamePlayerController;
class ABBQMetaGamePlayerState;

/// Enum /Script/BBQMetaGame.EMatchmakingState
/// Size: 0x01 (1 bytes)
enum class EMatchmakingState : uint8_t
{
	EMatchmakingState__Idle                                                          = 0,
	EMatchmakingState__Running                                                       = 1
};

/// Class /Script/BBQMetaGame.BBQMetaGameCharacter
/// Size: 0x05F0 (1520 bytes) (0x0005F0 - 0x0005F0) align 16 MaxSize: 0x05F0
class ABBQMetaGameCharacter : public ABBQBaseCharacter
{ 
public:
};

/// Class /Script/BBQMetaGame.BBQMetaGameGameMode
/// Size: 0x03B0 (944 bytes) (0x0003B0 - 0x0003B0) align 8 MaxSize: 0x03B0
class ABBQMetaGameGameMode : public ABBQGameMode
{ 
public:
};

/// Class /Script/BBQMetaGame.BBQMetaGameGameState
/// Size: 0x05D8 (1496 bytes) (0x0005D0 - 0x0005D8) align 8 MaxSize: 0x05D8
class ABBQMetaGameGameState : public ABBQGameState
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x05D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/BBQMetaGame.BBQMetaGameGameState.GetMatchmakingState
	EMatchmakingState GetMatchmakingState() // [0x1e900b0] Final|Native|Public|BlueprintCallable 
	{
		typedef EMatchmakingState (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func();
	}
};

/// Class /Script/BBQMetaGame.BBQMetaGamePlayerController
/// Size: 0x0630 (1584 bytes) (0x000618 - 0x000630) align 8 MaxSize: 0x0630
class ABBQMetaGamePlayerController : public ABBQCorePlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0618   (0x0018)  MISSED


	/// Functions
	// Function /Script/BBQMetaGame.BBQMetaGamePlayerController.ShowLobbyChat
	void ShowLobbyChat() // [0x1e903e0] Final|Exec|Native|Public 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/BBQMetaGame.BBQMetaGamePlayerController.ShowChatDelegate__DelegateSignature
	void ShowChatDelegate__DelegateSignature() // [0x2438a30] Public|Delegate      
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/BBQMetaGame.BBQMetaGamePlayerController.Server_SetWantedCharacter
	void Server_SetWantedCharacter(FString WantedChar) // [0x1e90340] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(WantedChar);
	}
	// Function /Script/BBQMetaGame.BBQMetaGamePlayerController.Server_PullMyPreferences
	void Server_PullMyPreferences() // [0x1e76ee0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func();
	}
	// Function /Script/BBQMetaGame.BBQMetaGamePlayerController.FadeToBlack
	void FadeToBlack(float Duration) // [0x1e75310] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Duration);
	}
	// Function /Script/BBQMetaGame.BBQMetaGamePlayerController.FadeFromBlack
	void FadeFromBlack(float Duration) // [0x1e75200] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Duration);
	}
};

/// Class /Script/BBQMetaGame.BBQMetaGamePlayerState
/// Size: 0x0BB0 (2992 bytes) (0x000BB0 - 0x000BB0) align 8 MaxSize: 0x0BB0
class ABBQMetaGamePlayerState : public ABBQPlayerState
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(ABBQMetaGameCharacter) == 0x05F0); // 1520 bytes (0x0005F0 - 0x0005F0)
static_assert(sizeof(ABBQMetaGameGameMode) == 0x03B0); // 944 bytes (0x0003B0 - 0x0003B0)
static_assert(sizeof(ABBQMetaGameGameState) == 0x05D8); // 1496 bytes (0x0005D0 - 0x0005D8)
static_assert(sizeof(ABBQMetaGamePlayerController) == 0x0630); // 1584 bytes (0x000618 - 0x000630)
static_assert(sizeof(ABBQMetaGamePlayerState) == 0x0BB0); // 2992 bytes (0x000BB0 - 0x000BB0)
