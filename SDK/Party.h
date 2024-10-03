
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

class UChatroom;
class UPartyMember;
class USocialChatChannel;
class USocialChatManager;
class USocialChatRoom;
class USocialDebugTools;
class USocialGroupChannel;
class USocialManager;
class USocialParty;
class USocialPartyChatRoom;
class USocialPrivateMessageChannel;
class USocialReadOnlyChatChannel;
class USocialSettings;
class USocialToolkit;
class USocialUser;

/// Enum /Script/Party.EApprovalAction
/// Size: 0x01 (1 bytes)
enum class EApprovalAction : uint8_t
{
	EApprovalAction__Approve                                                         = 0,
	EApprovalAction__Enqueue                                                         = 1,
	EApprovalAction__EnqueueAndStartBeacon                                           = 2,
	EApprovalAction__Deny                                                            = 3
};

/// Enum /Script/Party.EPartyJoinDenialReason
/// Size: 0x01 (1 bytes)
enum class EPartyJoinDenialReason : uint8_t
{
	EPartyJoinDenialReason__NoReason                                                 = 0,
	EPartyJoinDenialReason__JoinAttemptAborted                                       = 1,
	EPartyJoinDenialReason__Busy                                                     = 2,
	EPartyJoinDenialReason__OssUnavailable                                           = 3,
	EPartyJoinDenialReason__PartyFull                                                = 4,
	EPartyJoinDenialReason__GameFull                                                 = 5,
	EPartyJoinDenialReason__NotPartyLeader                                           = 6,
	EPartyJoinDenialReason__PartyPrivate                                             = 7,
	EPartyJoinDenialReason__JoinerCrossplayRestricted                                = 8,
	EPartyJoinDenialReason__MemberCrossplayRestricted                                = 9,
	EPartyJoinDenialReason__GameModeRestricted                                       = 10,
	EPartyJoinDenialReason__Banned                                                   = 11,
	EPartyJoinDenialReason__NotLoggedIn                                              = 12,
	EPartyJoinDenialReason__CheckingForRejoin                                        = 13,
	EPartyJoinDenialReason__TargetUserMissingPresence                                = 14,
	EPartyJoinDenialReason__TargetUserUnjoinable                                     = 15,
	EPartyJoinDenialReason__TargetUserAway                                           = 16,
	EPartyJoinDenialReason__AlreadyLeaderInPlatformSession                           = 17,
	EPartyJoinDenialReason__TargetUserPlayingDifferentGame                           = 18,
	EPartyJoinDenialReason__TargetUserMissingPlatformSession                         = 19,
	EPartyJoinDenialReason__PlatformSessionMissingJoinInfo                           = 20,
	EPartyJoinDenialReason__FailedToStartFindConsoleSession                          = 21,
	EPartyJoinDenialReason__MissingPartyClassForTypeId                               = 22,
	EPartyJoinDenialReason__TargetUserBlocked                                        = 23,
	EPartyJoinDenialReason__CustomReason0                                            = 24,
	EPartyJoinDenialReason__CustomReason1                                            = 25,
	EPartyJoinDenialReason__CustomReason2                                            = 26,
	EPartyJoinDenialReason__CustomReason3                                            = 27,
	EPartyJoinDenialReason__CustomReason4                                            = 28,
	EPartyJoinDenialReason__CustomReason5                                            = 29,
	EPartyJoinDenialReason__CustomReason6                                            = 30,
	EPartyJoinDenialReason__CustomReason7                                            = 31,
	EPartyJoinDenialReason__CustomReason8                                            = 32,
	EPartyJoinDenialReason__CustomReason9                                            = 33,
	EPartyJoinDenialReason__CustomReason10                                           = 34,
	EPartyJoinDenialReason__CustomReason11                                           = 35,
	EPartyJoinDenialReason__CustomReason12                                           = 36,
	EPartyJoinDenialReason__CustomReason13                                           = 37,
	EPartyJoinDenialReason__CustomReason14                                           = 38,
	EPartyJoinDenialReason__CustomReason15                                           = 39,
	EPartyJoinDenialReason__CustomReason16                                           = 40,
	EPartyJoinDenialReason__CustomReason17                                           = 41,
	EPartyJoinDenialReason__CustomReason18                                           = 42,
	EPartyJoinDenialReason__CustomReason19                                           = 43,
	EPartyJoinDenialReason__CustomReason20                                           = 44,
	EPartyJoinDenialReason__CustomReason21                                           = 45,
	EPartyJoinDenialReason__CustomReason22                                           = 46,
	EPartyJoinDenialReason__CustomReason23                                           = 47,
	EPartyJoinDenialReason__CustomReason24                                           = 48,
	EPartyJoinDenialReason__CustomReason25                                           = 49,
	EPartyJoinDenialReason__CustomReason26                                           = 50,
	EPartyJoinDenialReason__CustomReason27                                           = 51,
	EPartyJoinDenialReason__CustomReason28                                           = 52,
	EPartyJoinDenialReason__CustomReason29                                           = 53,
	EPartyJoinDenialReason__CustomReason30                                           = 54,
	EPartyJoinDenialReason__CustomReason31                                           = 55,
	EPartyJoinDenialReason__CustomReason32                                           = 56,
	EPartyJoinDenialReason__CustomReason33                                           = 57,
	EPartyJoinDenialReason__CustomReason34                                           = 58,
	EPartyJoinDenialReason__CustomReason35                                           = 59,
	EPartyJoinDenialReason__CustomReason36                                           = 60,
	EPartyJoinDenialReason__CustomReason37                                           = 61,
	EPartyJoinDenialReason__CustomReason38                                           = 62,
	EPartyJoinDenialReason__CustomReason39                                           = 63
};

