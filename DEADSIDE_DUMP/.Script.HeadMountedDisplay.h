instance 1ab5e0f0880
class HeadMountedDisplayFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	UpdateExternalTrackingHMDPosition 0x45a6d hash cbfb524c params:( Transform ExternalTrackingTransform; );
	SetWorldToMetersScale 0x45a61 hash b3e49194 params:( Object WorldContext;None NewScale; );
	SetTrackingOrigin 0x45a57 hash 7ea9a8ec params:( EHMDTrackingOrigin Origin; );
	SetSpectatorScreenTexture 0x45a49 hash 10916257 params:( Texture InTexture; );
	SetSpectatorScreenModeTexturePlusEyeLayout 0x45a33 hash 30b569a1 params:( Vector2D EyeRectMin;Vector2D EyeRectMax;Vector2D TextureRectMin;Vector2D TextureRectMax;None bDrawEyeFirst;None bClearBlack;None bUseAlpha; );
	SetSpectatorScreenMode 0x45a27 hash 88526ab params:( UnderlyingType Mode; );
	SetClippingPlanes 0x45a1d hash 1694e10a params:( None Near;None Far; );
	ResetOrientationAndPosition 0x45a0e hash 6c8c479c params:( None Yaw;EOrientPositionSelector Options; );
	IsSpectatorScreenModeControllable 0x459fc hash 8933123c params:( None ReturnValue; );
	IsInLowPersistenceMode 0x459f0 hash e8003054 params:( None ReturnValue; );
	IsHeadMountedDisplayEnabled 0x459e1 hash d9427e10 params:( None ReturnValue; );
	IsHeadMountedDisplayConnected 0x459d1 hash 3b56bf78 params:( None ReturnValue; );
	IsDeviceTracking 0x459c8 hash 1e830084 params:( XRDeviceId XRDeviceId;None ReturnValue; );
	HasValidTrackingPosition 0x459bb hash ae28e39 params:( None ReturnValue; );
	GetWorldToMetersScale 0x459af hash e748d388 params:( Object WorldContext;None ReturnValue; );
	GetVRFocusState 0x459a6 hash 9ddb5b0e params:( None bUseFocus;None bHasFocus; );
	GetTrackingToWorldTransform 0x45997 hash c2c1d3f params:( Object WorldContext;Transform ReturnValue; );
	GetTrackingSensorParameters 0x45988 hash 52f39246 params:( Vector Origin;Rotator Rotation;None LeftFOV;None RightFOV;None TopFOV;None BottomFOV;None Distance;None NearPlane;None FarPlane;None IsActive;None Index; );
	GetTrackingOrigin 0x4597e hash 9c7310e0 params:( EHMDTrackingOrigin ReturnValue; );
	GetScreenPercentage 0x45973 hash 4a840483 params:( None ReturnValue; );
	GetPositionalTrackingCameraParameters 0x4595f hash fde89057 params:( Vector CameraOrigin;Rotator CameraRotation;None HFOV;None VFOV;None CameraDistance;None NearPlane;None FarPlane; );
	GetPixelDensity 0x45956 hash 245a2f87 params:( None ReturnValue; );
	GetOrientationAndPosition 0x45948 hash 6e442759 params:( Rotator DeviceRotation;Vector DevicePosition; );
	GetNumOfTrackingSensors 0x4593b hash a79717aa params:( None ReturnValue; );
	GetHMDWornState 0x45932 hash 827a7445 params:( EHMDWornState ReturnValue; );
	GetHMDDeviceName 0x45929 hash 4c80510f params:( None ReturnValue; );
	GetDeviceWorldPose 0x4591f hash c43c4ad4 params:( Object WorldContext;XRDeviceId XRDeviceId;None bIsTracked;Rotator Orientation;None bHasPositionalTracking;Vector Position; );
	GetDevicePose 0x45917 hash 9d7f448c params:( XRDeviceId XRDeviceId;None bIsTracked;Rotator Orientation;None bHasPositionalTracking;Vector Position; );
	EnumerateTrackedDevices 0x4590a hash 794438c params:( None SystemId;UnderlyingType DeviceType;ReturnValue ReturnValue; );
	EnableLowPersistenceMode 0x458fd hash d02652a8 params:( None bEnable; );
	EnableHMD 0x458f7 hash f3360085 params:( None bEnable;None ReturnValue; );
	CalibrateExternalTrackingToHMD 0x458e7 hash 4842dbbe params:( Transform ExternalTrackingTransform; );
};


