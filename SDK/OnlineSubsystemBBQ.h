
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"

#pragma pack(push, 0x1)


/// Enum /Script/OnlineSubsystemBBQ.EBBQNetResult
/// Size: 0x01 (1 bytes)
enum class EBBQNetResult : uint8_t
{
	EBBQNetResult__Success                                                           = 0,
	EBBQNetResult__SilentError                                                       = 1,
	EBBQNetResult__UnknownError                                                      = 2,
	EBBQNetResult__GenericError                                                      = 3,
	EBBQNetResult__PlayfabPartyNetwork_FailedToCreate                                = 4,
	EBBQNetResult__PlayfabPartyNetwork_AlreadyCreating                               = 5,
	EBBQNetResult__PlayfabPartyNetwork_AlreadyCreated                                = 6,
	EBBQNetResult__PlayfabPartyNetwork_FailedToJoin                                  = 7,
	EBBQNetResult__PlayfabPartyNetwork_AlreadyJoining                                = 8,
	EBBQNetResult__PlayfabPartyNetwork_AlreadyJoined                                 = 9,
	EBBQNetResult__PlayfabPartyNetwork_FailedConnecting                              = 10,
	EBBQNetResult__PlayfabPartyNetwork_FailedLeaving                                 = 11,
	EBBQNetResult__PlayfabPartyNetwork_DestroyedUnexpectedly                         = 12,
	EBBQNetResult__PlayfabPartyNetwork_PartyFull                                     = 13,
	EBBQNetResult__PlayfabPartyNetwork_PartyMatchmaking                              = 14,
	EBBQNetResult__PlayfabPartyNetwork_SessionFull                                   = 15,
	EBBQNetResult__PlayfabPartyNetwork_SessionNoLongerExists                         = 16,
	EBBQNetResult__PlayfabPartyNetwork_SessionNoLongerValid                          = 17
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQPlayerReportReason
/// Size: 0x01 (1 bytes)
enum class EBBQPlayerReportReason : uint8_t
{
	EBBQPlayerReportReason__EOS_PRC_Invalid                                          = 0,
	EBBQPlayerReportReason__EOS_PRC_Cheating                                         = 1,
	EBBQPlayerReportReason__EOS_PRC_Exploiting                                       = 2,
	EBBQPlayerReportReason__EOS_PRC_OffensiveProfile                                 = 3,
	EBBQPlayerReportReason__EOS_PRC_VerbalAbuse                                      = 4,
	EBBQPlayerReportReason__EOS_PRC_Scamming                                         = 5,
	EBBQPlayerReportReason__EOS_PRC_Spamming                                         = 6,
	EBBQPlayerReportReason__EOS_PRC_Other                                            = 7
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQNetErrorSeverity
/// Size: 0x01 (1 bytes)
enum class EBBQNetErrorSeverity : uint8_t
{
	EBBQNetErrorSeverity__None                                                       = 0,
	EBBQNetErrorSeverity__Warning                                                    = 1,
	EBBQNetErrorSeverity__Error                                                      = 2,
	EBBQNetErrorSeverity__Fatal                                                      = 3,
	EBBQNetErrorSeverity__NumSeverities                                              = 4
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQNetError
/// Size: 0x01 (1 bytes)
enum class EBBQNetError : uint8_t
{
	EBBQNetError__None                                                               = 0,
	EBBQNetError__SilentError                                                        = 1,
	EBBQNetError__GenericError                                                       = 2,
	EBBQNetError__InternalError                                                      = 3,
	EBBQNetError__GenericWarning                                                     = 4,
	EBBQNetError__InternalWarning                                                    = 5,
	EBBQNetError__InvalidCredentials                                                 = 6,
	EBBQNetError__PlayFabCustomWarning                                               = 7,
	EBBQNetError__PlayFabGenericBackendFailed                                        = 8,
	EBBQNetError__PlayFabLoginFailed                                                 = 9,
	EBBQNetError__PlayFabLinkFailed                                                  = 10,
	EBBQNetError__PlayFabDisconnected                                                = 11,
	EBBQNetError__PlatformUnavailable                                                = 12,
	EBBQNetError__PlatformLoginFailed                                                = 13,
	EBBQNetError__PlatformDisconnected                                               = 14,
	EBBQNetError__PartyConnectionLost                                                = 15,
	EBBQNetError__PartyHostLeft                                                      = 16,
	EBBQNetError__PartyKicked                                                        = 17,
	EBBQNetError__PartyFull                                                          = 18,
	EBBQNetError__PartyMatchmaking                                                   = 19,
	EBBQNetError__PartyCreateFailed                                                  = 20,
	EBBQNetError__PartyJoinFailed                                                    = 21,
	EBBQNetError__PartyMatchmakingCancelled                                          = 22,
	EBBQNetError__PartyMatchmakingCancelledLeader                                    = 23,
	EBBQNetError__MatchNoLongerExists                                                = 24,
	EBBQNetError__MatchNoLongerValid                                                 = 25,
	EBBQNetError__MatchPlayersNotFound                                               = 26,
	EBBQNetError__MatchmakingCancelled                                               = 27,
	EBBQNetError__MatchIdleKick                                                      = 28,
	EBBQNetError__MatchAlreadyStarted                                                = 29,
	EBBQNetError__MatchCustomNotStarted                                              = 30,
	EBBQNetError__NetworkGeneralFailure                                              = 31,
	EBBQNetError__NetworkConnectionLost                                              = 32,
	EBBQNetError__NetworkConnectionTimeout                                           = 33,
	EBBQNetError__NetworkOutdatedClient                                              = 34,
	EBBQNetError__NetworkOutdatedServer                                              = 35,
	EBBQNetError__ServerFull                                                         = 36,
	EBBQNetError__ServerCouldNotFind                                                 = 37,
	EBBQNetError__InviteCrossPlayMismatch                                            = 38,
	EBBQNetError__BadPing                                                            = 39,
	EBBQNetError__AntiCheatKick                                                      = 40,
	EBBQNetError__LeaverKick                                                         = 41,
	EBBQNetError__NumErrors                                                          = 42
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQMatchMakingTicketStatus
/// Size: 0x01 (1 bytes)
enum class EBBQMatchMakingTicketStatus : uint8_t
{
	EBBQMatchMakingTicketStatus__None                                                = 0,
	EBBQMatchMakingTicketStatus__CancelAllTickets                                    = 1,
	EBBQMatchMakingTicketStatus__CreateTicket                                        = 2,
	EBBQMatchMakingTicketStatus__JoinTicket                                          = 3,
	EBBQMatchMakingTicketStatus__WaitingForPlayers                                   = 4,
	EBBQMatchMakingTicketStatus__WaitingForMatch                                     = 5,
	EBBQMatchMakingTicketStatus__WaitingForServer                                    = 6,
	EBBQMatchMakingTicketStatus__Canceled                                            = 7,
	EBBQMatchMakingTicketStatus__Matched                                             = 8,
	EBBQMatchMakingTicketStatus__TicketCreated                                       = 9,
	EBBQMatchMakingTicketStatus__TicketJoined                                        = 10,
	EBBQMatchMakingTicketStatus__Invalid                                             = 11
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQNetTeam
/// Size: 0x01 (1 bytes)
enum class EBBQNetTeam : uint8_t
{
	EBBQNetTeam__Family                                                              = 0,
	EBBQNetTeam__Victims                                                             = 1,
	EBBQNetTeam__None                                                                = 2
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQNetMatchState
/// Size: 0x01 (1 bytes)
enum class EBBQNetMatchState : uint8_t
{
	EBBQNetMatchState__Uninitialised                                                 = 0,
	EBBQNetMatchState__Creating                                                      = 1,
	EBBQNetMatchState__Playing                                                       = 2,
	EBBQNetMatchState__Aborted                                                       = 3,
	EBBQNetMatchState__Finished                                                      = 4
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQNetPartyReformType
/// Size: 0x01 (1 bytes)
enum class EBBQNetPartyReformType : uint8_t
{
	EBBQNetPartyReformType__None                                                     = 0,
	EBBQNetPartyReformType__PublicMatchDisband                                       = 1,
	EBBQNetPartyReformType__PublicMatchComplete                                      = 2
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQNetState
/// Size: 0x01 (1 bytes)
enum class EBBQNetState : uint8_t
{
	EBBQNetState__Uninitialised                                                      = 0,
	EBBQNetState__Offline                                                            = 1,
	EBBQNetState__OnlineIdle                                                         = 2,
	EBBQNetState__OnlineHost                                                         = 3,
	EBBQNetState__OnlineClient                                                       = 4,
	EBBQNetState__OnlineHighestIdleState                                             = 5,
	EBBQNetState__OnlineBusy                                                         = 6,
	EBBQNetState__SigningIn                                                          = 7,
	EBBQNetState__OnlineLinking                                                      = 8,
	EBBQNetState__OnlineCreating                                                     = 9,
	EBBQNetState__OnlineJoining                                                      = 10,
	EBBQNetState__OnlineHighestBusyState                                             = 11,
	EBBQNetState__SigningOut                                                         = 12,
	EBBQNetState__Disconnected                                                       = 13,
	EBBQNetState__Resetting                                                          = 14,
	EBBQNetState__NumStates                                                          = 15
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQNetSystem
/// Size: 0x01 (1 bytes)
enum class EBBQNetSystem : uint8_t
{
	EBBQNetSystem__Platform                                                          = 0,
	EBBQNetSystem__PlayFab                                                           = 1,
	EBBQNetSystem__Match                                                             = 2,
	EBBQNetSystem__Party                                                             = 3,
	EBBQNetSystem__Matchmaking                                                       = 4,
	EBBQNetSystem__Presence                                                          = 5,
	EBBQNetSystem__NumSystems                                                        = 6
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQSendTextMessageResult
/// Size: 0x01 (1 bytes)
enum class EBBQSendTextMessageResult : uint8_t
{
	EBBQSendTextMessageResult__Success                                               = 0,
	EBBQSendTextMessageResult__Failure                                               = 1,
	EBBQSendTextMessageResult__MinIntervalNotRespected                               = 2,
	EBBQSendTextMessageResult__RateLimitExceeded                                     = 3
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQVoiceChatIndicator
/// Size: 0x01 (1 bytes)
enum class EBBQVoiceChatIndicator : uint8_t
{
	EBBQVoiceChatIndicator__NoMic                                                    = 0,
	EBBQVoiceChatIndicator__Muted                                                    = 1,
	EBBQVoiceChatIndicator__Silent                                                   = 2,
	EBBQVoiceChatIndicator__Talking                                                  = 3,
	EBBQVoiceChatIndicator__Count                                                    = 4
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQNetworkType
/// Size: 0x01 (1 bytes)
enum class EBBQNetworkType : uint8_t
{
	EBBQNetworkType__Lobby                                                           = 0,
	EBBQNetworkType__Party                                                           = 1,
	EBBQNetworkType__Match                                                           = 2,
	EBBQNetworkType__Count                                                           = 3,
	EBBQNetworkType__InvalidInvite                                                   = 4
};

/// Enum /Script/OnlineSubsystemBBQ.EOnlineSessionTypeBBQ
/// Size: 0x01 (1 bytes)
enum class EOnlineSessionTypeBBQ : uint8_t
{
	EOnlineSessionTypeBBQ__Unknown                                                   = 0,
	EOnlineSessionTypeBBQ__Matchmaking                                               = 1,
	EOnlineSessionTypeBBQ__Custom                                                    = 2,
	EOnlineSessionTypeBBQ__DevServerPlayFabLegacy                                    = 3,
	EOnlineSessionTypeBBQ__DevServerReserved                                         = 4,
	EOnlineSessionTypeBBQ__Mercury                                                   = 5
};

/// Enum /Script/OnlineSubsystemBBQ.EPartyNetworkMessageType
/// Size: 0x01 (1 bytes)
enum class EPartyNetworkMessageType : uint8_t
{
	EPartyNetworkMessageType__ePlayerJoined                                          = 0,
	EPartyNetworkMessageType__eSetHostId                                             = 1,
	EPartyNetworkMessageType__eKicked                                                = 2,
	EPartyNetworkMessageType__eDisbanded                                             = 3,
	EPartyNetworkMessageType__eUserData                                              = 4,
	EPartyNetworkMessageType__eAuthPlatform                                          = 5,
	EPartyNetworkMessageType__eRequestPlatformSession                                = 6,
	EPartyNetworkMessageType__eCreatePlatformSession                                 = 7,
	EPartyNetworkMessageType__eJoinPlatformSession                                   = 8,
	EPartyNetworkMessageType__eSetPlatformPartyId                                    = 9,
	EPartyNetworkMessageType__eSetPlatformMatchId                                    = 10,
	EPartyNetworkMessageType__eRecreatePlatformSession                               = 11,
	EPartyNetworkMessageType__eHostHeartbeat                                         = 12,
	EPartyNetworkMessageType__eRequestHostMigration                                  = 13,
	EPartyNetworkMessageType__eCount                                                 = 14
};

/// Enum /Script/OnlineSubsystemBBQ.EBBQAuthPlatform
/// Size: 0x01 (1 bytes)
enum class EBBQAuthPlatform : uint8_t
{
	EBBQAuthPlatform__None                                                           = 0,
	EBBQAuthPlatform__Steam                                                          = 1,
	EBBQAuthPlatform__PlayStationNetwork                                             = 2,
	EBBQAuthPlatform__XboxLive                                                       = 3,
	EBBQAuthPlatform__XboxLiveWinGDK                                                 = 4,
	EBBQAuthPlatform__Custom                                                         = 5,
	EBBQAuthPlatform__Count                                                          = 6
};

/// Struct /Script/OnlineSubsystemBBQ.SessionIdBBQ
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSessionIdBBQ
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/OnlineSubsystemBBQ.AddCurrencyRequest
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAddCurrencyRequest
{ 
	int32_t                                            Amount;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Currency;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBBQ.UnlockTreeItemResult
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FUnlockTreeItemResult
{ 
	bool                                               WasSuccessful;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            ItemId;                                                     // 0x0008   (0x0010)  
	FString                                            ItemClass;                                                  // 0x0018   (0x0010)  
	FString                                            ItemInstanceId;                                             // 0x0028   (0x0010)  
	FString                                            Annotation;                                                 // 0x0038   (0x0010)  
	TMap<FString, FString>                             customData;                                                 // 0x0048   (0x0050)  
	int32_t                                            CurrencyChange;                                             // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemBBQ.UnlockTreeItemRequest
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FUnlockTreeItemRequest
{ 
	FString                                            TreeId;                                                     // 0x0000   (0x0010)  
	FString                                            SlotId;                                                     // 0x0010   (0x0010)  
	FString                                            ItemId;                                                     // 0x0020   (0x0010)  
	int32_t                                            ExpectedCost;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            CatalogVersion;                                             // 0x0038   (0x0010)  
	bool                                               DevelopmentMode;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemBBQ.MigrateSkillTreeResponseResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMigrateSkillTreeResponseResult
{ 
	bool                                               IsSucceeded;                                                // 0x0000   (0x0001)  
	bool                                               IsReset;                                                    // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            ErrorCode;                                                  // 0x0004   (0x0004)  
	FString                                            ErrorMsg;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBBQ.ResetUnlockTreeResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FResetUnlockTreeResult
{ 
	bool                                               WasSuccessful;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FString>                                    RevokedItems;                                               // 0x0008   (0x0010)  
	int32_t                                            CurrencyChange;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemBBQ.MigrateSkillTreeRequest
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMigrateSkillTreeRequest
{ 
	FString                                            VersionKey;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBBQ.ResetUnlockTreeRequest
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FResetUnlockTreeRequest
{ 
	FString                                            TreeIdPrefix;                                               // 0x0000   (0x0010)  
	bool                                               IncludeInitialBundle;                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemBBQ.HTTPResponse
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FHTTPResponse
{ 
	bool                                               Succeeded;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            ErrorMsg;                                                   // 0x0008   (0x0010)  
	FString                                            JSONResponseData;                                           // 0x0018   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBBQ.HTTPRequest
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FHTTPRequest
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
	TMap<FString, FString>                             Headers;                                                    // 0x0010   (0x0050)  
	FString                                            Verb;                                                       // 0x0060   (0x0010)  
	FString                                            JSONRequestData;                                            // 0x0070   (0x0010)  
};

/// Struct /Script/OnlineSubsystemBBQ.ListServersServer
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FListServersServer
{ 
	FString                                            PayloadId;                                                  // 0x0000   (0x0010)  
	FString                                            ConnectionString;                                           // 0x0010   (0x0010)  
	FString                                            NetworkVersion;                                             // 0x0020   (0x0010)  
	FString                                            Name;                                                       // 0x0030   (0x0010)  
	int32_t                                            VictimCount;                                                // 0x0040   (0x0004)  
	int32_t                                            FamilyCount;                                                // 0x0044   (0x0004)  
};

/// Struct /Script/OnlineSubsystemBBQ.ListServersResponse
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FListServersResponse
{ 
	TArray<FListServersServer>                         Servers;                                                    // 0x0000   (0x0010)  
	bool                                               Succeeded;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            ErrorMsg;                                                   // 0x0018   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FSessionIdBBQ) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAddCurrencyRequest) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUnlockTreeItemResult) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FUnlockTreeItemRequest) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMigrateSkillTreeResponseResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FResetUnlockTreeResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMigrateSkillTreeRequest) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FResetUnlockTreeRequest) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHTTPResponse) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FHTTPRequest) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FListServersServer) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FListServersResponse) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(FAddCurrencyRequest, Currency) == 0x0008);
static_assert(offsetof(FUnlockTreeItemResult, ItemId) == 0x0008);
static_assert(offsetof(FUnlockTreeItemResult, ItemClass) == 0x0018);
static_assert(offsetof(FUnlockTreeItemResult, ItemInstanceId) == 0x0028);
static_assert(offsetof(FUnlockTreeItemResult, Annotation) == 0x0038);
static_assert(offsetof(FUnlockTreeItemResult, customData) == 0x0048);
static_assert(offsetof(FUnlockTreeItemRequest, TreeId) == 0x0000);
static_assert(offsetof(FUnlockTreeItemRequest, SlotId) == 0x0010);
static_assert(offsetof(FUnlockTreeItemRequest, ItemId) == 0x0020);
static_assert(offsetof(FUnlockTreeItemRequest, CatalogVersion) == 0x0038);
static_assert(offsetof(FMigrateSkillTreeResponseResult, ErrorMsg) == 0x0008);
static_assert(offsetof(FResetUnlockTreeResult, RevokedItems) == 0x0008);
static_assert(offsetof(FMigrateSkillTreeRequest, VersionKey) == 0x0000);
static_assert(offsetof(FResetUnlockTreeRequest, TreeIdPrefix) == 0x0000);
static_assert(offsetof(FHTTPResponse, ErrorMsg) == 0x0008);
static_assert(offsetof(FHTTPResponse, JSONResponseData) == 0x0018);
static_assert(offsetof(FHTTPRequest, URL) == 0x0000);
static_assert(offsetof(FHTTPRequest, Headers) == 0x0010);
static_assert(offsetof(FHTTPRequest, Verb) == 0x0060);
static_assert(offsetof(FHTTPRequest, JSONRequestData) == 0x0070);
static_assert(offsetof(FListServersServer, PayloadId) == 0x0000);
static_assert(offsetof(FListServersServer, ConnectionString) == 0x0010);
static_assert(offsetof(FListServersServer, NetworkVersion) == 0x0020);
static_assert(offsetof(FListServersServer, Name) == 0x0030);
static_assert(offsetof(FListServersResponse, Servers) == 0x0000);
static_assert(offsetof(FListServersResponse, ErrorMsg) == 0x0018);
