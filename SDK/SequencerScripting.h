
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMovieSceneBindingExtensions;
class UMovieSceneEventTrackExtensions;
class UMovieSceneFolderExtensions;
class UMovieScenePropertyTrackExtensions;
class UMovieSceneScriptingActorReferenceChannel;
class UMovieSceneScriptingActorReferenceKey;
class UMovieSceneScriptingBoolChannel;
class UMovieSceneScriptingBoolKey;
class UMovieSceneScriptingByteChannel;
class UMovieSceneScriptingByteKey;
class UMovieSceneScriptingChannel;
class UMovieSceneScriptingEventChannel;
class UMovieSceneScriptingEventKey;
class UMovieSceneScriptingFloatChannel;
class UMovieSceneScriptingFloatKey;
class UMovieSceneScriptingIntegerChannel;
class UMovieSceneScriptingIntegerKey;
class UMovieSceneScriptingKey;
class UMovieSceneScriptingObjectPathChannel;
class UMovieSceneScriptingObjectPathKey;
class UMovieSceneScriptingStringChannel;
class UMovieSceneScriptingStringKey;
class UMovieSceneSectionExtensions;
class UMovieSceneSequenceExtensions;
class UMovieSceneTrackExtensions;
class UMovieSceneVectorTrackExtensions;
class USequencerScriptingRangeExtensions;

/// Enum /Script/SequencerScripting.ESequenceTimeUnit
/// Size: 0x01 (1 bytes)
enum class ESequenceTimeUnit : uint8_t
{
	ESequenceTimeUnit__DisplayRate                                                   = 0,
	ESequenceTimeUnit__TickResolution                                                = 1
};

/// Struct /Script/SequencerScripting.SequencerBindingProxy
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSequencerBindingProxy
{ 
	FGuid                                              BindingID;                                                  // 0x0000   (0x0010)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/SequencerScripting.SequencerScriptingRange
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FSequencerScriptingRange
{ 
	bool                                               bHasStart : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bHasEnd : 1;                                                // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            InclusiveStart;                                             // 0x0004   (0x0004)  
	int32_t                                            ExclusiveEnd;                                               // 0x0008   (0x0004)  
	FFrameRate                                         InternalRate;                                               // 0x000C   (0x0008)  
};

/// Class /Script/SequencerScripting.MovieSceneBindingExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetParent
	void SetParent(FSequencerBindingProxy& InBinding, FSequencerBindingProxy& InParentBinding) // [0x14755c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerBindingProxy&, FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InBinding, InParentBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetName
	void SetName(FSequencerBindingProxy& InBinding, FString InName) // [0x1475410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerBindingProxy&, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InBinding, InName);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
	void SetDisplayName(FSequencerBindingProxy& InBinding, FText& InDisplayName) // [0x1475140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerBindingProxy&, FText&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InBinding, InDisplayName);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
	void RemoveTrack(FSequencerBindingProxy& InBinding, UMovieSceneTrack* TrackToRemove) // [0x1474d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerBindingProxy&, UMovieSceneTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(InBinding, TrackToRemove);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.Remove
	void Remove(FSequencerBindingProxy& InBinding) // [0x1474910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(InBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
	void MoveBindingContents(FSequencerBindingProxy& SourceBindingId, FSequencerBindingProxy& DestinationBindingId) // [0x1474820] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerBindingProxy&, FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(SourceBindingId, DestinationBindingId);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.IsValid
	bool IsValid(FSequencerBindingProxy& InBinding) // [0x1474780] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	{
		typedef bool (*FuncPtr)(FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(InBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetTracks
	// TArray<UMovieSceneTrack*> GetTracks(FSequencerBindingProxy& InBinding);                                                  // [0x1474220] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
	UClass* GetPossessedObjectClass(FSequencerBindingProxy& InBinding) // [0x1473f80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef class UClass* (*FuncPtr)(FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(InBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetParent
	FSequencerBindingProxy GetParent(FSequencerBindingProxy& InBinding) // [0x1473ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef FSequencerBindingProxy (*FuncPtr)(FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(InBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
	UObject* GetObjectTemplate(FSequencerBindingProxy& InBinding) // [0x1473e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef class UObject* (*FuncPtr)(FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(InBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetName
	FString GetName(FSequencerBindingProxy& InBinding) // [0x1473c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(InBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetId
	FGuid GetId(FSequencerBindingProxy& InBinding) // [0x1473b30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef FGuid (*FuncPtr)(FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(InBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
	FText GetDisplayName(FSequencerBindingProxy& InBinding) // [0x1473910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef FText (*FuncPtr)(FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(InBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
	// TArray<FSequencerBindingProxy> GetChildPossessables(FSequencerBindingProxy& InBinding);                                  // [0x14736b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
	// TArray<UMovieSceneTrack*> FindTracksByType(FSequencerBindingProxy& InBinding, UClass* TrackType);                        // [0x1473310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
	// TArray<UMovieSceneTrack*> FindTracksByExactType(FSequencerBindingProxy& InBinding, UClass* TrackType);                   // [0x14731e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.AddTrack
	UMovieSceneTrack* AddTrack(FSequencerBindingProxy& InBinding, UClass* TrackType) // [0x1472f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef class UMovieSceneTrack* (*FuncPtr)(FSequencerBindingProxy&, UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(InBinding, TrackType);
	}
};

/// Class /Script/SequencerScripting.MovieSceneEventTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
	UMovieSceneEventTriggerSection* AddEventTriggerSection(UMovieSceneEventTrack* InTrack) // [0x14728f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UMovieSceneEventTriggerSection* (*FuncPtr)(UMovieSceneEventTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(InTrack);
	}
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
	UMovieSceneEventRepeaterSection* AddEventRepeaterSection(UMovieSceneEventTrack* InTrack) // [0x1472860] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UMovieSceneEventRepeaterSection* (*FuncPtr)(UMovieSceneEventTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(InTrack);
	}
};

