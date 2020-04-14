instance 1ab5e0dee00
class ARBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	UnpinComponent 0x453fa hash 6e99f342 params:( SceneComponent ComponentToUnpin; );
	StopARSession 0x453f2 hash 18af49e2 params:(  );
	StartARSession 0x453ea hash 275d4d6a params:( ARSessionConfig SessionConfig; );
	SetAlignmentTransform 0x453de hash c5cdb66c params:( Transform InAlignmentTransform; );
	RemovePin 0x453d8 hash 49fa45ba params:( ARPin PinToRemove; );
	PinComponentToTraceResult 0x453ca hash 868a7070 params:( SceneComponent ComponentToPin;ARTraceResult TraceResult;None DebugName;ARPin ReturnValue; );
	PinComponent 0x453c3 hash d541d9ff params:( SceneComponent ComponentToPin;Transform PinToWorldTransform;ARTrackedGeometry TrackedGeometry;None DebugName;ARPin ReturnValue; );
	PauseARSession 0x453bb hash ad506bda params:(  );
	LineTraceTrackedObjects3D 0x453ad hash 3f2bd77b params:( Vector Start;Vector End;None bTestFeaturePoints;None bTestGroundPlane;None bTestPlaneExtents;None bTestPlaneBoundaryPolygon;ReturnValue ReturnValue; );
	LineTraceTrackedObjects 0x453a0 hash 63f757a4 params:( Vector2D ScreenCoord;None bTestFeaturePoints;None bTestGroundPlane;None bTestPlaneExtents;None bTestPlaneBoundaryPolygon;ReturnValue ReturnValue; );
	IsSessionTypeSupported 0x45394 hash 294b14cd params:( UnderlyingType SessionType;None ReturnValue; );
	IsSessionTrackingFeatureSupported 0x45382 hash d1143dea params:( UnderlyingType SessionType;UnderlyingType SessionTrackingFeature;None ReturnValue; );
	IsARSupported 0x4537a hash ad98e69a params:( None ReturnValue; );
	GetWorldMappingStatus 0x4536e hash 2c67cc5d params:( UnderlyingType ReturnValue; );
	GetTrackingQualityReason 0x45361 hash 61563749 params:( UnderlyingType ReturnValue; );
	GetTrackingQuality 0x45357 hash cb3b1b61 params:( UnderlyingType ReturnValue; );
	GetSupportedVideoFormats 0x4534a hash 7fc51efe params:( UnderlyingType SessionType;ReturnValue ReturnValue; );
	GetSessionConfig 0x45341 hash 19860a1f params:( ARSessionConfig ReturnValue; );
	GetPointCloud 0x45339 hash 1b5a8e6 params:( ReturnValue ReturnValue; );
	GetPersonSegmentationImage 0x4532b hash 61412ccd params:( ARTextureCameraImage ReturnValue; );
	GetPersonSegmentationDepthImage 0x4531a hash e7ec4c82 params:( ARTextureCameraImage ReturnValue; );
	GetCurrentLightEstimate 0x4530d hash 412b795c params:( ARLightEstimate ReturnValue; );
	GetCameraImage 0x45305 hash 674e6c51 params:( ARTextureCameraImage ReturnValue; );
	GetCameraDepth 0x452fd hash 66efd043 params:( ARTextureCameraDepth ReturnValue; );
	GetARSessionStatus 0x452f3 hash 28e633c0 params:( ARSessionStatus ReturnValue; );
	GetAllTrackedPoses 0x452e9 hash e3d5a9e6 params:( ReturnValue ReturnValue; );
	GetAllTrackedPoints 0x452de hash 5e8591b9 params:( ReturnValue ReturnValue; );
	GetAllTrackedPlanes 0x452d3 hash 5e4ae33f params:( ReturnValue ReturnValue; );
	GetAllTrackedImages 0x452c8 hash 4e08c192 params:( ReturnValue ReturnValue; );
	GetAllTrackedEnvironmentCaptureProbes 0x452b4 hash 6f5b8790 params:( ReturnValue ReturnValue; );
	GetAllTracked2DPoses 0x452a9 hash c3d2f95c params:( ReturnValue ReturnValue; );
	GetAllPins 0x452a3 hash e6cfbdb8 params:( ReturnValue ReturnValue; );
	GetAllGeometries 0x4529a hash b4e52332 params:( ReturnValue ReturnValue; );
	DebugDrawTrackedGeometry 0x4528d hash 71c335a4 params:( ARTrackedGeometry TrackedGeometry;Object WorldContextObject;LinearColor Color;None OutlineThickness;None PersistForSeconds; );
	DebugDrawPin 0x45286 hash 51c516c1 params:( ARPin ARPin;Object WorldContextObject;LinearColor Color;None Scale;None PersistForSeconds; );
	AddRuntimeCandidateImage 0x45279 hash 17cceff2 params:( ARSessionConfig SessionConfig;Texture2D CandidateTexture;None FriendlyName;None PhysicalWidth;ARCandidateImage ReturnValue; );
	AddManualEnvironmentCaptureProbe 0x45268 hash 7c7636ed params:( Vector Location;Vector Extent;None ReturnValue; );
};


