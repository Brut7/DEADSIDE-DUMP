instance 1ab5e09cc40
class WheeledVehicleMovementComponent public : PawnMovementComponent
{
	// Fields
	bool bDeprecatedSpringOffsetMode; // 0x140
	bool bReverseAsBrake; // 0x140
	bool bUseRVOAvoidance; // 0x140
	bool bRawHandbrakeInput; // 0x140
	bool bRawGearUpInput; // 0x140
	bool bRawGearDownInput; // 0x140
	bool bWasAvoidanceUpdated; // 0x144
	float Mass; // 0x148
	TArray WheelSetups; // 0x150
	float DragCoefficient; // 0x160
	float ChassisWidth; // 0x164
	float ChassisHeight; // 0x168
	float DragArea; // 0x16c
	float EstimatedMaxEngineSpeed; // 0x170
	float MaxEngineRPM; // 0x174
	float DebugDragMagnitude; // 0x178
	Vector InertiaTensorScale; // 0x17c
	float MinNormalizedTireLoad; // 0x188
	float MinNormalizedTireLoadFiltered; // 0x18c
	float MaxNormalizedTireLoad; // 0x190
	float MaxNormalizedTireLoadFiltered; // 0x194
	float ThresholdLongitudinalSpeed; // 0x198
	int LowForwardSpeedSubStepCount; // 0x19c
	int HighForwardSpeedSubStepCount; // 0x1a0
	TArray Wheels; // 0x1a8
	float RVOAvoidanceRadius; // 0x1d0
	float RVOAvoidanceHeight; // 0x1d4
	float AvoidanceConsiderationRadius; // 0x1d8
	float RVOSteeringStep; // 0x1dc
	float RVOThrottleStep; // 0x1e0
	int AvoidanceUID; // 0x1e4
	NavAvoidanceMask AvoidanceGroup; // 0x1e8
	NavAvoidanceMask GroupsToAvoid; // 0x1ec
	NavAvoidanceMask GroupsToIgnore; // 0x1f0
	float AvoidanceWeight; // 0x1f4
	Vector PendingLaunchVelocity; // 0x1f8
	ReplicatedVehicleState ReplicatedState; // 0x204
	float RawSteeringInput; // 0x21c
	float RawThrottleInput; // 0x220
	float RawBrakeInput; // 0x224
	float SteeringInput; // 0x228
	float ThrottleInput; // 0x22c
	float BrakeInput; // 0x230
	float HandbrakeInput; // 0x234
	float IdleBrakeInput; // 0x238
	float StopThreshold; // 0x23c
	float WrongDirectionThreshold; // 0x240
	VehicleInputRate ThrottleInputRate; // 0x244
	VehicleInputRate BrakeInputRate; // 0x24c
	VehicleInputRate HandbrakeInputRate; // 0x254
	VehicleInputRate SteeringInputRate; // 0x25c
	Controller* OverrideController; // 0x288

	// Functions
	SetUseAutoGears 0x42253 hash 19907d89 params:( None bUseAuto; );
	SetThrottleInput 0x4224a hash 4a0370d7 params:( None Throttle; );
	SetTargetGear 0x42242 hash 7f63dc37 params:( None GearNum;None bImmediate; );
	SetSteeringInput 0x42239 hash e6bfab62 params:( None Steering; );
	SetHandbrakeInput 0x4222f hash cd104061 params:( None bNewHandbrake; );
	SetGroupsToIgnoreMask 0x42223 hash 1eea3d44 params:( NavAvoidanceMask GroupMask; );
	SetGroupsToIgnore 0x42219 hash 85aafc38 params:( None GroupFlags; );
	SetGroupsToAvoidMask 0x4220e hash 99a29713 params:( NavAvoidanceMask GroupMask; );
	SetGroupsToAvoid 0x42205 hash d4f8c687 params:( None GroupFlags; );
	SetGearUp 0x421ff hash 7acac2d5 params:( None bNewGearUp; );
	SetGearDown 0x421f8 hash 587d8528 params:( None bNewGearDown; );
	SetBrakeInput 0x421f0 hash 737e6f86 params:( None Brake; );
	SetAvoidanceGroupMask 0x421e4 hash 25890c14 params:( NavAvoidanceMask GroupMask; );
	SetAvoidanceGroup 0x421da hash 6012e308 params:( None GroupFlags; );
	SetAvoidanceEnabled 0x421cf hash c06e326 params:( None bEnable; );
	ServerUpdateState 0x56aa hash ec30a060 params:( None InSteeringInput;None InThrottleInput;None InBrakeInput;None InHandbrakeInput;None CurrentGear; );
	GetUseAutoGears 0x421c6 hash 7237587d params:( None ReturnValue; );
	GetTargetGear 0x421be hash c6ef6a2b params:( None ReturnValue; );
	GetForwardSpeed 0x421b5 hash 1d68a32b params:( None ReturnValue; );
	GetEngineRotationSpeed 0x421a9 hash e42b215c params:( None ReturnValue; );
	GetEngineMaxRotationSpeed 0x4219b hash 83144dc2 params:( None ReturnValue; );
	GetCurrentGear 0x42193 hash 367b1947 params:( None ReturnValue; );
};


