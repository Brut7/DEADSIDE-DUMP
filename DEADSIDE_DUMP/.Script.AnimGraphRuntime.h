instance 1ab5e0ff280
class AnimCustomInstance public : AnimInstance
{
	// Fields

};


instance 1ab5e0ff040
class AnimNotify_PlayMontageNotify public : AnimNotify
{
	// Fields
	FName NotifyName; // 0x38

};


instance 1ab5e0fee00
class AnimNotify_PlayMontageNotifyWindow public : AnimNotifyState
{
	// Fields
	FName NotifyName; // 0x30

};


instance 1ab5e0fe980
class AnimSequencerInstance public : AnimCustomInstance
{
	// Fields

};


instance 1ab5e0fe740
class KismetAnimationLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	K2_TwoBoneIK 0x463bc hash 49f0e4f3 params:( Vector RootPos;Vector JointPos;Vector EndPos;Vector JointTarget;Vector Effector;Vector OutJointPos;Vector OutEndPos;None bAllowStretching;None StartStretchRatio;None MaxStretchScale; );
	K2_StartProfilingTimer 0x463b0 hash beb12e1a params:(  );
	K2_MakePerlinNoiseVectorAndRemap 0x4639f hash 97cd6c42 params:( None X;None Y;None Z;None RangeOutMinX;None RangeOutMaxX;None RangeOutMinY;None RangeOutMaxY;None RangeOutMinZ;None RangeOutMaxZ;Vector ReturnValue; );
	K2_MakePerlinNoiseAndRemap 0x46391 hash a950114f params:( None Value;None RangeOutMin;None RangeOutMax;None ReturnValue; );
	K2_LookAt 0x4638b hash 81a9234b params:( Transform CurrentTransform;Vector TargetPosition;Vector LookAtVector;None bUseUpVector;Vector UpVector;None ClampConeInDegree;Transform ReturnValue; );
	K2_EndProfilingTimer 0x46380 hash ec422823 params:( None bLog;None LogPrefix;None ReturnValue; );
	K2_DistanceBetweenTwoSocketsAndMapRange 0x4636b hash 39b3c46a params:( SkeletalMeshComponent Component;None SocketOrBoneNameA;ERelativeTransformSpace SocketSpaceA;None SocketOrBoneNameB;ERelativeTransformSpace SocketSpaceB;None bRemapRange;None InRangeMin;None InRangeMax;None OutRangeMin;None OutRangeMax;None ReturnValue; );
	K2_DirectionBetweenSockets 0x4635d hash 28d43328 params:( SkeletalMeshComponent Component;None SocketOrBoneNameFrom;None SocketOrBoneNameTo;Vector ReturnValue; );
	K2_CalculateVelocityFromSockets 0x4634c hash 735f5cee params:( None DeltaSeconds;SkeletalMeshComponent Component;None SocketOrBoneName;None ReferenceSocketOrBone;ERelativeTransformSpace SocketSpace;Vector OffsetInBoneSpace;PositionHistory History;None NumberOfSamples;None VelocityMin;None VelocityMax;UnderlyingType EasingType;RuntimeFloatCurve CustomCurve;None ReturnValue; );
	K2_CalculateVelocityFromPositionHistory 0x46337 hash ae35b99 params:( None DeltaSeconds;Vector Position;PositionHistory History;None NumberOfSamples;None VelocityMin;None VelocityMax;None ReturnValue; );
};


instance 1ab5e0fe500
class PlayMontageCallbackProxy public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnCompleted; // 0x28 property 0x1ab71b79280 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnBlendOut; // 0x38 property 0x1ab71b79300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnInterrupted; // 0x48 property 0x1ab71b79380 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnNotifyBegin; // 0x58 property 0x1ab71b79400 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnNotifyEnd; // 0x68 property 0x1ab71b79480 hash 0xb7a5ed1a

	// Functions
	OnNotifyEndReceived 0x46400 hash 53c42459 params:( None NotifyName;BranchingPointNotifyPayload BranchingPointNotifyPayload; );
	OnNotifyBeginReceived 0x463f4 hash f48d30a7 params:( None NotifyName;BranchingPointNotifyPayload BranchingPointNotifyPayload; );
	OnMontageEnded 0x463ec hash efb8db8d params:( AnimMontage Montage;None bInterrupted; );
	OnMontageBlendingOut 0x463e1 hash 79144848 params:( AnimMontage Montage;None bInterrupted; );
	CreateProxyObjectForPlayMontage 0x463d0 hash a53f1d5a params:( SkeletalMeshComponent InSkeletalMeshComponent;AnimMontage MontageToPlay;None PlayRate;None StartingPosition;None StartingSection;PlayMontageCallbackProxy ReturnValue; );
};