/// Enum /Script/Party.EPartyInviteRestriction
/// Size: 0x01 (1 bytes)
enum class EPartyInviteRestriction : uint8_t
{
	EPartyInviteRestriction__AnyMember                                               = 0,
	EPartyInviteRestriction__LeaderOnly                                              = 1,
	EPartyInviteRestriction__NoInvites                                               = 2
};

/// Enum /Script/Party.EPartyType
/// Size: 0x01 (1 bytes)
enum class EPartyType : uint8_t
{
	EPartyType__Public                                                               = 0,
	EPartyType__FriendsOnly                                                          = 1,
	EPartyType__Private                                                              = 2
};

/// Enum /Script/Party.ESocialChannelType
/// Size: 0x01 (1 bytes)
enum class ESocialChannelType : uint8_t
{
	ESocialChannelType__General                                                      = 0,
	ESocialChannelType__Founder                                                      = 1,
	ESocialChannelType__Party                                                        = 2,
	ESocialChannelType__Team                                                         = 3,
	ESocialChannelType__System                                                       = 4,
	ESocialChannelType__Private                                                      = 5
};

/// Enum /Script/Party.EPlatformIconDisplayRule
/// Size: 0x01 (1 bytes)
enum class EPlatformIconDisplayRule : uint8_t
{
	EPlatformIconDisplayRule__Always                                                 = 0,
	EPlatformIconDisplayRule__AlwaysIfDifferent                                      = 1,
	EPlatformIconDisplayRule__AlwaysWhenInCrossplayParty                             = 2,
	EPlatformIconDisplayRule__AlwaysIfDifferentWhenInCrossplayParty                  = 3,
	EPlatformIconDisplayRule__Never                                                  = 4
};

/// Enum /Script/Party.ECrossplayPreference
/// Size: 0x01 (1 bytes)
enum class ECrossplayPreference : uint8_t
{
	ECrossplayPreference__NoSelection                                                = 0,
	ECrossplayPreference__OptedIn                                                    = 1,
	ECrossplayPreference__OptedOut                                                   = 2,
	ECrossplayPreference__OptedOutRestricted                                         = 3
};

/// Enum /Script/Party.ESocialRelationship
/// Size: 0x01 (1 bytes)
enum class ESocialRelationship : uint8_t
{
	ESocialRelationship__Any                                                         = 0,
	ESocialRelationship__FriendInviteReceived                                        = 1,
	ESocialRelationship__FriendInviteSent                                            = 2,
	ESocialRelationship__PartyInvite                                                 = 3,
	ESocialRelationship__Friend                                                      = 4,
	ESocialRelationship__BlockedPlayer                                               = 5,
	ESocialRelationship__SuggestedFriend                                             = 6,
	ESocialRelationship__RecentPlayer                                                = 7
};