/// Class /Script/SequencerScripting.MovieSceneFolderExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderName
	bool SetFolderName(UMovieSceneFolder* Folder, FName InFolderName) // [0x1475340] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneFolder*, FName);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		return func(Folder, InFolderName);
	}
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
	bool SetFolderColor(UMovieSceneFolder* Folder, FColor InFolderColor) // [0x1475270] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneFolder*, FColor);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Folder, InFolderColor);
	}
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
	bool RemoveChildObjectBinding(UMovieSceneFolder* Folder, FSequencerBindingProxy InObjectBinding) // [0x1474b40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneFolder*, FSequencerBindingProxy);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Folder, InObjectBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
	bool RemoveChildMasterTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InMasterTrack) // [0x1474a70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneFolder*, UMovieSceneTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Folder, InMasterTrack);
	}
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
	bool RemoveChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToRemove) // [0x14749a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneFolder*, UMovieSceneFolder*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(TargetFolder, FolderToRemove);
	}
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderName
	FName GetFolderName(UMovieSceneFolder* Folder) // [0x1473aa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef FName (*FuncPtr)(UMovieSceneFolder*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Folder);
	}
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
	FColor GetFolderColor(UMovieSceneFolder* Folder) // [0x1473a10] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	{
		typedef FColor (*FuncPtr)(UMovieSceneFolder*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(Folder);
	}
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
	// TArray<FSequencerBindingProxy> GetChildObjectBindings(UMovieSceneFolder* Folder);                                        // [0x14735e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
	// TArray<UMovieSceneTrack*> GetChildMasterTracks(UMovieSceneFolder* Folder);                                               // [0x1473510] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
	// TArray<UMovieSceneFolder*> GetChildFolders(UMovieSceneFolder* Folder);                                                   // [0x1473440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
	bool AddChildObjectBinding(UMovieSceneFolder* Folder, FSequencerBindingProxy InObjectBinding) // [0x1472770] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneFolder*, FSequencerBindingProxy);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Folder, InObjectBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
	bool AddChildMasterTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InMasterTrack) // [0x14726a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneFolder*, UMovieSceneTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Folder, InMasterTrack);
	}
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
	bool AddChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToAdd) // [0x14725d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneFolder*, UMovieSceneFolder*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(TargetFolder, FolderToAdd);
	}
};