instance 1ab71453940
struct AnimNode_SkeletalControlBase 
{
	// Fields
	ComponentSpacePoseLink ComponentPose; // 0x10
	int LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	InputScaleBias AlphaScaleBias; // 0x30
	InputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	InputScaleBiasClamp AlphaScaleBiasClamp; // 0x88

};


instance 1ab71510ac0
struct AnimNode_BlendSpacePlayer 
{
	// Fields
	float X; // 0x30
	float Y; // 0x34
	float Z; // 0x38
	float PlayRate; // 0x3c
	bool bLoop; // 0x40
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41
	float StartPosition; // 0x44
	BlendSpaceBase* BlendSpace; // 0x48
	BlendSpaceBase* PreviousBlendSpace; // 0xd8

};


instance 1ab71510a00
struct AnimNode_AimOffsetLookAt 
{
	// Fields
	PoseLink BasePose; // 0x140
	int LODThreshold; // 0x150
	FName SourceSocketName; // 0x154
	FName PivotSocketName; // 0x15c
	Vector LookAtLocation; // 0x164
	Vector SocketAxis; // 0x170
	float Alpha; // 0x17c

};


instance 1ab71510880
struct AnimNode_AnimDynamics 
{
	// Fields
	float LinearDampingOverride; // 0xc8
	float AngularDampingOverride; // 0xcc
	BoneReference RelativeSpaceBone; // 0x130
	BoneReference BoundBone; // 0x140
	BoneReference ChainEnd; // 0x150
	Vector BoxExtents; // 0x160
	Vector LocalJointOffset; // 0x16c
	float GravityScale; // 0x178
	Vector GravityOverride; // 0x17c
	float LinearSpringConstant; // 0x188
	float AngularSpringConstant; // 0x18c
	float WindScale; // 0x190
	Vector ComponentLinearAccScale; // 0x194
	Vector ComponentLinearVelScale; // 0x1a0
	Vector ComponentAppliedLinearAccClamp; // 0x1ac
	float AngularBiasOverride; // 0x1b8
	int NumSolverIterationsPreUpdate; // 0x1bc
	int NumSolverIterationsPostUpdate; // 0x1c0
	AnimPhysConstraintSetup ConstraintSetup; // 0x1c4
	TArray SphericalLimits; // 0x210
	float SphereCollisionRadius; // 0x220
	Vector ExternalForce; // 0x224
	TArray PlanarLimits; // 0x230
	AnimPhysCollisionType CollisionType; // 0x240
	AnimPhysSimSpaceType SimulationSpace; // 0x241
	bool bUseSphericalLimits; // 0x244
	bool bUsePlanarLimit; // 0x244
	bool bDoUpdate; // 0x244
	bool bDoEval; // 0x244
	bool bOverrideLinearDamping; // 0x244
	bool bOverrideAngularBias; // 0x244
	bool bOverrideAngularDamping; // 0x244
	bool bEnableWind; // 0x244
	bool bUseGravityOverride; // 0x245
	bool bLinearSpring; // 0x245
	bool bAngularSpring; // 0x245
	bool bChain; // 0x245
	RotationRetargetingInfo RetargetingSettings; // 0x250

};