instance 1ab5e0debc0
class ARTraceResultLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	GetTrackedGeometry 0x4543e hash 9c5d19ef params:( ARTraceResult TraceResult;ARTrackedGeometry ReturnValue; );
	GetTraceChannel 0x45435 hash 95c89a2d params:( ARTraceResult TraceResult;UnderlyingType ReturnValue; );
	GetLocalToWorldTransform 0x45428 hash 74d51557 params:( ARTraceResult TraceResult;Transform ReturnValue; );
	GetLocalToTrackingTransform 0x45419 hash 39c92422 params:( ARTraceResult TraceResult;Transform ReturnValue; );
	GetDistanceFromCamera 0x4540d hash 68a26d2d params:( ARTraceResult TraceResult;None ReturnValue; );
};


instance 1ab5e0de980
class ARBaseAsyncTaskBlueprintProxy public : BlueprintAsyncActionBase
{
	// Fields

};


instance 1ab5e0de740
class ARSaveWorldAsyncTaskBlueprintProxy public : ARBaseAsyncTaskBlueprintProxy
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x50 property 0x1ab71b2da00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailed; // 0x60 property 0x1ab71b2da80 hash 0xb7a5ed1a

	// Functions
	ARSaveWorld 0x4546a hash c9f6c42f params:( Object WorldContextObject;ARSaveWorldAsyncTaskBlueprintProxy ReturnValue; );
};


instance 1ab5e0de500
class ARGetCandidateObjectAsyncTaskBlueprintProxy public : ARBaseAsyncTaskBlueprintProxy
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x50 property 0x1ab71b2d700 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailed; // 0x60 property 0x1ab71b2d780 hash 0xb7a5ed1a

	// Functions
	ARGetCandidateObject 0x45488 hash a11ef96c params:( Object WorldContextObject;Vector Location;Vector Extent;ARGetCandidateObjectAsyncTaskBlueprintProxy ReturnValue; );
};


instance 1ab5e0de2c0
class ARLightEstimate public : Object
{
	// Fields

};


instance 1ab5e0de080
class ARBasicLightEstimate public : ARLightEstimate
{
	// Fields
	float AmbientIntensityLumens; // 0x28
	float AmbientColorTemperatureKelvin; // 0x2c
	LinearColor AmbientColor; // 0x30

	// Functions
	GetAmbientIntensityLumens 0x454c1 hash 165faec0 params:( None ReturnValue; );
	GetAmbientColorTemperatureKelvin 0x454b0 hash 22b3c97b params:( None ReturnValue; );
	GetAmbientColor 0x454a7 hash 1fc61ae4 params:( LinearColor ReturnValue; );
};


instance 1ab5e0f49c0
class AROriginActor public : Actor
{
	// Fields

};


instance 1ab5e0f4780
class ARPin public : Object
{
	// Fields
	ARTrackedGeometry* TrackedGeometry; // 0x28
	SceneComponent* PinnedComponent; // 0x30
	Transform LocalToTrackingTransform; // 0x40
	Transform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	MulticastInlineDelegateProperty OnARTrackingStateChanged; // 0xc0 property 0x1ab71b2f200 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnARTransformUpdated; // 0xd0 property 0x1ab71b2f280 hash 0xb7a5ed1a

	// Functions
	GetTrackingState 0x454f2 hash f5832499 params:( UnderlyingType ReturnValue; );
	GetTrackedGeometry 0x4543e hash 9c5d19ef params:( ARTrackedGeometry ReturnValue; );
	GetPinnedComponent 0x454e8 hash 489dab16 params:( SceneComponent ReturnValue; );
	GetLocalToWorldTransform 0x45428 hash 74d51557 params:( Transform ReturnValue; );
	GetLocalToTrackingTransform 0x45419 hash 39c92422 params:( Transform ReturnValue; );
	GetDebugName 0x454e1 hash 15b1110d params:( None ReturnValue; );
	DebugDraw 0x454db hash a94976ba params:( World World;LinearColor Color;None Scale;None PersistForSeconds; );
};