/// Enum /Script/Party.ESocialSubsystem
/// Size: 0x01 (1 bytes)
enum class ESocialSubsystem : uint8_t
{
	ESocialSubsystem__Primary                                                        = 0,
	ESocialSubsystem__Platform                                                       = 1
};

/// Struct /Script/Party.SocialPlatformDescription
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FSocialPlatformDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            PlatformType;                                               // 0x0010   (0x0010)  
	FName                                              OnlineSubsystem;                                            // 0x0020   (0x0008)  
	FString                                            SessionType;                                                // 0x0028   (0x0010)  
	FString                                            ExternalAccountType;                                        // 0x0038   (0x0010)  
	FString                                            CrossplayPool;                                              // 0x0048   (0x0010)  
};

/// Struct /Script/Party.OnlinePartyRepDataBase
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FOnlinePartyRepDataBase
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/Party.UserPlatform
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FUserPlatform
{ 
	FSocialPlatformDescription                         PlatformDescription;                                        // 0x0000   (0x0058)  
};

/// Struct /Script/Party.PartyMemberRepData
/// Size: 0x0178 (376 bytes) (0x000018 - 0x000178) align 8 MaxSize: 0x0178
struct FPartyMemberRepData : FOnlinePartyRepDataBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0018   (0x0008)  MISSED
	FUserPlatform                                      PLATFORM;                                                   // 0x0020   (0x0058)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0078   (0x0030)  MISSED
	FUniqueNetIdRepl                                   PlatformUniqueId;                                           // 0x00A8   (0x0028)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x00D0   (0x0030)  MISSED
	FString                                            PlatformSessionId;                                          // 0x0100   (0x0010)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x0110   (0x0030)  MISSED
	ECrossplayPreference                               CrossplayPreference;                                        // 0x0140   (0x0001)  
	unsigned char                                      UnknownData04_7[0x37];                                      // 0x0141   (0x0037)  MISSED
};

/// Struct /Script/Party.PartyPrivacySettings
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FPartyPrivacySettings
{ 
	EPartyType                                         PartyType;                                                  // 0x0000   (0x0001)  
	EPartyInviteRestriction                            PartyInviteRestriction;                                     // 0x0001   (0x0001)  
	bool                                               bOnlyLeaderFriendsCanJoin;                                  // 0x0002   (0x0001)  
};

/// Struct /Script/Party.PartyPlatformSessionInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FPartyPlatformSessionInfo
{ 
	FString                                            SessionType;                                                // 0x0000   (0x0010)  
	FString                                            SessionId;                                                  // 0x0010   (0x0010)  
	FUniqueNetIdRepl                                   OwnerPrimaryId;                                             // 0x0020   (0x0028)  
};