instance 1ab715107c0
struct RotationRetargetingInfo 
{
	// Fields
	bool bEnabled; // 0x0
	Transform Source; // 0x10
	Transform Target; // 0x40
	ERotationComponent RotationComponent; // 0x70
	Vector TwistAxis; // 0x74
	bool bUseAbsoluteAngle; // 0x80
	float SourceMinimum; // 0x84
	float SourceMaximum; // 0x88
	float TargetMinimum; // 0x8c
	float TargetMaximum; // 0x90
	EEasingFuncType EasingType; // 0x94
	RuntimeFloatCurve CustomCurve; // 0x98
	bool bFlipEasing; // 0x120
	float EasingWeight; // 0x124
	bool bClamp; // 0x128

};


instance 1ab71510700
struct AnimPhysPlanarLimit 
{
	// Fields
	BoneReference DrivingBone; // 0x0
	Transform PlaneTransform; // 0x10

};


instance 1ab71510580
struct AnimPhysSphericalLimit 
{
	// Fields
	BoneReference DrivingBone; // 0x0
	Vector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20

};


instance 1ab715104c0
struct AnimPhysConstraintSetup 
{
	// Fields
	AnimPhysLinearConstraintType LinearXLimitType; // 0x0
	AnimPhysLinearConstraintType LinearYLimitType; // 0x1
	AnimPhysLinearConstraintType LinearZLimitType; // 0x2
	Vector LinearAxesMin; // 0x4
	Vector LinearAxesMax; // 0x10
	AnimPhysAngularConstraintType AngularConstraintType; // 0x1c
	AnimPhysTwistAxis TwistAxis; // 0x1d
	AnimPhysTwistAxis AngularTargetAxis; // 0x1e
	float ConeAngle; // 0x20
	Vector AngularLimitsMin; // 0x24
	Vector AngularLimitsMax; // 0x30
	Vector AngularTarget; // 0x3c

};


instance 1ab71510400
struct AnimNode_ApplyAdditive 
{
	// Fields
	PoseLink Base; // 0x10
	PoseLink Additive; // 0x20
	float Alpha; // 0x30
	InputScaleBias AlphaScaleBias; // 0x34
	int LODThreshold; // 0x3c
	InputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	InputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
	EAnimAlphaInputType AlphaInputType; // 0xc4
	bool bAlphaBoolEnabled; // 0xc5

};


instance 1ab71510340
struct AnimNode_ApplyLimits 
{
	// Fields
	TArray AngularRangeLimits; // 0xc8
	TArray AngularOffsets; // 0xd8

};


instance 1ab71510280
struct AngularRangeLimit 
{
	// Fields
	Vector LimitMin; // 0x0
	Vector LimitMax; // 0xc
	BoneReference Bone; // 0x18

};


instance 1ab715101c0
struct AnimNode_BlendBoneByChannel 
{
	// Fields
	PoseLink A; // 0x10
	PoseLink B; // 0x20
	TArray BoneDefinitions; // 0x30
	float Alpha; // 0x50
	InputScaleBias AlphaScaleBias; // 0x58
	BYTE TransformsSpace; // 0x60

};


instance 1ab71510100
struct BlendBoneByChannelEntry 
{
	// Fields
	BoneReference SourceBone; // 0x0
	BoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22

};


instance 1ab71510040
struct AnimNode_BlendListBase 
{
	// Fields
	TArray BlendPose; // 0x10
	TArray BlendTime; // 0x20
	EBlendListTransitionType TransitionType; // 0x30
	EAlphaBlendOption BlendType; // 0x31
	bool bResetChildOnActivation; // 0x32
	CurveFloat* CustomBlendCurve; // 0x38
	BlendProfile* BlendProfile; // 0x40

};


instance 1ab71513100
struct AnimNode_BlendListByBool 
{
	// Fields
	bool bActiveValue; // 0x98

};


instance 1ab71513040
struct AnimNode_BlendListByEnum 
{
	// Fields
	TArray EnumToPoseIndex; // 0x98
	BYTE ActiveEnumValue; // 0xa8

};


instance 1ab71512f80
struct AnimNode_BlendListByInt 
{
	// Fields
	int ActiveChildIndex; // 0x98

};


instance 1ab71512ec0
struct AnimNode_BlendSpaceEvaluator 
{
	// Fields
	float NormalizedTime; // 0xe0

};


