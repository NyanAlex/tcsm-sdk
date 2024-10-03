
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UBlueprintGameplayTagLibrary;
class UEditableGameplayTagQuery;
class UEditableGameplayTagQueryExpression;
class UEditableGameplayTagQueryExpression_AllExprMatch;
class UEditableGameplayTagQueryExpression_AllTagsMatch;
class UEditableGameplayTagQueryExpression_AnyExprMatch;
class UEditableGameplayTagQueryExpression_AnyTagsMatch;
class UEditableGameplayTagQueryExpression_NoExprMatch;
class UEditableGameplayTagQueryExpression_NoTagsMatch;
class UGameplayTagAssetInterface;
class UGameplayTagsDeveloperSettings;
class UGameplayTagsList;
class UGameplayTagsManager;
class UGameplayTagsSettings;
class URestrictedGameplayTagsList;

/// Enum /Script/GameplayTags.EGameplayTagQueryExprType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined                                             = 0,
	EGameplayTagQueryExprType__AnyTagsMatch                                          = 1,
	EGameplayTagQueryExprType__AllTagsMatch                                          = 2,
	EGameplayTagQueryExprType__NoTagsMatch                                           = 3,
	EGameplayTagQueryExprType__AnyExprMatch                                          = 4,
	EGameplayTagQueryExprType__AllExprMatch                                          = 5,
	EGameplayTagQueryExprType__NoExprMatch                                           = 6
};

/// Enum /Script/GameplayTags.EGameplayContainerMatchType
/// Size: 0x01 (1 bytes)
enum class EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any                                                 = 0,
	EGameplayContainerMatchType__All                                                 = 1
};

/// Enum /Script/GameplayTags.EGameplayTagMatchType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit                                                  = 0,
	EGameplayTagMatchType__IncludeParentTags                                         = 1
};

/// Enum /Script/GameplayTags.EGameplayTagSelectionType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None                                                  = 0,
	EGameplayTagSelectionType__NonRestrictedOnly                                     = 1,
	EGameplayTagSelectionType__RestrictedOnly                                        = 2,
	EGameplayTagSelectionType__All                                                   = 3
};

/// Enum /Script/GameplayTags.EGameplayTagSourceType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native                                                   = 0,
	EGameplayTagSourceType__DefaultTagList                                           = 1,
	EGameplayTagSourceType__TagList                                                  = 2,
	EGameplayTagSourceType__RestrictedTagList                                        = 3,
	EGameplayTagSourceType__DataTable                                                = 4,
	EGameplayTagSourceType__Invalid                                                  = 5
};

