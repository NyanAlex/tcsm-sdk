
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

class ALobbyBeaconClient;
class ALobbyBeaconHost;
class ALobbyBeaconPlayerState;
class ALobbyBeaconState;

/// Enum /Script/Lobby.ELobbyBeaconJoinState
/// Size: 0x01 (1 bytes)
enum class ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None                                                      = 0,
	ELobbyBeaconJoinState__SentJoinRequest                                           = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged                                   = 2
};

/// Struct /Script/Lobby.LobbyPlayerStateActorInfo
/// Size: 0x0018 (24 bytes) (0x00000C - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyPlayerStateActorInfo : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	class ALobbyBeaconPlayerState*                     LobbyPlayerState;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/Lobby.LobbyPlayerStateInfoArray
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
struct FLobbyPlayerStateInfoArray : FFastArraySerializer
{ 
	TArray<FLobbyPlayerStateActorInfo>                 Players;                                                    // 0x0108   (0x0010)  
	class ALobbyBeaconState*                           ParentState;                                                // 0x0118   (0x0008)  
};

/// Class /Script/Lobby.LobbyBeaconClient
/// Size: 0x0340 (832 bytes) (0x0002B8 - 0x000340) align 8 MaxSize: 0x0340
class ALobbyBeaconClient : public AOnlineBeaconClient
{ 
public:
	class ALobbyBeaconState*                           LobbyState;                                                 // 0x02B8   (0x0008)  
	class ALobbyBeaconPlayerState*                     PlayerState;                                                // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x02C8   (0x0001)  MISSED
	ELobbyBeaconJoinState                              LobbyJoinServerState;                                       // 0x02C9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x76];                                      // 0x02CA   (0x0076)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconClient.ServerSetPartyOwner
	void ServerSetPartyOwner(FUniqueNetIdRepl InUniqueId, FUniqueNetIdRepl InPartyOwnerId) // [0xde7220] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FUniqueNetIdRepl, FUniqueNetIdRepl);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InUniqueId, InPartyOwnerId);
	}
	// Function /Script/Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
	void ServerNotifyJoiningServer() // [0xde71d0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/Lobby.LobbyBeaconClient.ServerLoginPlayer
	void ServerLoginPlayer(FString InSessionId, FUniqueNetIdRepl InUniqueId, FString UrlString) // [0xde7010] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FString, FUniqueNetIdRepl, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InSessionId, InUniqueId, UrlString);
	}
	// Function /Script/Lobby.LobbyBeaconClient.ServerKickPlayer
	void ServerKickPlayer(FUniqueNetIdRepl PlayerToKick, FText Reason) // [0xde6e70] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FUniqueNetIdRepl, FText);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(PlayerToKick, Reason);
	}
	// Function /Script/Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
	void ServerDisconnectFromLobby() // [0xde6e20] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
	// Function /Script/Lobby.LobbyBeaconClient.ServerCheat
	void ServerCheat(FString Msg) // [0xde6d60] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Msg);
	}
	// Function /Script/Lobby.LobbyBeaconClient.ClientWasKicked
	void ClientWasKicked(FText KickReason) // [0xde6c00] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FText);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(KickReason);
	}
	// Function /Script/Lobby.LobbyBeaconClient.ClientSetInviteFlags
	void ClientSetInviteFlags(FJoinabilitySettings Settings) // [0xde6b60] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)(FJoinabilitySettings);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Settings);
	}
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerLeft
	void ClientPlayerLeft(FUniqueNetIdRepl InUniqueId) // [0xde6a70] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FUniqueNetIdRepl);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(InUniqueId);
	}
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerJoined
	void ClientPlayerJoined(FText NewPlayerName, FUniqueNetIdRepl InUniqueId) // [0xde68f0] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FText, FUniqueNetIdRepl);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(NewPlayerName, InUniqueId);
	}
	// Function /Script/Lobby.LobbyBeaconClient.ClientLoginComplete
	void ClientLoginComplete(FUniqueNetIdRepl InUniqueId, bool bWasSuccessful) // [0xde67c0] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)(FUniqueNetIdRepl, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(InUniqueId, bWasSuccessful);
	}
	// Function /Script/Lobby.LobbyBeaconClient.ClientJoinGame
	void ClientJoinGame() // [0xde67a0] Net|NetReliableNative|Event|Public|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func();
	}
	// Function /Script/Lobby.LobbyBeaconClient.ClientAckJoiningServer
	void ClientAckJoiningServer() // [0xde6780] Net|NetReliableNative|Event|Protected|NetClient 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func();
	}
};