instance 1ab71512e00
struct AnimNode_BoneDrivenController 
{
	// Fields
	BoneReference SourceBone; // 0xc8
	CurveFloat* DrivingCurve; // 0xd8
	float Multiplier; // 0xe0
	float RangeMin; // 0xe4
	float RangeMax; // 0xe8
	float RemappedMin; // 0xec
	float RemappedMax; // 0xf0
	FName ParameterName; // 0xf4
	BoneReference TargetBone; // 0xfc
	EDrivenDestinationMode DestinationMode; // 0x10c
	EDrivenBoneModificationMode ModificationMode; // 0x10d
	BYTE SourceComponent; // 0x10e
	bool bUseRange; // 0x10f
	bool bAffectTargetTranslationX; // 0x10f
	bool bAffectTargetTranslationY; // 0x10f
	bool bAffectTargetTranslationZ; // 0x10f
	bool bAffectTargetRotationX; // 0x10f
	bool bAffectTargetRotationY; // 0x10f
	bool bAffectTargetRotationZ; // 0x10f
	bool bAffectTargetScaleX; // 0x10f
	bool bAffectTargetScaleY; // 0x110
	bool bAffectTargetScaleZ; // 0x110

};


instance 1ab71512d40
struct AnimNode_CCDIK 
{
	// Fields
	Vector EffectorLocation; // 0xc8
	BYTE EffectorLocationSpace; // 0xd4
	BoneSocketTarget EffectorTarget; // 0xe0
	BoneReference TipBone; // 0x140
	BoneReference RootBone; // 0x150
	float Precision; // 0x160
	int MaxIterations; // 0x164
	bool bStartFromTail; // 0x168
	bool bEnableRotationLimit; // 0x169
	TArray RotationLimitPerJoints; // 0x170

};


instance 1ab71512c80
struct BoneSocketTarget 
{
	// Fields
	bool bUseSocket; // 0x0
	BoneReference BoneReference; // 0x4
	SocketReference SocketReference; // 0x20

};


instance 1ab71512bc0
struct SocketReference 
{
	// Fields
	FName SocketName; // 0x30

};


instance 1ab71512b00
struct AnimNode_Constraint 
{
	// Fields
	BoneReference BoneToModify; // 0xc8
	TArray ConstraintSetup; // 0xd8
	TArray ConstraintWeights; // 0xe8

};


instance 1ab71512a40
struct Constraint 
{
	// Fields
	BoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FilterOptionPerAxis PerAxis; // 0x12

};


instance 1ab71512980
struct AnimNode_CopyBone 
{
	// Fields
	BoneReference SourceBone; // 0xc8
	BoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	BYTE ControlSpace; // 0xeb

};


instance 1ab715128c0
struct AnimNode_CopyBoneDelta 
{
	// Fields
	BoneReference SourceBone; // 0xc8
	BoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	CopyBoneDeltaMode CopyMode; // 0xeb
	float TranslationMultiplier; // 0xec
	float RotationMultiplier; // 0xf0
	float ScaleMultiplier; // 0xf4

};


instance 1ab71512800
struct AnimNode_CopyPoseFromMesh 
{
	// Fields
	WeakObjectProperty SourceMeshComponent; // 0x10 property 0x1ab714ed880 hash 0x24388009
	bool bUseAttachedParent; // 0x18
	bool bCopyCurves; // 0x19

};


instance 1ab71512740
struct AnimNode_CurveSource 
{
	// Fields
	PoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	InterfaceProperty CurveSource; // 0x30 property 0x1ab714ed800 hash 0x92a49b

};


instance 1ab71512680
struct AnimNode_Fabrik 
{
	// Fields
	Transform EffectorTransform; // 0xd0
	BoneSocketTarget EffectorTarget; // 0x100
	BoneReference TipBone; // 0x160
	BoneReference RootBone; // 0x170
	float Precision; // 0x180
	int MaxIterations; // 0x184
	BYTE EffectorTransformSpace; // 0x188
	BYTE EffectorRotationSource; // 0x189

};


