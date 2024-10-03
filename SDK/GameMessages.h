
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UGameMessage;
class UGameMessagesQueue;
class UUGameMessagesQueueBlueprintLibrary;

/// Enum /Script/GameMessages.EGameMessageHandlerAction
/// Size: 0x01 (1 bytes)
enum class EGameMessageHandlerAction : uint8_t
{
	EGameMessageHandlerAction__None                                                  = 0,
	EGameMessageHandlerAction__Accept                                                = 1,
	EGameMessageHandlerAction__Cancel                                                = 2,
	EGameMessageHandlerAction__Repeat                                                = 3
};

/// Enum /Script/GameMessages.EGameMessagePriority
/// Size: 0x01 (1 bytes)
enum class EGameMessagePriority : uint8_t
{
	EGameMessagePriority__None                                                       = 0,
	EGameMessagePriority__VeryLow                                                    = 1,
	EGameMessagePriority__Low                                                        = 2,
	EGameMessagePriority__Normal                                                     = 3,
	EGameMessagePriority__High                                                       = 4,
	EGameMessagePriority__VeryHigh                                                   = 5
};

/// Enum /Script/GameMessages.EGameMessageSeverity
/// Size: 0x01 (1 bytes)
enum class EGameMessageSeverity : uint8_t
{
	EGameMessageSeverity__None                                                       = 0,
	EGameMessageSeverity__Minor                                                      = 1,
	EGameMessageSeverity__Major                                                      = 2,
	EGameMessageSeverity__Critical                                                   = 3
};

/// Struct /Script/GameMessages.GameMessageInstance
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameMessageInstance
{ 
	class UGameMessage*                                Message;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0008   (0x0038)  MISSED
};

/// Class /Script/GameMessages.GameMessage
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGameMessage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	EGameMessagePriority                               Priority;                                                   // 0x0038   (0x0001)  
	EGameMessageSeverity                               Severity;                                                   // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            HandlerActions;                                             // 0x003C   (0x0004)  


	/// Functions
	// Function /Script/GameMessages.GameMessage.OnMessageReported
	void OnMessageReported() // [0xb88770] Native|Event|Public|BlueprintEvent|Const 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func();
	}
	// Function /Script/GameMessages.GameMessage.OnMessageHandled
	void OnMessageHandled(EGameMessageHandlerAction HandlerAction) // [0x149bfc0] Native|Event|Public|BlueprintEvent|Const 
	{
		typedef void (*FuncPtr)(EGameMessageHandlerAction);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(HandlerAction);
	}
	// Function /Script/GameMessages.GameMessage.FormatText
	FText FormatText(FText& Text) // [0x149bdf0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	{
		typedef FText (*FuncPtr)(FText&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Text);
	}
	// Function /Script/GameMessages.GameMessage.CanBeHandled
	bool CanBeHandled() // [0x113bcf0] Native|Event|Public|BlueprintEvent|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
};

/// Class /Script/GameMessages.GameMessagesQueue
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGameMessagesQueue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<FGameMessageInstance>                       MessageQueue;                                               // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/GameMessages.GameMessagesQueue.ReportMessage
	// bool ReportMessage(UGameMessage* Message, APlayerController* PlayerController, FDelegateProperty OnMessageHandled);      // [0x149c040] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameMessages.GameMessagesQueue.CreateAndReportMessage
	// bool CreateAndReportMessage(UClass* MessageClass, APlayerController* PlayerController, FDelegateProperty OnMessageHandled); // [0x149bcc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameMessages.UGameMessagesQueueBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUGameMessagesQueueBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameMessages.UGameMessagesQueueBlueprintLibrary.GetGameMessagesQueue
	UGameMessagesQueue* GetGameMessagesQueue(UObject* WorldContextObject) // [0x149bf30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef class UGameMessagesQueue* (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(WorldContextObject);
	}
};

#pragma pack(pop)


static_assert(sizeof(UGameMessage) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FGameMessageInstance) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UGameMessagesQueue) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UUGameMessagesQueueBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UGameMessage, Priority) == 0x0038);
static_assert(offsetof(UGameMessage, Severity) == 0x0039);
static_assert(offsetof(FGameMessageInstance, Message) == 0x0000);
static_assert(offsetof(UGameMessagesQueue, MessageQueue) == 0x0030);