/// Struct /Script/Party.SocialChatChannelConfig
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FSocialChatChannelConfig
{ 
	class USocialUser*                                 SocialUser;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
	TArray<class USocialChatChannel*>                  ListenChannels;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Struct /Script/Party.PartyRepData
/// Size: 0x0080 (128 bytes) (0x000018 - 0x000080) align 8 MaxSize: 0x0080
struct FPartyRepData : FOnlinePartyRepDataBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0018   (0x0008)  MISSED
	FPartyPrivacySettings                              PrivacySettings;                                            // 0x0020   (0x0003)  
	unsigned char                                      UnknownData01_6[0x35];                                      // 0x0023   (0x0035)  MISSED
	TArray<FPartyPlatformSessionInfo>                  PlatformSessions;                                           // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Class /Script/Party.Chatroom
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UChatroom : public UObject
{ 
public:
	FString                                            CurrentChatRoomId;                                          // 0x0028   (0x0010)  
	int32_t                                            MaxChatRoomRetries;                                         // 0x0038   (0x0004)  
	int32_t                                            NumChatRoomRetries;                                         // 0x003C   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/Party.SocialManager
/// Size: 0x01A8 (424 bytes) (0x000028 - 0x0001A8) align 8 MaxSize: 0x01A8
class USocialManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0028   (0x0028)  MISSED
	TArray<class USocialToolkit*>                      SocialToolkits;                                             // 0x0050   (0x0010)  
	class USocialDebugTools*                           SocialDebugTools;                                           // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_7[0x140];                                     // 0x0068   (0x0140)  MISSED
};

/// Class /Script/Party.SocialParty
/// Size: 0x02C0 (704 bytes) (0x000028 - 0x0002C0) align 16 MaxSize: 0x02C0
class USocialParty : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0028   (0x0030)  MISSED
	class UClass*                                      ReservationBeaconClientClass;                               // 0x0058   (0x0008)  
	class UClass*                                      SpectatorBeaconClientClass;                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0068   (0x0010)  MISSED
	FUniqueNetIdRepl                                   OwningLocalUserId;                                          // 0x0078   (0x0028)  
	FUniqueNetIdRepl                                   CurrentLeaderId;                                            // 0x00A0   (0x0028)  
	TMap<FUniqueNetIdRepl, class UPartyMember*>        PartyMembersById;                                           // 0x00C8   (0x0050)  
	bool                                               bEnableAutomaticPartyRejoin;                                // 0x0118   (0x0001)  
	unsigned char                                      UnknownData02_6[0x77];                                      // 0x0119   (0x0077)  MISSED
	class APartyBeaconClient*                          ReservationBeaconClient;                                    // 0x0190   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0198   (0x0008)  MISSED
	class ASpectatorBeaconClient*                      SpectatorBeaconClient;                                      // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x118];                                     // 0x01A8   (0x0118)  MISSED
};

/// Class /Script/Party.PartyMember
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 8 MaxSize: 0x00F0
class UPartyMember : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0028   (0x0040)  MISSED
	class USocialUser*                                 SocialUser;                                                 // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_7[0x80];                                      // 0x0070   (0x0080)  MISSED
};

/// Class /Script/Party.SocialToolkit
/// Size: 0x01F8 (504 bytes) (0x000028 - 0x0001F8) align 8 MaxSize: 0x01F8
class USocialToolkit : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0028   (0x0040)  MISSED
	class USocialUser*                                 LocalUser;                                                  // 0x0068   (0x0008)  
	TArray<class USocialUser*>                         AllUsers;                                                   // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0080   (0x0050)  MISSED
	class ULocalPlayer*                                LocalPlayerOwner;                                           // 0x00D0   (0x0008)  
	class USocialChatManager*                          SocialChatManager;                                          // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x118];                                     // 0x00E0   (0x0118)  MISSED
};

/// Class /Script/Party.SocialChatManager
/// Size: 0x0220 (544 bytes) (0x000028 - 0x000220) align 8 MaxSize: 0x0220
class USocialChatManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0028   (0x0050)  MISSED
	SDK_UNDEFINED(80,811) /* TMap<TWeakObjectPtr<USocialUser*>, class USocialPrivateMessageChannel*> */ __um(DirectChannelsByTargetUser); // 0x0078   (0x0050)  
	TMap<FString, class USocialChatRoom*>              ChatRoomsById;                                              // 0x00C8   (0x0050)  
	TMap<FString, class USocialReadOnlyChatChannel*>   ReadOnlyChannelsByDisplayName;                              // 0x0118   (0x0050)  
	bool                                               bEnableChatSlashCommands;                                   // 0x0168   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0169   (0x0007)  MISSED
	TMap<FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                                              // 0x0170   (0x0050)  
	unsigned char                                      UnknownData02_7[0x60];                                      // 0x01C0   (0x0060)  MISSED
};

/// Class /Script/Party.SocialChatChannel
/// Size: 0x00E8 (232 bytes) (0x000028 - 0x0000E8) align 8 MaxSize: 0x00E8
class USocialChatChannel : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0028   (0x00C0)  MISSED
};

/// Class /Script/Party.SocialChatRoom
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
class USocialChatRoom : public USocialChatChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00E8   (0x0010)  MISSED
};