instance 1ab715125c0
struct AnimNode_HandIKRetargeting 
{
	// Fields
	BoneReference RightHandFK; // 0xc8
	BoneReference LeftHandFK; // 0xd8
	BoneReference RightHandIK; // 0xe8
	BoneReference LeftHandIK; // 0xf8
	TArray IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118

};


instance 1ab71512500
struct AnimNode_LayeredBoneBlend 
{
	// Fields
	PoseLink BasePose; // 0x10
	TArray BlendPoses; // 0x20
	TArray LayerSetup; // 0x30
	TArray BlendWeights; // 0x40
	bool bMeshSpaceRotationBlend; // 0x50
	bool bMeshSpaceScaleBlend; // 0x51
	BYTE CurveBlendOption; // 0x52
	bool bBlendRootMotionBasedOnRootBone; // 0x53
	int LODThreshold; // 0x58
	TArray PerBoneBlendWeights; // 0x60
	Guid SkeletonGuid; // 0x70
	Guid VirtualBoneGuid; // 0x80

};


instance 1ab71512200
struct AnimNode_LegIK 
{
	// Fields
	float ReachPrecision; // 0xc8
	int MaxIterations; // 0xcc
	TArray LegsDefinition; // 0xd0

};


instance 1ab71512140
struct AnimLegIKDefinition 
{
	// Fields
	BoneReference IKFootBone; // 0x0
	BoneReference FKFootBone; // 0x10
	int NumBonesInLimb; // 0x20
	float MinRotationAngle; // 0x24
	BYTE FootBoneForwardAxis; // 0x28
	BYTE HingeRotationAxis; // 0x29
	bool bEnableRotationLimit; // 0x2a
	bool bEnableKneeTwistCorrection; // 0x2b

};


instance 1ab71512080
struct AnimLegIKData 
{
	// Fields

};


instance 1ab71511fc0
struct IKChain 
{
	// Fields

};


instance 1ab71511f00
struct IKChainLink 
{
	// Fields

};


instance 1ab71511e40
struct AnimNode_LookAt 
{
	// Fields
	BoneReference BoneToModify; // 0xc8
	BoneSocketTarget LookAtTarget; // 0xe0
	Vector LookAtLocation; // 0x140
	Axis LookAt_Axis; // 0x14c
	bool bUseLookUpAxis; // 0x15c
	BYTE InterpolationType; // 0x15d
	Axis LookUp_Axis; // 0x160
	float LookAtClamp; // 0x170
	float InterpolationTime; // 0x174
	float InterpolationTriggerThreashold; // 0x178

};


instance 1ab71511d80
struct AnimNode_MakeDynamicAdditive 
{
	// Fields
	PoseLink Base; // 0x10
	PoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30

};


instance 1ab71511cc0
struct AnimNode_ModifyBone 
{
	// Fields
	BoneReference BoneToModify; // 0xc8
	Vector Translation; // 0xd8
	Rotator Rotation; // 0xe4
	Vector Scale; // 0xf0
	BYTE TranslationMode; // 0xfc
	BYTE RotationMode; // 0xfd
	BYTE ScaleMode; // 0xfe
	BYTE TranslationSpace; // 0xff
	BYTE RotationSpace; // 0x100
	BYTE ScaleSpace; // 0x101

};


instance 1ab71511c00
struct AnimNode_ModifyCurve 
{
	// Fields
	PoseLink SourcePose; // 0x10
	TArray CurveValues; // 0x20
	TArray CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54

};


instance 1ab71511b40
struct AnimNode_MultiWayBlend 
{
	// Fields
	TArray Poses; // 0x10
	TArray DesiredAlphas; // 0x20
	InputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49

};


instance 1ab71511a80
struct AnimNode_ObserveBone 
{
	// Fields
	BoneReference BoneToObserve; // 0xc8
	BYTE DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	Vector Translation; // 0xdc
	Rotator Rotation; // 0xe8
	Vector Scale; // 0xf4

};


instance 1ab715119c0
struct AnimNode_PoseHandler 
{
	// Fields
	PoseAsset* PoseAsset; // 0x30

};