instance 1ab5e0f4540
class ARSessionConfig public : DataAsset
{
	// Fields
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30
	bool bGenerateCollisionForMeshData; // 0x31
	bool bGenerateNavMeshForMeshData; // 0x32
	bool bUseMeshDataForOcclusion; // 0x33
	bool bRenderMeshDataInWireframe; // 0x34
	bool bTrackSceneObjects; // 0x35
	bool bUsePersonSegmentationForOcclusion; // 0x36
	EARWorldAlignment WorldAlignment; // 0x37
	EARSessionType SessionType; // 0x38
	EARPlaneDetectionMode PlaneDetectionMode; // 0x39
	bool bHorizontalPlaneDetection; // 0x3a
	bool bVerticalPlaneDetection; // 0x3b
	bool bEnableAutoFocus; // 0x3c
	EARLightEstimationMode LightEstimationMode; // 0x3d
	EARFrameSyncMode FrameSyncMode; // 0x3e
	bool bEnableAutomaticCameraOverlay; // 0x3f
	bool bEnableAutomaticCameraTracking; // 0x40
	bool bResetCameraTracking; // 0x41
	bool bResetTrackedObjects; // 0x42
	TArray CandidateImages; // 0x48
	int MaxNumSimultaneousImagesTracked; // 0x58
	EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c
	TArray WorldMapData; // 0x60
	TArray CandidateObjects; // 0x70
	ARVideoFormat DesiredVideoFormat; // 0x80
	EARFaceTrackingDirection FaceTrackingDirection; // 0x8c
	EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8d
	TArray SerializedARCandidateImageDatabase; // 0x90
	EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa0

	// Functions
	ShouldResetTrackedObjects 0x45668 hash a700201f params:( None ReturnValue; );
	ShouldResetCameraTracking 0x4565a hash d22f38f3 params:( None ReturnValue; );
	ShouldRenderCameraOverlay 0x4564c hash fbae071f params:( None ReturnValue; );
	ShouldEnableCameraTracking 0x4563e hash 781ad6f7 params:( None ReturnValue; );
	ShouldEnableAutoFocus 0x45632 hash 68989ef4 params:( None ReturnValue; );
	SetWorldMapData 0x45629 hash a321f451 params:( WorldMapData WorldMapData; );
	SetSessionTrackingFeatureToEnable 0x45617 hash 849e6ffe params:( UnderlyingType InSessionTrackingFeature; );
	SetResetTrackedObjects 0x4560b hash d7edf2fc params:( None bNewValue; );
	SetResetCameraTracking 0x455ff hash 31d0bd0 params:( None bNewValue; );
	SetFaceTrackingUpdate 0x455f3 hash e2c1b0b6 params:( UnderlyingType InUpdate; );
	SetFaceTrackingDirection 0x455e6 hash e3d18554 params:( UnderlyingType InDirection; );
	SetEnableAutoFocus 0x455dc hash a25d8b51 params:( None bNewValue; );
	SetDesiredVideoFormat 0x455d0 hash 13ba991 params:( ARVideoFormat NewFormat; );
	SetCandidateObjectList 0x455c4 hash 4b29fb81 params:( InCandidateObjects InCandidateObjects; );
	GetWorldMapData 0x455bb hash fbc8cf45 params:( ReturnValue ReturnValue; );
	GetWorldAlignment 0x455b1 hash f9ecfa6c params:( UnderlyingType ReturnValue; );
	GetSessionType 0x455a9 hash e234a1ab params:( UnderlyingType ReturnValue; );
	GetPlaneDetectionMode 0x4559d hash 2f692179 params:( UnderlyingType ReturnValue; );
	GetMaxNumSimultaneousImagesTracked 0x4558b hash f2ffa518 params:( None ReturnValue; );
	GetLightEstimationMode 0x4557f hash d08e98bf params:( UnderlyingType ReturnValue; );
	GetFrameSyncMode 0x45576 hash 1e4870f2 params:( UnderlyingType ReturnValue; );
	GetFaceTrackingUpdate 0x4556a hash 1625f2aa params:( UnderlyingType ReturnValue; );
	GetFaceTrackingDirection 0x4555d hash 30dff2c8 params:( UnderlyingType ReturnValue; );
	GetEnvironmentCaptureProbeType 0x4554d hash 8d5484c8 params:( UnderlyingType ReturnValue; );
	GetEnabledSessionTrackingFeature 0x4553c hash 760bd653 params:( UnderlyingType ReturnValue; );
	GetDesiredVideoFormat 0x45530 hash 349feb85 params:( ARVideoFormat ReturnValue; );
	GetCandidateObjectList 0x45524 hash eb167bf5 params:( ReturnValue ReturnValue; );
	GetCandidateImageList 0x45518 hash 565afc01 params:( ReturnValue ReturnValue; );
	AddCandidateObject 0x4550e hash f3603fe2 params:( ARCandidateObject CandidateObject; );
	AddCandidateImage 0x45504 hash 831858ce params:( ARCandidateImage NewCandidateImage; );
};