/// Struct /Script/GameplayTags.GameplayTag
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGameplayTag
{ 
	FName                                              TagName;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/GameplayTags.GameplayTagQuery
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayTagQuery
{ 
	int32_t                                            TokenStreamVersion;                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FGameplayTag>                               TagDictionary;                                              // 0x0008   (0x0010)  
	TArray<char>                                       QueryTokenStream;                                           // 0x0018   (0x0010)  
	FString                                            UserDescription;                                            // 0x0028   (0x0010)  
	FString                                            AutoDescription;                                            // 0x0038   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagContainer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagContainer
{ 
	TArray<FGameplayTag>                               GameplayTags;                                               // 0x0000   (0x0010)  
	TArray<FGameplayTag>                               ParentTags;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagSource
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagSource
{ 
	FName                                              SourceName;                                                 // 0x0000   (0x0008)  
	EGameplayTagSourceType                             SourceType;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UGameplayTagsList*                           SourceTagList;                                              // 0x0010   (0x0008)  
	class URestrictedGameplayTagsList*                 SourceRestrictedTagList;                                    // 0x0018   (0x0008)  
};

/// Struct /Script/GameplayTags.GameplayTagTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagTableRow : FTableRowBase
{ 
	FName                                              Tag;                                                        // 0x0008   (0x0008)  
	FString                                            DevComment;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayTags.RestrictedGameplayTagTableRow
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{ 
	bool                                               bAllowNonRestrictedChildren;                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagCategoryRemap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagCategoryRemap
{ 
	FString                                            BaseCategory;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    RemapCategories;                                            // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagRedirect
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGameplayTagRedirect
{ 
	FName                                              OldTagName;                                                 // 0x0000   (0x0008)  
	FName                                              NewTagName;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayTags.RestrictedConfigInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRestrictedConfigInfo
{ 
	FString                                            RestrictedConfigName;                                       // 0x0000   (0x0010)  
	TArray<FString>                                    Owners;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayTags.GameplayTagCreationWidgetHelper
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGameplayTagCreationWidgetHelper
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagReferenceHelper
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayTagReferenceHelper
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayTags.GameplayTagNode
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayTagNode
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Class /Script/GameplayTags.BlueprintGameplayTagLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag) // [0x37ea8a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&, FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(TagContainer, Tag);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	bool NotEqual_TagTag(FGameplayTag A, FString B) // [0x37ea770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTag, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(A, B);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B) // [0x37ea600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(A, B);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	bool NotEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B) // [0x37ea4b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&, FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(A, B);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B) // [0xc93630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTag, FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(A, B);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch) // [0x37ea3b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTag, FGameplayTag, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(TagOne, TagTwo, bExactMatch);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	bool MatchesAnyTags(FGameplayTag TagOne, FGameplayTagContainer& OtherContainer, bool bExactMatch) // [0x37ea260] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTag, FGameplayTagContainer&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(TagOne, OtherContainer, bExactMatch);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value) // [0x37ea150] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayTagContainer (*FuncPtr)(FGameplayTagContainer);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(Value);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value) // [0x37ea0c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayTag (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(Value);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery) // [0x37e9f90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayTagQuery (*FuncPtr)(FGameplayTagQuery);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(TagQuery);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag) // [0x37e9ee0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FGameplayTagContainer (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(SingleTag);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	// FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<FGameplayTag>& GameplayTags);                             // [0x37e9e10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
	bool IsTagQueryEmpty(FGameplayTagQuery& TagQuery) // [0x37e9d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTagQuery&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(TagQuery);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	bool IsGameplayTagValid(FGameplayTag GameplayTag) // [0xc934b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(GameplayTag);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasTag
	bool HasTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch) // [0x37e9be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&, FGameplayTag, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(TagContainer, Tag, bExactMatch);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	bool HasAnyTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch) // [0x37e99b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&, FGameplayTagContainer&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		return func(TagContainer, OtherContainer, bExactMatch);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	bool HasAllTags(FGameplayTagContainer& TagContainer, FGameplayTagContainer& OtherContainer, bool bExactMatch) // [0x37e9750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&, FGameplayTagContainer&, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(TagContainer, OtherContainer, bExactMatch);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	// bool HasAllMatchingGameplayTags(TScriptInterface<Class> TagContainerInterface, FGameplayTagContainer& OtherContainer);   // [0x37e9630] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	FName GetTagName(FGameplayTag& GameplayTag) // [0x37e94c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef FName (*FuncPtr)(FGameplayTag&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(GameplayTag);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	int32_t GetNumGameplayTagsInContainer(FGameplayTagContainer& TagContainer) // [0x37e9340] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef int32_t (*FuncPtr)(FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(TagContainer);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	FString GetDebugStringFromGameplayTagContainer(FGameplayTagContainer& TagContainer) // [0x37e9240] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(TagContainer);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag) // [0xc92fd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FString (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[21]);
		return func(GameplayTag);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	// void GetAllActorsOfClassMatchingTagQuery(UObject* WorldContextObject, UClass* ActorClass, FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors); // [0x37e9060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	bool EqualEqual_GameplayTagContainer(FGameplayTagContainer& A, FGameplayTagContainer& B) // [0x37e8f10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&, FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(A, B);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B) // [0xc93190] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTag, FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(A, B);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	// bool DoesTagAssetInterfaceHaveTag(TScriptInterface<Class> TagContainerInterface, FGameplayTag Tag);                      // [0x37e8e20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	bool DoesContainerMatchTagQuery(FGameplayTagContainer& TagContainer, FGameplayTagQuery& TagQuery) // [0x37e8cc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&, FGameplayTagQuery&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(TagContainer, TagQuery);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	// void BreakGameplayTagContainer(FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);         // [0x37e8ba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, FGameplayTagContainer& InTagContainer) // [0x37e8a70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer&, FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		func(InOutTagContainer, InTagContainer);
	}
	// Function /Script/GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
	void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag) // [0x37e8970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer&, FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[29]);
		func(TagContainer, Tag);
	}
};

/// Class /Script/GameplayTags.GameplayTagAssetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayTagAssetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	bool HasMatchingGameplayTag(FGameplayTag TagToCheck) // [0x37e9b40] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTag);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(TagToCheck);
	}
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	bool HasAnyMatchingGameplayTags(FGameplayTagContainer& TagContainer) // [0x37e98e0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(TagContainer);
	}
	// Function /Script/GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	bool HasAllMatchingGameplayTags(FGameplayTagContainer& TagContainer) // [0x37e9560] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)(FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(TagContainer);
	}
	// Function /Script/GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) // [0x37e9400] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	{
		typedef void (*FuncPtr)(FGameplayTagContainer&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(TagContainer);
	}
};