/// Class /Script/Party.SocialDebugTools
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class USocialDebugTools : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Class /Script/Party.SocialGroupChannel
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class USocialGroupChannel : public UObject
{ 
public:
	class USocialUser*                                 SocialUser;                                                 // 0x0028   (0x0008)  
	FUniqueNetIdRepl                                   GroupID;                                                    // 0x0030   (0x0028)  
	FText                                              DisplayName;                                                // 0x0058   (0x0018)  
	TArray<class USocialUser*>                         Members;                                                    // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/Party.SocialPartyChatRoom
/// Size: 0x00F8 (248 bytes) (0x0000F8 - 0x0000F8) align 8 MaxSize: 0x00F8
class USocialPartyChatRoom : public USocialChatRoom
{ 
public:
};

/// Class /Script/Party.SocialPrivateMessageChannel
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
class USocialPrivateMessageChannel : public USocialChatChannel
{ 
public:
	class USocialUser*                                 TargetUser;                                                 // 0x00E8   (0x0008)  
};

/// Class /Script/Party.SocialReadOnlyChatChannel
/// Size: 0x00E8 (232 bytes) (0x0000E8 - 0x0000E8) align 8 MaxSize: 0x00E8
class USocialReadOnlyChatChannel : public USocialChatChannel
{ 
public:
};

/// Class /Script/Party.SocialSettings
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class USocialSettings : public UObject
{ 
public:
	TArray<FName>                                      OssNamesWithEnvironmentIdPrefix;                            // 0x0028   (0x0010)  
	int32_t                                            DefaultMaxPartySize;                                        // 0x0038   (0x0004)  
	bool                                               bPreferPlatformInvites;                                     // 0x003C   (0x0001)  
	bool                                               bMustSendPrimaryInvites;                                    // 0x003D   (0x0001)  
	bool                                               bLeavePartyOnDisconnect;                                    // 0x003E   (0x0001)  
	bool                                               bSetDesiredPrivacyOnLocalPlayerBecomesLeader;               // 0x003F   (0x0001)  
	float                                              UserListAutoUpdateRate;                                     // 0x0040   (0x0004)  
	int32_t                                            MinNicknameLength;                                          // 0x0044   (0x0004)  
	int32_t                                            MaxNicknameLength;                                          // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FSocialPlatformDescription>                 SocialPlatformDescriptions;                                 // 0x0050   (0x0010)  
};

/// Class /Script/Party.SocialUser
/// Size: 0x0168 (360 bytes) (0x000028 - 0x000168) align 8 MaxSize: 0x0168
class USocialUser : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x140];                                     // 0x0028   (0x0140)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UChatroom) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(USocialManager) == 0x01A8); // 424 bytes (0x000028 - 0x0001A8)
static_assert(sizeof(USocialParty) == 0x02C0); // 704 bytes (0x000028 - 0x0002C0)
static_assert(sizeof(UPartyMember) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(USocialToolkit) == 0x01F8); // 504 bytes (0x000028 - 0x0001F8)
static_assert(sizeof(USocialChatManager) == 0x0220); // 544 bytes (0x000028 - 0x000220)
static_assert(sizeof(USocialChatChannel) == 0x00E8); // 232 bytes (0x000028 - 0x0000E8)
static_assert(sizeof(USocialChatRoom) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(USocialDebugTools) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(USocialGroupChannel) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(USocialPartyChatRoom) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(sizeof(USocialPrivateMessageChannel) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(USocialReadOnlyChatChannel) == 0x00E8); // 232 bytes (0x0000E8 - 0x0000E8)
static_assert(sizeof(FSocialPlatformDescription) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(USocialSettings) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(USocialUser) == 0x0168); // 360 bytes (0x000028 - 0x000168)
static_assert(sizeof(FOnlinePartyRepDataBase) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUserPlatform) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FPartyMemberRepData) == 0x0178); // 376 bytes (0x000018 - 0x000178)
static_assert(sizeof(FPartyPrivacySettings) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FPartyPlatformSessionInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSocialChatChannelConfig) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPartyRepData) == 0x0080); // 128 bytes (0x000018 - 0x000080)
static_assert(offsetof(UChatroom, CurrentChatRoomId) == 0x0028);
static_assert(offsetof(USocialManager, SocialToolkits) == 0x0050);
static_assert(offsetof(USocialManager, SocialDebugTools) == 0x0060);
static_assert(offsetof(USocialParty, ReservationBeaconClientClass) == 0x0058);
static_assert(offsetof(USocialParty, SpectatorBeaconClientClass) == 0x0060);
static_assert(offsetof(USocialParty, OwningLocalUserId) == 0x0078);
static_assert(offsetof(USocialParty, CurrentLeaderId) == 0x00A0);
static_assert(offsetof(USocialParty, PartyMembersById) == 0x00C8);
static_assert(offsetof(USocialParty, ReservationBeaconClient) == 0x0190);
static_assert(offsetof(USocialParty, SpectatorBeaconClient) == 0x01A0);
static_assert(offsetof(UPartyMember, SocialUser) == 0x0068);
static_assert(offsetof(USocialToolkit, LocalUser) == 0x0068);
static_assert(offsetof(USocialToolkit, AllUsers) == 0x0070);
static_assert(offsetof(USocialToolkit, LocalPlayerOwner) == 0x00D0);
static_assert(offsetof(USocialToolkit, SocialChatManager) == 0x00D8);
static_assert(offsetof(USocialChatManager, ChatRoomsById) == 0x00C8);
static_assert(offsetof(USocialChatManager, ReadOnlyChannelsByDisplayName) == 0x0118);
static_assert(offsetof(USocialChatManager, GroupChannels) == 0x0170);
static_assert(offsetof(USocialGroupChannel, SocialUser) == 0x0028);
static_assert(offsetof(USocialGroupChannel, GroupID) == 0x0030);
static_assert(offsetof(USocialGroupChannel, DisplayName) == 0x0058);
static_assert(offsetof(USocialGroupChannel, Members) == 0x0070);
static_assert(offsetof(USocialPrivateMessageChannel, TargetUser) == 0x00E8);
static_assert(offsetof(FSocialPlatformDescription, Name) == 0x0000);
static_assert(offsetof(FSocialPlatformDescription, PlatformType) == 0x0010);
static_assert(offsetof(FSocialPlatformDescription, OnlineSubsystem) == 0x0020);
static_assert(offsetof(FSocialPlatformDescription, SessionType) == 0x0028);
static_assert(offsetof(FSocialPlatformDescription, ExternalAccountType) == 0x0038);
static_assert(offsetof(FSocialPlatformDescription, CrossplayPool) == 0x0048);
static_assert(offsetof(USocialSettings, OssNamesWithEnvironmentIdPrefix) == 0x0028);
static_assert(offsetof(USocialSettings, SocialPlatformDescriptions) == 0x0050);
static_assert(offsetof(FUserPlatform, PlatformDescription) == 0x0000);
static_assert(offsetof(FPartyMemberRepData, PLATFORM) == 0x0020);
static_assert(offsetof(FPartyMemberRepData, PlatformUniqueId) == 0x00A8);
static_assert(offsetof(FPartyMemberRepData, PlatformSessionId) == 0x0100);
static_assert(offsetof(FPartyMemberRepData, CrossplayPreference) == 0x0140);
static_assert(offsetof(FPartyPrivacySettings, PartyType) == 0x0000);
static_assert(offsetof(FPartyPrivacySettings, PartyInviteRestriction) == 0x0001);
static_assert(offsetof(FPartyPlatformSessionInfo, SessionType) == 0x0000);
static_assert(offsetof(FPartyPlatformSessionInfo, SessionId) == 0x0010);
static_assert(offsetof(FPartyPlatformSessionInfo, OwnerPrimaryId) == 0x0020);
static_assert(offsetof(FSocialChatChannelConfig, SocialUser) == 0x0000);
static_assert(offsetof(FSocialChatChannelConfig, ListenChannels) == 0x0018);
static_assert(offsetof(FPartyRepData, PrivacySettings) == 0x0020);
static_assert(offsetof(FPartyRepData, PlatformSessions) == 0x0058);