instance 1ab5e0f4300
class ARSharedWorldGameMode public : GameMode
{
	// Fields
	int BufferSizePerChunk; // 0x300

	// Functions
	SetPreviewImageData 0x456a8 hash 497d910 params:( ImageData ImageData; );
	SetARWorldSharingIsReady 0x4569b hash 34110bc9 params:(  );
	SetARSharedWorldData 0x45690 hash 15cca65d params:( ARWorldData ARWorldData; );
	GetARSharedWorldGameState 0x45682 hash e781ca72 params:( ARSharedWorldGameState ReturnValue; );
};


instance 1ab5e0f40c0
class ARSharedWorldGameState public : GameState
{
	// Fields
	TArray PreviewImageData; // 0x278
	TArray ARWorldData; // 0x288
	int PreviewImageBytesTotal; // 0x298
	int ARWorldBytesTotal; // 0x29c
	int PreviewImageBytesDelivered; // 0x2a0
	int ARWorldBytesDelivered; // 0x2a4

	// Functions
	K2_OnARWorldMapIsReady 0x15b27 hash 93f67688 params:(  );
};


instance 1ab5e0f3e80
class ARSharedWorldPlayerController public : PlayerController
{
	// Fields

	// Functions
	ServerMarkReadyForReceiving 0x15b9e hash f4b071df params:(  );
	ClientUpdatePreviewImageData 0x15b8f hash d7e7e3c6 params:( None Offset;Buffer Buffer; );
	ClientUpdateARWorldData 0x15b82 hash b6efaabc params:( None Offset;Buffer Buffer; );
	ClientInitSharedWorld 0x15b76 hash 19da1137 params:( None PreviewImageSize;None ARWorldDataSize; );
};


instance 1ab5e0f3c40
class ARSkyLight public : SkyLight
{
	// Fields
	AREnvironmentCaptureProbe* CaptureProbe; // 0x228

	// Functions
	SetEnvironmentCaptureProbe 0x456e2 hash cd3f05f2 params:( AREnvironmentCaptureProbe InCaptureProbe; );
};


instance 1ab5e0f37c0
class ARTexture public : Texture
{
	// Fields
	EARTextureType TextureType; // 0xd0
	float Timestamp; // 0xd4
	Guid ExternalTextureGuid; // 0xd8
	Vector2D Size; // 0xe8

};


instance 1ab5e0f3100
class ARTextureCameraImage public : ARTexture
{
	// Fields

};


instance 1ab5e0f2ec0
class ARTextureCameraDepth public : ARTexture
{
	// Fields
	EARDepthQuality DepthQuality; // 0xf0
	EARDepthAccuracy DepthAccuracy; // 0xf1
	bool bIsTemporallySmoothed; // 0xf2

};


instance 1ab5e0f2c80
class AREnvironmentCaptureProbeTexture public : TextureCube
{
	// Fields
	EARTextureType TextureType; // 0x128
	float Timestamp; // 0x12c
	Guid ExternalTextureGuid; // 0x130
	Vector2D Size; // 0x140

};


instance 1ab5e0f2800
class ARTraceResultDummy public : Object
{
	// Fields

};


instance 1ab5e0f25c0
class ARTrackedGeometry public : Object
{
	// Fields
	Guid UniqueId; // 0x28
	Transform LocalToTrackingTransform; // 0x40
	Transform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	MRMeshComponent* UnderlyingMesh; // 0xb0
	EARObjectClassification ObjectClassification; // 0xb8
	int LastUpdateFrameNumber; // 0xd0
	FName DebugName; // 0xe0