instance 1ab71511900
struct AnimNode_PoseBlendNode 
{
	// Fields
	PoseLink SourcePose; // 0x78
	EAlphaBlendOption BlendOption; // 0x88
	CurveFloat* CustomCurve; // 0x90

};


instance 1ab715149c0
struct AnimNode_PoseByName 
{
	// Fields
	FName PoseName; // 0x78
	float PoseWeight; // 0x80

};


instance 1ab71514900
struct AnimNode_PoseDriver 
{
	// Fields
	PoseLink SourcePose; // 0x78
	TArray SourceBones; // 0x88
	TArray OnlyDriveBones; // 0x98
	TArray PoseTargets; // 0xa8
	BoneReference EvalSpaceBone; // 0xe8
	RBFParams RBFParams; // 0xf8
	EPoseDriverSource DriveSource; // 0x120
	EPoseDriverOutput DriveOutput; // 0x121
	bool bOnlyDriveSelectedBones; // 0x122

};


instance 1ab71514840
struct RBFParams 
{
	// Fields
	int TargetDimensions; // 0x0
	float Radius; // 0x4
	ERBFFunctionType Function; // 0x8
	ERBFDistanceMethod DistanceMethod; // 0x9
	BYTE TwistAxis; // 0xa
	float WeightThreshold; // 0xc
	ERBFNormalizeMethod NormalizeMethod; // 0x10
	Vector MedianReference; // 0x14
	float MedianMin; // 0x20
	float MedianMax; // 0x24

};


instance 1ab71514780
struct PoseDriverTarget 
{
	// Fields
	TArray BoneTransforms; // 0x0
	Rotator TargetRotation; // 0x10
	float TargetScale; // 0x1c
	ERBFDistanceMethod DistanceMethod; // 0x20
	ERBFFunctionType FunctionType; // 0x21
	bool bApplyCustomCurve; // 0x22
	RichCurve CustomCurve; // 0x28
	FName DrivenName; // 0xa8
	bool bIsHidden; // 0xb8

};


instance 1ab715146c0
struct PoseDriverTransform 
{
	// Fields
	Vector TargetTranslation; // 0x0
	Rotator TargetRotation; // 0xc

};


instance 1ab71514600
struct AnimNode_PoseSnapshot 
{
	// Fields
	FName SnapshotName; // 0x10
	PoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50

};


instance 1ab71514480
struct AnimNode_RandomPlayer 
{
	// Fields
	TArray Entries; // 0x10
	bool bShuffleMode; // 0x64

};


instance 1ab715143c0
struct RandomPlayerSequenceEntry 
{
	// Fields
	AnimSequence* Sequence; // 0x0
	float ChanceToPlay; // 0x8
	int MinLoopCount; // 0xc
	int MaxLoopCount; // 0x10
	float MinPlayRate; // 0x14
	float MaxPlayRate; // 0x18
	AlphaBlend BlendIn; // 0x20

};


instance 1ab71514300
struct AnimNode_MeshSpaceRefPose 
{
	// Fields

};


instance 1ab71514240
struct AnimNode_RefPose 
{
	// Fields
	BYTE RefPoseType; // 0x10

};


instance 1ab71514180
struct AnimNode_ResetRoot 
{
	// Fields

};


instance 1ab715140c0
struct AnimNode_RigidBody 
{
	// Fields
	PhysicsAsset* OverridePhysicsAsset; // 0xc8
	Vector OverrideWorldGravity; // 0x168
	Vector ExternalForce; // 0x174
	Vector ComponentLinearAccScale; // 0x180
	Vector ComponentLinearVelScale; // 0x18c
	Vector ComponentAppliedLinearAccClamp; // 0x198
	float CachedBoundsScale; // 0x1a4
	BoneReference BaseBoneRef; // 0x1a8
	BYTE OverlapChannel; // 0x1b8
	ESimulationSpace SimulationSpace; // 0x1b9
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1ba
	bool bEnableWorldGeometry; // 0x1bc
	bool bOverrideWorldGravity; // 0x1bc
	bool bTransferBoneVelocities; // 0x1bc
	bool bFreezeIncomingPoseOnStart; // 0x1bc
	bool bClampLinearTranslationLimitToRefPose; // 0x1bc

};


