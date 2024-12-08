
/********************************************************
*                                                       *
*     SDK generated using UEDumper by Spuckwaffel.		*
*                                                       *
********************************************************/

/// Include this file into your project.
/// If there are still structs missing, read the Engine/Generation/BasicType file.
/// All manual defined structs are in BasicType.h

#include <string>

#define SDK_UNDEFINED(__ssize__, __cnt__, ...) char undefined##__cnt__[__ssize__]; //
#define __um(...) // x

#include "SDK/BasicType.h"
#include "SDK/CoreUObject.h"
#include "SDK/AudioExtensions.h"
#include "SDK/AudioPlatformConfiguration.h"
#include "SDK/Chaos.h"
#include "SDK/ClothingSystemRuntimeInterface.h"
#include "SDK/DeveloperSettings.h"
#include "SDK/InputCore.h"
#include "SDK/PacketHandler.h"
#include "SDK/PhysicsCore.h"
#include "SDK/PropertyAccess.h"
#include "SDK/PropertyPath.h"
#include "SDK/SlateCore.h"
#include "SDK/Slate.h"
#include "SDK/MeshDescription.h"
#include "SDK/StaticMeshDescription.h"
#include "SDK/merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "SDK/ActorLayerUtilities.h"
#include "SDK/ActorSequence.h"
#include "SDK/GameplayTags.h"
#include "SDK/GameplayTasks.h"
#include "SDK/NavigationSystem.h"
#include "SDK/AIModule.h"
#include "SDK/AkAudio.h"
#include "SDK/AndroidPermission.h"
#include "SDK/AnimationCore.h"
#include "SDK/AnimationSharing.h"
#include "SDK/AnimGraphRuntime.h"
#include "SDK/AnimNotify_AkEvent.h"
#include "SDK/ApexDestruction.h"
#include "SDK/AppleImageUtils.h"
#include "SDK/ArchVisCharacter.h"
#include "SDK/AssetRegistry.h"
#include "SDK/AssetTags.h"
#include "SDK/AudioAnalyzer.h"
#include "SDK/AudioCapture.h"
#include "SDK/AudioSynesthesia.h"
#include "SDK/MRMesh.h"
#include "SDK/AugmentedReality.h"
#include "SDK/AutomationUtils.h"
#include "SDK/AvfMediaFactory.h"
#include "SDK/OnlineSubsystemBBQ.h"
#include "SDK/BBQBackendServices.h"
#include "SDK/BBQInterface.h"
#include "SDK/EnhancedInput.h"
#include "SDK/GameMessages.h"
#include "SDK/DataRegistry.h"
#include "SDK/GameplayAbilities.h"
#include "SDK/GameplayVariables.h"
#include "SDK/NiagaraCore.h"
#include "SDK/NiagaraShader.h"
#include "SDK/Niagara.h"
#include "SDK/BBQCore.h"
#include "SDK/BBQUtilities.h"
#include "SDK/CinematicCamera.h"
#include "SDK/TemplateSequence.h"
#include "SDK/GameplayCameras.h"
#include "SDK/MediaUtils.h"
#include "SDK/MediaAssets.h"
#include "SDK/LevelSequence.h"
#include "SDK/BBQGameSession.h"
#include "SDK/BBQMetaGame.h"
#include "SDK/BBQUI.h"
#include "SDK/Gauntlet.h"
#include "SDK/merged_BBQAddOn_Alpha_BBQGame_BBQAddOn_Mercury.h"
#include "SDK/BBQAddOn_Charlie.h"
#include "SDK/BBQAddOn_Delta.h"
#include "SDK/BBQAddOn_GenericPerks.h"
#include "SDK/BBQAddOn_Rejected.h"
#include "SDK/SumoDebugMenu.h"
#include "SDK/BBQDebug.h"
#include "SDK/BBQDebugLauncher.h"
#include "SDK/OnlineSubsystem.h"
#include "SDK/OnlineSubsystemUtils.h"
#include "SDK/BBQNetworking.h"
#include "SDK/BuildPatchServices.h"
#include "SDK/CableComponent.h"
#include "SDK/ClothingSystemRuntimeCommon.h"
#include "SDK/ChaosCloth.h"
#include "SDK/ChaosNiagara.h"
#include "SDK/ChaosSolverEngine.h"
#include "SDK/ClothingSystemRuntimeNv.h"
#include "SDK/RigVM.h"
#include "SDK/ControlRig.h"
#include "SDK/CustomMeshComponent.h"
#include "SDK/DatasmithContent.h"
#include "SDK/DLSS.h"
#include "SDK/DLSSBlueprint.h"
#include "SDK/FieldSystemEngine.h"
#include "SDK/GeometryCollectionEngine.h"
#include "SDK/EditableMesh.h"
#include "SDK/EngineDamageTypes.h"
#include "SDK/EngineMessages.h"
#include "SDK/EngineSettings.h"
#include "SDK/EyeTracker.h"
#include "SDK/FacialAnimation.h"
#include "SDK/Foliage.h"
#include "SDK/FSR2TemporalUpscaling.h"
#include "SDK/GeometryCache.h"
#include "SDK/GeometryCacheTracks.h"
#include "SDK/GeometryCollectionTracks.h"
#include "SDK/GooglePAD.h"
#include "SDK/HairStrandsCore.h"
#include "SDK/HeadMountedDisplay.h"
#include "SDK/HeatMaps.h"
#include "SDK/Hotfix.h"
#include "SDK/HoudiniEngineRuntime.h"
#include "SDK/ImageWrapper.h"
#include "SDK/ImageWriteQueue.h"
#include "SDK/ImgMedia.h"
#include "SDK/ImgMediaEngine.h"
#include "SDK/ImgMediaFactory.h"
#include "SDK/InteractiveToolsFramework.h"
#include "SDK/JsonUtilities.h"
#include "SDK/Landmass.h"
#include "SDK/Landscape.h"
#include "SDK/Renderer.h"
#include "SDK/LightPropagationVolumeRuntime.h"
#include "SDK/LiveLinkInterface.h"
#include "SDK/TimeManagement.h"
#include "SDK/LiveLink.h"
#include "SDK/LiveLinkComponents.h"
#include "SDK/LiveLinkMessageBusFramework.h"
#include "SDK/LiveLinkMovieScene.h"
#include "SDK/Lobby.h"
#include "SDK/LocationServicesBPLibrary.h"
#include "SDK/LowSpecAssets.h"
#include "SDK/LuminRuntimeSettings.h"
#include "SDK/MagicLeap.h"
#include "SDK/MagicLeapImageTracker.h"
#include "SDK/MagicLeapPlanes.h"
#include "SDK/MagicLeapAR.h"
#include "SDK/MagicLeapARPin.h"
#include "SDK/MagicLeapARPinInfoActor.h"
#include "SDK/MagicLeapAudio.h"
#include "SDK/MagicLeapController.h"
#include "SDK/MagicLeapEyeTracker.h"
#include "SDK/MagicLeapHandMeshing.h"
#include "SDK/MagicLeapHandTracking.h"
#include "SDK/MagicLeapIdentity.h"
#include "SDK/MagicLeapLightEstimation.h"
#include "SDK/MagicLeapPrivileges.h"
#include "SDK/MagicLeapSecureStorage.h"
#include "SDK/MagicLeapSharedWorld.h"
#include "SDK/MaterialShaderQualitySettings.h"
#include "SDK/MediaCompositing.h"
#include "SDK/ModelingComponents.h"
#include "SDK/ModelingOperators.h"
#include "SDK/MeshModelingTools.h"
#include "SDK/MobilePatchingUtils.h"
#include "SDK/MotoSynth.h"
#include "SDK/MoviePlayer.h"
#include "SDK/OpenColorIO.h"
#include "SDK/MovieRenderPipelineCore.h"
#include "SDK/MovieRenderPipelineRenderPasses.h"
#include "SDK/MovieRenderPipelineSettings.h"
#include "SDK/MovieSceneCapture.h"
#include "SDK/MultiplayGameServerSDK.h"
#include "SDK/MuseumMode.h"
#include "SDK/NetCore.h"
#include "SDK/NiagaraAnimNotifies.h"
#include "SDK/OnlineSubsystemSteam.h"
#include "SDK/OodleNetworkHandlerComponent.h"
#include "SDK/OpenXRHandTracking.h"
#include "SDK/Overlay.h"
#include "SDK/Party.h"
#include "SDK/PhysXVehicles.h"
#include "SDK/PlayFabCommon.h"
#include "SDK/PlayFab.h"
#include "SDK/PlayFabGSDK.h"
#include "SDK/ProceduralMeshComponent.h"
#include "SDK/Qos.h"
#include "SDK/Rejoin.h"
#include "SDK/ReplicationGraph.h"
#include "SDK/SequencerScripting.h"
#include "SDK/Serialization.h"
#include "SDK/SessionMessages.h"
#include "SDK/SignificanceManager.h"
#include "SDK/SoundFields.h"
#include "SDK/SumoWwiseHelpers.h"
#include "SDK/Synthesis.h"
#include "SDK/TakeMovieScene.h"
#include "SDK/TcpMessaging.h"
#include "SDK/UdpMessaging.h"
#include "SDK/UObjectPlugin.h"
#include "SDK/VariantManagerContent.h"
#include "SDK/VectorVM.h"
#include "SDK/WebBrowser.h"
#include "SDK/WmfMediaFactory.h"