	// Functions
	IsTracked 0x45774 hash 9e46d2ff params:( None ReturnValue; );
	GetUnderlyingMesh 0x4576a hash b9cc0d53 params:( MRMeshComponent ReturnValue; );
	GetTrackingState 0x454f2 hash f5832499 params:( UnderlyingType ReturnValue; );
	GetObjectClassification 0x4575d hash 4b3d7b48 params:( UnderlyingType ReturnValue; );
	GetLocalToWorldTransform 0x45428 hash 74d51557 params:( Transform ReturnValue; );
	GetLocalToTrackingTransform 0x45419 hash 39c92422 params:( Transform ReturnValue; );
	GetLastUpdateTimestamp 0x45751 hash 609a2af0 params:( None ReturnValue; );
	GetLastUpdateFrameNumber 0x45744 hash 286d9410 params:( None ReturnValue; );
	GetDebugName 0x454e1 hash 15b1110d params:( None ReturnValue; );
};


instance 1ab5e0f2380
class ARPlaneGeometry public : ARTrackedGeometry
{
	// Fields
	EARPlaneOrientation Orientation; // 0xe8
	Vector Center; // 0xec
	Vector Extent; // 0xf8
	ARPlaneGeometry* SubsumedBy; // 0x118

	// Functions
	GetSubsumedBy 0x457a7 hash d91f81c8 params:( ARPlaneGeometry ReturnValue; );
	GetOrientation 0x4579f hash 14882151 params:( UnderlyingType ReturnValue; );
	GetExtent 0x45799 hash 1ad2e3d params:( Vector ReturnValue; );
	GetCenter 0x45793 hash fba7ffc6 params:( Vector ReturnValue; );
	GetBoundaryPolygonInLocalSpace 0x45783 hash e24bb65f params:( ReturnValue ReturnValue; );
};


instance 1ab5e0f2140
class ARTrackedPoint public : ARTrackedGeometry
{
	// Fields

};


instance 1ab5e0f1f00
class ARTrackedImage public : ARTrackedGeometry
{
	// Fields
	ARCandidateImage* DetectedImage; // 0xe8
	Vector2D EstimatedSize; // 0xf0

	// Functions
	GetEstimateSize 0x457c8 hash c82f709c params:( Vector2D ReturnValue; );
	GetDetectedImage 0x457bf hash 3799984a params:( ARCandidateImage ReturnValue; );
};


instance 1ab5e0f1cc0
class ARTrackedQRCode public : ARTrackedImage
{
	// Fields
	FString QRCode; // 0xf8
	int Version; // 0x108

};


instance 1ab5e0f1a80
class ARFaceGeometry public : ARTrackedGeometry
{
	// Fields
	Vector LookAtTarget; // 0xe8
	bool bIsTracked; // 0xf4
	MapProperty BlendShapes; // 0xf8 property 0x1ab71165600 hash 0xadd0fb88

	// Functions
	GetWorldSpaceEyeTransform 0x45802 hash fdb7edf8 params:( UnderlyingType Eye;Transform ReturnValue; );
	GetLocalSpaceEyeTransform 0x457f4 hash f153ad9b params:( UnderlyingType Eye;Transform ReturnValue; );
	GetBlendShapeValue 0x457ea hash 2debeab8 params:( UnderlyingType BlendShape;None ReturnValue; );
	GetBlendShapes 0x457e2 hash 64a5feae params:( ReturnValue_Key ReturnValue; );
};


instance 1ab5e0f1840
class AREnvironmentCaptureProbe public : ARTrackedGeometry
{
	// Fields
	AREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0xf8

	// Functions
	GetExtent 0x45799 hash 1ad2e3d params:( Vector ReturnValue; );
	GetEnvironmentCaptureTexture 0x4581e hash 100b433f params:( AREnvironmentCaptureProbeTexture ReturnValue; );
};


instance 1ab5e0f1600
class ARTrackedObject public : ARTrackedGeometry
{
	// Fields
	ARCandidateObject* DetectedObject; // 0xe8

	// Functions
	GetDetectedObject 0x45836 hash 38096ede params:( ARCandidateObject ReturnValue; );
};


instance 1ab5e0f13c0
class ARTrackedPose public : ARTrackedGeometry
{
	// Fields

	// Functions
	GetTrackedPoseData 0x45848 hash f5256ab4 params:( ARPose3D ReturnValue; );
};


