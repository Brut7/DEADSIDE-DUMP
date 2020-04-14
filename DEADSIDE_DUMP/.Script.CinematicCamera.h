instance 1ab5e125980
class CameraRig_Crane public : Actor
{
	// Fields
	float CranePitch; // 0x218
	float CraneYaw; // 0x21c
	float CraneArmLength; // 0x220
	bool bLockMountPitch; // 0x224
	bool bLockMountYaw; // 0x225
	SceneComponent* TransformComponent; // 0x228
	SceneComponent* CraneYawControl; // 0x230
	SceneComponent* CranePitchControl; // 0x238
	SceneComponent* CraneCameraMount; // 0x240

};


instance 1ab5e125740
class CameraRig_Rail public : Actor
{
	// Fields
	float CurrentPositionOnRail; // 0x218
	bool bLockOrientationToRail; // 0x21c
	SceneComponent* TransformComponent; // 0x220
	SplineComponent* RailSplineComponent; // 0x228
	SceneComponent* RailCameraMount; // 0x230

	// Functions
	GetRailSplineComponent 0x47a9f hash ea09496b params:( SplineComponent ReturnValue; );
};


instance 1ab5e125500
class CineCameraActor public : CameraActor
{
	// Fields
	CameraLookatTrackingSettings LookatTrackingSettings; // 0x780

	// Functions
	GetCineCameraComponent 0x47ac9 hash 6a5ba580 params:( CineCameraComponent ReturnValue; );
};


instance 1ab5e125080
class CineCameraComponent public : CameraComponent
{
	// Fields
	CameraFilmbackSettings FilmbackSettings; // 0x7a0
	CameraFilmbackSettings Filmback; // 0x7ac
	CameraLensSettings LensSettings; // 0x7b8
	CameraFocusSettings FocusSettings; // 0x7d0
	float CurrentFocalLength; // 0x828
	float CurrentAperture; // 0x82c
	float CurrentFocusDistance; // 0x830
	TArray FilmbackPresets; // 0x840
	TArray LensPresets; // 0x850
	FString DefaultFilmbackPresetName; // 0x860
	FString DefaultFilmbackPreset; // 0x870
	FString DefaultLensPresetName; // 0x880
	float DefaultLensFocalLength; // 0x890
	float DefaultLensFStop; // 0x894

	// Functions
	SetLensPresetByName 0x47b41 hash 81896592 params:( None InPresetName; );
	SetFilmbackPresetByName 0x47b34 hash 5d5eb9f9 params:( None InPresetName; );
	SetCurrentFocalLength 0x47b28 hash 8ca4e9db params:( None InFocalLength; );
	GetVerticalFieldOfView 0x47b1c hash bbbdd93 params:( None ReturnValue; );
	GetLensPresetsCopy 0x47b12 hash d67afc98 params:( ReturnValue ReturnValue; );
	GetLensPresetName 0x47b08 hash b8d8a98b params:( None ReturnValue; );
	GetHorizontalFieldOfView 0x47afb hash fe9115e3 params:( None ReturnValue; );
	GetFilmbackPresetName 0x47aef hash d84a9232 params:( None ReturnValue; );
	GetDefaultFilmbackPresetName 0x47ae0 hash ec0d04d7 params:( None ReturnValue; );
};


instance 1ab71518080
struct CameraLookatTrackingSettings 
{
	// Fields
	bool bEnableLookAtTracking; // 0x0
	bool bDrawDebugLookAtTrackingPosition; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	Actor* ActorToTrack; // 0x18
	Vector RelativeOffset; // 0x40
	bool bAllowRoll; // 0x4c

};


instance 1ab71517fc0
struct CameraFocusSettings 
{
	// Fields
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
	CameraTrackingFocusSettings TrackingFocusSettings; // 0x8
	bool bDrawDebugFocusPlane; // 0x40
	Color DebugFocusPlaneColor; // 0x44
	bool bSmoothFocusChanges; // 0x48
	float FocusSmoothingInterpSpeed; // 0x4c
	float FocusOffset; // 0x50

};


instance 1ab71517f00
struct CameraTrackingFocusSettings 
{
	// Fields
	Actor* ActorToTrack; // 0x0
	Vector RelativeOffset; // 0x28
	bool bDrawDebugTrackingFocusPoint; // 0x34

};


instance 1ab71517e40
struct NamedLensPreset 
{
	// Fields
	FString Name; // 0x0
	CameraLensSettings LensSettings; // 0x10

};


instance 1ab71517d80
struct CameraLensSettings 
{
	// Fields
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int DiaphragmBladeCount; // 0x14

};


instance 1ab71517cc0
struct NamedFilmbackPreset 
{
	// Fields
	FString Name; // 0x0
	CameraFilmbackSettings FilmbackSettings; // 0x10

};


instance 1ab71517c00
struct CameraFilmbackSettings 
{
	// Fields
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8

};