/// Class /Script/SequencerScripting.MovieScenePropertyTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
	void SetPropertyNameAndPath(UMovieScenePropertyTrack* Track, FName& InPropertyName, FString InPropertyPath) // [0x14756b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieScenePropertyTrack*, FName&, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Track, InPropertyName, InPropertyPath);
	}
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
	void SetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track, UClass* PropertyClass) // [0x1475500] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneObjectPropertyTrack*, UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Track, PropertyClass);
	}
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
	FName GetUniqueTrackName(UMovieScenePropertyTrack* Track) // [0x1474300] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FName (*FuncPtr)(UMovieScenePropertyTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(Track);
	}
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
	FString GetPropertyPath(UMovieScenePropertyTrack* Track) // [0x14740b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FString (*FuncPtr)(UMovieScenePropertyTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(Track);
	}
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
	FName GetPropertyName(UMovieScenePropertyTrack* Track) // [0x1474020] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FName (*FuncPtr)(UMovieScenePropertyTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func(Track);
	}
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
	UClass* GetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track) // [0x1473da0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UClass* (*FuncPtr)(UMovieSceneObjectPropertyTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Track);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingKey
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMovieSceneScriptingKey : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
	void SetValue(FMovieSceneObjectBindingID& InNewValue) // [0x1475a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FMovieSceneObjectBindingID&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
	void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x14757e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FFrameNumber&, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewFrameNumber, SubFrame, TimeUnit);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
	FMovieSceneObjectBindingID GetValue() // [0x1474390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FMovieSceneObjectBindingID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
	FFrameTime GetTime(ESequenceTimeUnit TimeUnit) // [0x1474180] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FFrameTime (*FuncPtr)(ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingChannel
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMovieSceneScriptingChannel : public UObject
{ 
public:
	FName                                              ChannelName;                                                // 0x0028   (0x0008)  
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
	void SetDefault(FMovieSceneObjectBindingID InDefaultValue) // [0x1474e10] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FMovieSceneObjectBindingID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InDefaultValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
	void RemoveKey(UMovieSceneScriptingKey* Key) // [0x143c500] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneScriptingKey*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Key);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
	void RemoveDefault() // [0x1474c30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
	bool HasDefault() // [0x1474600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x1473be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
	FMovieSceneObjectBindingID GetDefault() // [0x1473790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FMovieSceneObjectBindingID (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
	UMovieSceneScriptingActorReferenceKey* AddKey(FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x1472980] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef class UMovieSceneScriptingActorReferenceKey* (*FuncPtr)(FFrameNumber, FMovieSceneObjectBindingID, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(InTime, NewValue, SubFrame, TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetValue
	void SetValue(bool InNewValue) // [0x1475b80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetTime
	void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x14757e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FFrameNumber&, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewFrameNumber, SubFrame, TimeUnit);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetValue
	bool GetValue() // [0x1474480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetTime
	FFrameTime GetTime(ESequenceTimeUnit TimeUnit) // [0x1474180] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FFrameTime (*FuncPtr)(ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
	void SetDefault(bool InDefaultValue) // [0x1474f50] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InDefaultValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
	void RemoveKey(UMovieSceneScriptingKey* Key) // [0x143c500] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneScriptingKey*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Key);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
	void RemoveDefault() // [0x1474c90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
	bool HasDefault() // [0x14746d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
	int32_t GetNumKeys() // [0x1473d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x1473be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
	bool GetDefault() // [0x1473830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
	TArray<bool> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) // [0x1473060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef TArray<bool> (*FuncPtr)(FSequencerScriptingRange, FFrameRate);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(Range, FrameRate);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
	FSequencerScriptingRange ComputeEffectiveRange() // [0x1473020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FSequencerScriptingRange (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
	UMovieSceneScriptingBoolKey* AddKey(FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x1472b50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UMovieSceneScriptingBoolKey* (*FuncPtr)(FFrameNumber&, bool, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(InTime, NewValue, SubFrame, TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetValue
	void SetValue(char InNewValue) // [0x1475c80] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(char);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetTime
	void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x14757e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FFrameNumber&, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewFrameNumber, SubFrame, TimeUnit);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetValue
	char GetValue() // [0x1474540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef char (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetTime
	FFrameTime GetTime(ESequenceTimeUnit TimeUnit) // [0x1474180] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FFrameTime (*FuncPtr)(ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
	void SetDefault(char InDefaultValue) // [0x1475050] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(char);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InDefaultValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
	void RemoveKey(UMovieSceneScriptingKey* Key) // [0x143c500] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneScriptingKey*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Key);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
	void RemoveDefault() // [0x1474c90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
	bool HasDefault() // [0x14746d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x1473be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
	char GetDefault() // [0x1473830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef char (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.AddKey
	UMovieSceneScriptingByteKey* AddKey(FFrameNumber& InTime, char NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation) // [0x1472d40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UMovieSceneScriptingByteKey* (*FuncPtr)(FFrameNumber&, char, float, ESequenceTimeUnit, EMovieSceneKeyInterpolation);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(InTime, NewValue, SubFrame, TimeUnit, InInterpolation);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetValue
	void SetValue(FMovieSceneEvent& InNewValue) // [0x147dd60] Final|Native|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FMovieSceneEvent&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetTime
	void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x14757e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FFrameNumber&, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewFrameNumber, SubFrame, TimeUnit);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetValue
	FMovieSceneEvent GetValue() // [0x147c2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FMovieSceneEvent (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetTime
	FFrameTime GetTime(ESequenceTimeUnit TimeUnit) // [0x1474180] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FFrameTime (*FuncPtr)(ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
	void RemoveKey(UMovieSceneScriptingKey* Key) // [0x143c500] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneScriptingKey*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Key);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x1473be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.AddKey
	UMovieSceneScriptingEventKey* AddKey(FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x147aba0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UMovieSceneScriptingEventKey* (*FuncPtr)(FFrameNumber&, FMovieSceneEvent, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func(InTime, NewValue, SubFrame, TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetValue
	void SetValue(float InNewValue) // [0x147de90] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTime
	void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x14757e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FFrameNumber&, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewFrameNumber, SubFrame, TimeUnit);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
	// void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);                                          // [0x147dc90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
	// void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);                                                      // [0x147dbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
	void SetLeaveTangentWeight(float InNewValue) // [0x147d540] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
	void SetLeaveTangent(float InNewValue) // [0x147d460] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
	// void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);                                                 // [0x147d390] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
	void SetArriveTangentWeight(float InNewValue) // [0x147cc20] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
	void SetArriveTangent(float InNewValue) // [0x147cb40] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetValue
	float GetValue() // [0x147c3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTime
	FFrameTime GetTime(ESequenceTimeUnit TimeUnit) // [0x1474180] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FFrameTime (*FuncPtr)(ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(TimeUnit);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
	// TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();                                                         // [0x147c290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
	// TEnumAsByte<ERichCurveTangentMode> GetTangentMode();                                                                     // [0x147c250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
	float GetLeaveTangentWeight() // [0x147bed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
	float GetLeaveTangent() // [0x147be90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
	// TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();                                                                // [0x147be50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
	float GetArriveTangentWeight() // [0x147b8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
	float GetArriveTangent() // [0x147b8b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func();
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
	// void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                  // [0x147d6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
	// void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                 // [0x147d620] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
	void SetDefault(float InDefaultValue) // [0x147cd00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InDefaultValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
	void RemoveKey(UMovieSceneScriptingKey* Key) // [0x143c500] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneScriptingKey*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Key);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
	void RemoveDefault() // [0x147c960] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
	bool HasDefault() // [0x147c630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();                                                      // [0x147c0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();                                                     // [0x147c070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
	int32_t GetNumKeys() // [0x147bf10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x1473be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
	float GetDefault() // [0x147ba00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef float (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
	TArray<float> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) // [0x147b620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef TArray<float> (*FuncPtr)(FSequencerScriptingRange, FFrameRate);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Range, FrameRate);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
	FSequencerScriptingRange ComputeEffectiveRange() // [0x147b5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FSequencerScriptingRange (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
	UMovieSceneScriptingFloatKey* AddKey(FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation) // [0x147ae50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UMovieSceneScriptingFloatKey* (*FuncPtr)(FFrameNumber&, float, float, ESequenceTimeUnit, EMovieSceneKeyInterpolation);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(InTime, NewValue, SubFrame, TimeUnit, InInterpolation);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
	void SetValue(int32_t InNewValue) // [0x147df70] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
	void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x14757e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FFrameNumber&, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewFrameNumber, SubFrame, TimeUnit);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
	int32_t GetValue() // [0x147c3f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
	FFrameTime GetTime(ESequenceTimeUnit TimeUnit) // [0x1474180] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FFrameTime (*FuncPtr)(ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
	void SetDefault(int32_t InDefaultValue) // [0x147ce00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InDefaultValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
	void RemoveKey(UMovieSceneScriptingKey* Key) // [0x143c500] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneScriptingKey*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Key);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
	void RemoveDefault() // [0x147ca00] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
	bool HasDefault() // [0x147c6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x1473be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
	int32_t GetDefault() // [0x147baa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef int32_t (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
	UMovieSceneScriptingIntegerKey* AddKey(FFrameNumber& InTime, int32_t NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x147b010] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UMovieSceneScriptingIntegerKey* (*FuncPtr)(FFrameNumber&, int32_t, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(InTime, NewValue, SubFrame, TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
	void SetValue(UObject* InNewValue) // [0x147e070] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
	void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x14757e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FFrameNumber&, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewFrameNumber, SubFrame, TimeUnit);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
	UObject* GetValue() // [0x147c4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UObject* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
	FFrameTime GetTime(ESequenceTimeUnit TimeUnit) // [0x1474180] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FFrameTime (*FuncPtr)(ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
	void SetDefault(UObject* InDefaultValue) // [0x147cef0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InDefaultValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
	void RemoveKey(UMovieSceneScriptingKey* Key) // [0x143c500] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneScriptingKey*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Key);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
	void RemoveDefault() // [0x1474c30] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
	bool HasDefault() // [0x147c750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x1473be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
	UObject* GetDefault() // [0x147bb40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef class UObject* (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
	UMovieSceneScriptingObjectPathKey* AddKey(FFrameNumber InTime, UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x147b200] Final|Native|Public|HasDefaults|BlueprintCallable 
	{
		typedef class UMovieSceneScriptingObjectPathKey* (*FuncPtr)(FFrameNumber, UObject*, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(InTime, NewValue, SubFrame, TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetValue
	void SetValue(FString InNewValue) // [0x147e1c0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InNewValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetTime
	void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x14757e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FFrameNumber&, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(NewFrameNumber, SubFrame, TimeUnit);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetValue
	FString GetValue() // [0x147c520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetTime
	FFrameTime GetTime(ESequenceTimeUnit TimeUnit) // [0x1474180] Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FFrameTime (*FuncPtr)(ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func(TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
	void SetDefault(FString InDefaultValue) // [0x147cfb0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(InDefaultValue);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
	void RemoveKey(UMovieSceneScriptingKey* Key) // [0x143c500] Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneScriptingKey*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Key);
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
	void RemoveDefault() // [0x147caa0] Final|Native|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
	bool HasDefault() // [0x147c790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef bool (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x1473be0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
	FString GetDefault() // [0x147bb70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	{
		typedef FString (*FuncPtr)();
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func();
	}
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.AddKey
	UMovieSceneScriptingStringKey* AddKey(FFrameNumber& InTime, FString NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) // [0x147b3d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef class UMovieSceneScriptingStringKey* (*FuncPtr)(FFrameNumber&, FString, float, ESequenceTimeUnit);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(InTime, NewValue, SubFrame, TimeUnit);
	}
};

/// Class /Script/SequencerScripting.MovieSceneSectionExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
	void SetStartFrameSeconds(UMovieSceneSection* Section, float StartTime) // [0x147db00] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSection*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Section, StartTime);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
	void SetStartFrameBounded(UMovieSceneSection* Section, bool bIsBounded) // [0x147da40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSection*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Section, bIsBounded);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
	void SetStartFrame(UMovieSceneSection* Section, int32_t StartFrame) // [0x147d980] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSection*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Section, StartFrame);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
	void SetRangeSeconds(UMovieSceneSection* Section, float StartTime, float EndTime) // [0x147d880] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSection*, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Section, StartTime, EndTime);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRange
	void SetRange(UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame) // [0x147d780] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSection*, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Section, StartFrame, EndFrame);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
	void SetEndFrameSeconds(UMovieSceneSection* Section, float EndTime) // [0x147d2d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSection*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Section, EndTime);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
	void SetEndFrameBounded(UMovieSceneSection* Section, bool bIsBounded) // [0x147d210] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSection*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Section, bIsBounded);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
	void SetEndFrame(UMovieSceneSection* Section, int32_t EndFrame) // [0x147d150] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSection*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Section, EndFrame);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
	bool HasStartFrame(UMovieSceneSection* Section) // [0x147c8d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneSection*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(Section);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
	bool HasEndFrame(UMovieSceneSection* Section) // [0x147c840] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneSection*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(Section);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
	float GetStartFrameSeconds(UMovieSceneSection* Section) // [0x147c1c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(UMovieSceneSection*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Section);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
	int32_t GetStartFrame(UMovieSceneSection* Section) // [0x147c130] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneSection*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Section);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
	int32_t GetParentSequenceFrame(UMovieSceneSubSection* Section, int32_t InFrame, UMovieSceneSequence* ParentSequence) // [0x147bf70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneSubSection*, int32_t, UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		return func(Section, InFrame, ParentSequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
	float GetEndFrameSeconds(UMovieSceneSection* Section) // [0x147bdc0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(UMovieSceneSection*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		return func(Section);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
	int32_t GetEndFrame(UMovieSceneSection* Section) // [0x147bd30] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneSection*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		return func(Section);
	}
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannels
	// TArray<UMovieSceneScriptingChannel*> GetChannels(UMovieSceneSection* Section);                                           // [0x147b930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
	// TArray<UMovieSceneScriptingChannel*> FindChannelsByType(UMovieSceneSection* Section, UClass* ChannelType);               // [0x147b7a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneSequenceExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
	void SortMarkedFrames(UMovieSceneSequence* Sequence) // [0x14828e0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
	void SetWorkRangeStart(UMovieSceneSequence* InSequence, float StartTimeInSeconds) // [0x1482820] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(InSequence, StartTimeInSeconds);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
	void SetWorkRangeEnd(UMovieSceneSequence* InSequence, float EndTimeInSeconds) // [0x1482820] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(InSequence, EndTimeInSeconds);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
	void SetViewRangeStart(UMovieSceneSequence* InSequence, float StartTimeInSeconds) // [0x1482820] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(InSequence, StartTimeInSeconds);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
	void SetViewRangeEnd(UMovieSceneSequence* InSequence, float EndTimeInSeconds) // [0x1482820] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(InSequence, EndTimeInSeconds);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
	void SetTickResolutionDirectly(UMovieSceneSequence* Sequence, FFrameRate TickResolution) // [0x1482750] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, FFrameRate);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Sequence, TickResolution);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
	void SetTickResolution(UMovieSceneSequence* Sequence, FFrameRate TickResolution) // [0x1482680] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, FFrameRate);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		func(Sequence, TickResolution);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
	void SetReadOnly(UMovieSceneSequence* Sequence, bool bInReadOnly) // [0x1482440] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		func(Sequence, bInReadOnly);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
	void SetPlaybackStartSeconds(UMovieSceneSequence* Sequence, float StartTime) // [0x1482380] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		func(Sequence, StartTime);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
	void SetPlaybackStart(UMovieSceneSequence* Sequence, int32_t StartFrame) // [0x14822c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		func(Sequence, StartFrame);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
	void SetPlaybackEndSeconds(UMovieSceneSequence* Sequence, float EndTime) // [0x1482200] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		func(Sequence, EndTime);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
	void SetPlaybackEnd(UMovieSceneSequence* Sequence, int32_t EndFrame) // [0x1482140] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		func(Sequence, EndFrame);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
	void SetMarkedFrame(UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber) // [0x1481f80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, int32_t, FFrameNumber);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[12]);
		func(Sequence, InMarkIndex, InFrameNumber);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
	void SetEvaluationType(UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType) // [0x1481ec0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, EMovieSceneEvaluationType);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[13]);
		func(InSequence, InEvaluationType);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
	void SetDisplayRate(UMovieSceneSequence* Sequence, FFrameRate DisplayRate) // [0x1481df0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, FFrameRate);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[14]);
		func(Sequence, DisplayRate);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
	void SetClockSource(UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource) // [0x1481b70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, EUpdateClockSource);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[15]);
		func(InSequence, InClockSource);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
	FSequencerBindingProxy ResolveBindingID(UMovieSceneSequence* MasterSequence, FMovieSceneObjectBindingID InObjectBindingID) // [0x1481a50] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSequencerBindingProxy (*FuncPtr)(UMovieSceneSequence*, FMovieSceneObjectBindingID);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[16]);
		return func(MasterSequence, InObjectBindingID);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
	bool RemoveMasterTrack(UMovieSceneSequence* Sequence, UMovieSceneTrack* MasterTrack) // [0x14818c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneSequence*, UMovieSceneTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[17]);
		return func(Sequence, MasterTrack);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
	FSequencerScriptingRange MakeRangeSeconds(UMovieSceneSequence* Sequence, float StartTime, float Duration) // [0x14817b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSequencerScriptingRange (*FuncPtr)(UMovieSceneSequence*, float, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[18]);
		return func(Sequence, StartTime, Duration);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRange
	FSequencerScriptingRange MakeRange(UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration) // [0x14816a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSequencerScriptingRange (*FuncPtr)(UMovieSceneSequence*, int32_t, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[19]);
		return func(Sequence, StartFrame, Duration);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
	FMovieSceneObjectBindingID MakeBindingID(UMovieSceneSequence* MasterSequence, FSequencerBindingProxy& InBinding, EMovieSceneObjectBindingSpace Space) // [0x1481560] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef FMovieSceneObjectBindingID (*FuncPtr)(UMovieSceneSequence*, FSequencerBindingProxy&, EMovieSceneObjectBindingSpace);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[20]);
		return func(MasterSequence, InBinding, Space);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
	// TArray<UObject*> LocateBoundObjects(UMovieSceneSequence* Sequence, FSequencerBindingProxy& InBinding, UObject* Context); // [0x14813f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
	bool IsReadOnly(UMovieSceneSequence* Sequence) // [0x1481360] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[22]);
		return func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
	float GetWorkRangeStart(UMovieSceneSequence* InSequence) // [0x14812d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[23]);
		return func(InSequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
	float GetWorkRangeEnd(UMovieSceneSequence* InSequence) // [0x14812d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[24]);
		return func(InSequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
	float GetViewRangeStart(UMovieSceneSequence* InSequence) // [0x14812d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[25]);
		return func(InSequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
	float GetViewRangeEnd(UMovieSceneSequence* InSequence) // [0x14812d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef float (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[26]);
		return func(InSequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
	FTimecode GetTimecodeSource(UMovieSceneSequence* Sequence) // [0x1481230] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FTimecode (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[27]);
		return func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
	FFrameRate GetTickResolution(UMovieSceneSequence* Sequence) // [0x14811a0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FFrameRate (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[28]);
		return func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
	// TArray<FSequencerBindingProxy> GetSpawnables(UMovieSceneSequence* Sequence);                                             // [0x14810d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
	// TArray<UMovieSceneFolder*> GetRootFoldersInSequence(UMovieSceneSequence* Sequence);                                      // [0x1480e10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
	// TArray<FSequencerBindingProxy> GetPossessables(UMovieSceneSequence* Sequence);                                           // [0x1480d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
	FMovieSceneObjectBindingID GetPortableBindingID(UMovieSceneSequence* MasterSequence, UMovieSceneSequence* DestinationSequence, FSequencerBindingProxy& InBinding) // [0x1480c00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef FMovieSceneObjectBindingID (*FuncPtr)(UMovieSceneSequence*, UMovieSceneSequence*, FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[32]);
		return func(MasterSequence, DestinationSequence, InBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
	float GetPlaybackStartSeconds(UMovieSceneSequence* Sequence) // [0x1480b70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[33]);
		return func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
	int32_t GetPlaybackStart(UMovieSceneSequence* Sequence) // [0x1480ae0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[34]);
		return func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
	FSequencerScriptingRange GetPlaybackRange(UMovieSceneSequence* Sequence) // [0x1480a40] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSequencerScriptingRange (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[35]);
		return func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
	float GetPlaybackEndSeconds(UMovieSceneSequence* Sequence) // [0x14809b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef float (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[36]);
		return func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
	int32_t GetPlaybackEnd(UMovieSceneSequence* Sequence) // [0x1480920] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[37]);
		return func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
	UMovieScene* GetMovieScene(UMovieSceneSequence* Sequence) // [0x1480800] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UMovieScene* (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[38]);
		return func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
	// TArray<UMovieSceneTrack*> GetMasterTracks(UMovieSceneSequence* Sequence);                                                // [0x1480730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
	// TArray<FMovieSceneMarkedFrame> GetMarkedFrames(UMovieSceneSequence* Sequence);                                           // [0x1480610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
	EMovieSceneEvaluationType GetEvaluationType(UMovieSceneSequence* InSequence) // [0x1480580] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef EMovieSceneEvaluationType (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[41]);
		return func(InSequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
	FFrameRate GetDisplayRate(UMovieSceneSequence* Sequence) // [0x14804f0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FFrameRate (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[42]);
		return func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
	EUpdateClockSource GetClockSource(UMovieSceneSequence* InSequence) // [0x1480370] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	{
		typedef EUpdateClockSource (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[43]);
		return func(InSequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindings
	// TArray<FSequencerBindingProxy> GetBindings(UMovieSceneSequence* Sequence);                                               // [0x14802a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
	FMovieSceneObjectBindingID GetBindingID(FSequencerBindingProxy& InBinding) // [0x14801f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef FMovieSceneObjectBindingID (*FuncPtr)(FSequencerBindingProxy&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[45]);
		return func(InBinding);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
	int32_t FindNextMarkedFrame(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward) // [0x14800f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneSequence*, FFrameNumber, bool);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[46]);
		return func(Sequence, InFrameNumber, bForward);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
	// TArray<UMovieSceneTrack*> FindMasterTracksByType(UMovieSceneSequence* Sequence, UClass* TrackType);                      // [0x147ffe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
	// TArray<UMovieSceneTrack*> FindMasterTracksByExactType(UMovieSceneSequence* Sequence, UClass* TrackType);                 // [0x147fed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
	int32_t FindMarkedFrameByLabel(UMovieSceneSequence* Sequence, FString InLabel) // [0x147fdf0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneSequence*, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[49]);
		return func(Sequence, InLabel);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
	int32_t FindMarkedFrameByFrameNumber(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber) // [0x147fd20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneSequence*, FFrameNumber);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[50]);
		return func(Sequence, InFrameNumber);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
	FSequencerBindingProxy FindBindingByName(UMovieSceneSequence* Sequence, FString Name) // [0x147fbe0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSequencerBindingProxy (*FuncPtr)(UMovieSceneSequence*, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[51]);
		return func(Sequence, Name);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
	FSequencerBindingProxy FindBindingById(UMovieSceneSequence* Sequence, FGuid BindingID) // [0x147faf0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef FSequencerBindingProxy (*FuncPtr)(UMovieSceneSequence*, FGuid);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[52]);
		return func(Sequence, BindingID);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
	void DeleteMarkedFrames(UMovieSceneSequence* Sequence) // [0x147fa70] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[53]);
		func(Sequence);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
	void DeleteMarkedFrame(UMovieSceneSequence* Sequence, int32_t DeleteIndex) // [0x147f9b0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneSequence*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[54]);
		func(Sequence, DeleteIndex);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
	FSequencerBindingProxy AddSpawnableFromInstance(UMovieSceneSequence* Sequence, UObject* ObjectToSpawn) // [0x147f8d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSequencerBindingProxy (*FuncPtr)(UMovieSceneSequence*, UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[55]);
		return func(Sequence, ObjectToSpawn);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
	FSequencerBindingProxy AddSpawnableFromClass(UMovieSceneSequence* Sequence, UClass* ClassToSpawn) // [0x147f8d0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSequencerBindingProxy (*FuncPtr)(UMovieSceneSequence*, UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[56]);
		return func(Sequence, ClassToSpawn);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
	UMovieSceneFolder* AddRootFolderToSequence(UMovieSceneSequence* Sequence, FString NewFolderName) // [0x147f710] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UMovieSceneFolder* (*FuncPtr)(UMovieSceneSequence*, FString);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[57]);
		return func(Sequence, NewFolderName);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
	FSequencerBindingProxy AddPossessable(UMovieSceneSequence* Sequence, UObject* ObjectToPossess) // [0x147f630] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FSequencerBindingProxy (*FuncPtr)(UMovieSceneSequence*, UObject*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[58]);
		return func(Sequence, ObjectToPossess);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
	UMovieSceneTrack* AddMasterTrack(UMovieSceneSequence* Sequence, UClass* TrackType) // [0x147f560] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UMovieSceneTrack* (*FuncPtr)(UMovieSceneSequence*, UClass*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[59]);
		return func(Sequence, TrackType);
	}
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
	int32_t AddMarkedFrame(UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame) // [0x147f460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneSequence*, FMovieSceneMarkedFrame&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[60]);
		return func(Sequence, InMarkedFrame);
	}
};

/// Class /Script/SequencerScripting.MovieSceneTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
	void SetSortingOrder(UMovieSceneTrack* Track, int32_t SortingOrder) // [0x14825c0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneTrack*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Track, SortingOrder);
	}
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
	void SetSectionToKey(UMovieSceneTrack* Track, UMovieSceneSection* Section) // [0x1482500] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneTrack*, UMovieSceneSection*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Track, Section);
	}
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
	void SetDisplayName(UMovieSceneTrack* Track, FText& InName) // [0x1481cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneTrack*, FText&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Track, InName);
	}
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetColorTint
	void SetColorTint(UMovieSceneTrack* Track, FColor& ColorTint) // [0x1481c30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneTrack*, FColor&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Track, ColorTint);
	}
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.RemoveSection
	void RemoveSection(UMovieSceneTrack* Track, UMovieSceneSection* Section) // [0x1481990] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneTrack*, UMovieSceneSection*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Track, Section);
	}
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
	int32_t GetSortingOrder(UMovieSceneTrack* Track) // [0x1481040] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		return func(Track);
	}
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
	UMovieSceneSection* GetSectionToKey(UMovieSceneTrack* Track) // [0x1480ee0] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UMovieSceneSection* (*FuncPtr)(UMovieSceneTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(Track);
	}
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSections
	// TArray<UMovieSceneSection*> GetSections(UMovieSceneTrack* Track);                                                        // [0x1480f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
	FText GetDisplayName(UMovieSceneTrack* Track) // [0x1480400] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef FText (*FuncPtr)(UMovieSceneTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(Track);
	}
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetColorTint
	FColor GetColorTint(UMovieSceneTrack* Track) // [0x1473a10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	{
		typedef FColor (*FuncPtr)(UMovieSceneTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(Track);
	}
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.AddSection
	UMovieSceneSection* AddSection(UMovieSceneTrack* Track) // [0x147f840] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef class UMovieSceneSection* (*FuncPtr)(UMovieSceneTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Track);
	}
};