instance 1ab5e09ce80
class SimpleWheeledVehicleMovementComponent public : WheeledVehicleMovementComponent
{
	// Fields

	// Functions
	SetSteerAngle 0x4226c hash a217005b params:( None SteerAngle;None WheelIndex; );
	SetDriveTorque 0x42264 hash d279582b params:( None DriveTorque;None WheelIndex; );
	SetBrakeTorque 0x4225c hash fd083ff6 params:( None BrakeTorque;None WheelIndex; );
};


instance 1ab5e09c340
class TireConfig public : DataAsset
{
	// Fields
	float FrictionScale; // 0x30
	TArray TireFrictionScales; // 0x38

};


instance 1ab5e09c100
class VehicleAnimInstance public : AnimInstance
{
	// Fields
	WheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x970

	// Functions
	GetVehicle 0x42285 hash 26c7d6c5 params:( WheeledVehicle ReturnValue; );
};


instance 1ab5e09bec0
class VehicleWheel public : Object
{
	// Fields
	StaticMesh* CollisionMesh; // 0x28
	bool bDontCreateShape; // 0x30
	bool bAutoAdjustCollisionSize; // 0x31
	Vector Offset; // 0x34
	float ShapeRadius; // 0x40
	float ShapeWidth; // 0x44
	float Mass; // 0x48
	float DampingRate; // 0x4c
	float SteerAngle; // 0x50
	bool bAffectedByHandbrake; // 0x54
	TireType* TireType; // 0x58
	TireConfig* TireConfig; // 0x60
	float LatStiffMaxLoad; // 0x68
	float LatStiffValue; // 0x6c
	float LongStiffValue; // 0x70
	float SuspensionForceOffset; // 0x74
	float SuspensionMaxRaise; // 0x78
	float SuspensionMaxDrop; // 0x7c
	float SuspensionNaturalFrequency; // 0x80
	float SuspensionDampingRatio; // 0x84
	BYTE SweepType; // 0x88
	float MaxBrakeTorque; // 0x8c
	float MaxHandBrakeTorque; // 0x90
	WheeledVehicleMovementComponent* VehicleSim; // 0x98
	int WheelIndex; // 0xa0
	float DebugLongSlip; // 0xa4
	float DebugLatSlip; // 0xa8
	float DebugNormalizedTireLoad; // 0xac
	float DebugWheelTorque; // 0xb4
	float DebugLongForce; // 0xb8
	float DebugLatForce; // 0xbc
	Vector Location; // 0xc0
	Vector OldLocation; // 0xcc
	Vector Velocity; // 0xd8

	// Functions
	IsInAir 0x422ae hash 8c2a1b4 params:( None ReturnValue; );
	GetSuspensionOffset 0x422a3 hash 1f5474a3 params:( None ReturnValue; );
	GetSteerAngle 0x4229b hash e9a28e4f params:( None ReturnValue; );
	GetRotationAngle 0x42292 hash 161cb25c params:( None ReturnValue; );
};


instance 1ab5e09bc80
class WheeledVehicle public : Pawn
{
	// Fields
	SkeletalMeshComponent* Mesh; // 0x278
	WheeledVehicleMovementComponent* VehicleMovement; // 0x280

};


instance 1ab5e09ba40
class WheeledVehicleMovementComponent4W public : WheeledVehicleMovementComponent
{
	// Fields
	VehicleEngineData EngineSetup; // 0x290
	VehicleDifferential4WData DifferentialSetup; // 0x330
	float AckermannAccuracy; // 0x34c
	VehicleTransmissionData TransmissionSetup; // 0x350
	RuntimeFloatCurve SteeringCurve; // 0x380

};


instance 1ab71453340
struct AnimNode_WheelHandler 
{
	// Fields

};


instance 1ab71453280
struct TireConfigMaterialFriction 
{
	// Fields
	PhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8

};


instance 1ab71456280
struct VehicleAnimInstanceProxy 
{
	// Fields

};


instance 1ab714561c0
struct VehicleInputRate 
{
	// Fields
	float RiseRate; // 0x0
	float FallRate; // 0x4

};


instance 1ab71456100
struct ReplicatedVehicleState 
{
	// Fields
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int CurrentGear; // 0x10

};


instance 1ab71456040
struct WheelSetup 
{
	// Fields
	VehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	Vector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c

};


instance 1ab71455f80
struct VehicleTransmissionData 
{
	// Fields
	bool bUseGearAutoBox; // 0x0
	float GearSwitchTime; // 0x4
	float GearAutoBoxLatency; // 0x8
	float FinalRatio; // 0xc
	TArray ForwardGears; // 0x10
	float ReverseGearRatio; // 0x20
	float NeutralGearUpRatio; // 0x24
	float ClutchStrength; // 0x28

};


instance 1ab71455ec0
struct VehicleGearData 
{
	// Fields
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8

};


instance 1ab71455e00
struct VehicleEngineData 
{
	// Fields
	RuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98

};


instance 1ab714558c0
struct VehicleDifferential4WData 
{
	// Fields
	BYTE DifferentialType; // 0x0
	float FrontRearSplit; // 0x4
	float FrontLeftRightSplit; // 0x8
	float RearLeftRightSplit; // 0xc
	float CentreBias; // 0x10
	float FrontBias; // 0x14
	float RearBias; // 0x18

};