instance 1ab5e0f1180
class ARTrackableNotifyComponent public : ActorComponent
{
	// Fields
	MulticastInlineDelegateProperty OnAddTrackedGeometry; // 0xb0 property 0x1ab71b45a80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnUpdateTrackedGeometry; // 0xc0 property 0x1ab71b45b00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnRemoveTrackedGeometry; // 0xd0 property 0x1ab71b45b80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAddTrackedPlane; // 0xe0 property 0x1ab71b45c80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnUpdateTrackedPlane; // 0xf0 property 0x1ab71b45d00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnRemoveTrackedPlane; // 0x100 property 0x1ab71b45d80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAddTrackedPoint; // 0x110 property 0x1ab71b45e00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnUpdateTrackedPoint; // 0x120 property 0x1ab71b45e80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnRemoveTrackedPoint; // 0x130 property 0x1ab71b45f00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAddTrackedImage; // 0x140 property 0x1ab71b45f80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnUpdateTrackedImage; // 0x150 property 0x1ab71b46000 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnRemoveTrackedImage; // 0x160 property 0x1ab71b46080 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAddTrackedFace; // 0x170 property 0x1ab71b46100 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnUpdateTrackedFace; // 0x180 property 0x1ab71b46180 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnRemoveTrackedFace; // 0x190 property 0x1ab71b46200 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAddTrackedEnvProbe; // 0x1a0 property 0x1ab71b46280 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnUpdateTrackedEnvProbe; // 0x1b0 property 0x1ab71b46300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnRemoveTrackedEnvProbe; // 0x1c0 property 0x1ab71b44280 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAddTrackedObject; // 0x1d0 property 0x1ab71b44300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnUpdateTrackedObject; // 0x1e0 property 0x1ab71b44380 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnRemoveTrackedObject; // 0x1f0 property 0x1ab71b44400 hash 0xb7a5ed1a

};


instance 1ab5e0f0f40
class ARTypesDummyClass public : Object
{
	// Fields

};


instance 1ab5e0f0d00
class ARCandidateImage public : DataAsset
{
	// Fields
	Texture2D* CandidateTexture; // 0x30
	FString FriendlyName; // 0x38
	float Width; // 0x48
	float Height; // 0x4c
	EARCandidateImageOrientation Orientation; // 0x50

	// Functions
	GetPhysicalWidth 0x45891 hash 4092a5a2 params:( None ReturnValue; );
	GetPhysicalHeight 0x45887 hash 2fa41d7b params:( None ReturnValue; );
	GetOrientation 0x4579f hash 14882151 params:( UnderlyingType ReturnValue; );
	GetFriendlyName 0x4587e hash 374e66e3 params:( None ReturnValue; );
	GetCandidateTexture 0x45873 hash 29236af3 params:( Texture2D ReturnValue; );
};


instance 1ab5e0f0ac0
class ARCandidateObject public : DataAsset
{
	// Fields
	TArray CandidateObjectData; // 0x30
	FString FriendlyName; // 0x40
	Box BoundingBox; // 0x50

	// Functions
	SetFriendlyName 0x458cc hash dea78bef params:( None NewName; );
	SetCandidateObjectData 0x458c0 hash 4b25767f params:( InCandidateObject InCandidateObject; );
	SetBoundingBox 0x458b8 hash b3500e70 params:( Box InBoundingBox; );
	GetFriendlyName 0x4587e hash 374e66e3 params:( None ReturnValue; );
	GetCandidateObjectData 0x458ac hash eb11f6f3 params:( ReturnValue ReturnValue; );
	GetBoundingBox 0x458a4 hash ec4d5ae4 params:( Box ReturnValue; );
};


instance 1ab71459700
struct ARSharedWorldReplicationState 
{
	// Fields
	int PreviewImageOffset; // 0x0
	int ARWorldOffset; // 0x4

};


instance 1ab71459640
struct ARTraceResult 
{
	// Fields
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	Transform LocalToTrackingTransform; // 0x10
	ARTrackedGeometry* TrackedGeometry; // 0x40

};


instance 1ab71459580
struct ARPose3D 
{
	// Fields
	ARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray JointTransforms; // 0x28
	TArray IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48

};


instance 1ab714594c0
struct ARSkeletonDefinition 
{
	// Fields
	int NumJoints; // 0x0
	TArray JointNames; // 0x8
	TArray ParentIndices; // 0x18

};


instance 1ab7145c580
struct ARPose2D 
{
	// Fields
	ARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray JointLocations; // 0x28
	TArray IsJointTracked; // 0x38

};


instance 1ab7145c4c0
struct ARVideoFormat 
{
	// Fields
	int FPS; // 0x0
	int Width; // 0x4
	int Height; // 0x8

};


instance 1ab7145c400
struct ARSessionStatus 
{
	// Fields
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10

};