instance 1ab71514000
struct AnimNode_RigidBody_Chaos 
{
	// Fields
	PhysicsAsset* OverridePhysicsAsset; // 0xc8
	Vector OverrideWorldGravity; // 0xd0
	Vector ExternalForce; // 0xdc
	Vector ComponentLinearAccScale; // 0xe8
	Vector ComponentLinearVelScale; // 0xf4
	Vector ComponentAppliedLinearAccClamp; // 0x100
	float CachedBoundsScale; // 0x10c
	BoneReference BaseBoneRef; // 0x110
	BYTE OverlapChannel; // 0x120
	ESimulationSpace SimulationSpace; // 0x121
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x122
	bool bEnableWorldGeometry; // 0x123
	bool bOverrideWorldGravity; // 0x123
	bool bTransferBoneVelocities; // 0x123
	bool bFreezeIncomingPoseOnStart; // 0x123
	bool bClampLinearTranslationLimitToRefPose; // 0x123

};


instance 1ab71513f40
struct AnimNode_RotateRootBone 
{
	// Fields
	PoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	InputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	InputScaleBiasClamp YawScaleBiasClamp; // 0x58
	Rotator MeshToComponent; // 0x88

};


instance 1ab71513e80
struct AnimNode_RotationMultiplier 
{
	// Fields
	BoneReference TargetBone; // 0xc8
	BoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	BYTE RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed

};


instance 1ab71513dc0
struct AnimNode_RotationOffsetBlendSpace 
{
	// Fields
	PoseLink BasePose; // 0xe0
	int LODThreshold; // 0xf0
	float Alpha; // 0xf4
	InputScaleBias AlphaScaleBias; // 0xf8
	InputAlphaBoolBlend AlphaBoolBlend; // 0x100
	FName AlphaCurveName; // 0x148
	InputScaleBiasClamp AlphaScaleBiasClamp; // 0x150
	EAnimAlphaInputType AlphaInputType; // 0x184
	bool bAlphaBoolEnabled; // 0x185

};


instance 1ab71513d00
struct AnimNode_ScaleChainLength 
{
	// Fields
	PoseLink InputPose; // 0x10
	float DefaultChainLength; // 0x20
	BoneReference ChainStartBone; // 0x24
	BoneReference ChainEndBone; // 0x34
	Vector TargetLocation; // 0x44
	float Alpha; // 0x50
	InputScaleBias AlphaScaleBias; // 0x58
	EScaleChainInitialLength ChainInitialLength; // 0x60

};


instance 1ab71513c40
struct AnimNode_SequenceEvaluator 
{
	// Fields
	AnimSequenceBase* Sequence; // 0x30
	float ExplicitTime; // 0x38
	bool bShouldLoop; // 0x3c
	bool bTeleportToExplicitTime; // 0x3d
	BYTE ReinitializationBehavior; // 0x3e
	float StartPosition; // 0x40

};


instance 1ab71513b80
struct AnimNode_Slot 
{
	// Fields
	PoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28

};


instance 1ab71513ac0
struct AnimNode_SplineIK 
{
	// Fields
	BoneReference StartBone; // 0xc8
	BoneReference EndBone; // 0xd8
	ESplineBoneAxis BoneAxis; // 0xe8
	bool bAutoCalculateSpline; // 0xe9
	int PointCount; // 0xec
	TArray ControlPoints; // 0xf0
	float Roll; // 0x100
	float TwistStart; // 0x104
	float TwistEnd; // 0x108
	AlphaBlend TwistBlend; // 0x110
	float Stretch; // 0x140
	float Offset; // 0x144

};


instance 1ab71513a00
struct SplineIKCachedBoneData 
{
	// Fields
	BoneReference Bone; // 0x0
	int RefSkeletonIndex; // 0x10

};