instance 1ab5e0f0640
class MotionControllerComponent public : PrimitiveComponent
{
	// Fields
	int PlayerIndex; // 0x3d8
	EControllerHand Hand; // 0x3dc
	FName MotionSource; // 0x3e0
	bool bDisableLowLatencyUpdate; // 0x3e8
	ETrackingStatus CurrentTrackingStatus; // 0x3ec
	bool bDisplayDeviceModel; // 0x3ed
	FName DisplayModelSource; // 0x3f0
	StaticMesh* CustomDisplayMesh; // 0x3f8
	TArray DisplayMeshMaterialOverrides; // 0x400
	PrimitiveComponent* DisplayComponent; // 0x470

	// Functions
	SetTrackingSource 0x45ae7 hash 87cec475 params:( UnderlyingType NewSource; );
	SetTrackingMotionSource 0x45ada hash bea9d1ab params:( None NewSource; );
	SetShowDeviceModel 0x45ad0 hash 88ab8733 params:( None bShowControllerModel; );
	SetDisplayModelSource 0x45ac4 hash c5f37709 params:( None NewDisplayModelSource; );
	SetCustomDisplayMesh 0x45ab9 hash 204136af params:( StaticMesh NewDisplayMesh; );
	SetAssociatedPlayerIndex 0x45aac hash ec561d96 params:( None NewPlayer; );
	OnMotionControllerUpdated 0x16457 hash 367fdfc3 params:(  );
	IsTracked 0x45774 hash 9e46d2ff params:( None ReturnValue; );
	GetTrackingSource 0x45aa2 hash a5982c69 params:( UnderlyingType ReturnValue; );
	GetParameterValue 0x45a98 hash 14f1c763 params:( None InName;None bValueFound;None ReturnValue; );
	GetHandJointPosition 0x45a8d hash d4037499 params:( None jointIndex;None bValueFound;Vector ReturnValue; );
};


instance 1ab5e0f0400
class MotionTrackedDeviceFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SetIsControllerMotionTrackingEnabledByDefault 0x45c2c hash f29b265 params:( None Enable; );
	IsMotionTrackingEnabledForSource 0x45c1b hash fa6ddecd params:( None PlayerIndex;None SourceName;None ReturnValue; );
	IsMotionTrackingEnabledForDevice 0x45c0a hash d6bbee6c params:( None PlayerIndex;UnderlyingType Hand;None ReturnValue; );
	IsMotionTrackingEnabledForComponent 0x45bf7 hash 4616120f params:( MotionControllerComponent MotionControllerComponent;None ReturnValue; );
	IsMotionTrackedDeviceCountManagementNecessary 0x45bdf hash efaaa9b8 params:( None ReturnValue; );
	IsMotionSourceTracking 0x45bd3 hash b0e6eedb params:( None PlayerIndex;None SourceName;None ReturnValue; );
	GetMotionTrackingEnabledControllerCount 0x45bbe hash b1d999c6 params:( None ReturnValue; );
	GetMaximumMotionTrackedControllerCount 0x45baa hash 9cb8bb84 params:( None ReturnValue; );
	GetActiveTrackingSystemName 0x45b9b hash fe59bc5a params:( None ReturnValue; );
	EnumerateMotionSources 0x45b8f hash 2cda8b65 params:( ReturnValue ReturnValue; );
	EnableMotionTrackingOfSource 0x45b80 hash 10782e9b params:( None PlayerIndex;None SourceName;None ReturnValue; );
	EnableMotionTrackingOfDevice 0x45b71 hash ecc63e3a params:( None PlayerIndex;UnderlyingType Hand;None ReturnValue; );
	EnableMotionTrackingForComponent 0x45b60 hash 5c4427ef params:( MotionControllerComponent MotionControllerComponent;None ReturnValue; );
	DisableMotionTrackingOfSource 0x45b50 hash cad5eb68 params:( None PlayerIndex;None SourceName; );
	DisableMotionTrackingOfDevice 0x45b40 hash a723fb07 params:( None PlayerIndex;UnderlyingType Hand; );
	DisableMotionTrackingOfControllersForPlayer 0x45b29 hash ce9ad002 params:( None PlayerIndex; );
	DisableMotionTrackingOfAllControllers 0x45b15 hash b9d84ea7 params:(  );
	DisableMotionTrackingForComponent 0x45b03 hash 559d833c params:( MotionControllerComponent MotionControllerComponent; );
};