/// Class /Script/Lobby.LobbyBeaconHost
/// Size: 0x0288 (648 bytes) (0x000250 - 0x000288) align 8 MaxSize: 0x0288
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0250   (0x0008)  MISSED
	TSoftObjectPtr<class UClass*>                      LobbyStateClass;                                            // 0x0258   (0x0028)  
	class ALobbyBeaconState*                           LobbyState;                                                 // 0x0280   (0x0008)  
};

/// Class /Script/Lobby.LobbyBeaconPlayerState
/// Size: 0x02E8 (744 bytes) (0x000228 - 0x0002E8) align 8 MaxSize: 0x02E8
class ALobbyBeaconPlayerState : public AInfo
{ 
public:
	FText                                              DisplayName;                                                // 0x0228   (0x0018)  
	FUniqueNetIdRepl                                   UniqueId;                                                   // 0x0240   (0x0028)  
	FUniqueNetIdRepl                                   PartyOwnerUniqueId;                                         // 0x0268   (0x0028)  
	bool                                               bInLobby;                                                   // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0291   (0x0007)  MISSED
	class AOnlineBeaconClient*                         ClientActor;                                                // 0x0298   (0x0008)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x02A0   (0x0048)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
	void OnRep_UniqueId() // [0xde6d20] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
	void OnRep_PartyOwner() // [0xde6d00] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_InLobby
	void OnRep_InLobby() // [0xde6cc0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
};

/// Class /Script/Lobby.LobbyBeaconState
/// Size: 0x03D0 (976 bytes) (0x000228 - 0x0003D0) align 8 MaxSize: 0x03D0
class ALobbyBeaconState : public AInfo
{ 
public:
	int32_t                                            MaxPlayers;                                                 // 0x0228   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x022C   (0x0004)  MISSED
	class UClass*                                      LobbyBeaconPlayerStateClass;                                // 0x0230   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0238   (0x0008)  MISSED
	bool                                               bLobbyStarted;                                              // 0x0240   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0241   (0x0003)  MISSED
	float                                              WaitForPlayersTimeRemaining;                                // 0x0244   (0x0004)  
	FLobbyPlayerStateInfoArray                         Players;                                                    // 0x0248   (0x0120)  
	unsigned char                                      UnknownData03_7[0x68];                                      // 0x0368   (0x0068)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
	void OnRep_WaitForPlayersTimeRemaining() // [0xde6d40] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/Lobby.LobbyBeaconState.OnRep_LobbyStarted
	void OnRep_LobbyStarted() // [0xde6ce0] Final|Native|Protected 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func();
	}
};

#pragma pack(pop)


static_assert(sizeof(ALobbyBeaconClient) == 0x0340); // 832 bytes (0x0002B8 - 0x000340)
static_assert(sizeof(ALobbyBeaconHost) == 0x0288); // 648 bytes (0x000250 - 0x000288)
static_assert(sizeof(ALobbyBeaconPlayerState) == 0x02E8); // 744 bytes (0x000228 - 0x0002E8)
static_assert(sizeof(FLobbyPlayerStateActorInfo) == 0x0018); // 24 bytes (0x00000C - 0x000018)
static_assert(sizeof(FLobbyPlayerStateInfoArray) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(ALobbyBeaconState) == 0x03D0); // 976 bytes (0x000228 - 0x0003D0)
static_assert(offsetof(ALobbyBeaconClient, LobbyState) == 0x02B8);
static_assert(offsetof(ALobbyBeaconClient, PlayerState) == 0x02C0);
static_assert(offsetof(ALobbyBeaconClient, LobbyJoinServerState) == 0x02C9);
static_assert(offsetof(ALobbyBeaconHost, LobbyStateClass) == 0x0258);
static_assert(offsetof(ALobbyBeaconHost, LobbyState) == 0x0280);
static_assert(offsetof(ALobbyBeaconPlayerState, DisplayName) == 0x0228);
static_assert(offsetof(ALobbyBeaconPlayerState, UniqueId) == 0x0240);
static_assert(offsetof(ALobbyBeaconPlayerState, PartyOwnerUniqueId) == 0x0268);
static_assert(offsetof(ALobbyBeaconPlayerState, ClientActor) == 0x0298);
static_assert(offsetof(FLobbyPlayerStateActorInfo, LobbyPlayerState) == 0x0010);
static_assert(offsetof(FLobbyPlayerStateInfoArray, Players) == 0x0108);
static_assert(offsetof(FLobbyPlayerStateInfoArray, ParentState) == 0x0118);
static_assert(offsetof(ALobbyBeaconState, LobbyBeaconPlayerStateClass) == 0x0230);
static_assert(offsetof(ALobbyBeaconState, Players) == 0x0248);