instance 1ab71513940
struct AnimNode_SpringBone 
{
	// Fields
	BoneReference SpringBone; // 0xc8
	float MaxDisplacement; // 0xd8
	float SpringStiffness; // 0xdc
	float SpringDamping; // 0xe0
	float ErrorResetThresh; // 0xe4
	bool bLimitDisplacement; // 0x124
	bool bTranslateX; // 0x124
	bool bTranslateY; // 0x124
	bool bTranslateZ; // 0x124
	bool bRotateX; // 0x124
	bool bRotateY; // 0x124
	bool bRotateZ; // 0x124

};


instance 1ab715137c0
struct AnimNode_StateResult 
{
	// Fields

};


instance 1ab71513700
struct AnimNode_Trail 
{
	// Fields
	BoneReference TrailBone; // 0x100
	int ChainLength; // 0x110
	BYTE ChainBoneAxis; // 0x114
	bool bInvertChainBoneAxis; // 0x115
	bool bLimitStretch; // 0x115
	bool bLimitRotation; // 0x115
	bool bUsePlanarLimit; // 0x115
	bool bActorSpaceFakeVel; // 0x115
	bool bReorientParentToChild; // 0x115
	float MaxDeltaTime; // 0x118
	float RelaxationSpeedScale; // 0x11c
	RuntimeFloatCurve TrailRelaxationSpeed; // 0x120
	InputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1a8
	TArray RotationLimits; // 0x1d8
	TArray RotationOffsets; // 0x1e8
	TArray PlanarLimits; // 0x1f8
	float StretchLimit; // 0x208
	Vector FakeVelocity; // 0x20c
	BoneReference BaseJoint; // 0x218
	float LastBoneRotationAnimAlphaBlend; // 0x228

};


instance 1ab71513640
struct RotationLimit 
{
	// Fields
	Vector LimitMin; // 0x0
	Vector LimitMax; // 0xc

};


instance 1ab71513580
struct AnimNode_TwistCorrectiveNode 
{
	// Fields
	ReferenceBoneFrame BaseFrame; // 0xc8
	ReferenceBoneFrame TwistFrame; // 0xe8
	Axis TwistPlaneNormalAxis; // 0x108
	float RangeMax; // 0x118
	float RemappedMin; // 0x11c
	float RemappedMax; // 0x120
	AnimCurveParam Curve; // 0x124

};


instance 1ab71513400
struct ReferenceBoneFrame 
{
	// Fields
	BoneReference Bone; // 0x0
	Axis Axis; // 0x10

};


instance 1ab71513340
struct AnimNode_TwoBoneIK 
{
	// Fields
	BoneReference IKBone; // 0xc8
	float StartStretchRatio; // 0xd8
	float MaxStretchScale; // 0xdc
	Vector EffectorLocation; // 0xe0
	BoneSocketTarget EffectorTarget; // 0xf0
	Vector JointTargetLocation; // 0x150
	BoneSocketTarget JointTarget; // 0x160
	Axis TwistAxis; // 0x1c0
	BYTE EffectorLocationSpace; // 0x1d0
	BYTE JointTargetLocationSpace; // 0x1d1
	bool bAllowStretching; // 0x1d2
	bool bTakeRotationFromEffectorSpace; // 0x1d2
	bool bMaintainEffectorRelRot; // 0x1d2
	bool bAllowTwist; // 0x1d2

};


instance 1ab71513280
struct AnimNode_TwoWayBlend 
{
	// Fields
	PoseLink A; // 0x10
	PoseLink B; // 0x20
	EAnimAlphaInputType AlphaInputType; // 0x30
	bool bAlphaBoolEnabled; // 0x31
	bool bResetChildOnActivation; // 0x31
	float Alpha; // 0x34
	InputScaleBias AlphaScaleBias; // 0x38
	InputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	InputScaleBiasClamp AlphaScaleBiasClamp; // 0x90

};


instance 1ab715131c0
struct AnimSequencerInstanceProxy 
{
	// Fields

};


instance 1ab71516280
struct PositionHistory 
{
	// Fields
	TArray Positions; // 0x0
	float Range; // 0x10

};


instance 1ab715161c0
struct RBFEntry 
{
	// Fields
	TArray Values; // 0x0

};


instance 1ab71516100
struct RBFTarget 
{
	// Fields
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	RichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99

};