/// Class /Script/SequencerScripting.MovieSceneVectorTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneVectorTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneVectorTrackExtensions.SetNumChannelsUsed
	void SetNumChannelsUsed(UMovieSceneVectorTrack* Track, int32_t InNumChannelsUsed) // [0x1482080] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef void (*FuncPtr)(UMovieSceneVectorTrack*, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Track, InNumChannelsUsed);
	}
	// Function /Script/SequencerScripting.MovieSceneVectorTrackExtensions.GetNumChannelsUsed
	int32_t GetNumChannelsUsed(UMovieSceneVectorTrack* Track) // [0x1480890] Final|Native|Static|Public|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(UMovieSceneVectorTrack*);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		return func(Track);
	}
};

/// Class /Script/SequencerScripting.SequencerScriptingRangeExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
	void SetStartSeconds(FSequencerScriptingRange& Range, float Start) // [0x1483760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerScriptingRange&, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[0]);
		func(Range, Start);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
	void SetStartFrame(FSequencerScriptingRange& Range, int32_t Start) // [0x1483680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerScriptingRange&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[1]);
		func(Range, Start);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
	void SetEndSeconds(FSequencerScriptingRange& Range, float End) // [0x1483590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerScriptingRange&, float);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[2]);
		func(Range, End);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
	void SetEndFrame(FSequencerScriptingRange& Range, int32_t End) // [0x14834b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerScriptingRange&, int32_t);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[3]);
		func(Range, End);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
	void RemoveStart(FSequencerScriptingRange& Range) // [0x1483420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerScriptingRange&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[4]);
		func(Range);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
	void RemoveEnd(FSequencerScriptingRange& Range) // [0x1483390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef void (*FuncPtr)(FSequencerScriptingRange&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[5]);
		func(Range);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasStart
	bool HasStart(FSequencerScriptingRange& Range) // [0x14832f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSequencerScriptingRange&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[6]);
		return func(Range);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
	bool HasEnd(FSequencerScriptingRange& Range) // [0x1483250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef bool (*FuncPtr)(FSequencerScriptingRange&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[7]);
		return func(Range);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
	float GetStartSeconds(FSequencerScriptingRange& Range) // [0x14831b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef float (*FuncPtr)(FSequencerScriptingRange&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[8]);
		return func(Range);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
	int32_t GetStartFrame(FSequencerScriptingRange& Range) // [0x1483110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSequencerScriptingRange&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[9]);
		return func(Range);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
	float GetEndSeconds(FSequencerScriptingRange& Range) // [0x1483070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef float (*FuncPtr)(FSequencerScriptingRange&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[10]);
		return func(Range);
	}
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
	int32_t GetEndFrame(FSequencerScriptingRange& Range) // [0x1482fd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	{
		typedef int32_t (*FuncPtr)(FSequencerScriptingRange&);
		auto vtablePtr = reinterpret_cast<uintptr_t*>(vtable);
		auto func = reinterpret_cast<FuncPtr>(vtablePtr[11]);
		return func(Range);
	}
};

#pragma pack(pop)


static_assert(sizeof(UMovieSceneBindingExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneEventTrackExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneFolderExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieScenePropertyTrackExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneScriptingKey) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMovieSceneScriptingActorReferenceKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingChannel) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMovieSceneScriptingActorReferenceChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingBoolKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingBoolChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingByteKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingByteChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingEventKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingEventChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingFloatKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingFloatChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingIntegerKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingIntegerChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingObjectPathKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingObjectPathChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingStringKey) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneScriptingStringChannel) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMovieSceneSectionExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneSequenceExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneTrackExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneVectorTrackExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USequencerScriptingRangeExtensions) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSequencerBindingProxy) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSequencerScriptingRange) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(offsetof(UMovieSceneScriptingChannel, ChannelName) == 0x0028);
static_assert(offsetof(FSequencerBindingProxy, BindingID) == 0x0000);
static_assert(offsetof(FSequencerBindingProxy, Sequence) == 0x0010);
static_assert(offsetof(FSequencerScriptingRange, InternalRate) == 0x000C);