instance 1ab5e0f01c0
class VRNotificationsComponent public : ActorComponent
{
	// Fields
	MulticastInlineDelegateProperty HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xb0 property 0x1ab71346980 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty HMDTrackingInitializedDelegate; // 0xc0 property 0x1ab71346a00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty HMDRecenteredDelegate; // 0xd0 property 0x1ab71346a80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty HMDLostDelegate; // 0xe0 property 0x1ab71346b00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty HMDReconnectedDelegate; // 0xf0 property 0x1ab71346b80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty HMDConnectCanceledDelegate; // 0x100 property 0x1ab71346c00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty HMDPutOnHeadDelegate; // 0x110 property 0x1ab71346d00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty HMDRemovedFromHeadDelegate; // 0x120 property 0x1ab5e676a00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty VRControllerRecenteredDelegate; // 0x130 property 0x1ab71346c80 hash 0xb7a5ed1a

};


instance 1ab5e0f9400
class XRAssetFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	AddNamedDeviceVisualizationComponentBlocking 0x45c72 hash 69c64091 params:( Actor Target;None SystemName;None DeviceName;None bManualAttachment;Transform RelativeTransform;XRDeviceId XRDeviceId;PrimitiveComponent ReturnValue; );
	AddDeviceVisualizationComponentBlocking 0x45c5d hash ae5ce02c params:( Actor Target;XRDeviceId XRDeviceId;None bManualAttachment;Transform RelativeTransform;PrimitiveComponent ReturnValue; );
};


instance 1ab5e0f91c0
class AsyncTask_LoadXRDeviceVisComponent public : BlueprintAsyncActionBase
{
	// Fields
	MulticastInlineDelegateProperty OnModelLoaded; // 0x30 property 0x1ab71b49980 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnLoadFailure; // 0x40 property 0x1ab71b49a00 hash 0xb7a5ed1a
	PrimitiveComponent* SpawnedComponent; // 0x58

	// Functions
	AddNamedDeviceVisualizationComponentAsync 0x45cae hash 6a0be646 params:( Actor Target;None SystemName;None DeviceName;None bManualAttachment;Transform RelativeTransform;XRDeviceId XRDeviceId;PrimitiveComponent NewComponent;AsyncTask_LoadXRDeviceVisComponent ReturnValue; );
	AddDeviceVisualizationComponentAsync 0x45c9b hash 2a6633c1 params:( Actor Target;XRDeviceId XRDeviceId;None bManualAttachment;Transform RelativeTransform;PrimitiveComponent NewComponent;AsyncTask_LoadXRDeviceVisComponent ReturnValue; );
};


instance 1ab5e0f8f80
class XRLoadingScreenFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	ShowLoadingScreen 0x45d01 hash 53263fe4 params:(  );
	SetLoadingScreen 0x45cf8 hash ea2b070f params:( Texture Texture;Vector2D Scale;Vector Offset;None bShowLoadingMovie;None bShowOnSet; );
	HideLoadingScreen 0x45cee hash e168eb1d params:(  );
	ClearLoadingScreenSplashes 0x45ce0 hash d4f8ca8d params:(  );
	AddLoadingScreenSplash 0x45cd4 hash 9ee47fd7 params:( Texture Texture;Vector Translation;Rotator Rotation;Vector2D Size;Rotator DeltaRotation;None bClearBeforeAdd; );
};


instance 1ab7145c340
struct XRDeviceId 
{
	// Fields
	FName SystemName; // 0x0
	int DeviceID; // 0x8

};