/// Class /Script/GameplayTags.EditableGameplayTagQuery
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UEditableGameplayTagQuery : public UObject
{ 
public:
	FString                                            UserDescription;                                            // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
	class UEditableGameplayTagQueryExpression*         RootExpression;                                             // 0x0048   (0x0008)  
	FGameplayTagQuery                                  TagQueryExportText_Helper;                                  // 0x0050   (0x0048)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEditableGameplayTagQueryExpression : public UObject
{ 
public:
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{ 
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsManager
/// Size: 0x0240 (576 bytes) (0x000028 - 0x000240) align 8 MaxSize: 0x0240
class UGameplayTagsManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x138];                                     // 0x0028   (0x0138)  MISSED
	TMap<FName, FGameplayTagSource>                    TagSources;                                                 // 0x0160   (0x0050)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x01B0   (0x0080)  MISSED
	TArray<class UDataTable*>                          GameplayTagTables;                                          // 0x0230   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UGameplayTagsList : public UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0028   (0x0010)  
	TArray<FGameplayTagTableRow>                       GameplayTagList;                                            // 0x0038   (0x0010)  
};

/// Class /Script/GameplayTags.RestrictedGameplayTagsList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class URestrictedGameplayTagsList : public UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0028   (0x0010)  
	TArray<FRestrictedGameplayTagTableRow>             RestrictedGameplayTagList;                                  // 0x0038   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsSettings
/// Size: 0x00B8 (184 bytes) (0x000048 - 0x0000B8) align 8 MaxSize: 0x00B8
class UGameplayTagsSettings : public UGameplayTagsList
{ 
public:
	bool                                               ImportTagsFromConfig;                                       // 0x0048   (0x0001)  
	bool                                               WarnOnInvalidTags;                                          // 0x0049   (0x0001)  
	bool                                               ClearInvalidTags;                                           // 0x004A   (0x0001)  
	bool                                               FastReplication;                                            // 0x004B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            InvalidTagCharacters;                                       // 0x0050   (0x0010)  
	TArray<FGameplayTagCategoryRemap>                  CategoryRemapping;                                          // 0x0060   (0x0010)  
	TArray<FSoftObjectPath>                            GameplayTagTableList;                                       // 0x0070   (0x0010)  
	TArray<FGameplayTagRedirect>                       GameplayTagRedirects;                                       // 0x0080   (0x0010)  
	TArray<FName>                                      CommonlyReplicatedTags;                                     // 0x0090   (0x0010)  
	int32_t                                            NumBitsForContainerSize;                                    // 0x00A0   (0x0004)  
	int32_t                                            NetIndexFirstBitSegment;                                    // 0x00A4   (0x0004)  
	TArray<FRestrictedConfigInfo>                      RestrictedConfigFiles;                                      // 0x00A8   (0x0010)  
};

/// Class /Script/GameplayTags.GameplayTagsDeveloperSettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{ 
public:
	FString                                            DeveloperConfigName;                                        // 0x0038   (0x0010)  
	FName                                              FavoriteTagSource;                                          // 0x0048   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UBlueprintGameplayTagLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayTagAssetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayTag) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGameplayTagQuery) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQuery) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UEditableGameplayTagQueryExpression) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayTagContainer) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyTagsMatch) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AllTagsMatch) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQueryExpression_NoTagsMatch) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyExprMatch) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEditableGameplayTagQueryExpression_AllExprMatch) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEditableGameplayTagQueryExpression_NoExprMatch) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FGameplayTagSource) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGameplayTagsManager) == 0x0240); // 576 bytes (0x000028 - 0x000240)
static_assert(sizeof(FGameplayTagTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(UGameplayTagsList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FRestrictedGameplayTagTableRow) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(URestrictedGameplayTagsList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FGameplayTagCategoryRemap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayTagRedirect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRestrictedConfigInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGameplayTagsSettings) == 0x00B8); // 184 bytes (0x000048 - 0x0000B8)
static_assert(sizeof(UGameplayTagsDeveloperSettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FGameplayTagCreationWidgetHelper) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGameplayTagReferenceHelper) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayTagNode) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(FGameplayTag, TagName) == 0x0000);
static_assert(offsetof(FGameplayTagQuery, TagDictionary) == 0x0008);
static_assert(offsetof(FGameplayTagQuery, QueryTokenStream) == 0x0018);
static_assert(offsetof(FGameplayTagQuery, UserDescription) == 0x0028);
static_assert(offsetof(FGameplayTagQuery, AutoDescription) == 0x0038);
static_assert(offsetof(UEditableGameplayTagQuery, UserDescription) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQuery, RootExpression) == 0x0048);
static_assert(offsetof(UEditableGameplayTagQuery, TagQueryExportText_Helper) == 0x0050);
static_assert(offsetof(FGameplayTagContainer, GameplayTags) == 0x0000);
static_assert(offsetof(FGameplayTagContainer, ParentTags) == 0x0010);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyTagsMatch, Tags) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AllTagsMatch, Tags) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_NoTagsMatch, Tags) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AnyExprMatch, Expressions) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_AllExprMatch, Expressions) == 0x0028);
static_assert(offsetof(UEditableGameplayTagQueryExpression_NoExprMatch, Expressions) == 0x0028);
static_assert(offsetof(FGameplayTagSource, SourceName) == 0x0000);
static_assert(offsetof(FGameplayTagSource, SourceType) == 0x0008);
static_assert(offsetof(FGameplayTagSource, SourceTagList) == 0x0010);
static_assert(offsetof(FGameplayTagSource, SourceRestrictedTagList) == 0x0018);
static_assert(offsetof(UGameplayTagsManager, TagSources) == 0x0160);
static_assert(offsetof(UGameplayTagsManager, GameplayTagTables) == 0x0230);
static_assert(offsetof(FGameplayTagTableRow, Tag) == 0x0008);
static_assert(offsetof(FGameplayTagTableRow, DevComment) == 0x0010);
static_assert(offsetof(UGameplayTagsList, ConfigFileName) == 0x0028);
static_assert(offsetof(UGameplayTagsList, GameplayTagList) == 0x0038);
static_assert(offsetof(URestrictedGameplayTagsList, ConfigFileName) == 0x0028);
static_assert(offsetof(URestrictedGameplayTagsList, RestrictedGameplayTagList) == 0x0038);
static_assert(offsetof(FGameplayTagCategoryRemap, BaseCategory) == 0x0000);
static_assert(offsetof(FGameplayTagCategoryRemap, RemapCategories) == 0x0010);
static_assert(offsetof(FGameplayTagRedirect, OldTagName) == 0x0000);
static_assert(offsetof(FGameplayTagRedirect, NewTagName) == 0x0008);
static_assert(offsetof(FRestrictedConfigInfo, RestrictedConfigName) == 0x0000);
static_assert(offsetof(FRestrictedConfigInfo, Owners) == 0x0010);
static_assert(offsetof(UGameplayTagsSettings, InvalidTagCharacters) == 0x0050);
static_assert(offsetof(UGameplayTagsSettings, CategoryRemapping) == 0x0060);
static_assert(offsetof(UGameplayTagsSettings, GameplayTagTableList) == 0x0070);
static_assert(offsetof(UGameplayTagsSettings, GameplayTagRedirects) == 0x0080);
static_assert(offsetof(UGameplayTagsSettings, CommonlyReplicatedTags) == 0x0090);
static_assert(offsetof(UGameplayTagsSettings, RestrictedConfigFiles) == 0x00A8);
static_assert(offsetof(UGameplayTagsDeveloperSettings, DeveloperConfigName) == 0x0038);
static_assert(offsetof(UGameplayTagsDeveloperSettings, FavoriteTagSource) == 0x0048);
