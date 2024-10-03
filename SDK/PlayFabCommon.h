
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UPlayFabAuthenticationContext;
class UPlayFabRuntimeSettings;

/// Class /Script/PlayFabCommon.PlayFabAuthenticationContext
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPlayFabAuthenticationContext : public UObject
{ 
public:
	FString                                            ClientSessionTicket;                                        // 0x0028   (0x0010)  
	FString                                            EntityToken;                                                // 0x0038   (0x0010)  
	FString                                            DeveloperSecretKey;                                         // 0x0048   (0x0010)  
	FString                                            PlayFabId;                                                  // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
	void SetPlayFabId(FString InKey) // [0x193cfa0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InKey);
	}
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
	void SetEntityToken(FString InToken) // [0x193ce90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InToken);
	}
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
	void SetDeveloperSecretKey(FString InKey) // [0x193cd80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InKey);
	}
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
	void SetClientSessionTicket(FString InTicket) // [0x193cc70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(InTicket);
	}
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
	FString GetPlayFabId() // [0x193cc40] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
	FString GetEntityToken() // [0x193cc10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
	FString GetDeveloperSecretKey() // [0x193cbe0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
	FString GetClientSessionTicket() // [0x193cbb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func();
	}
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
	void ForgetAllCredentials() // [0x193cb30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func();
	}
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck
	void ClientAdminSecurityCheck() // [0x193cb10] Final|Native|Public|BlueprintCallable|Const 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func();
	}
};

/// Class /Script/PlayFabCommon.PlayFabRuntimeSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPlayFabRuntimeSettings : public UObject
{ 
public:
	FString                                            ProductionEnvironmentURL;                                   // 0x0028   (0x0010)  
	FString                                            TitleID;                                                    // 0x0038   (0x0010)  
	FString                                            DeveloperSecretKey;                                         // 0x0048   (0x0010)  
	FString                                            ConnectionString;                                           // 0x0058   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UPlayFabAuthenticationContext) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UPlayFabRuntimeSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(offsetof(UPlayFabAuthenticationContext, ClientSessionTicket) == 0x0028);
static_assert(offsetof(UPlayFabAuthenticationContext, EntityToken) == 0x0038);
static_assert(offsetof(UPlayFabAuthenticationContext, DeveloperSecretKey) == 0x0048);
static_assert(offsetof(UPlayFabAuthenticationContext, PlayFabId) == 0x0058);
static_assert(offsetof(UPlayFabRuntimeSettings, ProductionEnvironmentURL) == 0x0028);
static_assert(offsetof(UPlayFabRuntimeSettings, TitleID) == 0x0038);
static_assert(offsetof(UPlayFabRuntimeSettings, DeveloperSecretKey) == 0x0048);
static_assert(offsetof(UPlayFabRuntimeSettings, ConnectionString) == 0x0058);
