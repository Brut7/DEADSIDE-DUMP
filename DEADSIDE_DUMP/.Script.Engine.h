instance 1ab5c9fc100
class BlueprintFunctionLibrary public : Object
{
	// Fields

};


instance 1ab5c9fbc80
class SoundBase public : Object
{
	// Fields
	SoundClass* SoundClassObject; // 0x28
	bool bDebug; // 0x30
	bool bOverrideConcurrency; // 0x30
	bool bOutputToBusOnly; // 0x30
	bool bHasDelayNode; // 0x30
	bool bHasConcatenatorNode; // 0x30
	bool bBypassVolumeScaleForPriority; // 0x30
	EVirtualizationMode VirtualizationMode; // 0x31
	SetProperty ConcurrencySet; // 0x88 property 0x1ab71165f60 hash 0xb0194396
	SoundConcurrencySettings ConcurrencyOverrides; // 0xd8
	float Duration; // 0xf8
	float MaxDistance; // 0xfc
	float TotalSamples; // 0x100
	float Priority; // 0x104
	SoundAttenuation* AttenuationSettings; // 0x108
	SoundModulation Modulation; // 0x110
	SoundSubmix* SoundSubmixObject; // 0x120
	TArray SoundSubmixSends; // 0x128
	SoundEffectSourcePresetChain* SourceEffectChain; // 0x138
	TArray BusSends; // 0x140
	TArray PreEffectBusSends; // 0x150

};


instance 1ab5c9facc0
class ActorComponent public : Object
{
	// Fields
	ActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray ComponentTags; // 0x60
	TArray AssetUserData; // 0x70
	bool bReplicates; // 0x84
	bool bNetAddressable; // 0x84
	bool bAutoActivate; // 0x85
	bool bIsActive; // 0x86
	bool bEditableWhenInherited; // 0x86
	bool bCanEverAffectNavigation; // 0x86
	bool bIsEditorOnly; // 0x86
	EComponentCreationMethod CreationMethod; // 0x88
	MulticastSparseDelegateProperty OnComponentActivated; // 0x89 property 0x1ab712f1a00 hash 0xece81129
	MulticastSparseDelegateProperty OnComponentDeactivated; // 0x8a property 0x1ab712f1b80 hash 0xece81129
	TArray UCSModifiedProperties; // 0x90

	// Functions
	ToggleActive 0x3e045 hash 6361d743 params:(  );
	SetTickGroup 0x3e03e hash 8d5f65c9 params:( ETickingGroup NewTickGroup; );
	SetTickableWhenPaused 0x3e032 hash 7e7bbc04 params:( None bTickableWhenPaused; );
	SetIsReplicated 0x3e029 hash d1be052a params:( None ShouldReplicate; );
	SetComponentTickInterval 0x3e01c hash e4aa3994 params:( None TickInterval; );
	SetComponentTickEnabled 0x3e00f hash e8f12eba params:( None bEnabled; );
	SetAutoActivate 0x3e006 hash 705e83fb params:( None bNewAutoActivate; );
	SetActive 0x3e000 hash 6cb1e72d params:( None bNewActive;None bReset; );
	RemoveTickPrerequisiteComponent 0x3dfef hash ccf05993 params:( ActorComponent PrerequisiteComponent; );
	RemoveTickPrerequisiteActor 0x3dfe0 hash a4a684b9 params:( Actor PrerequisiteActor; );
	ReceiveTick 0x2222c hash 2a96f4d3 params:( None DeltaSeconds; );
	ReceiveEndPlay 0x22209 hash 3a1b8675 params:( EEndPlayReason EndPlayReason; );
	ReceiveBeginPlay 0x221f7 hash a4ab8b03 params:(  );
	OnRep_IsActive 0x3dfd8 hash 4c71e540 params:(  );
	K2_DestroyComponent 0x3dfcd hash 8a83e1be params:( Object Object; );
	IsComponentTickEnabled 0x3dfc1 hash 416bb96a params:( None ReturnValue; );
	IsBeingDestroyed 0x3dfb8 hash fd535499 params:( None ReturnValue; );
	IsActive 0x3dfb3 hash dc27ddd params:( None ReturnValue; );
	GetOwner 0x3dfae hash 751e67d0 params:( Actor ReturnValue; );
	GetComponentTickInterval 0x3dfa1 hash 31b8a708 params:( None ReturnValue; );
	Deactivate 0x3df9b hash 9d90ffdf params:(  );
	ComponentHasTag 0x3df92 hash d5318ff0 params:( None Tag;None ReturnValue; );
	AddTickPrerequisiteComponent 0x3df83 hash 2470fa4e params:( ActorComponent PrerequisiteComponent; );
	AddTickPrerequisiteActor 0x3df76 hash d6b5fff4 params:( Actor PrerequisiteActor; );
	Activate 0x3df71 hash 5374ac56 params:( None bReset; );
};


instance 1ab5c9faf00
class SceneComponent public : ActorComponent
{
	// Fields
	WeakObjectProperty PhysicsVolume; // 0xb8 property 0x1ab71345d80 hash 0x24388009
	SceneComponent* AttachParent; // 0xc0
	FName AttachSocketName; // 0xc8
	TArray AttachChildren; // 0xd0
	TArray ClientAttachedChildren; // 0xe0
	Vector RelativeLocation; // 0x11c
	Rotator RelativeRotation; // 0x128
	Vector RelativeScale3D; // 0x134
	Vector ComponentVelocity; // 0x140
	bool bComponentToWorldUpdated; // 0x14c
	bool bAbsoluteLocation; // 0x14c
	bool bAbsoluteRotation; // 0x14c
	bool bAbsoluteScale; // 0x14c
	bool bVisible; // 0x14c
	bool bHiddenInGame; // 0x14c
	bool bShouldBeAttached; // 0x14c
	bool bShouldSnapLocationWhenAttached; // 0x14d
	bool bShouldSnapRotationWhenAttached; // 0x14d
	bool bShouldUpdatePhysicsVolume; // 0x14d
	bool bBoundsChangeTriggersStreamingDataRebuild; // 0x14d
	bool bUseAttachParentBound; // 0x14d
	BYTE Mobility; // 0x14f
	BYTE DetailMode; // 0x150
	MulticastSparseDelegateProperty PhysicsVolumeChangedDelegate; // 0x151 property 0x1ab71344880 hash 0xece81129

	// Functions
	ToggleVisibility 0x3e2c9 hash 5896b60f params:( None bPropagateToChildren; );
	SnapTo 0x3e2c5 hash d178d0da params:( SceneComponent InParent;None InSocketName;None ReturnValue; );
	SetWorldScale3D 0x3e2bc hash 74b03a38 params:( Vector NewScale; );
	SetVisibility 0x3e2b4 hash a9e0aaf9 params:( None bNewVisibility;None bPropagateToChildren; );
	SetShouldUpdatePhysicsVolume 0x3e2a5 hash 2f547cfe params:( None bInShouldUpdatePhysicsVolume; );
	SetRelativeScale3D 0x3e29b hash 9e3b5c2c params:( Vector NewScale3D; );
	SetMobility 0x3e294 hash e597035a params:( EComponentMobility NewMobility; );
	SetHiddenInGame 0x3e28b hash 68a1122e params:( None NewHidden;None bPropagateToChildren; );
	SetAbsolute 0x3e284 hash 11e06bb0 params:( None bNewAbsoluteLocation;None bNewAbsoluteRotation;None bNewAbsoluteScale; );
	ResetRelativeTransform 0x3e278 hash 501864e0 params:(  );
	OnRep_Visibility 0x3e26f hash a0e3f3b0 params:( None OldValue; );
	OnRep_Transform 0x3e266 hash a8a21124 params:(  );
	OnRep_AttachSocketName 0x3e25a hash c638c027 params:(  );
	OnRep_AttachParent 0x3e250 hash de40cce7 params:(  );
	OnRep_AttachChildren 0x3e245 hash 78a24386 params:(  );
	K2_SetWorldTransform 0x3e23a hash 96af4b51 params:( Transform NewTransform;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_SetWorldRotation 0x3e22f hash 2ab47ce5 params:( Rotator NewRotation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_SetWorldLocationAndRotation 0x3e21f hash 94854531 params:( Vector NewLocation;Rotator NewRotation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_SetWorldLocation 0x3e214 hash 7981ccee params:( Vector NewLocation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_SetRelativeTransform 0x3e207 hash 194ec0c5 params:( Transform NewTransform;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_SetRelativeRotation 0x3e1fb hash 8bc113d9 params:( Rotator NewRotation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_SetRelativeLocationAndRotation 0x3e1e9 hash f6bd1ba5 params:( Vector NewLocation;Rotator NewRotation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_SetRelativeLocation 0x3e1dd hash da8e63e2 params:( Vector NewLocation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_GetComponentToWorld 0x3e1d1 hash 7cb6b4df params:( Transform ReturnValue; );
	K2_GetComponentScale 0x3e1c6 hash 2a5533dc params:( Vector ReturnValue; );
	K2_GetComponentRotation 0x3e1b9 hash 7db2f804 params:( Rotator ReturnValue; );
	K2_GetComponentLocation 0x3e1ac hash cc80480d params:( Vector ReturnValue; );
	K2_DetachFromComponent 0x3e1a0 hash 9601f131 params:( UnderlyingType LocationRule;UnderlyingType RotationRule;UnderlyingType ScaleRule;None bCallModify; );
	K2_AttachToComponent 0x3e195 hash 73e206cc params:( SceneComponent Parent;None SocketName;UnderlyingType LocationRule;UnderlyingType RotationRule;UnderlyingType ScaleRule;None bWeldSimulatedBodies;None ReturnValue; );
	K2_AttachTo 0x3e18e hash f5957f59 params:( SceneComponent InParent;None InSocketName;EAttachLocation AttachType;None bWeldSimulatedBodies;None ReturnValue; );
	K2_AddWorldTransform 0x3e183 hash 2b1654e params:( Transform DeltaTransform;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddWorldRotation 0x3e178 hash f7accb42 params:( Rotator DeltaRotation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddWorldOffset 0x3e16e hash 12301e39 params:( Vector DeltaLocation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddRelativeRotation 0x3e162 hash b1a116 params:( Rotator DeltaRotation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddRelativeLocation 0x3e156 hash 4f7ef11f params:( Vector DeltaLocation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddLocalTransform 0x3e14b hash fe0531f1 params:( Transform DeltaTransform;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddLocalRotation 0x3e140 hash 35980f85 params:( Rotator DeltaRotation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddLocalOffset 0x3e136 hash c4e775bc params:( Vector DeltaLocation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	IsVisible 0x3e130 hash 2485bccf params:( None ReturnValue; );
	IsSimulatingPhysics 0x3e125 hash 12346ae1 params:( None BoneName;None ReturnValue; );
	IsAnySimulatingPhysics 0x3e119 hash 43b2a769 params:( None ReturnValue; );
	GetUpVector 0x3e112 hash 37fc5d3d params:( Vector ReturnValue; );
	GetSocketTransform 0x3e108 hash bb96deea params:( None InSocketName;ERelativeTransformSpace TransformSpace;Transform ReturnValue; );
	GetSocketRotation 0x3e0fe hash cebb815e params:( None InSocketName;Rotator ReturnValue; );
	GetSocketQuaternion 0x3e0f3 hash 2dd60394 params:( None InSocketName;Quat ReturnValue; );
	GetSocketLocation 0x3e0e9 hash 1d88d167 params:( None InSocketName;Vector ReturnValue; );
	GetShouldUpdatePhysicsVolume 0x3e0da hash 10048472 params:( None ReturnValue; );
	GetRightVector 0x3e0d2 hash e42dab96 params:( Vector ReturnValue; );
	GetRelativeTransform 0x3e0c7 hash dac93a7d params:( Transform ReturnValue; );
	GetPhysicsVolume 0x3e0be hash 788da600 params:( PhysicsVolume ReturnValue; );
	GetParentComponents 0x3e0b3 hash 731acdb5 params:( Parents Parents; );
	GetNumChildrenComponents 0x3e0a6 hash d6c3da44 params:( None ReturnValue; );
	GetForwardVector 0x3e09d hash d0b49dcd params:( Vector ReturnValue; );
	GetComponentVelocity 0x3e092 hash 6e8f5287 params:( Vector ReturnValue; );
	GetChildrenComponents 0x3e086 hash 61297114 params:( None bIncludeAllDescendants;Children Children; );
	GetChildComponent 0x3e07c hash 6b79551c params:( None ChildIndex;SceneComponent ReturnValue; );
	GetAttachSocketName 0x3e071 hash 26c13f24 params:( None ReturnValue; );
	GetAttachParent 0x3e068 hash 71ef5564 params:( SceneComponent ReturnValue; );
	GetAllSocketNames 0x3e05e hash 6963097b params:( ReturnValue ReturnValue; );
	DoesSocketExist 0x3e055 hash 3284ff06 params:( None InSocketName;None ReturnValue; );
	DetachFromParent 0x3e04c hash 6218b98c params:( None bMaintainWorldPosition;None bCallModify; );
};


instance 1ab5c9fa600
class SoundEffectPreset public : Object
{
	// Fields

};


instance 1ab5c9fa840
class SoundEffectSourcePreset public : SoundEffectPreset
{
	// Fields

};


instance 1ab5c9f8200
class SoundEffectSubmixPreset public : SoundEffectPreset
{
	// Fields

};


instance 1ab5c9fd300
class MaterialExpression public : Object
{
	// Fields
	Material* Material; // 0x28
	MaterialFunction* Function; // 0x30
	bool bIsParameterExpression; // 0x38

};


instance 1ab5c9fd540
class MaterialExpressionTextureBase public : MaterialExpression
{
	// Fields
	Texture* Texture; // 0x40
	BYTE SamplerType; // 0x48
	bool IsDefaultMeshpaintTexture; // 0x49

};


instance 1ab5c9fd780
class MaterialExpressionTextureSample public : MaterialExpressionTextureBase
{
	// Fields
	ExpressionInput Coordinates; // 0x50
	ExpressionInput TextureObject; // 0x64
	ExpressionInput MipValue; // 0x78
	ExpressionInput CoordinatesDX; // 0x8c
	ExpressionInput CoordinatesDY; // 0xa0
	ExpressionInput AutomaticViewMipBiasValue; // 0xb4
	BYTE MipValueMode; // 0xc8
	BYTE SamplerSource; // 0xc9
	bool AutomaticViewMipBias; // 0xca
	BYTE ConstCoordinate; // 0xcb
	int ConstMipValue; // 0xcc

};


instance 1ab5c9fd9c0
class MaterialExpressionTextureSampleParameter public : MaterialExpressionTextureSample
{
	// Fields
	FName ParameterName; // 0xd0
	Guid ExpressionGUID; // 0xd8
	FName Group; // 0xe8

};


instance 1ab5c9fdc00
class MaterialExpressionTextureSampleParameter2D public : MaterialExpressionTextureSampleParameter
{
	// Fields

};


instance 1ab5c9fca00
class Actor public : Object
{
	// Fields
	ActorTickFunction PrimaryActorTick; // 0x28
	bool bHidden; // 0x58
	bool bNetTemporary; // 0x58
	bool bNetStartup; // 0x58
	bool bOnlyRelevantToOwner; // 0x58
	bool bAlwaysRelevant; // 0x58
	bool bReplicateMovement; // 0x58
	bool bTearOff; // 0x58
	bool bExchangedRoles; // 0x58
	bool bNetLoadOnClient; // 0x59
	bool bNetUseOwnerRelevancy; // 0x59
	bool bRelevantForNetworkReplays; // 0x59
	bool bRelevantForLevelBounds; // 0x59
	bool bReplayRewindable; // 0x59
	bool bAllowTickBeforeBeginPlay; // 0x59
	bool bAutoDestroyWhenFinished; // 0x59
	bool bBlockInput; // 0x59
	bool bCanBeDamaged; // 0x5a
	bool bCollideWhenPlacing; // 0x5a
	bool bFindCameraComponentWhenViewTarget; // 0x5a
	bool bGenerateOverlapEventsDuringLevelStreaming; // 0x5a
	bool bIgnoresOriginShifting; // 0x5a
	bool bEnableAutoLODGeneration; // 0x5a
	bool bIsEditorOnlyActor; // 0x5a
	bool bActorSeamlessTraveled; // 0x5a
	bool bReplicates; // 0x5b
	bool bCanBeInCluster; // 0x5b
	bool bAllowReceiveTickEventOnDedicatedServer; // 0x5b
	bool bActorEnableCollision; // 0x5c
	bool bActorIsBeingDestroyed; // 0x5c
	EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x5d
	EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x5e
	BYTE RemoteRole; // 0x5f
	RepMovement ReplicatedMovement; // 0x60
	float InitialLifeSpan; // 0x94
	float CustomTimeDilation; // 0x98
	RepAttachment AttachmentReplication; // 0xa0
	Actor* Owner; // 0xe0
	FName NetDriverName; // 0xe8
	BYTE Role; // 0xf0
	BYTE NetDormancy; // 0xf1
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0xf2
	BYTE AutoReceiveInput; // 0xf3
	int InputPriority; // 0xf4
	InputComponent* InputComponent; // 0xf8
	float NetCullDistanceSquared; // 0x100
	int NetTag; // 0x104
	float NetUpdateFrequency; // 0x108
	float MinNetUpdateFrequency; // 0x10c
	float NetPriority; // 0x110
	Pawn* Instigator; // 0x118
	TArray Children; // 0x120
	SceneComponent* RootComponent; // 0x130
	TArray ControllingMatineeActors; // 0x138
	TArray Layers; // 0x150
	WeakObjectProperty ParentComponent; // 0x160 property 0x1ab71568f00 hash 0x24388009
	TArray Tags; // 0x168
	MulticastSparseDelegateProperty OnTakeAnyDamage; // 0x178 property 0x1ab71569000 hash 0xece81129
	MulticastSparseDelegateProperty OnTakePointDamage; // 0x179 property 0x1ab71569080 hash 0xece81129
	MulticastSparseDelegateProperty OnTakeRadialDamage; // 0x17a property 0x1ab71569100 hash 0xece81129
	MulticastSparseDelegateProperty OnActorBeginOverlap; // 0x17b property 0x1ab71569180 hash 0xece81129
	MulticastSparseDelegateProperty OnActorEndOverlap; // 0x17c property 0x1ab71569200 hash 0xece81129
	MulticastSparseDelegateProperty OnBeginCursorOver; // 0x17d property 0x1ab71569280 hash 0xece81129
	MulticastSparseDelegateProperty OnEndCursorOver; // 0x17e property 0x1ab71569300 hash 0xece81129
	MulticastSparseDelegateProperty OnClicked; // 0x17f property 0x1ab71569380 hash 0xece81129
	MulticastSparseDelegateProperty OnReleased; // 0x180 property 0x1ab71569400 hash 0xece81129
	MulticastSparseDelegateProperty OnInputTouchBegin; // 0x181 property 0x1ab71569480 hash 0xece81129
	MulticastSparseDelegateProperty OnInputTouchEnd; // 0x182 property 0x1ab71567400 hash 0xece81129
	MulticastSparseDelegateProperty OnInputTouchEnter; // 0x183 property 0x1ab71567480 hash 0xece81129
	MulticastSparseDelegateProperty OnInputTouchLeave; // 0x184 property 0x1ab71567500 hash 0xece81129
	MulticastSparseDelegateProperty OnActorHit; // 0x185 property 0x1ab71567580 hash 0xece81129
	MulticastSparseDelegateProperty OnDestroyed; // 0x186 property 0x1ab71567600 hash 0xece81129
	MulticastSparseDelegateProperty OnEndPlay; // 0x187 property 0x1ab71567700 hash 0xece81129
	TArray InstanceComponents; // 0x1e8
	TArray BlueprintCreatedComponents; // 0x1f8

	// Functions
	WasRecentlyRendered 0x3f2e7 hash 5824f33f params:( None Tolerance;None ReturnValue; );
	UserConstructionScript 0x22233 hash b8442e64 params:(  );
	TearOff 0x3f2e2 hash 388fbdec params:(  );
	SnapRootComponentTo 0x3f2d7 hash 7003d5d1 params:( Actor InParentActor;None InSocketName; );
	SetTickGroup 0x3e03e hash 8d5f65c9 params:( ETickingGroup NewTickGroup; );
	SetTickableWhenPaused 0x3e032 hash 7e7bbc04 params:( None bTickableWhenPaused; );
	SetReplicates 0x3f2cf hash f9cf881d params:( None bInReplicates; );
	SetReplicateMovement 0x3f2c4 hash 20d84a75 params:( None bInReplicateMovement; );
	SetOwner 0x3f2bf hash 8834625c params:( Actor NewOwner; );
	SetNetDormancy 0x3f2b7 hash f79fe515 params:( ENetDormancy NewDormancy; );
	SetLifeSpan 0x3f2b0 hash 34766843 params:( None InLifespan; );
	SetActorTickInterval 0x3f2a5 hash 115d0d3a params:( None TickInterval; );
	SetActorTickEnabled 0x3f29a hash 4f2525a0 params:( None bEnabled; );
	SetActorScale3D 0x3f291 hash 5091ce69 params:( Vector NewScale3D; );
	SetActorRelativeScale3D 0x3f284 hash e17c7c25 params:( Vector NewRelativeScale; );
	SetActorHiddenInGame 0x3f279 hash e088cc7 params:( None bNewHidden; );
	SetActorEnableCollision 0x3f26c hash d8b6d3fd params:( None bNewActorEnableCollision; );
	RemoveTickPrerequisiteComponent 0x3dfef hash ccf05993 params:( ActorComponent PrerequisiteComponent; );
	RemoveTickPrerequisiteActor 0x3dfe0 hash a4a684b9 params:( Actor PrerequisiteActor; );
	ReceiveTick 0x2222c hash 2a96f4d3 params:( None DeltaSeconds; );
	ReceiveRadialDamage 0x22221 hash 315c3014 params:( None DamageReceived;DamageType DamageType;Vector Origin;HitResult HitInfo;Controller InstigatedBy;Actor DamageCauser; );
	ReceivePointDamage 0x22217 hash 2896aa91 params:( None Damage;DamageType DamageType;Vector HitLocation;Vector HitNormal;PrimitiveComponent HitComponent;None BoneName;Vector ShotFromDirection;Controller InstigatedBy;Actor DamageCauser;HitResult HitInfo; );
	ReceiveHit 0x22211 hash 2fd5d46d params:( PrimitiveComponent MyComp;Actor Other;PrimitiveComponent OtherComp;None bSelfMoved;Vector HitLocation;Vector HitNormal;Vector NormalImpulse;HitResult Hit; );
	ReceiveEndPlay 0x22209 hash 3a1b8675 params:( EEndPlayReason EndPlayReason; );
	ReceiveDestroyed 0x22200 hash 43619e7b params:(  );
	ReceiveBeginPlay 0x221f7 hash a4ab8b03 params:(  );
	ReceiveAnyDamage 0x221ee hash 90ed768f params:( None Damage;DamageType DamageType;Controller InstigatedBy;Actor DamageCauser; );
	ReceiveActorOnReleased 0x221e2 hash 34d72fe3 params:( Key ButtonReleased; );
	ReceiveActorOnInputTouchLeave 0x221d2 hash 18a8fc1e params:( ETouchIndex FingerIndex; );
	ReceiveActorOnInputTouchEnter 0x221c2 hash 182f8eaf params:( ETouchIndex FingerIndex; );
	ReceiveActorOnInputTouchEnd 0x221b3 hash 56dd328 params:( ETouchIndex FingerIndex; );
	ReceiveActorOnInputTouchBegin 0x221a3 hash 17f41ef6 params:( ETouchIndex FingerIndex; );
	ReceiveActorOnClicked 0x22197 hash a6530f2d params:( Key ButtonPressed; );
	ReceiveActorEndOverlap 0x2218b hash 22ea0e51 params:( Actor OtherActor; );
	ReceiveActorEndCursorOver 0x2217d hash e9fd8bb2 params:(  );
	ReceiveActorBeginOverlap 0x22170 hash 2c9d025f params:( Actor OtherActor; );
	ReceiveActorBeginCursorOver 0x22161 hash 7443ad00 params:(  );
	PrestreamTextures 0x3f262 hash 5ab9a27c params:( None Seconds;None bEnableStreaming;None CinematicTextureGroups; );
	OnRep_ReplicateMovement 0x3f255 hash 1d69bf4c params:(  );
	OnRep_ReplicatedMovement 0x3f248 hash ed550bd0 params:(  );
	OnRep_Owner 0x3f241 hash e6529cb3 params:(  );
	OnRep_Instigator 0x3f238 hash 11b377ac params:(  );
	OnRep_AttachmentReplication 0x3f229 hash 547127cb params:(  );
	MakeNoise 0x3f223 hash 9e6ec0a1 params:( None Loudness;Pawn NoiseInstigator;Vector NoiseLocation;None MaxRange;None Tag; );
	MakeMIDForMaterial 0x3f219 hash 24474b3 params:( MaterialInterface Parent;MaterialInstanceDynamic ReturnValue; );
	K2_TeleportTo 0x3f211 hash 1b2d7b93 params:( Vector DestLocation;Rotator DestRotation;None ReturnValue; );
	K2_SetActorTransform 0x3f206 hash f146afc2 params:( Transform NewTransform;None bSweep;HitResult SweepHitResult;None bTeleport;None ReturnValue; );
	K2_SetActorRotation 0x3f1fb hash 82c89736 params:( Rotator NewRotation;None bTeleportPhysics;None ReturnValue; );
	K2_SetActorRelativeTransform 0x3f1ec hash c861387e params:( Transform NewRelativeTransform;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_SetActorRelativeRotation 0x3f1dd hash b016f872 params:( Rotator NewRelativeRotation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_SetActorRelativeLocation 0x3f1ce hash fee4487b params:( Vector NewRelativeLocation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_SetActorLocationAndRotation 0x3f1be hash 6c95aae2 params:( Vector NewLocation;Rotator NewRotation;None bSweep;HitResult SweepHitResult;None bTeleport;None ReturnValue; );
	K2_SetActorLocation 0x3f1b3 hash d195e73f params:( Vector NewLocation;None bSweep;HitResult SweepHitResult;None bTeleport;None ReturnValue; );
	K2_OnReset 0x2215b hash 9957dca1 params:(  );
	K2_OnEndViewTarget 0x22151 hash 9f63deb7 params:( PlayerController PC; );
	K2_OnBecomeViewTarget 0x22145 hash 777fab6b params:( PlayerController PC; );
	K2_GetRootComponent 0x3f1a8 hash b8b55c18 params:( SceneComponent ReturnValue; );
	K2_GetComponentsByClass 0x3f19b hash 73b92298 params:( Class ComponentClass;ReturnValue ReturnValue; );
	K2_GetActorRotation 0x3f190 hash f04ad0aa params:( Rotator ReturnValue; );
	K2_GetActorLocation 0x3f185 hash 3f1820b3 params:( Vector ReturnValue; );
	K2_DetachFromActor 0x3f17b hash 4210fd57 params:( UnderlyingType LocationRule;UnderlyingType RotationRule;UnderlyingType ScaleRule; );
	K2_DestroyComponent 0x3dfcd hash 8a83e1be params:( ActorComponent Component; );
	K2_DestroyActor 0x3f172 hash 621eaf64 params:(  );
	K2_AttachToComponent 0x3e195 hash 73e206cc params:( SceneComponent Parent;None SocketName;UnderlyingType LocationRule;UnderlyingType RotationRule;UnderlyingType ScaleRule;None bWeldSimulatedBodies; );
	K2_AttachToActor 0x3f169 hash ce487d72 params:( Actor ParentActor;None SocketName;UnderlyingType LocationRule;UnderlyingType RotationRule;UnderlyingType ScaleRule;None bWeldSimulatedBodies; );
	K2_AttachRootComponentToActor 0x3f159 hash 31fc8729 params:( Actor InParentActor;None InSocketName;EAttachLocation AttachLocationType;None bWeldSimulatedBodies; );
	K2_AttachRootComponentTo 0x3f14c hash 6da7dab0 params:( SceneComponent InParent;None InSocketName;EAttachLocation AttachLocationType;None bWeldSimulatedBodies; );
	K2_AddActorWorldTransform 0x3f13e hash c34415c7 params:( Transform DeltaTransform;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddActorWorldRotation 0x3f131 hash edfed09b params:( Rotator DeltaRotation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddActorWorldOffset 0x3f125 hash 815ef952 params:( Vector DeltaLocation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddActorLocalTransform 0x3f117 hash be97e26a params:( Transform NewTransform;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddActorLocalRotation 0x3f10a hash 2bea14de params:( Rotator DeltaRotation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	K2_AddActorLocalOffset 0x3f0fe hash 341650d5 params:( Vector DeltaLocation;None bSweep;HitResult SweepHitResult;None bTeleport; );
	IsOverlappingActor 0x3f0f4 hash d44b1961 params:( Actor Other;None ReturnValue; );
	IsChildActor 0x3f0ed hash e6a6047e params:( None ReturnValue; );
	IsActorTickEnabled 0x3f0e3 hash 8625d850 params:( None ReturnValue; );
	IsActorBeingDestroyed 0x3f0d7 hash 22ab8772 params:( None ReturnValue; );
	HasAuthority 0x3f0d0 hash dfb8dd6a params:( None ReturnValue; );
	GetVerticalDistanceTo 0x3f0c4 hash 756d276d params:( Actor OtherActor;None ReturnValue; );
	GetVelocity 0x3f0bd hash 983da94 params:( Vector ReturnValue; );
	GetTransform 0x3f0b6 hash 6822c1 params:( Transform ReturnValue; );
	GetTickableWhenPaused 0x3f0aa hash b1dffdf8 params:( None ReturnValue; );
	GetSquaredDistanceTo 0x3f09f hash 87910088 params:( Actor OtherActor;None ReturnValue; );
	GetRemoteRole 0x3f097 hash 7d48ef83 params:( ENetRole ReturnValue; );
	GetParentComponent 0x3f08d hash e4752d02 params:( ChildActorComponent ReturnValue; );
	GetParentActor 0x3f085 hash 6b44f8a8 params:( Actor ReturnValue; );
	GetOwner 0x3dfae hash 751e67d0 params:( Actor ReturnValue; );
	GetOverlappingComponents 0x3f078 hash a9c1d6d2 params:( OverlappingComponents OverlappingComponents; );
	GetOverlappingActors 0x3f06d hash b4c110b8 params:( OverlappingActors OverlappingActors;Class ClassFilter; );
	GetLocalRole 0x3f066 hash 12d6e182 params:( ENetRole ReturnValue; );
	GetLifeSpan 0x3f05f hash f41de937 params:( None ReturnValue; );
	GetInstigatorController 0x3f052 hash 26df78cd params:( Controller ReturnValue; );
	GetInstigator 0x3f04a hash 623bbce9 params:( Pawn ReturnValue; );
	GetInputVectorAxisValue 0x3f03d hash 664e0c9a params:( Key InputAxisKey;Vector ReturnValue; );
	GetInputAxisValue 0x3f033 hash 296aa0c7 params:( None InputAxisName;None ReturnValue; );
	GetInputAxisKeyValue 0x3f028 hash 2a8a4eb0 params:( Key InputAxisKey;None ReturnValue; );
	GetHorizontalDotProductTo 0x3f01a hash 9660501a params:( Actor OtherActor;None ReturnValue; );
	GetHorizontalDistanceTo 0x3f00d hash ab5495bd params:( Actor OtherActor;None ReturnValue; );
	GetGameTimeSinceCreation 0x3f000 hash 8b7dcd55 params:( None ReturnValue; );
	GetDotProductTo 0x3eff7 hash d0729e10 params:( Actor OtherActor;None ReturnValue; );
	GetDistanceTo 0x3efef hash f56eee33 params:( Actor OtherActor;None ReturnValue; );
	GetComponentsByTag 0x3efe5 hash 7d02a302 params:( Class ComponentClass;None Tag;ReturnValue ReturnValue; );
	GetComponentsByInterface 0x3efd8 hash 7fbaf017 params:( Class Interface;ReturnValue ReturnValue; );
	GetComponentByClass 0x3efcd hash ddf91cc9 params:( Class ComponentClass;ActorComponent ReturnValue; );
	GetAttachParentSocketName 0x3efbf hash 187bb9ce params:( None ReturnValue; );
	GetAttachParentActor 0x3efb4 hash 33e0d25d params:( Actor ReturnValue; );
	GetAttachedActors 0x3efaa hash 8101b76f params:( OutActors OutActors;None bResetArray; );
	GetAllChildActors 0x3efa0 hash dc0f5b8e params:( ChildActors ChildActors;None bIncludeDescendants; );
	GetActorUpVector 0x3ef97 hash 775f2bd6 params:( Vector ReturnValue; );
	GetActorTimeDilation 0x3ef8c hash bbe8ca01 params:( None ReturnValue; );
	GetActorTickInterval 0x3ef81 hash 7f86e0ae params:( None ReturnValue; );
	GetActorScale3D 0x3ef78 hash a938a95d params:( Vector ReturnValue; );
	GetActorRightVector 0x3ef6d hash f1999f8f params:( Vector ReturnValue; );
	GetActorRelativeScale3D 0x3ef60 hash 7ef90b19 params:( Vector ReturnValue; );
	GetActorForwardVector 0x3ef54 hash e8ed7406 params:( Vector ReturnValue; );
	GetActorEyesViewPoint 0x3ef48 hash f6061d19 params:( Vector OutLocation;Rotator OutRotation; );
	GetActorEnableCollision 0x3ef3b hash 763362f1 params:( None ReturnValue; );
	GetActorBounds 0x3ef33 hash 8907dd89 params:( None bOnlyCollidingComponents;Vector Origin;Vector BoxExtent; );
	ForceNetUpdate 0x3ef2b hash 540745e params:(  );
	FlushNetDormancy 0x2f0 hash cc01df2b params:(  );
	EnableInput 0x3ef24 hash 98dd317c params:( PlayerController PlayerController; );
	DisableInput 0x3ef1d hash dbf94ea9 params:( PlayerController PlayerController; );
	DetachRootComponentFromParent 0x3ef0d hash 258a12e3 params:( None bMaintainWorldPosition; );
	AddTickPrerequisiteComponent 0x3df83 hash 2470fa4e params:( ActorComponent PrerequisiteComponent; );
	AddTickPrerequisiteActor 0x3df76 hash d6b5fff4 params:( Actor PrerequisiteActor; );
	AddComponent 0x3ef06 hash 33c62bc1 params:( None TemplateName;None bManualAttachment;Transform RelativeTransform;Object ComponentTemplateContext;ActorComponent ReturnValue; );
	ActorHasTag 0x3eeff hash 8776b516 params:( None Tag;None ReturnValue; );
};


instance 1ab5c9fcc40
class Pawn public : Actor
{
	// Fields
	bool bUseControllerRotationPitch; // 0x220
	bool bUseControllerRotationYaw; // 0x220
	bool bUseControllerRotationRoll; // 0x220
	bool bCanAffectNavigationGeneration; // 0x220
	float BaseEyeHeight; // 0x224
	BYTE AutoPossessPlayer; // 0x228
	EAutoPossessAI AutoPossessAI; // 0x229
	BYTE RemoteViewPitch; // 0x22a
	Controller* AIControllerClass; // 0x230
	PlayerState* PlayerState; // 0x238
	Controller* LastHitBy; // 0x248
	Controller* Controller; // 0x250
	Vector ControlInputVector; // 0x25c
	Vector LastControlInputVector; // 0x268

	// Functions
	SpawnDefaultController 0x3f413 hash 88a4ac77 params:(  );
	SetCanAffectNavigationGeneration 0x3f402 hash 6e41768 params:( None bNewValue;None bForceUpdate; );
	ReceiveUnpossessed 0x319f5 hash fbf8c104 params:( Controller OldController; );
	ReceivePossessed 0x319ec hash f08aec21 params:( Controller NewController; );
	PawnMakeNoise 0x3f3fa hash 2dd98297 params:( None Loudness;Vector NoiseLocation;None bUseNoiseMakerLocation;Actor NoiseMaker; );
	OnRep_PlayerState 0x3f3f0 hash 36e1aff6 params:(  );
	OnRep_Controller 0x3f3e7 hash e63c700c params:(  );
	LaunchPawn 0x3f3e1 hash 880a6196 params:( Vector LaunchVelocity;None bXYOverride;None bZOverride; );
	K2_GetMovementInputVector 0x3f3d3 hash b210a14f params:( Vector ReturnValue; );
	IsPlayerControlled 0x3f3c9 hash a08b60a4 params:( None ReturnValue; );
	IsPawnControlled 0x3f3c0 hash 407c44ad params:( None ReturnValue; );
	IsMoveInputIgnored 0x3f3b6 hash 911901b0 params:( None ReturnValue; );
	IsLocallyControlled 0x3f3ab hash 4576fe67 params:( None ReturnValue; );
	IsControlled 0x3f3a4 hash 3f1595f7 params:( None ReturnValue; );
	IsBotControlled 0x3f39b hash eccd381c params:( None ReturnValue; );
	GetPendingMovementInputVector 0x3f38b hash 91cac338 params:( Vector ReturnValue; );
	GetNavAgentLocation 0x3f380 hash d1acb52 params:( Vector ReturnValue; );
	GetMovementComponent 0x3f375 hash 5d09ac3 params:( PawnMovementComponent ReturnValue; );
	GetMovementBaseActor 0x3f36a hash 56a903a4 params:( Pawn Pawn;Actor ReturnValue; );
	GetLastMovementInputVector 0x3f35c hash 5b7a7747 params:( Vector ReturnValue; );
	GetControlRotation 0x3f352 hash 242f16 params:( Rotator ReturnValue; );
	GetController 0x3f34a hash 36c4b549 params:( Controller ReturnValue; );
	GetBaseAimRotation 0x3f340 hash a370aa27 params:( Rotator ReturnValue; );
	DetachFromControllerPendingDestroy 0x3f32e hash 320b7e35 params:(  );
	ConsumeMovementInputVector 0x3f320 hash 17718ccd params:( Vector ReturnValue; );
	AddMovementInput 0x3f317 hash e4c27ec9 params:( Vector WorldDirection;None ScaleValue;None bForce; );
	AddControllerYawInput 0x3f30b hash 96bba173 params:( None Val; );
	AddControllerRollInput 0x3f2ff hash 2aa796bb params:( None Val; );
	AddControllerPitchInput 0x3f2f2 hash af8e5d7a params:( None Val; );
};


instance 1ab5c9fce80
class Character public : Pawn
{
	// Fields
	SkeletalMeshComponent* Mesh; // 0x278
	CharacterMovementComponent* CharacterMovement; // 0x280
	CapsuleComponent* CapsuleComponent; // 0x288
	BasedMovementInfo BasedMovement; // 0x290
	BasedMovementInfo ReplicatedBasedMovement; // 0x2c0
	float AnimRootMotionTranslationScale; // 0x2f0
	Vector BaseTranslationOffset; // 0x2f4
	Quat BaseRotationOffset; // 0x300
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x310
	float ReplayLastTransformUpdateTimeStamp; // 0x314
	BYTE ReplicatedMovementMode; // 0x318
	bool bInBaseReplication; // 0x319
	float CrouchedEyeHeight; // 0x31c
	bool bIsCrouched; // 0x320
	bool bProxyIsJumpForceApplied; // 0x320
	bool bPressedJump; // 0x320
	bool bClientUpdating; // 0x320
	bool bClientWasFalling; // 0x320
	bool bClientResimulateRootMotion; // 0x320
	bool bClientResimulateRootMotionSources; // 0x320
	bool bSimGravityDisabled; // 0x320
	bool bClientCheckEncroachmentOnNetUpdate; // 0x321
	bool bServerMoveIgnoreRootMotion; // 0x321
	bool bWasJumping; // 0x321
	float JumpKeyHoldTime; // 0x324
	float JumpForceTimeRemaining; // 0x328
	float ProxyJumpForceStartedTime; // 0x32c
	float JumpMaxHoldTime; // 0x330
	int JumpMaxCount; // 0x334
	int JumpCurrentCount; // 0x338
	MulticastInlineDelegateProperty OnReachedJumpApex; // 0x340 property 0x1ab7173c880 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty MovementModeChangedDelegate; // 0x360 property 0x1ab7173c900 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnCharacterMovementUpdated; // 0x370 property 0x1ab7173a700 hash 0xb7a5ed1a
	RootMotionSourceGroup SavedRootMotion; // 0x380
	RootMotionMovementParams ClientRootMotionParams; // 0x480
	TArray RootMotionRepMoves; // 0x4c0
	RepRootMotionMontage RepRootMotion; // 0x4d0

	// Functions
	UnCrouch 0x3f500 hash a5ac7c2c params:( None bClientSimulation; );
	StopJumping 0x3f4f9 hash 353938c5 params:(  );
	StopAnimMontage 0x3f4f0 hash 6174eebb params:( AnimMontage AnimMontage; );
	ServerMoveOld 0x25611 hash 16212ef2 params:( None OldTimeStamp;Vector_NetQuantize10 OldAccel;None OldMoveFlags; );
	ServerMoveNoBase 0x25608 hash 860f498b params:( None Timestamp;Vector_NetQuantize10 InAccel;Vector_NetQuantize100 ClientLoc;None CompressedMoveFlags;None ClientRoll;None View;None ClientMovementMode; );
	ServerMoveDualNoBase 0x255fd hash 502567f1 params:( None TimeStamp0;Vector_NetQuantize10 InAccel0;None PendingFlags;None View0;None Timestamp;Vector_NetQuantize10 InAccel;Vector_NetQuantize100 ClientLoc;None NewFlags;None ClientRoll;None View;None ClientMovementMode; );
	ServerMoveDualHybridRootMotion 0x255ed hash 8c9a3cd5 params:( None TimeStamp0;Vector_NetQuantize10 InAccel0;None PendingFlags;None View0;None Timestamp;Vector_NetQuantize10 InAccel;Vector_NetQuantize100 ClientLoc;None NewFlags;None ClientRoll;None View;PrimitiveComponent ClientMovementBase;None ClientBaseBoneName;None ClientMovementMode; );
	ServerMoveDual 0x255e5 hash da412b59 params:( None TimeStamp0;Vector_NetQuantize10 InAccel0;None PendingFlags;None View0;None Timestamp;Vector_NetQuantize10 InAccel;Vector_NetQuantize100 ClientLoc;None NewFlags;None ClientRoll;None View;PrimitiveComponent ClientMovementBase;None ClientBaseBoneName;None ClientMovementMode; );
	ServerMove 0x255df hash 1eb06173 params:( None Timestamp;Vector_NetQuantize10 InAccel;Vector_NetQuantize100 ClientLoc;None CompressedMoveFlags;None ClientRoll;None View;PrimitiveComponent ClientMovementBase;None ClientBaseBoneName;None ClientMovementMode; );
	RootMotionDebugClientPrintOnScreen 0x255cd hash 11b4460f params:( None inString; );
	PlayAnimMontage 0x3f4e7 hash fef89bcb params:( AnimMontage AnimMontage;None InPlayRate;None StartSectionName;None ReturnValue; );
	OnWalkingOffLedge 0x255c3 hash bee8328b params:( Vector PreviousFloorImpactNormal;Vector PreviousFloorContactNormal;Vector PreviousLocation;None TimeDelta; );
	OnRep_RootMotion 0x3f4de hash b8d23e22 params:(  );
	OnRep_ReplicatedBasedMovement 0x3f4ce hash 8c64168f params:(  );
	OnRep_ReplayLastTransformUpdateTimeStamp 0x3f4b9 hash e0dcc87c params:(  );
	OnRep_IsCrouched 0x3f4b0 hash 80d27831 params:(  );
	OnLaunched 0x255bd hash e9af9926 params:( Vector LaunchVelocity;None bXYOverride;None bZOverride; );
	OnLanded 0x255b8 hash 2feb778a params:( HitResult Hit; );
	OnJumped 0x255b3 hash 2caab707 params:(  );
	LaunchCharacter 0x3f4a7 hash bef6dbad params:( Vector LaunchVelocity;None bXYOverride;None bZOverride; );
	K2_UpdateCustomMovement 0x255a6 hash 2b97362a params:( None DeltaTime; );
	K2_OnStartCrouch 0x2559d hash a9578d70 params:( None HalfHeightAdjust;None ScaledHalfHeightAdjust; );
	K2_OnMovementModeChanged 0x25590 hash 2eb75918 params:( EMovementMode PrevMovementMode;EMovementMode NewMovementMode;None PrevCustomMode;None NewCustomMode; );
	K2_OnEndCrouch 0x25588 hash 9767bb39 params:( None HalfHeightAdjust;None ScaledHalfHeightAdjust; );
	Jump 0x3f4a4 hash 7c87a3c1 params:(  );
	IsPlayingRootMotion 0x3f499 hash 99904e2f params:( None ReturnValue; );
	IsPlayingNetworkedRootMotionMontage 0x3f486 hash 4a9da9ed params:( None ReturnValue; );
	IsJumpProvidingForce 0x3f47b hash 888328be params:( None ReturnValue; );
	HasAnyRootMotion 0x3f472 hash bc2b67a3 params:( None ReturnValue; );
	GetCurrentMontage 0x3f468 hash dc966c53 params:( AnimMontage ReturnValue; );
	GetBaseTranslationOffset 0x3f45b hash fb371c56 params:( Vector ReturnValue; );
	GetBaseRotationOffsetRotator 0x3f44c hash fb686a42 params:( Rotator ReturnValue; );
	GetAnimRootMotionTranslationScale 0x3f43a hash c7a91f3b params:( None ReturnValue; );
	Crouch 0x3f436 hash ac766d49 params:( None bClientSimulation; );
	ClientVeryShortAdjustPosition 0x25578 hash 6687cd1a params:( None Timestamp;Vector NewLoc;PrimitiveComponent NewBase;None NewBaseBoneName;None bHasBase;None bBaseRelativePosition;None ServerMovementMode; );
	ClientCheatWalk 0x2556f hash 15408418 params:(  );
	ClientCheatGhost 0x25566 hash bc3363ee params:(  );
	ClientCheatFly 0x2555e hash 4e37fb34 params:(  );
	ClientAdjustRootMotionSourcePosition 0x2554b hash e03d362f params:( None Timestamp;RootMotionSourceGroup ServerRootMotion;None bHasAnimRootMotion;None ServerMontageTrackPosition;Vector ServerLoc;Vector_NetQuantizeNormal ServerRotation;None ServerVelZ;PrimitiveComponent ServerBase;None ServerBoneName;None bHasBase;None bBaseRelativePosition;None ServerMovementMode; );
	ClientAdjustRootMotionPosition 0x2553b hash b167bbde params:( None Timestamp;None ServerMontageTrackPosition;Vector ServerLoc;Vector_NetQuantizeNormal ServerRotation;None ServerVelZ;PrimitiveComponent ServerBase;None ServerBoneName;None bHasBase;None bBaseRelativePosition;None ServerMovementMode; );
	ClientAdjustPosition 0x25530 hash a925c064 params:( None Timestamp;Vector NewLoc;Vector NewVel;PrimitiveComponent NewBase;None NewBaseBoneName;None bHasBase;None bBaseRelativePosition;None ServerMovementMode; );
	ClientAckGoodMove 0x25526 hash bbfcbad3 params:( None Timestamp; );
	CanJumpInternal 0x2551d hash 33f22e90 params:( None ReturnValue; );
	CanJump 0x3f431 hash 13730493 params:( None ReturnValue; );
	CanCrouch 0x3f42b hash abbd4a9b params:( None ReturnValue; );
	CacheInitialMeshOffset 0x3f41f hash 6394aa17 params:( Vector MeshRelativeLocation;Rotator MeshRelativeRotation; );
};


instance 1ab5e054540
class PrimitiveComponent public : SceneComponent
{
	// Fields
	float MinDrawDistance; // 0x1f8
	float LDMaxDrawDistance; // 0x1fc
	float CachedMaxDrawDistance; // 0x200
	BYTE DepthPriorityGroup; // 0x204
	BYTE ViewOwnerDepthPriorityGroup; // 0x205
	BYTE IndirectLightingCacheQuality; // 0x206
	ELightmapType LightmapType; // 0x207
	bool bUseMaxLODAsImposter; // 0x208
	bool bBatchImpostersAsInstances; // 0x208
	bool bNeverDistanceCull; // 0x208
	bool bAlwaysCreatePhysicsState; // 0x208
	bool bGenerateOverlapEvents; // 0x209
	bool bMultiBodyOverlap; // 0x209
	bool bTraceComplexOnMove; // 0x209
	bool bReturnMaterialOnMove; // 0x209
	bool bUseViewOwnerDepthPriorityGroup; // 0x209
	bool bAllowCullDistanceVolume; // 0x209
	bool bHasMotionBlurVelocityMeshes; // 0x209
	bool bVisibleInReflectionCaptures; // 0x209
	bool bVisibleInRayTracing; // 0x20a
	bool bRenderInMainPass; // 0x20a
	bool bRenderInDepthPass; // 0x20a
	bool bReceivesDecals; // 0x20a
	bool bOwnerNoSee; // 0x20a
	bool bOnlyOwnerSee; // 0x20a
	bool bTreatAsBackgroundForOcclusion; // 0x20a
	bool bUseAsOccluder; // 0x20a
	bool bSelectable; // 0x20b
	bool bForceMipStreaming; // 0x20b
	bool bHasPerInstanceHitProxies; // 0x20b
	bool CastShadow; // 0x20b
	bool bAffectDynamicIndirectLighting; // 0x20b
	bool bAffectDistanceFieldLighting; // 0x20b
	bool bCastDynamicShadow; // 0x20b
	bool bCastStaticShadow; // 0x20b
	bool bCastVolumetricTranslucentShadow; // 0x20c
	bool bSelfShadowOnly; // 0x20c
	bool bCastFarShadow; // 0x20c
	bool bCastInsetShadow; // 0x20c
	bool bCastCinematicShadow; // 0x20c
	bool bCastHiddenShadow; // 0x20c
	bool bCastShadowAsTwoSided; // 0x20c
	bool bLightAsIfStatic; // 0x20c
	bool bLightAttachmentsAsGroup; // 0x20d
	bool bExcludeFromLightAttachmentGroup; // 0x20d
	bool bReceiveMobileCSMShadows; // 0x20d
	bool bSingleSampleShadowFromStationaryLights; // 0x20d
	bool bIgnoreRadialImpulse; // 0x20d
	bool bIgnoreRadialForce; // 0x20d
	bool bApplyImpulseOnDamage; // 0x20d
	bool bReplicatePhysicsToAutonomousProxy; // 0x20d
	bool AlwaysLoadOnClient; // 0x20e
	bool AlwaysLoadOnServer; // 0x20e
	bool bUseEditorCompositing; // 0x20e
	bool bRenderCustomDepth; // 0x20e
	BYTE bHasCustomNavigableGeometry; // 0x20f
	BYTE CanCharacterStepUpOn; // 0x211
	LightingChannels LightingChannels; // 0x212
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x213
	int CustomDepthStencilValue; // 0x214
	CustomPrimitiveData CustomPrimitiveData; // 0x218
	int TranslucencySortPriority; // 0x228
	int VisibilityId; // 0x22c
	TArray RuntimeVirtualTextures; // 0x230
	char VirtualTextureLodBias; // 0x240
	char VirtualTextureCullMips; // 0x241
	char VirtualTextureMinCoverage; // 0x242
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x243
	float LpvBiasMultiplier; // 0x248
	float BoundsScale; // 0x254
	TArray MoveIgnoreActors; // 0x268
	TArray MoveIgnoreComponents; // 0x278
	BodyInstance BodyInstance; // 0x298
	MulticastSparseDelegateProperty OnComponentHit; // 0x3a8 property 0x1ab71420800 hash 0xece81129
	MulticastSparseDelegateProperty OnComponentBeginOverlap; // 0x3a9 property 0x1ab71420880 hash 0xece81129
	MulticastSparseDelegateProperty OnComponentEndOverlap; // 0x3aa property 0x1ab71420900 hash 0xece81129
	MulticastSparseDelegateProperty OnComponentWake; // 0x3ab property 0x1ab71420980 hash 0xece81129
	MulticastSparseDelegateProperty OnComponentSleep; // 0x3ac property 0x1ab71420a00 hash 0xece81129
	MulticastSparseDelegateProperty OnBeginCursorOver; // 0x3ae property 0x1ab71420a80 hash 0xece81129
	MulticastSparseDelegateProperty OnEndCursorOver; // 0x3af property 0x1ab71420b00 hash 0xece81129
	MulticastSparseDelegateProperty OnClicked; // 0x3b0 property 0x1ab71420b80 hash 0xece81129
	MulticastSparseDelegateProperty OnReleased; // 0x3b1 property 0x1ab71420c00 hash 0xece81129
	MulticastSparseDelegateProperty OnInputTouchBegin; // 0x3b2 property 0x1ab71420c80 hash 0xece81129
	MulticastSparseDelegateProperty OnInputTouchEnd; // 0x3b3 property 0x1ab71420d00 hash 0xece81129
	MulticastSparseDelegateProperty OnInputTouchEnter; // 0x3b4 property 0x1ab71420d80 hash 0xece81129
	MulticastSparseDelegateProperty OnInputTouchLeave; // 0x3b5 property 0x1ab71420e00 hash 0xece81129
	PrimitiveComponent* LODParentPrimitive; // 0x3d0

	// Functions
	WakeRigidBody 0x3fabb hash 74193d2a params:( None BoneName; );
	WakeAllRigidBodies 0x3fab1 hash 79118f2b params:(  );
	SetWalkableSlopeOverride 0x3faa4 hash 44301197 params:( WalkableSlopeOverride NewOverride; );
	SetUseCCD 0x3fa9e hash 9c71b9c8 params:( None InUseCCD;None BoneName; );
	SetTranslucentSortPriority 0x3fa90 hash 62a02c8e params:( None NewTranslucentSortPriority; );
	SetSingleSampleShadowFromStationaryLights 0x3fa7a hash 37268e28 params:( None bNewSingleSampleShadowFromStationaryLights; );
	SetSimulatePhysics 0x3fa70 hash 43243f78 params:( None bSimulate; );
	SetRenderInMainPass 0x3fa65 hash ee0c13c4 params:( None bValue; );
	SetRenderCustomDepth 0x3fa5a hash 49b91aa1 params:( None bValue; );
	SetReceivesDecals 0x3fa50 hash 82057673 params:( None bNewReceivesDecals; );
	SetPhysMaterialOverride 0x3fa43 hash 6ef945a4 params:( PhysicalMaterial NewPhysMaterial; );
	SetPhysicsMaxAngularVelocityInRadians 0x3fa2f hash 51064acc params:( None NewMaxAngVel;None bAddToCurrent;None BoneName; );
	SetPhysicsMaxAngularVelocityInDegrees 0x3fa1b hash 24e6e389 params:( None NewMaxAngVel;None bAddToCurrent;None BoneName; );
	SetPhysicsMaxAngularVelocity 0x3fa0c hash 1965a333 params:( None NewMaxAngVel;None bAddToCurrent;None BoneName; );
	SetPhysicsLinearVelocity 0x3f9ff hash 73cc6c9e params:( Vector NewVel;None bAddToCurrent;None BoneName; );
	SetPhysicsAngularVelocityInRadians 0x3f9ed hash a52528c6 params:( Vector NewAngVel;None bAddToCurrent;None BoneName; );
	SetPhysicsAngularVelocityInDegrees 0x3f9db hash 7905c183 params:( Vector NewAngVel;None bAddToCurrent;None BoneName; );
	SetPhysicsAngularVelocity 0x3f9cd hash 302d8fed params:( Vector NewAngVel;None bAddToCurrent;None BoneName; );
	SetOwnerNoSee 0x3f9c5 hash 3e9dffb6 params:( None bNewOwnerNoSee; );
	SetOnlyOwnerSee 0x3f9bc hash c5892a1b params:( None bNewOnlyOwnerSee; );
	SetNotifyRigidBodyCollision 0x3f9ad hash db527dd3 params:( None bNewNotifyRigidBodyCollision; );
	SetMaterialByName 0x3f9a3 hash c753d8fc params:( None MaterialSlotName;MaterialInterface Material; );
	SetMaterial 0x3f99c hash d99f71e0 params:( None ElementIndex;MaterialInterface Material; );
	SetMassScale 0x3f995 hash df07686d params:( None BoneName;None InMassScale; );
	SetMassOverrideInKg 0x3f98a hash 975f1eae params:( None BoneName;None MassInKg;None bOverrideMass; );
	SetLinearDamping 0x3f981 hash 3680408c params:( None InDamping; );
	SetLightAttachmentsAsGroup 0x3f973 hash ad4b81a6 params:( None bInLightAttachmentsAsGroup; );
	SetGenerateOverlapEvents 0x3f966 hash 31ede12a params:( None bInGenerateOverlapEvents; );
	SetExcludeFromLightAttachmentGroup 0x3f954 hash 34d3875d params:( None bInExcludeFromLightAttachmentGroup; );
	SetEnableGravity 0x3f94b hash 3d9482de params:( None bGravityEnabled; );
	SetCustomPrimitiveDataVector4 0x3f93b hash 3b22a086 params:( None DataIndex;Vector4 Value; );
	SetCustomPrimitiveDataVector3 0x3f92b hash 3b22a085 params:( None DataIndex;Vector Value; );
	SetCustomPrimitiveDataVector2 0x3f91b hash 3b22a084 params:( None DataIndex;Vector2D Value; );
	SetCustomPrimitiveDataFloat 0x3f90c hash eef428d5 params:( None DataIndex;None Value; );
	SetCustomDepthStencilWriteMask 0x3f8fc hash 23b167ea params:( UnderlyingType WriteMaskBit; );
	SetCustomDepthStencilValue 0x3f8ee hash 460f65d0 params:( None Value; );
	SetCullDistance 0x3f8e5 hash e584e3ec params:( None NewCullDistance; );
	SetConstraintMode 0x3f8db hash 93306b3b params:( EDOFMode ConstraintMode; );
	SetCollisionResponseToChannel 0x3f8cb hash 1598db08 params:( ECollisionChannel Channel;ECollisionResponse NewResponse; );
	SetCollisionResponseToAllChannels 0x3f8b9 hash 1e0a41f4 params:( ECollisionResponse NewResponse; );
	SetCollisionProfileName 0x3f8ac hash 6381652f params:( None InCollisionProfileName; );
	SetCollisionObjectType 0x3f8a0 hash 3b9723d6 params:( ECollisionChannel Channel; );
	SetCollisionEnabled 0x3f895 hash ef102208 params:( ECollisionEnabled NewType; );
	SetCenterOfMass 0x3f88c hash ff8937b params:( Vector CenterOfMassOffset;None BoneName; );
	SetCastShadow 0x3f884 hash e4df61c2 params:( None NewCastShadow; );
	SetCastInsetShadow 0x3f87a hash 5493aa5 params:( None bInCastInsetShadow; );
	SetBoundsScale 0x3f872 hash c8b96104 params:( None NewBoundsScale; );
	SetAngularDamping 0x3f868 hash 1640799b params:( None InDamping; );
	SetAllUseCCD 0x3f861 hash 317779c1 params:( None InUseCCD; );
	SetAllPhysicsLinearVelocity 0x3f852 hash ad262377 params:( Vector NewVel;None bAddToCurrent; );
	SetAllPhysicsAngularVelocityInRadians 0x3f83e hash 163002df params:( Vector NewAngVel;None bAddToCurrent; );
	SetAllPhysicsAngularVelocityInDegrees 0x3f82a hash ea109b9c params:( Vector NewAngVel;None bAddToCurrent; );
	SetAllMassScale 0x3f821 hash 7b3151c6 params:( None InMassScale; );
	ScaleByMomentOfInertia 0x3f815 hash 775d8439 params:( Vector InputVector;None BoneName;Vector ReturnValue; );
	PutRigidBodyToSleep 0x3f80a hash d1376657 params:( None BoneName; );
	K2_SphereTraceComponent 0x3f7fd hash a82cdfca params:( Vector TraceStart;Vector TraceEnd;None SphereRadius;None bTraceComplex;None bShowTrace;None bPersistentShowTrace;Vector HitLocation;Vector HitNormal;None BoneName;HitResult OutHit;None ReturnValue; );
	K2_SphereOverlapComponent 0x3f7ef hash a8d801f4 params:( Vector InSphereCentre;None InSphereRadius;None bTraceComplex;None bShowTrace;None bPersistentShowTrace;Vector HitLocation;Vector HitNormal;None BoneName;HitResult OutHit;None ReturnValue; );
	K2_LineTraceComponent 0x3f7e3 hash 74938a8b params:( Vector TraceStart;Vector TraceEnd;None bTraceComplex;None bShowTrace;None bPersistentShowTrace;Vector HitLocation;Vector HitNormal;None BoneName;HitResult OutHit;None ReturnValue; );
	K2_IsQueryCollisionEnabled 0x3f7d5 hash 32c1738a params:( None ReturnValue; );
	K2_IsPhysicsCollisionEnabled 0x3f7c6 hash b8a128f7 params:( None ReturnValue; );
	K2_IsCollisionEnabled 0x3f7ba hash 66668f74 params:( None ReturnValue; );
	K2_BoxOverlapComponent 0x3f7ae hash 9d110c56 params:( Vector InBoxCentre;Box InBox;None bTraceComplex;None bShowTrace;None bPersistentShowTrace;Vector HitLocation;Vector HitNormal;None BoneName;HitResult OutHit;None ReturnValue; );
	IsOverlappingComponent 0x3f7a2 hash b09f023b params:( PrimitiveComponent OtherComp;None ReturnValue; );
	IsOverlappingActor 0x3f0f4 hash d44b1961 params:( Actor Other;None ReturnValue; );
	IsGravityEnabled 0x3f799 hash 4110cc12 params:( None ReturnValue; );
	IsAnyRigidBodyAwake 0x3f78e hash 75d05d6f params:( None ReturnValue; );
	IgnoreComponentWhenMoving 0x3f780 hash 9d01849e params:( PrimitiveComponent Component;None bShouldIgnore; );
	IgnoreActorWhenMoving 0x3f774 hash b9976ac4 params:( Actor Actor;None bShouldIgnore; );
	GetWalkableSlopeOverride 0x3f767 hash 913e7f0b params:( WalkableSlopeOverride ReturnValue; );
	GetPhysicsLinearVelocityAtPoint 0x3f756 hash 5388bb71 params:( Vector Point;None BoneName;Vector ReturnValue; );
	GetPhysicsLinearVelocity 0x3f749 hash c0dada12 params:( None BoneName;Vector ReturnValue; );
	GetPhysicsAngularVelocityInRadians 0x3f737 hash 2e1f73a params:( None BoneName;Vector ReturnValue; );
	GetPhysicsAngularVelocityInDegrees 0x3f725 hash d6c28ff7 params:( None BoneName;Vector ReturnValue; );
	GetPhysicsAngularVelocity 0x3f717 hash 1f09abe1 params:( None BoneName;Vector ReturnValue; );
	GetOverlappingComponents 0x3f078 hash a9c1d6d2 params:( OutOverlappingComponents OutOverlappingComponents; );
	GetOverlappingActors 0x3f06d hash b4c110b8 params:( OverlappingActors OverlappingActors;Class ClassFilter; );
	GetNumMaterials 0x3f70e hash 330720f7 params:( None ReturnValue; );
	GetMaterialFromCollisionFaceIndex 0x3f6fc hash 3545fd9b params:( None FaceIndex;None SectionIndex;MaterialInterface ReturnValue; );
	GetMaterial 0x3f6f5 hash 9946f2d4 params:( None ElementIndex;MaterialInterface ReturnValue; );
	GetMassScale 0x3f6ee hash 939f07e1 params:( None BoneName;None ReturnValue; );
	GetMass 0x3f6e9 hash 511e7df9 params:( None ReturnValue; );
	GetLinearDamping 0x3f6e0 hash a4027a00 params:( None ReturnValue; );
	GetInertiaTensor 0x3f6d7 hash 1f4d368c params:( None BoneName;Vector ReturnValue; );
	GetGenerateOverlapEvents 0x3f6ca hash 7efc4e9e params:( None ReturnValue; );
	GetCollisionResponseToChannel 0x3f6ba hash c49d0fc params:( ECollisionChannel Channel;ECollisionResponse ReturnValue; );
	GetCollisionProfileName 0x3f6ad hash fdf423 params:( None ReturnValue; );
	GetCollisionObjectType 0x3f6a1 hash db83a44a params:( ECollisionChannel ReturnValue; );
	GetCollisionEnabled 0x3f696 hash a4d356fc params:( ECollisionEnabled ReturnValue; );
	GetClosestPointOnCollision 0x3f688 hash 7187f655 params:( Vector Point;Vector OutPointOnBody;None BoneName;None ReturnValue; );
	GetCenterOfMass 0x3f67f hash 689f6e6f params:( None BoneName;Vector ReturnValue; );
	GetAngularDamping 0x3f675 hash 3409e18f params:( None ReturnValue; );
	CreateDynamicMaterialInstance 0x3f665 hash a4482bc2 params:( None ElementIndex;MaterialInterface SourceMaterial;None OptionalName;MaterialInstanceDynamic ReturnValue; );
	CreateAndSetMaterialInstanceDynamicFromMaterial 0x3f64c hash 53e84904 params:( None ElementIndex;MaterialInterface Parent;MaterialInstanceDynamic ReturnValue; );
	CreateAndSetMaterialInstanceDynamic 0x3f639 hash d72bb5e1 params:( None ElementIndex;MaterialInstanceDynamic ReturnValue; );
	CopyArrayOfMoveIgnoreComponents 0x3f628 hash bed27f15 params:( ReturnValue ReturnValue; );
	CopyArrayOfMoveIgnoreActors 0x3f619 hash bba0f7b params:( ReturnValue ReturnValue; );
	ClearMoveIgnoreComponents 0x3f60b hash bde5484d params:(  );
	ClearMoveIgnoreActors 0x3f5ff hash 3f28fcb3 params:(  );
	CanCharacterStepUp 0x3f5f5 hash 670d1b45 params:( Pawn Pawn;None ReturnValue; );
	AddTorqueInRadians 0x3f5eb hash 534fd47 params:( Vector Torque;None BoneName;None bAccelChange; );
	AddTorqueInDegrees 0x3f5e1 hash d9159604 params:( Vector Torque;None BoneName;None bAccelChange; );
	AddTorque 0x3f5db hash ad36874e params:( Vector Torque;None BoneName;None bAccelChange; );
	AddRadialImpulse 0x3f5d2 hash 46323bba params:( Vector Origin;None Radius;None Strength;ERadialImpulseFalloff Falloff;None bVelChange; );
	AddRadialForce 0x3f5ca hash b23f96a params:( Vector Origin;None Radius;None Strength;ERadialImpulseFalloff Falloff;None bAccelChange; );
	AddImpulseAtLocation 0x3f5bf hash 8039ecfb params:( Vector Impulse;Vector Location;None BoneName; );
	AddImpulse 0x3f5b9 hash 7a5fed params:( Vector Impulse;None BoneName;None bVelChange; );
	AddForceAtLocationLocal 0x3f5ac hash e6b82f36 params:( Vector Force;Vector Location;None BoneName; );
	AddForceAtLocation 0x3f5a2 hash 6fb1edeb params:( Vector Force;Vector Location;None BoneName; );
	AddForce 0x3f59d hash 789f74dd params:( Vector Force;None BoneName;None bAccelChange; );
	AddAngularImpulseInRadians 0x3f58f hash 3a2fbbd0 params:( Vector Impulse;None BoneName;None bVelChange; );
	AddAngularImpulseInDegrees 0x3f581 hash e10548d params:( Vector Impulse;None BoneName;None bVelChange; );
	AddAngularImpulse 0x3f577 hash 1f5cbfb7 params:( Vector Impulse;None BoneName;None bVelChange; );
};


instance 1ab5e054780
class MeshComponent public : PrimitiveComponent
{
	// Fields
	TArray OverrideMaterials; // 0x3d8
	bool bEnableMaterialParameterCaching; // 0x3f8

	// Functions
	SetVectorParameterValueOnMaterials 0x3fafd hash c262a3e1 params:( None ParameterName;Vector ParameterValue; );
	SetScalarParameterValueOnMaterials 0x3faeb hash 572a65c4 params:( None ParameterName;None ParameterValue; );
	PrestreamTextures 0x3f262 hash 5ab9a27c params:( None Seconds;None bPrioritizeCharacterTextures;None CinematicTextureGroups; );
	IsMaterialSlotNameValid 0x3fade hash a3317523 params:( None MaterialSlotName;None ReturnValue; );
	GetMaterialSlotNames 0x3fad3 hash a2e7196a params:( ReturnValue ReturnValue; );
	GetMaterials 0x3facc hash c2254dc7 params:( ReturnValue ReturnValue; );
	GetMaterialIndex 0x3fac3 hash c95adcac params:( None MaterialSlotName;None ReturnValue; );
};


instance 1ab5e052a40
class DataAsset public : Object
{
	// Fields
	DataAsset* NativeClass; // 0x28

};


instance 1ab5e0525c0
class SplineComponent public : PrimitiveComponent
{
	// Fields
	SplineCurves SplineCurves; // 0x3d8
	InterpCurveVector SplineInfo; // 0x440
	InterpCurveQuat SplineRotInfo; // 0x458
	InterpCurveVector SplineScaleInfo; // 0x470
	InterpCurveFloat SplineReparamTable; // 0x488
	bool bAllowSplineEditingPerInstance; // 0x4a0
	int ReparamStepsPerSegment; // 0x4a4
	float Duration; // 0x4a8
	bool bStationaryEndpoints; // 0x4ac
	bool bSplineHasBeenEdited; // 0x4ad
	bool bModifiedByConstructionScript; // 0x4ae
	bool bInputSplinePointsToConstructionScript; // 0x4af
	bool bDrawDebug; // 0x4b0
	bool bClosedLoop; // 0x4b1
	bool bLoopPositionOverride; // 0x4b2
	float LoopPosition; // 0x4b4
	Vector DefaultUpVector; // 0x4b8

	// Functions
	UpdateSpline 0x401db hash df99ed53 params:(  );
	SetWorldLocationAtSplinePoint 0x401cb hash c898417c params:( None PointIndex;Vector InLocation; );
	SetUpVectorAtSplinePoint 0x401be hash df4639f3 params:( None PointIndex;Vector InUpVector;ESplineCoordinateSpace CoordinateSpace;None bUpdateSpline; );
	SetUnselectedSplineSegmentColor 0x401ad hash f43e5b7a params:( LinearColor SegmentColor; );
	SetTangentsAtSplinePoint 0x401a0 hash 50ada13f params:( None PointIndex;Vector InArriveTangent;Vector InLeaveTangent;ESplineCoordinateSpace CoordinateSpace;None bUpdateSpline; );
	SetTangentAtSplinePoint 0x40193 hash afb469ac params:( None PointIndex;Vector InTangent;ESplineCoordinateSpace CoordinateSpace;None bUpdateSpline; );
	SetSplineWorldPoints 0x40188 hash 7fa33401 params:( Points Points; );
	SetSplinePointType 0x4017e hash cd183288 params:( None PointIndex;ESplinePointType Type;None bUpdateSpline; );
	SetSplinePoints 0x40175 hash 395f3359 params:( Points Points;ESplineCoordinateSpace CoordinateSpace;None bUpdateSpline; );
	SetSplineLocalPoints 0x4016a hash 325a8b84 params:( Points Points; );
	SetSelectedSplineSegmentColor 0x4015a hash ead83df7 params:( LinearColor SegmentColor; );
	SetLocationAtSplinePoint 0x4014d hash c99760b4 params:( None PointIndex;Vector InLocation;ESplineCoordinateSpace CoordinateSpace;None bUpdateSpline; );
	SetDrawDebug 0x40146 hash 15b49de6 params:( None bShow; );
	SetDefaultUpVector 0x4013c hash 52c8e72e params:( Vector UpVector;ESplineCoordinateSpace CoordinateSpace; );
	SetClosedLoopAtPosition 0x4012f hash 94b8454f params:( None bInClosedLoop;None Key;None bUpdateSpline; );
	SetClosedLoop 0x40127 hash 11dfd0a5 params:( None bInClosedLoop;None bUpdateSpline; );
	RemoveSplinePoint 0x4011d hash 80465bc8 params:( None Index;None bUpdateSpline; );
	IsClosedLoop 0x40116 hash 61bc3f55 params:( None ReturnValue; );
	GetWorldTangentAtDistanceAlongSpline 0x40103 hash 1047513a params:( None Distance;Vector ReturnValue; );
	GetWorldRotationAtTime 0x400f7 hash 1cfbe4a1 params:( None Time;None bUseConstantVelocity;Rotator ReturnValue; );
	GetWorldRotationAtDistanceAlongSpline 0x400e3 hash 8c744819 params:( None Distance;Rotator ReturnValue; );
	GetWorldLocationAtTime 0x400d7 hash 7951576a params:( None Time;None bUseConstantVelocity;Vector ReturnValue; );
	GetWorldLocationAtSplinePoint 0x400c7 hash bf493770 params:( None PointIndex;Vector ReturnValue; );
	GetWorldLocationAtDistanceAlongSpline 0x400b3 hash 3cc237c2 params:( None Distance;Vector ReturnValue; );
	GetWorldDirectionAtTime 0x400a6 hash 25fef552 params:( None Time;None bUseConstantVelocity;Vector ReturnValue; );
	GetWorldDirectionAtDistanceAlongSpline 0x40092 hash aa3488aa params:( None Distance;Vector ReturnValue; );
	GetVectorPropertyAtSplinePoint 0x40082 hash 93801827 params:( None Index;None PropertyName;Vector ReturnValue; );
	GetVectorPropertyAtSplineInputKey 0x40070 hash 3ecb8056 params:( None InKey;None PropertyName;Vector ReturnValue; );
	GetUpVectorAtTime 0x40066 hash 24b0df41 params:( None Time;ESplineCoordinateSpace CoordinateSpace;None bUseConstantVelocity;Vector ReturnValue; );
	GetUpVectorAtSplinePoint 0x40059 hash 2c54a767 params:( None PointIndex;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetUpVectorAtSplineInputKey 0x4004a hash 65acc796 params:( None InKey;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetUpVectorAtDistanceAlongSpline 0x40039 hash ddddaeb9 params:( None Distance;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetTransformAtTime 0x4002f hash 9323b7c5 params:( None Time;ESplineCoordinateSpace CoordinateSpace;None bUseConstantVelocity;None bUseScale;Transform ReturnValue; );
	GetTransformAtSplinePoint 0x40021 hash 416436b params:( None PointIndex;ESplineCoordinateSpace CoordinateSpace;None bUseScale;Transform ReturnValue; );
	GetTransformAtSplineInputKey 0x40012 hash 75b151a params:( None InKey;ESplineCoordinateSpace CoordinateSpace;None bUseScale;Transform ReturnValue; );
	GetTransformAtDistanceAlongSpline 0x40000 hash 8d6d0ebd params:( None Distance;ESplineCoordinateSpace CoordinateSpace;None bUseScale;Transform ReturnValue; );
	GetTangentAtTime 0x3fff5 hash e5150e9a params:( None Time;ESplineCoordinateSpace CoordinateSpace;None bUseConstantVelocity;Vector ReturnValue; );
	GetTangentAtSplinePoint 0x3ffe8 hash 4d30f8a0 params:( None PointIndex;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetTangentAtSplineInputKey 0x3ffda hash 5592ba2f params:( None InKey;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetTangentAtDistanceAlongSpline 0x3ffc9 hash 6a3028f2 params:( None Distance;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetSplinePointType 0x3ffbf hash a40e98fc params:( None PointIndex;ESplinePointType ReturnValue; );
	GetSplineLength 0x3ffb6 hash 87ff16d2 params:( None ReturnValue; );
	GetScaleAtTime 0x3ffae hash 94c8c9d1 params:( None Time;None bUseConstantVelocity;Vector ReturnValue; );
	GetScaleAtSplinePoint 0x3ffa2 hash ce290ff7 params:( None PointIndex;Vector ReturnValue; );
	GetScaleAtSplineInputKey 0x3ff95 hash e0572626 params:( None InKey;Vector ReturnValue; );
	GetScaleAtDistanceAlongSpline 0x3ff85 hash 2799a749 params:( None Distance;Vector ReturnValue; );
	GetRotationAtTime 0x3ff7b hash da151a59 params:( None Time;ESplineCoordinateSpace CoordinateSpace;None bUseConstantVelocity;Rotator ReturnValue; );
	GetRotationAtSplinePoint 0x3ff6e hash bb74777f params:( None PointIndex;ESplineCoordinateSpace CoordinateSpace;Rotator ReturnValue; );
	GetRotationAtSplineInputKey 0x3ff5f hash 687c0ae params:( None InKey;ESplineCoordinateSpace CoordinateSpace;Rotator ReturnValue; );
	GetRotationAtDistanceAlongSpline 0x3ff4e hash 237816d1 params:( None Distance;ESplineCoordinateSpace CoordinateSpace;Rotator ReturnValue; );
	GetRollAtTime 0x3ff46 hash c10e2542 params:( None Time;ESplineCoordinateSpace CoordinateSpace;None bUseConstantVelocity;None ReturnValue; );
	GetRollAtSplinePoint 0x3ff3b hash 8a890248 params:( None PointIndex;ESplineCoordinateSpace CoordinateSpace;None ReturnValue; );
	GetRollAtSplineInputKey 0x3ff2e hash b93642d7 params:( None InKey;ESplineCoordinateSpace CoordinateSpace;None ReturnValue; );
	GetRollAtDistanceAlongSpline 0x3ff1f hash 512b5a9a params:( None Distance;ESplineCoordinateSpace CoordinateSpace;None ReturnValue; );
	GetRightVectorAtTime 0x3ff14 hash 7323cc5a params:( None Time;ESplineCoordinateSpace CoordinateSpace;None bUseConstantVelocity;Vector ReturnValue; );
	GetRightVectorAtSplinePoint 0x3ff05 hash 8b08be60 params:( None PointIndex;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetRightVectorAtSplineInputKey 0x3fef5 hash c479a7ef params:( None InKey;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetRightVectorAtDistanceAlongSpline 0x3fee2 hash af51aeb2 params:( None Distance;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetNumberOfSplineSegments 0x3fed4 hash 86da4554 params:( None ReturnValue; );
	GetNumberOfSplinePoints 0x3fec7 hash 16c070cb params:( None ReturnValue; );
	GetLocationAtTime 0x3febd hash 366a8d22 params:( None Time;ESplineCoordinateSpace CoordinateSpace;None bUseConstantVelocity;Vector ReturnValue; );
	GetLocationAtSplinePoint 0x3feb0 hash 16a5ce28 params:( None PointIndex;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetLocationAtSplineInputKey 0x3fea1 hash 8f9e02b7 params:( None InKey;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetLocationAtDistanceAlongSpline 0x3fe90 hash d3c6067a params:( None Distance;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetLocationAndTangentAtSplinePoint 0x3fe7e hash ed88ccec params:( None PointIndex;Vector Location;Vector Tangent;ESplineCoordinateSpace CoordinateSpace; );
	GetLocalLocationAndTangentAtSplinePoint 0x3fe69 hash 6e8f5117 params:( None PointIndex;Vector LocalLocation;Vector LocalTangent; );
	GetLeaveTangentAtSplinePoint 0x3fe5a hash c4f67d0d params:( None PointIndex;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetInputKeyAtDistanceAlongSpline 0x3fe49 hash 56a5847a params:( None Distance;None ReturnValue; );
	GetFloatPropertyAtSplinePoint 0x3fe39 hash 32e0c20a params:( None Index;None PropertyName;None ReturnValue; );
	GetFloatPropertyAtSplineInputKey 0x3fe28 hash 7f540359 params:( None InKey;None PropertyName;None ReturnValue; );
	GetDistanceAlongSplineAtSplinePoint 0x3fe15 hash b245376 params:( None PointIndex;None ReturnValue; );
	GetDirectionAtTime 0x3fe0b hash 863ee20a params:( None Time;ESplineCoordinateSpace CoordinateSpace;None bUseConstantVelocity;Vector ReturnValue; );
	GetDirectionAtSplinePoint 0x3fdfd hash 857c8e10 params:( None PointIndex;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetDirectionAtSplineInputKey 0x3fdee hash ffef999f params:( None InKey;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetDirectionAtDistanceAlongSpline 0x3fddc hash 21b22e62 params:( None Distance;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetDefaultUpVector 0x3fdd2 hash 29bf4da2 params:( ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	GetArriveTangentAtSplinePoint 0x3fdc2 hash 9ff58aa9 params:( None PointIndex;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	FindUpVectorClosestToWorldLocation 0x3fdb0 hash 43fa031f params:( Vector WorldLocation;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	FindTransformClosestToWorldLocation 0x3fd9d hash 59f277c3 params:( Vector WorldLocation;ESplineCoordinateSpace CoordinateSpace;None bUseScale;Transform ReturnValue; );
	FindTangentClosestToWorldLocation 0x3fd8b hash 980b458 params:( Vector WorldLocation;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	FindScaleClosestToWorldLocation 0x3fd7a hash e757e94f params:( Vector WorldLocation;Vector ReturnValue; );
	FindRotationClosestToWorldLocation 0x3fd68 hash 3ce16e37 params:( Vector WorldLocation;ESplineCoordinateSpace CoordinateSpace;Rotator ReturnValue; );
	FindRollClosestToWorldLocation 0x3fd58 hash 454802a0 params:( Vector WorldLocation;ESplineCoordinateSpace CoordinateSpace;None ReturnValue; );
	FindRightVectorClosestToWorldLocation 0x3fd44 hash 449d4a98 params:( Vector WorldLocation;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	FindLocationClosestToWorldLocation 0x3fd32 hash f6ed5300 params:( Vector WorldLocation;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	FindInputKeyClosestToWorldLocation 0x3fd20 hash d5bc9100 params:( Vector WorldLocation;None ReturnValue; );
	FindDirectionClosestToWorldLocation 0x3fd0d hash 76db8c08 params:( Vector WorldLocation;ESplineCoordinateSpace CoordinateSpace;Vector ReturnValue; );
	ClearSplinePoints 0x3fd03 hash 9c2e3fd4 params:( None bUpdateSpline; );
	AddSplineWorldPoint 0x3fcf8 hash 9014870b params:( Vector Position; );
	AddSplinePointAtIndex 0x3fcec hash a01ef330 params:( Vector Position;None Index;ESplineCoordinateSpace CoordinateSpace;None bUpdateSpline; );
	AddSplinePoint 0x3fce4 hash 4a188143 params:( Vector Position;ESplineCoordinateSpace CoordinateSpace;None bUpdateSpline; );
	AddSplineLocalPoint 0x3fcd9 hash 4fad7a2e params:( Vector Position; );
	AddPoints 0x3fcd3 hash a3dce88b params:( Points Points;None bUpdateSpline; );
	AddPoint 0x3fcce hash 79544518 params:( SplinePoint Point;None bUpdateSpline; );
};


instance 1ab5e051180
class SkinnedMeshComponent public : MeshComponent
{
	// Fields
	SkeletalMesh* SkeletalMesh; // 0x400
	WeakObjectProperty MasterPoseComponent; // 0x408 property 0x1ab718a8800 hash 0x24388009
	PhysicsAsset* PhysicsAssetOverride; // 0x508
	int ForcedLodModel; // 0x510
	int MinLodModel; // 0x514
	float StreamingDistanceMultiplier; // 0x520
	TArray LODInfo; // 0x530
	EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x564
	bool bOverrideMinLod; // 0x566
	bool bUseBoundsFromMasterPoseComponent; // 0x566
	bool bForceWireframe; // 0x566
	bool bDisplayBones; // 0x566
	bool bDisableMorphTarget; // 0x566
	bool bHideSkin; // 0x566
	bool bPerBoneMotionBlur; // 0x567
	bool bComponentUseFixedSkelBounds; // 0x567
	bool bConsiderAllBodiesForBounds; // 0x567
	bool bSyncAttachParentLOD; // 0x567
	bool bCanHighlightSelectedSections; // 0x567
	bool bRecentlyRendered; // 0x567
	bool bCastCapsuleDirectShadow; // 0x567
	bool bCastCapsuleIndirectShadow; // 0x567
	bool bCPUSkinning; // 0x568
	bool bEnableUpdateRateOptimizations; // 0x568
	bool bDisplayDebugUpdateRateOptimizations; // 0x568
	bool bRenderStatic; // 0x568
	bool bIgnoreMasterPoseComponentLOD; // 0x568
	bool bCachedLocalBoundsUpToDate; // 0x568
	bool bForceMeshObjectUpdate; // 0x569
	float CapsuleIndirectShadowMinVisibility; // 0x56c
	BoxSphereBounds CachedWorldSpaceBounds; // 0x590
	Matrix CachedWorldToLocalTransform; // 0x5b0

	// Functions
	UnloadSkinWeightProfile 0x4049e hash ececeb56 params:( None InProfileName; );
	UnHideBoneByName 0x40495 hash fb31ad42 params:( None BoneName; );
	TransformToBoneSpace 0x4048a hash 1fe8fdb4 params:( None BoneName;Vector InPosition;Rotator InRotation;Vector OutPosition;Rotator OutRotation; );
	TransformFromBoneSpace 0x4047e hash 9bf1dc05 params:( None BoneName;Vector InPosition;Rotator InRotation;Vector OutPosition;Rotator OutRotation; );
	ShowMaterialSection 0x40473 hash 35f8f54a params:( None MaterialID;None SectionIndex;None bShow;None LODIndex; );
	ShowAllMaterialSections 0x40466 hash cf392a16 params:( None LODIndex; );
	SetVertexColorOverride_LinearColor 0x40454 hash 29028907 params:( None LODIndex;VertexColors VertexColors; );
	SetSkinWeightProfile 0x40449 hash c09dd03f params:( None InProfileName;None ReturnValue; );
	SetSkinWeightOverride 0x4043d hash 58968ee params:( None LODIndex;SkinWeights SkinWeights; );
	SetSkeletalMesh 0x40434 hash 3b75ffb3 params:( SkeletalMesh NewMesh;None bReinitPose; );
	SetRenderStatic 0x4042b hash b0d13cb9 params:( None bNewValue; );
	SetPhysicsAsset 0x40422 hash 54314df4 params:( PhysicsAsset NewPhysicsAsset;None bForceReInit; );
	SetMinLOD 0x4041c hash 891896f4 params:( None InNewMinLOD; );
	SetMasterPoseComponent 0x40410 hash f7a9a807 params:( SkinnedMeshComponent NewMasterBoneComponent;None bForceUpdate; );
	SetForcedLOD 0x40409 hash 2a331723 params:( None InNewForcedLOD; );
	SetCastCapsuleIndirectShadow 0x403fa hash 62e76f01 params:( None bNewValue; );
	SetCastCapsuleDirectShadow 0x403ec hash ab47e84a params:( None bNewValue; );
	SetCapsuleIndirectShadowMinVisibility 0x403d8 hash 8f0796e2 params:( None NewValue; );
	IsUsingSkinWeightProfile 0x403cb hash 8eb769f5 params:( None ReturnValue; );
	IsMaterialSectionShown 0x403bf hash 2218e834 params:( None MaterialID;None LODIndex;None ReturnValue; );
	IsBoneHiddenByName 0x403b5 hash 6afe7aed params:( None BoneName;None ReturnValue; );
	HideBoneByName 0x403ad hash 13756b5f params:( None BoneName;EPhysBodyOp PhysBodyOption; );
	GetTwistAndSwingAngleOfDeltaRotationFromRefPose 0x40394 hash 128cbff9 params:( None BoneName;None OutTwistAngle;None OutSwingAngle;None ReturnValue; );
	GetSocketBoneName 0x4038a hash fcd2a8d3 params:( None InSocketName;None ReturnValue; );
	GetRefPosePosition 0x40380 hash 5a04eece params:( None BoneIndex;Vector ReturnValue; );
	GetParentBone 0x40378 hash 31cc8813 params:( None BoneName;None ReturnValue; );
	GetNumLODs 0x40372 hash e492b427 params:( None ReturnValue; );
	GetNumBones 0x4036b hash 7646816c params:( None ReturnValue; );
	GetForcedLOD 0x40364 hash decab697 params:( None ReturnValue; );
	GetDeltaTransformFromRefPose 0x40355 hash aa3b61b3 params:( None BoneName;None BaseName;Transform ReturnValue; );
	GetCurrentSkinWeightProfileName 0x40344 hash 9a1b8f17 params:( None ReturnValue; );
	GetBoneName 0x4033d hash 9a0f4dca params:( None BoneIndex;None ReturnValue; );
	GetBoneIndex 0x40336 hash dba587a1 params:( None BoneName;None ReturnValue; );
	FindClosestBone_K2 0x4032c hash b837cd43 params:( Vector TestLocation;Vector BoneLocation;None IgnoreScale;None bRequirePhysicsAsset;None ReturnValue; );
	ClearVertexColorOverride 0x4031f hash 86e96149 params:( None LODIndex; );
	ClearSkinWeightProfile 0x40313 hash 599ee19a params:(  );
	ClearSkinWeightOverride 0x40306 hash beaca5a9 params:( None LODIndex; );
	BoneIsChildOf 0x402fe hash 7bd0a57e params:( None BoneName;None ParentBoneName;None ReturnValue; );
};


instance 1ab5e0513c0
class SkeletalMeshComponent public : SkinnedMeshComponent
{
	// Fields
	Object* AnimBlueprintGeneratedClass; // 0x610
	AnimInstance* AnimClass; // 0x618
	AnimInstance* AnimScriptInstance; // 0x620
	AnimInstance* PostProcessAnimInstance; // 0x628
	SingleAnimationPlayData AnimationData; // 0x630
	Vector RootBoneTranslation; // 0x658
	Vector LineCheckBoundsScale; // 0x664
	TArray LinkedInstances; // 0x690
	TArray CachedBoneSpaceTransforms; // 0x6a0
	TArray CachedComponentSpaceTransforms; // 0x6b0
	float GlobalAnimRateScale; // 0x6e0
	BYTE KinematicBonesUpdateType; // 0x6e4
	BYTE PhysicsTransformUpdateMode; // 0x6e5
	BYTE AnimationMode; // 0x6e7
	bool bDisablePostProcessBlueprint; // 0x6e9
	bool bUpdateOverlapsOnAnimationFinalize; // 0x6e9
	bool bHasValidBodies; // 0x6e9
	bool bBlendPhysics; // 0x6e9
	bool bEnablePhysicsOnDedicatedServer; // 0x6e9
	bool bUpdateJointsFromAnimation; // 0x6ea
	bool bDisableClothSimulation; // 0x6ea
	bool bAllowAnimCurveEvaluation; // 0x6ea
	bool bDisableAnimCurves; // 0x6ea
	bool bCollideWithEnvironment; // 0x6ea
	bool bCollideWithAttachedChildren; // 0x6eb
	bool bLocalSpaceSimulation; // 0x6eb
	bool bResetAfterTeleport; // 0x6eb
	bool bDeferKinematicBoneUpdate; // 0x6eb
	bool bNoSkeletonUpdate; // 0x6eb
	bool bPauseAnims; // 0x6eb
	bool bUseRefPoseOnInitAnim; // 0x6eb
	bool bEnablePerPolyCollision; // 0x6ec
	bool bForceRefpose; // 0x6ec
	bool bOnlyAllowAutonomousTickPose; // 0x6ec
	bool bIsAutonomousTickPose; // 0x6ec
	bool bOldForceRefPose; // 0x6ec
	bool bShowPrePhysBones; // 0x6ec
	bool bRequiredBonesUpToDate; // 0x6ec
	bool bAnimTreeInitialised; // 0x6ec
	bool bIncludeComponentLocationIntoBounds; // 0x6ed
	bool bEnableLineCheckWithBounds; // 0x6ed
	bool bUseBendingElements; // 0x6ed
	bool bUseTetrahedralConstraints; // 0x6ed
	bool bUseThinShellVolumeConstraints; // 0x6ed
	bool bUseSelfCollisions; // 0x6ed
	bool bUseContinuousCollisionDetection; // 0x6ed
	bool bPropagateCurvesToSlaves; // 0x6ed
	bool bSkipKinematicUpdateWhenInterpolating; // 0x6ee
	bool bSkipBoundsUpdateWhenInterpolating; // 0x6ee
	bool bNeedsQueuedAnimEventsDispatched; // 0x6ee
	USHORT CachedAnimCurveUidVersion; // 0x6f0
	EClothMassMode MassMode; // 0x6f2
	float UniformMass; // 0x6f4
	float TotalMass; // 0x6f8
	float Density; // 0x6fc
	float MinPerParticleMass; // 0x700
	float ClothBlendWeight; // 0x704
	float EdgeStiffness; // 0x708
	float BendingStiffness; // 0x70c
	float AreaStiffness; // 0x710
	float VolumeStiffness; // 0x714
	float StrainLimitingStiffness; // 0x718
	float ShapeTargetStiffness; // 0x71c
	TArray DisallowedAnimCurves; // 0x720
	BodySetup* BodySetup; // 0x730
	MulticastInlineDelegateProperty OnConstraintBroken; // 0x740 property 0x1ab718ac000 hash 0xb7a5ed1a
	ClothingSimulationFactory* ClothingSimulationFactory; // 0x750
	float TeleportDistanceThreshold; // 0x828
	float TeleportRotationThreshold; // 0x82c
	int LastPoseTickFrame; // 0x838
	ClothingSimulationInteractor* ClothingInteractor; // 0x890
	MulticastInlineDelegateProperty OnAnimInitialized; // 0x960 property 0x1ab718ac180 hash 0xb7a5ed1a

	// Functions
	UnlinkAnimClassLayers 0x408ae hash f646f8e1 params:( Class InClass; );
	UnbindClothFromMasterPoseComponent 0x4089c hash 1ab61669 params:( None bRestoreSimulationSpace; );
	ToggleDisablePostProcessBlueprint 0x4088a hash ac47d2b5 params:(  );
	TermBodiesBelow 0x40881 hash b6d3d2ec params:( None ParentBoneName; );
	SuspendClothingSimulation 0x40873 hash c0a88e64 params:(  );
	Stop 0x3e2ef hash 7c8c8f2b params:(  );
	SnapshotPose 0x4086c hash 765b284c params:( PoseSnapshot Snapshot; );
	SetUpdateAnimationInEditor 0x4085e hash 9269e932 params:( None NewUpdateState; );
	SetTeleportRotationThreshold 0x4084f hash 16b31afd params:( None Threshold; );
	SetTeleportDistanceThreshold 0x40840 hash 340239f8 params:( None Threshold; );
	SetPosition 0x40839 hash d2089706 params:( None InPos;None bFireNotifies; );
	SetPlayRate 0x3fbb7 hash c22bc733 params:( None Rate; );
	SetPhysicsBlendWeight 0x4082d hash f2fa0581 params:( None PhysicsBlendWeight; );
	SetNotifyRigidBodyCollisionBelow 0x4081c hash 447ca76c params:( None bNewNotifyRigidBodyCollision;None BoneName;None bIncludeSelf; );
	SetMorphTarget 0x40814 hash eb62327e params:( None MorphTargetName;None Value;None bRemoveZeroWeight; );
	SetEnablePhysicsBlending 0x40807 hash 6874549e params:( None bNewBlendPhysics; );
	SetEnableGravityOnAllBodiesBelow 0x407f6 hash f86b4463 params:( None bEnableGravity;None BoneName;None bIncludeSelf; );
	SetEnableBodyGravity 0x407eb hash 63ac29ac params:( None bEnableGravity;None BoneName; );
	SetDisablePostProcessBlueprint 0x407db hash 917378df params:( None bInDisablePostProcess; );
	SetDisableAnimCurves 0x407d0 hash 5bef83c2 params:( None bInDisableAnimCurves; );
	SetConstraintProfileForAll 0x407c2 hash 3f314fa7 params:( None ProfileName;None bDefaultIfNotFound; );
	SetConstraintProfile 0x407b7 hash 2eb47c67 params:( None JointName;None ProfileName;None bDefaultIfNotFound; );
	SetClothMaxDistanceScale 0x407aa hash 88ea2744 params:( None Scale; );
	SetBodyNotifyRigidBodyCollision 0x40799 hash 40576ee1 params:( None bNewNotifyRigidBodyCollision;None BoneName; );
	SetAnimClass 0x40792 hash 57a800cc params:( Class NewClass; );
	SetAnimationMode 0x40789 hash 61065396 params:( EAnimationMode InAnimationMode; );
	SetAnimation 0x40782 hash 59cb6471 params:( AnimationAsset NewAnimToPlay; );
	SetAngularLimits 0x40779 hash 51f60f6d params:( None InBoneName;None Swing1LimitAngle;None TwistLimitAngle;None Swing2LimitAngle; );
	SetAllowedAnimCurvesEvaluation 0x40769 hash 9a2b70ee params:( List List;None bAllow; );
	SetAllowAnimCurveEvaluation 0x4075a hash 8039a592 params:( None bInAllow; );
	SetAllMotorsAngularVelocityDrive 0x40749 hash c36ad821 params:( None bEnableSwingDrive;None bEnableTwistDrive;None bSkipCustomPhysicsType; );
	SetAllMotorsAngularPositionDrive 0x40738 hash 7fb36547 params:( None bEnableSwingDrive;None bEnableTwistDrive;None bSkipCustomPhysicsType; );
	SetAllMotorsAngularDriveParams 0x40728 hash 85976296 params:( None InSpring;None InDamping;None InForceLimit;None bSkipCustomPhysicsType; );
	SetAllBodiesSimulatePhysics 0x40719 hash 6b61bfc7 params:( None bNewSimulate; );
	SetAllBodiesPhysicsBlendWeight 0x40709 hash d472d770 params:( None PhysicsBlendWeight;None bSkipCustomPhysicsType; );
	SetAllBodiesBelowSimulatePhysics 0x406f8 hash a38f1060 params:( None InBoneName;None bNewSimulate;None bIncludeSelf; );
	SetAllBodiesBelowPhysicsBlendWeight 0x406e5 hash e5b20d69 params:( None InBoneName;None PhysicsBlendWeight;None bSkipCustomPhysicsType;None bIncludeSelf; );
	ResumeClothingSimulation 0x406d8 hash 9c5cf4f3 params:(  );
	ResetClothTeleportMode 0x406cc hash 1e1c156 params:(  );
	ResetAnimInstanceDynamics 0x406be hash 334c99da params:( UnderlyingType InTeleportType; );
	ResetAllowedAnimCurveEvaluation 0x406ad hash 5e95412 params:(  );
	ResetAllBodiesSimulatePhysics 0x4069d hash 3285e5be params:(  );
	PlayAnimation 0x40695 hash 25d0c7b params:( AnimationAsset NewAnimToPlay;None bLooping; );
	Play 0x3fb72 hash 7c8ac63b params:( None bLooping; );
	OverrideAnimationData 0x40689 hash 4155a63f params:( AnimationAsset InAnimToPlay;None bIsLooping;None bIsPlaying;None Position;None PlayRate; );
	LinkAnimGraphByTag 0x4067f hash f102eea1 params:( None InTag;Class InClass; );
	LinkAnimClassLayers 0x40674 hash cea48fe params:( Class InClass; );
	K2_GetClosestPointOnPhysicsAsset 0x40663 hash e43835e8 params:( Vector WorldPosition;Vector ClosestWorldPosition;Vector Normal;None BoneName;None Distance;None ReturnValue; );
	IsPlaying 0x3e2d2 hash 5c6af535 params:( None ReturnValue; );
	IsClothingSimulationSuspended 0x40653 hash 6886df49 params:( None ReturnValue; );
	IsBodyGravityEnabled 0x40648 hash fdd04ba0 params:( None BoneName;None ReturnValue; );
	HasValidAnimationInstance 0x4063a hash 6c70ebe6 params:( None ReturnValue; );
	GetTeleportRotationThreshold 0x4062b hash f7632271 params:( None ReturnValue; );
	GetTeleportDistanceThreshold 0x4061c hash 14b2416c params:( None ReturnValue; );
	GetSkeletalCenterOfMass 0x4060f hash 9ab49f24 params:( Vector ReturnValue; );
	GetPostProcessInstance 0x40603 hash a2f7d05f params:( AnimInstance ReturnValue; );
	GetPosition 0x405fc hash 91b017fa params:( None ReturnValue; );
	GetPlayRate 0x3fb53 hash 81d34827 params:( None ReturnValue; );
	GetMorphTarget 0x405f4 hash 245f7ef2 params:( None MorphTargetName;None ReturnValue; );
	GetLinkedAnimLayerInstanceByGroup 0x405e2 hash 181a885b params:( None InGroup;AnimInstance ReturnValue; );
	GetLinkedAnimLayerInstanceByClass 0x405d0 hash 17cea044 params:( Class InClass;AnimInstance ReturnValue; );
	GetLinkedAnimGraphInstancesByTag 0x405bf hash ce6d8f12 params:( None InTag;OutLinkedInstances OutLinkedInstances; );
	GetLinkedAnimGraphInstanceByTag 0x405ae hash 40f7c1bf params:( None InTag;AnimInstance ReturnValue; );
	GetDisablePostProcessBlueprint 0x4059e hash 5e432d53 params:( None ReturnValue; );
	GetDisableAnimCurves 0x40593 hash ca195736 params:( None ReturnValue; );
	GetCurrentJointAngles 0x40587 hash de86b6a6 params:( None InBoneName;None Swing1Angle;None TwistAngle;None Swing2Angle; );
	GetClothMaxDistanceScale 0x4057a hash d5f894b8 params:( None ReturnValue; );
	GetClothingSimulationInteractor 0x40569 hash e64ecddd params:( ClothingSimulationInteractor ReturnValue; );
	GetBoneMass 0x40562 hash 9a0ec23d params:( None BoneName;None bScaleMass;None ReturnValue; );
	GetAnimInstance 0x40559 hash bd45251f params:( AnimInstance ReturnValue; );
	GetAnimClass 0x40552 hash c3fa040 params:( Class ReturnValue; );
	GetAnimationMode 0x40549 hash ce888d0a params:( EAnimationMode ReturnValue; );
	GetAllowedAnimCurveEvaluate 0x4053a hash adecaf0e params:( None ReturnValue; );
	ForceClothNextUpdateTeleportAndReset 0x40527 hash f7ca24b5 params:(  );
	ForceClothNextUpdateTeleport 0x40518 hash 26bdc7f params:(  );
	FindConstraintBoneName 0x4050c hash 91cee310 params:( None ConstraintIndex;None ReturnValue; );
	ClearMorphTargets 0x40502 hash ba778f2c params:(  );
	BreakConstraint 0x404f9 hash 6ee61a8f params:( Vector Impulse;Vector HitLocation;None InBoneName; );
	BindClothToMasterPoseComponent 0x404e9 hash 5c2c9b55 params:(  );
	AllowAnimCurveEvaluation 0x404dc hash 9e8a9526 params:( None NameOfCurve;None bAllow; );
	AddImpulseToAllBodiesBelow 0x404ce hash 78808a98 params:( Vector Impulse;None BoneName;None bVelChange;None bIncludeSelf; );
	AddForceToAllBodiesBelow 0x404c1 hash 4c917f88 params:( Vector Force;None BoneName;None bAccelChange;None bIncludeSelf; );
	AccumulateAllBodiesBelowPhysicsBlendWeight 0x404ab hash 708b3a1 params:( None InBoneName;None AddPhysicsBlendWeight;None bSkipCustomPhysicsType; );
};


instance 1ab5e050f40
class AnimInstance public : Object
{
	// Fields
	Skeleton* CurrentSkeleton; // 0x28
	BYTE RootMotionMode; // 0x30
	bool bUseMultiThreadedAnimationUpdate; // 0x31
	bool bUsingCopyPoseFromMesh; // 0x31
	bool bQueueMontageEvents; // 0x31
	MulticastInlineDelegateProperty OnMontageBlendingOut; // 0x38 property 0x1ab7180a580 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnMontageStarted; // 0x48 property 0x1ab7180a600 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnMontageEnded; // 0x58 property 0x1ab7180a680 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAllMontageInstancesEnded; // 0x68 property 0x1ab7180a700 hash 0xb7a5ed1a
	AnimNotifyQueue NotifyQueue; // 0x100
	TArray ActiveAnimNotifyState; // 0x170

	// Functions
	UnlockAIResources 0x40b51 hash 5c1b9796 params:( None bUnlockMovement;None UnlockAILogic; );
	UnlinkAnimClassLayers 0x408ae hash f646f8e1 params:( Class InClass; );
	TryGetPawnOwner 0x40b48 hash d38de7a5 params:( Pawn ReturnValue; );
	StopSlotAnimation 0x40b3e hash e6284cd params:( None InBlendOutTime;None SlotNodeName; );
	SnapshotPose 0x4086c hash 765b284c params:( PoseSnapshot Snapshot; );
	SetRootMotionMode 0x40b34 hash 51fdd190 params:( ERootMotionMode Value; );
	SetMorphTarget 0x40814 hash eb62327e params:( None MorphTargetName;None Value; );
	SavePoseSnapshot 0x40b2b hash ad964ffb params:( None SnapshotName; );
	ResetDynamics 0x40b23 hash 9e17aca0 params:( UnderlyingType InTeleportType; );
	PlaySlotAnimationAsDynamicMontage 0x40b11 hash abe27ec1 params:( AnimSequenceBase Asset;None SlotNodeName;None BlendInTime;None BlendOutTime;None InPlayRate;None LoopCount;None BlendOutTriggerTime;None InTimeToStartMontageAt;AnimMontage ReturnValue; );
	PlaySlotAnimation 0x40b07 hash 1b85b5dd params:( AnimSequenceBase Asset;None SlotNodeName;None BlendInTime;None BlendOutTime;None InPlayRate;None LoopCount;None ReturnValue; );
	Montage_Stop 0x40b00 hash da15bc75 params:( None InBlendOutTime;AnimMontage Montage; );
	Montage_SetPosition 0x40af5 hash 58e4ad10 params:( AnimMontage Montage;None NewPosition; );
	Montage_SetPlayRate 0x40aea hash 4907dd3d params:( AnimMontage Montage;None NewPlayRate; );
	Montage_SetNextSection 0x40ade hash ff122f params:( None SectionNameToChange;None NextSection;AnimMontage Montage; );
	Montage_Resume 0x40ad6 hash b3146ac0 params:( AnimMontage Montage; );
	Montage_Play 0x40acf hash da13f385 params:( AnimMontage MontageToPlay;None InPlayRate;UnderlyingType ReturnValueType;None InTimeToStartMontageAt;None bStopAllMontages;None ReturnValue; );
	Montage_Pause 0x40ac7 hash 1c8cb0ad params:( AnimMontage Montage; );
	Montage_JumpToSectionsEnd 0x40ab9 hash 805809cd params:( None SectionName;AnimMontage Montage; );
	Montage_JumpToSection 0x40aad hash 8a5c2ca3 params:( None SectionName;AnimMontage Montage; );
	Montage_IsPlaying 0x40aa3 hash 3c5600bf params:( AnimMontage Montage;None ReturnValue; );
	Montage_IsActive 0x40a9a hash 3b554027 params:( AnimMontage Montage;None ReturnValue; );
	Montage_GetPosition 0x40a8f hash 188c2e04 params:( AnimMontage Montage;None ReturnValue; );
	Montage_GetPlayRate 0x40a84 hash 8af5e31 params:( AnimMontage Montage;None ReturnValue; );
	Montage_GetIsStopped 0x40a79 hash 25bcb16a params:( AnimMontage Montage;None ReturnValue; );
	Montage_GetCurrentSection 0x40a6b hash 51344da7 params:( AnimMontage Montage;None ReturnValue; );
	Montage_GetBlendTime 0x40a60 hash db4b9523 params:( AnimMontage Montage;None ReturnValue; );
	LockAIResources 0x40a57 hash 13e96133 params:( None bLockMovement;None LockAILogic; );
	LinkAnimGraphByTag 0x4067f hash f102eea1 params:( None InTag;Class InClass; );
	LinkAnimClassLayers 0x40674 hash cea48fe params:( Class InClass; );
	IsSyncGroupBetweenMarkers 0x40a49 hash 56f9f48a params:( None InSyncGroupName;None PreviousMarker;None NextMarker;None bRespectMarkerOrder;None ReturnValue; );
	IsPlayingSlotAnimation 0x40a3d hash 2e78eb17 params:( AnimSequenceBase Asset;None SlotNodeName;None ReturnValue; );
	IsAnyMontagePlaying 0x40a32 hash ab1b9ac8 params:( None ReturnValue; );
	HasMarkerBeenHitThisFrame 0x40a24 hash df9a3c5 params:( None SyncGroup;None MarkerName;None ReturnValue; );
	GetTimeToClosestMarker 0x40a18 hash a6c27536 params:( None SyncGroup;None MarkerName;None OutMarkerTime;None ReturnValue; );
	GetSyncGroupPosition 0x40a0d hash 1c5ced24 params:( None InSyncGroupName;MarkerSyncAnimPosition ReturnValue; );
	GetRelevantAnimTimeRemainingFraction 0x409fa hash 67d9616a params:( None MachineIndex;None StateIndex;None ReturnValue; );
	GetRelevantAnimTimeRemaining 0x409eb hash 3a9461b4 params:( None MachineIndex;None StateIndex;None ReturnValue; );
	GetRelevantAnimTimeFraction 0x409dc hash 7d824410 params:( None MachineIndex;None StateIndex;None ReturnValue; );
	GetRelevantAnimTime 0x409d1 hash 7affe5a params:( None MachineIndex;None StateIndex;None ReturnValue; );
	GetRelevantAnimLength 0x409c5 hash a0b7fa0d params:( None MachineIndex;None StateIndex;None ReturnValue; );
	GetOwningComponent 0x409bb hash aa7aa3ea params:( SkeletalMeshComponent ReturnValue; );
	GetOwningActor 0x409b3 hash ff933b90 params:( Actor ReturnValue; );
	GetLinkedAnimLayerInstanceByGroup 0x405e2 hash 181a885b params:( None InGroup;AnimInstance ReturnValue; );
	GetLinkedAnimLayerInstanceByClass 0x405d0 hash 17cea044 params:( Class InClass;AnimInstance ReturnValue; );
	GetLinkedAnimGraphInstancesByTag 0x405bf hash ce6d8f12 params:( None InTag;OutLinkedInstances OutLinkedInstances; );
	GetLinkedAnimGraphInstanceByTag 0x405ae hash 40f7c1bf params:( None InTag;AnimInstance ReturnValue; );
	GetInstanceTransitionTimeElapsedFraction 0x4099e hash 6bedc828 params:( None MachineIndex;None TransitionIndex;None ReturnValue; );
	GetInstanceTransitionTimeElapsed 0x4098d hash fe44ea72 params:( None MachineIndex;None TransitionIndex;None ReturnValue; );
	GetInstanceTransitionCrossfadeDuration 0x40979 hash 1cf0b825 params:( None MachineIndex;None TransitionIndex;None ReturnValue; );
	GetInstanceStateWeight 0x4096d hash 9dc572c3 params:( None MachineIndex;None StateIndex;None ReturnValue; );
	GetInstanceMachineWeight 0x40960 hash 6298e017 params:( None MachineIndex;None ReturnValue; );
	GetInstanceCurrentStateElapsedTime 0x4094e hash 898201cb params:( None MachineIndex;None ReturnValue; );
	GetInstanceAssetPlayerTimeFromEndFraction 0x40938 hash ce6365b7 params:( None AssetPlayerIndex;None ReturnValue; );
	GetInstanceAssetPlayerTimeFromEnd 0x40926 hash fb996901 params:( None AssetPlayerIndex;None ReturnValue; );
	GetInstanceAssetPlayerTimeFraction 0x40914 hash 4d830dac params:( None AssetPlayerIndex;None ReturnValue; );
	GetInstanceAssetPlayerTime 0x40906 hash f93eebf6 params:( None AssetPlayerIndex;None ReturnValue; );
	GetInstanceAssetPlayerLength 0x408f7 hash 31b8bea9 params:( None AssetPlayerIndex;None ReturnValue; );
	GetCurveValue 0x25e95 hash 1c8dad67 params:( None CurveName;None ReturnValue; );
	GetCurrentStateName 0x408ec hash cb9c2faa params:( None MachineIndex;None ReturnValue; );
	GetCurrentActiveMontage 0x408df hash 74e4a3cf params:( AnimMontage ReturnValue; );
	GetAllCurveNames 0x408d6 hash 635aab97 params:( OutNames OutNames; );
	GetActiveCurveNames 0x408cb hash 7a2db35a params:( UnderlyingType CurveType;OutNames OutNames; );
	ClearMorphTargets 0x40502 hash ba778f2c params:(  );
	CalculateDirection 0x408c1 hash d339bd54 params:( Vector Velocity;Rotator BaseRotation;None ReturnValue; );
	BlueprintUpdateAnimation 0x22d65 hash 4e5b943d params:( None DeltaTimeX; );
	BlueprintPostEvaluateAnimation 0x22d55 hash 576f2257 params:(  );
	BlueprintInitializeAnimation 0x22d46 hash 29a8f98c params:(  );
	BlueprintBeginPlay 0x22d3c hash 623af295 params:(  );
};


instance 1ab5e058d40
class AudioComponent public : SceneComponent
{
	// Fields
	SoundBase* Sound; // 0x1f0
	TArray InstanceParameters; // 0x1f8
	SoundClass* SoundClassOverride; // 0x208
	bool bAutoDestroy; // 0x210
	bool bStopWhenOwnerDestroyed; // 0x210
	bool bShouldRemainActiveIfDropped; // 0x210
	bool bAllowSpatialization; // 0x210
	bool bOverrideAttenuation; // 0x210
	bool bOverrideSubtitlePriority; // 0x210
	bool bIsUISound; // 0x210
	bool bEnableLowPassFilter; // 0x210
	bool bOverridePriority; // 0x211
	bool bSuppressSubtitles; // 0x211
	bool bAutoManageAttachment; // 0x212
	FName AudioComponentUserID; // 0x218
	float PitchModulationMin; // 0x220
	float PitchModulationMax; // 0x224
	float VolumeModulationMin; // 0x228
	float VolumeModulationMax; // 0x22c
	float VolumeMultiplier; // 0x230
	int EnvelopeFollowerAttackTime; // 0x234
	int EnvelopeFollowerReleaseTime; // 0x238
	float Priority; // 0x23c
	float SubtitlePriority; // 0x240
	SoundEffectSourcePresetChain* SourceEffectChain; // 0x248
	float PitchMultiplier; // 0x250
	float LowPassFilterFrequency; // 0x254
	SoundAttenuation* AttenuationSettings; // 0x260
	SoundAttenuationSettings AttenuationOverrides; // 0x268
	SoundConcurrency* ConcurrencySettings; // 0x558
	SetProperty ConcurrencySet; // 0x560 property 0x1ab71165e20 hash 0xb0194396
	EAttachmentRule AutoAttachLocationRule; // 0x5bc
	EAttachmentRule AutoAttachRotationRule; // 0x5bd
	EAttachmentRule AutoAttachScaleRule; // 0x5be
	MulticastInlineDelegateProperty OnAudioFinished; // 0x5c0 property 0x1ab7180dc00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAudioPlaybackPercent; // 0x5e8 property 0x1ab7180dc80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAudioSingleEnvelopeValue; // 0x610 property 0x1ab7180dd00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAudioMultiEnvelopeValue; // 0x638 property 0x1ab7180dd80 hash 0xb7a5ed1a
	SoundModulation Modulation; // 0x660
	DelegateProperty OnQueueSubtitles; // 0x670 property 0x1ab7180de80 hash 0xe1aec4e5
	WeakObjectProperty AutoAttachParent; // 0x680 property 0x1ab7180df00 hash 0x24388009
	FName AutoAttachSocketName; // 0x688

	// Functions
	StopDelayed 0x40d01 hash 41ef32e3 params:( None DelayTime; );
	Stop 0x3e2ef hash 7c8c8f2b params:(  );
	SetWaveParameter 0x40cf8 hash ab2ed445 params:( None InName;SoundWave InWave; );
	SetVolumeMultiplier 0x3e2e0 hash a2b02ad0 params:( None NewVolumeMultiplier; );
	SetUISound 0x40cf2 hash c7838a78 params:( None bInUISound; );
	SetSubmixSend 0x3e2d8 hash a875d853 params:( SoundSubmix Submix;None SendLevel; );
	SetSourceBusSendPreEffect 0x40ce4 hash 4324a12a params:( SoundSourceBus SoundSourceBus;None SourceBusSendLevel; );
	SetSourceBusSendPostEffect 0x40cd6 hash ad49589 params:( SoundSourceBus SoundSourceBus;None SourceBusSendLevel; );
	SetSound 0x40cd1 hash 8878803a params:( SoundBase NewSound; );
	SetPitchMultiplier 0x40cc7 hash 6cacc050 params:( None NewPitchMultiplier; );
	SetPaused 0x40cc1 hash 8f8bcc53 params:( None bPause; );
	SetLowPassFilterFrequency 0x3ea99 hash 74b7e1f2 params:( None InLowPassFilterFrequency; );
	SetLowPassFilterEnabled 0x40cb4 hash 558f8deb params:( None InLowPassFilterEnabled; );
	SetIntParameter 0x40cab hash 1630511d params:( None InName;None inInt; );
	SetFloatParameter 0x40ca1 hash 44c33de8 params:( None InName;None InFloat; );
	SetBoolParameter 0x40c98 hash 4c732b1e params:( None InName;None InBool; );
	Play 0x3fb72 hash 7c8ac63b params:( None StartTime; );
	IsPlaying 0x3e2d2 hash 5c6af535 params:( None ReturnValue; );
	HasCookedFFTData 0x40c8f hash 20474fb0 params:( None ReturnValue; );
	HasCookedAmplitudeEnvelopeData 0x40c7f hash 24c1af73 params:( None ReturnValue; );
	GetPlayState 0x40c78 hash bc58823c params:( UnderlyingType ReturnValue; );
	GetCookedFFTDataForAllPlayingSounds 0x40c65 hash d2e3ce4 params:( OutSoundWaveSpectralData OutSoundWaveSpectralData;None ReturnValue; );
	GetCookedFFTData 0x40c5c hash dc701a74 params:( FrequenciesToGet FrequenciesToGet;OutSoundWaveSpectralData OutSoundWaveSpectralData;None ReturnValue; );
	GetCookedEnvelopeDataForAllPlayingSounds 0x40c47 hash 5b7d94e2 params:( OutEnvelopeData OutEnvelopeData;None ReturnValue; );
	GetCookedEnvelopeData 0x40c3b hash da5a8732 params:( None OutEnvelopeData;None ReturnValue; );
	FadeOut 0x40c36 hash f9baf36d params:( None FadeOutDuration;None FadeVolumeLevel;UnderlyingType FadeCurve; );
	FadeIn 0x40c32 hash b23bf70c params:( None FadeInDuration;None FadeVolumeLevel;None StartTime;UnderlyingType FadeCurve; );
	BP_GetAttenuationSettingsToApply 0x40c21 hash 707247c params:( SoundAttenuationSettings OutAttenuationSettings;None ReturnValue; );
	AdjustVolume 0x40c1a hash 9b8bac48 params:( None AdjustVolumeDuration;None AdjustVolumeLevel;UnderlyingType FadeCurve; );
	AdjustAttenuation 0x40c10 hash e674439c params:( SoundAttenuationSettings InAttenuationSettings; );
};


instance 1ab5e057d80
class AssetImportData public : Object
{
	// Fields

};


instance 1ab5e055740
class AssetUserData public : Object
{
	// Fields

};


instance 1ab5e093340
class OnlineBlueprintCallProxyBase public : Object
{
	// Fields

	// Functions
	Activate 0x3df71 hash 5374ac56 params:(  );
};


instance 1ab5e0913c0
class Player public : Object
{
	// Fields
	PlayerController* PlayerController; // 0x30
	int CurrentNetSpeed; // 0x38
	int ConfiguredInternetSpeed; // 0x3c
	int ConfiguredLanSpeed; // 0x40

};


instance 1ab5e091600
class NetConnection public : Player
{
	// Fields
	TArray Children; // 0x48
	NetDriver* Driver; // 0x58
	PackageMap* PackageMapClass; // 0x60
	PackageMap* PackageMap; // 0x68
	TArray OpenChannels; // 0x70
	TArray SentTemporaries; // 0x80
	Actor* ViewTarget; // 0x90
	Actor* OwningActor; // 0x98
	int MaxPacket; // 0xa0
	bool InternalAck; // 0xa4
	UniqueNetIdRepl PlayerId; // 0x160
	double LastReceiveTime; // 0x1d0
	TArray ChannelsToTick; // 0x14a8

};


instance 1ab5e090f40
class NetDriver public : Object
{
	// Fields
	FString NetConnectionClassName; // 0x30
	FString ReplicationDriverClassName; // 0x40
	int MaxDownloadSize; // 0x50
	bool bClampListenServerTickRate; // 0x54
	int NetServerMaxTickRate; // 0x58
	int MaxNetTickRate; // 0x5c
	int MaxInternetClientRate; // 0x60
	int MaxClientRate; // 0x64
	float ServerTravelPause; // 0x68
	float SpawnPrioritySeconds; // 0x6c
	float RelevantTimeout; // 0x70
	float KeepAliveTime; // 0x74
	float InitialConnectTimeout; // 0x78
	float ConnectionTimeout; // 0x7c
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x80
	bool bNoTimeouts; // 0x84
	bool bNeverApplyNetworkEmulationSettings; // 0x85
	NetConnection* ServerConnection; // 0x88
	TArray ClientConnections; // 0x90
	int RecentlyDisconnectedTrackingTime; // 0x100
	World* World; // 0x140
	Package* WorldPackage; // 0x148
	Object* NetConnectionClass; // 0x170
	Object* ReplicationDriverClass; // 0x178
	Property* RoleProperty; // 0x180
	Property* RemoteRoleProperty; // 0x188
	FName NetDriverName; // 0x190
	TArray ChannelDefinitions; // 0x198
	MapProperty ChannelDefinitionMap; // 0x1a8 property 0x1ab711657e0 hash 0xadd0fb88
	TArray ActorChannelPool; // 0x1f8
	float Time; // 0x210
	ReplicationDriver* ReplicationDriver; // 0x6e0

};


instance 1ab5e0901c0
class BlueprintAsyncActionBase public : Object
{
	// Fields

	// Functions
	Activate 0x3df71 hash 5374ac56 params:(  );
};


instance 1ab5e0988c0
class OnlineEngineInterface public : Object
{
	// Fields

};


instance 1ab5e098440
class DeveloperSettings public : Object
{
	// Fields

};


instance 1ab5e097fc0
class OnlineSession public : Object
{
	// Fields

};


instance 1ab5e095740
class Subsystem public : Object
{
	// Fields

};


instance 1ab5e095980
class DynamicSubsystem public : Subsystem
{
	// Fields

};


instance 1ab5e095bc0
class EngineSubsystem public : DynamicSubsystem
{
	// Fields

};


instance 1ab5e09c580
class MovementComponent public : ActorComponent
{
	// Fields
	SceneComponent* UpdatedComponent; // 0xb0
	PrimitiveComponent* UpdatedPrimitive; // 0xb8
	Vector Velocity; // 0xc4
	Vector PlaneConstraintNormal; // 0xd0
	Vector PlaneConstraintOrigin; // 0xdc
	bool bUpdateOnlyIfRendered; // 0xe8
	bool bAutoUpdateTickRegistration; // 0xe8
	bool bTickBeforeOwner; // 0xe8
	bool bAutoRegisterUpdatedComponent; // 0xe8
	bool bConstrainToPlane; // 0xe8
	bool bSnapToPlaneAtStart; // 0xe8
	bool bAutoRegisterPhysicsVolumeUpdates; // 0xe8
	bool bComponentShouldUpdatePhysicsVolume; // 0xe8
	EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0xeb

	// Functions
	StopMovementImmediately 0x42115 hash 40c41d8a params:(  );
	SnapUpdatedComponentToPlane 0x42106 hash 34fbba04 params:(  );
	SetUpdatedComponent 0x420fb hash d9d14f2b params:( SceneComponent NewUpdatedComponent; );
	SetPlaneConstraintOrigin 0x420ee hash 3b07d02e params:( Vector PlaneOrigin; );
	SetPlaneConstraintNormal 0x420e1 hash 388165ef params:( Vector PlaneNormal; );
	SetPlaneConstraintFromVectors 0x420d1 hash a39a6e20 params:( Vector Forward;Vector Up; );
	SetPlaneConstraintEnabled 0x420c3 hash 90535df1 params:( None bEnabled; );
	SetPlaneConstraintAxisSetting 0x420b3 hash 9ef7219 params:( UnderlyingType NewAxisSetting; );
	PhysicsVolumeChanged 0x420a8 hash 7cea62aa params:( PhysicsVolume NewVolume; );
	K2_MoveUpdatedComponent 0x4209b hash ed1c6df2 params:( Vector Delta;Rotator NewRotation;HitResult OutHit;None bSweep;None bTeleport;None ReturnValue; );
	K2_GetModifiedMaxSpeed 0x4208f hash d518b119 params:( None ReturnValue; );
	K2_GetMaxSpeedModifier 0x42083 hash 92aa0727 params:( None ReturnValue; );
	IsExceedingMaxSpeed 0x42078 hash 7e3bc8c4 params:( None MaxSpeed;None ReturnValue; );
	GetPlaneConstraintOrigin 0x4206b hash 88163da2 params:( Vector ReturnValue; );
	GetPlaneConstraintNormal 0x4205e hash 858fd363 params:( Vector ReturnValue; );
	GetPlaneConstraintAxisSetting 0x4204e hash a0680d params:( UnderlyingType ReturnValue; );
	GetPhysicsVolume 0x3e0be hash 788da600 params:( PhysicsVolume ReturnValue; );
	GetMaxSpeed 0x42047 hash a154b2fc params:( None ReturnValue; );
	GetGravityZ 0x42040 hash 136dd65 params:( None ReturnValue; );
	ConstrainNormalToPlane 0x42034 hash 94eeccf2 params:( Vector Normal;Vector ReturnValue; );
	ConstrainLocationToPlane 0x42027 hash c3a08ea2 params:( Vector Location;Vector ReturnValue; );
	ConstrainDirectionToPlane 0x42019 hash b6520eaa params:( Vector Direction;Vector ReturnValue; );
};


instance 1ab5e09c7c0
class NavMovementComponent public : MovementComponent
{
	// Fields
	NavAgentProperties NavAgentProps; // 0xf0
	float FixedPathBrakingDistance; // 0x120
	bool bUpdateNavAgentWithOwnersCollision; // 0x124
	bool bUseAccelerationForPaths; // 0x124
	bool bUseFixedBrakingDistanceForPaths; // 0x124
	MovementProperties MovementState; // 0x125
	Object* PathFollowingComp; // 0x128

	// Functions
	StopMovementKeepPathing 0x4214d hash 9934e6c6 params:(  );
	StopActiveMovement 0x42143 hash d01cf572 params:(  );
	IsSwimming 0x4213d hash f21f34c params:( None ReturnValue; );
	IsMovingOnGround 0x42134 hash 56221cfd params:( None ReturnValue; );
	IsFlying 0x4212f hash 1a11e26a params:( None ReturnValue; );
	IsFalling 0x42129 hash 41bbc35e params:( None ReturnValue; );
	IsCrouching 0x42122 hash ee214083 params:( None ReturnValue; );
};


instance 1ab5e09ca00
class PawnMovementComponent public : NavMovementComponent
{
	// Fields
	Pawn* PawnOwner; // 0x130

	// Functions
	K2_GetInputVector 0x42189 hash ca65a724 params:( Vector ReturnValue; );
	IsMoveInputIgnored 0x3f3b6 hash 911901b0 params:( None ReturnValue; );
	GetPendingInputVector 0x4217d hash 6614f00d params:( Vector ReturnValue; );
	GetPawnOwner 0x42176 hash 19164ec6 params:( Pawn ReturnValue; );
	GetLastInputVector 0x4216c hash 735051c params:( Vector ReturnValue; );
	ConsumeInputVector 0x42162 hash 8889f4a2 params:( Vector ReturnValue; );
	AddInputVector 0x4215a hash 9dc1b111 params:( Vector WorldVector;None bForce; );
};


instance 1ab5e09af00
class ShapeComponent public : PrimitiveComponent
{
	// Fields
	BodySetup* ShapeBodySetup; // 0x3d8
	NavAreaBase* AreaClass; // 0x3e0
	Color ShapeColor; // 0x3e8
	bool bDrawOnlyIfSelected; // 0x3ec
	bool bShouldCollideWhenPlacing; // 0x3ec
	bool bDynamicObstacle; // 0x3ec

};


instance 1ab5e09b140
class BoxComponent public : ShapeComponent
{
	// Fields
	Vector BoxExtent; // 0x3f0
	float LineThickness; // 0x3fc

	// Functions
	SetBoxExtent 0x4240e hash e18502f2 params:( Vector InBoxExtent;None bUpdateOverlaps; );
	GetUnscaledBoxExtent 0x42403 hash 53f7f1b5 params:( Vector ReturnValue; );
	GetScaledBoxExtent 0x423f9 hash dbd4e352 params:( Vector ReturnValue; );
};


instance 1ab5e09a840
class CameraComponent public : SceneComponent
{
	// Fields
	float FieldOfView; // 0x1f0
	float OrthoWidth; // 0x1f4
	float OrthoNearClipPlane; // 0x1f8
	float OrthoFarClipPlane; // 0x1fc
	float AspectRatio; // 0x200
	bool bConstrainAspectRatio; // 0x204
	bool bUseFieldOfViewForLOD; // 0x204
	bool bLockToHmd; // 0x204
	bool bUsePawnControlRotation; // 0x204
	BYTE ProjectionMode; // 0x205
	float PostProcessBlendWeight; // 0x240
	PostProcessSettings PostProcessSettings; // 0x270

	// Functions
	SetUseFieldOfViewForLOD 0x424d9 hash db7b9418 params:( None bInUseFieldOfViewForLOD; );
	SetProjectionMode 0x424cf hash 7f23b553 params:( ECameraProjectionMode InProjectionMode; );
	SetPostProcessBlendWeight 0x424c1 hash 7276c003 params:( None InPostProcessBlendWeight; );
	SetOrthoWidth 0x424b9 hash 6249e0dd params:( None InOrthoWidth; );
	SetOrthoNearClipPlane 0x424ad hash 5ada189b params:( None InOrthoNearClipPlane; );
	SetOrthoFarClipPlane 0x424a2 hash 35c6a8ee params:( None InOrthoFarClipPlane; );
	SetFieldOfView 0x4249a hash 52f930a5 params:( None InFieldOfView; );
	SetConstraintAspectRatio 0x4248d hash 335c1975 params:( None bInConstrainAspectRatio; );
	SetAspectRatio 0x42485 hash 74104a70 params:( None InAspectRatio; );
	RemoveBlendable 0x4247c hash 76b53e8c params:( BlendableInterface InBlendableObject; );
	OnCameraMeshHiddenChanged 0x4246e hash ba47156e params:(  );
	GetCameraView 0x42466 hash 6801aee9 params:( None DeltaTime;MinimalViewInfo DesiredView; );
	AddOrUpdateBlendable 0x4245b hash 236616eb params:( BlendableInterface InBlendableObject;None InWeight; );
};


instance 1ab5e09fb80
class StaticMeshComponent public : MeshComponent
{
	// Fields
	int ForcedLodModel; // 0x400
	int PreviousLODLevel; // 0x404
	int MinLOD; // 0x408
	int SubDivisionStepSize; // 0x40c
	StaticMesh* StaticMesh; // 0x410
	Color WireframeColorOverride; // 0x418
	bool bEvaluateWorldPositionOffset; // 0x41c
	bool bOverrideWireframeColor; // 0x41c
	bool bOverrideMinLod; // 0x41c
	bool bOverrideNavigationExport; // 0x41c
	bool bForceNavigationObstacle; // 0x41c
	bool bDisallowMeshPaintPerInstance; // 0x41c
	bool bIgnoreInstanceForTextureStreaming; // 0x41c
	bool bOverrideLightMapRes; // 0x41c
	bool bCastDistanceFieldIndirectShadow; // 0x41d
	bool bOverrideDistanceFieldSelfShadowBias; // 0x41d
	bool bUseSubDivisions; // 0x41d
	bool bUseDefaultCollision; // 0x41d
	bool bReverseCulling; // 0x41d
	int OverriddenLightMapRes; // 0x420
	float DistanceFieldIndirectShadowMinVisibility; // 0x424
	float DistanceFieldSelfShadowBias; // 0x428
	float StreamingDistanceMultiplier; // 0x42c
	TArray LODData; // 0x430
	TArray StreamingTextureData; // 0x440
	LightmassPrimitiveSettings LightmassSettings; // 0x450

	// Functions
	SetStaticMesh 0x425bb hash 610fef86 params:( StaticMesh NewMesh;None ReturnValue; );
	SetReverseCulling 0x425b1 hash eee44b9b params:( None ReverseCulling; );
	SetForcedLodModel 0x425a7 hash 69faa4f4 params:( None NewForcedLodModel; );
	SetDistanceFieldSelfShadowBias 0x42597 hash a669cb8f params:( None NewValue; );
	OnRep_StaticMesh 0x4258e hash 5813383d params:( StaticMesh OldStaticMesh; );
	GetLocalBounds 0x42586 hash fec7e2fb params:( Vector Min;Vector Max; );
};


instance 1ab5e09fdc0
class InstancedStaticMeshComponent public : StaticMeshComponent
{
	// Fields
	TArray PerInstanceSMData; // 0x468
	int InstancingRandomSeed; // 0x478
	int InstanceStartCullDistance; // 0x47c
	int InstanceEndCullDistance; // 0x480
	TArray InstanceReorderTable; // 0x488
	int NumPendingLightmaps; // 0x4e0
	TArray CachedMappings; // 0x4e8

	// Functions
	UpdateInstanceTransform 0x3fc24 hash 25c5c799 params:( None InstanceIndex;Transform NewInstanceTransform;None bWorldSpace;None bMarkRenderStateDirty;None bTeleport;None ReturnValue; );
	SetCullDistances 0x4260d hash 962161df params:( None StartCullDistance;None EndCullDistance; );
	RemoveInstance 0x3fc05 hash 5b373f08 params:( None InstanceIndex;None ReturnValue; );
	GetInstanceTransform 0x3fbfa hash 26888f16 params:( None InstanceIndex;Transform OutInstanceTransform;None bWorldSpace;None ReturnValue; );
	GetInstancesOverlappingSphere 0x425fd hash 46147cdb params:( Vector Center;None Radius;None bSphereInWorldSpace;ReturnValue ReturnValue; );
	GetInstancesOverlappingBox 0x425ef hash 782541d params:( Box Box;None bBoxInWorldSpace;ReturnValue ReturnValue; );
	GetInstanceCount 0x3fbf1 hash 29b68783 params:( None ReturnValue; );
	ClearInstances 0x3fbe9 hash 1504e9b4 params:(  );
	BatchUpdateInstancesTransforms 0x425df hash ac483d01 params:( None StartInstanceIndex;NewInstancesTransforms NewInstancesTransforms;None bWorldSpace;None bMarkRenderStateDirty;None bTeleport;None ReturnValue; );
	BatchUpdateInstancesTransform 0x425cf hash 52cbe2ce params:( None StartInstanceIndex;None NumInstances;Transform NewInstancesTransform;None bWorldSpace;None bMarkRenderStateDirty;None bTeleport;None ReturnValue; );
	AddInstanceWorldSpace 0x425c3 hash d83f1a57 params:( Transform WorldTransform;None ReturnValue; );
	AddInstance 0x3fbe2 hash 63a7de63 params:( Transform InstanceTransform;None ReturnValue; );
};


instance 1ab5e099640
class HierarchicalInstancedStaticMeshComponent public : InstancedStaticMeshComponent
{
	// Fields
	TArray SortedInstances; // 0x508
	int NumBuiltInstances; // 0x518
	Box BuiltInstanceBounds; // 0x520
	Box UnbuiltInstanceBounds; // 0x53c
	TArray UnbuiltInstanceBoundsList; // 0x558
	bool bEnableDensityScaling; // 0x568
	int OcclusionLayerNumNodes; // 0x570
	BoxSphereBounds CacheMeshExtendedBounds; // 0x574
	bool bDisableCollision; // 0x594
	int InstanceCountToRender; // 0x598

	// Functions
	RemoveInstances 0x42616 hash c21f207b params:( InstancesToRemove InstancesToRemove;None ReturnValue; );
};


instance 1ab5e09e980
class SphereComponent public : ShapeComponent
{
	// Fields
	float SphereRadius; // 0x3f0

	// Functions
	SetSphereRadius 0x42692 hash bf4a580 params:( None InSphereRadius;None bUpdateOverlaps; );
	GetUnscaledSphereRadius 0x42685 hash 4413c163 params:( None ReturnValue; );
	GetShapeScale 0x4267d hash f473123e params:( None ReturnValue; );
	GetScaledSphereRadius 0x42671 hash 92ed29e0 params:( None ReturnValue; );
};


instance 1ab5e0a64c0
class Controller public : Actor
{
	// Fields
	PlayerState* PlayerState; // 0x220
	MulticastInlineDelegateProperty OnInstigatedAnyDamage; // 0x230 property 0x1ab718ef900 hash 0xb7a5ed1a
	FName StateName; // 0x240
	Pawn* Pawn; // 0x248
	Character* Character; // 0x258
	SceneComponent* TransformComponent; // 0x260
	Rotator ControlRotation; // 0x280
	bool bAttachToPawn; // 0x28c

	// Functions
	UnPossess 0x42e12 hash 3d38f138 params:(  );
	StopMovement 0x42e0b hash e781d036 params:(  );
	SetInitialLocationAndRotation 0x42dfb hash 52c9db77 params:( Vector NewLocation;Rotator NewRotation; );
	SetIgnoreMoveInput 0x42df1 hash a4364e5c params:( None bNewMoveInput; );
	SetIgnoreLookInput 0x42de7 hash 22e127da params:( None bNewLookInput; );
	SetControlRotation 0x42ddd hash 292dc8a2 params:( Rotator NewRotation; );
	ResetIgnoreMoveInput 0x42dd2 hash d8d7ea73 params:(  );
	ResetIgnoreLookInput 0x42dc7 hash 5782c3f1 params:(  );
	ResetIgnoreInputFlags 0x42dbb hash 16bec929 params:(  );
	ReceiveUnPossess 0x25c0d hash bc2978bb params:( Pawn UnpossessedPawn; );
	ReceivePossess 0x25c05 hash 8c53d0b8 params:( Pawn PossessedPawn; );
	ReceiveInstigatedAnyDamage 0x25bf7 hash de481cfb params:( None Damage;DamageType DamageType;Actor DamagedActor;Actor DamageCauser; );
	Possess 0x42db6 hash 1d4105f5 params:( Pawn InPawn; );
	OnRep_PlayerState 0x3f3f0 hash 36e1aff6 params:(  );
	OnRep_Pawn 0x42db0 hash 9a5fc81e params:(  );
	LineOfSightTo 0x42da8 hash fd3881c4 params:( Actor Other;Vector ViewPoint;None bAlternateChecks;None ReturnValue; );
	K2_GetPawn 0x42da2 hash 1ee2fbd7 params:( Pawn ReturnValue; );
	IsPlayerController 0x42d98 hash a08b60b2 params:( None ReturnValue; );
	IsMoveInputIgnored 0x3f3b6 hash 911901b0 params:( None ReturnValue; );
	IsLookInputIgnored 0x42d8e hash c25c816e params:( None ReturnValue; );
	IsLocalPlayerController 0x42d81 hash 554ea9bd params:( None ReturnValue; );
	IsLocalController 0x42d77 hash 86c5b2d0 params:( None ReturnValue; );
	GetViewTarget 0x42d6f hash 1a4c2a27 params:( Actor ReturnValue; );
	GetDesiredRotation 0x42d65 hash f9025595 params:( Rotator ReturnValue; );
	GetControlRotation 0x3f352 hash 242f16 params:( Rotator ReturnValue; );
	ClientSetRotation 0x25bed hash 6f538460 params:( Rotator NewRotation;None bResetCamera; );
	ClientSetLocation 0x25be3 hash be20d469 params:( Vector NewLocation;Rotator NewRotation; );
	CastToPlayerController 0x42d59 hash 121488a4 params:( PlayerController ReturnValue; );
};


instance 1ab5e0ade40
class Brush public : Actor
{
	// Fields
	BYTE BrushType; // 0x218
	Color BrushColor; // 0x21c
	int PolyFlags; // 0x220
	bool bColored; // 0x224
	bool bSolidWhenSelected; // 0x224
	bool bPlaceableFromClassBrowser; // 0x224
	bool bNotForClientOrServer; // 0x224
	Model* Brush; // 0x228
	BrushComponent* BrushComponent; // 0x230
	bool bInManipulation; // 0x238
	TArray SavedSelections; // 0x240

};


instance 1ab5e0a4c00
class Volume public : Brush
{
	// Fields

};


instance 1ab5e0ad780
class AmbientSound public : Actor
{
	// Fields
	AudioComponent* AudioComponent; // 0x218

	// Functions
	Stop 0x3e2ef hash 7c8c8f2b params:(  );
	Play 0x3fb72 hash 7c8ac63b params:( None StartTime; );
	FadeOut 0x40c36 hash f9baf36d params:( None FadeOutDuration;None FadeVolumeLevel; );
	FadeIn 0x40c32 hash b23bf70c params:( None FadeInDuration;None FadeVolumeLevel; );
	AdjustVolume 0x40c1a hash 9b8bac48 params:( None AdjustVolumeDuration;None AdjustVolumeLevel; );
};


instance 1ab5e0ace80
class AnimNotify public : Object
{
	// Fields

	// Functions
	Received_Notify 0x233a3 hash 65bf89e4 params:( SkeletalMeshComponent MeshComp;AnimSequenceBase Animation;None ReturnValue; );
	GetNotifyName 0x2339b hash 82a9beff params:( None ReturnValue; );
};


instance 1ab5e0abec0
class AnimNotify_PlaySound public : AnimNotify
{
	// Fields
	SoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	bool bFollow; // 0x48
	FName AttachName; // 0x4c

};


instance 1ab5e0b37c0
class CameraShake public : Object
{
	// Fields
	bool bSingleInstance; // 0x28
	float OscillationDuration; // 0x2c
	float OscillationBlendInTime; // 0x30
	float OscillationBlendOutTime; // 0x34
	ROscillator RotOscillation; // 0x38
	VOscillator LocOscillation; // 0x5c
	FOscillator FOVOscillation; // 0x80
	float AnimPlayRate; // 0x8c
	float AnimScale; // 0x90
	float AnimBlendInTime; // 0x94
	float AnimBlendOutTime; // 0x98
	float RandomAnimSegmentDuration; // 0x9c
	CameraAnim* Anim; // 0xa0
	bool bRandomAnimSegment; // 0xa8
	PlayerCameraManager* CameraOwner; // 0xc0
	float ShakeScale; // 0x148
	float OscillatorTimeRemaining; // 0x14c
	CameraAnimInst* AnimInst; // 0x150

	// Functions
	ReceiveStopShake 0x252de hash af14ed9a params:( None bImmediately; );
	ReceivePlayShake 0x252d5 hash cee00eaa params:( None Scale; );
	ReceiveIsFinished 0x252cb hash 4280f72e params:( None ReturnValue; );
	BlueprintUpdateCameraShake 0x252bd hash 885eaa52 params:( None DeltaTime;None Alpha;MinimalViewInfo POV;MinimalViewInfo ModifiedPOV; );
};


instance 1ab5e0b3100
class CharacterMovementComponent public : PawnMovementComponent
{
	// Fields
	Character* CharacterOwner; // 0x148
	float GravityScale; // 0x150
	float MaxStepHeight; // 0x154
	float JumpZVelocity; // 0x158
	float JumpOffJumpZFactor; // 0x15c
	float WalkableFloorAngle; // 0x160
	float WalkableFloorZ; // 0x164
	BYTE MovementMode; // 0x168
	BYTE CustomMovementMode; // 0x169
	ENetworkSmoothingMode NetworkSmoothingMode; // 0x16a
	float GroundFriction; // 0x16c
	float MaxWalkSpeed; // 0x18c
	float MaxWalkSpeedCrouched; // 0x190
	float MaxSwimSpeed; // 0x194
	float MaxFlySpeed; // 0x198
	float MaxCustomMovementSpeed; // 0x19c
	float MaxAcceleration; // 0x1a0
	float MinAnalogWalkSpeed; // 0x1a4
	float BrakingFrictionFactor; // 0x1a8
	float BrakingFriction; // 0x1ac
	float BrakingSubStepTime; // 0x1b0
	float BrakingDecelerationWalking; // 0x1b4
	float BrakingDecelerationFalling; // 0x1b8
	float BrakingDecelerationSwimming; // 0x1bc
	float BrakingDecelerationFlying; // 0x1c0
	float AirControl; // 0x1c4
	float AirControlBoostMultiplier; // 0x1c8
	float AirControlBoostVelocityThreshold; // 0x1cc
	float FallingLateralFriction; // 0x1d0
	float CrouchedHalfHeight; // 0x1d4
	float Buoyancy; // 0x1d8
	float PerchRadiusThreshold; // 0x1dc
	float PerchAdditionalHeight; // 0x1e0
	Rotator RotationRate; // 0x1e4
	bool bUseSeparateBrakingFriction; // 0x1f0
	bool bApplyGravityWhileJumping; // 0x1f0
	bool bUseControllerDesiredRotation; // 0x1f0
	bool bOrientRotationToMovement; // 0x1f0
	bool bSweepWhileNavWalking; // 0x1f0
	bool bMovementInProgress; // 0x1f0
	bool bEnableScopedMovementUpdates; // 0x1f0
	bool bEnableServerDualMoveScopedMovementUpdates; // 0x1f1
	bool bForceMaxAccel; // 0x1f1
	bool bRunPhysicsWithNoController; // 0x1f1
	bool bForceNextFloorCheck; // 0x1f1
	bool bShrinkProxyCapsule; // 0x1f1
	bool bCanWalkOffLedges; // 0x1f1
	bool bCanWalkOffLedgesWhenCrouching; // 0x1f1
	bool bNetworkSkipProxyPredictionOnNetUpdate; // 0x1f2
	bool bNetworkAlwaysReplicateTransformUpdateTimestamp; // 0x1f2
	bool bDeferUpdateMoveComponent; // 0x1f2
	bool bEnablePhysicsInteraction; // 0x1f2
	bool bTouchForceScaledToMass; // 0x1f2
	bool bPushForceScaledToMass; // 0x1f2
	bool bPushForceUsingZOffset; // 0x1f2
	bool bScalePushForceToVelocity; // 0x1f3
	SceneComponent* DeferredUpdatedMoveComponent; // 0x1f8
	float MaxOutOfWaterStepHeight; // 0x200
	float OutofWaterZ; // 0x204
	float Mass; // 0x208
	float StandingDownwardForceScale; // 0x20c
	float InitialPushForceFactor; // 0x210
	float PushForceFactor; // 0x214
	float PushForcePointZOffsetFactor; // 0x218
	float TouchForceFactor; // 0x21c
	float MinTouchForce; // 0x220
	float MaxTouchForce; // 0x224
	float RepulsionForce; // 0x228
	Vector Acceleration; // 0x22c
	Quat LastUpdateRotation; // 0x240
	Vector LastUpdateLocation; // 0x250
	Vector LastUpdateVelocity; // 0x25c
	float ServerLastTransformUpdateTimeStamp; // 0x268
	float ServerLastClientGoodMoveAckTime; // 0x26c
	float ServerLastClientAdjustmentTime; // 0x270
	Vector PendingImpulseToApply; // 0x274
	Vector PendingForceToApply; // 0x280
	float AnalogInputModifier; // 0x28c
	float MaxSimulationTimeStep; // 0x29c
	int MaxSimulationIterations; // 0x2a0
	int MaxJumpApexAttemptsPerSimulation; // 0x2a4
	float MaxDepenetrationWithGeometry; // 0x2a8
	float MaxDepenetrationWithGeometryAsProxy; // 0x2ac
	float MaxDepenetrationWithPawn; // 0x2b0
	float MaxDepenetrationWithPawnAsProxy; // 0x2b4
	float NetworkSimulatedSmoothLocationTime; // 0x2b8
	float NetworkSimulatedSmoothRotationTime; // 0x2bc
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x2c0
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x2c4
	float NetProxyShrinkRadius; // 0x2c8
	float NetProxyShrinkHalfHeight; // 0x2cc
	float NetworkMaxSmoothUpdateDistance; // 0x2d0
	float NetworkNoSmoothUpdateDistance; // 0x2d4
	float NetworkMinTimeBetweenClientAckGoodMoves; // 0x2d8
	float NetworkMinTimeBetweenClientAdjustments; // 0x2dc
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x2e0
	float NetworkLargeClientCorrectionDistance; // 0x2e4
	float LedgeCheckThreshold; // 0x2e8
	float JumpOutOfWaterPitch; // 0x2ec
	FindFloorResult CurrentFloor; // 0x2f0
	BYTE DefaultLandMovementMode; // 0x384
	BYTE DefaultWaterMovementMode; // 0x385
	BYTE GroundMovementMode; // 0x386
	bool bMaintainHorizontalGroundVelocity; // 0x387
	bool bImpartBaseVelocityX; // 0x387
	bool bImpartBaseVelocityY; // 0x387
	bool bImpartBaseVelocityZ; // 0x387
	bool bImpartBaseAngularVelocity; // 0x387
	bool bJustTeleported; // 0x387
	bool bNetworkUpdateReceived; // 0x387
	bool bNetworkMovementModeChanged; // 0x387
	bool bIgnoreClientMovementErrorChecksAndCorrection; // 0x388
	bool bServerAcceptClientAuthoritativePosition; // 0x388
	bool bNotifyApex; // 0x388
	bool bCheatFlying; // 0x388
	bool bWantsToCrouch; // 0x388
	bool bCrouchMaintainsBaseLocation; // 0x388
	bool bIgnoreBaseRotation; // 0x388
	bool bFastAttachedMove; // 0x388
	bool bAlwaysCheckFloor; // 0x389
	bool bUseFlatBaseForFloorChecks; // 0x389
	bool bPerformingJumpOff; // 0x389
	bool bWantsToLeaveNavWalking; // 0x389
	bool bUseRVOAvoidance; // 0x389
	bool bRequestedMoveUseAcceleration; // 0x389
	bool bWasSimulatingRootMotion; // 0x389
	bool bAllowPhysicsRotationDuringAnimRootMotion; // 0x38a
	bool bHasRequestedVelocity; // 0x38a
	bool bRequestedMoveWithMaxSpeed; // 0x38a
	bool bWasAvoidanceUpdated; // 0x38a
	bool bProjectNavMeshWalking; // 0x38a
	bool bProjectNavMeshOnBothWorldChannels; // 0x38a
	float AvoidanceConsiderationRadius; // 0x39c
	Vector RequestedVelocity; // 0x3a0
	int AvoidanceUID; // 0x3ac
	NavAvoidanceMask AvoidanceGroup; // 0x3b0
	NavAvoidanceMask GroupsToAvoid; // 0x3b4
	NavAvoidanceMask GroupsToIgnore; // 0x3b8
	float AvoidanceWeight; // 0x3bc
	Vector PendingLaunchVelocity; // 0x3c0
	float NavMeshProjectionInterval; // 0x470
	float NavMeshProjectionTimer; // 0x474
	float NavMeshProjectionInterpSpeed; // 0x478
	float NavMeshProjectionHeightScaleUp; // 0x47c
	float NavMeshProjectionHeightScaleDown; // 0x480
	float NavWalkingFloorDistTolerance; // 0x484
	CharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x488
	float MinTimeBetweenTimeStampResets; // 0x4d0
	RootMotionSourceGroup CurrentRootMotion; // 0x4d8
	RootMotionMovementParams RootMotionParams; // 0x660
	Vector AnimRootMotionVelocity; // 0x6a0

	// Functions
	SetWalkableFloorZ 0x435ea hash 50c4e890 params:( None InWalkableFloorZ; );
	SetWalkableFloorAngle 0x435de hash 81a0621d params:( None InWalkableFloorAngle; );
	SetMovementMode 0x435d5 hash 3eca4521 params:( EMovementMode NewMovementMode;None NewCustomMode; );
	SetGroupsToIgnoreMask 0x42223 hash 1eea3d44 params:( NavAvoidanceMask GroupMask; );
	SetGroupsToIgnore 0x42219 hash 85aafc38 params:( None GroupFlags; );
	SetGroupsToAvoidMask 0x4220e hash 99a29713 params:( NavAvoidanceMask GroupMask; );
	SetGroupsToAvoid 0x42205 hash d4f8c687 params:( None GroupFlags; );
	SetAvoidanceGroupMask 0x421e4 hash 25890c14 params:( NavAvoidanceMask GroupMask; );
	SetAvoidanceGroup 0x421da hash 6012e308 params:( None GroupFlags; );
	SetAvoidanceEnabled 0x421cf hash c06e326 params:( None bEnable; );
	K2_GetWalkableFloorZ 0x435ca hash 5179a3c0 params:( None ReturnValue; );
	K2_GetWalkableFloorAngle 0x435bd hash f79f354d params:( None ReturnValue; );
	K2_GetModifiedMaxAcceleration 0x435ad hash 539fdcb2 params:( None ReturnValue; );
	K2_FindFloor 0x435a6 hash fef76564 params:( Vector CapsuleLocation;FindFloorResult FloorResult; );
	K2_ComputeFloorDist 0x4359b hash 4b6049f4 params:( Vector CapsuleLocation;None LineDistance;None SweepDistance;None SweepRadius;FindFloorResult FloorResult; );
	IsWalking 0x43595 hash 5e593fce params:( None ReturnValue; );
	IsWalkable 0x4358f hash 297ca484 params:( HitResult Hit;None ReturnValue; );
	GetValidPerchRadius 0x43584 hash ebb0428f params:( None ReturnValue; );
	GetPerchRadiusThreshold 0x43577 hash 106533ec params:( None ReturnValue; );
	GetMovementBase 0x4356e hash 976ade4b params:( PrimitiveComponent ReturnValue; );
	GetMinAnalogSpeed 0x43564 hash 26bedfec params:( None ReturnValue; );
	GetMaxJumpHeightWithJumpTime 0x43555 hash dc376de7 params:( None ReturnValue; );
	GetMaxJumpHeight 0x4354c hash b0d4dfc0 params:( None ReturnValue; );
	GetMaxBrakingDeceleration 0x4353e hash b8a16298 params:( None ReturnValue; );
	GetMaxAcceleration 0x43534 hash 44908135 params:( None ReturnValue; );
	GetLastUpdateVelocity 0x43528 hash ebb06b4b params:( Vector ReturnValue; );
	GetLastUpdateRotation 0x4351c hash 4e24b70c params:( Rotator ReturnValue; );
	GetLastUpdateLocation 0x43510 hash 9cf20715 params:( Vector ReturnValue; );
	GetImpartedMovementBaseVelocity 0x434ff hash c7651c30 params:( Vector ReturnValue; );
	GetCurrentAcceleration 0x434f3 hash ffe5cbb2 params:( Vector ReturnValue; );
	GetCharacterOwner 0x434e9 hash bf5cae5d params:( Character ReturnValue; );
	GetAnalogInputModifier 0x434dd hash 41252f16 params:( None ReturnValue; );
	DisableMovement 0x434d4 hash bb581ba4 params:(  );
	ClearAccumulatedForces 0x434c8 hash 3da3ff6 params:(  );
	CapsuleTouched 0x434c0 hash 7528be1e params:( PrimitiveComponent OverlappedComp;Actor Other;PrimitiveComponent OtherComp;None OtherBodyIndex;None bFromSweep;HitResult SweepResult; );
	CalcVelocity 0x434b9 hash 31df2707 params:( None DeltaTime;None Friction;None bFluid;None BrakingDeceleration; );
	AddImpulse 0x3f5b9 hash 7a5fed params:( Vector Impulse;None bVelocityChange; );
	AddForce 0x3f59d hash 789f74dd params:( Vector Force; );
};


instance 1ab5e0b25c0
class Info public : Actor
{
	// Fields

};


instance 1ab5e0b2800
class GameStateBase public : Info
{
	// Fields
	GameModeBase* GameModeClass; // 0x218
	GameModeBase* AuthorityGameMode; // 0x220
	SpectatorPawn* SpectatorClass; // 0x228
	TArray PlayerArray; // 0x230
	bool bReplicatedHasBegunPlay; // 0x240
	float ReplicatedWorldTimeSeconds; // 0x244
	float ServerWorldTimeSecondsDelta; // 0x248
	float ServerWorldTimeSecondsUpdateFrequency; // 0x24c

	// Functions
	OnRep_SpectatorClass 0x436b7 hash cfbaeb3 params:(  );
	OnRep_ReplicatedWorldTimeSeconds 0x436a6 hash 6f97644b params:(  );
	OnRep_ReplicatedHasBegunPlay 0x43697 hash 749ba368 params:(  );
	OnRep_GameModeClass 0x4368c hash c7d3a1fd params:(  );
	HasMatchStarted 0x43683 hash c812c3a5 params:( None ReturnValue; );
	HasBegunPlay 0x4367c hash c59147a8 params:( None ReturnValue; );
	GetServerWorldTimeSeconds 0x4366e hash d4daa562 params:( None ReturnValue; );
	GetPlayerStartTime 0x43664 hash 93dfc98f params:( Controller Controller;None ReturnValue; );
	GetPlayerRespawnDelay 0x43658 hash ce8221e1 params:( Controller Controller;None ReturnValue; );
};


instance 1ab5e0b2a40
class GameState public : GameStateBase
{
	// Fields
	FName MatchState; // 0x258
	FName PreviousMatchState; // 0x260
	int ElapsedTime; // 0x268

	// Functions
	OnRep_MatchState 0x436cc hash 37ad376 params:(  );
	OnRep_ElapsedTime 0x436c2 hash 4613e235 params:(  );
};


instance 1ab5e0b0d00
class GameInstance public : Object
{
	// Fields
	TArray LocalPlayers; // 0x38
	OnlineSession* OnlineSession; // 0x48
	TArray ReferencedObjects; // 0x50

	// Functions
	ReceiveShutdown 0x27d9b hash c5778a64 params:(  );
	ReceiveInit 0x27d94 hash 2a9102bc params:(  );
	HandleTravelError 0x27d8a hash 76f10889 params:( ETravelFailure FailureType; );
	HandleNetworkError 0x27d80 hash 88d36ee5 params:( ENetworkFailure FailureType;None bIsServer; );
	DebugRemovePlayer 0x437e7 hash 5c871ec7 params:( None ControllerId; );
	DebugCreatePlayer 0x437dd hash ec53798d params:( None ControllerId; );
};


instance 1ab5e0b0640
class GameModeBase public : Info
{
	// Fields
	FString OptionsString; // 0x218
	GameSession* GameSessionClass; // 0x228
	GameStateBase* GameStateClass; // 0x230
	PlayerController* PlayerControllerClass; // 0x238
	PlayerState* PlayerStateClass; // 0x240
	HUD* HUDClass; // 0x248
	Pawn* DefaultPawnClass; // 0x250
	SpectatorPawn* SpectatorClass; // 0x258
	PlayerController* ReplaySpectatorPlayerControllerClass; // 0x260
	ServerStatReplicator* ServerStatReplicatorClass; // 0x268
	GameSession* GameSession; // 0x270
	GameStateBase* GameState; // 0x278
	ServerStatReplicator* ServerStatReplicator; // 0x280
	FText DefaultPlayerName; // 0x288
	bool bUseSeamlessTravel; // 0x2a0
	bool bStartPlayersAsSpectators; // 0x2a0
	bool bPauseable; // 0x2a0

	// Functions
	StartPlay 0x439c4 hash 16791e9 params:(  );
	SpawnDefaultPawnFor 0x27ee7 hash 48f11030 params:( Controller NewPlayer;Actor StartSpot;Pawn ReturnValue; );
	SpawnDefaultPawnAtTransform 0x27ed8 hash 843a6bda params:( Controller NewPlayer;Transform SpawnTransform;Pawn ReturnValue; );
	ShouldReset 0x27ed1 hash b1a97e37 params:( Actor ActorToReset;None ReturnValue; );
	ReturnToMainMenuHost 0x439b9 hash b2736000 params:(  );
	RestartPlayerAtTransform 0x439ac hash 34aac468 params:( Controller NewPlayer;Transform SpawnTransform; );
	RestartPlayerAtPlayerStart 0x4399e hash e7e44407 params:( Controller NewPlayer;Actor StartSpot; );
	RestartPlayer 0x43996 hash e330d597 params:( Controller NewPlayer; );
	ResetLevel 0x43990 hash aa49f60 params:(  );
	PlayerCanRestart 0x27ec8 hash 6d6e91a9 params:( PlayerController Player;None ReturnValue; );
	MustSpectate 0x27ec1 hash d8037a67 params:( PlayerController NewPlayerController;None ReturnValue; );
	K2_PostLogin 0x27eba hash bc029be0 params:( PlayerController NewPlayer; );
	K2_OnSwapPlayerControllers 0x27eac hash 970377d params:( PlayerController OldPC;PlayerController NewPC; );
	K2_OnRestartPlayer 0x27ea2 hash a443a8d0 params:( Controller NewPlayer; );
	K2_OnLogout 0x27e9b hash b7030898 params:( Controller ExitingController; );
	K2_OnChangeName 0x27e92 hash d02ef1a5 params:( Controller Other;None NewName;None bNameChange; );
	K2_FindPlayerStart 0x43986 hash 20a8531d params:( Controller Player;None IncomingName;Actor ReturnValue; );
	InitStartSpot 0x27e8a hash aec4046d params:( Actor StartSpot;Controller NewPlayer; );
	InitializeHUDForPlayer 0x27e7e hash 1fc4970c params:( PlayerController NewPlayer; );
	HasMatchStarted 0x43683 hash c812c3a5 params:( None ReturnValue; );
	HandleStartingNewPlayer 0x27e71 hash ae749474 params:( PlayerController NewPlayer; );
	GetNumSpectators 0x4397d hash 11c9587d params:( None ReturnValue; );
	GetNumPlayers 0x43975 hash 4fbbf1b5 params:( None ReturnValue; );
	GetDefaultPawnClassForController 0x27e60 hash bca86dc1 params:( Controller InController;Class ReturnValue; );
	FindPlayerStart 0x27e57 hash 6462fee1 params:( Controller Player;None IncomingName;Actor ReturnValue; );
	ChoosePlayerStart 0x27e4d hash eed73061 params:( Controller Player;Actor ReturnValue; );
	ChangeName 0x4396f hash 270afbcc params:( Controller Controller;None NewName;None bNameChange; );
	CanSpectate 0x27e46 hash a1d32690 params:( PlayerController Viewer;PlayerState ViewTarget;None ReturnValue; );
};


instance 1ab5e0b0880
class GameMode public : GameModeBase
{
	// Fields
	FName MatchState; // 0x2b8
	bool bDelayedStart; // 0x2c0
	int NumSpectators; // 0x2c4
	int NumPlayers; // 0x2c8
	int NumBots; // 0x2cc
	float MinRespawnDelay; // 0x2d0
	int NumTravellingPlayers; // 0x2d4
	LocalMessage* EngineMessageClass; // 0x2d8
	TArray InactivePlayerArray; // 0x2e0
	float InactivePlayerStateLifeSpan; // 0x2f0
	int MaxInactivePlayers; // 0x2f4
	bool bHandleDedicatedServerReplays; // 0x2f8

	// Functions
	StartMatch 0x439fb hash 2e1dcbc0 params:(  );
	SetBandwidthLimit 0x439f1 hash 26d16de5 params:( None AsyncIOBandwidthLimit; );
	Say 0x426ff hash b8820f2 params:( None Msg; );
	RestartGame 0x439ea hash da1b2364 params:(  );
	ReadyToStartMatch 0x27e18 hash b48d7438 params:( None ReturnValue; );
	ReadyToEndMatch 0x27e0f hash 6df5921 params:( None ReturnValue; );
	K2_OnSetMatchState 0x27e05 hash cd8a5df8 params:( None NewState; );
	IsMatchInProgress 0x439e0 hash d0d7fb5a params:( None ReturnValue; );
	HasMatchEnded 0x439d8 hash 593760ee params:( None ReturnValue; );
	GetMatchState 0x439d0 hash 540318b3 params:( None ReturnValue; );
	EndMatch 0x41566 hash 2be42ea9 params:(  );
	AbortMatch 0x439ca hash a03949aa params:(  );
};


instance 1ab5e0b91c0
class Engine public : Object
{
	// Fields
	Font* TinyFont; // 0x30
	SoftObjectPath TinyFontName; // 0x38
	Font* SmallFont; // 0x50
	SoftObjectPath SmallFontName; // 0x58
	Font* MediumFont; // 0x70
	SoftObjectPath MediumFontName; // 0x78
	Font* LargeFont; // 0x90
	SoftObjectPath LargeFontName; // 0x98
	Font* SubtitleFont; // 0xb0
	SoftObjectPath SubtitleFontName; // 0xb8
	TArray AdditionalFonts; // 0xd0
	TArray AdditionalFontNames; // 0xe8
	Console* ConsoleClass; // 0xf8
	SoftClassPath ConsoleClassName; // 0x100
	GameViewportClient* GameViewportClientClass; // 0x118
	SoftClassPath GameViewportClientClassName; // 0x120
	LocalPlayer* LocalPlayerClass; // 0x138
	SoftClassPath LocalPlayerClassName; // 0x140
	WorldSettings* WorldSettingsClass; // 0x158
	SoftClassPath WorldSettingsClassName; // 0x160
	SoftClassPath NavigationSystemClassName; // 0x178
	NavigationSystemBase* NavigationSystemClass; // 0x190
	SoftClassPath NavigationSystemConfigClassName; // 0x198
	NavigationSystemConfig* NavigationSystemConfigClass; // 0x1b0
	SoftClassPath AvoidanceManagerClassName; // 0x1b8
	AvoidanceManager* AvoidanceManagerClass; // 0x1d0
	PhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x1d8
	SoftClassPath PhysicsCollisionHandlerClassName; // 0x1e0
	SoftClassPath GameUserSettingsClassName; // 0x1f8
	GameUserSettings* GameUserSettingsClass; // 0x210
	SoftClassPath AIControllerClassName; // 0x218
	GameUserSettings* GameUserSettings; // 0x230
	LevelScriptActor* LevelScriptActorClass; // 0x238
	SoftClassPath LevelScriptActorClassName; // 0x240
	SoftClassPath DefaultBlueprintBaseClassName; // 0x258
	SoftClassPath GameSingletonClassName; // 0x270
	Object* GameSingleton; // 0x288
	SoftClassPath AssetManagerClassName; // 0x290
	AssetManager* AssetManager; // 0x2a8
	Texture2D* DefaultTexture; // 0x2b0
	SoftObjectPath DefaultTextureName; // 0x2b8
	Texture* DefaultDiffuseTexture; // 0x2d0
	SoftObjectPath DefaultDiffuseTextureName; // 0x2d8
	Texture2D* DefaultBSPVertexTexture; // 0x2f0
	SoftObjectPath DefaultBSPVertexTextureName; // 0x2f8
	Texture2D* HighFrequencyNoiseTexture; // 0x310
	SoftObjectPath HighFrequencyNoiseTextureName; // 0x318
	Texture2D* DefaultBokehTexture; // 0x330
	SoftObjectPath DefaultBokehTextureName; // 0x338
	Texture2D* DefaultBloomKernelTexture; // 0x350
	SoftObjectPath DefaultBloomKernelTextureName; // 0x358
	Material* WireframeMaterial; // 0x370
	FString WireframeMaterialName; // 0x378
	Material* HairDefaultMaterial; // 0x388
	FString HairDefaultMaterialName; // 0x390
	Material* HairDebugMaterial; // 0x3a0
	FString HairDebugMaterialName; // 0x3a8
	Material* DebugMeshMaterial; // 0x3b8
	SoftObjectPath DebugMeshMaterialName; // 0x3c0
	Material* EmissiveMeshMaterial; // 0x3d8
	SoftObjectPath EmissiveMeshMaterialName; // 0x3e0
	Material* LevelColorationLitMaterial; // 0x3f8
	FString LevelColorationLitMaterialName; // 0x400
	Material* LevelColorationUnlitMaterial; // 0x410
	FString LevelColorationUnlitMaterialName; // 0x418
	Material* LightingTexelDensityMaterial; // 0x428
	FString LightingTexelDensityName; // 0x430
	Material* ShadedLevelColorationLitMaterial; // 0x440
	FString ShadedLevelColorationLitMaterialName; // 0x448
	Material* ShadedLevelColorationUnlitMaterial; // 0x458
	FString ShadedLevelColorationUnlitMaterialName; // 0x460
	Material* RemoveSurfaceMaterial; // 0x470
	SoftObjectPath RemoveSurfaceMaterialName; // 0x478
	Material* VertexColorMaterial; // 0x490
	FString VertexColorMaterialName; // 0x498
	Material* VertexColorViewModeMaterial_ColorOnly; // 0x4a8
	FString VertexColorViewModeMaterialName_ColorOnly; // 0x4b0
	Material* VertexColorViewModeMaterial_AlphaAsColor; // 0x4c0
	FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x4c8
	Material* VertexColorViewModeMaterial_RedOnly; // 0x4d8
	FString VertexColorViewModeMaterialName_RedOnly; // 0x4e0
	Material* VertexColorViewModeMaterial_GreenOnly; // 0x4f0
	FString VertexColorViewModeMaterialName_GreenOnly; // 0x4f8
	Material* VertexColorViewModeMaterial_BlueOnly; // 0x508
	FString VertexColorViewModeMaterialName_BlueOnly; // 0x510
	SoftObjectPath DebugEditorMaterialName; // 0x520
	Material* ConstraintLimitMaterial; // 0x538
	MaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x540
	MaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x548
	MaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x550
	MaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x558
	MaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x560
	MaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x568
	MaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x570
	Material* InvalidLightmapSettingsMaterial; // 0x578
	SoftObjectPath InvalidLightmapSettingsMaterialName; // 0x580
	Material* PreviewShadowsIndicatorMaterial; // 0x598
	SoftObjectPath PreviewShadowsIndicatorMaterialName; // 0x5a0
	Material* ArrowMaterial; // 0x5b8
	MaterialInstanceDynamic* ArrowMaterialYellow; // 0x5c0
	SoftObjectPath ArrowMaterialName; // 0x5c8
	LinearColor LightingOnlyBrightness; // 0x5e0
	TArray ShaderComplexityColors; // 0x5f0
	TArray QuadComplexityColors; // 0x600
	TArray LightComplexityColors; // 0x610
	TArray StationaryLightOverlapColors; // 0x620
	TArray LODColorationColors; // 0x630
	TArray HLODColorationColors; // 0x640
	TArray StreamingAccuracyColors; // 0x650
	float MaxPixelShaderAdditiveComplexityCount; // 0x660
	float MaxES2PixelShaderAdditiveComplexityCount; // 0x664
	float MaxES3PixelShaderAdditiveComplexityCount; // 0x668
	float MinLightMapDensity; // 0x66c
	float IdealLightMapDensity; // 0x670
	float MaxLightMapDensity; // 0x674
	bool bRenderLightMapDensityGrayscale; // 0x678
	float RenderLightMapDensityGrayscaleScale; // 0x67c
	float RenderLightMapDensityColorScale; // 0x680
	LinearColor LightMapDensityVertexMappedColor; // 0x684
	LinearColor LightMapDensitySelectedColor; // 0x694
	TArray StatColorMappings; // 0x6a8
	PhysicalMaterial* DefaultPhysMaterial; // 0x6b8
	SoftObjectPath DefaultPhysMaterialName; // 0x6c0
	TArray ActiveGameNameRedirects; // 0x6d8
	TArray ActiveClassRedirects; // 0x6e8
	TArray ActivePluginRedirects; // 0x6f8
	TArray ActiveStructRedirects; // 0x708
	Texture2D* PreIntegratedSkinBRDFTexture; // 0x718
	SoftObjectPath PreIntegratedSkinBRDFTextureName; // 0x720
	Texture2D* BlueNoiseTexture; // 0x738
	SoftObjectPath BlueNoiseTextureName; // 0x740
	Texture2D* MiniFontTexture; // 0x758
	SoftObjectPath MiniFontTextureName; // 0x760
	Texture* WeightMapPlaceholderTexture; // 0x778
	SoftObjectPath WeightMapPlaceholderTextureName; // 0x780
	Texture2D* LightMapDensityTexture; // 0x798
	SoftObjectPath LightMapDensityTextureName; // 0x7a0
	GameViewportClient* GameViewport; // 0x7c0
	TArray DeferredCommands; // 0x7c8
	int TickCycles; // 0x7d8
	int GameCycles; // 0x7dc
	int ClientCycles; // 0x7e0
	float NearClipPlane; // 0x7e4
	bool bHardwareSurveyEnabled; // 0x7e8
	bool bSubtitlesEnabled; // 0x7e8
	bool bSubtitlesForcedOff; // 0x7e8
	int MaximumLoopIterationCount; // 0x7ec
	bool bCanBlueprintsTickByDefault; // 0x7f0
	bool bOptimizeAnimBlueprintMemberVariableAccess; // 0x7f0
	bool bAllowMultiThreadedAnimationUpdate; // 0x7f0
	bool bEnableEditorPSysRealtimeLOD; // 0x7f0
	bool bSmoothFrameRate; // 0x7f0
	bool bUseFixedFrameRate; // 0x7f0
	float FixedFrameRate; // 0x7f4
	FloatRange SmoothedFrameRateRange; // 0x7f8
	EngineCustomTimeStep* DefaultCustomTimeStep; // 0x808
	EngineCustomTimeStep* CurrentCustomTimeStep; // 0x810
	SoftClassPath CustomTimeStepClassName; // 0x818
	TimecodeProvider* DefaultTimecodeProvider; // 0x830
	TimecodeProvider* CustomTimecodeProvider; // 0x838
	SoftClassPath DefaultTimecodeProviderClassName; // 0x840
	SoftClassPath TimecodeProviderClassName; // 0x858
	FrameRate DefaultTimecodeFrameRate; // 0x870
	bool bCheckForMultiplePawnsSpawnedInAFrame; // 0x878
	int NumPawnsAllowedToBeSpawnedInAFrame; // 0x87c
	bool bShouldGenerateLowQualityLightmaps; // 0x880
	Color C_WorldBox; // 0x884
	Color C_BrushWire; // 0x888
	Color C_AddWire; // 0x88c
	Color C_SubtractWire; // 0x890
	Color C_SemiSolidWire; // 0x894
	Color C_NonSolidWire; // 0x898
	Color C_WireBackground; // 0x89c
	Color C_ScaleBoxHi; // 0x8a0
	Color C_VolumeCollision; // 0x8a4
	Color C_BSPCollision; // 0x8a8
	Color C_OrthoBackground; // 0x8ac
	Color C_Volume; // 0x8b0
	Color C_BrushShape; // 0x8b4
	float StreamingDistanceFactor; // 0x8b8
	DirectoryPath GameScreenshotSaveDirectory; // 0x8c0
	ETransitionType TransitionType; // 0x8d0
	FString TransitionDescription; // 0x8d8
	FString TransitionGameMode; // 0x8e8
	float MeshLODRange; // 0x8f8
	bool bAllowMatureLanguage; // 0x8fc
	float CameraRotationThreshold; // 0x900
	float CameraTranslationThreshold; // 0x904
	float PrimitiveProbablyVisibleTime; // 0x908
	float MaxOcclusionPixelsFraction; // 0x90c
	bool bPauseOnLossOfFocus; // 0x910
	int MaxParticleResize; // 0x914
	int MaxParticleResizeWarn; // 0x918
	TArray PendingDroppedNotes; // 0x920
	float NetClientTicksPerSecond; // 0x930
	float DisplayGamma; // 0x934
	float MinDesiredFrameRate; // 0x938
	LinearColor DefaultSelectedMaterialColor; // 0x93c
	LinearColor SelectedMaterialColor; // 0x94c
	LinearColor SelectionOutlineColor; // 0x95c
	LinearColor SubduedSelectionOutlineColor; // 0x96c
	LinearColor SelectedMaterialColorOverride; // 0x97c
	bool bIsOverridingSelectedColor; // 0x98c
	bool bEnableOnScreenDebugMessages; // 0x990
	bool bEnableOnScreenDebugMessagesDisplay; // 0x990
	bool bSuppressMapWarnings; // 0x990
	bool bDisableAILogging; // 0x990
	int bEnableVisualLogRecordingOnStart; // 0x994
	int ScreenSaverInhibitorSemaphore; // 0x99c
	bool bLockReadOnlyLevels; // 0x9a0
	FString ParticleEventManagerClassPath; // 0x9a8
	float SelectionHighlightIntensity; // 0x9c8
	float BSPSelectionHighlightIntensity; // 0x9cc
	float SelectionHighlightIntensityBillboards; // 0x9d0
	TArray NetDriverDefinitions; // 0xc00
	TArray ServerActors; // 0xc10
	TArray RuntimeServerActors; // 0xc20
	float NetErrorLogInterval; // 0xc30
	bool bStartedLoadMapMovie; // 0xc34
	int NextWorldContextHandle; // 0xc50

};


instance 1ab5e0b8d40
class ScriptViewportClient public : Object
{
	// Fields

};


instance 1ab5e0b8f80
class GameViewportClient public : ScriptViewportClient
{
	// Fields
	Console* ViewportConsole; // 0x40
	TArray DebugProperties; // 0x48
	World* World; // 0x78
	GameInstance* GameInstance; // 0x80

	// Functions
	SSSwapControllers 0x43a55 hash 16fa1b3d params:(  );
	ShowTitleSafeArea 0x43a4b hash 503b41e0 params:(  );
	SetConsoleTarget 0x43a42 hash 6ccae9ab params:( None PlayerIndex; );
};


instance 1ab5e0b8440
class HUD public : Actor
{
	// Fields
	PlayerController* PlayerOwner; // 0x218
	bool bLostFocusPaused; // 0x220
	bool bShowHUD; // 0x220
	bool bShowDebugInfo; // 0x220
	int CurrentTargetIndex; // 0x224
	bool bShowHitBoxDebugInfo; // 0x228
	bool bShowOverlays; // 0x228
	bool bEnableDebugTextShadow; // 0x228
	TArray PostRenderedActors; // 0x230
	TArray DebugDisplay; // 0x248
	TArray ToggledDebugCategories; // 0x258
	Canvas* Canvas; // 0x268
	Canvas* DebugCanvas; // 0x270
	TArray DebugTextList; // 0x278
	Actor* ShowDebugTargetDesiredClass; // 0x288
	Actor* ShowDebugTargetActor; // 0x290

	// Functions
	ShowHUD 0x43b2d hash f394efe7 params:(  );
	ShowDebugToggleSubCategory 0x43b1f hash 12ea2037 params:( None Category; );
	ShowDebugForReticleTargetToggle 0x43b0e hash 12b12c5 params:( Class DesiredClass; );
	ShowDebug 0x43b08 hash 2c5178cd params:( None DebugType; );
	RemoveDebugText 0x283d9 hash 1375eb7f params:( Actor SrcActor;None bLeaveDurationText; );
	RemoveAllDebugStrings 0x283cd hash 5d0c7dbd params:(  );
	ReceiveHitBoxRelease 0x283c2 hash 33ce15f7 params:( None BoxName; );
	ReceiveHitBoxEndCursorOver 0x283b4 hash 8d777e07 params:( None BoxName; );
	ReceiveHitBoxClick 0x283aa hash 41c3a51c params:( None BoxName; );
	ReceiveHitBoxBeginCursorOver 0x2839b hash de038895 params:( None BoxName; );
	ReceiveDrawHUD 0x28393 hash f6546a97 params:( None SizeX;None SizeY; );
	Project 0x43b03 hash 23f32c5c params:( Vector Location;Vector ReturnValue; );
	PreviousDebugTarget 0x43af8 hash 554a3a30 params:(  );
	NextDebugTarget 0x43aef hash 76526ed2 params:(  );
	GetTextSize 0x43ae8 hash 4d4fcd85 params:( None Text;None OutWidth;None OutHeight;Font Font;None Scale; );
	GetOwningPlayerController 0x43ada hash f503cb48 params:( PlayerController ReturnValue; );
	GetOwningPawn 0x43ad2 hash b27180ed params:( Pawn ReturnValue; );
	GetActorsInSelectionRectangle 0x43ac2 hash acfba103 params:( Class ClassFilter;Vector2D FirstPoint;Vector2D SecondPoint;OutActors OutActors;None bIncludeNonCollidingComponents;None bActorMustBeFullyEnclosed; );
	DrawTextureSimple 0x43ab8 hash 9f53a80e params:( Texture Texture;None ScreenX;None ScreenY;None Scale;None bScalePosition; );
	DrawTexture 0x43ab1 hash 50f163e4 params:( Texture Texture;None ScreenX;None ScreenY;None ScreenW;None ScreenH;None TextureU;None TextureV;None TextureUWidth;None TextureVHeight;LinearColor TintColor;EBlendMode BlendMode;None Scale;None bScalePosition;None Rotation;Vector2D RotPivot; );
	DrawText 0x43aac hash 6f7c7a18 params:( None Text;LinearColor TextColor;None ScreenX;None ScreenY;Font Font;None Scale;None bScalePosition; );
	DrawRect 0x43aa7 hash 6f7b5ea1 params:( LinearColor RectColor;None ScreenX;None ScreenY;None ScreenW;None ScreenH; );
	DrawMaterialTriangle 0x43a9c hash c3beb078 params:( MaterialInterface Material;Vector2D V0_Pos;Vector2D V1_Pos;Vector2D V2_Pos;Vector2D V0_UV;Vector2D V1_UV;Vector2D V2_UV;LinearColor V0_Color;LinearColor V1_Color;LinearColor V2_Color; );
	DrawMaterialSimple 0x43a92 hash 949c584c params:( MaterialInterface Material;None ScreenX;None ScreenY;None ScreenW;None ScreenH;None Scale;None bScalePosition; );
	DrawMaterial 0x43a8b hash bb023da2 params:( MaterialInterface Material;None ScreenX;None ScreenY;None ScreenW;None ScreenH;None MaterialU;None MaterialV;None MaterialUWidth;None MaterialVHeight;None Scale;None bScalePosition;None Rotation;Vector2D RotPivot; );
	DrawLine 0x43a86 hash 6f7826bb params:( None StartScreenX;None StartScreenY;None EndScreenX;None EndScreenY;LinearColor LineColor;None LineThickness; );
	Deproject 0x43a80 hash d89eb2c5 params:( None ScreenX;None ScreenY;Vector WorldPosition;Vector WorldDirection; );
	AddHitBox 0x43a7a hash 90cc5cdc params:( Vector2D Position;Vector2D Size;None InName;None bConsumesInput;None Priority; );
	AddDebugText 0x2838c hash 29fa763a params:( None DebugText;Actor SrcActor;None Duration;Vector Offset;Vector DesiredOffset;Color TextColor;None bSkipOverwriteCheck;None bAbsoluteLocation;None bKeepAttachedToActor;Font InFont;None FontScale;None bDrawShadow; );
};


instance 1ab5e0bde40
class PhysicalMaterial public : Object
{
	// Fields
	float Friction; // 0x28
	BYTE FrictionCombineMode; // 0x2c
	bool bOverrideFrictionCombineMode; // 0x2d
	float Restitution; // 0x30
	BYTE RestitutionCombineMode; // 0x34
	bool bOverrideRestitutionCombineMode; // 0x35
	float Density; // 0x38
	float RaiseMassToPower; // 0x3c
	float DestructibleDamageThresholdScale; // 0x40
	PhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x48
	BYTE SurfaceType; // 0x50
	float TireFrictionScale; // 0x54
	TArray TireFrictionScales; // 0x58

};


instance 1ab5e0bd9c0
class PlayerController public : Controller
{
	// Fields
	Player* Player; // 0x290
	Pawn* AcknowledgedPawn; // 0x298
	InterpTrackInstDirector* ControllingDirTrackInst; // 0x2a0
	HUD* MyHUD; // 0x2a8
	PlayerCameraManager* PlayerCameraManager; // 0x2b0
	PlayerCameraManager* PlayerCameraManagerClass; // 0x2b8
	bool bAutoManageActiveCameraTarget; // 0x2c0
	Rotator TargetViewRotation; // 0x2c4
	float SmoothTargetViewRotationSpeed; // 0x2dc
	TArray HiddenActors; // 0x2e8
	TArray HiddenPrimitiveComponents; // 0x2f8
	float LastSpectatorStateSynchTime; // 0x30c
	Vector LastSpectatorSyncLocation; // 0x310
	Rotator LastSpectatorSyncRotation; // 0x31c
	int ClientCap; // 0x328
	CheatManager* CheatManager; // 0x330
	CheatManager* CheatClass; // 0x338
	PlayerInput* PlayerInput; // 0x340
	TArray ActiveForceFeedbackEffects; // 0x348
	bool bPlayerIsWaiting; // 0x3c8
	BYTE NetPlayerIndex; // 0x3cc
	NetConnection* PendingSwapConnection; // 0x408
	NetConnection* NetConnection; // 0x410
	float InputYawScale; // 0x424
	float InputPitchScale; // 0x428
	float InputRollScale; // 0x42c
	bool bShowMouseCursor; // 0x430
	bool bEnableClickEvents; // 0x430
	bool bEnableTouchEvents; // 0x430
	bool bEnableMouseOverEvents; // 0x430
	bool bEnableTouchOverEvents; // 0x430
	bool bForceFeedbackEnabled; // 0x430
	float ForceFeedbackScale; // 0x434
	TArray ClickEventKeys; // 0x438
	BYTE DefaultMouseCursor; // 0x448
	BYTE CurrentMouseCursor; // 0x449
	BYTE DefaultClickTraceChannel; // 0x44a
	BYTE CurrentClickTraceChannel; // 0x44b
	float HitResultTraceDistance; // 0x44c
	USHORT SeamlessTravelCount; // 0x450
	USHORT LastCompletedSeamlessTravelCount; // 0x452
	InputComponent* InactiveStateInputComponent; // 0x4c8
	bool bShouldPerformFullTickWhenPaused; // 0x4d0
	TouchInterface* CurrentTouchInterface; // 0x4e8
	SpectatorPawn* SpectatorPawn; // 0x540
	bool bIsLocalPlayerController; // 0x54c
	Vector SpawnLocation; // 0x550

	// Functions
	WasInputKeyJustReleased 0x4423f hash 9823d1d4 params:( Key Key;None ReturnValue; );
	WasInputKeyJustPressed 0x44233 hash f51f46a5 params:( Key Key;None ReturnValue; );
	ToggleSpeaking 0x4422b hash 24f6b399 params:( None bInSpeaking; );
	TestServerLevelVisibilityChange 0x4421a hash 2217aa62 params:( None PackageName;None Filename; );
	SwitchLevel 0x44213 hash 9b377daf params:( None URL; );
	StopHapticEffect 0x4420a hash 47907ab1 params:( UnderlyingType Hand; );
	StartFire 0x42cec hash 1620b79 params:( None FireModeNum; );
	SetVirtualJoystickVisibility 0x441fb hash 1ccfe810 params:( None bVisible; );
	SetViewTargetWithBlend 0x441ef hash 7f790c74 params:( Actor NewViewTarget;None BlendTime;EViewTargetBlendFunction BlendFunc;None BlendExp;None bLockOutgoing; );
	SetName 0x441ea hash ecd9e292 params:( None S; );
	SetMouseLocation 0x441e1 hash 3bb81ad3 params:( None X;None Y; );
	SetMouseCursorWidget 0x441d6 hash f18100bc params:( EMouseCursor Cursor;UserWidget CursorWidget; );
	SetHapticsByValue 0x441cc hash 45da1e15 params:( None Frequency;None Amplitude;UnderlyingType Hand; );
	SetDisableHaptics 0x441c2 hash 2908fb71 params:( None bNewDisabled; );
	SetControllerLightColor 0x441b5 hash d3c264ac params:( Color Color; );
	SetCinematicMode 0x441ac hash b26baf43 params:( None bInCinematicMode;None bHidePlayer;None bAffectsHUD;None bAffectsMovement;None bAffectsTurning; );
	SetAudioListenerOverride 0x4419f hash 49422369 params:( SceneComponent AttachToComponent;Vector Location;Rotator Rotation; );
	SetAudioListenerAttenuationOverride 0x4418c hash 8c3a2435 params:( SceneComponent AttachToComponent;Vector AttenuationLocationOVerride; );
	ServerViewSelf 0x32624 hash 345a3821 params:( ViewTargetTransitionParams TransitionParams; );
	ServerViewPrevPlayer 0x32619 hash 33e55a21 params:(  );
	ServerViewNextPlayer 0x3260e hash 306cce03 params:(  );
	ServerVerifyViewTarget 0x32602 hash 24428ab3 params:(  );
	ServerUpdateMultipleLevelsVisibility 0x325ef hash f4e70a7e params:( LevelVisibilities LevelVisibilities; );
	ServerUpdateLevelVisibility 0x325e0 hash f9a6c39f params:( UpdateLevelVisibilityLevelInfo LevelVisibility; );
	ServerUpdateCamera 0x325d6 hash 4ba0a788 params:( Vector_NetQuantize CamLoc;None CamPitchAndYaw; );
	ServerUnmutePlayer 0x325cc hash 9e1307e7 params:( UniqueNetIdRepl PlayerId; );
	ServerToggleAILogging 0x256de hash a90cca2f params:(  );
	ServerShortTimeout 0x325c2 hash e466ed53 params:(  );
	ServerSetSpectatorWaiting 0x325b4 hash b5856230 params:( None bWaiting; );
	ServerSetSpectatorLocation 0x325a6 hash 65bc0416 params:( Vector NewLoc;Rotator NewRot; );
	ServerRestartPlayer 0x3259b hash c2a00c6e params:(  );
	ServerPause 0x32594 hash f4eb29fa params:(  );
	ServerNotifyLoadedWorld 0x32587 hash 7fec6fa6 params:( None WorldPackageName; );
	ServerMutePlayer 0x3257e hash 6cfbb1a4 params:( UniqueNetIdRepl PlayerId; );
	ServerExecRPC 0x32576 hash c2190646 params:( None Msg; );
	ServerExec 0x44186 hash 1eac2281 params:( None Msg; );
	ServerCheckClientPossessionReliable 0x32563 hash a71d4f4f params:(  );
	ServerCheckClientPossession 0x32554 hash 4a0f374f params:(  );
	ServerChangeName 0x3254b hash bb46ca03 params:( None S; );
	ServerCamera 0x32544 hash 73f8bc85 params:( None NewMode; );
	ServerAcknowledgePossession 0x32535 hash 6e005496 params:( Pawn P; );
	SendToConsole 0x4417e hash 349837c5 params:( None Command; );
	RestartLevel 0x44177 hash 1ddc62a2 params:(  );
	ResetControllerLightColor 0x44169 hash 2f6c2723 params:(  );
	ProjectWorldLocationToScreen 0x4415a hash 1394e4e0 params:( Vector WorldLocation;Vector2D ScreenLocation;None bPlayerViewportRelative;None ReturnValue; );
	PlayHapticEffect 0x44151 hash 9589c9c1 params:( HapticFeedbackEffect_Base HapticEffect;UnderlyingType Hand;None Scale;None bLoop; );
	PlayDynamicForceFeedback 0x44144 hash d75493f4 params:( None Intensity;None Duration;None bAffectsLeftLarge;None bAffectsLeftSmall;None bAffectsRightLarge;None bAffectsRightSmall;EDynamicForceFeedbackAction Action;LatentActionInfo LatentInfo; );
	Pause 0xb98f hash dddda23 params:(  );
	OnServerStartedVisualLogger 0x32526 hash 864a8f04 params:( None bIsLogging; );
	LocalTravel 0x4413d hash 1a5ef4fe params:( None URL; );
	K2_ClientPlayForceFeedback 0x4412f hash a0b7318a params:( ForceFeedbackEffect ForceFeedbackEffect;None Tag;None bLooping;None bIgnoreTimeDilation;None bPlayWhilePaused; );
	IsInputKeyDown 0x44127 hash 6d9464d2 params:( Key Key;None ReturnValue; );
	GetViewportSize 0x4411e hash ebc32c20 params:( None SizeX;None SizeY; );
	GetSpectatorPawn 0x44115 hash f2a57350 params:( SpectatorPawn ReturnValue; );
	GetMousePosition 0x4410c hash 8024f5e3 params:( None LocationX;None LocationY;None ReturnValue; );
	GetInputVectorKeyState 0x44100 hash f129652 params:( Key Key;Vector ReturnValue; );
	GetInputTouchState 0x440f6 hash f79d4919 params:( ETouchIndex FingerIndex;None LocationX;None LocationY;None bIsCurrentlyPressed; );
	GetInputMouseDelta 0x440ec hash a2e028e8 params:( None DeltaX;None DeltaY; );
	GetInputMotionState 0x440e1 hash b253ea0c params:( Vector Tilt;Vector RotationRate;Vector Gravity;Vector Acceleration; );
	GetInputKeyTimeDown 0x440d6 hash 9531a085 params:( Key Key;None ReturnValue; );
	GetInputAnalogStickState 0x440c9 hash 17ed89c6 params:( EControllerAnalogStick WhichStick;None StickX;None StickY; );
	GetInputAnalogKeyState 0x440bd hash 6efff1d1 params:( Key Key;None ReturnValue; );
	GetHUD 0x440b9 hash b4e1cdc6 params:( HUD ReturnValue; );
	GetHitResultUnderFingerForObjects 0x440a7 hash e383b133 params:( ETouchIndex FingerIndex;ObjectTypes ObjectTypes;None bTraceComplex;HitResult HitResult;None ReturnValue; );
	GetHitResultUnderFingerByChannel 0x44096 hash b6613556 params:( ETouchIndex FingerIndex;ETraceTypeQuery TraceChannel;None bTraceComplex;HitResult HitResult;None ReturnValue; );
	GetHitResultUnderFinger 0x44089 hash 26857aa2 params:( ETouchIndex FingerIndex;ECollisionChannel TraceChannel;None bTraceComplex;HitResult HitResult;None ReturnValue; );
	GetHitResultUnderCursorForObjects 0x44077 hash f53462f6 params:( ObjectTypes ObjectTypes;None bTraceComplex;HitResult HitResult;None ReturnValue; );
	GetHitResultUnderCursorByChannel 0x44066 hash 52113ab9 params:( ETraceTypeQuery TraceChannel;None bTraceComplex;HitResult HitResult;None ReturnValue; );
	GetHitResultUnderCursor 0x44059 hash 20618ca5 params:( ECollisionChannel TraceChannel;None bTraceComplex;HitResult HitResult;None ReturnValue; );
	GetFocalLocation 0x44050 hash 3c535e3 params:( Vector ReturnValue; );
	FOV 0x4404d hash b87e730 params:( None NewFOV; );
	EnableCheats 0x44046 hash a6117d64 params:(  );
	DeprojectScreenPositionToWorld 0x44036 hash e5aea585 params:( None ScreenX;None ScreenY;Vector WorldLocation;Vector WorldDirection;None ReturnValue; );
	DeprojectMousePositionToWorld 0x44026 hash 62eb7f2e params:( Vector WorldLocation;Vector WorldDirection;None ReturnValue; );
	ConsoleKey 0x44020 hash e9e140c1 params:( Key Key; );
	ClientWasKicked 0x3251d hash baca0b5a params:( None KickReason; );
	ClientVoiceHandshakeComplete 0x3250e hash a387885a params:(  );
	ClientUpdateMultipleLevelsStreamingStatus 0x324f8 hash 3b3d0bec params:( LevelStatuses LevelStatuses; );
	ClientUpdateLevelStreamingStatus 0x324e7 hash c6539cad params:( None PackageName;None bNewShouldBeLoaded;None bNewShouldBeVisible;None bNewShouldBlockOnLoad;None LODIndex; );
	ClientUnmutePlayer 0x324dd hash 2f098ecf params:( UniqueNetIdRepl PlayerId; );
	ClientTravelInternal 0x324d2 hash 95b833cf params:( None URL;ETravelType TravelType;None bSeamless;Guid MapPackageGuid; );
	ClientTravel 0x44019 hash 3ac33ad2 params:( None URL;ETravelType TravelType;None bSeamless;Guid MapPackageGuid; );
	ClientTeamMessage 0x324c8 hash df70e0d0 params:( PlayerState SenderPlayerState;None S;None Type;None MsgLifeTime; );
	ClientStopForceFeedback 0x324bb hash 4010303e params:( ForceFeedbackEffect ForceFeedbackEffect;None Tag; );
	ClientStopCameraShake 0x324af hash dc63c37f params:( Class Shake;None bImmediately; );
	ClientStopCameraAnim 0x324a4 hash 7b010398 params:( CameraAnim AnimToStop; );
	ClientStartOnlineSession 0x32497 hash 61717f5b params:(  );
	ClientSpawnCameraLensEffect 0x32488 hash c32ba9b5 params:( Class LensEffectEmitterClass; );
	ClientSetViewTarget 0x3247d hash 61f736f2 params:( Actor A;ViewTargetTransitionParams TransitionParams; );
	ClientSetSpectatorWaiting 0x3246f hash 66d21418 params:( None bWaiting; );
	ClientSetHUD 0x32468 hash 378c78f1 params:( Class NewHUDClass; );
	ClientSetForceMipLevelsToBeResident 0x32455 hash 58859db8 params:( MaterialInterface Material;None ForceDuration;None CinematicTextureGroups; );
	ClientSetCinematicMode 0x32449 hash d2bcc5a2 params:( None bInCinematicMode;None bAffectsMovement;None bAffectsTurning;None bAffectsHUD; );
	ClientSetCameraMode 0x3243e hash afa7e59e params:( None NewCamMode; );
	ClientSetCameraFade 0x32433 hash afa3d369 params:( None bEnableFading;Color FadeColor;Vector2D FadeAlpha;None FadeTime;None bFadeAudio; );
	ClientSetBlockOnAsyncLoading 0x32424 hash 3c96f54 params:(  );
	ClientReturnToMainMenuWithTextReason 0x32411 hash 33c212aa params:( None ReturnReason; );
	ClientReturnToMainMenu 0x32405 hash 78fac2a1 params:( None ReturnReason; );
	ClientRetryClientRestart 0x323f8 hash b910251e params:( Pawn NewPawn; );
	ClientRestart 0x323f0 hash dc279be9 params:( Pawn NewPawn; );
	ClientReset 0x323e9 hash ac477e27 params:(  );
	ClientRepObjRef 0x323e0 hash 474dd6e3 params:( Object Object; );
	ClientReceiveLocalizedMessage 0x323d0 hash 84fad043 params:( Class Message;None Switch;PlayerState RelatedPlayerState;PlayerState RelatedPlayerState;Object OptionalObject; );
	ClientPrestreamTextures 0x323c3 hash 852d84bb params:( Actor ForcedActor;None ForceDuration;None bEnableStreaming;None CinematicTextureGroups; );
	ClientPrepareMapChange 0x323b7 hash e5d16f37 params:( None LevelName;None bFirst;None Blast; );
	ClientPlaySoundAtLocation 0x323a9 hash 332e0711 params:( SoundBase Sound;Vector Location;None VolumeMultiplier;None PitchMultiplier; );
	ClientPlaySound 0x323a0 hash b264c683 params:( SoundBase Sound;None VolumeMultiplier;None PitchMultiplier; );
	ClientPlayForceFeedback_Internal 0x3238f hash d53cef6a params:( ForceFeedbackEffect ForceFeedbackEffect;ForceFeedbackParameters Params; );
	ClientPlayCameraShake 0x32383 hash 79e7708f params:( Class Shake;None Scale;ECameraAnimPlaySpace PlaySpace;Rotator UserPlaySpaceRot; );
	ClientPlayCameraAnim 0x32378 hash 513b4ea8 params:( CameraAnim AnimToPlay;None Scale;None Rate;None BlendInTime;None BlendOutTime;None bLoop;None bRandomStartTime;ECameraAnimPlaySpace Space;Rotator CustomPlaySpace; );
	ClientMutePlayer 0x3236f hash 89535e8c params:( UniqueNetIdRepl PlayerId; );
	ClientMessage 0x32367 hash 5b43de49 params:( None S;None Type;None MsgLifeTime; );
	ClientIgnoreMoveInput 0x3235b hash 6cc40def params:( None bIgnore; );
	ClientIgnoreLookInput 0x3234f hash eb6ee76d params:( None bIgnore; );
	ClientGotoState 0x32346 hash fe0ba1be params:( None NewState; );
	ClientGameEnded 0x3233d hash df46275e params:( Actor EndGameFocus;None bIsWinner; );
	ClientForceGarbageCollection 0x3232e hash 40f9bc88 params:(  );
	ClientFlushLevelStreaming 0x32320 hash 5c2238a8 params:(  );
	ClientEndOnlineSession 0x32314 hash 151da784 params:(  );
	ClientEnableNetworkVoice 0x32307 hash c881b84b params:( None bEnable; );
	ClientCommitMapChange 0x322fb hash 4792fbf1 params:(  );
	ClientClearCameraLensEffects 0x322ec hash 6fd8c526 params:(  );
	ClientCapBandwidth 0x322e2 hash 2ae895ad params:( None Cap; );
	ClientCancelPendingMapChange 0x322d3 hash 74bdf93 params:(  );
	ClientAddTextureStreamingLoc 0x322c4 hash 3ed2d106 params:( Vector InLoc;None Duration;None bOverrideLocation; );
	ClearAudioListenerOverride 0x4400b hash b4d26a44 params:(  );
	ClearAudioListenerAttenuationOverride 0x43ff7 hash 9838c30 params:(  );
	CanRestartPlayer 0x43fee hash b99342a9 params:( None ReturnValue; );
	Camera 0x15e hash ab4171ce params:( None NewMode; );
	AddYawInput 0x43fe7 hash 4561c74f params:( None Val; );
	AddRollInput 0x43fe0 hash ae127817 params:( None Val; );
	AddPitchInput 0x43fd8 hash a0556a56 params:( None Val; );
	ActivateTouchInterface 0x43fcc hash 28e2104a params:( TouchInterface NewTouchInterface; );
};


instance 1ab5e0b9d00
class DamageType public : Object
{
	// Fields
	bool bCausedByWorld; // 0x28
	bool bScaleMomentumByMass; // 0x28
	bool bRadialDamageVelChange; // 0x28
	float DamageImpulse; // 0x2c
	float DestructibleImpulse; // 0x30
	float DestructibleDamageSpreadScale; // 0x34
	float DamageFalloff; // 0x38

};


instance 1ab5e0f3a00
class SkyLight public : Info
{
	// Fields
	SkyLightComponent* LightComponent; // 0x218
	bool bEnabled; // 0x220

	// Functions
	OnRep_bEnabled 0x456da hash f2b2e395 params:(  );
};


instance 1ab5e0f3340
class StreamableRenderAsset public : Object
{
	// Fields
	double ForceMipLevelsToBeResidentTimestamp; // 0x28
	int NumCinematicMipLevels; // 0x30
	int StreamingIndex; // 0x34
	int CachedCombinedLODBias; // 0x38
	BYTE CachedNumResidentLODs; // 0x3c
	bool bCachedReadyForStreaming; // 0x3d
	bool NeverStream; // 0x3d
	bool bGlobalForceMipLevelsToBeResident; // 0x3d
	bool bIsStreamable; // 0x3d
	bool bHasStreamingUpdatePending; // 0x3d
	bool bForceMiplevelsToBeResident; // 0x3d
	bool bIgnoreStreamingMipBias; // 0x3d
	bool bUseCinematicMipLevels; // 0x3d

};


instance 1ab5e0f3580
class Texture public : StreamableRenderAsset
{
	// Fields
	Guid LightingGuid; // 0x48
	int LODBias; // 0x58
	BYTE CompressionSettings; // 0x5c
	BYTE Filter; // 0x5d
	ETextureMipLoadOptions MipLoadOptions; // 0x5e
	BYTE LODGroup; // 0x5f
	bool SRGB; // 0x60
	bool bNoTiling; // 0x60
	bool VirtualTextureStreaming; // 0x60
	bool CompressionYCoCg; // 0x60
	bool bAsyncResourceReleaseHasBeenStarted; // 0x60
	TArray AssetUserData; // 0x68

};


instance 1ab5e0f2a40
class TextureCube public : Texture
{
	// Fields

};


instance 1ab5e0f7d80
class StaticMeshActor public : Actor
{
	// Fields
	StaticMeshComponent* StaticMeshComponent; // 0x218
	bool bStaticMeshReplicateMovement; // 0x220
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x221

	// Functions
	SetMobility 0x3e294 hash e597035a params:( EComponentMobility InMobility; );
};


instance 1ab5e0fdc00
class MaterialInterface public : Object
{
	// Fields
	SubsurfaceProfile* SubsurfaceProfile; // 0x38
	LightmassMaterialInterfaceSettings LightmassSettings; // 0x50
	TArray TextureStreamingData; // 0x60
	TArray AssetUserData; // 0x70

	// Functions
	SetForceMipLevelsToBeResident 0x45fbb hash 7acb64f9 params:( None OverrideForceMiplevelsToBeResident;None bForceMiplevelsToBeResidentValue;None ForceDuration;None CinematicTextureGroups;None bFastResponse; );
	GetPhysicalMaterial 0x45fb0 hash 2c0b8571 params:( PhysicalMaterial ReturnValue; );
	GetBaseMaterial 0x45fa7 hash 76aaa52f params:( Material ReturnValue; );
};


instance 1ab5e0fde40
class MaterialInstance public : MaterialInterface
{
	// Fields
	PhysicalMaterial* PhysMaterial; // 0x88
	MaterialInterface* Parent; // 0x90
	bool bHasStaticPermutationResource; // 0x98
	bool bOverrideSubsurfaceProfile; // 0x98
	TArray ScalarParameterValues; // 0xa0
	TArray VectorParameterValues; // 0xb0
	TArray TextureParameterValues; // 0xc0
	TArray RuntimeVirtualTextureParameterValues; // 0xd0
	TArray FontParameterValues; // 0xe0
	MaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xf0
	TArray PermutationTextureReferences; // 0x108
	StaticParameterSet StaticParameters; // 0x118

};


instance 1ab5e0f4c00
class MaterialInstanceConstant public : MaterialInstance
{
	// Fields

	// Functions
	K2_GetVectorParameterValue 0x45fe8 hash 12f87352 params:( None ParameterName;LinearColor ReturnValue; );
	K2_GetTextureParameterValue 0x45fd9 hash 6fbf5d50 params:( None ParameterName;Texture ReturnValue; );
	K2_GetScalarParameterValue 0x45fcb hash 2eeab515 params:( None ParameterName;None ReturnValue; );
};


instance 1ab5e0fc340
class MaterialExpressionCustomOutput public : MaterialExpression
{
	// Fields

};


instance 1ab5e0fb140
class EngineCustomTimeStep public : Object
{
	// Fields

};


instance 1ab5e0febc0
class AnimNotifyState public : Object
{
	// Fields

	// Functions
	Received_NotifyTick 0x235d3 hash eca9b78f params:( SkeletalMeshComponent MeshComp;AnimSequenceBase Animation;None FrameDeltaTime;None ReturnValue; );
	Received_NotifyEnd 0x235c9 hash 4cfd237b params:( SkeletalMeshComponent MeshComp;AnimSequenceBase Animation;None ReturnValue; );
	Received_NotifyBegin 0x235be hash 8098d009 params:( SkeletalMeshComponent MeshComp;AnimSequenceBase Animation;None TotalDuration;None ReturnValue; );
	GetNotifyName 0x2339b hash 82a9beff params:( None ReturnValue; );
};


instance 1ab5e127fc0
class DynamicBlueprintBinding public : Object
{
	// Fields

};


instance 1ab5e1276c0
class BlueprintGeneratedClass public : Class
{
	// Fields
	int NumReplicatedProperties; // 0x210
	bool bHasNativizedParent; // 0x214
	bool bHasCookedComponentInstancingData; // 0x214
	TArray DynamicBindingObjects; // 0x218
	TArray ComponentTemplates; // 0x228
	TArray Timelines; // 0x238
	TArray ComponentClassOverrides; // 0x248
	SimpleConstructionScript* SimpleConstructionScript; // 0x258
	InheritableComponentHandler* InheritableComponentHandler; // 0x260
	StructProperty* UberGraphFramePointerProperty; // 0x268
	Function* UberGraphFunction; // 0x270
	MapProperty CookedComponentInstancingData; // 0x278 property 0x1ab711652e0 hash 0xadd0fb88

};


instance 1ab5e1252c0
class CameraActor public : Actor
{
	// Fields
	BYTE AutoActivateForPlayer; // 0x218
	CameraComponent* CameraComponent; // 0x220
	SceneComponent* SceneComponent; // 0x228
	bool bConstrainAspectRatio; // 0x238
	float AspectRatio; // 0x23c
	float FOVAngle; // 0x240
	float PostProcessBlendWeight; // 0x244
	PostProcessSettings PostProcessSettings; // 0x250

	// Functions
	GetAutoActivatePlayerIndex 0x47abb hash a9222eb4 params:( None ReturnValue; );
};


instance 1ab5e12d300
class SoundWave public : SoundBase
{
	// Fields
	int CompressionQuality; // 0x160
	int StreamingPriority; // 0x164
	ESoundwaveSampleRateSettings SampleRateQuality; // 0x168
	BYTE SoundGroup; // 0x16a
	bool bLooping; // 0x16b
	bool bStreaming; // 0x16b
	bool bSeekableStreaming; // 0x16b
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x16c
	bool bMature; // 0x16d
	bool bManualWordWrap; // 0x16d
	bool bSingleLine; // 0x16d
	bool bIsAmbisonics; // 0x16d
	TArray FrequenciesToAnalyze; // 0x170
	TArray CookedSpectralTimeData; // 0x180
	TArray CookedEnvelopeTimeData; // 0x190
	int InitialChunkSize; // 0x1a0
	FString SpokenText; // 0x1e8
	float SubtitlePriority; // 0x1f8
	float Volume; // 0x1fc
	float Pitch; // 0x200
	int NumChannels; // 0x204
	int SampleRate; // 0x208
	TArray Subtitles; // 0x218
	CurveTable* Curves; // 0x228
	CurveTable* InternalCurves; // 0x230

};


instance 1ab5e12d540
class SoundWaveProcedural public : SoundWave
{
	// Fields

};


instance 1ab5e1349c0
class BlueprintCore public : Object
{
	// Fields
	Object* SkeletonGeneratedClass; // 0x28
	Object* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	Guid BlueprintGuid; // 0x3c

};


instance 1ab5e12e080
class Blueprint public : BlueprintCore
{
	// Fields
	Object* ParentClass; // 0x50
	BYTE BlueprintType; // 0x58
	bool bRecompileOnLoad; // 0x59
	bool bHasBeenRegenerated; // 0x59
	bool bIsRegeneratingOnLoad; // 0x59
	int BlueprintSystemVersion; // 0x5c
	SimpleConstructionScript* SimpleConstructionScript; // 0x60
	TArray ComponentTemplates; // 0x68
	TArray Timelines; // 0x78
	TArray ComponentClassOverrides; // 0x88
	InheritableComponentHandler* InheritableComponentHandler; // 0x98

};


instance 1ab5e131600
class Model public : Object
{
	// Fields

};


instance 1ab5e131180
class Channel public : Object
{
	// Fields
	NetConnection* Connection; // 0x28

};


instance 1ab5e1313c0
class ActorChannel public : Channel
{
	// Fields
	Actor* Actor; // 0x70
	TArray CreateSubObjects; // 0x160

};


instance 1ab5e130880
class AnimationAsset public : Object
{
	// Fields
	Skeleton* Skeleton; // 0x38
	TArray MetaData; // 0x60
	TArray AssetUserData; // 0x70

};


instance 1ab5e130ac0
class BlendSpaceBase public : AnimationAsset
{
	// Fields
	bool bRotationBlendInMeshSpace; // 0x88
	float AnimLength; // 0x8c
	InterpolationParameter InterpolationParam; // 0x90
	float TargetWeightInterpolationSpeedPerSec; // 0xa8
	BYTE NotifyTriggerMode; // 0xac
	TArray PerBoneBlend; // 0xb0
	int SampleIndexWithMarkers; // 0xc0
	TArray SampleData; // 0xc8
	TArray GridSamples; // 0xd8
	BlendParameter BlendParameters; // 0xe8

};


instance 1ab5e130d00
class BlendSpace public : BlendSpaceBase
{
	// Fields
	BYTE AxisToScaleAnimation; // 0x148

};


instance 1ab5e130f40
class AimOffsetBlendSpace public : BlendSpace
{
	// Fields

};


instance 1ab5e130400
class BlendSpace1D public : BlendSpaceBase
{
	// Fields
	bool bScaleAnimation; // 0x148

};


instance 1ab5e130640
class AimOffsetBlendSpace1D public : BlendSpace1D
{
	// Fields

};


instance 1ab5e1301c0
class AISystemBase public : Object
{
	// Fields
	SoftClassPath AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x40
	bool bInstantiateAISystemOnClient; // 0x50

};


instance 1ab5e139400
class AnimationSettings public : DeveloperSettings
{
	// Fields
	int CompressCommandletVersion; // 0x38
	TArray KeyEndEffectorsMatchNameArray; // 0x40
	AnimCompress* DefaultCompressionAlgorithm; // 0x50
	BYTE RotationCompressionFormat; // 0x58
	BYTE TranslationCompressionFormat; // 0x59
	float MaxCurveError; // 0x5c
	float AlternativeCompressionThreshold; // 0x60
	bool ForceRecompression; // 0x64
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x65
	bool bForceBelowThreshold; // 0x66
	bool bFirstRecompressUsingCurrentOrDefault; // 0x67
	bool bRaiseMaxErrorToExisting; // 0x68
	bool bTryExhaustiveSearch; // 0x69
	bool bEnableSegmenting; // 0x6a
	bool bEnablePerformanceLog; // 0x6b
	bool bStripAnimationDataOnDedicatedServer; // 0x6c
	bool bTickAnimationOnSkeletalMeshInit; // 0x6d

};


instance 1ab5e1391c0
class AnimBlueprint public : Blueprint
{
	// Fields
	Skeleton* TargetSkeleton; // 0xa8
	TArray Groups; // 0xb0
	bool bUseMultiThreadedAnimationUpdate; // 0xc0
	bool bWarnAboutBlueprintUsage; // 0xc1

};


instance 1ab5e138f80
class AnimBlueprintGeneratedClass public : BlueprintGeneratedClass
{
	// Fields
	TArray BakedStateMachines; // 0x308
	Skeleton* TargetSkeleton; // 0x318
	TArray AnimNotifies; // 0x320
	MapProperty OrderedSavedPoseIndicesMap; // 0x330 property 0x1ab711679a0 hash 0xadd0fb88
	TArray SyncGroupNames; // 0x400
	TArray EvaluateGraphExposedInputs; // 0x410
	MapProperty GraphAssetPlayerInformation; // 0x420 property 0x1ab71167a40 hash 0xadd0fb88
	MapProperty GraphBlendOptions; // 0x470 property 0x1ab71167ae0 hash 0xadd0fb88

};


instance 1ab5e138d40
class AnimClassData public : Object
{
	// Fields
	TArray BakedStateMachines; // 0x30
	Skeleton* TargetSkeleton; // 0x40
	TArray AnimNotifies; // 0x48
	MapProperty OrderedSavedPoseIndicesMap; // 0x58 property 0x1ab711677c0 hash 0xadd0fb88
	TArray AnimBlueprintFunctions; // 0xa8
	TArray AnimNodeProperties; // 0xb8
	TArray LinkedAnimGraphNodeProperties; // 0xc8
	TArray LinkedAnimLayerNodeProperties; // 0xd8
	TArray PreUpdateNodeProperties; // 0xe8
	TArray DynamicResetNodeProperties; // 0xf8
	TArray StateMachineNodeProperties; // 0x108
	TArray InitializationNodeProperties; // 0x118
	MapProperty GraphNameAssetPlayers; // 0x128 property 0x1ab71167860 hash 0xadd0fb88
	TArray SyncGroupNames; // 0x178
	TArray EvaluateGraphExposedInputs; // 0x188
	MapProperty GraphBlendOptions; // 0x198 property 0x1ab71167900 hash 0xadd0fb88

};


instance 1ab5e138b00
class AnimClassInterface public : Interface
{
	// Fields

};


instance 1ab5e138440
class AnimSequenceBase public : AnimationAsset
{
	// Fields
	TArray Notifies; // 0x80
	float SequenceLength; // 0x90
	float RateScale; // 0x94
	RawCurveTracks RawCurveData; // 0x98

	// Functions
	GetPlayLength 0x488d0 hash 360c29bd params:( None ReturnValue; );
};


instance 1ab5e138680
class AnimCompositeBase public : AnimSequenceBase
{
	// Fields

};


instance 1ab5e1388c0
class AnimComposite public : AnimCompositeBase
{
	// Fields
	AnimTrack AnimationTrack; // 0xa8

};


instance 1ab5e138200
class AnimCompress public : Object
{
	// Fields
	FString Description; // 0x28
	bool bNeedsSkeleton; // 0x38
	bool bEnableSegmenting; // 0x38
	int IdealNumFramesPerSegment; // 0x3c
	int MaxNumFramesPerSegment; // 0x40
	BYTE TranslationCompressionFormat; // 0x44
	BYTE RotationCompressionFormat; // 0x45
	BYTE ScaleCompressionFormat; // 0x46
	float MaxCurveError; // 0x48

};


instance 1ab5e137fc0
class AnimCompress_Automatic public : AnimCompress
{
	// Fields
	float MaxEndEffectorError; // 0x50
	bool bRunCurrentDefaultCompressor; // 0x54
	bool bAutoReplaceIfExistingErrorTooGreat; // 0x54
	bool bRaiseMaxErrorToExisting; // 0x54
	bool bTryExhaustiveSearch; // 0x54

};


instance 1ab5e137d80
class AnimCompress_BitwiseCompressOnly public : AnimCompress
{
	// Fields

};


instance 1ab5e137b40
class AnimCompress_LeastDestructive public : AnimCompress
{
	// Fields

};


instance 1ab5e1376c0
class AnimCompress_RemoveLinearKeys public : AnimCompress
{
	// Fields
	float MaxPosDiff; // 0x50
	float MaxAngleDiff; // 0x54
	float MaxScaleDiff; // 0x58
	float MaxEffectorDiff; // 0x5c
	float MinEffectorDiff; // 0x60
	float EffectorDiffSocket; // 0x64
	float ParentKeyScale; // 0x68
	bool bRetarget; // 0x6c
	bool bActuallyFilterLinearKeys; // 0x6c
	bool bOptimizeForForwardPlayback; // 0x6c
	bool bUseDecompression; // 0x6c
	bool bUseMultithreading; // 0x6c

};


instance 1ab5e137900
class AnimCompress_PerTrackCompression public : AnimCompress_RemoveLinearKeys
{
	// Fields
	float MaxZeroingThreshold; // 0x70
	float MaxPosDiffBitwise; // 0x74
	float MaxAngleDiffBitwise; // 0x78
	float MaxScaleDiffBitwise; // 0x7c
	TArray AllowedRotationFormats; // 0x80
	TArray AllowedTranslationFormats; // 0x90
	TArray AllowedScaleFormats; // 0xa0
	bool bResampleAnimation; // 0xb0
	float ResampledFramerate; // 0xb4
	int MinKeysForResampling; // 0xb8
	bool bUseAdaptiveError; // 0xbc
	bool bUseOverrideForEndEffectors; // 0xbc
	int TrackHeightBias; // 0xc0
	float ParentingDivisor; // 0xc4
	float ParentingDivisorExponent; // 0xc8
	bool bUseAdaptiveError2; // 0xcc
	float RotationErrorSourceRatio; // 0xd0
	float TranslationErrorSourceRatio; // 0xd4
	float ScaleErrorSourceRatio; // 0xd8
	float MaxErrorPerTrackRatio; // 0xdc
	float PerturbationProbeSize; // 0xe0

};


instance 1ab5e137480
class AnimCompress_RemoveEverySecondKey public : AnimCompress
{
	// Fields
	int MinKeys; // 0x50
	bool bStartAtSecondKey; // 0x54

};


instance 1ab5e137240
class AnimCompress_RemoveTrivialKeys public : AnimCompress
{
	// Fields
	float MaxPosDiff; // 0x50
	float MaxAngleDiff; // 0x54
	float MaxScaleDiff; // 0x58

};


instance 1ab5e137000
class AnimCurveCompressionCodec public : Object
{
	// Fields

};


instance 1ab5e136dc0
class AnimCurveCompressionCodec_CompressedRichCurve public : AnimCurveCompressionCodec
{
	// Fields

};


instance 1ab5e136b80
class AnimCurveCompressionCodec_UniformIndexable public : AnimCurveCompressionCodec
{
	// Fields

};


instance 1ab5e136940
class AnimCurveCompressionCodec_UniformlySampled public : AnimCurveCompressionCodec
{
	// Fields

};


instance 1ab5e136700
class AnimCurveCompressionSettings public : Object
{
	// Fields
	AnimCurveCompressionCodec* Codec; // 0x28

};


instance 1ab5e1364c0
class AnimLayerInterface public : Interface
{
	// Fields

};


instance 1ab5e136280
class AnimMetaData public : Object
{
	// Fields

};


instance 1ab5e136040
class AnimMontage public : AnimCompositeBase
{
	// Fields
	AlphaBlend BlendIn; // 0xa8
	float BlendInTime; // 0xd8
	AlphaBlend BlendOut; // 0xe0
	float BlendOutTime; // 0x110
	float BlendOutTriggerTime; // 0x114
	FName SyncGroup; // 0x118
	int SyncSlotIndex; // 0x120
	MarkerSyncData MarkerData; // 0x128
	TArray CompositeSections; // 0x148
	TArray SlotAnimTracks; // 0x158
	TArray BranchingPoints; // 0x168
	bool bEnableRootMotionTranslation; // 0x178
	bool bEnableRootMotionRotation; // 0x179
	bool bEnableAutoBlendOut; // 0x17a
	BYTE RootMotionRootLock; // 0x17b
	TArray BranchingPointMarkers; // 0x180
	TArray BranchingPointStateNotifyIndices; // 0x190
	TimeStretchCurve TimeStretchCurve; // 0x1a0
	FName TimeStretchCurveName; // 0x1c8

	// Functions
	GetDefaultBlendOutTime 0x489c8 hash e5f71416 params:( None ReturnValue; );
};


instance 1ab5e135e00
class AnimNotify_PauseClothingSimulation public : AnimNotify
{
	// Fields

};


instance 1ab5e135bc0
class AnimNotify_PlayParticleEffect public : AnimNotify
{
	// Fields
	ParticleSystem* PSTemplate; // 0x38
	Vector LocationOffset; // 0x40
	Rotator RotationOffset; // 0x4c
	Vector Scale; // 0x58
	bool Attached; // 0x80
	FName SocketName; // 0x84

};


instance 1ab5e135980
class AnimNotify_ResetClothingSimulation public : AnimNotify
{
	// Fields

};


instance 1ab5e135740
class AnimNotify_ResetDynamics public : AnimNotify
{
	// Fields

};


instance 1ab5e135500
class AnimNotify_ResumeClothingSimulation public : AnimNotify
{
	// Fields

};


instance 1ab5e1352c0
class AnimNotifyState_DisableRootMotion public : AnimNotifyState
{
	// Fields

};


instance 1ab5e135080
class AnimNotifyState_TimedParticleEffect public : AnimNotifyState
{
	// Fields
	ParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	Vector LocationOffset; // 0x40
	Rotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58

};


instance 1ab5e134e40
class AnimNotifyState_Trail public : AnimNotifyState
{
	// Fields
	ParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	BYTE WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x4c
	bool bRecycleSpawnedSystems; // 0x54

	// Functions
	OverridePSTemplate 0x236a1 hash ae4d2044 params:( SkeletalMeshComponent MeshComp;AnimSequenceBase Animation;ParticleSystem ReturnValue; );
};


instance 1ab5e134c00
class AnimSequence public : AnimSequenceBase
{
	// Fields
	int NumFrames; // 0xa8
	TArray TrackToSkeletonMapTable; // 0xb0
	AnimCurveCompressionSettings* CurveCompressionSettings; // 0xd0
	BYTE AdditiveAnimType; // 0x1a8
	BYTE RefPoseType; // 0x1a9
	AnimSequence* RefPoseSeq; // 0x1b0
	int RefFrameIndex; // 0x1b8
	FName RetargetSource; // 0x1bc
	EAnimInterpolationType Interpolation; // 0x1c4
	bool bEnableRootMotion; // 0x1c5
	BYTE RootMotionRootLock; // 0x1c6
	bool bForceRootLock; // 0x1c7
	bool bUseNormalizedRootMotionScale; // 0x1c8
	bool bRootMotionSettingsCopiedFromMontage; // 0x1c9
	TArray AuthoredSyncMarkers; // 0x1d0

};


instance 1ab5e13de40
class AnimSet public : Object
{
	// Fields
	bool bAnimRotationOnly; // 0x28
	TArray TrackBoneNames; // 0x30
	TArray LinkupCache; // 0x40
	TArray BoneUseAnimTranslation; // 0x50
	TArray ForceUseMeshTranslation; // 0x60
	TArray UseTranslationBoneNames; // 0x70
	TArray ForceMeshTranslationBoneNames; // 0x80
	FName PreviewSkelMeshName; // 0x90
	FName BestRatioSkelMeshName; // 0x98

};


instance 1ab5e13dc00
class AnimSingleNodeInstance public : AnimInstance
{
	// Fields
	AnimationAsset* CurrentAsset; // 0x268
	DelegateProperty PostEvaluateAnimEvent; // 0x270 property 0x1ab71c22000 hash 0xe1aec4e5

	// Functions
	StopAnim 0x48abc hash 16bb330 params:(  );
	SetReverse 0x48ab6 hash 2459178d params:( None bInReverse; );
	SetPreviewCurveOverride 0x48aa9 hash e8f6cd18 params:( None PoseName;None Value;None bRemoveIfZero; );
	SetPositionWithPreviousTime 0x48a9a hash 671e162e params:( None InPosition;None InPreviousTime;None bFireNotifies; );
	SetPosition 0x40839 hash d2089706 params:( None InPosition;None bFireNotifies; );
	SetPlayRate 0x3fbb7 hash c22bc733 params:( None InPlayRate; );
	SetPlaying 0x48a94 hash 99478885 params:( None bIsPlaying; );
	SetLooping 0x3fb91 hash 6d567709 params:( None bIsLooping; );
	SetBlendSpaceInput 0x48a8a hash 113fe9f2 params:( Vector InBlendInput; );
	SetAnimationAsset 0x48a80 hash 80fa1211 params:( AnimationAsset NewAsset;None bIsLooping;None InPlayRate; );
	PlayAnim 0x48a7b hash b4cef240 params:( None bIsLooping;None InPlayRate;None InStartPosition; );
	GetLength 0x413a9 hash 10a63807 params:( None ReturnValue; );
	GetAnimationAsset 0x48a71 hash 9ec37a05 params:( AnimationAsset ReturnValue; );
};


instance 1ab5e13d9c0
class AnimStateMachineTypes public : Object
{
	// Fields

};


instance 1ab5e13d780
class AnimStreamable public : AnimSequenceBase
{
	// Fields
	int NumFrames; // 0xa8
	EAnimInterpolationType Interpolation; // 0xac
	FName RetargetSource; // 0xb0
	AnimCurveCompressionSettings* CurveCompressionSettings; // 0xc8
	bool bEnableRootMotion; // 0xd0
	BYTE RootMotionRootLock; // 0xd1
	bool bForceRootLock; // 0xd2
	bool bUseNormalizedRootMotionScale; // 0xd3

};


instance 1ab5e13d540
class ApplicationLifecycleComponent public : ActorComponent
{
	// Fields
	MulticastInlineDelegateProperty ApplicationWillDeactivateDelegate; // 0xb0 property 0x1ab712f2b00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationHasReactivatedDelegate; // 0xc0 property 0x1ab712f2b80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationWillEnterBackgroundDelegate; // 0xd0 property 0x1ab712f2c00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationHasEnteredForegroundDelegate; // 0xe0 property 0x1ab712f2c80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationWillTerminateDelegate; // 0xf0 property 0x1ab712f2d00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationShouldUnloadResourcesDelegate; // 0x100 property 0x1ab712f2d80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationReceivedStartupArgumentsDelegate; // 0x110 property 0x1ab712f2e80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnTemperatureChangeDelegate; // 0x120 property 0x1ab712f3000 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnLowPowerModeDelegate; // 0x130 property 0x1ab712f3100 hash 0xb7a5ed1a

};


instance 1ab5e13d300
class ArrowComponent public : PrimitiveComponent
{
	// Fields
	Color ArrowColor; // 0x3d8
	float ArrowSize; // 0x3dc
	float ScreenSize; // 0x3e0
	bool bIsScreenSizeScaled; // 0x3e4
	bool bTreatAsASprite; // 0x3e4

	// Functions
	SetArrowColor 0x48aed hash 7d4cb73b params:( LinearColor NewColor; );
};


instance 1ab5e13d0c0
class AssetExportTask public : Object
{
	// Fields
	Object* Object; // 0x28
	Exporter* Exporter; // 0x30
	FString Filename; // 0x38
	bool bSelected; // 0x48
	bool bReplaceIdentical; // 0x49
	bool bPrompt; // 0x4a
	bool bAutomated; // 0x4b
	bool bUseFileArchive; // 0x4c
	bool bWriteEmptyFiles; // 0x4d
	TArray IgnoreObjectList; // 0x50
	Object* Options; // 0x60
	TArray Errors; // 0x68

};


instance 1ab5e13ce80
class AssetManager public : Object
{
	// Fields
	TArray ObjectReferenceList; // 0x2c0
	bool bIsGlobalAsyncScanEnvironment; // 0x2d0
	bool bShouldGuessTypeAndName; // 0x2d1
	bool bShouldUseSynchronousLoad; // 0x2d2
	bool bIsLoadingFromPakFiles; // 0x2d3
	bool bShouldAcquireMissingChunksOnLoad; // 0x2d4
	bool bOnlyCookProductionAssets; // 0x2d5
	bool bIsBulkScanning; // 0x2d6
	bool bIsPrimaryAssetDirectoryCurrent; // 0x2d7
	bool bIsManagementDatabaseCurrent; // 0x2d8
	bool bUpdateManagementDatabaseAfterScan; // 0x2d9
	bool bIncludeOnlyOnDiskAssets; // 0x2da
	int NumberOfSpawnedNotifications; // 0x2dc

};


instance 1ab5e13cc40
class AssetManagerSettings public : DeveloperSettings
{
	// Fields
	TArray PrimaryAssetTypesToScan; // 0x38
	TArray DirectoriesToExclude; // 0x48
	TArray PrimaryAssetRules; // 0x58
	TArray CustomPrimaryAssetRules; // 0x68
	bool bOnlyCookProductionAssets; // 0x78
	bool bShouldManagerDetermineTypeAndName; // 0x79
	bool bShouldGuessTypeAndNameInEditor; // 0x7a
	bool bShouldAcquireMissingChunksOnLoad; // 0x7b
	TArray PrimaryAssetIdRedirects; // 0x80
	TArray PrimaryAssetTypeRedirects; // 0x90
	TArray AssetPathRedirects; // 0xa0
	SetProperty MetaDataTagsForAssetRegistry; // 0xb0 property 0x1ab71167720 hash 0xb0194396

};


instance 1ab5e13ca00
class AssetMappingTable public : Object
{
	// Fields
	TArray MappedAssets; // 0x28

};


instance 1ab5e13c7c0
class AsyncActionHandleSaveGame public : BlueprintAsyncActionBase
{
	// Fields
	MulticastInlineDelegateProperty Completed; // 0x30 property 0x1ab71c22180 hash 0xb7a5ed1a
	SaveGame* SaveGameObject; // 0x60

	// Functions
	AsyncSaveGameToSlot 0x48b34 hash 56ce8951 params:( Object WorldContextObject;SaveGame SaveGameObject;None SlotName;None UserIndex;AsyncActionHandleSaveGame ReturnValue; );
	AsyncLoadGameFromSlot 0x48b28 hash ee0e8373 params:( Object WorldContextObject;None SlotName;None UserIndex;AsyncActionHandleSaveGame ReturnValue; );
};


instance 1ab5e13c580
class AsyncActionLoadPrimaryAssetBase public : BlueprintAsyncActionBase
{
	// Fields

};


instance 1ab5e13c340
class AsyncActionLoadPrimaryAsset public : AsyncActionLoadPrimaryAssetBase
{
	// Fields
	MulticastInlineDelegateProperty Completed; // 0x78 property 0x1ab71c24000 hash 0xb7a5ed1a

	// Functions
	AsyncLoadPrimaryAsset 0x48b5f hash 14b89527 params:( Object WorldContextObject;PrimaryAssetId PrimaryAsset;LoadBundles LoadBundles;AsyncActionLoadPrimaryAsset ReturnValue; );
};


instance 1ab5e13c100
class AsyncActionLoadPrimaryAssetClass public : AsyncActionLoadPrimaryAssetBase
{
	// Fields
	MulticastInlineDelegateProperty Completed; // 0x78 property 0x1ab71c23d80 hash 0xb7a5ed1a

	// Functions
	AsyncLoadPrimaryAssetClass 0x48b7c hash b850341d params:( Object WorldContextObject;PrimaryAssetId PrimaryAsset;LoadBundles LoadBundles;AsyncActionLoadPrimaryAssetClass ReturnValue; );
};


instance 1ab5e13bec0
class AsyncActionLoadPrimaryAssetList public : AsyncActionLoadPrimaryAssetBase
{
	// Fields
	MulticastInlineDelegateProperty Completed; // 0x78 property 0x1ab71c23a80 hash 0xb7a5ed1a

	// Functions
	AsyncLoadPrimaryAssetList 0x48b9b hash 3be84b63 params:( Object WorldContextObject;PrimaryAssetList PrimaryAssetList;LoadBundles LoadBundles;AsyncActionLoadPrimaryAssetList ReturnValue; );
};


instance 1ab5e13bc80
class AsyncActionLoadPrimaryAssetClassList public : AsyncActionLoadPrimaryAssetBase
{
	// Fields
	MulticastInlineDelegateProperty Completed; // 0x78 property 0x1ab71c23780 hash 0xb7a5ed1a

	// Functions
	AsyncLoadPrimaryAssetClassList 0x48bbc hash f827559 params:( Object WorldContextObject;PrimaryAssetList PrimaryAssetList;LoadBundles LoadBundles;AsyncActionLoadPrimaryAssetClassList ReturnValue; );
};


instance 1ab5e13ba40
class AsyncActionChangePrimaryAssetBundles public : AsyncActionLoadPrimaryAssetBase
{
	// Fields
	MulticastInlineDelegateProperty Completed; // 0x78 property 0x1ab71c23200 hash 0xb7a5ed1a

	// Functions
	AsyncChangeBundleStateForPrimaryAssetList 0x48bf7 hash 8da1c96b params:( Object WorldContextObject;PrimaryAssetList PrimaryAssetList;AddBundles AddBundles;RemoveBundles RemoveBundles;AsyncActionChangePrimaryAssetBundles ReturnValue; );
	AsyncChangeBundleStateForMatchingPrimaryAssets 0x48bdf hash 631636ad params:( Object WorldContextObject;NewBundles NewBundles;OldBundles OldBundles;AsyncActionChangePrimaryAssetBundles ReturnValue; );
};


instance 1ab5e13b800
class AtmosphericFog public : Info
{
	// Fields
	AtmosphericFogComponent* AtmosphericFogComponent; // 0x218

};


instance 1ab5e13b5c0
class AtmosphericFogComponent public : SceneComponent
{
	// Fields
	float SunMultiplier; // 0x1f0
	float FogMultiplier; // 0x1f4
	float DensityMultiplier; // 0x1f8
	float DensityOffset; // 0x1fc
	float DistanceScale; // 0x200
	float AltitudeScale; // 0x204
	float DistanceOffset; // 0x208
	float GroundOffset; // 0x20c
	float StartDistance; // 0x210
	float SunDiscScale; // 0x214
	float DefaultBrightness; // 0x218
	Color DefaultLightColor; // 0x21c
	bool bDisableSunDisk; // 0x220
	bool bAtmosphereAffectsSunIlluminance; // 0x220
	bool bDisableGroundScattering; // 0x220
	AtmospherePrecomputeParameters PrecomputeParams; // 0x224
	Texture2D* TransmittanceTexture; // 0x250
	Texture2D* IrradianceTexture; // 0x258

	// Functions
	StartPrecompute 0x48ca3 hash d822d5d7 params:(  );
	SetSunMultiplier 0x48c9a hash 5e7adf6e params:( None NewSunMultiplier; );
	SetStartDistance 0x48c91 hash 6768fc2a params:( None NewStartDistance; );
	SetPrecomputeParams 0x48c86 hash ce1d6859 params:( None DensityHeight;None MaxScatteringOrder;None InscatterAltitudeSampleNum; );
	SetFogMultiplier 0x48c7d hash 8b6a3ed4 params:( None NewFogMultiplier; );
	SetDistanceScale 0x48c74 hash 3bb2e9c4 params:( None NewDistanceScale; );
	SetDistanceOffset 0x48c6a hash a8f4a563 params:( None NewDistanceOffset; );
	SetDensityOffset 0x48c61 hash 72035b58 params:( None NewDensityOffset; );
	SetDensityMultiplier 0x48c56 hash db7543b8 params:( None NewDensityMultiplier; );
	SetDefaultLightColor 0x48c4b hash 905809ed params:( LinearColor NewLightColor; );
	SetDefaultBrightness 0x48c40 hash f34fe42f params:( None NewBrightness; );
	SetAltitudeScale 0x48c37 hash a15bd035 params:( None NewAltitudeScale; );
	DisableSunDisk 0x48c2f hash d162e9ba params:( None NewSunDisk; );
	DisableGroundScattering 0x48c22 hash 494757dc params:( None NewGroundScattering; );
};


instance 1ab5e13b380
class AudioSettings public : DeveloperSettings
{
	// Fields
	SoftObjectPath DefaultSoundClassName; // 0x38
	SoftObjectPath DefaultMediaSoundClassName; // 0x50
	SoftObjectPath DefaultSoundConcurrencyName; // 0x68
	SoftObjectPath DefaultBaseSoundMix; // 0x80
	SoftObjectPath VoiPSoundClass; // 0x98
	EVoiceSampleRate VoiPSampleRate; // 0xb0
	float VoipBufferingDelay; // 0xb4
	float DefaultReverbSendLevel; // 0xb8
	bool bEnableLegacyReverb; // 0xbc
	int MaximumConcurrentStreams; // 0xc0
	float GlobalMinPitchScale; // 0xc4
	float GlobalMaxPitchScale; // 0xc8
	TArray QualityLevels; // 0xd0
	bool bAllowPlayWhenSilent; // 0xe0
	bool bDisableMasterEQ; // 0xe0
	bool bAllowCenterChannel3DPanning; // 0xe0
	int NumStoppingSources; // 0xe4
	EPanningMethod PanningMethod; // 0xe8
	EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0xe9
	FString DialogueFilenameFormat; // 0xf0

};


instance 1ab5e13b140
class AudioVolume public : Volume
{
	// Fields
	float Priority; // 0x250
	bool bEnabled; // 0x254
	ReverbSettings Settings; // 0x258
	InteriorSettings AmbientZoneSettings; // 0x278

	// Functions
	SetReverbSettings 0x48cd3 hash cd75ef08 params:( ReverbSettings NewReverbSettings; );
	SetPriority 0x48ccc hash a20f31f3 params:( None NewPriority; );
	SetInteriorSettings 0x48cc1 hash ffc4d8ee params:( InteriorSettings NewInteriorSettings; );
	SetEnabled 0x48cbb hash 4f24ac5c params:( None bNewEnabled; );
	OnRep_bEnabled 0x456da hash f2b2e395 params:(  );
};


instance 1ab5e13af00
class AutomationTestSettings public : Object
{
	// Fields
	TArray EngineTestModules; // 0x28
	TArray EditorTestModules; // 0x38
	SoftObjectPath AutomationTestmap; // 0x48
	TArray EditorPerformanceTestMaps; // 0x60
	TArray AssetsToOpen; // 0x70
	BuildPromotionTestSettings BuildPromotionTest; // 0x80
	MaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x270
	ParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2a0
	BlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2b0
	TArray TestLevelFolders; // 0x2e0
	TArray ExternalTools; // 0x2f0
	TArray ImportExportTestDefinitions; // 0x300
	TArray LaunchOnSettings; // 0x310
	IntPoint DefaultScreenshotResolution; // 0x320

};


instance 1ab5e13acc0
class AvoidanceManager public : Object
{
	// Fields
	float DefaultTimeToLive; // 0x30
	float LockTimeAfterAvoid; // 0x34
	float LockTimeAfterClean; // 0x38
	float DeltaTimeToPredict; // 0x3c
	float ArtificialRadiusExpansion; // 0x40
	float TestHeightDifference; // 0x44
	float HeightCheckMargin; // 0x48

	// Functions
	RegisterMovementComponent 0x48d15 hash ec11b968 params:( MovementComponent MovementComp;None AvoidanceWeight;None ReturnValue; );
	GetObjectCount 0x48d0d hash f77979e5 params:( None ReturnValue; );
	GetNewAvoidanceUID 0x48d03 hash ce9b31fb params:( None ReturnValue; );
	GetAvoidanceVelocityForComponent 0x48cf2 hash 589cdd8 params:( MovementComponent MovementComp;Vector ReturnValue; );
};


instance 1ab5e13aa80
class BandwidthTestActor public : Actor
{
	// Fields
	BandwidthTestGenerator BandwidthGenerator; // 0x218

};


instance 1ab5e13a840
class BillboardComponent public : PrimitiveComponent
{
	// Fields
	Texture2D* Sprite; // 0x3d8
	bool bIsScreenSizeScaled; // 0x3e0
	float ScreenSize; // 0x3e4
	float U; // 0x3e8
	float UL; // 0x3ec
	float V; // 0x3f0
	float VL; // 0x3f4

	// Functions
	SetUV 0x48d3f hash e164cfc params:( None NewU;None NewUL;None NewV;None NewVL; );
	SetSpriteAndUV 0x48d37 hash 5ae96c26 params:( Texture2D NewSprite;None NewU;None NewUL;None NewV;None NewVL; );
	SetSprite 0x3fc80 hash 9798e808 params:( Texture2D NewSprite; );
};


instance 1ab5e13a600
class BlendableInterface public : Interface
{
	// Fields

};


instance 1ab5e13a180
class Skeleton public : Object
{
	// Fields
	TArray BoneTree; // 0x38
	TArray RefLocalPoses; // 0x48
	Guid VirtualBoneGuid; // 0x170
	TArray VirtualBones; // 0x180
	TArray Sockets; // 0x190
	SmartNameContainer SmartNames; // 0x1f0
	TArray BlendProfiles; // 0x270
	TArray SlotGroups; // 0x280
	TArray AssetUserData; // 0x358

};


instance 1ab5e13a3c0
class BlendProfile public : Object
{
	// Fields
	Skeleton* OwningSkeleton; // 0x30
	TArray ProfileEntries; // 0x38

};


instance 1ab5e139f40
class BlockingVolume public : Volume
{
	// Fields

};


instance 1ab5e139d00
class BlueprintExtension public : Object
{
	// Fields

};


instance 1ab5e139ac0
class BlueprintMapLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SetMapPropertyByName 0x48da4 hash b277f290 params:( Object Object;None PropertyName;Value_Key Value; );
	Map_Values 0x48d9e hash 4d602cb2 params:( TargetMap_Key TargetMap;Values Values; );
	Map_Remove 0x48d98 hash 44546130 params:( TargetMap_Key TargetMap;None Key;None ReturnValue; );
	Map_Length 0x48d92 hash 3655d784 params:( TargetMap_Key TargetMap;None ReturnValue; );
	Map_Keys 0x48d8d hash c275133e params:( TargetMap_Key TargetMap;Keys Keys; );
	Map_Find 0x48d88 hash c27264e3 params:( TargetMap_Key TargetMap;None Key;None Value;None ReturnValue; );
	Map_Contains 0x48d81 hash d7809261 params:( TargetMap_Key TargetMap;None Key;None ReturnValue; );
	Map_Clear 0x48d7b hash 108a36a9 params:( TargetMap_Key TargetMap; );
	Map_Add 0x48d76 hash 15683aab params:( TargetMap_Key TargetMap;None Key;None Value; );
};


instance 1ab5e139880
class BlueprintPathsLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	VideoCaptureDir 0x490c4 hash 6e205c8f params:( None ReturnValue; );
	ValidatePath 0x490bd hash 58742f3c params:( None InPath;None bDidSucceed;None OutReason; );
	Split 0x490b9 hash e1c35d1 params:( None InPath;None PathPart;None FilenamePart;None ExtensionPart; );
	SourceConfigDir 0x490b0 hash 6e31ef2b params:( None ReturnValue; );
	ShouldSaveToUserDir 0x490a5 hash 30637024 params:( None ReturnValue; );
	ShaderWorkingDir 0x4909c hash 702fd63c params:( None ReturnValue; );
	SetProjectFilePath 0x49092 hash 45b3c915 params:( None NewGameProjectFilePath; );
	SetExtension 0x4908b hash a35182ae params:( None InPath;None InNewExtension;None ReturnValue; );
	ScreenShotDir 0x49083 hash 7b922ca2 params:( None ReturnValue; );
	SandboxesDir 0x4907c hash edd4042b params:( None ReturnValue; );
	RootDir 0x49077 hash b6ed1c28 params:( None ReturnValue; );
	RemoveDuplicateSlashes 0x4906b hash b913a2a1 params:( None InPath;None OutPath; );
	ProjectUserDir 0x49063 hash af8cf69a params:( None ReturnValue; );
	ProjectSavedDir 0x4905a hash 85dd3cae params:( None ReturnValue; );
	ProjectPluginsDir 0x49050 hash 23b182dd params:( None ReturnValue; );
	ProjectPersistentDownloadDir 0x49041 hash f93f2404 params:( None ReturnValue; );
	ProjectModsDir 0x49039 hash 3e54e1ee params:( None ReturnValue; );
	ProjectLogDir 0x49031 hash 73ec5b5d params:( None ReturnValue; );
	ProjectIntermediateDir 0x49025 hash 6125b936 params:( None ReturnValue; );
	ProjectDir 0x4901f hash 9b674e1b params:( None ReturnValue; );
	ProjectContentDir 0x49015 hash b631a4b6 params:( None ReturnValue; );
	ProjectConfigDir 0x4900c hash 8047b6f1 params:( None ReturnValue; );
	ProfilingDir 0x49005 hash 8fa26aee params:( None ReturnValue; );
	NormalizeFilename 0x48ffb hash ef9913d7 params:( None InPath;None OutPath; );
	NormalizeDirectoryName 0x48fef hash a8bbbfac params:( None InPath;None OutPath; );
	MakeValidFileName 0x48fe5 hash b42b65f4 params:( None inString;None InReplacementChar;None ReturnValue; );
	MakeStandardFilename 0x48fda hash 27c66135 params:( None InPath;None OutPath; );
	MakePlatformFilename 0x48fcf hash 8a7e57e9 params:( None InPath;None OutPath; );
	MakePathRelativeTo 0x48fc5 hash 459eb4cf params:( None InPath;None InRelativeTo;None OutPath;None ReturnValue; );
	LaunchDir 0x48fbf hash 422eaa1f params:( None ReturnValue; );
	IsSamePath 0x48fb9 hash 7a5490f4 params:( None PathA;None PathB;None ReturnValue; );
	IsRestrictedPath 0x48fb0 hash ddfdc27 params:( None InPath;None ReturnValue; );
	IsRelative 0x48faa hash bf72045d params:( None InPath;None ReturnValue; );
	IsProjectFilePathSet 0x48f9f hash b5103a31 params:( None ReturnValue; );
	IsDrive 0x48f9a hash 86b047b params:( None InPath;None ReturnValue; );
	HasProjectPersistentDownloadDir 0x48f89 hash 3aa24320 params:( None ReturnValue; );
	GetToolTipLocalizationPaths 0x48f7a hash d9944639 params:( ReturnValue ReturnValue; );
	GetRestrictedFolderNames 0x48f6d hash 6fa4ebce params:( ReturnValue ReturnValue; );
	GetRelativePathToRoot 0x48f61 hash dacb22b5 params:( None ReturnValue; );
	GetPropertyNameLocalizationPaths 0x48f50 hash 26c05b4 params:( ReturnValue ReturnValue; );
	GetProjectFilePath 0x48f46 hash 1caa2f89 params:( None ReturnValue; );
	GetPath 0x48f41 hash 51202332 params:( None InPath;None ReturnValue; );
	GetInvalidFileSystemChars 0x48f33 hash 97397642 params:( None ReturnValue; );
	GetGameLocalizationPaths 0x48f26 hash fa8fcce8 params:( ReturnValue ReturnValue; );
	GetExtension 0x48f1f hash 57e92222 params:( None InPath;None bIncludeDot;None ReturnValue; );
	GetEngineLocalizationPaths 0x48f11 hash c3c4c6c4 params:( ReturnValue ReturnValue; );
	GetEditorLocalizationPaths 0x48f03 hash 78ccf195 params:( ReturnValue ReturnValue; );
	GetCleanFilename 0x48efa hash 345b4709 params:( None InPath;None ReturnValue; );
	GetBaseFilename 0x48ef1 hash 56042201 params:( None InPath;None bRemovePath;None ReturnValue; );
	GeneratedConfigDir 0x48ee7 hash cc9333c9 params:( None ReturnValue; );
	GameUserDeveloperDir 0x48edc hash 3f4eb643 params:( None ReturnValue; );
	GameSourceDir 0x48ed4 hash d197a08f params:( None ReturnValue; );
	GameDevelopersDir 0x48eca hash 6423c997 params:( None ReturnValue; );
	GameAgnosticSavedDir 0x48ebf hash 406832a9 params:( None ReturnValue; );
	FileExists 0x48eb9 hash cbc6ab05 params:( None InPath;None ReturnValue; );
	FeaturePackDir 0x48eb1 hash 7097592f params:( None ReturnValue; );
	EnterprisePluginsDir 0x48ea6 hash 3e1ea5e7 params:( None ReturnValue; );
	EnterpriseFeaturePackDir 0x48e99 hash ece894d0 params:( None ReturnValue; );
	EnterpriseDir 0x48e91 hash 61462865 params:( None ReturnValue; );
	EngineVersionAgnosticUserDir 0x48e82 hash 104addb7 params:( None ReturnValue; );
	EngineUserDir 0x48e7a hash 10f9cd39 params:( None ReturnValue; );
	EngineSourceDir 0x48e71 hash 6e73a66b params:( None ReturnValue; );
	EngineSavedDir 0x48e69 hash 14e4e72d params:( None ReturnValue; );
	EnginePluginsDir 0x48e60 hash 934dc91c params:( None ReturnValue; );
	EngineIntermediateDir 0x48e54 hash ce52bed5 params:( None ReturnValue; );
	EngineDir 0x48e4e hash d18bad3a params:( None ReturnValue; );
	EngineContentDir 0x48e45 hash 25cdeaf5 params:( None ReturnValue; );
	EngineConfigDir 0x48e3c hash f044b150 params:( None ReturnValue; );
	DirectoryExists 0x48e33 hash 18a7699a params:( None InPath;None ReturnValue; );
	DiffDir 0x48e2e hash 72944bfd params:( None ReturnValue; );
	CreateTempFilename 0x48e24 hash 786b9a50 params:( None Path;None Prefix;None Extension;None ReturnValue; );
	ConvertToSandboxPath 0x48e19 hash 4e7b225 params:( None InPath;None InSandboxName;None ReturnValue; );
	ConvertRelativePathToFull 0x48e0b hash c136c9c5 params:( None InPath;None InBasePath;None ReturnValue; );
	ConvertFromSandboxPath 0x48dff hash 79b855f6 params:( None InPath;None InSandboxName;None ReturnValue; );
	Combine 0x48dfa hash 34161b02 params:( InPaths InPaths;None ReturnValue; );
	CollapseRelativeDirectories 0x48deb hash 208cd3f1 params:( None InPath;None OutPath;None ReturnValue; );
	CloudDir 0x48de6 hash d5e9783b params:( None ReturnValue; );
	ChangeExtension 0x48ddd hash bc657028 params:( None InPath;None InNewExtension;None ReturnValue; );
	BugItDir 0x48dd8 hash 88b710ff params:( None ReturnValue; );
	AutomationTransientDir 0x48dcc hash a8b0f09d params:( None ReturnValue; );
	AutomationLogDir 0x48dc3 hash f33dd107 params:( None ReturnValue; );
	AutomationDir 0x48dbb hash 1e429405 params:( None ReturnValue; );
};


instance 1ab5e139640
class PlatformGameInstance public : GameInstance
{
	// Fields
	MulticastInlineDelegateProperty ApplicationWillDeactivateDelegate; // 0x168 property 0x1ab712f8080 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationHasReactivatedDelegate; // 0x178 property 0x1ab712f8100 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationWillEnterBackgroundDelegate; // 0x188 property 0x1ab712f8180 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationHasEnteredForegroundDelegate; // 0x198 property 0x1ab712f8280 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationWillTerminateDelegate; // 0x1a8 property 0x1ab712f8300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationShouldUnloadResourcesDelegate; // 0x1b8 property 0x1ab712f8380 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationReceivedStartupArgumentsDelegate; // 0x1c8 property 0x1ab712f6380 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationRegisteredForRemoteNotificationsDelegate; // 0x1d8 property 0x1ab712f6500 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationRegisteredForUserNotificationsDelegate; // 0x1e8 property 0x1ab712f6580 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x1f8 property 0x1ab712f6600 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationReceivedRemoteNotificationDelegate; // 0x208 property 0x1ab712f6700 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationReceivedLocalNotificationDelegate; // 0x218 property 0x1ab712f6800 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x228 property 0x1ab712f6900 hash 0xb7a5ed1a

};


instance 1ab5e13fdc0
class BlueprintPlatformLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	ScheduleLocalNotificationFromNow 0x4915e hash 74ed452c params:( None inSecondsFromNow;None Title;None Body;None Action;None ActivationEvent;None ReturnValue; );
	ScheduleLocalNotificationBadgeFromNow 0x4914a hash 4791595f params:( None inSecondsFromNow;None ActivationEvent; );
	ScheduleLocalNotificationBadgeAtTime 0x49137 hash a141667b params:( DateTime FireDateTime;None LocalTime;None ActivationEvent;None ReturnValue; );
	ScheduleLocalNotificationAtTime 0x49126 hash ffb88ca8 params:( DateTime FireDateTime;None LocalTime;None Title;None Body;None Action;None ActivationEvent;None ReturnValue; );
	GetLaunchNotification 0x4911a hash bd2674a7 params:( None NotificationLaunchedApp;None ActivationEvent;None FireDate; );
	GetDeviceOrientation 0x4910f hash 6c4af941 params:( EScreenOrientation ReturnValue; );
	ClearAllLocalNotifications 0x49101 hash 905bce0a params:(  );
	CancelLocalNotificationById 0x490f2 hash 43cf5ac5 params:( None NotificationId; );
	CancelLocalNotification 0x490e5 hash fcba06bd params:( None ActivationEvent; );
};


instance 1ab5e13fb80
class BlueprintSetLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SetSetPropertyByName 0x491c6 hash e1858d1e params:( Object Object;None PropertyName;Value Value; );
	Set_Union 0x491c0 hash b1ac07d9 params:( A A;B B;Result Result; );
	Set_ToArray 0x491b9 hash 7f563cf2 params:( A A;Result Result; );
	Set_RemoveItems 0x491b0 hash d0c49320 params:( TargetSet TargetSet;Items Items; );
	Set_Remove 0x491aa hash df8cdf7e params:( TargetSet TargetSet;None Item;None ReturnValue; );
	Set_Length 0x491a4 hash d18e55d2 params:( TargetSet TargetSet;None ReturnValue; );
	Set_Intersection 0x4919b hash 35459487 params:( A A;B B;Result Result; );
	Set_Difference 0x49193 hash da0e1cfb params:( A A;B B;Result Result; );
	Set_Contains 0x4918c hash 22d1dc2f params:( TargetSet TargetSet;None ItemToFind;None ReturnValue; );
	Set_Clear 0x49186 hash b0652337 params:( TargetSet TargetSet; );
	Set_AddItems 0x4917f hash e13a3c3b params:( TargetSet TargetSet;NewItems NewItems; );
	Set_Add 0x4917a hash ece2abb9 params:( TargetSet TargetSet;None NewItem; );
};


instance 1ab5e13f940
class BodySetup public : Object
{
	// Fields
	KAggregateGeom AggGeom; // 0x28
	FName BoneName; // 0x80
	BYTE PhysicsType; // 0x88
	bool bAlwaysFullAnimWeight; // 0x89
	bool bConsiderForBounds; // 0x89
	bool bMeshCollideAll; // 0x89
	bool bDoubleSidedGeometry; // 0x89
	bool bGenerateNonMirroredCollision; // 0x89
	bool bSharedCookedData; // 0x89
	bool bGenerateMirroredCollision; // 0x89
	BYTE CollisionReponse; // 0x8b
	BYTE CollisionTraceFlag; // 0x8c
	PhysicalMaterial* PhysMaterial; // 0x90
	WalkableSlopeOverride WalkableSlopeOverride; // 0x98
	BodyInstance DefaultInstance; // 0x110
	Vector BuildScale3D; // 0x228

};


instance 1ab5e13f700
class BoneMaskFilter public : Object
{
	// Fields
	TArray BlendPoses; // 0x28

};


instance 1ab5e13f280
class BookmarkBase public : Object
{
	// Fields

};


instance 1ab5e13f4c0
class BookMark public : BookmarkBase
{
	// Fields
	Vector Location; // 0x28
	Rotator Rotation; // 0x34
	TArray HiddenLevels; // 0x40

};


instance 1ab5e13f040
class BookMark2D public : BookmarkBase
{
	// Fields
	float Zoom2D; // 0x28
	IntPoint Location; // 0x2c

};


instance 1ab5e13ebc0
class ReflectionCapture public : Actor
{
	// Fields
	ReflectionCaptureComponent* CaptureComponent; // 0x218

};


instance 1ab5e13ee00
class BoxReflectionCapture public : ReflectionCapture
{
	// Fields

};


instance 1ab5e13e740
class ReflectionCaptureComponent public : SceneComponent
{
	// Fields
	BillboardComponent* CaptureOffsetComponent; // 0x1f0
	EReflectionSourceType ReflectionSourceType; // 0x1f8
	TextureCube* Cubemap; // 0x200
	float SourceCubemapAngle; // 0x208
	float Brightness; // 0x20c
	Vector CaptureOffset; // 0x210
	Guid MapBuildDataId; // 0x21c

};


instance 1ab5e13e980
class BoxReflectionCaptureComponent public : ReflectionCaptureComponent
{
	// Fields
	float BoxTransitionDistance; // 0x268
	BoxComponent* PreviewInfluenceBox; // 0x270
	BoxComponent* PreviewCaptureBox; // 0x278

};


instance 1ab5e13e500
class Breakpoint public : Object
{
	// Fields
	bool bEnabled; // 0x28
	EdGraphNode* Node; // 0x30
	bool bStepOnce; // 0x38
	bool bStepOnce_WasPreviouslyDisabled; // 0x38
	bool bStepOnce_RemoveAfterHit; // 0x38

};


instance 1ab5e13e2c0
class BrushBuilder public : Object
{
	// Fields
	FString BitmapFilename; // 0x28
	FString ToolTip; // 0x38
	bool NotifyBadParams; // 0x48
	TArray Vertices; // 0x50
	TArray Polys; // 0x60
	FName Layer; // 0x70
	bool MergeCoplanars; // 0x78

};


instance 1ab5e13e080
class BrushComponent public : PrimitiveComponent
{
	// Fields
	Model* Brush; // 0x3d8
	BodySetup* BrushBodySetup; // 0x3e0

};


instance 1ab5e1449c0
class BrushShape public : Brush
{
	// Fields

};


instance 1ab5e144780
class ButtonStyleAsset public : Object
{
	// Fields
	ButtonStyle ButtonStyle; // 0x28

};


instance 1ab5e144540
class CameraAnim public : Object
{
	// Fields
	InterpGroup* CameraInterpGroup; // 0x28
	float AnimLength; // 0x30
	Box BoundingBox; // 0x34
	bool bRelativeToInitialTransform; // 0x50
	bool bRelativeToInitialFOV; // 0x50
	float BaseFOV; // 0x54
	PostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x590

};


instance 1ab5e144300
class CameraAnimInst public : Object
{
	// Fields
	CameraAnim* CamAnim; // 0x28
	InterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	InterpTrackMove* MoveTrack; // 0x68
	InterpTrackInstMove* MoveInst; // 0x70
	BYTE PlaySpace; // 0x78

	// Functions
	Stop 0x3e2ef hash 7c8c8f2b params:( None bImmediate; );
	SetScale 0x4925d hash 88719659 params:( None NewDuration; );
	SetDuration 0x49256 hash 89ea1c57 params:( None NewDuration; );
};


instance 1ab5e1440c0
class CameraBlockingVolume public : Volume
{
	// Fields

};


instance 1ab5e143e80
class CameraModifier public : Object
{
	// Fields
	bool bDebug; // 0x28
	bool bExclusive; // 0x28
	BYTE Priority; // 0x2c
	PlayerCameraManager* CameraOwner; // 0x30
	float AlphaInTime; // 0x38
	float AlphaOutTime; // 0x3c
	float Alpha; // 0x40

	// Functions
	IsDisabled 0x49286 hash 180b9b39 params:( None ReturnValue; );
	GetViewTarget 0x42d6f hash 1a4c2a27 params:( Actor ReturnValue; );
	EnableModifier 0x4927e hash c404317b params:(  );
	DisableModifier 0x49275 hash 919fdb88 params:( None bImmediate; );
	BlueprintModifyPostProcess 0x251c1 hash bc9feea7 params:( None DeltaTime;None PostProcessBlendWeight;PostProcessSettings PostProcessSettings; );
	BlueprintModifyCamera 0x251b5 hash 4b50850b params:( None DeltaTime;Vector ViewLocation;Rotator ViewRotation;None FOV;Vector NewViewLocation;Rotator NewViewRotation;None NewFOV; );
};


instance 1ab5e143c40
class CameraModifier_CameraShake public : CameraModifier
{
	// Fields
	TArray ActiveShakes; // 0x48
	MapProperty ExpiredPooledShakesMap; // 0x58 property 0x1ab71168ee0 hash 0xadd0fb88
	float SplitScreenShakeScale; // 0xa8

};


instance 1ab5e143a00
class Canvas public : Object
{
	// Fields
	float OrgX; // 0x28
	float OrgY; // 0x2c
	float ClipX; // 0x30
	float ClipY; // 0x34
	Color DrawColor; // 0x38
	bool bCenterX; // 0x3c
	bool bCenterY; // 0x3c
	bool bNoSmooth; // 0x3c
	int SizeX; // 0x40
	int SizeY; // 0x44
	Plane ColorModulate; // 0x50
	Texture2D* DefaultTexture; // 0x60
	Texture2D* GradientTexture0; // 0x68
	ReporterGraph* ReporterGraph; // 0x70

	// Functions
	K2_TextSize 0x492fc hash 67273e1 params:( Font RenderFont;None RenderText;Vector2D Scale;Vector2D ReturnValue; );
	K2_StrLen 0x492f6 hash 9258e019 params:( Font RenderFont;None RenderText;Vector2D ReturnValue; );
	K2_Project 0x492f0 hash f1b60498 params:( Vector WorldLocation;Vector ReturnValue; );
	K2_DrawTriangle 0x492e7 hash 50b91cc5 params:( Texture RenderTexture;Triangles Triangles; );
	K2_DrawTexture 0x492df hash 789dfa20 params:( Texture RenderTexture;Vector2D ScreenPosition;Vector2D ScreenSize;Vector2D CoordinatePosition;Vector2D CoordinateSize;LinearColor RenderColor;EBlendMode BlendMode;None Rotation;Vector2D PivotPoint; );
	K2_DrawText 0x492d8 hash f59a59d4 params:( Font RenderFont;None RenderText;Vector2D ScreenPosition;Vector2D Scale;LinearColor RenderColor;None Kerning;LinearColor ShadowColor;Vector2D ShadowOffset;None bCentreX;None bCentreY;None bOutlined;LinearColor OutlineColor; );
	K2_DrawPolygon 0x492d0 hash 5b31f957 params:( Texture RenderTexture;Vector2D ScreenPosition;Vector2D Radius;None NumberOfSides;LinearColor RenderColor; );
	K2_DrawMaterialTriangle 0x492c3 hash 706e0a34 params:( MaterialInterface RenderMaterial;Triangles Triangles; );
	K2_DrawMaterial 0x492ba hash d8419b5e params:( MaterialInterface RenderMaterial;Vector2D ScreenPosition;Vector2D ScreenSize;Vector2D CoordinatePosition;Vector2D CoordinateSize;None Rotation;Vector2D PivotPoint; );
	K2_DrawLine 0x492b3 hash f5960677 params:( Vector2D ScreenPositionA;Vector2D ScreenPositionB;None Thickness;LinearColor RenderColor; );
	K2_DrawBox 0x492ad hash 55046218 params:( Vector2D ScreenPosition;Vector2D ScreenSize;None Thickness;LinearColor RenderColor; );
	K2_DrawBorder 0x492a5 hash 9c4cb7ad params:( Texture BorderTexture;Texture BackgroundTexture;Texture LeftBorderTexture;Texture RightBorderTexture;Texture TopBorderTexture;Texture BottomBorderTexture;Vector2D ScreenPosition;Vector2D ScreenSize;Vector2D CoordinatePosition;Vector2D CoordinateSize;LinearColor RenderColor;Vector2D BorderScale;Vector2D BackgroundScale;None Rotation;Vector2D PivotPoint;Vector2D CornerSize; );
	K2_Deproject 0x4929e hash 22788a01 params:( Vector2D ScreenPosition;Vector WorldOrigin;Vector WorldDirection; );
};


instance 1ab5e143340
class TextureRenderTarget public : Texture
{
	// Fields
	float TargetGamma; // 0xd0

};


instance 1ab5e143580
class TextureRenderTarget2D public : TextureRenderTarget
{
	// Fields
	int SizeX; // 0xd8
	int SizeY; // 0xdc
	LinearColor ClearColor; // 0xe0
	BYTE AddressX; // 0xf0
	BYTE AddressY; // 0xf1
	bool bForceLinearGamma; // 0xf2
	bool bHDR; // 0xf2
	bool bGPUSharedFlag; // 0xf2
	BYTE RenderTargetFormat; // 0xf3
	bool bAutoGenerateMips; // 0xf4
	BYTE MipsSamplerFilter; // 0xf5
	BYTE MipsAddressU; // 0xf6
	BYTE MipsAddressV; // 0xf7
	BYTE OverrideFormat; // 0xf8

};


instance 1ab5e1437c0
class CanvasRenderTarget2D public : TextureRenderTarget2D
{
	// Fields
	MulticastInlineDelegateProperty OnCanvasRenderTargetUpdate; // 0x100 property 0x1ab71c2d400 hash 0xb7a5ed1a
	WeakObjectProperty World; // 0x110 property 0x1ab71c2d480 hash 0x24388009
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x118

	// Functions
	UpdateResource 0x49333 hash 38ce770 params:(  );
	ReceiveUpdate 0x253b6 hash 2efbbaeb params:( Canvas Canvas;None Width;None Height; );
	GetSize 0x4696a hash 5121eb20 params:( None Width;None Height; );
	CreateCanvasRenderTarget2D 0x49325 hash c54195b2 params:( Object WorldContextObject;Class CanvasRenderTarget2DClass;None Width;None Height;CanvasRenderTarget2D ReturnValue; );
};


instance 1ab5e143100
class CapsuleComponent public : ShapeComponent
{
	// Fields
	float CapsuleHalfHeight; // 0x3f0
	float CapsuleRadius; // 0x3f4

	// Functions
	SetCapsuleSize 0x493fd hash 79e41d19 params:( None InRadius;None InHalfHeight;None bUpdateOverlaps; );
	SetCapsuleRadius 0x493f4 hash 806deae6 params:( None Radius;None bUpdateOverlaps; );
	SetCapsuleHalfHeight 0x493e9 hash 72910fd2 params:( None HalfHeight;None bUpdateOverlaps; );
	GetUnscaledCapsuleSize_WithoutHemisphere 0x493d4 hash 7c1dde99 params:( None OutRadius;None OutHalfHeightWithoutHemisphere; );
	GetUnscaledCapsuleSize 0x493c8 hash 54cdc89c params:( None OutRadius;None OutHalfHeight; );
	GetUnscaledCapsuleRadius 0x493bb hash bc708329 params:( None ReturnValue; );
	GetUnscaledCapsuleHalfHeight_WithoutHemisphere 0x493a3 hash 52db9bd2 params:( None ReturnValue; );
	GetUnscaledCapsuleHalfHeight 0x49394 hash a2dc1195 params:( None ReturnValue; );
	GetShapeScale 0x4267d hash f473123e params:( None ReturnValue; );
	GetScaledCapsuleSize_WithoutHemisphere 0x49380 hash b6c2f0b6 params:( None OutRadius;None OutHalfHeightWithoutHemisphere; );
	GetScaledCapsuleSize 0x49375 hash 47ad9579 params:( None OutRadius;None OutHalfHeight; );
	GetScaledCapsuleRadius 0x49369 hash e676fb46 params:( None ReturnValue; );
	GetScaledCapsuleHalfHeight_WithoutHemisphere 0x49352 hash 85df0faf params:( None ReturnValue; );
	GetScaledCapsuleHalfHeight 0x49344 hash dd6b5032 params:( None ReturnValue; );
};


instance 1ab5e142ec0
class ChaosPhysicalMaterial public : Object
{
	// Fields
	float Friction; // 0x28
	float Restitution; // 0x2c
	float SleepingLinearVelocityThreshold; // 0x30
	float SleepingAngularVelocityThreshold; // 0x34

};


instance 1ab5e142c80
class CheatManager public : Object
{
	// Fields
	DebugCameraController* DebugCameraControllerRef; // 0x28
	DebugCameraController* DebugCameraControllerClass; // 0x30

	// Functions
	Walk 0x495dd hash 7c8e6f74 params:(  );
	ViewSelf 0x495d8 hash 60a563aa params:(  );
	ViewPlayer 0x495d2 hash 19067ded params:( None S; );
	ViewClass 0x495cc hash 7433fad6 params:( Class DesiredClass; );
	ViewActor 0x495c6 hash 740b2ab9 params:( None ActorName; );
	UpdateSafeArea 0x495be hash 9cc140a0 params:(  );
	ToggleServerStatReplicatorUpdateStatNet 0x495a9 hash 152b0475 params:(  );
	ToggleServerStatReplicatorClientOverwrite 0x49593 hash 49cfb3b5 params:(  );
	ToggleDebugCamera 0x49589 hash 790af9d7 params:(  );
	ToggleAILogging 0x49580 hash 30f48198 params:(  );
	TestCollisionDistance 0x49574 hash e7d04e7c params:(  );
	Teleport 0x4956f hash 63573c94 params:(  );
	Summon 0x4956b hash d1fe07a4 params:( None ClassName; );
	StreamLevelOut 0x49563 hash 611f52c1 params:( None PackageName; );
	StreamLevelIn 0x4955b hash dc27bbe0 params:( None PackageName; );
	SpawnServerStatReplicator 0x4954d hash 8269d556 params:(  );
	Slomo 0x49549 hash e1a118f params:( None NewTimeDilation; );
	SetWorldOrigin 0x49541 hash 3195e701 params:(  );
	SetMouseSensitivityToDefault 0x49532 hash ebc4218d params:(  );
	ServerToggleAILogging 0x256de hash a90cca2f params:(  );
	ReceiveInitCheatManager 0x256d1 hash 6bf6bfbc params:(  );
	ReceiveEndPlay 0x22209 hash 3a1b8675 params:(  );
	PlayersOnly 0x4952b hash 8c105be7 params:(  );
	OnlyLoadLevel 0x49523 hash 3f26dd7f params:( None PackageName; );
	LogLoc 0x4951f hash c1398185 params:(  );
	InvertMouse 0x49518 hash f26e9b86 params:(  );
	God 0x49515 hash b87ef9f params:(  );
	Ghost 0x49511 hash d3ebaca params:(  );
	FreezeFrame 0x4950a hash fa966791 params:( None Delay; );
	Fly 0x49507 hash b87eb10 params:(  );
	FlushLog 0x49502 hash a88c0de9 params:(  );
	EnableDebugCamera 0x494f8 hash d623e33c params:(  );
	DumpVoiceMutingState 0x494ed hash 36b871c6 params:(  );
	DumpPartyState 0x494e5 hash dd9a9c6c params:(  );
	DumpOnlineSessionState 0x494d9 hash 829af645 params:(  );
	DumpChatState 0x494d1 hash 2562ea5c params:(  );
	DisableDebugCamera 0x494c7 hash df1e6e29 params:(  );
	DestroyTarget 0x494bf hash cf61d96 params:(  );
	DestroyServerStatReplicator 0x494b0 hash cc50a0d7 params:(  );
	DestroyPawns 0x494a9 hash 45edb518 params:( Class aClass; );
	DestroyAllPawnsExceptTarget 0x4949a hash ce623e1 params:(  );
	DestroyAll 0x49494 hash 52935e48 params:( Class aClass; );
	DebugCapsuleSweepSize 0x49488 hash d36c3178 params:( None HalfHeight;None Radius; );
	DebugCapsuleSweepPawn 0x4947c hash d36a69f3 params:(  );
	DebugCapsuleSweepComplex 0x4946f hash 848428b5 params:( None bTraceComplex; );
	DebugCapsuleSweepClear 0x49463 hash 3fd22424 params:(  );
	DebugCapsuleSweepChannel 0x49456 hash 7355d5f6 params:( ECollisionChannel Channel; );
	DebugCapsuleSweepCapture 0x49449 hash 641492d1 params:(  );
	DebugCapsuleSweep 0x4943f hash a4bcc8bd params:(  );
	DamageTarget 0x49438 hash f5525f8b params:( None DamageAmount; );
	CheatScript 0x49431 hash 9b41ea3f params:( None ScriptName; );
	ChangeSize 0x4942b hash 270ddd66 params:( None F; );
	BugItStringCreator 0x49421 hash 7839bf07 params:( Vector ViewLocation;Rotator ViewRotation;None GoString;None LocString; );
	BugItGo 0x4941c hash f4a0b356 params:( None X;None Y;None Z;None Pitch;None Yaw;None Roll; );
	BugIt 0x49418 hash ceb39c0 params:( None ScreenShotDescription; );
};


instance 1ab5e142a40
class CheckBoxStyleAsset public : Object
{
	// Fields
	CheckBoxStyle CheckBoxStyle; // 0x28

};


instance 1ab5e142800
class ChildActorComponent public : SceneComponent
{
	// Fields
	Actor* ChildActorClass; // 0x1f0
	Actor* ChildActor; // 0x1f8
	Actor* ChildActorTemplate; // 0x200

	// Functions
	SetChildActorClass 0x495f5 hash b28eb524 params:( Class InClass; );
};


instance 1ab5e1425c0
class ChildConnection public : NetConnection
{
	// Fields
	NetConnection* Parent; // 0x19c0

};


instance 1ab5e142140
class PlatformInterfaceBase public : Object
{
	// Fields
	TArray AllDelegates; // 0x28

};


instance 1ab5e142380
class CloudStorageBase public : PlatformInterfaceBase
{
	// Fields
	TArray LocalCloudFiles; // 0x38
	bool bSuppressDelegateCalls; // 0x48

};


instance 1ab5e141f00
class CollisionProfile public : DeveloperSettings
{
	// Fields
	TArray Profiles; // 0x38
	TArray DefaultChannelResponses; // 0x48
	TArray EditProfiles; // 0x58
	TArray ProfileRedirects; // 0x68
	TArray CollisionChannelRedirects; // 0x78

};


instance 1ab5e141cc0
class Commandlet public : Object
{
	// Fields
	FString HelpDescription; // 0x28
	FString HelpUsage; // 0x38
	FString HelpWebLink; // 0x48
	TArray HelpParamNames; // 0x58
	TArray HelpParamDescriptions; // 0x68
	bool IsServer; // 0x78
	bool IsClient; // 0x78
	bool IsEditor; // 0x78
	bool LogToConsole; // 0x78
	bool ShowErrorCount; // 0x78
	bool ShowProgress; // 0x78

};


instance 1ab5e141a80
class ComponentDelegateBinding public : DynamicBlueprintBinding
{
	// Fields
	TArray ComponentDelegateBindings; // 0x28

};


instance 1ab5e141600
class CurveTable public : Object
{
	// Fields

};


instance 1ab5e141840
class CompositeCurveTable public : CurveTable
{
	// Fields
	TArray ParentTables; // 0xa0
	TArray OldParentTables; // 0xb0

};


instance 1ab5e141180
class DataTable public : Object
{
	// Fields
	ScriptStruct* RowStruct; // 0x28
	bool bStripFromClientBuilds; // 0x80
	bool bIgnoreExtraFields; // 0x80
	bool bIgnoreMissingFields; // 0x80
	FString ImportKeyField; // 0x88

};


instance 1ab5e1413c0
class CompositeDataTable public : DataTable
{
	// Fields
	TArray ParentTables; // 0xc8
	TArray OldParentTables; // 0xd8

};


instance 1ab5e140f40
class Console public : Object
{
	// Fields
	LocalPlayer* ConsoleTargetPlayer; // 0x38
	Texture2D* DefaultTexture_Black; // 0x40
	Texture2D* DefaultTexture_White; // 0x48
	TArray HistoryBuffer; // 0x68

};


instance 1ab5e140d00
class ControlChannel public : Channel
{
	// Fields

};


instance 1ab5e140ac0
class StreamingSettings public : DeveloperSettings
{
	// Fields
	bool AsyncLoadingThreadEnabled; // 0x38
	bool WarnIfTimeLimitExceeded; // 0x38
	float TimeLimitExceededMultiplier; // 0x3c
	float TimeLimitExceededMinTime; // 0x40
	int MinBulkDataSizeForAsyncLoading; // 0x44
	bool UseBackgroundLevelStreaming; // 0x48
	bool AsyncLoadingUseFullTimeLimit; // 0x48
	float AsyncLoadingTimeLimit; // 0x4c
	float PriorityAsyncLoadingExtraTime; // 0x50
	float LevelStreamingActorsUpdateTimeLimit; // 0x54
	float PriorityLevelStreamingActorsUpdateExtraTime; // 0x58
	int LevelStreamingComponentsRegistrationGranularity; // 0x5c
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x60
	int LevelStreamingComponentsUnregistrationGranularity; // 0x64
	bool EventDrivenLoaderEnabled; // 0x68
	bool FlushStreamingOnExit; // 0x68

};


instance 1ab5e140880
class GarbageCollectionSettings public : DeveloperSettings
{
	// Fields
	float TimeBetweenPurgingPendingKillObjects; // 0x38
	bool FlushStreamingOnGC; // 0x3c
	bool AllowParallelGC; // 0x3c
	bool IncrementalBeginDestroyEnabled; // 0x3c
	bool MultithreadedDestructionEnabled; // 0x3c
	bool CreateGCClusters; // 0x3c
	bool ActorClusteringEnabled; // 0x3c
	bool BlueprintClusteringEnabled; // 0x3c
	bool UseDisregardForGCOnDedicatedServers; // 0x3c
	int MinGCClusterSize; // 0x40
	int NumRetriesBeforeForcingGC; // 0x44
	int MaxObjectsNotConsideredByGC; // 0x48
	int SizeOfPermanentObjectPool; // 0x4c
	int MaxObjectsInGame; // 0x50
	int MaxObjectsInEditor; // 0x54

};


instance 1ab5e140640
class CullDistanceVolume public : Volume
{
	// Fields
	TArray CullDistances; // 0x250
	bool bEnabled; // 0x260

};


instance 1ab5e140400
class CurveBase public : Object
{
	// Fields

	// Functions
	GetValueRange 0x49696 hash 78d0096f params:( None MinValue;None MaxValue; );
	GetTimeRange 0x4968f hash 367c2601 params:( None MinTime;None MaxTime; );
};


instance 1ab5e1401c0
class CurveEdPresetCurve public : Object
{
	// Fields

};


instance 1ab5e149400
class CurveFloat public : CurveBase
{
	// Fields
	RichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xb0

	// Functions
	GetFloatValue 0x496ae hash 1dfe4eb8 params:( None InTime;None ReturnValue; );
};


instance 1ab5e1491c0
class CurveLinearColor public : CurveBase
{
	// Fields
	RichCurve FloatCurves; // 0x30
	float AdjustHue; // 0x230
	float AdjustSaturation; // 0x234
	float AdjustBrightness; // 0x238
	float AdjustBrightnessCurve; // 0x23c
	float AdjustVibrance; // 0x240
	float AdjustMinAlpha; // 0x244
	float AdjustMaxAlpha; // 0x248

	// Functions
	GetLinearColorValue 0x496cd hash b47a777c params:( None InTime;LinearColor ReturnValue; );
	GetClampedLinearColorValue 0x496bf hash 19dea252 params:( None InTime;LinearColor ReturnValue; );
};


instance 1ab5e148d40
class Texture2D public : Texture
{
	// Fields
	int LevelIndex; // 0xd0
	int FirstResourceMemMip; // 0xd4
	bool bTemporarilyDisableStreaming; // 0xd8
	BYTE AddressX; // 0xd9
	BYTE AddressY; // 0xda
	IntPoint ImportedSize; // 0xdc

	// Functions
	Blueprint_GetSizeY 0x496f4 hash 62766e8d params:( None ReturnValue; );
	Blueprint_GetSizeX 0x496ea hash 62766e8c params:( None ReturnValue; );
};


instance 1ab5e148f80
class CurveLinearColorAtlas public : Texture2D
{
	// Fields
	int TextureSize; // 0x100
	TArray GradientCurves; // 0x108

	// Functions
	GetCurvePosition 0x496fe hash 82c5abf params:( CurveLinearColor InCurve;None Position;None ReturnValue; );
};


instance 1ab5e148b00
class CurveSourceInterface public : Interface
{
	// Fields

	// Functions
	GetCurveValue 0x25e95 hash 1c8dad67 params:( None CurveName;None ReturnValue; );
	GetCurves 0x25e8f hash fccbc1dd params:( OutValues OutValues; );
	GetBindingName 0x25e87 hash f615a9c1 params:( None ReturnValue; );
};


instance 1ab5e1488c0
class CurveVector public : CurveBase
{
	// Fields
	RichCurve FloatCurves; // 0x30

	// Functions
	GetVectorValue 0x49719 hash e9f70ad5 params:( None InTime;Vector ReturnValue; );
};


instance 1ab5e148680
class PrimaryDataAsset public : DataAsset
{
	// Fields

};


instance 1ab5e148440
class DataTableFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	GetDataTableRowNames 0x4976a hash 75ebbb13 params:( DataTable Table;OutRowNames OutRowNames; );
	GetDataTableRowFromName 0x4975d hash 58581e54 params:( DataTable Table;None RowName;TableRowBase OutRow;None ReturnValue; );
	GetDataTableColumnAsString 0x4974f hash 6ece9ca0 params:( DataTable DataTable;None PropertyName;ReturnValue ReturnValue; );
	EvaluateCurveTableRow 0x49743 hash d7c7bd61 params:( CurveTable CurveTable;None RowName;None InXY;EEvaluateCurveTableResult OutResult;None OutXY;None ContextString; );
	DoesDataTableRowExist 0x49737 hash ae8043f7 params:( DataTable Table;None RowName;None ReturnValue; );
};


instance 1ab5e148200
class DebugCameraController public : PlayerController
{
	// Fields
	bool bShowSelectedInfo; // 0x568
	bool bIsFrozenRendering; // 0x568
	bool bIsOrbitingSelectedActor; // 0x568
	bool bOrbitPivotUseCenter; // 0x568
	bool bEnableBufferVisualization; // 0x568
	bool bEnableBufferVisualizationFullMode; // 0x568
	bool bIsBufferVisualizationInputSetup; // 0x568
	bool bLastDisplayEnabled; // 0x568
	DrawFrustumComponent* DrawFrustum; // 0x570
	Actor* SelectedActor; // 0x578
	PrimitiveComponent* SelectedComponent; // 0x580
	HitResult SelectedHitPoint; // 0x588
	PlayerController* OriginalControllerRef; // 0x610
	Player* OriginalPlayer; // 0x618
	float SpeedScale; // 0x620
	float InitialMaxSpeed; // 0x624
	float InitialAccel; // 0x628
	float InitialDecel; // 0x62c

	// Functions
	ToggleDisplay 0x497a4 hash c47bfd3d params:(  );
	ShowDebugSelectedInfo 0x49798 hash a1160a42 params:(  );
	SetPawnMovementSpeedScale 0x4978a hash 7aa0786b params:( None NewSpeedScale; );
	ReceiveOnDeactivate 0x26074 hash ccb4949f params:( PlayerController RestoredPC; );
	ReceiveOnActorSelected 0x26068 hash dd6aa9a7 params:( Actor NewSelectedActor;Vector SelectHitLocation;Vector SelectHitNormal;HitResult Hit; );
	ReceiveOnActivate 0x2605e hash b72c1116 params:( PlayerController OriginalPC; );
	GetSelectedActor 0x49781 hash b2af8ee7 params:( Actor ReturnValue; );
};


instance 1ab5e147fc0
class DebugCameraControllerSettings public : DeveloperSettings
{
	// Fields
	TArray CycleViewModes; // 0x38

};


instance 1ab5e147d80
class DebugCameraHUD public : HUD
{
	// Fields

};


instance 1ab5e147b40
class DebugDrawService public : BlueprintFunctionLibrary
{
	// Fields

};


instance 1ab5e147900
class DecalActor public : Actor
{
	// Fields
	DecalComponent* Decal; // 0x218

	// Functions
	SetDecalMaterial 0x497dc hash ec84c019 params:( MaterialInterface NewDecalMaterial; );
	GetDecalMaterial 0x497d3 hash 5a06f98d params:( MaterialInterface ReturnValue; );
	CreateDynamicMaterialInstance 0x3f665 hash a4482bc2 params:( MaterialInstanceDynamic ReturnValue; );
};


instance 1ab5e1476c0
class DecalComponent public : SceneComponent
{
	// Fields
	MaterialInterface* DecalMaterial; // 0x1f0
	int SortOrder; // 0x1f8
	float FadeScreenSize; // 0x1fc
	float FadeStartDelay; // 0x200
	float FadeDuration; // 0x204
	float FadeInDuration; // 0x208
	float FadeInStartDelay; // 0x20c
	bool bDestroyOwnerAfterFade; // 0x210
	Vector DecalSize; // 0x214

	// Functions
	SetSortOrder 0x4982b hash 3aa68235 params:( None Value; );
	SetFadeScreenSize 0x49821 hash c792123c params:( None NewFadeScreenSize; );
	SetFadeOut 0x4981b hash 7e034e59 params:( None StartDelay;None Duration;None DestroyOwnerAfterFade; );
	SetFadeIn 0x49815 hash 782ea478 params:( None StartDelay;None Duaration; );
	SetDecalMaterial 0x497dc hash ec84c019 params:( MaterialInterface NewDecalMaterial; );
	GetFadeStartDelay 0x4980b hash fa0432d2 params:( None ReturnValue; );
	GetFadeInStartDelay 0x49800 hash 9ed2eea9 params:( None ReturnValue; );
	GetFadeInDuration 0x497f6 hash 37941e52 params:( None ReturnValue; );
	GetFadeDuration 0x497ed hash ae24443b params:( None ReturnValue; );
	GetDecalMaterial 0x497d3 hash 5a06f98d params:( MaterialInterface ReturnValue; );
	CreateDynamicMaterialInstance 0x3f665 hash a4482bc2 params:( MaterialInstanceDynamic ReturnValue; );
};


instance 1ab5e147480
class DefaultPawn public : Pawn
{
	// Fields
	float BaseTurnRate; // 0x278
	float BaseLookUpRate; // 0x27c
	PawnMovementComponent* MovementComponent; // 0x280
	SphereComponent* CollisionComponent; // 0x288
	StaticMeshComponent* MeshComponent; // 0x290
	bool bAddDefaultMovementBindings; // 0x298

	// Functions
	TurnAtRate 0x44f89 hash aedd190f params:( None Rate; );
	MoveUp_World 0x49839 hash ba556888 params:( None Val; );
	MoveRight 0x44f7a hash d90e0f1a params:( None Val; );
	MoveForward 0x44f73 hash c7e15dd1 params:( None Val; );
	LookUpAtRate 0x44f6c hash e4048ec0 params:( None Rate; );
};


instance 1ab5e147000
class PhysicsVolume public : Volume
{
	// Fields
	float TerminalVelocity; // 0x250
	int Priority; // 0x254
	float FluidFriction; // 0x258
	bool bWaterVolume; // 0x25c
	bool bPhysicsOnContact; // 0x25c

};


instance 1ab5e147240
class DefaultPhysicsVolume public : PhysicsVolume
{
	// Fields

};


instance 1ab5e146dc0
class DemoNetConnection public : NetConnection
{
	// Fields

};


instance 1ab5e146b80
class DemoNetDriver public : NetDriver
{
	// Fields
	MapProperty RollbackNetStartupActors; // 0x800 property 0x1ab71168e40 hash 0xadd0fb88
	float CheckpointSaveMaxMSPerFrame; // 0xc14
	TArray MulticastRecordOptions; // 0xc48
	bool bIsLocalReplay; // 0xc58
	TArray SpectatorControllers; // 0xc60

};


instance 1ab5e146700
class PendingNetGame public : Object
{
	// Fields
	NetDriver* NetDriver; // 0x30
	DemoNetDriver* DemoNetDriver; // 0x38

};


instance 1ab5e146940
class DemoPendingNetGame public : PendingNetGame
{
	// Fields

};


instance 1ab5e1464c0
class DestructibleInterface public : Interface
{
	// Fields

};


instance 1ab5e146040
class TextureLODSettings public : Object
{
	// Fields
	TArray TextureLODGroups; // 0x28

};


instance 1ab5e146280
class DeviceProfile public : TextureLODSettings
{
	// Fields
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	Object* Parent; // 0x58
	TArray CVars; // 0x78

};


instance 1ab5e145e00
class DeviceProfileManager public : Object
{
	// Fields
	TArray Profiles; // 0x28

};


instance 1ab5e145bc0
class DialogueSoundWaveProxy public : SoundBase
{
	// Fields

};


instance 1ab5e145980
class DialogueVoice public : Object
{
	// Fields
	BYTE Gender; // 0x28
	BYTE Plurality; // 0x29
	Guid LocalizationGUID; // 0x2c

};


instance 1ab5e145740
class DialogueWave public : Object
{
	// Fields
	bool bMature; // 0x28
	bool bOverride_SubtitleOverride; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray ContextMappings; // 0x50
	Guid LocalizationGUID; // 0x60

};


instance 1ab5e1452c0
class Light public : Actor
{
	// Fields
	LightComponent* LightComponent; // 0x218
	bool bEnabled; // 0x220

	// Functions
	ToggleEnabled 0x49925 hash 1bd29f32 params:(  );
	SetLightFunctionScale 0x49919 hash 5e41c8f7 params:( Vector NewLightFunctionScale; );
	SetLightFunctionMaterial 0x4990c hash b93107be params:( MaterialInterface NewLightFunctionMaterial; );
	SetLightFunctionFadeDistance 0x498fd hash 956a87ca params:( None NewLightFunctionFadeDistance; );
	SetLightColor 0x498f5 hash 48b5b1c8 params:( LinearColor NewLightColor; );
	SetEnabled 0x48cbb hash 4f24ac5c params:( None bSetEnabled; );
	SetCastShadows 0x498ed hash 80cb9a75 params:( None bNewValue; );
	SetBrightness 0x498e5 hash abad8c0a params:( None NewBrightness; );
	SetAffectTranslucentLighting 0x498d6 hash 2a71fc83 params:( None bNewValue; );
	OnRep_bEnabled 0x456da hash f2b2e395 params:(  );
	IsEnabled 0x498d0 hash 1248190c params:( None ReturnValue; );
	GetLightColor 0x498c8 hash 90413fbc params:( LinearColor ReturnValue; );
	GetBrightness 0x498c0 hash f33919fe params:( None ReturnValue; );
};


instance 1ab5e145500
class DirectionalLight public : Light
{
	// Fields

};


instance 1ab5e144c00
class LightComponentBase public : SceneComponent
{
	// Fields
	Guid LightGuid; // 0x1f0
	float Brightness; // 0x200
	float Intensity; // 0x204
	Color LightColor; // 0x208
	bool bAffectsWorld; // 0x20c
	bool CastShadows; // 0x20c
	bool CastStaticShadows; // 0x20c
	bool CastDynamicShadows; // 0x20c
	bool bAffectTranslucentLighting; // 0x20c
	bool bTransmission; // 0x20c
	bool bCastVolumetricShadow; // 0x20c
	bool bCastDeepShadow; // 0x20c
	bool bCastRaytracedShadow; // 0x20d
	bool bAffectReflection; // 0x20d
	bool bAffectGlobalIllumination; // 0x20d
	float IndirectLightingIntensity; // 0x210
	float VolumetricScatteringIntensity; // 0x214
	int SamplesPerPixel; // 0x218

	// Functions
	SetSamplesPerPixel 0x4998a hash 1398664f params:( None NewValue; );
	SetCastVolumetricShadow 0x4997d hash cbeefe2c params:( None bNewValue; );
	SetCastShadows 0x498ed hash 80cb9a75 params:( None bNewValue; );
	SetCastRaytracedShadow 0x49971 hash 73075101 params:( None bNewValue; );
	SetCastDeepShadow 0x49967 hash 95e3d320 params:( None bNewValue; );
	SetAffectReflection 0x4995c hash 4321a045 params:( None bNewValue; );
	SetAffectGlobalIllumination 0x4994d hash 6093d0c0 params:( None bNewValue; );
	GetLightColor 0x498c8 hash 90413fbc params:( LinearColor ReturnValue; );
};


instance 1ab5e144e40
class LightComponent public : LightComponentBase
{
	// Fields
	float Temperature; // 0x220
	float MaxDrawDistance; // 0x224
	float MaxDistanceFadeRange; // 0x228
	bool bUseTemperature; // 0x22c
	int ShadowMapChannel; // 0x230
	float MinRoughness; // 0x238
	float SpecularScale; // 0x23c
	float ShadowResolutionScale; // 0x240
	float ShadowBias; // 0x244
	float ShadowSlopeBias; // 0x248
	float ShadowSharpen; // 0x24c
	float ContactShadowLength; // 0x250
	bool ContactShadowLengthInWS; // 0x254
	bool InverseSquaredFalloff; // 0x254
	bool CastTranslucentShadows; // 0x254
	bool bCastShadowsFromCinematicObjectsOnly; // 0x254
	bool bAffectDynamicIndirectLighting; // 0x254
	bool bForceCachedShadowsForMovablePrimitives; // 0x254
	LightingChannels LightingChannels; // 0x258
	MaterialInterface* LightFunctionMaterial; // 0x260
	Vector LightFunctionScale; // 0x268
	TextureLightProfile* IESTexture; // 0x278
	bool bUseIESBrightness; // 0x280
	float IESBrightnessScale; // 0x284
	float LightFunctionFadeDistance; // 0x288
	float DisabledBrightness; // 0x28c
	bool bEnableLightShaftBloom; // 0x290
	float BloomScale; // 0x294
	float BloomThreshold; // 0x298
	float BloomMaxBrightness; // 0x29c
	Color BloomTint; // 0x2a0
	bool bUseRayTracedDistanceFieldShadows; // 0x2a4
	float RayStartOffsetDepthScale; // 0x2a8

	// Functions
	SetVolumetricScatteringIntensity 0x49a60 hash 3bafe356 params:( None NewIntensity; );
	SetUseIESBrightness 0x49a55 hash a0864fb8 params:( None bNewValue; );
	SetTransmission 0x49a4c hash cebfc1db params:( None bNewValue; );
	SetTemperature 0x49a44 hash 8120a97f params:( None NewTemperature; );
	SetSpecularScale 0x49a3b hash 6eba3a38 params:( None NewValue; );
	SetShadowSlopeBias 0x49a31 hash cd791179 params:( None NewValue; );
	SetShadowBias 0x49a29 hash 2af9bbd6 params:( None NewValue; );
	SetLightFunctionScale 0x49919 hash 5e41c8f7 params:( Vector NewLightFunctionScale; );
	SetLightFunctionMaterial 0x4990c hash b93107be params:( MaterialInterface NewLightFunctionMaterial; );
	SetLightFunctionFadeDistance 0x498fd hash 956a87ca params:( None NewLightFunctionFadeDistance; );
	SetLightFunctionDisabledBrightness 0x49a17 hash 64c6c480 params:( None NewValue; );
	SetLightColor 0x498f5 hash 48b5b1c8 params:( LinearColor NewLightColor;None bSRGB; );
	SetIntensity 0x49a10 hash 3ab0f698 params:( None NewIntensity; );
	SetIndirectLightingIntensity 0x49a01 hash e69948e0 params:( None NewIntensity; );
	SetIESTexture 0x499f9 hash 43294f63 params:( TextureLightProfile NewValue; );
	SetIESBrightnessScale 0x499ed hash 6af14093 params:( None NewValue; );
	SetForceCachedShadowsForMovablePrimitives 0x499d7 hash cf0cf72a params:( None bNewValue; );
	SetEnableLightShaftBloom 0x499ca hash ce6e085f params:( None bNewValue; );
	SetBloomTint 0x499c3 hash c9138349 params:( Color NewValue; );
	SetBloomThreshold 0x499b9 hash d80ba577 params:( None NewValue; );
	SetBloomScale 0x499b1 hash eb6e51b2 params:( None NewValue; );
	SetBloomMaxBrightness 0x499a5 hash b03792c9 params:( None NewValue; );
	SetAffectTranslucentLighting 0x498d6 hash 2a71fc83 params:( None bNewValue; );
	SetAffectDynamicIndirectLighting 0x49994 hash 513add27 params:( None bNewValue; );
};


instance 1ab5e145080
class DirectionalLightComponent public : LightComponent
{
	// Fields
	float ShadowCascadeBiasDistribution; // 0x338
	bool bEnableLightShaftOcclusion; // 0x33c
	float OcclusionMaskDarkness; // 0x340
	float OcclusionDepthRange; // 0x344
	Vector LightShaftOverrideDirection; // 0x348
	float WholeSceneDynamicShadowRadius; // 0x354
	float DynamicShadowDistanceMovableLight; // 0x358
	float DynamicShadowDistanceStationaryLight; // 0x35c
	int DynamicShadowCascades; // 0x360
	float CascadeDistributionExponent; // 0x364
	float CascadeTransitionFraction; // 0x368
	float ShadowDistanceFadeoutFraction; // 0x36c
	bool bUseInsetShadowsForMovableObjects; // 0x370
	int FarShadowCascadeCount; // 0x374
	float FarShadowDistance; // 0x378
	float DistanceFieldShadowDistance; // 0x37c
	float LightSourceAngle; // 0x380
	float LightSourceSoftAngle; // 0x384
	float TraceDistance; // 0x388
	LightmassDirectionalLightSettings LightmassSettings; // 0x38c
	bool bCastModulatedShadows; // 0x39c
	Color ModulatedShadowColor; // 0x3a0
	float ShadowAmount; // 0x3a4
	bool bUsedAsAtmosphereSunLight; // 0x3a8
	int AtmosphereSunLightIndex; // 0x3ac

	// Functions
	SetShadowDistanceFadeoutFraction 0x49afa hash f2547be0 params:( None NewValue; );
	SetShadowAmount 0x49af1 hash ce53072b params:( None NewValue; );
	SetOcclusionMaskDarkness 0x49ae4 hash 4db56b87 params:( None NewValue; );
	SetLightShaftOverrideDirection 0x49ad4 hash 78d308e0 params:( Vector NewValue; );
	SetEnableLightShaftOcclusion 0x49ac5 hash e701af15 params:( None bNewValue; );
	SetDynamicShadowDistanceStationaryLight 0x49ab0 hash d44a714d params:( None NewValue; );
	SetDynamicShadowDistanceMovableLight 0x49a9d hash 74173aa5 params:( None NewValue; );
	SetDynamicShadowCascades 0x49a90 hash 5e63c953 params:( None NewValue; );
	SetCascadeTransitionFraction 0x49a81 hash c4207736 params:( None NewValue; );
	SetCascadeDistributionExponent 0x49a71 hash a27b5226 params:( None NewValue; );
};


instance 1ab5e14de40
class Distribution public : Object
{
	// Fields

};


instance 1ab5e14dc00
class DistributionFloat public : Distribution
{
	// Fields
	bool bCanBeBaked; // 0x30
	bool bBakedDataSuccesfully; // 0x30

};


instance 1ab5e14d9c0
class DistributionFloatConstant public : DistributionFloat
{
	// Fields
	float Constant; // 0x38

};


instance 1ab5e14d780
class DistributionFloatConstantCurve public : DistributionFloat
{
	// Fields
	InterpCurveFloat ConstantCurve; // 0x38

};


instance 1ab5e14d540
class DistributionFloatParameterBase public : DistributionFloatConstant
{
	// Fields
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	BYTE ParamMode; // 0x58

};


instance 1ab5e14d300
class DistributionFloatParticleParameter public : DistributionFloatParameterBase
{
	// Fields

};


instance 1ab5e14d0c0
class DistributionFloatUniform public : DistributionFloat
{
	// Fields
	float Min; // 0x38
	float Max; // 0x3c

};


instance 1ab5e14ce80
class DistributionFloatUniformCurve public : DistributionFloat
{
	// Fields
	InterpCurveVector2D ConstantCurve; // 0x38

};


instance 1ab5e14cc40
class DistributionVector public : Distribution
{
	// Fields
	bool bCanBeBaked; // 0x30
	bool bIsDirty; // 0x30
	bool bBakedDataSuccesfully; // 0x30

};


instance 1ab5e14ca00
class DistributionVectorConstant public : DistributionVector
{
	// Fields
	Vector Constant; // 0x38
	bool bLockAxes; // 0x44
	BYTE LockedAxes; // 0x48

};


instance 1ab5e14c7c0
class DistributionVectorConstantCurve public : DistributionVector
{
	// Fields
	InterpCurveVector ConstantCurve; // 0x38
	bool bLockAxes; // 0x50
	BYTE LockedAxes; // 0x54

};


instance 1ab5e14c580
class DistributionVectorParameterBase public : DistributionVectorConstant
{
	// Fields
	FName ParameterName; // 0x50
	Vector MinInput; // 0x58
	Vector MaxInput; // 0x64
	Vector MinOutput; // 0x70
	Vector MaxOutput; // 0x7c
	BYTE ParamModes; // 0x88

};


instance 1ab5e14c340
class DistributionVectorParticleParameter public : DistributionVectorParameterBase
{
	// Fields

};


instance 1ab5e14c100
class DistributionVectorUniform public : DistributionVector
{
	// Fields
	Vector Max; // 0x38
	Vector Min; // 0x44
	bool bLockAxes; // 0x50
	BYTE LockedAxes; // 0x54
	BYTE MirrorFlags; // 0x55
	bool bUseExtremes; // 0x58

};


instance 1ab5e14bec0
class DistributionVectorUniformCurve public : DistributionVector
{
	// Fields
	InterpCurveTwoVectors ConstantCurve; // 0x38
	bool bLockAxes1; // 0x50
	bool bLockAxes2; // 0x50
	BYTE LockedAxes; // 0x54
	BYTE MirrorFlags; // 0x56
	bool bUseExtremes; // 0x5c

};


instance 1ab5e14bc80
class DocumentationActor public : Actor
{
	// Fields

};


instance 1ab5e14ba40
class DPICustomScalingRule public : Object
{
	// Fields

};


instance 1ab5e14b800
class DrawFrustumComponent public : PrimitiveComponent
{
	// Fields
	Color FrustumColor; // 0x3d8
	float FrustumAngle; // 0x3dc
	float FrustumAspectRatio; // 0x3e0
	float FrustumStartDist; // 0x3e4
	float FrustumEndDist; // 0x3e8
	Texture* Texture; // 0x3f0

};


instance 1ab5e14b5c0
class DrawSphereComponent public : SphereComponent
{
	// Fields

};


instance 1ab5e14b380
class EdGraph public : Object
{
	// Fields
	EdGraphSchema* Schema; // 0x28
	TArray Nodes; // 0x30
	bool bEditable; // 0x40
	bool bAllowDeletion; // 0x40
	bool bAllowRenaming; // 0x40

};


instance 1ab5e14b140
class GraphNodeContextMenuContext public : Object
{
	// Fields
	Blueprint* Blueprint; // 0x28
	EdGraph* Graph; // 0x30
	EdGraphNode* Node; // 0x38
	bool bIsDebugging; // 0x48

};


instance 1ab5e14af00
class EdGraphNode public : Object
{
	// Fields
	TArray DeprecatedPins; // 0x38
	int NodePosX; // 0x48
	int NodePosY; // 0x4c
	int NodeWidth; // 0x50
	int NodeHeight; // 0x54
	BYTE AdvancedPinDisplay; // 0x58
	ENodeEnabledState EnabledState; // 0x59
	bool bDisplayAsDisabled; // 0x5b
	bool bUserSetEnabledState; // 0x5b
	bool bIsNodeEnabled; // 0x5b
	bool bHasCompilerMessage; // 0x5b
	FString NodeComment; // 0x60
	int ErrorType; // 0x70
	FString ErrorMsg; // 0x78
	Guid NodeGuid; // 0x88

};


instance 1ab5e14acc0
class EdGraphNode_Documentation public : EdGraphNode
{
	// Fields
	FString Link; // 0x98
	FString Excerpt; // 0xa8

};


instance 1ab5e14aa80
class EdGraphPin_Deprecated public : Object
{
	// Fields
	FString PinName; // 0x28
	FString PinToolTip; // 0x38
	BYTE Direction; // 0x48
	EdGraphPinType PinType; // 0x50
	FString DefaultValue; // 0xa8
	FString AutogeneratedDefaultValue; // 0xb8
	Object* DefaultObject; // 0xc8
	FText DefaultTextValue; // 0xd0
	TArray LinkedTo; // 0xe8
	TArray SubPins; // 0xf8
	EdGraphPin_Deprecated* ParentPin; // 0x108
	EdGraphPin_Deprecated* ReferencePassThroughConnection; // 0x110

};


instance 1ab5e14a840
class EdGraphSchema public : Object
{
	// Fields

};


instance 1ab5e14a600
class Emitter public : Actor
{
	// Fields
	ParticleSystemComponent* ParticleSystemComponent; // 0x218
	bool bDestroyOnSystemFinish; // 0x220
	bool bPostUpdateTickGroup; // 0x220
	bool bCurrentlyActive; // 0x220
	MulticastInlineDelegateProperty OnParticleSpawn; // 0x228 property 0x1ab71d77200 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnParticleBurst; // 0x238 property 0x1ab71d77280 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnParticleDeath; // 0x248 property 0x1ab71d77300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnParticleCollide; // 0x258 property 0x1ab71d77380 hash 0xb7a5ed1a

	// Functions
	ToggleActive 0x3e045 hash 6361d743 params:(  );
	SetVectorParameter 0x49c90 hash df99c205 params:( None ParameterName;Vector Param; );
	SetTemplate 0x49c89 hash 73c4be4d params:( ParticleSystem NewTemplate; );
	SetMaterialParameter 0x49c7e hash 6d43c681 params:( None ParameterName;MaterialInterface Param; );
	SetFloatParameter 0x40ca1 hash 44c33de8 params:( None ParameterName;None Param; );
	SetColorParameter 0x49c74 hash 31425cb1 params:( None ParameterName;LinearColor Param; );
	SetActorParameter 0x49c6a hash 89e8626b params:( None ParameterName;Actor Param; );
	OnRep_bCurrentlyActive 0x49c5e hash c995c8ae params:(  );
	OnParticleSystemFinished 0x49c51 hash 629c9d05 params:( ParticleSystemComponent FinishedComponent; );
	IsActive 0x3dfb3 hash dc27ddd params:( None ReturnValue; );
	Deactivate 0x3df9b hash 9d90ffdf params:(  );
	Activate 0x3df71 hash 5374ac56 params:(  );
};


instance 1ab5e14a3c0
class EmitterCameraLensEffectBase public : Emitter
{
	// Fields
	ParticleSystem* PS_CameraEffect; // 0x268
	ParticleSystem* PS_CameraEffectNonExtremeContent; // 0x270
	PlayerCameraManager* BaseCamera; // 0x278
	Transform RelativeTransform; // 0x280
	float BaseFOV; // 0x2b0
	bool bAllowMultipleInstances; // 0x2b4
	bool bResetWhenRetriggered; // 0x2b4
	TArray EmittersToTreatAsSame; // 0x2b8
	float DistFromCamera; // 0x2c8

};


instance 1ab5e14a180
class EngineBaseTypes public : Object
{
	// Fields

};


instance 1ab5e149f40
class EngineHandlerComponentFactory public : HandlerComponentFactory
{
	// Fields

};


instance 1ab5e149ac0
class LocalMessage public : Object
{
	// Fields

};


instance 1ab5e149d00
class EngineMessage public : LocalMessage
{
	// Fields
	FString FailedPlaceMessage; // 0x28
	FString MaxedOutMessage; // 0x38
	FString EnteredMessage; // 0x48
	FString LeftMessage; // 0x58
	FString GlobalNameChange; // 0x68
	FString SpecEnteredMessage; // 0x78
	FString NewPlayerMessage; // 0x88
	FString NewSpecMessage; // 0x98

};


instance 1ab5e149880
class EngineTypes public : Object
{
	// Fields

};


instance 1ab5e149640
class ExponentialHeightFog public : Info
{
	// Fields
	ExponentialHeightFogComponent* Component; // 0x218
	bool bEnabled; // 0x220

	// Functions
	OnRep_bEnabled 0x456da hash f2b2e395 params:(  );
};


instance 1ab5e14fdc0
class ExponentialHeightFogComponent public : SceneComponent
{
	// Fields
	float FogDensity; // 0x1f0
	float FogHeightFalloff; // 0x1f4
	ExponentialHeightFogData SecondFogData; // 0x1f8
	LinearColor FogInscatteringColor; // 0x204
	TextureCube* InscatteringColorCubemap; // 0x218
	float InscatteringColorCubemapAngle; // 0x220
	LinearColor InscatteringTextureTint; // 0x224
	float FullyDirectionalInscatteringColorDistance; // 0x234
	float NonDirectionalInscatteringColorDistance; // 0x238
	float DirectionalInscatteringExponent; // 0x23c
	float DirectionalInscatteringStartDistance; // 0x240
	LinearColor DirectionalInscatteringColor; // 0x244
	float FogMaxOpacity; // 0x254
	float StartDistance; // 0x258
	float FogCutoffDistance; // 0x25c
	bool bEnableVolumetricFog; // 0x260
	float VolumetricFogScatteringDistribution; // 0x264
	Color VolumetricFogAlbedo; // 0x268
	LinearColor VolumetricFogEmissive; // 0x26c
	float VolumetricFogExtinctionScale; // 0x27c
	float VolumetricFogDistance; // 0x280
	float VolumetricFogStaticLightingScatteringIntensity; // 0x284
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x288

	// Functions
	SetVolumetricFogScatteringDistribution 0x49dfa hash c5abcf8b params:( None NewValue; );
	SetVolumetricFogExtinctionScale 0x49de9 hash 5b7423a4 params:( None NewValue; );
	SetVolumetricFogEmissive 0x49ddc hash 4a3402dc params:( LinearColor NewValue; );
	SetVolumetricFogDistance 0x49dcf hash 41651dc2 params:( None NewValue; );
	SetVolumetricFogAlbedo 0x49dc3 hash f5015fde params:( Color NewValue; );
	SetVolumetricFog 0x49dba hash b89af337 params:( None bNewValue; );
	SetStartDistance 0x48c91 hash 6768fc2a params:( None Value; );
	SetNonDirectionalInscatteringColorDistance 0x49da4 hash e96939bf params:( None Value; );
	SetInscatteringTextureTint 0x49d96 hash 4bf58fec params:( LinearColor Value; );
	SetInscatteringColorCubemapAngle 0x49d85 hash 913c011f params:( None Value; );
	SetInscatteringColorCubemap 0x49d76 hash 88c76f38 params:( TextureCube Value; );
	SetFullyDirectionalInscatteringColorDistance 0x49d5f hash 28beb960 params:( None Value; );
	SetFogMaxOpacity 0x49d56 hash 73dc5ccc params:( None Value; );
	SetFogInscatteringColor 0x49d49 hash d767c997 params:( LinearColor Value; );
	SetFogHeightFalloff 0x49d3e hash 4a271a20 params:( None Value; );
	SetFogDensity 0x49d36 hash f83f478d params:( None Value; );
	SetFogCutoffDistance 0x49d2b hash db5cc45f params:( None Value; );
	SetDirectionalInscatteringStartDistance 0x49d16 hash 8c6455e3 params:( None Value; );
	SetDirectionalInscatteringExponent 0x49d04 hash 958f73fb params:( None Value; );
	SetDirectionalInscatteringColor 0x49cf3 hash e3b482c9 params:( LinearColor Value; );
};


instance 1ab5e14fb80
class Exporter public : Object
{
	// Fields
	Object* SupportedClass; // 0x28
	Object* ExportRootScope; // 0x30
	TArray FormatExtension; // 0x38
	TArray FormatDescription; // 0x48
	int PreferredFormatIndex; // 0x58
	int TextIndent; // 0x5c
	bool bText; // 0x60
	bool bSelectedOnly; // 0x60
	bool bForceFileOperations; // 0x60
	AssetExportTask* ExportTask; // 0x68

	// Functions
	ScriptRunAssetExportTask 0x27af1 hash 39dd3b24 params:( AssetExportTask Task;None ReturnValue; );
	RunAssetExportTasks 0x49e1d hash ec917ba2 params:( ExportTasks ExportTasks;None ReturnValue; );
	RunAssetExportTask 0x49e13 hash f7a7514f params:( AssetExportTask Task;None ReturnValue; );
};


instance 1ab5e14f940
class FloatingPawnMovement public : PawnMovementComponent
{
	// Fields
	float MaxSpeed; // 0x138
	float Acceleration; // 0x13c
	float Deceleration; // 0x140
	float TurningBoost; // 0x144
	bool bPositionCorrected; // 0x148

};


instance 1ab5e14f700
class Font public : Object
{
	// Fields
	EFontCacheType FontCacheType; // 0x30
	TArray Characters; // 0x38
	TArray Textures; // 0x48
	int IsRemapped; // 0x58
	float EmScale; // 0x5c
	float Ascent; // 0x60
	float Descent; // 0x64
	float Leading; // 0x68
	int Kerning; // 0x6c
	FontImportOptionsData ImportOptions; // 0x70
	int NumCharacters; // 0x120
	TArray MaxCharHeight; // 0x128
	float ScalingFactor; // 0x138
	int LegacyFontSize; // 0x13c
	FName LegacyFontName; // 0x140
	CompositeFont CompositeFont; // 0x148

};


instance 1ab5e14f4c0
class FontFace public : Object
{
	// Fields
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
	EFontLayoutMethod LayoutMethod; // 0x42

};


instance 1ab5e14f280
class FontImportOptions public : Object
{
	// Fields
	FontImportOptionsData Data; // 0x28

};


instance 1ab5e14f040
class ForceFeedbackAttenuation public : Object
{
	// Fields
	ForceFeedbackAttenuationSettings Attenuation; // 0x28

};


instance 1ab5e14ee00
class ForceFeedbackComponent public : SceneComponent
{
	// Fields
	ForceFeedbackEffect* ForceFeedbackEffect; // 0x1f0
	bool bAutoDestroy; // 0x1f8
	bool bStopWhenOwnerDestroyed; // 0x1f8
	bool bLooping; // 0x1f8
	bool bIgnoreTimeDilation; // 0x1f8
	bool bOverrideAttenuation; // 0x1f8
	float IntensityMultiplier; // 0x1fc
	ForceFeedbackAttenuation* AttenuationSettings; // 0x200
	ForceFeedbackAttenuationSettings AttenuationOverrides; // 0x208
	MulticastInlineDelegateProperty OnForceFeedbackFinished; // 0x2b8 property 0x1ab71d7d780 hash 0xb7a5ed1a

	// Functions
	Stop 0x3e2ef hash 7c8c8f2b params:(  );
	SetIntensityMultiplier 0x49e6a hash 9a341edf params:( None NewIntensityMultiplier; );
	SetForceFeedbackEffect 0x49e5e hash e6ccf212 params:( ForceFeedbackEffect NewForceFeedbackEffect; );
	Play 0x3fb72 hash 7c8ac63b params:( None StartTime; );
	BP_GetAttenuationSettingsToApply 0x40c21 hash 707247c params:( ForceFeedbackAttenuationSettings OutAttenuationSettings;None ReturnValue; );
	AdjustAttenuation 0x40c10 hash e674439c params:( ForceFeedbackAttenuationSettings InAttenuationSettings; );
};


instance 1ab5e14ebc0
class ForceFeedbackEffect public : Object
{
	// Fields
	TArray ChannelDetails; // 0x28
	float Duration; // 0x38

};


instance 1ab5e14e980
class GameEngine public : Engine
{
	// Fields
	float MaxDeltaTime; // 0xde8
	float ServerFlushLogInterval; // 0xdec
	GameInstance* GameInstance; // 0xdf0

};


instance 1ab5e14e740
class GameInstanceSubsystem public : Subsystem
{
	// Fields

};


instance 1ab5e14e500
class GameNetworkManager public : Info
{
	// Fields
	float BadPacketLossThreshold; // 0x218
	float SeverePacketLossThreshold; // 0x21c
	int BadPingThreshold; // 0x220
	int SeverePingThreshold; // 0x224
	int AdjustedNetSpeed; // 0x228
	float LastNetSpeedUpdateTime; // 0x22c
	int TotalNetBandwidth; // 0x230
	int MinDynamicBandwidth; // 0x234
	int MaxDynamicBandwidth; // 0x238
	bool bIsStandbyCheckingEnabled; // 0x23c
	bool bHasStandbyCheatTriggered; // 0x23c
	float StandbyRxCheatTime; // 0x240
	float StandbyTxCheatTime; // 0x244
	float PercentMissingForRxStandby; // 0x248
	float PercentMissingForTxStandby; // 0x24c
	float PercentForBadPing; // 0x250
	float JoinInProgressStandbyWaitTime; // 0x254
	float MoveRepSize; // 0x258
	float MAXPOSITIONERRORSQUARED; // 0x25c
	float MAXNEARZEROVELOCITYSQUARED; // 0x260
	float CLIENTADJUSTUPDATECOST; // 0x264
	float MAXCLIENTUPDATEINTERVAL; // 0x268
	float MaxClientForcedUpdateDuration; // 0x26c
	float ServerForcedUpdateHitchThreshold; // 0x270
	float ServerForcedUpdateHitchCooldown; // 0x274
	float MaxMoveDeltaTime; // 0x278
	float MaxClientSmoothingDeltaTime; // 0x27c
	float ClientNetSendMoveDeltaTime; // 0x280
	float ClientNetSendMoveDeltaTimeThrottled; // 0x284
	float ClientNetSendMoveDeltaTimeStationary; // 0x288
	int ClientNetSendMoveThrottleAtNetSpeed; // 0x28c
	int ClientNetSendMoveThrottleOverPlayerCount; // 0x290
	bool ClientAuthorativePosition; // 0x294
	float ClientErrorUpdateRateLimit; // 0x298
	float ClientNetCamUpdateDeltaTime; // 0x29c
	float ClientNetCamUpdatePositionLimit; // 0x2a0
	bool bMovementTimeDiscrepancyDetection; // 0x2a4
	bool bMovementTimeDiscrepancyResolution; // 0x2a5
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x2a8
	float MovementTimeDiscrepancyMinTimeMargin; // 0x2ac
	float MovementTimeDiscrepancyResolutionRate; // 0x2b0
	float MovementTimeDiscrepancyDriftAllowance; // 0x2b4
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x2b8
	bool bUseDistanceBasedRelevancy; // 0x2b9

};


instance 1ab5e14e2c0
class GameplayStatics public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	UnloadStreamLevel 0x4a3b1 hash 935fe28c params:( Object WorldContextObject;None LevelName;LatentActionInfo LatentInfo;None bShouldBlockOnUnload; );
	SuggestProjectileVelocity_CustomArc 0x4a39e hash b7018077 params:( Object WorldContextObject;Vector OutLaunchVelocity;Vector StartPos;Vector EndPos;None OverrideGravityZ;None ArcParam;None ReturnValue; );
	SpawnSoundAttached 0x4a394 hash e4b6a875 params:( SoundBase Sound;SceneComponent AttachToComponent;None AttachPointName;Vector Location;Rotator Rotation;EAttachLocation LocationType;None bStopWhenAttachedToDestroyed;None VolumeMultiplier;None PitchMultiplier;None StartTime;SoundAttenuation AttenuationSettings;SoundConcurrency ConcurrencySettings;None bAutoDestroy;AudioComponent ReturnValue; );
	SpawnSoundAtLocation 0x4a389 hash 37f25b45 params:( Object WorldContextObject;SoundBase Sound;Vector Location;Rotator Rotation;None VolumeMultiplier;None PitchMultiplier;None StartTime;SoundAttenuation AttenuationSettings;SoundConcurrency ConcurrencySettings;None bAutoDestroy;AudioComponent ReturnValue; );
	SpawnSound2D 0x4a382 hash c2cdda2d params:( Object WorldContextObject;SoundBase Sound;None VolumeMultiplier;None PitchMultiplier;None StartTime;SoundConcurrency ConcurrencySettings;None bPersistAcrossLevelTransition;None bAutoDestroy;AudioComponent ReturnValue; );
	SpawnObject 0x4a37b hash b5cfb165 params:( Class ObjectClass;Object Outer;Object ReturnValue; );
	SpawnForceFeedbackAttached 0x4a36d hash af3ad240 params:( ForceFeedbackEffect ForceFeedbackEffect;SceneComponent AttachToComponent;None AttachPointName;Vector Location;Rotator Rotation;EAttachLocation LocationType;None bStopWhenAttachedToDestroyed;None bLooping;None IntensityMultiplier;None StartTime;ForceFeedbackAttenuation AttenuationSettings;None bAutoDestroy;ForceFeedbackComponent ReturnValue; );
	SpawnForceFeedbackAtLocation 0x4a35e hash b42823d0 params:( Object WorldContextObject;ForceFeedbackEffect ForceFeedbackEffect;Vector Location;Rotator Rotation;None bLooping;None IntensityMultiplier;None StartTime;ForceFeedbackAttenuation AttenuationSettings;None bAutoDestroy;ForceFeedbackComponent ReturnValue; );
	SpawnEmitterAttached 0x4a353 hash c0c5e526 params:( ParticleSystem EmitterTemplate;SceneComponent AttachToComponent;None AttachPointName;Vector Location;Rotator Rotation;Vector Scale;EAttachLocation LocationType;None bAutoDestroy;UnderlyingType PoolingMethod;None bAutoActivate;ParticleSystemComponent ReturnValue; );
	SpawnEmitterAtLocation 0x4a347 hash 54c38836 params:( Object WorldContextObject;ParticleSystem EmitterTemplate;Vector Location;Rotator Rotation;Vector Scale;None bAutoDestroy;UnderlyingType PoolingMethod;None bAutoActivateSystem;ParticleSystemComponent ReturnValue; );
	SpawnDialogueAttached 0x4a33b hash 89db7c96 params:( DialogueWave Dialogue;DialogueContext Context;SceneComponent AttachToComponent;None AttachPointName;Vector Location;Rotator Rotation;EAttachLocation LocationType;None bStopWhenAttachedToDestroyed;None VolumeMultiplier;None PitchMultiplier;None StartTime;SoundAttenuation AttenuationSettings;None bAutoDestroy;AudioComponent ReturnValue; );
	SpawnDialogueAtLocation 0x4a32e hash b99cbba6 params:( Object WorldContextObject;DialogueWave Dialogue;DialogueContext Context;Vector Location;Rotator Rotation;None VolumeMultiplier;None PitchMultiplier;None StartTime;SoundAttenuation AttenuationSettings;None bAutoDestroy;AudioComponent ReturnValue; );
	SpawnDialogue2D 0x4a325 hash 7a32698e params:( Object WorldContextObject;DialogueWave Dialogue;DialogueContext Context;None VolumeMultiplier;None PitchMultiplier;None StartTime;None bAutoDestroy;AudioComponent ReturnValue; );
	SpawnDecalAttached 0x4a31b hash 6378dee5 params:( MaterialInterface DecalMaterial;Vector DecalSize;SceneComponent AttachToComponent;None AttachPointName;Vector Location;Rotator Rotation;EAttachLocation LocationType;None LifeSpan;DecalComponent ReturnValue; );
	SpawnDecalAtLocation 0x4a310 hash 701bedb5 params:( Object WorldContextObject;MaterialInterface DecalMaterial;Vector DecalSize;Vector Location;Rotator Rotation;None LifeSpan;DecalComponent ReturnValue; );
	SetWorldOriginLocation 0x4a304 hash 27204afa params:( Object WorldContextObject;IntVector NewLocation; );
	SetViewportMouseCaptureMode 0x4a2f5 hash 8ffa57f3 params:( Object WorldContextObject;UnderlyingType MouseCaptureMode; );
	SetSubtitlesEnabled 0x4a2ea hash 526e455b params:( None bEnabled; );
	SetSoundMixClassOverride 0x4a2dd hash 8a1b979e params:( Object WorldContextObject;SoundMix InSoundMixModifier;SoundClass InSoundClass;None Volume;None Pitch;None FadeInTime;None bApplyToChildren; );
	SetPlayerControllerID 0x4a2d1 hash f6ee402f params:( PlayerController Player;None ControllerId; );
	SetMaxAudioChannelsScaled 0x4a2c3 hash 853f701 params:( Object WorldContextObject;None MaxChannelCountScale; );
	SetGlobalTimeDilation 0x4a2b7 hash d4a04525 params:( Object WorldContextObject;None TimeDilation; );
	SetGlobalPitchModulation 0x4a2aa hash 383d2636 params:( Object WorldContextObject;None PitchModulation;None TimeSec; );
	SetGlobalListenerFocusParameters 0x4a299 hash 94cde9bc params:( Object WorldContextObject;None FocusAzimuthScale;None NonFocusAzimuthScale;None FocusDistanceScale;None NonFocusDistanceScale;None FocusVolumeScale;None NonFocusVolumeScale;None FocusPriorityScale;None NonFocusPriorityScale; );
	SetGamePaused 0x4a291 hash e1622a4d params:( Object WorldContextObject;None bPaused;None ReturnValue; );
	SetForceDisableSplitscreen 0x4a283 hash d8531960 params:( Object WorldContextObject;None bDisable; );
	SetEnableWorldRendering 0x4a276 hash d102f55e params:( Object WorldContextObject;None bEnable; );
	SetBaseSoundMix 0x4a26d hash e02dfbe3 params:( Object WorldContextObject;SoundMix InSoundMix; );
	SaveGameToSlot 0x4a265 hash 87cbd013 params:( SaveGame SaveGameObject;None SlotName;None UserIndex;None ReturnValue; );
	RemovePlayer 0x4a25e hash e6275c40 params:( PlayerController Player;None bDestroyPawn; );
	RebaseZeroOriginOntoLocal 0x4a250 hash 33ad156a params:( Object WorldContextObject;Vector WorldLocation;Vector ReturnValue; );
	RebaseLocalOriginOntoZero 0x4a242 hash c0df07aa params:( Object WorldContextObject;Vector WorldLocation;Vector ReturnValue; );
	PushSoundMixModifier 0x4a237 hash b28aa6cb params:( Object WorldContextObject;SoundMix InSoundMixModifier; );
	ProjectWorldToScreen 0x4a22c hash 85f144e7 params:( PlayerController Player;Vector WorldPosition;Vector2D ScreenPosition;None bPlayerViewportRelative;None ReturnValue; );
	PrimeSound 0x4a226 hash f7a7922b params:( SoundBase InSound; );
	PopSoundMixModifier 0x4a21b hash c2f64bfa params:( Object WorldContextObject;SoundMix InSoundMixModifier; );
	PlayWorldCameraShake 0x4a210 hash b5e1718 params:( Object WorldContextObject;Class Shake;Vector Epicenter;None InnerRadius;None OuterRadius;None Falloff;None bOrientShakeTowardsEpicenter; );
	PlaySoundAtLocation 0x4a205 hash 9c389912 params:( Object WorldContextObject;SoundBase Sound;Vector Location;Rotator Rotation;None VolumeMultiplier;None PitchMultiplier;None StartTime;SoundAttenuation AttenuationSettings;SoundConcurrency ConcurrencySettings;Actor OwningActor; );
	PlaySound2D 0x4a1fe hash 1bad9afa params:( Object WorldContextObject;SoundBase Sound;None VolumeMultiplier;None PitchMultiplier;None StartTime;SoundConcurrency ConcurrencySettings;Actor OwningActor; );
	PlayDialogueAtLocation 0x4a1f2 hash 22064253 params:( Object WorldContextObject;DialogueWave Dialogue;DialogueContext Context;Vector Location;Rotator Rotation;None VolumeMultiplier;None PitchMultiplier;None StartTime;SoundAttenuation AttenuationSettings; );
	PlayDialogue2D 0x4a1ea hash 846a933b params:( Object WorldContextObject;DialogueWave Dialogue;DialogueContext Context;None VolumeMultiplier;None PitchMultiplier;None StartTime; );
	ParseOption 0x4a1e3 hash 408e00d9 params:( None Options;None Key;None ReturnValue; );
	OpenLevel 0x4a1dd hash a63aa5af params:( Object WorldContextObject;None LevelName;None bAbsolute;None Options; );
	MakeHitResult 0x4a1d5 hash 80c1f507 params:( None bBlockingHit;None bInitialOverlap;None Time;None Distance;Vector Location;Vector ImpactPoint;Vector Normal;Vector ImpactNormal;PhysicalMaterial PhysMat;Actor HitActor;PrimitiveComponent HitComponent;None HitBoneName;None HitItem;None FaceIndex;Vector TraceStart;Vector TraceEnd;HitResult ReturnValue; );
	LoadStreamLevel 0x4a1cc hash 4b2dac29 params:( Object WorldContextObject;None LevelName;None bMakeVisibleAfterLoad;None bShouldBlockOnLoad;LatentActionInfo LatentInfo; );
	LoadGameFromSlot 0x4a1c3 hash 537882b5 params:( None SlotName;None UserIndex;SaveGame ReturnValue; );
	IsSplitscreenForceDisabled 0x4a1b5 hash b6e04654 params:( Object WorldContextObject;None ReturnValue; );
	IsGamePaused 0x4a1ae hash 313e98fd params:( Object WorldContextObject;None ReturnValue; );
	HasOption 0x4a1a8 hash 8eeaf25a params:( None Options;None InKey;None ReturnValue; );
	HasLaunchOption 0x4a19f hash fa822175 params:( None OptionToCheck;None ReturnValue; );
	GrassOverlappingSphereCount 0x4a190 hash 99ca181c params:( Object WorldContextObject;StaticMesh StaticMesh;Vector CenterPosition;None Radius;None ReturnValue; );
	GetWorldOriginLocation 0x4a184 hash c70ccb6e params:( Object WorldContextObject;IntVector ReturnValue; );
	GetWorldDeltaSeconds 0x4a179 hash 5df6a186 params:( Object WorldContextObject;None ReturnValue; );
	GetViewProjectionMatrix 0x4a16c hash d2e5f492 params:( MinimalViewInfo DesiredView;Matrix ViewMatrix;Matrix ProjectionMatrix;Matrix ViewProjectionMatrix; );
	GetViewportMouseCaptureMode 0x4a15d hash a64d40e7 params:( Object WorldContextObject;UnderlyingType ReturnValue; );
	GetUnpausedTimeSeconds 0x4a151 hash 4cf4a668 params:( Object WorldContextObject;None ReturnValue; );
	GetTimeSeconds 0x4a149 hash 1baa12a3 params:( Object WorldContextObject;None ReturnValue; );
	GetSurfaceType 0x4a141 hash 2a96c930 params:( HitResult Hit;EPhysicalSurface ReturnValue; );
	GetStreamingLevel 0x4a137 hash a7345b87 params:( Object WorldContextObject;None PackageName;LevelStreaming ReturnValue; );
	GetRealTimeSeconds 0x4a12d hash 676b1047 params:( Object WorldContextObject;None ReturnValue; );
	GetPlayerPawn 0x4a125 hash 7137d388 params:( Object WorldContextObject;None PlayerIndex;Pawn ReturnValue; );
	GetPlayerControllerID 0x4a119 hash 2a528223 params:( PlayerController Player;None ReturnValue; );
	GetPlayerControllerFromID 0x4a10b hash 32bc8057 params:( Object WorldContextObject;None ControllerId;PlayerController ReturnValue; );
	GetPlayerController 0x4a100 hash 1f4de2f6 params:( Object WorldContextObject;None PlayerIndex;PlayerController ReturnValue; );
	GetPlayerCharacter 0x4a0f6 hash 37b354df params:( Object WorldContextObject;None PlayerIndex;Character ReturnValue; );
	GetPlayerCameraManager 0x4a0ea hash ae62c4d6 params:( Object WorldContextObject;None PlayerIndex;PlayerCameraManager ReturnValue; );
	GetPlatformName 0x4a0e1 hash ad71a62b params:( None ReturnValue; );
	GetObjectClass 0x4a0d9 hash f7778052 params:( Object Object;Class ReturnValue; );
	GetMaxAudioChannelCount 0x4a0cc hash 88c4433f params:( Object WorldContextObject;None ReturnValue; );
	GetKeyValue 0x4a0c5 hash ff3d548b params:( None Pair;None Key;None Value; );
	GetIntOption 0x4a0be hash bc1bd4e9 params:( None Options;None Key;None DefaultValue;None ReturnValue; );
	GetGlobalTimeDilation 0x4a0b2 hash 8048719 params:( Object WorldContextObject;None ReturnValue; );
	GetGameState 0x4a0ab hash ea381000 params:( Object WorldContextObject;GameStateBase ReturnValue; );
	GetGameMode 0x4a0a4 hash ff53a904 params:( Object WorldContextObject;GameModeBase ReturnValue; );
	GetGameInstance 0x3e6d6 hash 898add94 params:( Object WorldContextObject;GameInstance ReturnValue; );
	GetEnableWorldRendering 0x4a097 hash 6e7f8452 params:( Object WorldContextObject;None ReturnValue; );
	GetCurrentReverbEffect 0x4a08b hash d1880c7b params:( Object WorldContextObject;ReverbEffect ReturnValue; );
	GetCurrentLevelName 0x4a080 hash f261e561 params:( Object WorldContextObject;None bRemovePrefixString;None ReturnValue; );
	GetAudioTimeSeconds 0x4a075 hash 8103d2f5 params:( Object WorldContextObject;None ReturnValue; );
	GetAllActorsWithTag 0x4a06a hash 1f8bc022 params:( Object WorldContextObject;None Tag;OutActors OutActors; );
	GetAllActorsWithInterface 0x4a05c hash 1d2d6537 params:( Object WorldContextObject;Class Interface;OutActors OutActors; );
	GetAllActorsOfClassWithTag 0x4a04e hash 231640cd params:( Object WorldContextObject;Class ActorClass;None Tag;OutActors OutActors; );
	GetAllActorsOfClass 0x4a043 hash ad461ab5 params:( Object WorldContextObject;Class ActorClass;OutActors OutActors; );
	GetActorOfClass 0x4a03a hash 7a304889 params:( Object WorldContextObject;Class ActorClass;Actor ReturnValue; );
	GetActorArrayBounds 0x4a02f hash 19577568 params:( Actors Actors;None bOnlyCollidingComponents;Vector Center;Vector BoxExtent; );
	GetActorArrayAverageLocation 0x4a020 hash 73c7a891 params:( Actors Actors;Vector ReturnValue; );
	GetAccurateRealTime 0x4a015 hash 3c472520 params:( Object WorldContextObject;None Seconds;None PartialSeconds; );
	FlushLevelStreaming 0x4a00a hash c52ccaa9 params:( Object WorldContextObject; );
	FinishSpawningActor 0x49fff hash 495d1326 params:( Actor Actor;Transform SpawnTransform;Actor ReturnValue; );
	FindCollisionUV 0x49ff6 hash e49835dd params:( HitResult Hit;None UVChannel;Vector2D UV;None ReturnValue; );
	EnableLiveStreaming 0x49feb hash 808f3a46 params:( None Enable; );
	DoesSaveGameExist 0x49fe1 hash b0da65e6 params:( None SlotName;None UserIndex;None ReturnValue; );
	DeprojectScreenToWorld 0x49fd5 hash 140d3590 params:( PlayerController Player;Vector2D ScreenPosition;Vector WorldPosition;Vector WorldDirection;None ReturnValue; );
	DeleteGameInSlot 0x49fcc hash 6d9de6cb params:( None SlotName;None UserIndex;None ReturnValue; );
	DeactivateReverbEffect 0x49fc0 hash b6cf1b12 params:( Object WorldContextObject;None TagName; );
	CreateSound2D 0x49fb8 hash 23bc9d98 params:( Object WorldContextObject;SoundBase Sound;None VolumeMultiplier;None PitchMultiplier;None StartTime;SoundConcurrency ConcurrencySettings;None bPersistAcrossLevelTransition;None bAutoDestroy;AudioComponent ReturnValue; );
	CreateSaveGameObject 0x49fad hash cabb0059 params:( Class SaveGameClass;SaveGame ReturnValue; );
	CreatePlayer 0x49fa6 hash 75f3b706 params:( Object WorldContextObject;None ControllerId;None bSpawnPlayerController;PlayerController ReturnValue; );
	ClearSoundMixModifiers 0x49f9a hash ef06f225 params:( Object WorldContextObject; );
	ClearSoundMixClassOverride 0x49f8c hash f5abde79 params:( Object WorldContextObject;SoundMix InSoundMixModifier;SoundClass InSoundClass;None FadeOutTime; );
	CancelAsyncLoading 0x49f82 hash 218c8b87 params:(  );
	BreakHitResult 0x49f7a hash 85e59c8e params:( HitResult Hit;None bBlockingHit;None bInitialOverlap;None Time;None Distance;Vector Location;Vector ImpactPoint;Vector Normal;Vector ImpactNormal;PhysicalMaterial PhysMat;Actor HitActor;PrimitiveComponent HitComponent;None HitBoneName;None HitItem;None FaceIndex;Vector TraceStart;Vector TraceEnd; );
	BlueprintSuggestProjectileVelocity 0x49f68 hash 853e36fc params:( Object WorldContextObject;Vector TossVelocity;Vector StartLocation;Vector EndLocation;None LaunchSpeed;None OverrideGravityZ;ESuggestProjVelocityTraceOption TraceOption;None CollisionRadius;None bFavorHighArc;None bDrawDebug;None ReturnValue; );
	Blueprint_PredictProjectilePath_ByTraceChannel 0x49f50 hash 6278fd24 params:( Object WorldContextObject;HitResult OutHit;OutPathPositions OutPathPositions;Vector OutLastTraceDestination;Vector StartPos;Vector LaunchVelocity;None bTracePath;None ProjectileRadius;ECollisionChannel TraceChannel;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;None DrawDebugTime;None SimFrequency;None MaxSimTime;None OverrideGravityZ;None ReturnValue; );
	Blueprint_PredictProjectilePath_ByObjectType 0x49f39 hash df0e44d5 params:( Object WorldContextObject;HitResult OutHit;OutPathPositions OutPathPositions;Vector OutLastTraceDestination;Vector StartPos;Vector LaunchVelocity;None bTracePath;None ProjectileRadius;ObjectTypes ObjectTypes;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;None DrawDebugTime;None SimFrequency;None MaxSimTime;None OverrideGravityZ;None ReturnValue; );
	Blueprint_PredictProjectilePath_Advanced 0x49f24 hash 1c88d277 params:( Object WorldContextObject;PredictProjectilePathParams PredictParams;PredictProjectilePathResult PredictResult;None ReturnValue; );
	BeginSpawningActorFromClass 0x49f15 hash c52928b4 params:( Object WorldContextObject;Class ActorClass;Transform SpawnTransform;None bNoCollisionFail;Actor Owner;Actor ReturnValue; );
	BeginSpawningActorFromBlueprint 0x49f04 hash 80a87ef3 params:( Object WorldContextObject;Blueprint Blueprint;Transform SpawnTransform;None bNoCollisionFail;Actor ReturnValue; );
	BeginDeferredActorSpawnFromClass 0x49ef3 hash ac09a6b7 params:( Object WorldContextObject;Class ActorClass;Transform SpawnTransform;UnderlyingType CollisionHandlingOverride;Actor Owner;Actor ReturnValue; );
	AreSubtitlesEnabled 0x49ee8 hash 5f6e9267 params:( None ReturnValue; );
	AreAnyListenersWithinRange 0x49eda hash a28a7c7e params:( Object WorldContextObject;Vector Location;None MaximumRange;None ReturnValue; );
	ApplyRadialDamageWithFalloff 0x49ecb hash 297acf8d params:( Object WorldContextObject;None BaseDamage;None MinimumDamage;Vector Origin;None DamageInnerRadius;None DamageOuterRadius;None DamageFalloff;Class DamageTypeClass;IgnoreActors IgnoreActors;Actor DamageCauser;Controller InstigatedByController;ECollisionChannel DamagePreventionChannel;None ReturnValue; );
	ApplyRadialDamage 0x49ec1 hash 3f8c9597 params:( Object WorldContextObject;None BaseDamage;Vector Origin;None DamageRadius;Class DamageTypeClass;IgnoreActors IgnoreActors;Actor DamageCauser;Controller InstigatedByController;None bDoFullDamage;ECollisionChannel DamagePreventionChannel;None ReturnValue; );
	ApplyPointDamage 0x49eb8 hash 11beebb4 params:( Actor DamagedActor;None BaseDamage;Vector HitFromDirection;HitResult HitInfo;Controller EventInstigator;Actor DamageCauser;Class DamageTypeClass;None ReturnValue; );
	ApplyDamage 0x49eb1 hash 36c8c5aa params:( Actor DamagedActor;None BaseDamage;Controller EventInstigator;Actor DamageCauser;Class DamageTypeClass;None ReturnValue; );
	ActivateReverbEffect 0x49ea6 hash 18c23209 params:( Object WorldContextObject;ReverbEffect ReverbEffect;None TagName;None Priority;None Volume;None FadeTime; );
};


instance 1ab5e14e080
class GameSession public : Info
{
	// Fields
	int MaxSpectators; // 0x218
	int MaxPlayers; // 0x21c
	int MaxPartySize; // 0x220
	BYTE MaxSplitscreensPerConnection; // 0x224
	bool bRequiresPushToTalk; // 0x225
	FName SessionName; // 0x228

};


instance 1ab5e1549c0
class GameUserSettings public : Object
{
	// Fields
	bool bUseVSync; // 0x28
	bool bUseDynamicResolution; // 0x29
	int ResolutionSizeX; // 0x80
	int ResolutionSizeY; // 0x84
	int LastUserConfirmedResolutionSizeX; // 0x88
	int LastUserConfirmedResolutionSizeY; // 0x8c
	int WindowPosX; // 0x90
	int WindowPosY; // 0x94
	int FullscreenMode; // 0x98
	int LastConfirmedFullscreenMode; // 0x9c
	int PreferredFullscreenMode; // 0xa0
	int Version; // 0xa4
	int AudioQualityLevel; // 0xa8
	int LastConfirmedAudioQualityLevel; // 0xac
	float FrameRateLimit; // 0xb0
	int DesiredScreenWidth; // 0xb8
	bool bUseDesiredScreenHeight; // 0xbc
	int DesiredScreenHeight; // 0xc0
	int LastUserConfirmedDesiredScreenWidth; // 0xc4
	int LastUserConfirmedDesiredScreenHeight; // 0xc8
	float LastRecommendedScreenWidth; // 0xcc
	float LastRecommendedScreenHeight; // 0xd0
	float LastCPUBenchmarkResult; // 0xd4
	float LastGPUBenchmarkResult; // 0xd8
	TArray LastCPUBenchmarkSteps; // 0xe0
	TArray LastGPUBenchmarkSteps; // 0xf0
	float LastGPUBenchmarkMultiplier; // 0x100
	bool bUseHDRDisplayOutput; // 0x104
	int HDRDisplayOutputNits; // 0x108
	MulticastInlineDelegateProperty OnGameUserSettingsUINeedsUpdate; // 0x110 property 0x1ab71dacc80 hash 0xb7a5ed1a

	// Functions
	ValidateSettings 0x4a6d1 hash c2f47a60 params:(  );
	SupportsHDRDisplayOutput 0x4a6c4 hash 1e0a01ba params:( None ReturnValue; );
	SetVSyncEnabled 0x4a6bb hash aa8e23af params:( None bEnable; );
	SetVisualEffectQuality 0x4a6af hash a06991bb params:( None Value; );
	SetViewDistanceQuality 0x4a6a3 hash 22284ce0 params:( None Value; );
	SetToDefaults 0x4a69b hash d180010c params:(  );
	SetTextureQuality 0x4a691 hash 6445a0ab params:( None Value; );
	SetShadowQuality 0x4a688 hash 79fea260 params:( None Value; );
	SetShadingQuality 0x4a67e hash 318ce3f8 params:( None Value; );
	SetScreenResolution 0x4a673 hash 35a58ac5 params:( IntPoint Resolution; );
	SetResolutionScaleValueEx 0x4a665 hash f9b3d607 params:( None NewScaleValue; );
	SetResolutionScaleValue 0x4a658 hash de249a2a params:( None NewScaleValue; );
	SetResolutionScaleNormalized 0x4a649 hash 4fc99cc2 params:( None NewScaleNormalized; );
	SetPostProcessingQuality 0x4a63c hash 8e5cfbd params:( None Value; );
	SetOverallScalabilityLevel 0x4a62e hash 8781188f params:( None Value; );
	SetFullscreenMode 0x4a624 hash a971a0a9 params:( EWindowMode InFullscreenMode; );
	SetFrameRateLimit 0x4a61a hash 1574367 params:( None NewLimit; );
	SetFoliageQuality 0x4a610 hash e7e87cf1 params:( None Value; );
	SetDynamicResolutionEnabled 0x4a601 hash fcce64b5 params:( None bEnable; );
	SetBenchmarkFallbackValues 0x4a5f3 hash a6f7563c params:(  );
	SetAudioQualityLevel 0x4a5e8 hash e0e06924 params:( None QualityLevel; );
	SetAntiAliasingQuality 0x4a5dc hash 68d9440e params:( None Value; );
	SaveSettings 0x4a5d5 hash a0b92925 params:(  );
	RunHardwareBenchmark 0x4a5ca hash a0f02333 params:( None WorkScale;None CPUMultiplier;None GPUMultiplier; );
	RevertVideoMode 0x4a5c1 hash 726d9179 params:(  );
	ResetToCurrentSettings 0x4a5b5 hash 30bce3f params:(  );
	LoadSettings 0x4a5ae hash cbc92c56 params:( None bForceReload; );
	IsVSyncEnabled 0x4a5a6 hash 6340fe5f params:( None ReturnValue; );
	IsVSyncDirty 0x4a59f hash 12fafc0 params:( None ReturnValue; );
	IsScreenResolutionDirty 0x4a592 hash a509f901 params:( None ReturnValue; );
	IsHDREnabled 0x4a58b hash bee78b0a params:( None ReturnValue; );
	IsFullscreenModeDirty 0x4a57f hash 39b37165 params:( None ReturnValue; );
	IsDynamicResolutionEnabled 0x4a571 hash cfeec765 params:( None ReturnValue; );
	IsDynamicResolutionDirty 0x4a564 hash dfab7f46 params:( None ReturnValue; );
	IsDirty 0x4a55f hash 8663b2d params:( None ReturnValue; );
	GetVisualEffectQuality 0x4a553 hash 4056122f params:( None ReturnValue; );
	GetViewDistanceQuality 0x4a547 hash c214cd54 params:( None ReturnValue; );
	GetTextureQuality 0x4a53d hash 820f089f params:( None ReturnValue; );
	GetSyncInterval 0x4a534 hash 720518a7 params:( None ReturnValue; );
	GetShadowQuality 0x4a52b hash e780dbd4 params:( None ReturnValue; );
	GetShadingQuality 0x4a521 hash 4f564bec params:( None ReturnValue; );
	GetScreenResolution 0x4a516 hash eb68bfb9 params:( IntPoint ReturnValue; );
	GetResolutionScaleNormalized 0x4a507 hash 3079a436 params:( None ReturnValue; );
	GetResolutionScaleInformationEx 0x4a4f6 hash 20d79a64 params:( None CurrentScaleNormalized;None CurrentScaleValue;None MinScaleValue;None MaxScaleValue; );
	GetResolutionScaleInformation 0x4a4e6 hash 21e1a347 params:( None CurrentScaleNormalized;None CurrentScaleValue;None MinScaleValue;None MaxScaleValue; );
	GetRecommendedResolutionScale 0x4a4d6 hash 786929e4 params:( None ReturnValue; );
	GetPreferredFullscreenMode 0x4a4c8 hash 8fa589bc params:( EWindowMode ReturnValue; );
	GetPostProcessingQuality 0x4a4bb hash 55f43d31 params:( None ReturnValue; );
	GetOverallScalabilityLevel 0x4a4ad hash 51e0b303 params:( None ReturnValue; );
	GetLastConfirmedScreenResolution 0x4a49c hash fdcdae24 params:( IntPoint ReturnValue; );
	GetLastConfirmedFullscreenMode 0x4a48c hash dc2b6048 params:( EWindowMode ReturnValue; );
	GetGameUserSettings 0x4a481 hash 355f712f params:( GameUserSettings ReturnValue; );
	GetFullscreenMode 0x4a477 hash c73b089d params:( EWindowMode ReturnValue; );
	GetFrameRateLimit 0x4a46d hash 1f20ab5b params:( None ReturnValue; );
	GetFoliageQuality 0x4a463 hash 5b1e4e5 params:( None ReturnValue; );
	GetDesktopResolution 0x4a458 hash 2cca65f3 params:( IntPoint ReturnValue; );
	GetDefaultWindowPosition 0x4a44b hash b2f61557 params:( IntPoint ReturnValue; );
	GetDefaultWindowMode 0x4a440 hash 64ca8e67 params:( EWindowMode ReturnValue; );
	GetDefaultResolutionScale 0x4a432 hash b0d4b646 params:( None ReturnValue; );
	GetDefaultResolution 0x4a427 hash 639f593e params:( IntPoint ReturnValue; );
	GetCurrentHDRDisplayNits 0x4a41a hash bf532f1a params:( None ReturnValue; );
	GetAudioQualityLevel 0x4a40f hash 4f0a3c98 params:( None ReturnValue; );
	GetAntiAliasingQuality 0x4a403 hash 8c5c482 params:( None ReturnValue; );
	EnableHDRDisplayOutput 0x4a3f7 hash e62f4ad1 params:( None bEnable;None DisplayNits; );
	ConfirmVideoMode 0x4a3ee hash ee9230f params:(  );
	ApplySettings 0x4a3e6 hash 29827f1c params:( None bCheckForCommandLineOverrides; );
	ApplyResolutionSettings 0x4a3d9 hash de9bafd0 params:( None bCheckForCommandLineOverrides; );
	ApplyNonResolutionSettings 0x4a3cb hash 7693ab3b params:(  );
	ApplyHardwareBenchmarkResults 0x4a3bb hash a22a4036 params:(  );
};


instance 1ab5e154540
class SpotLight public : Light
{
	// Fields
	SpotLightComponent* SpotLightComponent; // 0x228

	// Functions
	SetOuterConeAngle 0x4a6f6 hash fa17394c params:( None NewOuterConeAngle; );
	SetInnerConeAngle 0x4a6ec hash 45486cb9 params:( None NewInnerConeAngle; );
};


instance 1ab5e154780
class GeneratedMeshAreaLight public : SpotLight
{
	// Fields

};


instance 1ab5e154300
class HapticFeedbackEffect_Base public : Object
{
	// Fields

};


instance 1ab5e1540c0
class HapticFeedbackEffect_Buffer public : HapticFeedbackEffect_Base
{
	// Fields
	TArray Amplitudes; // 0x28
	int SampleRate; // 0x38

};


instance 1ab5e153e80
class HapticFeedbackEffect_Curve public : HapticFeedbackEffect_Base
{
	// Fields
	HapticFeedbackDetails_Curve HapticDetails; // 0x28

};


instance 1ab5e153c40
class HapticFeedbackEffect_SoundWave public : HapticFeedbackEffect_Base
{
	// Fields
	SoundWave* SoundWave; // 0x28

};


instance 1ab5e153a00
class HealthSnapshotBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	StopPerformanceSnapshots 0x4a765 hash 7599fa00 params:(  );
	StartPerformanceSnapshots 0x4a757 hash 16e9b888 params:(  );
	LogPerformanceSnapshot 0x4a74b hash 85de029 params:( None SnapshotTitle;None bResetStats; );
};


instance 1ab5e1537c0
class HLODProxy public : Object
{
	// Fields
	TArray ProxyMeshes; // 0x28

};


instance 1ab5e153580
class AmbisonicsSubmixSettingsBase public : Object
{
	// Fields

};


instance 1ab5e153340
class SpatializationPluginSourceSettingsBase public : Object
{
	// Fields

};


instance 1ab5e153100
class OcclusionPluginSourceSettingsBase public : Object
{
	// Fields

};


instance 1ab5e152ec0
class SoundModulationPluginSourceSettingsBase public : Object
{
	// Fields

};


instance 1ab5e152c80
class ReverbPluginSourceSettingsBase public : Object
{
	// Fields

};


instance 1ab5e152a40
class ImportanceSamplingLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	RandomSobolFloat 0x4a82f hash a1cc32bb params:( None Index;None Dimension;None Seed;None ReturnValue; );
	RandomSobolCell3D 0x4a825 hash d3d2e63c params:( None Index;None NumCells;Vector Cell;Vector Seed;Vector ReturnValue; );
	RandomSobolCell2D 0x4a81b hash d3d2e61b params:( None Index;None NumCells;Vector2D Cell;Vector2D Seed;Vector2D ReturnValue; );
	NextSobolFloat 0x4a813 hash 6ebf07d9 params:( None Index;None Dimension;None PreviousValue;None ReturnValue; );
	NextSobolCell3D 0x4a80a hash 3f205f1a params:( None Index;None NumCells;Vector PreviousValue;Vector ReturnValue; );
	NextSobolCell2D 0x4a801 hash 3f205ef9 params:( None Index;None NumCells;Vector2D PreviousValue;Vector2D ReturnValue; );
	MakeImportanceTexture 0x4a7f5 hash 6beab3a6 params:( Texture2D Texture;EImportanceWeight WeightingFunc;ImportanceTexture ReturnValue; );
	ImportanceSample 0x4a7ec hash 696b0f99 params:( ImportanceTexture Texture;Vector2D Rand;None Samples;None Intensity;Vector2D SamplePosition;LinearColor SampleColor;None SampleIntensity;None SampleSize; );
	BreakImportanceTexture 0x4a7e0 hash 7f64f22d params:( ImportanceTexture ImportanceTexture;Texture2D Texture;EImportanceWeight WeightingFunc; );
};


instance 1ab5e152800
class ImportantToggleSettingInterface public : Interface
{
	// Fields

};


instance 1ab5e1525c0
class InGameAdManager public : PlatformInterfaceBase
{
	// Fields
	bool bShouldPauseWhileAdOpen; // 0x38
	TArray ClickedBannerDelegates; // 0x40
	TArray ClosedAdDelegates; // 0x50

};


instance 1ab5e152380
class InheritableComponentHandler public : Object
{
	// Fields
	TArray Records; // 0x28
	TArray UnnecessaryComponents; // 0x38

};


instance 1ab5e151f00
class InputDelegateBinding public : DynamicBlueprintBinding
{
	// Fields

};


instance 1ab5e152140
class InputActionDelegateBinding public : InputDelegateBinding
{
	// Fields
	TArray InputActionDelegateBindings; // 0x28

};


instance 1ab5e151cc0
class InputAxisDelegateBinding public : InputDelegateBinding
{
	// Fields
	TArray InputAxisDelegateBindings; // 0x28

};


instance 1ab5e151a80
class InputAxisKeyDelegateBinding public : InputDelegateBinding
{
	// Fields
	TArray InputAxisKeyDelegateBindings; // 0x28

};


instance 1ab5e151840
class InputComponent public : ActorComponent
{
	// Fields
	TArray CachedKeyToActionInfo; // 0x120

	// Functions
	WasControllerKeyJustReleased 0x4a908 hash ae0e8388 params:( Key Key;None ReturnValue; );
	WasControllerKeyJustPressed 0x4a8f9 hash 52e091d9 params:( Key Key;None ReturnValue; );
	IsControllerKeyDown 0x4a8ee hash 87179926 params:( Key Key;None ReturnValue; );
	GetTouchState 0x4a8e6 hash bb5d1389 params:( None FingerIndex;None LocationX;None LocationY;None bIsCurrentlyPressed; );
	GetControllerVectorKeyState 0x4a8d7 hash b84f1ea6 params:( Key Key;Vector ReturnValue; );
	GetControllerMouseDelta 0x4a8ca hash 479da73c params:( None DeltaX;None DeltaY; );
	GetControllerKeyTimeDown 0x4a8bd hash d19ee959 params:( Key Key;None ReturnValue; );
	GetControllerAnalogStickState 0x4a8ad hash 26d771a params:( EControllerAnalogStick WhichStick;None StickX;None StickY; );
	GetControllerAnalogKeyState 0x4a89e hash 183c7a25 params:( Key Key;None ReturnValue; );
};


instance 1ab5e151600
class InputKeyDelegateBinding public : InputDelegateBinding
{
	// Fields
	TArray InputKeyDelegateBindings; // 0x28

};


instance 1ab5e1513c0
class InputSettings public : Object
{
	// Fields
	TArray AxisConfig; // 0x28
	bool bAltEnterTogglesFullscreen; // 0x38
	bool bF11TogglesFullscreen; // 0x38
	bool bUseMouseForTouch; // 0x38
	bool bEnableMouseSmoothing; // 0x38
	bool bEnableFOVScaling; // 0x38
	bool bCaptureMouseOnLaunch; // 0x38
	bool bDefaultViewportMouseLock; // 0x38
	bool bAlwaysShowTouchInterface; // 0x38
	bool bShowConsoleOnFourFingerTap; // 0x39
	bool bEnableGestureRecognizer; // 0x39
	bool bUseAutocorrect; // 0x3a
	TArray ExcludedAutocorrectOS; // 0x40
	TArray ExcludedAutocorrectCultures; // 0x50
	TArray ExcludedAutocorrectDeviceModels; // 0x60
	EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x70
	EMouseLockMode DefaultViewportMouseLockMode; // 0x71
	float FOVScale; // 0x74
	float DoubleClickTime; // 0x78
	TArray ActionMappings; // 0x80
	TArray AxisMappings; // 0x90
	TArray SpeechMappings; // 0xa0
	SoftObjectPath DefaultTouchInterface; // 0xb0
	Key ConsoleKey; // 0xc8
	TArray ConsoleKeys; // 0xe0

	// Functions
	SaveKeyMappings 0x4a98c hash e3a19d5c params:(  );
	RemoveAxisMapping 0x4a982 hash 29e04914 params:( InputAxisKeyMapping KeyMapping;None bForceRebuildKeymaps; );
	RemoveActionMapping 0x4a977 hash 80dd50bd params:( InputActionKeyMapping KeyMapping;None bForceRebuildKeymaps; );
	GetInputSettings 0x4a96e hash 185b0ae6 params:( InputSettings ReturnValue; );
	GetAxisNames 0x4a967 hash 55921b6e params:( AxisNames AxisNames; );
	GetAxisMappingByName 0x4a95c hash f4eafb82 params:( None InAxisName;OutMappings OutMappings; );
	GetActionNames 0x4a954 hash 7cd10157 params:( ActionNames ActionNames; );
	GetActionMappingByName 0x4a948 hash d081ba6b params:( None InActionName;OutMappings OutMappings; );
	ForceRebuildKeymaps 0x4a93d hash e77f3695 params:(  );
	AddAxisMapping 0x4a935 hash f3b26e8f params:( InputAxisKeyMapping KeyMapping;None bForceRebuildKeymaps; );
	AddActionMapping 0x4a92c hash 7cec0f8 params:( InputActionKeyMapping KeyMapping;None bForceRebuildKeymaps; );
};


instance 1ab5e151180
class InputTouchDelegateBinding public : InputDelegateBinding
{
	// Fields
	TArray InputTouchDelegateBindings; // 0x28

};


instance 1ab5e150f40
class InputVectorAxisDelegateBinding public : InputAxisKeyDelegateBinding
{
	// Fields

};


instance 1ab5e150d00
class Interface_AssetUserData public : Interface
{
	// Fields

};


instance 1ab5e150ac0
class Interface_CollisionDataProvider public : Interface
{
	// Fields

};


instance 1ab5e150880
class Interface_PostProcessVolume public : Interface
{
	// Fields

};


instance 1ab5e150640
class Interface_PreviewMeshProvider public : Interface
{
	// Fields

};


instance 1ab5e150400
class InterpCurveEdSetup public : Object
{
	// Fields
	TArray Tabs; // 0x28
	int ActiveTab; // 0x38

};


instance 1ab5e1501c0
class InterpData public : Object
{
	// Fields
	float InterpLength; // 0x28
	float PathBuildTime; // 0x2c
	TArray InterpGroups; // 0x30
	InterpCurveEdSetup* CurveEdSetup; // 0x40
	float EdSectionStart; // 0x48
	float EdSectionEnd; // 0x4c
	bool bShouldBakeAndPrune; // 0x50
	InterpGroupDirector* CachedDirectorGroup; // 0x58
	TArray AllEventNames; // 0x60

};


instance 1ab5e159400
class InterpFilter public : Object
{
	// Fields
	FString Caption; // 0x28

};


instance 1ab5e1591c0
class InterpFilter_Classes public : InterpFilter
{
	// Fields

};


instance 1ab5e158f80
class InterpFilter_Custom public : InterpFilter
{
	// Fields

};


instance 1ab5e158d40
class InterpGroup public : Object
{
	// Fields
	TArray InterpTracks; // 0x30
	FName GroupName; // 0x40
	Color GroupColor; // 0x48
	bool bCollapsed; // 0x4c
	bool bVisible; // 0x4c
	bool bIsFolder; // 0x4c
	bool bIsParented; // 0x4c
	bool bIsSelected; // 0x4c

};


instance 1ab5e158b00
class InterpGroupCamera public : InterpGroup
{
	// Fields
	CameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58

};


instance 1ab5e1588c0
class InterpGroupDirector public : InterpGroup
{
	// Fields

};


instance 1ab5e158680
class InterpGroupInst public : Object
{
	// Fields
	InterpGroup* Group; // 0x28
	Actor* GroupActor; // 0x30
	TArray TrackInst; // 0x38

};


instance 1ab5e158440
class InterpGroupInstCamera public : InterpGroupInst
{
	// Fields

};


instance 1ab5e158200
class InterpGroupInstDirector public : InterpGroupInst
{
	// Fields

};


instance 1ab5e157fc0
class InterpToMovementComponent public : MovementComponent
{
	// Fields
	float Duration; // 0xf0
	bool bPauseOnImpact; // 0xf4
	bool bSweep; // 0xf8
	ETeleportType TeleportType; // 0xf9
	EInterpToBehaviourType BehaviourType; // 0xfa
	bool bCheckIfStillInWorld; // 0xfb
	bool bForceSubStepping; // 0xfc
	MulticastInlineDelegateProperty OnInterpToReverse; // 0x100 property 0x1ab712f4b00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnInterpToStop; // 0x110 property 0x1ab712f4b80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnWaitBeginDelegate; // 0x120 property 0x1ab712f4c00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnWaitEndDelegate; // 0x130 property 0x1ab712f4c80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnResetDelegate; // 0x140 property 0x1ab712f4d00 hash 0xb7a5ed1a
	float MaxSimulationTimeStep; // 0x150
	int MaxSimulationIterations; // 0x154
	TArray ControlPoints; // 0x158
	DelegateFunction OnInterpToWaitEndDelegate__DelegateSignature; // 0x0 property 0x1ab71206600 hash 0x8ad2d5e6
	DelegateFunction OnInterpToWaitBeginDelegate__DelegateSignature; // 0x0 property 0x1ab712066e0 hash 0x8ad2d5e6
	DelegateFunction OnInterpToStopDelegate__DelegateSignature; // 0x0 property 0x1ab712067c0 hash 0x8ad2d5e6
	DelegateFunction OnInterpToReverseDelegate__DelegateSignature; // 0x0 property 0x1ab712068a0 hash 0x8ad2d5e6
	DelegateFunction OnInterpToResetDelegate__DelegateSignature; // 0x0 property 0x1ab71206980 hash 0x8ad2d5e6

	// Functions
	StopSimulating 0x4aa7e hash ab446608 params:( HitResult HitResult; );
	RestartMovement 0x4aa75 hash c47c7475 params:( None InitialDirection; );
	FinaliseControlPoints 0x4aa69 hash d6b7a30e params:(  );
};


instance 1ab5e157d80
class InterpTrack public : Object
{
	// Fields
	TArray SubTracks; // 0x38
	InterpTrackInst* TrackInstClass; // 0x48
	BYTE ActiveCondition; // 0x50
	FString TrackTitle; // 0x58
	bool bOnePerGroup; // 0x68
	bool bDirGroupOnly; // 0x68
	bool bDisableTrack; // 0x68
	bool bIsSelected; // 0x68
	bool bIsAnimControlTrack; // 0x68
	bool bSubTrackOnly; // 0x68
	bool bVisible; // 0x68
	bool bIsRecording; // 0x68

};


instance 1ab5e157900
class InterpTrackFloatBase public : InterpTrack
{
	// Fields
	InterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88

};


instance 1ab5e157b40
class InterpTrackAnimControl public : InterpTrackFloatBase
{
	// Fields
	FName SlotName; // 0x90
	TArray AnimSeqs; // 0x98
	bool bSkipAnimNotifiers; // 0xa8

};


instance 1ab5e157480
class InterpTrackVectorBase public : InterpTrack
{
	// Fields
	InterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88

};


instance 1ab5e1576c0
class InterpTrackAudioMaster public : InterpTrackVectorBase
{
	// Fields

};


instance 1ab5e157240
class InterpTrackBoolProp public : InterpTrack
{
	// Fields
	TArray BoolTrack; // 0x70
	FName PropertyName; // 0x80

};


instance 1ab5e157000
class InterpTrackColorProp public : InterpTrackVectorBase
{
	// Fields
	FName PropertyName; // 0x90

};


instance 1ab5e156dc0
class InterpTrackColorScale public : InterpTrackVectorBase
{
	// Fields

};


instance 1ab5e156b80
class InterpTrackDirector public : InterpTrack
{
	// Fields
	TArray CutTrack; // 0x70
	bool bSimulateCameraCutsOnClients; // 0x80

};


instance 1ab5e156940
class InterpTrackEvent public : InterpTrack
{
	// Fields
	TArray EventTrack; // 0x70
	bool bFireEventsWhenForwards; // 0x80
	bool bFireEventsWhenBackwards; // 0x80
	bool bFireEventsWhenJumpingForwards; // 0x80
	bool bUseCustomEventName; // 0x80

};


instance 1ab5e156700
class InterpTrackFade public : InterpTrackFloatBase
{
	// Fields
	bool bPersistFade; // 0x90
	bool bFadeAudio; // 0x90
	LinearColor FadeColor; // 0x94

};


instance 1ab5e1564c0
class InterpTrackFloatAnimBPParam public : InterpTrackFloatBase
{
	// Fields
	Object* AnimBlueprintClass; // 0x90
	AnimInstance* AnimClass; // 0x98
	FName ParamName; // 0xa0

};


instance 1ab5e156280
class InterpTrackFloatMaterialParam public : InterpTrackFloatBase
{
	// Fields
	TArray TargetMaterials; // 0x90
	FName ParamName; // 0xa0

};


instance 1ab5e156040
class InterpTrackFloatParticleParam public : InterpTrackFloatBase
{
	// Fields
	FName ParamName; // 0x90

};


instance 1ab5e155e00
class InterpTrackFloatProp public : InterpTrackFloatBase
{
	// Fields
	FName PropertyName; // 0x90

};


instance 1ab5e155bc0
class InterpTrackInst public : Object
{
	// Fields

};


instance 1ab5e155980
class InterpTrackInstAnimControl public : InterpTrackInst
{
	// Fields
	float LastUpdatePosition; // 0x28

};


instance 1ab5e155740
class InterpTrackInstAudioMaster public : InterpTrackInst
{
	// Fields

};


instance 1ab5e1552c0
class InterpTrackInstProperty public : InterpTrackInst
{
	// Fields
	Property* InterpProperty; // 0x28
	Object* PropertyOuterObjectInst; // 0x30

};


instance 1ab5e155500
class InterpTrackInstBoolProp public : InterpTrackInstProperty
{
	// Fields
	BoolProperty* BoolProperty; // 0x40
	bool ResetBool; // 0x48

};


instance 1ab5e155080
class InterpTrackInstColorProp public : InterpTrackInstProperty
{
	// Fields
	Color ResetColor; // 0x40

};


instance 1ab5e154e40
class InterpTrackInstColorScale public : InterpTrackInst
{
	// Fields

};


instance 1ab5e154c00
class InterpTrackInstDirector public : InterpTrackInst
{
	// Fields
	Actor* OldViewTarget; // 0x28

};


instance 1ab5e15de40
class InterpTrackInstEvent public : InterpTrackInst
{
	// Fields
	float LastUpdatePosition; // 0x28

};


instance 1ab5e15dc00
class InterpTrackInstFade public : InterpTrackInst
{
	// Fields

};


instance 1ab5e15d9c0
class InterpTrackInstFloatAnimBPParam public : InterpTrackInst
{
	// Fields
	AnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30

};


instance 1ab5e15d780
class InterpTrackInstFloatMaterialParam public : InterpTrackInst
{
	// Fields
	TArray MaterialInstances; // 0x28
	TArray ResetFloats; // 0x38
	TArray PrimitiveMaterialRefs; // 0x48
	InterpTrackFloatMaterialParam* InstancedTrack; // 0x58

};


instance 1ab5e15d540
class InterpTrackInstFloatParticleParam public : InterpTrackInst
{
	// Fields
	float ResetFloat; // 0x28

};


instance 1ab5e15d300
class InterpTrackInstFloatProp public : InterpTrackInstProperty
{
	// Fields
	float ResetFloat; // 0x40

};


instance 1ab5e15d0c0
class InterpTrackInstLinearColorProp public : InterpTrackInstProperty
{
	// Fields
	LinearColor ResetColor; // 0x40

};


instance 1ab5e15ce80
class InterpTrackInstMove public : InterpTrackInst
{
	// Fields
	Vector ResetLocation; // 0x28
	Rotator ResetRotation; // 0x34

};


instance 1ab5e15cc40
class InterpTrackInstParticleReplay public : InterpTrackInst
{
	// Fields
	float LastUpdatePosition; // 0x28

};


instance 1ab5e15ca00
class InterpTrackInstSlomo public : InterpTrackInst
{
	// Fields
	float OldTimeDilation; // 0x28

};


instance 1ab5e15c7c0
class InterpTrackInstSound public : InterpTrackInst
{
	// Fields
	float LastUpdatePosition; // 0x28
	AudioComponent* PlayAudioComp; // 0x30

};


instance 1ab5e15c580
class InterpTrackInstToggle public : InterpTrackInst
{
	// Fields
	BYTE Action; // 0x28
	float LastUpdatePosition; // 0x2c
	bool bSavedActiveState; // 0x30

};


instance 1ab5e15c340
class InterpTrackInstVectorMaterialParam public : InterpTrackInst
{
	// Fields
	TArray MaterialInstances; // 0x28
	TArray ResetVectors; // 0x38
	TArray PrimitiveMaterialRefs; // 0x48
	InterpTrackVectorMaterialParam* InstancedTrack; // 0x58

};


instance 1ab5e15c100
class InterpTrackInstVectorProp public : InterpTrackInstProperty
{
	// Fields
	Vector ResetVector; // 0x40

};


instance 1ab5e15bec0
class InterpTrackInstVisibility public : InterpTrackInst
{
	// Fields
	BYTE Action; // 0x28
	float LastUpdatePosition; // 0x2c

};


instance 1ab5e15bc80
class InterpTrackLinearColorBase public : InterpTrack
{
	// Fields
	InterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88

};


instance 1ab5e15ba40
class InterpTrackLinearColorProp public : InterpTrackLinearColorBase
{
	// Fields
	FName PropertyName; // 0x90

};


instance 1ab5e15b800
class InterpTrackMove public : InterpTrack
{
	// Fields
	InterpCurveVector PosTrack; // 0x70
	InterpCurveVector EulerTrack; // 0x88
	InterpLookupTrack LookupTrack; // 0xa0
	FName LookAtGroupName; // 0xb0
	float LinCurveTension; // 0xb8
	float AngCurveTension; // 0xbc
	bool bUseQuatInterpolation; // 0xc0
	bool bShowArrowAtKeys; // 0xc0
	bool bDisableMovement; // 0xc0
	bool bShowTranslationOnCurveEd; // 0xc0
	bool bShowRotationOnCurveEd; // 0xc0
	bool bHide3DTrack; // 0xc0
	BYTE RotMode; // 0xc4

};


instance 1ab5e15b5c0
class InterpTrackMoveAxis public : InterpTrackFloatBase
{
	// Fields
	BYTE MoveAxis; // 0x90
	InterpLookupTrack LookupTrack; // 0x98

};


instance 1ab5e15b380
class InterpTrackParticleReplay public : InterpTrack
{
	// Fields
	TArray TrackKeys; // 0x70

};


instance 1ab5e15b140
class InterpTrackSlomo public : InterpTrackFloatBase
{
	// Fields

};


instance 1ab5e15af00
class InterpTrackSound public : InterpTrackVectorBase
{
	// Fields
	TArray Sounds; // 0x90
	bool bPlayOnReverse; // 0xa0
	bool bContinueSoundOnMatineeEnd; // 0xa0
	bool bSuppressSubtitles; // 0xa0
	bool bTreatAsDialogue; // 0xa0
	bool bAttach; // 0xa0

};


instance 1ab5e15acc0
class InterpTrackToggle public : InterpTrack
{
	// Fields
	TArray ToggleTrack; // 0x70
	bool bActivateSystemEachUpdate; // 0x80
	bool bActivateWithJustAttachedFlag; // 0x80
	bool bFireEventsWhenForwards; // 0x80
	bool bFireEventsWhenBackwards; // 0x80
	bool bFireEventsWhenJumpingForwards; // 0x80

};


instance 1ab5e15aa80
class InterpTrackVectorMaterialParam public : InterpTrackVectorBase
{
	// Fields
	TArray TargetMaterials; // 0x90
	FName ParamName; // 0xa0

};


instance 1ab5e15a840
class InterpTrackVectorProp public : InterpTrackVectorBase
{
	// Fields
	FName PropertyName; // 0x90

};


instance 1ab5e15a600
class InterpTrackVisibility public : InterpTrack
{
	// Fields
	TArray VisibilityTrack; // 0x70
	bool bFireEventsWhenForwards; // 0x80
	bool bFireEventsWhenBackwards; // 0x80
	bool bFireEventsWhenJumpingForwards; // 0x80

};


instance 1ab5e15a3c0
class IntSerialization public : Object
{
	// Fields
	USHORT UnsignedInt16Variable; // 0x28
	int UnsignedInt32Variable; // 0x2c
	ULONG64 UnsignedInt64Variable; // 0x30
	char SignedInt8Variable; // 0x38
	SHORT SignedInt16Variable; // 0x3a
	ULONG64 SignedInt64Variable; // 0x40
	BYTE UnsignedInt8Variable; // 0x48
	int SignedInt32Variable; // 0x4c

};


instance 1ab5e15a180
class KillZVolume public : PhysicsVolume
{
	// Fields

};


instance 1ab5e159f40
class KismetArrayLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SetArrayPropertyByName 0x4ad98 hash 10e249f1 params:( Object Object;None PropertyName;Value Value; );
	FilterArray 0x4ad91 hash aaebbe4a params:( TargetArray TargetArray;Class FilterClass;FilteredArray FilteredArray; );
	Array_Swap 0x4ad8b hash 9d0fb2fe params:( TargetArray TargetArray;None FirstIndex;None SecondIndex; );
	Array_Shuffle 0x4ad83 hash f73e8750 params:( TargetArray TargetArray; );
	Array_Set 0x4ad7d hash ed7c968f params:( TargetArray TargetArray;None Index;None Item;None bSizeToFit; );
	Array_Resize 0x4ad76 hash 1c3759f5 params:( TargetArray TargetArray;None Size; );
	Array_RemoveItem 0x4ad6d hash f6b51bc0 params:( TargetArray TargetArray;None Item;None ReturnValue; );
	Array_Remove 0x4ad66 hash 1c3428b1 params:( TargetArray TargetArray;None IndexToRemove; );
	Array_Length 0x4ad5f hash e359f05 params:( TargetArray TargetArray;None ReturnValue; );
	Array_LastIndex 0x4ad56 hash a071cccf params:( TargetArray TargetArray;None ReturnValue; );
	Array_IsValidIndex 0x4ad4c hash 847a1907 params:( TargetArray TargetArray;None IndexToTest;None ReturnValue; );
	Array_Insert 0x4ad45 hash 7dbb6d8 params:( TargetArray TargetArray;None NewItem;None Index; );
	Array_Identical 0x4ad3c hash c71b0d10 params:( ArrayA ArrayA;ArrayB ArrayB;None ReturnValue; );
	Array_Get 0x4ad36 hash ed7c6383 params:( TargetArray TargetArray;None Index;None Item; );
	Array_Find 0x4ad30 hash 9d085824 params:( TargetArray TargetArray;None ItemToFind;None ReturnValue; );
	Array_Contains 0x4ad28 hash 26703e22 params:( TargetArray TargetArray;None ItemToFind;None ReturnValue; );
	Array_Clear 0x4ad21 hash 3dde920a params:( TargetArray TargetArray; );
	Array_Append 0x4ad1a hash f554fd1b params:( TargetArray TargetArray;SourceArray SourceArray; );
	Array_AddUnique 0x4ad11 hash 9b7ffba3 params:( TargetArray TargetArray;None NewItem;None ReturnValue; );
	Array_Add 0x4ad0b hash ed7c49cc params:( TargetArray TargetArray;None NewItem;None ReturnValue; );
};


instance 1ab5e159d00
class KismetGuidLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	Parse_StringToGuid 0x4ade2 hash 31103fe2 params:( None GuidString;Guid OutGuid;None Success; );
	NotEqual_GuidGuid 0x4add8 hash 50f9c1f params:( Guid A;Guid B;None ReturnValue; );
	NewGuid 0x4add3 hash 6c297a38 params:( Guid ReturnValue; );
	IsValid_Guid 0x4adcc hash e3ee0339 params:( Guid InGuid;None ReturnValue; );
	Invalidate_Guid 0x4adc3 hash 84fd65ce params:( Guid InGuid; );
	EqualEqual_GuidGuid 0x4adb8 hash 1e16a746 params:( Guid A;Guid B;None ReturnValue; );
	Conv_GuidToString 0x4adae hash 7dd6629d params:( Guid InGuid;None ReturnValue; );
};


instance 1ab5e159ac0
class KismetInputLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	PointerEvent_IsTouchEvent 0x4b029 hash 3b4e5628 params:( PointerEvent Input;None ReturnValue; );
	PointerEvent_IsMouseButtonDown 0x4b019 hash 9e8ed480 params:( PointerEvent Input;Key MouseButton;None ReturnValue; );
	PointerEvent_GetWheelDelta 0x4b00b hash 2588f86 params:( PointerEvent Input;None ReturnValue; );
	PointerEvent_GetUserIndex 0x4affd hash 140cbb7e params:( PointerEvent Input;None ReturnValue; );
	PointerEvent_GetTouchpadIndex 0x4afed hash 8817a177 params:( PointerEvent Input;None ReturnValue; );
	PointerEvent_GetScreenSpacePosition 0x4afda hash 62bb3a8 params:( PointerEvent Input;Vector2D ReturnValue; );
	PointerEvent_GetPointerIndex 0x4afcb hash dc4d3020 params:( PointerEvent Input;None ReturnValue; );
	PointerEvent_GetLastScreenSpacePosition 0x4afb6 hash 39c8a35c params:( PointerEvent Input;Vector2D ReturnValue; );
	PointerEvent_GetGestureType 0x4afa7 hash 42357e48 params:( PointerEvent Input;UnderlyingType ReturnValue; );
	PointerEvent_GetGestureDelta 0x4af98 hash 87b8b8f0 params:( PointerEvent Input;Vector2D ReturnValue; );
	PointerEvent_GetEffectingButton 0x4af87 hash f526206e params:( PointerEvent Input;Key ReturnValue; );
	PointerEvent_GetCursorDelta 0x4af78 hash 3c83fbef params:( PointerEvent Input;Vector2D ReturnValue; );
	Key_IsVectorAxis 0x4af6f hash aad61f31 params:( Key Key;None ReturnValue; );
	Key_IsValid 0x4af68 hash 56e565b9 params:( Key Key;None ReturnValue; );
	Key_IsMouseButton 0x4af5e hash 542c682e params:( Key Key;None ReturnValue; );
	Key_IsModifierKey 0x4af54 hash 426b321 params:( Key Key;None ReturnValue; );
	Key_IsKeyboardKey 0x4af4a hash 8c727f43 params:( Key Key;None ReturnValue; );
	Key_IsGamepadKey 0x4af41 hash 55629521 params:( Key Key;None ReturnValue; );
	Key_IsFloatAxis 0x4af38 hash 26bd5a34 params:( Key Key;None ReturnValue; );
	Key_GetNavigationDirectionFromKey 0x4af26 hash f92dffdb params:( KeyEvent InKeyEvent;UnderlyingType ReturnValue; );
	Key_GetNavigationDirectionFromAnalog 0x4af13 hash 7b9dad44 params:( AnalogInputEvent InAnalogEvent;UnderlyingType ReturnValue; );
	Key_GetNavigationActionFromKey 0x4af03 hash 55cbd538 params:( KeyEvent InKeyEvent;UnderlyingType ReturnValue; );
	Key_GetNavigationAction 0x4aef6 hash 1b5c235b params:( Key InKey;UnderlyingType ReturnValue; );
	Key_GetDisplayName 0x4aeec hash 8388c984 params:( Key Key;None ReturnValue; );
	InputEvent_IsShiftDown 0x4aee0 hash 34552488 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsRightShiftDown 0x4aed1 hash 42da3aa6 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsRightControlDown 0x4aec1 hash 24e12609 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsRightCommandDown 0x4aeb1 hash 1b13ed67 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsRightAltDown 0x4aea3 hash ab50b589 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsRepeat 0x4ae98 hash b41ec313 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsLeftShiftDown 0x4ae8a hash 1634a1f3 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsLeftControlDown 0x4ae7b hash 38729496 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsLeftCommandDown 0x4ae6c hash 2ea55bf4 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsLeftAltDown 0x4ae5f hash 825ee596 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsControlDown 0x4ae52 hash 60be106b params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsCommandDown 0x4ae45 hash 56f0d7c9 params:( InputEvent Input;None ReturnValue; );
	InputEvent_IsAltDown 0x4ae3a hash 2be3beeb params:( InputEvent Input;None ReturnValue; );
	InputChord_GetDisplayName 0x4ae2c hash d562555b params:( InputChord Key;None ReturnValue; );
	GetUserIndex 0x4ae25 hash 9b702b9c params:( KeyEvent Input;None ReturnValue; );
	GetKey 0x4ae21 hash b4e1dcce params:( KeyEvent Input;Key ReturnValue; );
	GetAnalogValue 0x4ae19 hash b90afeb4 params:( AnalogInputEvent Input;None ReturnValue; );
	EqualEqual_KeyKey 0x4ae0f hash fcf9e926 params:( Key A;Key B;None ReturnValue; );
	EqualEqual_InputChordInputChord 0x4adfe hash ceb2a574 params:( InputChord A;InputChord B;None ReturnValue; );
	CalibrateTilt 0x4adf6 hash b8323609 params:(  );
};


instance 1ab5e159880
class KismetInternationalizationLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SetCurrentLocale 0x4b0e1 hash 6083ec84 params:( None Culture;None SaveToConfig;None ReturnValue; );
	SetCurrentLanguageAndLocale 0x4b0d2 hash a6dc297b params:( None Culture;None SaveToConfig;None ReturnValue; );
	SetCurrentLanguage 0x4b0c8 hash 759c08f8 params:( None Culture;None SaveToConfig;None ReturnValue; );
	SetCurrentCulture 0x4b0be hash cae1be18 params:( None Culture;None SaveToConfig;None ReturnValue; );
	SetCurrentAssetGroupCulture 0x4b0af hash 7d6f6825 params:( None AssetGroup;None Culture;None SaveToConfig;None ReturnValue; );
	GetSuitableCulture 0x4b0a5 hash 4c8c9282 params:( AvailableCultures AvailableCultures;None CultureToMatch;None FallbackCulture;None ReturnValue; );
	GetNativeCulture 0x4b09c hash 5bf6d810 params:( UnderlyingType TextCategory;None ReturnValue; );
	GetLocalizedCultures 0x4b091 hash a766dc53 params:( None IncludeGame;None IncludeEngine;None IncludeEditor;None IncludeAdditional;ReturnValue ReturnValue; );
	GetCurrentLocale 0x4b088 hash ce0625f8 params:( None ReturnValue; );
	GetCurrentLanguage 0x4b07e hash 4c926f6c params:( None ReturnValue; );
	GetCurrentCulture 0x4b074 hash e8ab260c params:( None ReturnValue; );
	GetCurrentAssetGroupCulture 0x4b065 hash 93c25119 params:( None AssetGroup;None ReturnValue; );
	GetCultureDisplayName 0x4b059 hash ff94bc20 params:( None Culture;None Localized;None ReturnValue; );
	ClearCurrentAssetGroupCulture 0x4b049 hash 25da0520 params:( None AssetGroup;None SaveToConfig; );
};


instance 1ab5e159640
class KismetMaterialLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SetVectorParameterValue 0x4b11d hash 21f81422 params:( Object WorldContextObject;MaterialParameterCollection Collection;None ParameterName;LinearColor ParameterValue; );
	SetScalarParameterValue 0x4b110 hash 3dea55e5 params:( Object WorldContextObject;MaterialParameterCollection Collection;None ParameterName;None ParameterValue; );
	GetVectorParameterValue 0x4b103 hash bf74a316 params:( Object WorldContextObject;MaterialParameterCollection Collection;None ParameterName;LinearColor ReturnValue; );
	GetScalarParameterValue 0x4b0f6 hash db66e4d9 params:( Object WorldContextObject;MaterialParameterCollection Collection;None ParameterName;None ReturnValue; );
	CreateDynamicMaterialInstance 0x3f665 hash a4482bc2 params:( Object WorldContextObject;MaterialInterface Parent;None OptionalName;MaterialInstanceDynamic ReturnValue; );
};


instance 1ab5e15fdc0
class KismetMathLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	Xor_IntInt 0x4c96a hash 93c21853 params:( None A;None B;None ReturnValue; );
	Xor_Int64Int64 0x4c962 hash 1c427ba7 params:( None A;None B;None ReturnValue; );
	WeightedMovingAverage_FVector 0x4c952 hash e3d95279 params:( Vector CurrentSample;Vector PreviousSample;None Weight;Vector ReturnValue; );
	WeightedMovingAverage_FRotator 0x4c942 hash 43978f91 params:( Rotator CurrentSample;Rotator PreviousSample;None Weight;Rotator ReturnValue; );
	WeightedMovingAverage_Float 0x4c933 hash 1ed13056 params:( None CurrentSample;None PreviousSample;None Weight;None ReturnValue; );
	VSizeXYSquared 0x4c92b hash 1cd32cbc params:( Vector A;None ReturnValue; );
	VSizeXY 0x4c926 hash a91cdee7 params:( Vector A;None ReturnValue; );
	VSizeSquared 0x4c91f hash 6e443cab params:( Vector A;None ReturnValue; );
	VSize2DSquared 0x4c917 hash 70f3f021 params:( Vector2D A;None ReturnValue; );
	VSize2D 0x4c912 hash a91cd9ec params:( Vector2D A;None ReturnValue; );
	VSize 0x4c90e hash e428db6 params:( Vector A;None ReturnValue; );
	VLerp 0x4c90a hash e3ea50e params:( Vector A;Vector B;None Alpha;Vector ReturnValue; );
	VInterpTo_Constant 0x4c900 hash 94713519 params:( Vector Current;Vector Target;None DeltaTime;None InterpSpeed;Vector ReturnValue; );
	VInterpTo 0x4c8fa hash 9c30ced0 params:( Vector Current;Vector Target;None DeltaTime;None InterpSpeed;Vector ReturnValue; );
	VectorSpringInterp 0x4c8f0 hash 2a17cdd params:( Vector Current;Vector Target;VectorSpringState SpringState;None Stiffness;None CriticalDampingFactor;None DeltaTime;None Mass;Vector ReturnValue; );
	Vector_Zero 0x4c8e9 hash dc04b537 params:( Vector ReturnValue; );
	Vector_Up 0x4c8e3 hash 255827fc params:( Vector ReturnValue; );
	Vector_UnwindEuler 0x4c8d9 hash 458b2ec9 params:( Vector A; );
	Vector_UnitCartesianToSpherical 0x4c8c8 hash 5bb4b8cf params:( Vector A;Vector2D ReturnValue; );
	Vector_ToRadians 0x4c8bf hash 7b8e3adc params:( Vector A;Vector ReturnValue; );
	Vector_ToDegrees 0x4c8b6 hash 4f6ed399 params:( Vector A;Vector ReturnValue; );
	Vector_SnappedToGrid 0x4c8ab hash b75a0feb params:( Vector InVect;None InGridSize;Vector ReturnValue; );
	Vector_Set 0x4c8a5 hash d05d1e03 params:( Vector A;None X;None Y;None Z; );
	Vector_Right 0x4c89e hash 5c0c9a55 params:( Vector ReturnValue; );
	Vector_Reciprocal 0x4c894 hash 8d3d53bb params:( Vector A;Vector ReturnValue; );
	Vector_ProjectOnToNormal 0x4c887 hash d3a6cd57 params:( Vector V;Vector InNormal;Vector ReturnValue; );
	Vector_One 0x4c881 hash d05d0e19 params:( Vector ReturnValue; );
	Vector_NormalUnsafe 0x4c876 hash 70b4d782 params:( Vector A;Vector ReturnValue; );
	Vector_Normalize 0x4c86d hash 7bb493a8 params:( Vector A;None Tolerance; );
	Vector_Normal2D 0x4c864 hash fbfdaf96 params:( Vector A;None Tolerance;Vector ReturnValue; );
	Vector_MirrorByPlane 0x4c859 hash 6f6d665d params:( Vector A;Plane InPlane;Vector ReturnValue; );
	Vector_Left 0x4c852 hash dbfd0662 params:( Vector ReturnValue; );
	Vector_IsZero 0x4c84a hash c94f3ed3 params:( Vector A;None ReturnValue; );
	Vector_IsUnit 0x4c842 hash c94ca613 params:( Vector A;None SquaredLenthTolerance;None ReturnValue; );
	Vector_IsUniform 0x4c839 hash 30d78b33 params:( Vector A;None Tolerance;None ReturnValue; );
	Vector_IsNormal 0x4c830 hash 3ed1517c params:( Vector A;None ReturnValue; );
	Vector_IsNearlyZero 0x4c825 hash 6044669e params:( Vector A;None Tolerance;None ReturnValue; );
	Vector_IsNAN 0x4c81e hash 5b6eca10 params:( Vector A;None ReturnValue; );
	Vector_HeadingAngle 0x4c813 hash db1d000e params:( Vector A;None ReturnValue; );
	Vector_GetSignVector 0x4c808 hash 65ee0afb params:( Vector A;Vector ReturnValue; );
	Vector_GetProjection 0x4c7fd hash c33658b4 params:( Vector A;Vector ReturnValue; );
	Vector_GetAbsMin 0x4c7f4 hash 45221f91 params:( Vector A;None ReturnValue; );
	Vector_GetAbsMax 0x4c7eb hash 45221e93 params:( Vector A;None ReturnValue; );
	Vector_GetAbs 0x4c7e3 hash c3b53d2d params:( Vector A;Vector ReturnValue; );
	Vector_Forward 0x4c7db hash 4afa3cc params:( Vector ReturnValue; );
	Vector_Down 0x4c7d4 hash dbf8d00f params:( Vector ReturnValue; );
	Vector_DistanceSquared 0x4c7c8 hash 1bc8aad7 params:( Vector v1;Vector v2;None ReturnValue; );
	Vector_Distance2DSquared 0x4c7bb hash 914c994d params:( Vector v1;Vector v2;None ReturnValue; );
	Vector_Distance2D 0x4c7b1 hash 162cbc98 params:( Vector v1;Vector v2;None ReturnValue; );
	Vector_Distance 0x4c7a8 hash f661d562 params:( Vector v1;Vector v2;None ReturnValue; );
	Vector_CosineAngle2D 0x4c79d hash 391d355 params:( Vector A;Vector B;None ReturnValue; );
	Vector_ComponentMin 0x4c792 hash 4a61314e params:( Vector A;Vector B;Vector ReturnValue; );
	Vector_ComponentMax 0x4c787 hash 4a613050 params:( Vector A;Vector B;Vector ReturnValue; );
	Vector_ClampSizeMax2D 0x4c77b hash 82825f5b params:( Vector A;None Max;Vector ReturnValue; );
	Vector_ClampSizeMax 0x4c770 hash 459eb65 params:( Vector A;None Max;Vector ReturnValue; );
	Vector_ClampSize2D 0x4c766 hash 21bdb5 params:( Vector A;None Min;None Max;Vector ReturnValue; );
	Vector_BoundedToCube 0x4c75b hash 904f60da params:( Vector InVect;None InRadius;Vector ReturnValue; );
	Vector_BoundedToBox 0x4c750 hash 70faa0e4 params:( Vector InVect;Vector InBoxMin;Vector InBoxMax;Vector ReturnValue; );
	Vector_Backward 0x4c747 hash 9022b9f6 params:( Vector ReturnValue; );
	Vector_Assign 0x4c73f hash b6b3bedc params:( Vector A;Vector InVector; );
	Vector_AddBounded 0x4c735 hash 4106c41 params:( Vector A;Vector InAddVect;None InRadius; );
	Vector4_Zero 0x4c72e hash f8a1c4eb params:( Vector4 ReturnValue; );
	Vector4_SizeSquared3 0x4c723 hash 3c78d4ce params:( Vector4 A;None ReturnValue; );
	Vector4_SizeSquared 0x4c718 hash fa132d3b params:( Vector4 A;None ReturnValue; );
	Vector4_Size3 0x4c710 hash c5e0939 params:( Vector4 A;None ReturnValue; );
	Vector4_Size 0x4c709 hash f89e0046 params:( Vector4 A;None ReturnValue; );
	Vector4_Set 0x4c702 hash d8fd0737 params:( Vector4 A;None X;None Y;None Z;None W; );
	Vector4_NormalUnsafe3 0x4c6f6 hash 9a7bc229 params:( Vector4 A;Vector4 ReturnValue; );
	Vector4_Normalize3 0x4c6ec hash 1a260f8f params:( Vector4 A;None Tolerance; );
	Vector4_Normal3 0x4c6e3 hash 28957047 params:( Vector4 A;None Tolerance;Vector4 ReturnValue; );
	Vector4_Negated 0x4c6da hash 10748803 params:( Vector4 A;Vector4 ReturnValue; );
	Vector4_MirrorByVector3 0x4c6cd hash 4c24cda7 params:( Vector4 Direction;Vector4 SurfaceNormal;Vector4 ReturnValue; );
	Vector4_IsZero 0x4c6c5 hash 816f0b87 params:( Vector4 A;None ReturnValue; );
	Vector4_IsUnit3 0x4c6bc hash aefacbda params:( Vector4 A;None SquaredLenthTolerance;None ReturnValue; );
	Vector4_IsNormal3 0x4c6b2 hash 40fa8163 params:( Vector4 A;None ReturnValue; );
	Vector4_IsNearlyZero3 0x4c6a6 hash 7bfd34c5 params:( Vector4 A;None Tolerance;None ReturnValue; );
	Vector4_IsNAN 0x4c69e hash badd044 params:( Vector4 A;None ReturnValue; );
	Vector4_DotProduct3 0x4c693 hash 720cfbc6 params:( Vector4 A;Vector4 B;None ReturnValue; );
	Vector4_DotProduct 0x4c689 hash 39c25533 params:( Vector4 A;Vector4 B;None ReturnValue; );
	Vector4_CrossProduct3 0x4c67d hash 5f9fe9e9 params:( Vector4 A;Vector4 B;Vector4 ReturnValue; );
	Vector4_Assign 0x4c675 hash 6ed38b90 params:( Vector4 A;Vector4 InVector; );
	Vector2DInterpTo_Constant 0x4c667 hash aa6bebac params:( Vector2D Current;Vector2D Target;None DeltaTime;None InterpSpeed;Vector2D ReturnValue; );
	Vector2DInterpTo 0x4c65e hash 3edfc03 params:( Vector2D Current;Vector2D Target;None DeltaTime;None InterpSpeed;Vector2D ReturnValue; );
	Vector2D_Zero 0x4c656 hash 343edbad params:( Vector2D ReturnValue; );
	Vector2D_Unit45Deg 0x4c64c hash 5ad75806 params:( Vector2D ReturnValue; );
	Vector2D_One 0x4c645 hash f2113dcf params:( Vector2D ReturnValue; );
	VEase 0x4c641 hash e3abd79 params:( Vector A;Vector B;None Alpha;EEasingFunc EasingFunc;None BlendExp;None Steps;Vector ReturnValue; );
	UtcNow 0x4c63d hash d69040c5 params:( DateTime ReturnValue; );
	TransformRotation 0x4c633 hash eee33151 params:( Transform T;Rotator Rotation;Rotator ReturnValue; );
	TransformLocation 0x4c629 hash 3db0815a params:( Transform T;Vector Location;Vector ReturnValue; );
	TransformDirection 0x4c61f hash 5122a7c2 params:( Transform T;Vector Direction;Vector ReturnValue; );
	Transform_Determinant 0x4c613 hash 7b5e7abb params:( Transform Transform;None ReturnValue; );
	ToSign2D 0x4c60e hash 2b100a4f params:( Vector2D A;Vector2D ReturnValue; );
	ToRounded2D 0x4c607 hash 65118c8f params:( Vector2D A;Vector2D ReturnValue; );
	ToDirectionAndLength2D 0x4c5fb hash e7294b54 params:( Vector2D A;Vector2D OutDir;None OutLength; );
	Today 0x4c5f7 hash e2d9ee6 params:( DateTime ReturnValue; );
	TLerp 0x4c5f3 hash e1a740c params:( Transform A;Transform B;None Alpha;ELerpInterpolationMode InterpMode;Transform ReturnValue; );
	TInterpTo 0x4c5ed hash b337ecce params:( Transform Current;Transform Target;None DeltaTime;None InterpSpeed;Transform ReturnValue; );
	TimespanZeroValue 0x4c5e3 hash 5f7b5c03 params:( Timespan ReturnValue; );
	TimespanRatio 0x4c5db hash cebf94a5 params:( Timespan A;Timespan B;None ReturnValue; );
	TimespanMinValue 0x4c5d2 hash d70db467 params:( Timespan ReturnValue; );
	TimespanMaxValue 0x4c5c9 hash 868f64a9 params:( Timespan ReturnValue; );
	TimespanFromString 0x4c5bf hash 8406bb31 params:( None TimespanString;Timespan Result;None ReturnValue; );
	TEase 0x4c5bb hash e168c77 params:( Transform A;Transform B;None Alpha;EEasingFunc EasingFunc;None BlendExp;None Steps;Transform ReturnValue; );
	Tan 0x4c5b8 hash b882528 params:( None A;None ReturnValue; );
	Subtract_VectorVector 0x4c5ac hash f124ebf2 params:( Vector A;Vector B;Vector ReturnValue; );
	Subtract_VectorInt 0x4c5a2 hash db018aca params:( Vector A;None B;Vector ReturnValue; );
	Subtract_VectorFloat 0x4c597 hash a157fab5 params:( Vector A;None B;Vector ReturnValue; );
	Subtract_Vector4Vector4 0x4c58a hash ee214bfa params:( Vector4 A;Vector4 B;Vector4 ReturnValue; );
	Subtract_Vector2DVector2D 0x4c57c hash 5d9a4f9e params:( Vector2D A;Vector2D B;Vector2D ReturnValue; );
	Subtract_Vector2DFloat 0x4c570 hash f38676eb params:( Vector2D A;None B;Vector2D ReturnValue; );
	Subtract_TimespanTimespan 0x4c562 hash 8159460e params:( Timespan A;Timespan B;Timespan ReturnValue; );
	Subtract_QuatQuat 0x4c558 hash 62ce8682 params:( Quat A;Quat B;Quat ReturnValue; );
	Subtract_LinearColorLinearColor 0x4c547 hash f525f6c0 params:( LinearColor A;LinearColor B;LinearColor ReturnValue; );
	Subtract_IntInt 0x4c53e hash 76ba79c2 params:( None A;None B;None ReturnValue; );
	Subtract_Int64Int64 0x4c533 hash 9e5bfc96 params:( None A;None B;None ReturnValue; );
	Subtract_FloatFloat 0x4c528 hash 8f1529b8 params:( None A;None B;None ReturnValue; );
	Subtract_DateTimeTimespan 0x4c51a hash c7aa9e5a params:( DateTime A;Timespan B;DateTime ReturnValue; );
	Subtract_DateTimeDateTime 0x4c50c hash abfe6aa6 params:( DateTime A;DateTime B;Timespan ReturnValue; );
	Subtract_ByteByte 0x4c502 hash ea166e74 params:( None A;None B;None ReturnValue; );
	Square 0x4c4fe hash d1b9d5f6 params:( None A;None ReturnValue; );
	Sqrt 0x4c4fb hash 7c8c82cf params:( None A;None ReturnValue; );
	Spherical2DToUnitCartesian 0x4c4ed hash 2046f953 params:( Vector2D A;Vector ReturnValue; );
	Sin 0x4c4ea hash b8821ef params:( None A;None ReturnValue; );
	SignOfInteger64 0x4c4e1 hash 22898b03 params:( None A;None ReturnValue; );
	SignOfInteger 0x4c4d9 hash b274b999 params:( None A;None ReturnValue; );
	SignOfFloat 0x4c4d2 hash e77fc3a1 params:( None A;None ReturnValue; );
	SetRandomStreamSeed 0x4c4c7 hash d9a7d7df params:( RandomStream Stream;None NewSeed; );
	Set2D 0x4c4c3 hash e164867 params:( Vector2D A;None X;None Y; );
	SelectVector 0x4c4bc hash 8d7bce18 params:( Vector A;Vector B;None bPickA;Vector ReturnValue; );
	SelectTransform 0x4c4b3 hash bf4d6c01 params:( Transform A;Transform B;None bPickA;Transform ReturnValue; );
	SelectString 0x4c4ac hash 8793ce7c params:( None A;None B;None bPickA;None ReturnValue; );
	SelectRotator 0x4c4a4 hash 21897f10 params:( Rotator A;Rotator B;None bPickA;Rotator ReturnValue; );
	SelectObject 0x4c49d hash 7cf4fd7c params:( Object A;Object B;None bSelectA;Object ReturnValue; );
	SelectInt 0x4c497 hash 58d92eb0 params:( None A;None B;None bPickA;None ReturnValue; );
	SelectFloat 0x4c490 hash f3a8301b params:( None A;None B;None bPickA;None ReturnValue; );
	SelectColor 0x4c489 hash f37380c4 params:( LinearColor A;LinearColor B;None bPickA;LinearColor ReturnValue; );
	SelectClass 0x4c482 hash f371ad5b params:( Class A;Class B;None bSelectA;Class ReturnValue; );
	SeedRandomStream 0x4c479 hash f40d4e73 params:( RandomStream Stream; );
	SafeDivide 0x4c473 hash cf83e079 params:( None A;None B;None ReturnValue; );
	Round64 0x4c46e hash b756e637 params:( None A;None ReturnValue; );
	Round 0x4c46a hash e09b7cd params:( None A;None ReturnValue; );
	RotatorFromAxisAndAngle 0x4c45d hash 57fb6893 params:( Vector Axis;None Angle;Rotator ReturnValue; );
	RotateAngleAxis 0x4c454 hash 341a8630 params:( Vector InVect;None AngleDeg;Vector Axis;Vector ReturnValue; );
	RLerp 0x4c450 hash df6430a params:( Rotator A;Rotator B;None Alpha;None bShortestPath;Rotator ReturnValue; );
	RInterpTo_Constant 0x4c446 hash dc18ac95 params:( Rotator Current;Rotator Target;None DeltaTime;None InterpSpeed;Rotator ReturnValue; );
	RInterpTo 0x4c440 hash ca3f0acc params:( Rotator Current;Rotator Target;None DeltaTime;None InterpSpeed;Rotator ReturnValue; );
	RGBToHSV_Vector 0x4c437 hash 54a71ea6 params:( LinearColor RGB;LinearColor HSV; );
	RGBToHSV 0x4c432 hash 2252f2d4 params:( LinearColor InColor;None H;None S;None V;None A; );
	RGBLinearToHSV 0x4c42a hash 674a48af params:( LinearColor RGB;LinearColor ReturnValue; );
	ResetVectorSpringState 0x4c41e hash 8ea602ef params:( VectorSpringState SpringState; );
	ResetRandomStream 0x4c414 hash 76dcd5d5 params:( RandomStream Stream; );
	ResetFloatSpringState 0x4c408 hash c97a24b2 params:( FloatSpringState SpringState; );
	REase 0x4c404 hash df25b75 params:( Rotator A;Rotator B;None Alpha;None bShortestPath;EEasingFunc EasingFunc;None BlendExp;None Steps;Rotator ReturnValue; );
	RandomUnitVectorInEllipticalConeInRadiansFromStream 0x4c3e9 hash 7ae14851 params:( Vector ConeDir;None MaxYawInRadians;None MaxPitchInRadians;RandomStream Stream;Vector ReturnValue; );
	RandomUnitVectorInEllipticalConeInRadians 0x4c3d3 hash aad25571 params:( Vector ConeDir;None MaxYawInRadians;None MaxPitchInRadians;Vector ReturnValue; );
	RandomUnitVectorInEllipticalConeInDegreesFromStream 0x4c3b8 hash 27d1b14e params:( Vector ConeDir;None MaxYawInDegrees;None MaxPitchInDegrees;RandomStream Stream;Vector ReturnValue; );
	RandomUnitVectorInEllipticalConeInDegrees 0x4c3a2 hash 7eb2ee2e params:( Vector ConeDir;None MaxYawInDegrees;None MaxPitchInDegrees;Vector ReturnValue; );
	RandomUnitVectorInConeInRadiansFromStream 0x4c38c hash 1901308e params:( Vector ConeDir;None ConeHalfAngleInRadians;RandomStream Stream;Vector ReturnValue; );
	RandomUnitVectorInConeInRadians 0x4c37b hash 945e5d6e params:( Vector ConeDir;None ConeHalfAngleInRadians;Vector ReturnValue; );
	RandomUnitVectorInConeInDegreesFromStream 0x4c365 hash c5f1998b params:( Vector ConeDir;None ConeHalfAngleInDegrees;RandomStream Stream;Vector ReturnValue; );
	RandomUnitVectorInConeInDegrees 0x4c354 hash 683ef62b params:( Vector ConeDir;None ConeHalfAngleInDegrees;Vector ReturnValue; );
	RandomUnitVectorFromStream 0x4c346 hash edf3fc39 params:( RandomStream Stream;Vector ReturnValue; );
	RandomUnitVector 0x4c33d hash faef8759 params:( Vector ReturnValue; );
	RandomRotatorFromStream 0x4c330 hash baa21e31 params:( None bRoll;RandomStream Stream;Rotator ReturnValue; );
	RandomRotator 0x4c328 hash 15145351 params:( None bRoll;Rotator ReturnValue; );
	RandomPointInBoundingBox 0x4c31b hash f3702386 params:( Vector Origin;Vector BoxExtent;Vector ReturnValue; );
	RandomIntegerInRangeFromStream 0x4c30b hash 15e0d5d8 params:( None Min;None Max;RandomStream Stream;None ReturnValue; );
	RandomIntegerInRange 0x4c300 hash 18cefe38 params:( None Min;None Max;None ReturnValue; );
	RandomIntegerFromStream 0x4c2f3 hash 806fcb74 params:( None Max;RandomStream Stream;None ReturnValue; );
	RandomInteger64InRange 0x4c2e7 hash c3e9f722 params:( None Min;None Max;None ReturnValue; );
	RandomInteger64 0x4c2de hash af388cfe params:( None Max;None ReturnValue; );
	RandomInteger 0x4c2d6 hash 5df500d4 params:( None Max;None ReturnValue; );
	RandomFloatInRangeFromStream 0x4c2c7 hash 5b824e20 params:( None Min;None Max;RandomStream Stream;None ReturnValue; );
	RandomFloatInRange 0x4c2bd hash 5a87fc80 params:( None Min;None Max;None ReturnValue; );
	RandomFloatFromStream 0x4c2b1 hash 929784bc params:( RandomStream Stream;None ReturnValue; );
	RandomFloat 0x4c2aa hash e63f001c params:( None ReturnValue; );
	RandomBoolWithWeightFromStream 0x4c29a hash 8a8832f6 params:( None Weight;RandomStream RandomStream;None ReturnValue; );
	RandomBoolWithWeight 0x4c28f hash 203bdd6 params:( None Weight;None ReturnValue; );
	RandomBoolFromStream 0x4c284 hash b109ce12 params:( RandomStream Stream;None ReturnValue; );
	RandomBool 0x4c27e hash 450785f2 params:( None ReturnValue; );
	RadiansToDegrees 0x4c275 hash f1b8bc69 params:( None A;None ReturnValue; );
	Quat_VectorUp 0x4c26d hash 2c977f17 params:( Quat Q;Vector ReturnValue; );
	Quat_VectorRight 0x4c264 hash beaf5f90 params:( Quat Q;Vector ReturnValue; );
	Quat_VectorForward 0x4c25a hash 9b18a3c7 params:( Quat Q;Vector ReturnValue; );
	Quat_UnrotateVector 0x4c24f hash 582154e4 params:( Quat Q;Vector V;Vector ReturnValue; );
	Quat_SizeSquared 0x4c246 hash 72d7896f params:( Quat Q;None ReturnValue; );
	Quat_Size 0x4c240 hash 7e06efa params:( Quat Q;None ReturnValue; );
	Quat_SetFromEuler 0x4c236 hash 7266ea7c params:( Quat Q;Vector Euler; );
	Quat_SetComponents 0x4c22c hash c5908f51 params:( Quat Q;None X;None Y;None Z;None W; );
	Quat_Rotator 0x4c225 hash 7952b36a params:( Quat Q;Rotator ReturnValue; );
	Quat_RotateVector 0x4c21b hash 63828521 params:( Quat Q;Vector V;Vector ReturnValue; );
	Quat_Normalized 0x4c212 hash b8f5b574 params:( Quat Q;None Tolerance;Quat ReturnValue; );
	Quat_Normalize 0x4c20a hash c78b5310 params:( Quat Q;None Tolerance; );
	Quat_MakeFromEuler 0x4c200 hash 9f87180e params:( Vector Euler;Quat ReturnValue; );
	Quat_Log 0x4c1fb hash 559252e1 params:( Quat Q;Quat ReturnValue; );
	Quat_IsNormalized 0x4c1f1 hash 2f1cbe10 params:( Quat Q;None ReturnValue; );
	Quat_IsNonFinite 0x4c1e8 hash 541570a5 params:( Quat Q;None ReturnValue; );
	Quat_IsIdentity 0x4c1df hash f4d9fe65 params:( Quat Q;None Tolerance;None ReturnValue; );
	Quat_IsFinite 0x4c1d7 hash 1e81abba params:( Quat Q;None ReturnValue; );
	Quat_Inversed 0x4c1cf hash d50123f params:( Quat Q;Quat ReturnValue; );
	Quat_Identity 0x4c1c7 hash e485ccc9 params:( Quat ReturnValue; );
	Quat_GetRotationAxis 0x4c1bc hash 1f780ee4 params:( Quat Q;Vector ReturnValue; );
	Quat_GetAxisZ 0x4c1b4 hash 78cda3ce params:( Quat Q;Vector ReturnValue; );
	Quat_GetAxisY 0x4c1ac hash 78cda3cd params:( Quat Q;Vector ReturnValue; );
	Quat_GetAxisX 0x4c1a4 hash 78cda3cc params:( Quat Q;Vector ReturnValue; );
	Quat_GetAngle 0x4c19c hash 78c81ea6 params:( Quat Q;None ReturnValue; );
	Quat_Exp 0x4c197 hash 5592364c params:( Quat Q;Quat ReturnValue; );
	Quat_Euler 0x4c191 hash 2f7509c params:( Quat Q;Vector ReturnValue; );
	Quat_EnforceShortestArcWith 0x4c182 hash f0de548f params:( Quat A;Quat B; );
	Quat_AngularDistance 0x4c177 hash a75f13b4 params:( Quat A;Quat B;None ReturnValue; );
	ProjectVectorOnToVector 0x4c16a hash e8a356a2 params:( Vector V;Vector Target;Vector ReturnValue; );
	ProjectVectorOnToPlane 0x4c15e hash b9108a7f params:( Vector V;Vector PlaneNormal;Vector ReturnValue; );
	ProjectPointOnToPlane 0x4c152 hash 6c1121d6 params:( Vector Point;Vector PlaneBase;Vector PlaneNormal;Vector ReturnValue; );
	PointsAreCoplanar 0x4c148 hash e9d2ed8a params:( Points Points;None Tolerance;None ReturnValue; );
	PerlinNoise1D 0x4c140 hash 6c9bd902 params:( None Value;None ReturnValue; );
	Percent_IntInt 0x4c138 hash 36d539cb params:( None A;None B;None ReturnValue; );
	Percent_FloatFloat 0x4c12e hash 5f32c641 params:( None A;None B;None ReturnValue; );
	Percent_ByteByte 0x4c125 hash 1be154bd params:( None A;None B;None ReturnValue; );
	Or_IntInt 0x4c11f hash 5d00c03b params:( None A;None B;None ReturnValue; );
	Or_Int64Int64 0x4c117 hash 32e2d78f params:( None A;None B;None ReturnValue; );
	Now 0x4c114 hash b880d79 params:( DateTime ReturnValue; );
	NotEqualExactly_VectorVector 0x4c105 hash abaac0ed params:( Vector A;Vector B;None ReturnValue; );
	NotEqualExactly_Vector4Vector4 0x4c0f5 hash 61704bb5 params:( Vector4 A;Vector4 B;None ReturnValue; );
	NotEqualExactly_Vector2DVector2D 0x4c0e4 hash e0a82a19 params:( Vector2D A;Vector2D B;None ReturnValue; );
	NotEqual_VectorVector 0x4c0d8 hash 8d0048b3 params:( Vector A;Vector B;None ErrorTolerance;None ReturnValue; );
	NotEqual_Vector4Vector4 0x4c0cb hash ee46dcfb params:( Vector4 A;Vector4 B;None ErrorTolerance;None ReturnValue; );
	NotEqual_Vector2DVector2D 0x4c0bd hash fd6824df params:( Vector2D A;Vector2D B;None ErrorTolerance;None ReturnValue; );
	NotEqual_TimespanTimespan 0x4c0af hash 21271b4f params:( Timespan A;Timespan B;None ReturnValue; );
	NotEqual_RotatorRotator 0x4c0a2 hash 48891403 params:( Rotator A;Rotator B;None ErrorTolerance;None ReturnValue; );
	NotEqual_QuatQuat 0x4c098 hash 2e1faac3 params:( Quat A;Quat B;None ErrorTolerance;None ReturnValue; );
	NotEqual_ObjectObject 0x4c08c hash 6599a27b params:( Object A;Object B;None ReturnValue; );
	NotEqual_NameName 0x4c082 hash 80b9ec4f params:( None A;None B;None ReturnValue; );
	NotEqual_MatrixMatrix 0x4c076 hash 49ced537 params:( Matrix A;Matrix B;None Tolerance;None ReturnValue; );
	NotEqual_LinearColorLinearColor 0x4c065 hash 3ac8f8c1 params:( LinearColor A;LinearColor B;None ReturnValue; );
	NotEqual_IntInt 0x4c05c hash fb4399c3 params:( None A;None B;None ReturnValue; );
	NotEqual_Int64Int64 0x4c051 hash 82873517 params:( None A;None B;None ReturnValue; );
	NotEqual_FloatFloat 0x4c046 hash 73406239 params:( None A;None B;None ReturnValue; );
	NotEqual_DateTimeDateTime 0x4c038 hash 4bcc3fe7 params:( DateTime A;DateTime B;None ReturnValue; );
	NotEqual_ClassClass 0x4c02d hash e293a4b9 params:( Class A;Class B;None ReturnValue; );
	NotEqual_ByteByte 0x4c023 hash b56792b5 params:( None A;None B;None ReturnValue; );
	NotEqual_BoolBool 0x4c019 hash a875e865 params:( None A;None B;None ReturnValue; );
	Not_PreBool 0x4c012 hash e277f9c8 params:( None A;None ReturnValue; );
	Not_Int64 0x4c00c hash a4f724ca params:( None A;None ReturnValue; );
	Not_Int 0x4c007 hash 835335a0 params:( None A;None ReturnValue; );
	NormalSafe2D 0x4c000 hash 42e0f023 params:( Vector2D A;None Tolerance;Vector2D ReturnValue; );
	NormalizeToRange 0x4bff7 hash ec0105a6 params:( None Value;None RangeMin;None RangeMax;None ReturnValue; );
	NormalizedDeltaRotator 0x4bfeb hash 4bbdcecf params:( Rotator A;Rotator B;Rotator ReturnValue; );
	NormalizeAxis 0x4bfe3 hash 76ac7dab params:( None Angle;None ReturnValue; );
	Normalize2D 0x4bfdc hash f41eb5cc params:( Vector2D A;None Tolerance; );
	Normal2D 0x4bfd7 hash ea1a07c4 params:( Vector2D A;Vector2D ReturnValue; );
	Normal 0x1ec81 hash c5ea658e params:( Vector A;None Tolerance;Vector ReturnValue; );
	NegateVector 0x4bfd0 hash e049f52c params:( Vector A;Vector ReturnValue; );
	NegateRotator 0x4bfc8 hash ce1c88a4 params:( Rotator A;Rotator ReturnValue; );
	Negated2D 0x4bfc2 hash 895ef933 params:( Vector2D A;Vector2D ReturnValue; );
	NearlyEqual_TransformTransform 0x4bfb2 hash 54ad851f params:( Transform A;Transform B;None LocationTolerance;None RotationTolerance;None Scale3DTolerance;None ReturnValue; );
	NearlyEqual_FloatFloat 0x4bfa6 hash c6ebfd93 params:( None A;None B;None ErrorTolerance;None ReturnValue; );
	MultiplyMultiply_FloatFloat 0x4bf97 hash 81f17730 params:( None Base;None Exp;None ReturnValue; );
	MultiplyByPi 0x4bf90 hash 1b28fbd9 params:( None Value;None ReturnValue; );
	Multiply_VectorVector 0x4bf84 hash 66974d8a params:( Vector A;Vector B;Vector ReturnValue; );
	Multiply_VectorInt 0x4bf7a hash a53d9362 params:( Vector A;None B;Vector ReturnValue; );
	Multiply_VectorFloat 0x4bf6f hash eab8894d params:( Vector A;None B;Vector ReturnValue; );
	Multiply_Vector4Vector4 0x4bf62 hash 89b27392 params:( Vector4 A;Vector4 B;Vector4 ReturnValue; );
	Multiply_Vector2DVector2D 0x4bf54 hash 2213bd36 params:( Vector2D A;Vector2D B;Vector2D ReturnValue; );
	Multiply_Vector2DFloat 0x4bf48 hash 17450b83 params:( Vector2D A;None B;Vector2D ReturnValue; );
	Multiply_TimespanFloat 0x4bf3c hash b2acedbb params:( Timespan A;None Scalar;Timespan ReturnValue; );
	Multiply_RotatorInt 0x4bf31 hash cef8253a params:( Rotator A;None B;Rotator ReturnValue; );
	Multiply_RotatorFloat 0x4bf25 hash 6d5ef125 params:( Rotator A;None B;Rotator ReturnValue; );
	Multiply_QuatQuat 0x4bf1b hash 2adfdc1a params:( Quat A;Quat B;Quat ReturnValue; );
	Multiply_MatrixMatrix 0x4bf0f hash 2365da0e params:( Matrix A;Matrix B;Matrix ReturnValue; );
	Multiply_MatrixFloat 0x4bf04 hash 4e2d440f params:( Matrix A;None B;Matrix ReturnValue; );
	Multiply_LinearColorLinearColor 0x4bef3 hash b0d13658 params:( LinearColor A;LinearColor B;LinearColor ReturnValue; );
	Multiply_LinearColorFloat 0x4bee5 hash b1c46154 params:( LinearColor A;None B;LinearColor ReturnValue; );
	Multiply_IntInt 0x4bedc hash fec9895a params:( None A;None B;None ReturnValue; );
	Multiply_IntFloat 0x4bed2 hash d719dd45 params:( None A;None B;None ReturnValue; );
	Multiply_Int64Int64 0x4bec7 hash b019182e params:( None A;None B;None ReturnValue; );
	Multiply_FloatFloat 0x4bebc hash a0d24550 params:( None A;None B;None ReturnValue; );
	Multiply_ByteByte 0x4beb2 hash b227c40c params:( None A;None B;None ReturnValue; );
	MirrorVectorByNormal 0x4bea7 hash 406214b7 params:( Vector InVect;Vector InNormal;Vector ReturnValue; );
	MinOfIntArray 0x4be9f hash dccb1528 params:( IntArray IntArray;None IndexOfMinValue;None MinValue; );
	MinOfFloatArray 0x4be96 hash 4a07bbb3 params:( FloatArray FloatArray;None IndexOfMinValue;None MinValue; );
	MinOfByteArray 0x4be8e hash be1e1471 params:( ByteArray ByteArray;None IndexOfMinValue;None MinValue; );
	MinInt64 0x4be89 hash 2421f51e params:( None A;None B;None ReturnValue; );
	MinimumAreaRectangle 0x4be7e hash a609824f params:( Object WorldContextObject;InVerts InVerts;Vector SampleSurfaceNormal;Vector OutRectCenter;Rotator OutRectRotation;None OutSideLengthX;None OutSideLengthY;None bDebugDraw; );
	Min 0x4be7b hash b880869 params:( None A;None B;None ReturnValue; );
	MaxOfIntArray 0x4be73 hash 8acf3eaa params:( IntArray IntArray;None IndexOfMaxValue;None MaxValue; );
	MaxOfFloatArray 0x4be6a hash 89bc4db5 params:( FloatArray FloatArray;None IndexOfMaxValue;None MaxValue; );
	MaxOfByteArray 0x4be62 hash 2ca76e33 params:( ByteArray ByteArray;None IndexOfMaxValue;None MaxValue; );
	MaxInt64 0x4be5d hash d3a3a560 params:( None A;None B;None ReturnValue; );
	Max 0x4be5a hash b88076b params:( None A;None B;None ReturnValue; );
	Matrix_TransformVector4 0x4be4d hash 8f7b7b1c params:( Matrix M;Vector4 V;Vector4 ReturnValue; );
	Matrix_TransformVector 0x4be41 hash af03bde8 params:( Matrix M;Vector V;Vector4 ReturnValue; );
	Matrix_TransformPosition 0x4be34 hash 1bb45d0a params:( Matrix M;Vector V;Vector4 ReturnValue; );
	Matrix_ToQuat 0x4be2c hash f6396177 params:( Matrix M;Quat ReturnValue; );
	Matrix_SetOrigin 0x4be23 hash 2cbde34d params:( Matrix M;Vector NewOrigin; );
	Matrix_SetColumn 0x4be1a hash 108b9373 params:( Matrix M;EMatrixColumns Column;Vector Value; );
	Matrix_SetAxis 0x4be12 hash 5b74f41a params:( Matrix M;EAxis Axis;Vector AxisVector; );
	Matrix_ScaleTranslation 0x4be05 hash 4a2bb4d0 params:( Matrix M;Vector Scale3D;Matrix ReturnValue; );
	Matrix_RemoveTranslation 0x4bdf8 hash 432f6576 params:( Matrix M;Matrix ReturnValue; );
	Matrix_RemoveScaling 0x4bded hash ef836ce8 params:( Matrix M;None Tolerance; );
	Matrix_Mirror 0x4bde5 hash e58abf94 params:( Matrix M;EAxis MirrorAxis;EAxis FlipAxis;Matrix ReturnValue; );
	Matrix_InverseTransformVector 0x4bdd5 hash 418bca64 params:( Matrix M;Vector V;Vector ReturnValue; );
	Matrix_InverseTransformPosition 0x4bdc4 hash 70717886 params:( Matrix M;Vector V;Vector ReturnValue; );
	Matrix_Identity 0x4bdbb hash 22b5a623 params:( Matrix ReturnValue; );
	Matrix_GetUnitAxis 0x4bdb1 hash 69e2fdae params:( Matrix M;EAxis Axis;Vector ReturnValue; );
	Matrix_GetUnitAxes 0x4bda7 hash 69e2fd2a params:( Matrix M;Vector X;Vector Y;Vector Z; );
	Matrix_GetTransposed 0x4bd9c hash 80a8c39c params:( Matrix M;Matrix ReturnValue; );
	Matrix_GetTransposeAdjoint 0x4bd8e hash 4e3669e1 params:( Matrix M;Matrix ReturnValue; );
	Matrix_GetScaleVector 0x4bd82 hash 882f6ad4 params:( Matrix M;None Tolerance;Vector ReturnValue; );
	Matrix_GetScaledAxis 0x4bd77 hash edc4977a params:( Matrix M;EAxis Axis;Vector ReturnValue; );
	Matrix_GetScaledAxes 0x4bd6c hash edc496f6 params:( Matrix M;Vector X;Vector Y;Vector Z; );
	Matrix_GetRotDeterminant 0x4bd5f hash e9a8d689 params:( Matrix M;None ReturnValue; );
	Matrix_GetRotator 0x4bd55 hash 74aeae64 params:( Matrix M;Rotator ReturnValue; );
	Matrix_GetOrigin 0x4bd4c hash b6e89741 params:( Matrix InMatrix;Vector ReturnValue; );
	Matrix_GetMaximumAxisScale 0x4bd3e hash 44f8fc34 params:( Matrix M;None ReturnValue; );
	Matrix_GetMatrixWithoutScale 0x4bd2f hash c0b9116a params:( Matrix M;None Tolerance;Matrix ReturnValue; );
	Matrix_GetInverse 0x4bd25 hash bdb3bd75 params:( Matrix M;Matrix ReturnValue; );
	Matrix_GetFrustumTopPlane 0x4bd17 hash e60daab2 params:( Matrix M;Plane OutPlane;None ReturnValue; );
	Matrix_GetFrustumRightPlane 0x4bd08 hash d7bd165d params:( Matrix M;Plane OutPlane;None ReturnValue; );
	Matrix_GetFrustumNearPlane 0x4bcfa hash 7cf70485 params:( Matrix M;Plane OutPlane;None ReturnValue; );
	Matrix_GetFrustumLeftPlane 0x4bcec hash 198ba38a params:( Matrix M;Plane OutPlane;None ReturnValue; );
	Matrix_GetFrustumFarPlane 0x4bcde hash c96f0518 params:( Matrix M;Plane OutPlane;None ReturnValue; );
	Matrix_GetFrustumBottomPlane 0x4bccf hash 50093b14 params:( Matrix M;Plane OutPlane;None ReturnValue; );
	Matrix_GetDeterminant 0x4bcc3 hash def54b4 params:( Matrix M;None ReturnValue; );
	Matrix_GetColumn 0x4bcba hash 9ab64767 params:( Matrix M;EMatrixColumns Column;Vector ReturnValue; );
	Matrix_ContainsNaN 0x4bcb0 hash 74e10375 params:( Matrix M;None ReturnValue; );
	Matrix_ConcatenateTranslation 0x4bca0 hash afde268d params:( Matrix M;Vector Translation;Matrix ReturnValue; );
	Matrix_ApplyScale 0x4bc96 hash 932a2fe7 params:( Matrix M;None Scale;Matrix ReturnValue; );
	MapRangeUnclamped 0x4bc8c hash 22daf89 params:( None Value;None InRangeA;None InRangeB;None OutRangeA;None OutRangeB;None ReturnValue; );
	MapRangeClamped 0x4bc83 hash 11b89d66 params:( None Value;None InRangeA;None InRangeB;None OutRangeA;None OutRangeB;None ReturnValue; );
	MakeVector4 0x4bc7c hash 4533ef6a params:( None X;None Y;None Z;None W;Vector4 ReturnValue; );
	MakeVector2D 0x4bc75 hash ebb1dcac params:( None X;None Y;Vector2D ReturnValue; );
	MakeVector 0x4bc6f hash 7e37e076 params:( None X;None Y;None Z;Vector ReturnValue; );
	MakeTransform 0x4bc67 hash d09bc99f params:( Vector Location;Rotator Rotation;Vector Scale;Transform ReturnValue; );
	MakeTimespan2 0x4bc5f hash 90cf896 params:( None Days;None Hours;None Minutes;None Seconds;None FractionNano;Timespan ReturnValue; );
	MakeTimespan 0x4bc58 hash 5d5d7be4 params:( None Days;None Hours;None Minutes;None Seconds;None Milliseconds;Timespan ReturnValue; );
	MakeRotFromZY 0x4bc50 hash 7c145d5f params:( Vector Z;Vector Y;Rotator ReturnValue; );
	MakeRotFromZX 0x4bc48 hash 7c145d5e params:( Vector Z;Vector X;Rotator ReturnValue; );
	MakeRotFromZ 0x4bc41 hash 60d9d446 params:( Vector Z;Rotator ReturnValue; );
	MakeRotFromYZ 0x4bc39 hash 7c145d3f params:( Vector Y;Vector Z;Rotator ReturnValue; );
	MakeRotFromYX 0x4bc31 hash 7c145d3d params:( Vector Y;Vector X;Rotator ReturnValue; );
	MakeRotFromY 0x4bc2a hash 60d9d445 params:( Vector Y;Rotator ReturnValue; );
	MakeRotFromXZ 0x4bc22 hash 7c145d1e params:( Vector X;Vector Z;Rotator ReturnValue; );
	MakeRotFromXY 0x4bc1a hash 7c145d1d params:( Vector X;Vector Y;Rotator ReturnValue; );
	MakeRotFromX 0x4bc13 hash 60d9d444 params:( Vector X;Rotator ReturnValue; );
	MakeRotator 0x4bc0c hash 29c7dd2e params:( None Roll;None Pitch;None Yaw;Rotator ReturnValue; );
	MakeRotationFromAxes 0x4bc01 hash c0392d38 params:( Vector Forward;Vector Right;Vector Up;Rotator ReturnValue; );
	MakeRelativeTransform 0x4bbf5 hash e32cdf5b params:( Transform A;Transform RelativeTo;Transform ReturnValue; );
	MakeRandomStream 0x4bbec hash d0911770 params:( None InitialSeed;RandomStream ReturnValue; );
	MakeQualifiedFrameTime 0x4bbe0 hash 4ae3d91 params:( FrameNumber Frame;FrameRate FrameRate;None SubFrame;QualifiedFrameTime ReturnValue; );
	MakePulsatingValue 0x4bbd6 hash c08ec517 params:( None InCurrentTime;None InPulsesPerSecond;None InPhase;None ReturnValue; );
	MakePlaneFromPointAndNormal 0x4bbc7 hash 23222acd params:( Vector Point;Vector Normal;Plane ReturnValue; );
	MakeFrameRate 0x4bbbf hash 6e6fe8fa params:( None Numerator;None Denominator;FrameRate ReturnValue; );
	MakeDateTime 0x4bbb8 hash 41b14830 params:( None Year;None Month;None Day;None Hour;None Minute;None Second;None Millisecond;DateTime ReturnValue; );
	MakeColor 0x4bbb2 hash 9da7bf62 params:( None R;None G;None B;None A;LinearColor ReturnValue; );
	MakeBox2D 0x4bbac hash 9d95d1e2 params:( Vector2D Min;Vector2D Max;Box2D ReturnValue; );
	MakeBox 0x4bba7 hash 1511102c params:( Vector Min;Vector Max;Box ReturnValue; );
	Loge 0x4bba4 hash 7c88a22c params:( None A;None ReturnValue; );
	Log 0x4bba1 hash b8804e7 params:( None A;None Base;None ReturnValue; );
	LinePlaneIntersection_OriginNormal 0x4bb8f hash 54fe5364 params:( Vector LineStart;Vector LineEnd;Vector PlaneOrigin;Vector PlaneNormal;None T;Vector Intersection;None ReturnValue; );
	LinePlaneIntersection 0x4bb83 hash 90590634 params:( Vector LineStart;Vector LineEnd;Plane APlane;None T;Vector Intersection;None ReturnValue; );
	LinearColorLerpUsingHSV 0x4bb76 hash a315ae09 params:( LinearColor A;LinearColor B;None Alpha;LinearColor ReturnValue; );
	LinearColorLerp 0x4bb6d hash 913618d2 params:( LinearColor A;LinearColor B;None Alpha;LinearColor ReturnValue; );
	LinearColor_Yellow 0x4bb63 hash 34bb447a params:( LinearColor ReturnValue; );
	LinearColor_White 0x4bb59 hash e26eb7ff params:( LinearColor ReturnValue; );
	LinearColor_Transparent 0x4bb4c hash b89022d0 params:( LinearColor ReturnValue; );
	LinearColor_ToRGBE 0x4bb42 hash 29b78921 params:( LinearColor InLinearColor;Color ReturnValue; );
	LinearColor_ToNewOpacity 0x4bb35 hash bbe3b084 params:( LinearColor InColor;None InOpacity;LinearColor ReturnValue; );
	LinearColor_SetTemperature 0x4bb27 hash bbfb438 params:( LinearColor InOutColor;None InTemperature; );
	LinearColor_SetRGBA 0x4bb1c hash fec838a6 params:( LinearColor InOutColor;None R;None G;None B;None A; );
	LinearColor_SetRandomHue 0x4bb0f hash 334fd56d params:( LinearColor InOutColor; );
	LinearColor_SetFromSRGB 0x4bb02 hash 6b1599ac params:( LinearColor InOutColor;Color InSRGB; );
	LinearColor_SetFromPow22 0x4baf5 hash cda336f8 params:( LinearColor InOutColor;Color InColor; );
	LinearColor_SetFromHSV 0x4bae9 hash d4b2e58f params:( LinearColor InOutColor;None H;None S;None V;None A; );
	LinearColor_Set 0x4bae0 hash 914035ca params:( LinearColor InOutColor;LinearColor InColor; );
	LinearColor_Red 0x4bad7 hash 91403179 params:( LinearColor ReturnValue; );
	LinearColor_QuantizeRound 0x4bac9 hash 25565d97 params:( LinearColor InColor;Color ReturnValue; );
	LinearColor_Quantize 0x4babe hash a4b1748f params:( LinearColor InColor;Color ReturnValue; );
	LinearColor_IsNearEqual 0x4bab1 hash a7291eb8 params:( LinearColor A;LinearColor B;None Tolerance;None ReturnValue; );
	LinearColor_Green 0x4baa7 hash e15298cf params:( LinearColor ReturnValue; );
	LinearColor_Gray 0x4ba9e hash b9408fd1 params:( LinearColor ReturnValue; );
	LinearColor_GetMin 0x4ba94 hash ac24782 params:( LinearColor InColor;None ReturnValue; );
	LinearColor_GetMax 0x4ba8a hash ac24684 params:( LinearColor InColor;None ReturnValue; );
	LinearColor_GetLuminance 0x4ba7d hash 60b8f11a params:( LinearColor InColor;None ReturnValue; );
	LinearColor_Distance 0x4ba72 hash 33fde189 params:( LinearColor C1;LinearColor C2;None ReturnValue; );
	LinearColor_Desaturated 0x4ba65 hash b9722754 params:( LinearColor InColor;None InDesaturation;LinearColor ReturnValue; );
	LinearColor_Blue 0x4ba5c hash b93dbae6 params:( LinearColor ReturnValue; );
	LinearColor_Black 0x4ba52 hash e0f4c2bb params:( LinearColor ReturnValue; );
	LessLess_VectorRotator 0x4ba46 hash b8b9bb50 params:( Vector A;Rotator B;Vector ReturnValue; );
	LessEqual_TimespanTimespan 0x4ba38 hash 94fa8f95 params:( Timespan A;Timespan B;None ReturnValue; );
	LessEqual_IntInt 0x4ba2f hash 8bdde89 params:( None A;None B;None ReturnValue; );
	LessEqual_Int64Int64 0x4ba24 hash 99826cdd params:( None A;None B;None ReturnValue; );
	LessEqual_FloatFloat 0x4ba19 hash 8a3b99ff params:( None A;None B;None ReturnValue; );
	LessEqual_DateTimeDateTime 0x4ba0b hash bf9fb42d params:( DateTime A;DateTime B;None ReturnValue; );
	LessEqual_ByteByte 0x4ba01 hash a8620fb params:( None A;None B;None ReturnValue; );
	Less_TimespanTimespan 0x4b9f5 hash 6d87b2dd params:( Timespan A;Timespan B;None ReturnValue; );
	Less_IntInt 0x4b9ee hash d3c0c7d1 params:( None A;None B;None ReturnValue; );
	Less_Int64Int64 0x4b9e5 hash 92e8ba25 params:( None A;None B;None ReturnValue; );
	Less_FloatFloat 0x4b9dc hash 83a1e747 params:( None A;None B;None ReturnValue; );
	Less_DateTimeDateTime 0x4b9d0 hash 982cd775 params:( DateTime A;DateTime B;None ReturnValue; );
	Less_ByteByte 0x4b9c8 hash a1e87c43 params:( None A;None B;None ReturnValue; );
	Lerp 0x4b9c5 hash 7c887918 params:( None A;None B;None Alpha;None ReturnValue; );
	IsZero2D 0x4b9c0 hash 48369e77 params:( Vector2D A;None ReturnValue; );
	IsPointInBoxWithTransform 0x4b9b2 hash a4ce4863 params:( Vector Point;Transform BoxWorldTransform;Vector BoxExtent;None ReturnValue; );
	IsPointInBox 0x4b9ab hash a73754b params:( Vector Point;Vector BoxOrigin;Vector BoxExtent;None ReturnValue; );
	IsNearlyZero2D 0x4b9a3 hash 6fedcf82 params:( Vector2D A;None Tolerance;None ReturnValue; );
	IsMorning 0x4b99d hash 7da9513b params:( DateTime A;None ReturnValue; );
	IsLeapYear 0x4b997 hash 1d3ed5d4 params:( None Year;None ReturnValue; );
	IsAfternoon 0x4b990 hash 4eb5dd2d params:( DateTime A;None ReturnValue; );
	InvertTransform 0x4b987 hash 5dea26f9 params:( Transform T;Transform ReturnValue; );
	InverseTransformRotation 0x4b97a hash fa60eb4d params:( Transform T;Rotator Rotation;Rotator ReturnValue; );
	InverseTransformLocation 0x4b96d hash 492e3b56 params:( Transform T;Vector Location;Vector ReturnValue; );
	InverseTransformDirection 0x4b95f hash cc57a13e params:( Transform T;Vector Direction;Vector ReturnValue; );
	InRange_IntInt 0x4b957 hash 56626f3e params:( None Value;None Min;None Max;None InclusiveMin;None InclusiveMax;None ReturnValue; );
	InRange_Int64Int64 0x4b94d hash 53ba5012 params:( None Value;None Min;None Max;None InclusiveMin;None InclusiveMax;None ReturnValue; );
	InRange_FloatFloat 0x4b943 hash 44737d34 params:( None Value;None Min;None Max;None InclusiveMin;None InclusiveMax;None ReturnValue; );
	Hypotenuse 0x4b93d hash 3abdfa99 params:( None Width;None Height;None ReturnValue; );
	HSVToRGBLinear 0x4b935 hash ce9c188f params:( LinearColor HSV;LinearColor ReturnValue; );
	HSVToRGB_Vector 0x4b92c hash 2bbc0466 params:( LinearColor HSV;LinearColor RGB; );
	HSVToRGB 0x4b927 hash b222d094 params:( None H;None S;None V;None A;LinearColor ReturnValue; );
	GridSnap_Float 0x4b91f hash 71ac09f2 params:( None Location;None GridSize;None ReturnValue; );
	GreaterGreater_VectorRotator 0x4b910 hash 36e946f6 params:( Vector A;Rotator B;Vector ReturnValue; );
	GreaterEqual_TimespanTimespan 0x4b900 hash ed7f6bc8 params:( Timespan A;Timespan B;None ReturnValue; );
	GreaterEqual_IntInt 0x4b8f5 hash 85914efc params:( None A;None B;None ReturnValue; );
	GreaterEqual_Int64Int64 0x4b8e8 hash 3aaeded0 params:( None A;None B;None ReturnValue; );
	GreaterEqual_FloatFloat 0x4b8db hash 2b680bf2 params:( None A;None B;None ReturnValue; );
	GreaterEqual_DateTimeDateTime 0x4b8cb hash 18249060 params:( DateTime A;DateTime B;None ReturnValue; );
	GreaterEqual_ByteByte 0x4b8bf hash 9f77a2e params:( None A;None B;None ReturnValue; );
	Greater_TimespanTimespan 0x4b8b2 hash 34426330 params:( Timespan A;Timespan B;None ReturnValue; );
	Greater_IntInt 0x4b8aa hash ee0c6464 params:( None A;None B;None ReturnValue; );
	Greater_Int64Int64 0x4b8a0 hash ec066838 params:( None A;None B;None ReturnValue; );
	Greater_FloatFloat 0x4b896 hash dcbf955a params:( None A;None B;None ReturnValue; );
	Greater_DateTimeDateTime 0x4b889 hash 5ee787c8 params:( DateTime A;DateTime B;None ReturnValue; );
	Greater_ByteByte 0x4b880 hash 7d8d8996 params:( None A;None B;None ReturnValue; );
	GetYear 0x4b87b hash 51252136 params:( DateTime A;None ReturnValue; );
	GetYawPitchFromVector 0x4b86f hash 754a1b5 params:( Vector InVec;None Yaw;None Pitch; );
	GetVectorArrayAverage 0x4b863 hash 44387d72 params:( Vectors Vectors;Vector ReturnValue; );
	GetUpVector 0x3e112 hash 37fc5d3d params:( Rotator InRot;Vector ReturnValue; );
	GetTotalSeconds 0x4b85a hash a8183f78 params:( Timespan A;None ReturnValue; );
	GetTotalMinutes 0x4b851 hash e459e6ee params:( Timespan A;None ReturnValue; );
	GetTotalMilliseconds 0x4b846 hash 6a17daf params:( Timespan A;None ReturnValue; );
	GetTotalHours 0x4b83e hash 3db1f11a params:( Timespan A;None ReturnValue; );
	GetTotalDays 0x4b837 hash d3508b3a params:( Timespan A;None ReturnValue; );
	GetTimeOfDay 0x4b830 hash 3647e707 params:( DateTime A;Timespan ReturnValue; );
	GetTAU 0x4b82c hash b4e1fe4f params:( None ReturnValue; );
	GetSlopeDegreeAngles 0x4b821 hash ab41b8e params:( Vector MyRightYAxis;Vector FloorNormal;Vector UpVector;None OutSlopePitchDegreeAngle;None OutSlopeRollDegreeAngle; );
	GetSeconds 0x4b81b hash 3f821e14 params:( Timespan A;None ReturnValue; );
	GetSecond 0x4b815 hash 20f46d81 params:( DateTime A;None ReturnValue; );
	GetRotated2D 0x4b80e hash eafa892e params:( Vector2D A;None AngleDeg;Vector2D ReturnValue; );
	GetRightVector 0x3e0d2 hash e42dab96 params:( Rotator InRot;Vector ReturnValue; );
	GetReflectionVector 0x4b803 hash f8388b23 params:( Vector Direction;Vector SurfaceNormal;Vector ReturnValue; );
	GetPointDistanceToSegment 0x4b7f5 hash 7e06f670 params:( Vector Point;Vector SegmentStart;Vector SegmentEnd;None ReturnValue; );
	GetPointDistanceToLine 0x4b7e9 hash 63227e05 params:( Vector Point;Vector LineOrigin;Vector LineDirection;None ReturnValue; );
	GetPI 0x4b7e5 hash d3d263e params:( None ReturnValue; );
	GetMonth 0x4b7e0 hash 74f5d5ab params:( DateTime A;None ReturnValue; );
	GetMinutes 0x4b7da hash 7bc3c58a params:( Timespan A;None ReturnValue; );
	GetMinute 0x4b7d4 hash 1343fe37 params:( DateTime A;None ReturnValue; );
	GetMinElement 0x4b7cc hash 739f1a13 params:( Vector A;None ReturnValue; );
	GetMin2D 0x4b7c7 hash 74f282bf params:( Vector2D A;None ReturnValue; );
	GetMilliseconds 0x4b7be hash eccaddcb params:( Timespan A;None ReturnValue; );
	GetMillisecond 0x4b7b6 hash 35b89258 params:( DateTime A;None ReturnValue; );
	GetMaxElement 0x4b7ae hash a4de2d5 params:( Vector A;None ReturnValue; );
	GetMax2D 0x4b7a9 hash 74ee4a41 params:( Vector2D A;None ReturnValue; );
	GetHours 0x4b7a4 hash 749b78b6 params:( Timespan A;None ReturnValue; );
	GetHour12 0x4b79e hash 80a8726 params:( DateTime A;None ReturnValue; );
	GetHour 0x4b799 hash 511bfbe3 params:( DateTime A;None ReturnValue; );
	GetForwardVector 0x3e09d hash d0b49dcd params:( Rotator InRot;Vector ReturnValue; );
	GetDuration 0x41182 hash 49919d4b params:( Timespan A;Timespan ReturnValue; );
	GetDirectionUnitVector 0x4b78d hash 80363999 params:( Vector From;Vector To;Vector ReturnValue; );
	GetDays 0x4b788 hash 51198f56 params:( Timespan A;None ReturnValue; );
	GetDayOfYear 0x4b781 hash f6752a29 params:( DateTime A;None ReturnValue; );
	GetDay 0x4b77d hash b4e1be83 params:( DateTime A;None ReturnValue; );
	GetDate 0x4b778 hash 51198ea3 params:( DateTime A;DateTime ReturnValue; );
	GetAzimuthAndElevation 0x4b76c hash f63d9b81 params:( Vector InDirection;Transform ReferenceFrame;None Azimuth;None Elevation; );
	GetAxes 0x4b767 hash 51184976 params:( Rotator A;Vector X;Vector Y;Vector Z; );
	GetAbsMax2D 0x4b760 hash cf1aa777 params:( Vector2D A;None ReturnValue; );
	GetAbs2D 0x4b75b hash 74159b51 params:( Vector2D A;Vector2D ReturnValue; );
	FTruncVector 0x4b754 hash a0349a8a params:( Vector InVector;IntVector ReturnValue; );
	FTrunc64 0x4b74f hash 6a3eb781 params:( None A;None ReturnValue; );
	FTrunc 0x4b74b hash b158ae97 params:( None A;None ReturnValue; );
	FromSeconds 0x4b744 hash 316d8ee8 params:( None Seconds;Timespan ReturnValue; );
	FromMinutes 0x4b73d hash 6daf365e params:( None Minutes;Timespan ReturnValue; );
	FromMilliseconds 0x4b734 hash f9e1f31f params:( None Milliseconds;Timespan ReturnValue; );
	FromHours 0x4b72e hash 658ca48a params:( None Hours;Timespan ReturnValue; );
	FromDays 0x4b729 hash 67ea90aa params:( None Days;Timespan ReturnValue; );
	Fraction 0x4b724 hash 46a7d5bb params:( None A;None ReturnValue; );
	FMod 0x4b721 hash 7c84c84b params:( None Dividend;None Divisor;None Remainder;None ReturnValue; );
	FMin 0x4b71e hash 7c84c78f params:( None A;None B;None ReturnValue; );
	FMax 0x4b71b hash 7c84c691 params:( None A;None B;None ReturnValue; );
	FloatSpringInterp 0x4b711 hash f617cf60 params:( None Current;None Target;FloatSpringState SpringState;None Stiffness;None CriticalDampingFactor;None DeltaTime;None Mass;None ReturnValue; );
	FixedTurn 0x4b70b hash bb4ae63e params:( None InCurrent;None InDesired;None InDeltaRate;None ReturnValue; );
	FInterpTo_Constant 0x4b701 hash b30f1309 params:( None Current;None Target;None DeltaTime;None InterpSpeed;None ReturnValue; );
	FInterpTo 0x4b6fb hash 5469bec0 params:( None Current;None Target;None DeltaTime;None InterpSpeed;None ReturnValue; );
	FInterpEaseInOut 0x4b6f2 hash f82c63aa params:( None A;None B;None Alpha;None Exponent;None ReturnValue; );
	FindNearestPointsOnLineSegments 0x4b6e1 hash 3cbbd680 params:( Vector Segment1Start;Vector Segment1End;Vector Segment2Start;Vector Segment2End;Vector Segment1Point;Vector Segment2Point; );
	FindLookAtRotation 0x4b6d7 hash a5b6ac80 params:( Vector Start;Vector Target;Rotator ReturnValue; );
	FindClosestPointOnSegment 0x4b6c9 hash 688c3f1d params:( Vector Point;Vector SegmentStart;Vector SegmentEnd;Vector ReturnValue; );
	FindClosestPointOnLine 0x4b6bd hash 2f4bbdd2 params:( Vector Point;Vector LineOrigin;Vector LineDirection;Vector ReturnValue; );
	FFloor64 0x4b6b8 hash 2624aa57 params:( None A;None ReturnValue; );
	FFloor 0x4b6b4 hash b057f3ed params:( None A;None ReturnValue; );
	FClamp 0x4b6b0 hash b0216e98 params:( None Value;None Min;None Max;None ReturnValue; );
	FCeil64 0x4b6ab hash b3d4ed92 params:( None A;None ReturnValue; );
	FCeil 0x4b6a7 hash d182c68 params:( None A;None ReturnValue; );
	Exp 0x4b6a4 hash b87e852 params:( None A;None ReturnValue; );
	EqualExactly_VectorVector 0x4b696 hash 5e6ab75c params:( Vector A;Vector B;None ReturnValue; );
	EqualExactly_Vector4Vector4 0x4b687 hash c40799e4 params:( Vector4 A;Vector4 B;None ReturnValue; );
	EqualExactly_Vector2DVector2D 0x4b677 hash 464bc008 params:( Vector2D A;Vector2D B;None ReturnValue; );
	EqualEqual_VectorVector 0x4b66a hash 9b568f5a params:( Vector A;Vector B;None ErrorTolerance;None ReturnValue; );
	EqualEqual_Vector4Vector4 0x4b65c hash eb496962 params:( Vector4 A;Vector4 B;None ErrorTolerance;None ReturnValue; );
	EqualEqual_Vector2DVector2D 0x4b64d hash 453f6706 params:( Vector2D A;Vector2D B;None ErrorTolerance;None ReturnValue; );
	EqualEqual_TransformTransform 0x4b63d hash d48797ac params:( Transform A;Transform B;None ReturnValue; );
	EqualEqual_TimespanTimespan 0x4b62e hash 68fe5d76 params:( Timespan A;Timespan B;None ReturnValue; );
	EqualEqual_RotatorRotator 0x4b620 hash 458ba06a params:( Rotator A;Rotator B;None ErrorTolerance;None ReturnValue; );
	EqualEqual_QuatQuat 0x4b615 hash 4726b5ea params:( Quat A;Quat B;None Tolerance;None ReturnValue; );
	EqualEqual_ObjectObject 0x4b608 hash 73efe922 params:( Object A;Object B;None ReturnValue; );
	EqualEqual_NameName 0x4b5fd hash 99c0f776 params:( None A;None B;None ReturnValue; );
	EqualEqual_MatrixMatrix 0x4b5f0 hash 58251bde params:( Matrix A;Matrix B;None Tolerance;None ReturnValue; );
	EqualEqual_LinearColorLinearColor 0x4b5de hash 5a8fc28 params:( LinearColor A;LinearColor B;None ReturnValue; );
	EqualEqual_IntInt 0x4b5d4 hash f8efaf2a params:( None A;None B;None ReturnValue; );
	EqualEqual_Int64Int64 0x4b5c8 hash f97da5fe params:( None A;None B;None ReturnValue; );
	EqualEqual_FloatFloat 0x4b5bc hash ea36d320 params:( None A;None B;None ReturnValue; );
	EqualEqual_DateTimeDateTime 0x4b5ad hash 93a3820e params:( DateTime A;DateTime B;None ReturnValue; );
	EqualEqual_ClassClass 0x4b5a1 hash 598a15a0 params:( Class A;Class B;None ReturnValue; );
	EqualEqual_ByteByte 0x4b596 hash ce6e9ddc params:( None A;None B;None ReturnValue; );
	EqualEqual_BoolBool 0x4b58b hash c17cf38c params:( None A;None B;None ReturnValue; );
	Ease 0x4b588 hash 7c849183 params:( None A;None B;None Alpha;EEasingFunc EasingFunc;None BlendExp;None Steps;None ReturnValue; );
	DynamicWeightedMovingAverage_FVector 0x4b575 hash 3ffb821e params:( Vector CurrentSample;Vector PreviousSample;None MaxDistance;None MinWeight;None MaxWeight;Vector ReturnValue; );
	DynamicWeightedMovingAverage_FRotator 0x4b561 hash 23ffb3d6 params:( Rotator CurrentSample;Rotator PreviousSample;None MaxDistance;None MinWeight;None MaxWeight;Rotator ReturnValue; );
	DynamicWeightedMovingAverage_Float 0x4b54f hash 94e932bb params:( None CurrentSample;None PreviousSample;None MaxDistance;None MinWeight;None MaxWeight;None ReturnValue; );
	DotProduct2D 0x4b548 hash efb9b023 params:( Vector2D A;Vector2D B;None ReturnValue; );
	Dot_VectorVector 0x4b53f hash 500f0f1 params:( Vector A;Vector B;None ReturnValue; );
	Divide_VectorVector 0x4b534 hash 132605df params:( Vector A;Vector B;Vector ReturnValue; );
	Divide_VectorInt 0x4b52b hash 419623d7 params:( Vector A;None B;Vector ReturnValue; );
	Divide_VectorFloat 0x4b521 hash ff770b02 params:( Vector A;None B;Vector ReturnValue; );
	Divide_Vector4Vector4 0x4b515 hash 94d09527 params:( Vector4 A;Vector4 B;Vector4 ReturnValue; );
	Divide_Vector2DVector2D 0x4b508 hash 6d40980b params:( Vector2D A;Vector2D B;Vector2D ReturnValue; );
	Divide_Vector2DFloat 0x4b4fd hash 55aace78 params:( Vector2D A;None B;Vector2D ReturnValue; );
	Divide_TimespanFloat 0x4b4f2 hash f112b0b0 params:( Timespan A;None Scalar;Timespan ReturnValue; );
	Divide_LinearColorLinearColor 0x4b4e2 hash d0ee1ced params:( LinearColor A;LinearColor B;LinearColor ReturnValue; );
	Divide_IntInt 0x4b4da hash b0dde5ef params:( None A;None B;None ReturnValue; );
	Divide_Int64Int64 0x4b4d0 hash d783b743 params:( None A;None B;None ReturnValue; );
	Divide_FloatFloat 0x4b4c6 hash c83ce465 params:( None A;None B;None ReturnValue; );
	Divide_ByteByte 0x4b4bd hash 3ac599e1 params:( None A;None B;None ReturnValue; );
	DistanceSquared2D 0x4b4b3 hash 1a042f3b params:( Vector2D v1;Vector2D v2;None ReturnValue; );
	Distance2D 0x4b4ad hash fcbfd846 params:( Vector2D v1;Vector2D v2;None ReturnValue; );
	DegTan 0x4b4a9 hash addb67b8 params:( None A;None ReturnValue; );
	DegSin 0x4b4a5 hash addb647f params:( None A;None ReturnValue; );
	DegreesToRadians 0x4b49c hash 8fb0e109 params:( None A;None ReturnValue; );
	DegCos 0x4b498 hash addb213a params:( None A;None ReturnValue; );
	DegAtan2 0x4b493 hash 9106a66b params:( None Y;None X;None ReturnValue; );
	DegAtan 0x4b48e hash 693e4319 params:( None A;None ReturnValue; );
	DegAsin 0x4b489 hash 693e3fe0 params:( None A;None ReturnValue; );
	DegAcos 0x4b484 hash 693dfc9b params:( None A;None ReturnValue; );
	DaysInYear 0x4b47e hash 5d6bcc1e params:( None Year;None ReturnValue; );
	DaysInMonth 0x4b477 hash a11dd93 params:( None Year;None Month;None ReturnValue; );
	DateTimeMinValue 0x4b46e hash 1d5f0cb3 params:( DateTime ReturnValue; );
	DateTimeMaxValue 0x4b465 hash cce0bcf5 params:( DateTime ReturnValue; );
	DateTimeFromString 0x4b45b hash a40f567d params:( None DateTimeString;DateTime Result;None ReturnValue; );
	DateTimeFromIsoString 0x4b44f hash fa3216c8 params:( None IsoString;DateTime Result;None ReturnValue; );
	CrossProduct2D 0x4b447 hash c7e72926 params:( Vector2D A;Vector2D B;None ReturnValue; );
	Cross_VectorVector 0x4b43d hash b9793374 params:( Vector A;Vector B;Vector ReturnValue; );
	CreateVectorFromYawPitch 0x4b430 hash 1821e129 params:( None Yaw;None Pitch;None Length;Vector ReturnValue; );
	Cos 0x4b42d hash b87deaa params:( None A;None ReturnValue; );
	ConvertTransformToRelative 0x4b41f hash 165c5821 params:( Transform Transform;Transform ParentTransform;Transform ReturnValue; );
	Conv_VectorToVector2D 0x4b413 hash da286659 params:( Vector InVector;Vector2D ReturnValue; );
	Conv_VectorToTransform 0x4b407 hash 8de388ec params:( Vector InLocation;Transform ReturnValue; );
	Conv_VectorToRotator 0x4b3fc hash 5f8d653b params:( Vector InVec;Rotator ReturnValue; );
	Conv_VectorToQuaterion 0x4b3f0 hash 23bcbe8 params:( Vector InVec;Quat ReturnValue; );
	Conv_VectorToLinearColor 0x4b3e3 hash 90edc20a params:( Vector InVec;LinearColor ReturnValue; );
	Conv_Vector4ToVector 0x4b3d8 hash 620764b7 params:( Vector4 InVector4;Vector ReturnValue; );
	Conv_Vector4ToRotator 0x4b3cc hash 8787e98f params:( Vector4 InVec;Rotator ReturnValue; );
	Conv_Vector4ToQuaterion 0x4b3bf hash 12e8b53c params:( Vector4 InVec;Quat ReturnValue; );
	Conv_Vector2DToVector 0x4b3b3 hash c9b3d6d9 params:( Vector2D InVector2D;None Z;Vector ReturnValue; );
	Conv_Vector2DToIntPoint 0x4b3a6 hash e0956d5b params:( Vector2D InVector2D;IntPoint ReturnValue; );
	Conv_TransformToMatrix 0x4b39a hash 3b43f2e params:( Transform Transform;Matrix ReturnValue; );
	Conv_RotatorToVector 0x4b38f hash 8d7ed67b params:( Rotator InRot;Vector ReturnValue; );
	Conv_RotatorToTransform 0x4b382 hash 6909bd84 params:( Rotator InRotator;Transform ReturnValue; );
	Conv_MatrixToTransform 0x4b376 hash de1dcd2e params:( Matrix InMatrix;Transform ReturnValue; );
	Conv_MatrixToRotator 0x4b36b hash 9085b0fd params:( Matrix InMatrix;Rotator ReturnValue; );
	Conv_LinearColorToVector 0x4b35e hash a1ee874a params:( LinearColor InLinearColor;Vector ReturnValue; );
	Conv_LinearColorToColor 0x4b351 hash 96fadbb6 params:( LinearColor InLinearColor;None InUseSRGB;Color ReturnValue; );
	Conv_IntVectorToVector 0x4b345 hash 1419a50e params:( IntVector InIntVector;Vector ReturnValue; );
	Conv_IntToIntVector 0x4b33a hash 2881c406 params:( None inInt;IntVector ReturnValue; );
	Conv_IntToInt64 0x4b331 hash bada82fd params:( None inInt;None ReturnValue; );
	Conv_IntToFloat 0x4b328 hash baa3113e params:( None inInt;None ReturnValue; );
	Conv_IntToByte 0x4b320 hash 62bd25fc params:( None inInt;None ReturnValue; );
	Conv_IntToBool 0x4b318 hash 62bcfad4 params:( None inInt;None ReturnValue; );
	Conv_FloatToVector 0x4b30e hash dd41146 params:( None InFloat;Vector ReturnValue; );
	Conv_FloatToLinearColor 0x4b301 hash f0a42e4d params:( None InFloat;LinearColor ReturnValue; );
	Conv_ColorToLinearColor 0x4b2f4 hash 31b78996 params:( Color InColor;LinearColor ReturnValue; );
	Conv_ByteToInt 0x4b2ec hash 800131dc params:( None InByte;None ReturnValue; );
	Conv_ByteToFloat 0x4b2e3 hash 84ddae47 params:( None InByte;None ReturnValue; );
	Conv_BoolToInt 0x4b2db hash d4dfcdb4 params:( None InBool;None ReturnValue; );
	Conv_BoolToFloat 0x4b2d2 hash 8bd2a01f params:( None InBool;None ReturnValue; );
	Conv_BoolToByte 0x4b2c9 hash 70d5dcbd params:( None InBool;None ReturnValue; );
	ComposeTransforms 0x4b2bf hash 86fb02ea params:( Transform A;Transform B;Transform ReturnValue; );
	ComposeRotators 0x4b2b6 hash f7f3ea59 params:( Rotator A;Rotator B;Rotator ReturnValue; );
	ClassIsChildOf 0x4b2ae hash c8b64d30 params:( Class TestClass;Class ParentClass;None ReturnValue; );
	ClampVectorSize 0x4b2a5 hash 31c8eee0 params:( Vector A;None Min;None Max;Vector ReturnValue; );
	ClampInt64 0x4b29f hash bf181847 params:( None Value;None Min;None Max;None ReturnValue; );
	ClampAxis 0x4b299 hash 4b97a807 params:( None Angle;None ReturnValue; );
	ClampAxes2D 0x4b292 hash 901f9af9 params:( Vector2D A;None MinAxisVal;None MaxAxisVal;Vector2D ReturnValue; );
	ClampAngle 0x4b28c hash be872419 params:( None AngleDegrees;None MinAngleDegrees;None MaxAngleDegrees;None ReturnValue; );
	Clamp 0x4b288 hash cf84df2 params:( None Value;None Min;None Max;None ReturnValue; );
	CInterpTo 0x4b282 hash f6f46bbd params:( LinearColor Current;LinearColor Target;None DeltaTime;None InterpSpeed;LinearColor ReturnValue; );
	BreakVector4 0x4b27b hash a46a0931 params:( Vector4 InVec;None X;None Y;None Z;None W; );
	BreakVector2D 0x4b273 hash 31ab2f53 params:( Vector2D InVec;None X;None Y; );
	BreakVector 0x4b26c hash 909e5d5d params:( Vector InVec;None X;None Y;None Z; );
	BreakTransform 0x4b264 hash d5bf7126 params:( Transform InTransform;Vector Location;Rotator Rotation;Vector Scale; );
	BreakTimespan2 0x4b25c hash e30a01d params:( Timespan InTimespan;None Days;None Hours;None Minutes;None Seconds;None FractionNano; );
	BreakTimespan 0x4b254 hash a356ce8b params:( Timespan InTimespan;None Days;None Hours;None Minutes;None Seconds;None Milliseconds; );
	BreakRotIntoAxes 0x4b24b hash 4bea3a0a params:( Rotator InRot;Vector X;Vector Y;Vector Z; );
	BreakRotator 0x4b244 hash 88fdf6f5 params:( Rotator InRot;None Roll;None Pitch;None Yaw; );
	BreakRandomStream 0x4b23a hash 42b16597 params:( RandomStream InRandomStream;None InitialSeed; );
	BreakQualifiedFrameTime 0x4b22d hash 87704cf8 params:( QualifiedFrameTime InFrameTime;FrameNumber Frame;FrameRate FrameRate;None SubFrame; );
	BreakFrameRate 0x4b225 hash 73939081 params:( FrameRate InFrameRate;None Numerator;None Denominator; );
	BreakDateTime 0x4b21d hash 87aa9ad7 params:( DateTime InDateTime;None Year;None Month;None Day;None Hour;None Minute;None Second;None Millisecond; );
	BreakColor 0x4b217 hash 7f2ebb69 params:( LinearColor InColor;None R;None G;None B;None A; );
	BooleanXOR 0x4b211 hash 9f2b5b1e params:( None A;None B;None ReturnValue; );
	BooleanOR 0x4b20b hash ce853026 params:( None A;None B;None ReturnValue; );
	BooleanNOR 0x4b205 hash 9f2b3094 params:( None A;None B;None ReturnValue; );
	BooleanNAND 0x4b1fe hash 84910746 params:( None A;None B;None ReturnValue; );
	BooleanAND 0x4b1f8 hash 9f2af918 params:( None A;None B;None ReturnValue; );
	BMin 0x4b1f5 hash 7c82960b params:( None A;None B;None ReturnValue; );
	BMax 0x4b1f2 hash 7c82950d params:( None A;None B;None ReturnValue; );
	Atan2 0x4b1ee hash cd87fdb params:( None Y;None X;None ReturnValue; );
	Atan 0x4b1eb hash 7c82ae89 params:( None A;None ReturnValue; );
	Asin 0x4b1e8 hash 7c82ab50 params:( None A;None ReturnValue; );
	And_IntInt 0x4b1e2 hash d6b8f90d params:( None A;None B;None ReturnValue; );
	And_Int64Int64 0x4b1da hash cccf2961 params:( None A;None B;None ReturnValue; );
	Add_VectorVector 0x4b1d1 hash 284c2df3 params:( Vector A;Vector B;Vector ReturnValue; );
	Add_VectorInt 0x4b1c9 hash 7e8b246b params:( Vector A;None B;Vector ReturnValue; );
	Add_VectorFloat 0x4b1c0 hash 4dae8096 params:( Vector A;None B;Vector ReturnValue; );
	Add_Vector4Vector4 0x4b1b6 hash 8c21123b params:( Vector4 A;Vector4 B;Vector4 ReturnValue; );
	Add_Vector2DVector2D 0x4b1ab hash 7aa4aa1f params:( Vector2D A;Vector2D B;Vector2D ReturnValue; );
	Add_Vector2DFloat 0x4b1a1 hash f95f90c params:( Vector2D A;None B;Vector2D ReturnValue; );
	Add_TimespanTimespan 0x4b196 hash 9e63a08f params:( Timespan A;Timespan B;Timespan ReturnValue; );
	Add_QuatQuat 0x4b18f hash 86caf003 params:( Quat A;Quat B;Quat ReturnValue; );
	Add_MatrixMatrix 0x4b186 hash e51aba77 params:( Matrix A;Matrix B;Matrix ReturnValue; );
	Add_LinearColorLinearColor 0x4b178 hash f5246e01 params:( LinearColor A;LinearColor B;LinearColor ReturnValue; );
	Add_IntInt 0x4b172 hash 49dc8f03 params:( None A;None B;None ReturnValue; );
	Add_Int64Int64 0x4b16a hash b318ca57 params:( None A;None B;None ReturnValue; );
	Add_FloatFloat 0x4b162 hash a3d1f779 params:( None A;None B;None ReturnValue; );
	Add_DateTimeTimespan 0x4b157 hash e4b4f8db params:( DateTime A;Timespan B;DateTime ReturnValue; );
	Add_DateTimeDateTime 0x4b14c hash c908c527 params:( DateTime A;DateTime B;DateTime ReturnValue; );
	Add_ByteByte 0x4b145 hash e12d7f5 params:( None A;None B;None ReturnValue; );
	Acos 0x4b142 hash 7c82680b params:( None A;None ReturnValue; );
	Abs_Int64 0x4b13c hash 6e535b8f params:( None A;None ReturnValue; );
	Abs_Int 0x4b137 hash 7c38f725 params:( None A;None ReturnValue; );
	Abs 0x4b134 hash b87d47b params:( None A;None ReturnValue; );
};


instance 1ab5e15fb80
class KismetNodeHelperLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	MarkBit 0x4c9ee hash 1593052f params:( None Data;None Index; );
	HasUnmarkedBit 0x4c9e6 hash 316ebdb7 params:( None Data;None NumBits;None ReturnValue; );
	HasMarkedBit 0x4c9df hash 4cb73e94 params:( None Data;None NumBits;None ReturnValue; );
	GetValidValue 0x4c9d7 hash db086312 params:( Enum Enum;None EnumeratorValue;None ReturnValue; );
	GetUnmarkedBit 0x4c9cf hash 649e077b params:( None Data;None StartIdx;None NumBits;None bRandom;None ReturnValue; );
	GetRandomUnmarkedBit 0x4c9c4 hash 910972dc params:( None Data;None StartIdx;None NumBits;None ReturnValue; );
	GetFirstUnmarkedBit 0x4c9b9 hash aba2b8e3 params:( None Data;None StartIdx;None NumBits;None ReturnValue; );
	GetEnumeratorValueFromIndex 0x4c9aa hash b981fbd0 params:( Enum Enum;None EnumeratorIndex;None ReturnValue; );
	GetEnumeratorUserFriendlyName 0x4c99a hash 58886444 params:( Enum Enum;None EnumeratorValue;None ReturnValue; );
	GetEnumeratorName 0x4c990 hash 22e9f008 params:( Enum Enum;None EnumeratorValue;None ReturnValue; );
	ClearBit 0x4c98b hash bd339cab params:( None Data;None Index; );
	ClearAllBits 0x4c984 hash eb527257 params:( None Data; );
	BitIsMarked 0x4c97d hash 6bf11594 params:( None Data;None Index;None ReturnValue; );
};


instance 1ab5e15f940
class KismetRenderingLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SetCastInsetShadowForAllAttachments 0x4caea hash ecdcf601 params:( PrimitiveComponent PrimitiveComponent;None bCastInsetShadow;None bLightAttachmentsAsGroup; );
	RenderTargetCreateStaticTexture2DEditorOnly 0x4cad3 hash d60c65f8 params:( TextureRenderTarget2D RenderTarget;None Name;TextureCompressionSettings CompressionSettings;TextureMipGenSettings MipSettings;Texture2D ReturnValue; );
	ReleaseRenderTarget2D 0x4cac7 hash 9cdda1c3 params:( TextureRenderTarget2D TextureRenderTarget; );
	ReadRenderTargetUV 0x4cabd hash 9f068b73 params:( Object WorldContextObject;TextureRenderTarget2D TextureRenderTarget;None U;None V;Color ReturnValue; );
	ReadRenderTargetRawUV 0x4cab1 hash d58f7ebd params:( Object WorldContextObject;TextureRenderTarget2D TextureRenderTarget;None U;None V;LinearColor ReturnValue; );
	ReadRenderTargetRawPixel 0x4caa4 hash 64605e34 params:( Object WorldContextObject;TextureRenderTarget2D TextureRenderTarget;None X;None Y;LinearColor ReturnValue; );
	ReadRenderTargetPixel 0x4ca98 hash d56fb72a params:( Object WorldContextObject;TextureRenderTarget2D TextureRenderTarget;None X;None Y;Color ReturnValue; );
	MakeSkinWeightInfo 0x4ca8e hash 18ca622c params:( None Bone0;None Weight0;None Bone1;None Weight1;None Bone2;None Weight2;None Bone3;None Weight3;SkelMeshSkinWeightInfo ReturnValue; );
	ImportFileAsTexture2D 0x4ca82 hash f89b453b params:( Object WorldContextObject;None Filename;Texture2D ReturnValue; );
	ImportBufferAsTexture2D 0x4ca75 hash 39cab7f5 params:( Object WorldContextObject;Buffer Buffer;Texture2D ReturnValue; );
	ExportTexture2D 0x4ca6c hash 27e3494e params:( Object WorldContextObject;Texture2D Texture;None FilePath;None Filename; );
	ExportRenderTarget 0x4ca62 hash aec6746e params:( Object WorldContextObject;TextureRenderTarget2D TextureRenderTarget;None FilePath;None Filename; );
	EndDrawCanvasToRenderTarget 0x4ca53 hash 65d7dd90 params:( Object WorldContextObject;DrawToRenderTargetContext Context; );
	DrawMaterialToRenderTarget 0x4ca45 hash db47546c params:( Object WorldContextObject;TextureRenderTarget2D TextureRenderTarget;MaterialInterface Material; );
	CreateRenderTarget2D 0x4ca3a hash 1259656 params:( Object WorldContextObject;None Width;None Height;ETextureRenderTargetFormat Format;LinearColor ClearColor;None bAutoGenerateMipMaps;TextureRenderTarget2D ReturnValue; );
	ConvertRenderTargetToTexture2DEditorOnly 0x4ca25 hash ffa2d500 params:( Object WorldContextObject;TextureRenderTarget2D RenderTarget;Texture2D Texture; );
	ClearRenderTarget2D 0x4ca1a hash d9414a69 params:( Object WorldContextObject;TextureRenderTarget2D TextureRenderTarget;LinearColor ClearColor; );
	BreakSkinWeightInfo 0x4ca0f hash 9436d613 params:( SkelMeshSkinWeightInfo InWeight;None Bone0;None Weight0;None Bone1;None Weight1;None Bone2;None Weight2;None Bone3;None Weight3; );
	BeginDrawCanvasToRenderTarget 0x4c9ff hash bf75385e params:( Object WorldContextObject;TextureRenderTarget2D TextureRenderTarget;Canvas Canvas;Vector2D Size;DrawToRenderTargetContext Context; );
};


instance 1ab5e15f700
class KismetStringLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	TrimTrailing 0x4cd10 hash c40e231b params:( None SourceString;None ReturnValue; );
	Trim 0x4cd0d hash 7c8d1241 params:( None SourceString;None ReturnValue; );
	ToUpper 0x4cd08 hash 4f09a1b4 params:( None SourceString;None ReturnValue; );
	ToLower 0x4cd03 hash 4e665691 params:( None SourceString;None ReturnValue; );
	TimeSecondsToString 0x4ccf8 hash 5bd930dd params:( None InSeconds;None ReturnValue; );
	StartsWith 0x4ccf2 hash 30c7c682 params:( None SourceString;None InPrefix;ESearchCase SearchCase;None ReturnValue; );
	Split 0x490b9 hash e1c35d1 params:( None SourceString;None InStr;None LeftS;None RightS;ESearchCase SearchCase;ESearchDir SearchDir;None ReturnValue; );
	RightPad 0x4cced hash b34aaf98 params:( None SourceString;None ChCount;None ReturnValue; );
	RightChop 0x4cce7 hash 1c99a14d params:( None SourceString;None Count;None ReturnValue; );
	Right 0xb9b5 hash e063143 params:( None SourceString;None Count;None ReturnValue; );
	Reverse 0x3fb7d hash a010bca1 params:( None SourceString;None ReturnValue; );
	ReplaceInline 0x4ccdf hash c816fe20 params:( None SourceString;None SearchText;None ReplacementText;ESearchCase SearchCase;None ReturnValue; );
	Replace 0x4ccda hash 9fa7b5e1 params:( None SourceString;None From;None To;ESearchCase SearchCase;None ReturnValue; );
	ParseIntoArray 0x4ccd2 hash 95995e79 params:( None SourceString;None Delimiter;None CullEmptyStrings;ReturnValue ReturnValue; );
	NotEqual_StrStr 0x4ccc9 hash 1302d59f params:( None A;None B;None ReturnValue; );
	NotEqual_StriStri 0x4ccbf hash e08ad391 params:( None A;None B;None ReturnValue; );
	Mid 0x4ccbc hash b88085f params:( None SourceString;None Start;None Count;None ReturnValue; );
	MatchesWildcard 0x4ccb3 hash 8190d74 params:( None SourceString;None Wildcard;ESearchCase SearchCase;None ReturnValue; );
	Len 0x4ccb0 hash b8803a4 params:( None S;None ReturnValue; );
	LeftPad 0x4ccab hash d1196ec5 params:( None SourceString;None ChCount;None ReturnValue; );
	LeftChop 0x4cca6 hash f440461a params:( None SourceString;None Count;None ReturnValue; );
	Left 0xb9b0 hash 7c887790 params:( None SourceString;None Count;None ReturnValue; );
	JoinStringArray 0x4cc9d hash f41639eb params:( SourceArray SourceArray;None Separator;None ReturnValue; );
	IsNumeric 0x4cc97 hash d8433d74 params:( None SourceString;None ReturnValue; );
	GetSubstring 0x4cc90 hash a96dcb46 params:( None SourceString;None StartIndex;None Length;None ReturnValue; );
	GetCharacterAsNumber 0x4cc85 hash c871ba4f params:( None SourceString;None Index;None ReturnValue; );
	GetCharacterArrayFromString 0x4cc76 hash 1cbf4f7c params:( None SourceString;ReturnValue ReturnValue; );
	FindSubstring 0x4cc6e hash 61aea947 params:( None SearchIn;None Substring;None bUseCase;None bSearchFromEnd;None StartPosition;None ReturnValue; );
	EqualEqual_StrStr 0x4cc64 hash 10aeeb06 params:( None A;None B;None ReturnValue; );
	EqualEqual_StriStri 0x4cc59 hash f991deb8 params:( None A;None B;None ReturnValue; );
	EndsWith 0x4cc54 hash 2e8e296b params:( None SourceString;None InSuffix;ESearchCase SearchCase;None ReturnValue; );
	CullArray 0x4cc4e hash e31bdbf4 params:( None SourceString;inArray inArray;None ReturnValue; );
	Conv_VectorToString 0x4cc43 hash ee4e1b47 params:( Vector InVec;None ReturnValue; );
	Conv_Vector2dToString 0x4cc37 hash 5359f75d params:( Vector2D InVec;None ReturnValue; );
	Conv_TransformToString 0x4cc2b hash 1309c610 params:( Transform InTrans;None ReturnValue; );
	Conv_StringToVector2D 0x4cc1f hash 6a7733bd params:( None inString;Vector2D OutConvertedVector2D;None OutIsValid; );
	Conv_StringToVector 0x4cc14 hash 6ea3f47 params:( None inString;Vector OutConvertedVector;None OutIsValid; );
	Conv_StringToRotator 0x4cc09 hash c8c6161f params:( None inString;Rotator OutConvertedRotator;None OutIsValid; );
	Conv_StringToName 0x4cbff hash 4773e435 params:( None inString;None ReturnValue; );
	Conv_StringToInt 0x4cbf6 hash d39e963f params:( None inString;None ReturnValue; );
	Conv_StringToFloat 0x4cbec hash 3565b76a params:( None inString;None ReturnValue; );
	Conv_StringToColor 0x4cbe2 hash 35310813 params:( None inString;LinearColor OutConvertedColor;None OutIsValid; );
	Conv_RotatorToString 0x4cbd7 hash 8796d6df params:( Rotator InRot;None ReturnValue; );
	Conv_ObjectToString 0x4cbcc hash a0226eab params:( Object InObj;None ReturnValue; );
	Conv_NameToString 0x4cbc2 hash ede67cb5 params:( None InName;None ReturnValue; );
	Conv_MatrixToString 0x4cbb7 hash 73aaf6c9 params:( Matrix InMatrix;None ReturnValue; );
	Conv_IntVectorToString 0x4cbab hash e31a572 params:( IntVector InIntVec;None ReturnValue; );
	Conv_IntToString 0x4cba2 hash 2dead3ff params:( None inInt;None ReturnValue; );
	Conv_FloatToString 0x4cb98 hash 7ec11aa params:( None InFloat;None ReturnValue; );
	Conv_ColorToString 0x4cb8e hash 6c2dfb53 params:( LinearColor InColor;None ReturnValue; );
	Conv_ByteToString 0x4cb84 hash 3f791228 params:( None InByte;None ReturnValue; );
	Conv_BoolToString 0x4cb7a hash 250c3f00 params:( None InBool;None ReturnValue; );
	Contains 0x4cb75 hash ba6fe644 params:( None SearchIn;None Substring;None bUseCase;None bSearchFromEnd;None ReturnValue; );
	Concat_StrStr 0x4cb6d hash d6335dee params:( None A;None B;None ReturnValue; );
	BuildString_Vector2d 0x4cb62 hash 855cd4b4 params:( None AppendTo;None Prefix;Vector2D InVector2D;None Suffix;None ReturnValue; );
	BuildString_Vector 0x4cb58 hash 5973be5e params:( None AppendTo;None Prefix;Vector InVector;None Suffix;None ReturnValue; );
	BuildString_Rotator 0x4cb4d hash 6c7f7816 params:( None AppendTo;None Prefix;Rotator InRot;None Suffix;None ReturnValue; );
	BuildString_Object 0x4cb43 hash 48ecedc2 params:( None AppendTo;None Prefix;Object InObj;None Suffix;None ReturnValue; );
	BuildString_Name 0x4cb3a hash 4e94b18c params:( None AppendTo;None Prefix;None InName;None Suffix;None ReturnValue; );
	BuildString_IntVector 0x4cb2e hash 6add5be9 params:( None AppendTo;None Prefix;IntVector InIntVector;None Suffix;None ReturnValue; );
	BuildString_Int 0x4cb25 hash fa9f94b6 params:( None AppendTo;None Prefix;None inInt;None Suffix;None ReturnValue; );
	BuildString_Float 0x4cb1b hash 20a02fa1 params:( None AppendTo;None Prefix;None InFloat;None Suffix;None ReturnValue; );
	BuildString_Color 0x4cb11 hash 206b804a params:( None AppendTo;None Prefix;LinearColor InColor;None Suffix;None ReturnValue; );
	BuildString_Bool 0x4cb08 hash 4e8e58d7 params:( None AppendTo;None Prefix;None InBool;None Suffix;None ReturnValue; );
};


instance 1ab5e15f4c0
class KismetStringTableLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	IsRegisteredTableId 0x4cd80 hash 1a3b97a4 params:( None TableId;None ReturnValue; );
	IsRegisteredTableEntry 0x4cd74 hash 87413b89 params:( None TableId;None Key;None ReturnValue; );
	GetTableNamespace 0x4cd6a hash d8e6c9da params:( None TableId;None ReturnValue; );
	GetTableEntrySourceString 0x4cd5c hash 88e24de7 params:( None TableId;None Key;None ReturnValue; );
	GetTableEntryMetaData 0x4cd50 hash 75fca760 params:( None TableId;None Key;None MetaDataId;None ReturnValue; );
	GetRegisteredStringTables 0x4cd42 hash cbb9e845 params:( ReturnValue ReturnValue; );
	GetMetaDataIdsFromStringTableEntry 0x4cd30 hash d20b2e4b params:( None TableId;None Key;ReturnValue ReturnValue; );
	GetKeysFromStringTable 0x4cd24 hash 6876d254 params:( None TableId;ReturnValue ReturnValue; );
};


instance 1ab5e15f280
class KismetSystemLibrary public : BlueprintFunctionLibrary
{
	// Fields
	DelegateFunction OnAssetLoaded__DelegateSignature; // 0x0 property 0x1ab71313340 hash 0x8ad2d5e6
	DelegateFunction OnAssetClassLoaded__DelegateSignature; // 0x0 property 0x1ab713130a0 hash 0x8ad2d5e6

	// Functions
	UnregisterForRemoteNotifications 0x4d865 hash 93cf179a params:(  );
	UnloadPrimaryAssetList 0x4d859 hash 4dd6c7e8 params:( PrimaryAssetIdList PrimaryAssetIdList; );
	UnloadPrimaryAsset 0x4d84f hash c89b972c params:( PrimaryAssetId PrimaryAssetId; );
	TransactObject 0x4d847 hash a207057c params:( Object Object; );
	StackTrace 0x4d841 hash 96fd7bea params:(  );
	SphereTraceSingleForObjects 0x4d832 hash d791602e params:( Object WorldContextObject;Vector Start;Vector End;None Radius;ObjectTypes ObjectTypes;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	SphereTraceSingleByProfile 0x4d824 hash 42a8fca9 params:( Object WorldContextObject;Vector Start;Vector End;None Radius;None ProfileName;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	SphereTraceSingle 0x4d81a hash 8e23dd params:( Object WorldContextObject;Vector Start;Vector End;None Radius;ETraceTypeQuery TraceChannel;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	SphereTraceMultiForObjects 0x4d80c hash 97aa3ab7 params:( Object WorldContextObject;Vector Start;Vector End;None Radius;ObjectTypes ObjectTypes;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	SphereTraceMultiByProfile 0x4d7fe hash cc5c2a12 params:( Object WorldContextObject;Vector Start;Vector End;None Radius;None ProfileName;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	SphereTraceMulti 0x4d7f5 hash 5cb58f26 params:( Object WorldContextObject;Vector Start;Vector End;None Radius;ETraceTypeQuery TraceChannel;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	SphereOverlapComponents 0x4d7e8 hash 705470ab params:( Object WorldContextObject;Vector SpherePos;None SphereRadius;ObjectTypes ObjectTypes;Class ComponentClassFilter;ActorsToIgnore ActorsToIgnore;OutComponents OutComponents;None ReturnValue; );
	SphereOverlapActors 0x4d7dd hash b246a611 params:( Object WorldContextObject;Vector SpherePos;None SphereRadius;ObjectTypes ObjectTypes;Class ActorClassFilter;ActorsToIgnore ActorsToIgnore;OutActors OutActors;None ReturnValue; );
	SnapshotObject 0x4d7d5 hash 768121ec params:( Object Object; );
	ShowPlatformSpecificLeaderboardScreen 0x4d7c1 hash 5655c686 params:( None CategoryName; );
	ShowPlatformSpecificAchievementsScreen 0x4d7ad hash 871feaad params:( PlayerController SpecificPlayer; );
	ShowInterstitialAd 0x4d7a3 hash ce43da7 params:(  );
	ShowAdBanner 0x4d79c hash fb25e021 params:( None AdIdIndex;None bShowOnBottomOfScreen; );
	SetWindowTitle 0x4d794 hash 8f46632b params:( None Title; );
	SetVolumeButtonsHandledBySystem 0x4d783 hash d17abd08 params:( None bEnabled; );
	SetVectorPropertyByName 0x4d776 hash 4dd4fe5 params:( Object Object;None PropertyName;Vector Value; );
	SetUserActivity 0x4d76d hash 597f593d params:( UserActivity UserActivity; );
	SetTransformPropertyByName 0x4d75f hash 5a4e0e0e params:( Object Object;None PropertyName;Transform Value; );
	SetTextPropertyByName 0x4d753 hash 1276a5d7 params:( Object Object;None PropertyName;None Value; );
	SetSuppressViewportTransitionMessage 0x4d740 hash 9e778666 params:( Object WorldContextObject;None bState; );
	SetStructurePropertyByName 0x4d732 hash bccf4383 params:( Object Object;None PropertyName;GenericStruct Value; );
	SetStringPropertyByName 0x4d725 hash 90dc2f49 params:( Object Object;None PropertyName;None Value; );
	SetSoftObjectPropertyByName 0x4d716 hash 7306ce05 params:( Object Object;None PropertyName;Object Value; );
	SetSoftClassPropertyByName 0x4d708 hash dbc88724 params:( Object Object;None PropertyName;Class Value; );
	SetRotatorPropertyByName 0x4d6fb hash bd1f4c5d params:( Object Object;None PropertyName;Rotator Value; );
	SetObjectPropertyByName 0x4d6ee hash f9239e49 params:( Object Object;None PropertyName;Object Value; );
	SetNamePropertyByName 0x4d6e2 hash 1b124213 params:( Object Object;None PropertyName;None Value; );
	SetLinearColorPropertyByName 0x4d6d3 hash 27ab6fec params:( Object Object;None PropertyName;LinearColor Value; );
	SetIntPropertyByName 0x4d6c8 hash 92e10dfd params:( Object Object;None PropertyName;None Value; );
	SetInterfacePropertyByName 0x4d6ba hash 41c79ee3 params:( Object Object;None PropertyName;Interface Value; );
	SetInt64PropertyByName 0x4d6ae hash f5e2c5a7 params:( Object Object;None PropertyName;None Value; );
	SetFloatPropertyByName 0x4d6a2 hash 7aeb1a8 params:( Object Object;None PropertyName;None Value; );
	SetCollisionProfileNameProperty 0x4d691 hash f7016554 params:( Object Object;None PropertyName;CollisionProfileName Value; );
	SetClassPropertyByName 0x4d685 hash 25aa5ee8 params:( Object Object;None PropertyName;Class Value; );
	SetBytePropertyByName 0x4d679 hash be9e1c6 params:( Object Object;None PropertyName;None Value; );
	SetBoolPropertyByName 0x4d66d hash 8951509e params:( Object Object;None PropertyName;None Value; );
	RetriggerableDelay 0x4d663 hash 26ec57d3 params:( Object WorldContextObject;None Duration;LatentActionInfo LatentInfo; );
	ResetGamepadAssignmentToController 0x4d651 hash df1249b7 params:( None ControllerId; );
	ResetGamepadAssignments 0x4d644 hash f9c7f483 params:(  );
	RegisterForRemoteNotifications 0x4d634 hash f751fb97 params:(  );
	QuitGame 0x43e00 hash 682ec7e2 params:( Object WorldContextObject;PlayerController SpecificPlayer;EQuitPreference QuitPreference;None bIgnorePlatformRestrictions; );
	PrintWarning 0x4d62d hash df3747a8 params:( None inString; );
	PrintText 0x4d627 hash 29edef57 params:( Object WorldContextObject;None InText;None bPrintToScreen;None bPrintToLog;LinearColor TextColor;None Duration; );
	PrintString 0x4d620 hash 5bddfd89 params:( Object WorldContextObject;None inString;None bPrintToScreen;None bPrintToLog;LinearColor TextColor;None Duration; );
	NotEqual_SoftObjectReference 0x4d611 hash 1a63226f params:( Object A;Object B;None ReturnValue; );
	NotEqual_SoftClassReference 0x4d602 hash d7e788ae params:( Class A;Class B;None ReturnValue; );
	NotEqual_PrimaryAssetType 0x4d5f4 hash 489bd673 params:( PrimaryAssetType A;PrimaryAssetType B;None ReturnValue; );
	NotEqual_PrimaryAssetId 0x4d5e7 hash 5929469e params:( PrimaryAssetId A;PrimaryAssetId B;None ReturnValue; );
	NormalizeFilename 0x48ffb hash ef9913d7 params:( None InFilename;None ReturnValue; );
	MoveComponentTo 0x4d5de hash 5267ca52 params:( SceneComponent Component;Vector TargetRelativeLocation;Rotator TargetRelativeRotation;None bEaseOut;None bEaseIn;None OverTime;None bForceShortestRotationPath;EMoveComponentAction MoveAction;LatentActionInfo LatentInfo; );
	MakeSoftObjectPath 0x4d5d4 hash ac7604e3 params:( None PathString;SoftObjectPath ReturnValue; );
	MakeSoftClassPath 0x4d5ca hash 36e11102 params:( None PathString;SoftClassPath ReturnValue; );
	MakeLiteralText 0x4d5c1 hash 1570f975 params:( None Value;None ReturnValue; );
	MakeLiteralString 0x4d5b7 hash 344c0727 params:( None Value;None ReturnValue; );
	MakeLiteralName 0x4d5ae hash 156d9cb1 params:( None Value;None ReturnValue; );
	MakeLiteralInt 0x4d5a6 hash 7cc52f3b params:( None Value;None ReturnValue; );
	MakeLiteralFloat 0x4d59d hash c2967f66 params:( None Value;None ReturnValue; );
	MakeLiteralByte 0x4d594 hash 15676f24 params:( None Value;None ReturnValue; );
	MakeLiteralBool 0x4d58b hash 156743fc params:( None Value;None ReturnValue; );
	LoadInterstitialAd 0x4d581 hash c5094526 params:( None AdIdIndex; );
	LoadClassAsset_Blocking 0x4d574 hash ccbd8da3 params:( Class AssetClass;Class ReturnValue; );
	LoadAssetClass 0x4d56c hash a08b513b params:( Object WorldContextObject;Class AssetClass;OnAssetClassLoaded__DelegateSignature OnLoaded;LatentActionInfo LatentInfo; );
	LoadAsset_Blocking 0x4d562 hash eb4dd16d params:( Object Asset;Object ReturnValue; );
	LoadAsset 0x4d55c hash 10878785 params:( Object WorldContextObject;Object Asset;OnAssetLoaded__DelegateSignature OnLoaded;LatentActionInfo LatentInfo; );
	LineTraceSingleForObjects 0x4d54e hash 9ba706cf params:( Object WorldContextObject;Vector Start;Vector End;ObjectTypes ObjectTypes;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	LineTraceSingleByProfile 0x4d541 hash 6f63d32a params:( Object WorldContextObject;Vector Start;Vector End;None ProfileName;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	LineTraceSingle 0x4d538 hash 247dd3e params:( Object WorldContextObject;Vector Start;Vector End;ETraceTypeQuery TraceChannel;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	LineTraceMultiForObjects 0x4d52b hash c4651138 params:( Object WorldContextObject;Vector Start;Vector End;ObjectTypes ObjectTypes;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	LineTraceMultiByProfile 0x4d51e hash 87e5b473 params:( Object WorldContextObject;Vector Start;Vector End;None ProfileName;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	LineTraceMulti 0x4d516 hash 457d2067 params:( Object WorldContextObject;Vector Start;Vector End;ETraceTypeQuery TraceChannel;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	LaunchURL 0x4d510 hash 422eef53 params:( None URL; );
	K2_UnPauseTimerHandle 0x4d504 hash b0e3472f params:( Object WorldContextObject;TimerHandle Handle; );
	K2_UnPauseTimerDelegate 0x4d4f7 hash f518761e params:( TimerDynamicDelegate__DelegateSignature Delegate; );
	K2_UnPauseTimer 0x4d4ee hash eb3e4963 params:( Object Object;None FunctionName; );
	K2_TimerExistsHandle 0x4d4e3 hash cc18036e params:( Object WorldContextObject;TimerHandle Handle;None ReturnValue; );
	K2_TimerExistsDelegate 0x4d4d7 hash b06d3e1d params:( TimerDynamicDelegate__DelegateSignature Delegate;None ReturnValue; );
	K2_TimerExists 0x4d4cf hash 3de68262 params:( Object Object;None FunctionName;None ReturnValue; );
	K2_SetTimerDelegate 0x4d4c4 hash becfb2c9 params:( TimerDynamicDelegate__DelegateSignature Delegate;None Time;None bLooping;None InitialStartDelay;None InitialStartDelayVariance;TimerHandle ReturnValue; );
	K2_SetTimer 0x4d4bd hash ea50b0e params:( Object Object;None FunctionName;None Time;None bLooping;None InitialStartDelay;None InitialStartDelayVariance;TimerHandle ReturnValue; );
	K2_PauseTimerHandle 0x4d4b2 hash eda9218c params:( Object WorldContextObject;TimerHandle Handle; );
	K2_PauseTimerDelegate 0x4d4a6 hash 7abe5bbb params:( TimerDynamicDelegate__DelegateSignature Delegate; );
	K2_PauseTimer 0x4d49e hash a17ae200 params:( Object Object;None FunctionName; );
	K2_IsValidTimerHandle 0x4d492 hash 4f6e37da params:( TimerHandle Handle;None ReturnValue; );
	K2_IsTimerPausedHandle 0x4d486 hash 47e33c6c params:( Object WorldContextObject;TimerHandle Handle;None ReturnValue; );
	K2_IsTimerPausedDelegate 0x4d479 hash 4beaae9b params:( TimerDynamicDelegate__DelegateSignature Delegate;None ReturnValue; );
	K2_IsTimerPaused 0x4d470 hash 147254e0 params:( Object Object;None FunctionName;None ReturnValue; );
	K2_IsTimerActiveHandle 0x4d464 hash e0cc92c6 params:( Object WorldContextObject;TimerHandle Handle;None ReturnValue; );
	K2_IsTimerActiveDelegate 0x4d457 hash c4830375 params:( TimerDynamicDelegate__DelegateSignature Delegate;None ReturnValue; );
	K2_IsTimerActive 0x4d44e hash f1986fba params:( Object Object;None FunctionName;None ReturnValue; );
	K2_InvalidateTimerHandle 0x4d441 hash dae94caf params:( TimerHandle Handle;TimerHandle ReturnValue; );
	K2_GetTimerRemainingTimeHandle 0x4d431 hash 4aa27797 params:( Object WorldContextObject;TimerHandle Handle;None ReturnValue; );
	K2_GetTimerRemainingTimeDelegate 0x4d420 hash fb656086 params:( TimerDynamicDelegate__DelegateSignature Delegate;None ReturnValue; );
	K2_GetTimerRemainingTime 0x4d413 hash 191b4bcb params:( Object Object;None FunctionName;None ReturnValue; );
	K2_GetTimerElapsedTimeHandle 0x4d404 hash a5a53db params:( Object WorldContextObject;TimerHandle Handle;None ReturnValue; );
	K2_GetTimerElapsedTimeDelegate 0x4d3f4 hash 88855dca params:( TimerDynamicDelegate__DelegateSignature Delegate;None ReturnValue; );
	K2_GetTimerElapsedTime 0x4d3e8 hash 344450f params:( Object Object;None FunctionName;None ReturnValue; );
	K2_ClearTimerHandle 0x4d3dd hash 86b16535 params:( Object WorldContextObject;TimerHandle Handle; );
	K2_ClearTimerDelegate 0x4d3d1 hash 76e62da4 params:( TimerDynamicDelegate__DelegateSignature Delegate; );
	K2_ClearTimer 0x4d3c9 hash 5ee7dae9 params:( Object Object;None FunctionName; );
	K2_ClearAndInvalidateTimerHandle 0x4d3b8 hash 7f990ce9 params:( Object WorldContextObject;TimerHandle Handle; );
	IsValidSoftObjectReference 0x4d3aa hash 3681e893 params:( Object SoftObjectReference;None ReturnValue; );
	IsValidSoftClassReference 0x4d39c hash a2741a52 params:( Class SoftClassReference;None ReturnValue; );
	IsValidPrimaryAssetType 0x4d38f hash b6cfaf17 params:( PrimaryAssetType PrimaryAssetType;None ReturnValue; );
	IsValidPrimaryAssetId 0x4d383 hash fa86a642 params:( PrimaryAssetId PrimaryAssetId;None ReturnValue; );
	IsValidClass 0x4d37c hash e2074b67 params:( Class Class;None ReturnValue; );
	IsValid 0x47d13 hash 9a77631 params:( Object Object;None ReturnValue; );
	IsUnattended 0x4d375 hash 17f5dccd params:( None ReturnValue; );
	IsStandalone 0x4d36e hash d7521f2a params:( Object WorldContextObject;None ReturnValue; );
	IsServer 0x4d369 hash 37e2a698 params:( Object WorldContextObject;None ReturnValue; );
	IsScreensaverEnabled 0x4d35e hash f463b1cd params:( None ReturnValue; );
	IsPackagedForDistribution 0x4d350 hash ad9484f8 params:( None ReturnValue; );
	IsLoggedIn 0x4d34a hash 2c67d9ca params:( PlayerController SpecificPlayer;None ReturnValue; );
	IsInterstitialAdRequested 0x4d33c hash bb3a9654 params:( None ReturnValue; );
	IsInterstitialAdAvailable 0x4d32e hash c42905a3 params:( None ReturnValue; );
	IsDedicatedServer 0x4d324 hash 9b751cef params:( Object WorldContextObject;None ReturnValue; );
	IsControllerAssignedToGamepad 0x4d314 hash c3fd8c5 params:( None ControllerId;None ReturnValue; );
	HideAdBanner 0x4d30d hash 8d963ba params:(  );
	GetVolumeButtonsHandledBySystem 0x4d2fc hash 3840fffc params:( None ReturnValue; );
	GetUniqueDeviceId 0x4d2f2 hash c0ed76f9 params:( None ReturnValue; );
	GetSupportedFullscreenResolutions 0x4d2e0 hash d634f945 params:( Resolutions Resolutions;None ReturnValue; );
	GetSoftObjectReferenceFromPrimaryAssetId 0x4d2cb hash 5007f78c params:( PrimaryAssetId PrimaryAssetId;Object ReturnValue; );
	GetSoftClassReferenceFromPrimaryAssetId 0x4d2b6 hash b0566c8b params:( PrimaryAssetId PrimaryAssetId;Class ReturnValue; );
	GetRenderingMaterialQualityLevel 0x4d2a5 hash f08275d3 params:( None ReturnValue; );
	GetRenderingDetailMode 0x4d299 hash 55b7405b params:( None ReturnValue; );
	GetProjectSavedDirectory 0x4d28c hash f48f0144 params:( None ReturnValue; );
	GetProjectDirectory 0x4d281 hash 9836d471 params:( None ReturnValue; );
	GetProjectContentDirectory 0x4d273 hash ab96274c params:( None ReturnValue; );
	GetPrimaryAssetsWithBundleState 0x4d262 hash 571decd3 params:( RequiredBundles RequiredBundles;ExcludedBundles ExcludedBundles;ValidTypes ValidTypes;None bForceCurrentState;OutPrimaryAssetIdList OutPrimaryAssetIdList; );
	GetPrimaryAssetIdList 0x4d256 hash 946aaf32 params:( PrimaryAssetType PrimaryAssetType;OutPrimaryAssetIdList OutPrimaryAssetIdList; );
	GetPrimaryAssetIdFromSoftObjectReference 0x4d241 hash d766686c params:( Object SoftObjectReference;PrimaryAssetId ReturnValue; );
	GetPrimaryAssetIdFromSoftClassReference 0x4d22c hash 46b830b params:( Class SoftClassReference;PrimaryAssetId ReturnValue; );
	GetPrimaryAssetIdFromObject 0x4d21d hash c8042841 params:( Object Object;PrimaryAssetId ReturnValue; );
	GetPrimaryAssetIdFromClass 0x4d20f hash e6341380 params:( Class Class;PrimaryAssetId ReturnValue; );
	GetPreferredLanguages 0x4d203 hash 10c6525b params:( ReturnValue ReturnValue; );
	GetPlatformUserName 0x4d1f8 hash 8ab2458a params:( None ReturnValue; );
	GetPathName 0x4d1f1 hash 5e2edcd3 params:( Object Object;None ReturnValue; );
	GetOuterObject 0x4d1e9 hash ffa74dab params:( Object Object;Object ReturnValue; );
	GetObjectName 0x4d1e1 hash 268d5add params:( Object Object;None ReturnValue; );
	GetObjectFromPrimaryAssetId 0x4d1d2 hash 1855f2c1 params:( PrimaryAssetId PrimaryAssetId;Object ReturnValue; );
	GetMinYResolutionForUI 0x4d1c6 hash 89a4c7fb params:( None ReturnValue; );
	GetMinYResolutionFor3DView 0x4d1b8 hash 8ef5624f params:( None ReturnValue; );
	GetLocalCurrencySymbol 0x4d1ac hash c95f79f1 params:( None ReturnValue; );
	GetLocalCurrencyCode 0x4d1a1 hash 8cf633f6 params:( None ReturnValue; );
	GetGameTimeInSeconds 0x4d196 hash 50922454 params:( Object WorldContextObject;None ReturnValue; );
	GetGamepadControllerName 0x4d189 hash 34382e19 params:( None ControllerId;None ReturnValue; );
	GetGameName 0x4d182 hash ff53fb00 params:( None ReturnValue; );
	GetGameBundleId 0x4d179 hash 21d04006 params:( None ReturnValue; );
	GetFrameCount 0x4d171 hash 64bcc939 params:( None ReturnValue; );
	GetEngineVersion 0x4d168 hash 360e4fa1 params:( None ReturnValue; );
	GetDisplayName 0x4d160 hash 2434a2fc params:( Object Object;None ReturnValue; );
	GetDeviceId 0x4d159 hash 83c9cf62 params:( None ReturnValue; );
	GetDefaultLocale 0x4d150 hash f8669d7a params:( None ReturnValue; );
	GetDefaultLanguage 0x4d146 hash 90eecf6e params:( None ReturnValue; );
	GetCurrentBundleState 0x4d13a hash c20286a3 params:( PrimaryAssetId PrimaryAssetId;None bForceCurrentState;OutBundles OutBundles;None ReturnValue; );
	GetConvenientWindowedResolutions 0x4d129 hash b91337c6 params:( Resolutions Resolutions;None ReturnValue; );
	GetConsoleVariableIntValue 0x4d11b hash 75204ee6 params:( None VariableName;None ReturnValue; );
	GetConsoleVariableFloatValue 0x4d10c hash 25879d71 params:( None VariableName;None ReturnValue; );
	GetConsoleVariableBoolValue 0x4d0fd hash 87a5fe07 params:( None VariableName;None ReturnValue; );
	GetComponentBounds 0x4d0f3 hash de26863 params:( SceneComponent Component;Vector Origin;Vector BoxExtent;None SphereRadius; );
	GetCommandLine 0x4d0eb hash 57caa8c params:( None ReturnValue; );
	GetClassFromPrimaryAssetId 0x4d0dd hash 69869c60 params:( PrimaryAssetId PrimaryAssetId;Class ReturnValue; );
	GetClassDisplayName 0x4d0d2 hash 1038faf2 params:( Class Class;None ReturnValue; );
	GetAdIDCount 0x4d0cb hash d2c42f20 params:( None ReturnValue; );
	GetActorListFromComponentList 0x4d0bb hash 2fb1d33d params:( ComponentList ComponentList;Class ActorClassFilter;OutActorList OutActorList; );
	GetActorBounds 0x3ef33 hash 8907dd89 params:( Actor Actor;Vector Origin;Vector BoxExtent; );
	ForceCloseAdBanner 0x4d0b1 hash cee8b225 params:(  );
	FlushPersistentDebugLines 0x4d0a3 hash 373be39a params:( Object WorldContextObject; );
	FlushDebugStrings 0x4d099 hash c2f8b538 params:( Object WorldContextObject; );
	ExecuteConsoleCommand 0x4d08d hash fc90f28a params:( Object WorldContextObject;None Command;PlayerController SpecificPlayer; );
	EqualEqual_SoftObjectReference 0x4d07d hash b208736 params:( Object A;Object B;None ReturnValue; );
	EqualEqual_SoftClassReference 0x4d06d hash 7297f095 params:( Class A;Class B;None ReturnValue; );
	EqualEqual_PrimaryAssetType 0x4d05e hash 9073189a params:( PrimaryAssetType A;PrimaryAssetType B;None ReturnValue; );
	EqualEqual_PrimaryAssetId 0x4d050 hash 562bd305 params:( PrimaryAssetId A;PrimaryAssetId B;None ReturnValue; );
	EndTransaction 0x4d048 hash f31b0882 params:( None ReturnValue; );
	DrawDebugString 0x4d03f hash 881e0291 params:( Object WorldContextObject;Vector TextLocation;None Text;Actor TestBaseActor;LinearColor TextColor;None Duration; );
	DrawDebugSphere 0x4d036 hash 87d01441 params:( Object WorldContextObject;Vector Center;None Radius;None Segments;LinearColor LineColor;None Duration;None Thickness; );
	DrawDebugPoint 0x4d02e hash 49b837e4 params:( Object WorldContextObject;Vector Position;None Size;LinearColor PointColor;None Duration; );
	DrawDebugPlane 0x4d026 hash 49b670aa params:( Object WorldContextObject;Plane PlaneCoordinates;Vector Location;None Size;LinearColor PlaneColor;None Duration; );
	DrawDebugLine 0x4d01e hash 6ed4bf02 params:( Object WorldContextObject;Vector LineStart;Vector LineEnd;LinearColor LineColor;None Duration;None Thickness; );
	DrawDebugFrustum 0x4d015 hash 9ebaceb0 params:( Object WorldContextObject;Transform FrustumTransform;LinearColor FrustumColor;None Duration;None Thickness; );
	DrawDebugFloatHistoryTransform 0x4d005 hash f639b21e params:( Object WorldContextObject;DebugFloatHistory FloatHistory;Transform DrawTransform;Vector2D DrawSize;LinearColor DrawColor;None Duration; );
	DrawDebugFloatHistoryLocation 0x4cff5 hash f0c40e1b params:( Object WorldContextObject;DebugFloatHistory FloatHistory;Vector DrawLocation;Vector2D DrawSize;LinearColor DrawColor;None Duration; );
	DrawDebugCylinder 0x4cfeb hash b66fd974 params:( Object WorldContextObject;Vector Start;Vector End;None Radius;None Segments;LinearColor LineColor;None Duration;None Thickness; );
	DrawDebugCoordinateSystem 0x4cfdd hash 654c7da7 params:( Object WorldContextObject;Vector AxisLoc;Rotator AxisRot;None Scale;None Duration;None Thickness; );
	DrawDebugConeInDegrees 0x4cfd1 hash c46c92f5 params:( Object WorldContextObject;Vector Origin;Vector Direction;None Length;None AngleWidth;None AngleHeight;None NumSides;LinearColor LineColor;None Duration;None Thickness; );
	DrawDebugCone 0x4cfc9 hash 6ecfe91f params:( Object WorldContextObject;Vector Origin;Vector Direction;None Length;None AngleWidth;None AngleHeight;None NumSides;LinearColor LineColor;None Duration;None Thickness; );
	DrawDebugCircle 0x4cfc0 hash 6204512c params:( Object WorldContextObject;Vector Center;None Radius;None NumSegments;LinearColor LineColor;None Duration;None Thickness;Vector YAxis;Vector ZAxis;None bDrawAxis; );
	DrawDebugCapsule 0x4cfb7 hash 8fc9ee47 params:( Object WorldContextObject;Vector Center;None HalfHeight;None Radius;Rotator Rotation;LinearColor LineColor;None Duration;None Thickness; );
	DrawDebugCamera 0x4cfae hash 6170d883 params:( CameraActor CameraActor;LinearColor CameraColor;None Duration; );
	DrawDebugBox 0x4cfa7 hash 77b8b543 params:( Object WorldContextObject;Vector Center;Vector Extent;LinearColor LineColor;Rotator Rotation;None Duration;None Thickness; );
	DrawDebugArrow 0x4cf9f hash 48aa93e5 params:( Object WorldContextObject;Vector LineStart;Vector LineEnd;None ArrowSize;LinearColor LineColor;None Duration;None Thickness; );
	DoesImplementInterface 0x4cf93 hash bafb780c params:( Object TestObject;Class Interface;None ReturnValue; );
	Delay 0x4cf8f hash d06bd14 params:( Object WorldContextObject;None Duration;LatentActionInfo LatentInfo; );
	CreateCopyForUndoBuffer 0x4cf82 hash 3bd7fdcb params:( Object ObjectToModify; );
	ConvertToRelativePath 0x4cf76 hash ec5e9472 params:( None Filename;None ReturnValue; );
	ConvertToAbsolutePath 0x4cf6a hash cc3947f5 params:( None Filename;None ReturnValue; );
	Conv_SoftObjPathToSoftObjRef 0x4cf5b hash a8eec995 params:( SoftObjectPath SoftObjectPath;Object ReturnValue; );
	Conv_SoftObjectReferenceToString 0x4cf4a hash fba5fbd6 params:( Object SoftObjectReference;None ReturnValue; );
	Conv_SoftObjectReferenceToObject 0x4cf39 hash f1072ad6 params:( Object SoftObject;Object ReturnValue; );
	Conv_SoftClassReferenceToString 0x4cf28 hash dabeab75 params:( Class SoftClassReference;None ReturnValue; );
	Conv_SoftClassReferenceToClass 0x4cf18 hash 3bc84f34 params:( Class SoftClass;Class ReturnValue; );
	Conv_SoftClassPathToSoftClassRef 0x4cf07 hash 2f19102b params:( SoftClassPath SoftClassPath;Class ReturnValue; );
	Conv_PrimaryAssetTypeToString 0x4cef7 hash 2d57fefa params:( PrimaryAssetType PrimaryAssetType;None ReturnValue; );
	Conv_PrimaryAssetIdToString 0x4cee8 hash a7664ae5 params:( PrimaryAssetId PrimaryAssetId;None ReturnValue; );
	Conv_ObjectToSoftObjectReference 0x4ced7 hash 3e33da16 params:( Object Object;Object ReturnValue; );
	Conv_InterfaceToObject 0x4cecb hash 1651ca25 params:( Interface Interface;Object ReturnValue; );
	Conv_ClassToSoftClassReference 0x4cebb hash adec1e34 params:( Class Class;Class ReturnValue; );
	ControlScreensaver 0x4ceb1 hash 53cb4787 params:( None bAllowScreenSaver; );
	ComponentOverlapComponents 0x4cea3 hash eee9e697 params:( PrimitiveComponent Component;Transform ComponentTransform;ObjectTypes ObjectTypes;Class ComponentClassFilter;ActorsToIgnore ActorsToIgnore;OutComponents OutComponents;None ReturnValue; );
	ComponentOverlapActors 0x4ce97 hash 599605fd params:( PrimitiveComponent Component;Transform ComponentTransform;ObjectTypes ObjectTypes;Class ActorClassFilter;ActorsToIgnore ActorsToIgnore;OutActors OutActors;None ReturnValue; );
	CollectGarbage 0x4ce8f hash d84304f4 params:(  );
	CapsuleTraceSingleForObjects 0x4ce80 hash d943ff54 params:( Object WorldContextObject;Vector Start;Vector End;None Radius;None HalfHeight;ObjectTypes ObjectTypes;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	CapsuleTraceSingleByProfile 0x4ce71 hash af514f0f params:( Object WorldContextObject;Vector Start;Vector End;None Radius;None HalfHeight;None ProfileName;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	CapsuleTraceSingle 0x4ce67 hash 1b8a7b83 params:( Object WorldContextObject;Vector Start;Vector End;None Radius;None HalfHeight;ETraceTypeQuery TraceChannel;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	CapsuleTraceMultiForObjects 0x4ce58 hash 4528d1d params:( Object WorldContextObject;Vector Start;Vector End;None Radius;None HalfHeight;ObjectTypes ObjectTypes;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	CapsuleTraceMultiByProfile 0x4ce4a hash f670c7b8 params:( Object WorldContextObject;Vector Start;Vector End;None Radius;None HalfHeight;None ProfileName;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	CapsuleTraceMulti 0x4ce40 hash 8c128a0c params:( Object WorldContextObject;Vector Start;Vector End;None Radius;None HalfHeight;ETraceTypeQuery TraceChannel;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	CapsuleOverlapComponents 0x4ce33 hash cd396cd1 params:( Object WorldContextObject;Vector CapsulePos;None Radius;None HalfHeight;ObjectTypes ObjectTypes;Class ComponentClassFilter;ActorsToIgnore ActorsToIgnore;OutComponents OutComponents;None ReturnValue; );
	CapsuleOverlapActors 0x4ce28 hash 7db77f37 params:( Object WorldContextObject;Vector CapsulePos;None Radius;None HalfHeight;ObjectTypes ObjectTypes;Class ActorClassFilter;ActorsToIgnore ActorsToIgnore;OutActors OutActors;None ReturnValue; );
	CanLaunchURL 0x4ce21 hash bd11a365 params:( None URL;None ReturnValue; );
	CancelTransaction 0x4ce17 hash 44956e31 params:( None Index; );
	BreakSoftObjectPath 0x4ce0c hash 27e278ca params:( SoftObjectPath InSoftObjectPath;None PathString; );
	BreakSoftClassPath 0x4ce02 hash ed0b2409 params:( SoftClassPath InSoftClassPath;None PathString; );
	BoxTraceSingleForObjects 0x4cdf5 hash e0c5ee50 params:( Object WorldContextObject;Vector Start;Vector End;Vector HalfSize;Rotator Orientation;ObjectTypes ObjectTypes;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	BoxTraceSingleByProfile 0x4cde8 hash ce934e8b params:( Object WorldContextObject;Vector Start;Vector End;Vector HalfSize;Rotator Orientation;None ProfileName;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	BoxTraceSingle 0x4cde0 hash e6fa3f7f params:( Object WorldContextObject;Vector Start;Vector End;Vector HalfSize;Rotator Orientation;ETraceTypeQuery TraceChannel;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;HitResult OutHit;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	BoxTraceMultiForObjects 0x4cdd3 hash 23948c99 params:( Object WorldContextObject;Vector Start;Vector End;Vector HalfSize;Rotator Orientation;ObjectTypes ObjectTypes;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	BoxTraceMultiByProfile 0x4cdc7 hash 3572c7b4 params:( Object WorldContextObject;Vector Start;Vector End;Vector HalfSize;Rotator Orientation;None ProfileName;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	BoxTraceMulti 0x4cdbf hash e5bbe88 params:( Object WorldContextObject;Vector Start;Vector End;Vector HalfSize;Rotator Orientation;ETraceTypeQuery TraceChannel;None bTraceComplex;ActorsToIgnore ActorsToIgnore;EDrawDebugTrace DrawDebugType;OutHits OutHits;None bIgnoreSelf;LinearColor TraceColor;LinearColor TraceHitColor;None DrawTime;None ReturnValue; );
	BoxOverlapComponents 0x4cdb4 hash 92833dcd params:( Object WorldContextObject;Vector BoxPos;Vector Extent;ObjectTypes ObjectTypes;Class ComponentClassFilter;ActorsToIgnore ActorsToIgnore;OutComponents OutComponents;None ReturnValue; );
	BoxOverlapActors 0x4cdab hash e4283233 params:( Object WorldContextObject;Vector BoxPos;Vector BoxExtent;ObjectTypes ObjectTypes;Class ActorClassFilter;ActorsToIgnore ActorsToIgnore;OutActors OutActors;None ReturnValue; );
	BeginTransaction 0x4cda2 hash 7090bc90 params:( None Context;None Description;Object PrimaryObject;None ReturnValue; );
	AddFloatHistorySample 0x4cd96 hash ded1f178 params:( None Value;DebugFloatHistory FloatHistory;DebugFloatHistory ReturnValue; );
};


instance 1ab5e15f040
class KismetTextLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	TextTrimTrailing 0x4da43 hash 5300ea80 params:( None InText;None ReturnValue; );
	TextTrimPrecedingAndTrailing 0x4da34 hash 77e599e4 params:( None InText;None ReturnValue; );
	TextTrimPreceding 0x4da2a hash 694f857 params:( None InText;None ReturnValue; );
	TextToUpper 0x4da23 hash 3973f5f9 params:( None InText;None ReturnValue; );
	TextToLower 0x4da1c hash 38d0aad6 params:( None InText;None ReturnValue; );
	TextIsTransient 0x4da13 hash 69d844de params:( None InText;None ReturnValue; );
	TextIsFromStringTable 0x4da07 hash d3c619f9 params:( None Text;None ReturnValue; );
	TextIsEmpty 0x4da00 hash f2e4d0f5 params:( None InText;None ReturnValue; );
	TextIsCultureInvariant 0x4d9f4 hash df4e2d76 params:( None InText;None ReturnValue; );
	TextFromStringTable 0x4d9e9 hash b457111d params:( None TableId;None Key;None ReturnValue; );
	StringTableIdAndKeyFromText 0x4d9da hash e599d886 params:( None Text;None OutTableId;None OutKey;None ReturnValue; );
	PolyglotDataToText 0x4d9d0 hash fa454441 params:( PolyglotTextData PolyglotData;None ReturnValue; );
	NotEqual_TextText 0x4d9c6 hash 58e967d7 params:( None A;None B;None ReturnValue; );
	NotEqual_IgnoreCase_TextText 0x4d9b7 hash 76be1b16 params:( None A;None B;None ReturnValue; );
	IsPolyglotDataValid 0x4d9ac hash 26416305 params:( PolyglotTextData PolyglotData;None IsValid;None ErrorMessage; );
	GetEmptyText 0x4d9a5 hash 20df68d9 params:( None ReturnValue; );
	Format 0x2206f hash b341208e params:( None InPattern;InArgs InArgs;None ReturnValue; );
	FindTextInLocalizationTable 0x4d996 hash 2a996293 params:( None Namespace;None Key;None OutText;None ReturnValue; );
	EqualEqual_TextText 0x4d98b hash 71f072fe params:( None A;None B;None ReturnValue; );
	EqualEqual_IgnoreCase_TextText 0x4d97b hash 677b7fdd params:( None A;None B;None ReturnValue; );
	Conv_VectorToText 0x4d971 hash 99f8595 params:( Vector InVec;None ReturnValue; );
	Conv_Vector2dToText 0x4d966 hash 40b9642b params:( Vector2D InVec;None ReturnValue; );
	Conv_TransformToText 0x4d95b hash 28afea1e params:( Transform InTrans;None ReturnValue; );
	Conv_TextToString 0x4d951 hash 28cc5d79 params:( None InText;None ReturnValue; );
	Conv_StringToText 0x4d947 hash 477740f9 params:( None inString;None ReturnValue; );
	Conv_RotatorToText 0x4d93d hash c1d47b2d params:( Rotator InRot;None ReturnValue; );
	Conv_ObjectToText 0x4d933 hash f2bfaff9 params:( Object InObj;None ReturnValue; );
	Conv_NameToText 0x4d92a hash 4f34b383 params:( None InName;None ReturnValue; );
	Conv_IntToText 0x4d922 hash 62c6b04d params:( None Value;None bAlwaysSign;None bUseGrouping;None MinimumIntegralDigits;None MaximumIntegralDigits;None ReturnValue; );
	Conv_Int64ToText 0x4d919 hash c2720c37 params:( None Value;None bAlwaysSign;None bUseGrouping;None MinimumIntegralDigits;None MaximumIntegralDigits;None ReturnValue; );
	Conv_FloatToText 0x4d910 hash d1768738 params:( None Value;ERoundingMode RoundingMode;None bAlwaysSign;None bUseGrouping;None MinimumIntegralDigits;None MaximumIntegralDigits;None MinimumFractionalDigits;None MaximumFractionalDigits;None ReturnValue; );
	Conv_ColorToText 0x4d907 hash 41aff2a1 params:( LinearColor InColor;None ReturnValue; );
	Conv_ByteToText 0x4d8fe hash 802d5036 params:( None Value;None ReturnValue; );
	Conv_BoolToText 0x4d8f5 hash 70df670e params:( None InBool;None ReturnValue; );
	AsTimeZoneTime_DateTime 0x4d8e8 hash 4b16e6bf params:( DateTime InDateTime;None InTimeZone;None ReturnValue; );
	AsTimeZoneDateTime_DateTime 0x4d8d9 hash f4c2133d params:( DateTime InDateTime;None InTimeZone;None ReturnValue; );
	AsTimeZoneDate_DateTime 0x4d8cc hash 7314586e params:( DateTime InDateTime;None InTimeZone;None ReturnValue; );
	AsTimespan_Timespan 0x4d8c1 hash d4e91f7a params:( Timespan InTimespan;None ReturnValue; );
	AsTime_DateTime 0x4d8b8 hash 682c3e94 params:( DateTime In;None ReturnValue; );
	AsPercent_Float 0x4d8af hash fac7149f params:( None Value;ERoundingMode RoundingMode;None bAlwaysSign;None bUseGrouping;None MinimumIntegralDigits;None MaximumIntegralDigits;None MinimumFractionalDigits;None MaximumFractionalDigits;None ReturnValue; );
	AsDateTime_DateTime 0x4d8a4 hash c9b94d92 params:( DateTime In;None ReturnValue; );
	AsDate_DateTime 0x4d89b hash 9029b043 params:( DateTime InDateTime;None ReturnValue; );
	AsCurrencyBase 0x4d893 hash 67b65a9f params:( None BaseValue;None CurrencyCode;None ReturnValue; );
	AsCurrency_Integer 0x4d889 hash 3c2ec7d1 params:( None Value;ERoundingMode RoundingMode;None bAlwaysSign;None bUseGrouping;None MinimumIntegralDigits;None MaximumIntegralDigits;None MinimumFractionalDigits;None MaximumFractionalDigits;None CurrencyCode;None ReturnValue; );
	AsCurrency_Float 0x4d880 hash 7070e3d9 params:( None Value;ERoundingMode RoundingMode;None bAlwaysSign;None bUseGrouping;None MinimumIntegralDigits;None MaximumIntegralDigits;None MinimumFractionalDigits;None MaximumFractionalDigits;None CurrencyCode;None ReturnValue; );
};


instance 1ab5e15ee00
class Layer public : Object
{
	// Fields
	FName LayerName; // 0x28
	bool bIsVisible; // 0x30
	TArray ActorStats; // 0x38

};


instance 1ab5e15ebc0
class Level public : Object
{
	// Fields
	World* OwningWorld; // 0xb8
	Model* Model; // 0xc0
	TArray ModelComponents; // 0xc8
	LevelActorContainer* ActorCluster; // 0xd8
	int NumTextureStreamingUnbuiltComponents; // 0xe0
	int NumTextureStreamingDirtyResources; // 0xe4
	LevelScriptActor* LevelScriptActor; // 0xe8
	NavigationObjectBase* NavListStart; // 0xf0
	NavigationObjectBase* NavListEnd; // 0xf8
	TArray NavDataChunks; // 0x100
	float LightmapTotalSize; // 0x110
	float ShadowmapTotalSize; // 0x114
	TArray StaticNavigableGeometry; // 0x118
	TArray StreamingTextureGuids; // 0x128
	Guid LevelBuildDataId; // 0x1d0
	MapBuildDataRegistry* MapBuildData; // 0x1e0
	IntVector LightBuildLevelOffset; // 0x1e8
	bool bIsLightingScenario; // 0x1f4
	bool bTextureStreamingRotationChanged; // 0x1f4
	bool bStaticComponentsRegisteredInStreamingManager; // 0x1f4
	bool bIsVisible; // 0x1f4
	WorldSettings* WorldSettings; // 0x240
	TArray AssetUserData; // 0x250
	TArray DestroyedReplicatedStaticActors; // 0x270

};


instance 1ab5e15e980
class LevelActorContainer public : Object
{
	// Fields
	TArray Actors; // 0x28

};


instance 1ab5e15e740
class LevelBounds public : Actor
{
	// Fields
	bool bAutoUpdateBounds; // 0x218

};


instance 1ab5e15e500
class LevelScriptActor public : Actor
{
	// Fields
	bool bInputEnabled; // 0x218

	// Functions
	WorldOriginLocationChanged 0x2a26e hash b86dd858 params:( IntVector OldOriginLocation;IntVector NewOriginLocation; );
	SetCinematicMode 0x441ac hash b26baf43 params:( None bCinematicMode;None bHidePlayer;None bAffectsHUD;None bAffectsMovement;None bAffectsTurning; );
	RemoteEvent 0x4da6f hash 16ee1e73 params:( None EventName;None ReturnValue; );
	LevelReset 0x2a268 hash a4edf880 params:(  );
};


instance 1ab5e15e2c0
class LevelScriptBlueprint public : Blueprint
{
	// Fields

};


instance 1ab5e1649c0
class World public : Object
{
	// Fields
	Level* PersistentLevel; // 0x30
	NetDriver* NetDriver; // 0x38
	LineBatchComponent* LineBatcher; // 0x40
	LineBatchComponent* PersistentLineBatcher; // 0x48
	LineBatchComponent* ForegroundLineBatcher; // 0x50
	GameNetworkManager* NetworkManager; // 0x58
	PhysicsCollisionHandler* PhysicsCollisionHandler; // 0x60
	TArray ExtraReferencedObjects; // 0x68
	TArray PerModuleDataObjects; // 0x78
	TArray LevelSequenceActors; // 0x88
	TArray StreamingLevels; // 0x98
	StreamingLevelsToConsider StreamingLevelsToConsider; // 0xa8
	FString StreamingLevelsPrefix; // 0xd0
	Level* CurrentLevelPendingVisibility; // 0xe0
	Level* CurrentLevelPendingInvisibility; // 0xe8
	DemoNetDriver* DemoNetDriver; // 0xf0
	ParticleEventManager* MyParticleEventManager; // 0xf8
	PhysicsVolume* DefaultPhysicsVolume; // 0x100
	bool bAreConstraintsDirty; // 0x11e
	NavigationSystemBase* NavigationSystem; // 0x120
	GameModeBase* AuthorityGameMode; // 0x128
	GameStateBase* GameState; // 0x130
	AISystemBase* AISystem; // 0x138
	AvoidanceManager* AvoidanceManager; // 0x140
	TArray Levels; // 0x148
	TArray LevelCollections; // 0x158
	GameInstance* OwningGameInstance; // 0x170
	TArray ParameterCollectionInstances; // 0x178
	Canvas* CanvasForRenderingToTarget; // 0x188
	Canvas* CanvasForDrawMaterialToRenderTarget; // 0x190
	TArray ComponentsThatNeedEndOfFrameUpdate; // 0x1e8
	TArray ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x1f8
	WorldComposition* WorldComposition; // 0x548
	WorldPSCPool PSCPool; // 0x5c0

	// Functions
	K2_GetWorldSettings 0x4da95 hash 8404095a params:( WorldSettings ReturnValue; );
	HandleTimelineScrubbed 0x4da89 hash 7552e992 params:(  );
};


instance 1ab5e15e080
class LevelStreaming public : Object
{
	// Fields
	World* WorldAsset; // 0x28
	FName PackageNameToLoad; // 0x50
	TArray LODPackageNames; // 0x58
	Transform LevelTransform; // 0x80
	int LevelLODIndex; // 0xb0
	int StreamingPriority; // 0xb4
	bool bShouldBeVisible; // 0xba
	bool bShouldBeLoaded; // 0xba
	bool bLocked; // 0xba
	bool bIsStatic; // 0xba
	bool bShouldBlockOnLoad; // 0xba
	bool bShouldBlockOnUnload; // 0xbb
	bool bDisableDistanceStreaming; // 0xbb
	bool bDrawOnLevelStatusMap; // 0xbb
	LinearColor LevelColor; // 0xbc
	TArray EditorStreamingVolumes; // 0xd0
	float MinTimeBetweenVolumeUnloadRequests; // 0xe0
	MulticastInlineDelegateProperty OnLevelLoaded; // 0xe8 property 0x1ab71e77300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnLevelUnloaded; // 0xf8 property 0x1ab71e77380 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnLevelShown; // 0x108 property 0x1ab71e75300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnLevelHidden; // 0x118 property 0x1ab71e75380 hash 0xb7a5ed1a
	Level* LoadedLevel; // 0x128
	Level* PendingUnloadLevel; // 0x130

	// Functions
	ShouldBeLoaded 0x4db03 hash e3d4a8e4 params:( None ReturnValue; );
	SetShouldBeVisible 0x4daf9 hash c23423b5 params:( None bInShouldBeVisible; );
	SetShouldBeLoaded 0x4daef hash b8a40250 params:( None bInShouldBeLoaded; );
	SetPriority 0x48ccc hash a20f31f3 params:( None NewPriority; );
	SetLevelLODIndex 0x4dae6 hash 95ba1780 params:( None LODIndex; );
	IsStreamingStatePending 0x4dad9 hash 4e55f0f1 params:( None ReturnValue; );
	IsLevelVisible 0x4dad1 hash 16528a67 params:( None ReturnValue; );
	IsLevelLoaded 0x4dac9 hash 56575ac2 params:( None ReturnValue; );
	GetWorldAssetPackageFName 0x4dabb hash 753e66c0 params:( None ReturnValue; );
	GetLoadedLevel 0x4dab3 hash c8a3e26 params:( Level ReturnValue; );
	GetLevelScriptActor 0x4daa8 hash 5fc55bcb params:( LevelScriptActor ReturnValue; );
	CreateInstance 0x4daa0 hash f85634e params:( None UniqueInstanceName;LevelStreaming ReturnValue; );
};


instance 1ab5e164780
class LevelStreamingAlwaysLoaded public : LevelStreaming
{
	// Fields

};


instance 1ab5e164540
class LevelStreamingDynamic public : LevelStreaming
{
	// Fields
	bool bInitiallyLoaded; // 0x148
	bool bInitiallyVisible; // 0x148

	// Functions
	LoadLevelInstanceBySoftObjectPtr 0x4db2f hash 701f3ef6 params:( Object WorldContextObject;World Level;Vector Location;Rotator Rotation;None bOutSuccess;LevelStreamingDynamic ReturnValue; );
	LoadLevelInstance 0x4db25 hash fab55d32 params:( Object WorldContextObject;None LevelName;Vector Location;Rotator Rotation;None bOutSuccess;LevelStreamingDynamic ReturnValue; );
};


instance 1ab5e164300
class LevelStreamingPersistent public : LevelStreaming
{
	// Fields

};


instance 1ab5e1640c0
class LevelStreamingVolume public : Volume
{
	// Fields
	TArray StreamingLevelNames; // 0x250
	bool bEditorPreVisOnly; // 0x260
	bool bDisabled; // 0x260
	BYTE StreamingUsage; // 0x264

};


instance 1ab5e163e80
class LightmappedSurfaceCollection public : Object
{
	// Fields
	Model* SourceModel; // 0x28
	TArray Surfaces; // 0x30

};


instance 1ab5e163c40
class LightMapTexture2D public : Texture2D
{
	// Fields

};


instance 1ab5e163a00
class LightmassCharacterIndirectDetailVolume public : Volume
{
	// Fields

};


instance 1ab5e1637c0
class LightmassImportanceVolume public : Volume
{
	// Fields

};


instance 1ab5e163580
class LightmassPortal public : Actor
{
	// Fields
	LightmassPortalComponent* PortalComponent; // 0x218

};


instance 1ab5e163340
class LightmassPortalComponent public : SceneComponent
{
	// Fields
	BoxComponent* PreviewBox; // 0x1f0

};


instance 1ab5e163100
class LightmassPrimitiveSettingsObject public : Object
{
	// Fields
	LightmassPrimitiveSettings LightmassSettings; // 0x28

};


instance 1ab5e162ec0
class LineBatchComponent public : PrimitiveComponent
{
	// Fields

};


instance 1ab5e162c80
class LocalLightComponent public : LightComponent
{
	// Fields
	ELightUnits IntensityUnits; // 0x338
	float Radius; // 0x33c
	float AttenuationRadius; // 0x340
	LightmassPointLightSettings LightmassSettings; // 0x344

	// Functions
	SetIntensityUnits 0x4dbe7 hash a68b182b params:( UnderlyingType NewIntensityUnits; );
	SetAttenuationRadius 0x4dbdc hash 95403b85 params:( None NewRadius; );
	GetUnitsConversionFactor 0x4dbcf hash 39aff9dd params:( UnderlyingType SrcUnits;UnderlyingType TargetUnits;None CosHalfConeAngle;None ReturnValue; );
};


instance 1ab5e162a40
class LocalPlayer public : Player
{
	// Fields
	GameViewportClient* ViewportClient; // 0x70
	BYTE AspectRatioAxisConstraint; // 0x94
	PlayerController* PendingLevelPlayerControllerClass; // 0x98
	bool bSentSplitJoin; // 0xa0
	int ControllerId; // 0xb8

};


instance 1ab5e162800
class LocalPlayerSubsystem public : Subsystem
{
	// Fields

};


instance 1ab5e1625c0
class LODActor public : Actor
{
	// Fields
	StaticMeshComponent* StaticMeshComponent; // 0x218
	MapProperty ImpostersStaticMeshComponents; // 0x220 property 0x1ab71168da0 hash 0xadd0fb88
	HLODProxy* Proxy; // 0x270
	FName Key; // 0x278
	float LODDrawDistance; // 0x280
	int LODLevel; // 0x284
	TArray SubActors; // 0x288
	BYTE CachedNumHLODLevels; // 0x298

};


instance 1ab5e162380
class MapBuildDataRegistry public : Object
{
	// Fields
	BYTE LevelLightingQuality; // 0x28

};


instance 1ab5e162140
class Material public : MaterialInterface
{
	// Fields
	PhysicalMaterial* PhysMaterial; // 0x88
	ScalarMaterialInput Metallic; // 0x90
	ScalarMaterialInput Specular; // 0xa4
	VectorMaterialInput Normal; // 0xb8
	ColorMaterialInput EmissiveColor; // 0xcc
	BYTE MaterialDomain; // 0xe0
	BYTE BlendMode; // 0xe1
	BYTE DecalBlendMode; // 0xe2
	BYTE MaterialDecalResponse; // 0xe3
	BYTE ShadingModel; // 0xe4
	bool bCastDynamicShadowAsMasked; // 0xe5
	MaterialShadingModelField ShadingModels; // 0xe6
	float OpacityMaskClipValue; // 0xe8
	VectorMaterialInput WorldPositionOffset; // 0xec
	ScalarMaterialInput Refraction; // 0x100
	MaterialAttributesInput MaterialAttributes; // 0x114
	ScalarMaterialInput PixelDepthOffset; // 0x12c
	ShadingModelMaterialInput ShadingModelFromMaterialExpression; // 0x140
	bool bEnableSeparateTranslucency; // 0x154
	bool bEnableResponsiveAA; // 0x154
	bool bScreenSpaceReflections; // 0x154
	bool bContactShadows; // 0x154
	bool TwoSided; // 0x154
	bool DitheredLODTransition; // 0x154
	bool DitherOpacityMask; // 0x154
	bool bAllowNegativeEmissiveColor; // 0x154
	BYTE TranslucencyLightingMode; // 0x155
	bool bEnableMobileSeparateTranslucency; // 0x156
	int NumCustomizedUVs; // 0x158
	float TranslucencyDirectionalLightingIntensity; // 0x15c
	float TranslucentShadowDensityScale; // 0x160
	float TranslucentSelfShadowDensityScale; // 0x164
	float TranslucentSelfShadowSecondDensityScale; // 0x168
	float TranslucentSelfShadowSecondOpacity; // 0x16c
	float TranslucentBackscatteringExponent; // 0x170
	LinearColor TranslucentMultipleScatteringExtinction; // 0x174
	float TranslucentShadowStartOffset; // 0x184
	bool bDisableDepthTest; // 0x188
	bool bWriteOnlyAlpha; // 0x188
	bool bGenerateSphericalParticleNormals; // 0x188
	bool bTangentSpaceNormal; // 0x188
	bool bUseEmissiveForDynamicAreaLighting; // 0x188
	bool bBlockGI; // 0x188
	bool bUsedAsSpecialEngineMaterial; // 0x188
	bool bUsedWithSkeletalMesh; // 0x188
	bool bUsedWithEditorCompositing; // 0x189
	bool bUsedWithParticleSprites; // 0x189
	bool bUsedWithBeamTrails; // 0x189
	bool bUsedWithMeshParticles; // 0x189
	bool bUsedWithNiagaraSprites; // 0x189
	bool bUsedWithNiagaraRibbons; // 0x189
	bool bUsedWithNiagaraMeshParticles; // 0x189
	bool bUsedWithGeometryCache; // 0x189
	bool bUsedWithStaticLighting; // 0x18a
	bool bUsedWithMorphTargets; // 0x18a
	bool bUsedWithSplineMeshes; // 0x18a
	bool bUsedWithInstancedStaticMeshes; // 0x18a
	bool bUsedWithGeometryCollections; // 0x18a
	bool bUsesDistortion; // 0x18a
	bool bUsedWithClothing; // 0x18a
	bool bUsedWithWater; // 0x18c
	bool bUsedWithHairStrands; // 0x18c
	bool bUsedWithUI; // 0x190
	bool bAutomaticallySetUsageInEditor; // 0x190
	bool bFullyRough; // 0x190
	bool bUseFullPrecision; // 0x190
	bool bUseLightmapDirectionality; // 0x190
	bool bUseHQForwardReflections; // 0x190
	bool bUsePlanarForwardReflections; // 0x190
	bool bNormalCurvatureToRoughness; // 0x190
	BYTE D3D11TessellationMode; // 0x191
	bool bEnableCrackFreeDisplacement; // 0x192
	bool bEnableAdaptiveTessellation; // 0x192
	bool AllowTranslucentCustomDepthWrites; // 0x192
	bool Wireframe; // 0x192
	bool bOutputVelocityOnBasePass; // 0x192
	TArray Expressions; // 0x198
	TArray MaterialFunctionInfos; // 0x1a8
	TArray MaterialParameterCollectionInfos; // 0x1b8
	bool bCanMaskedBeAssumedOpaque; // 0x1c8
	bool bIsMasked; // 0x1c8
	bool bIsPreviewMaterial; // 0x1c8
	bool bIsFunctionPreviewMaterial; // 0x1c8
	bool bUseMaterialAttributes; // 0x1c8
	bool bCastRayTracedShadows; // 0x1c8
	bool bUseTranslucencyVertexFog; // 0x1c8
	bool bIsSky; // 0x1c8
	bool bComputeFogPerPixel; // 0x1c9
	bool bOutputTranslucentVelocity; // 0x1c9
	bool bAllowDevelopmentShaderCompile; // 0x1c9
	bool bIsMaterialEditorStatsMaterial; // 0x1c9
	BYTE BlendableLocation; // 0x1ca
	bool BlendableOutputAlpha; // 0x1cb
	bool bEnableStencilTest; // 0x1cb
	BYTE StencilCompare; // 0x1cc
	BYTE StencilRefValue; // 0x1cd
	BYTE RefractionMode; // 0x1ce
	int BlendablePriority; // 0x1d0
	int UsageFlagWarnings; // 0x1d4
	float RefractionDepthBias; // 0x1d8
	Guid StateId; // 0x1dc
	float MaxDisplacement; // 0x1ec
	TArray CachedQualityLevelsUsed; // 0x1f8
	TArray ExpressionTextureReferences; // 0x288

};


instance 1ab5e161f00
class MaterialBillboardComponent public : PrimitiveComponent
{
	// Fields
	TArray Elements; // 0x3d8

	// Functions
	SetElements 0x4dc27 hash a3ddc08e params:( NewElements NewElements; );
	AddElement 0x4dc21 hash c970b558 params:( MaterialInterface Material;CurveFloat DistanceToOpacityCurve;None bSizeIsInScreenSpace;None BaseSizeX;None BaseSizeY;CurveFloat DistanceToSizeCurve; );
};


instance 1ab5e161cc0
class MaterialExpressionAbs public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e161a80
class MaterialExpressionActorPositionWS public : MaterialExpression
{
	// Fields

};


instance 1ab5e161840
class MaterialExpressionAdd public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c

};


instance 1ab5e161600
class MaterialExpressionAntialiasedTextureMask public : MaterialExpressionTextureSampleParameter2D
{
	// Fields
	float Threshold; // 0xf0
	BYTE Channel; // 0xf4

};


instance 1ab5e1613c0
class MaterialExpressionAppendVector public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54

};


instance 1ab5e161180
class MaterialExpressionArccosine public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e160f40
class MaterialExpressionArccosineFast public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e160d00
class MaterialExpressionArcsine public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e160ac0
class MaterialExpressionArcsineFast public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e160880
class MaterialExpressionArctangent public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e160640
class MaterialExpressionArctangent2 public : MaterialExpression
{
	// Fields
	ExpressionInput Y; // 0x40
	ExpressionInput X; // 0x54

};


instance 1ab5e160400
class MaterialExpressionArctangent2Fast public : MaterialExpression
{
	// Fields
	ExpressionInput Y; // 0x40
	ExpressionInput X; // 0x54

};


instance 1ab5e1601c0
class MaterialExpressionArctangentFast public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e169400
class MaterialExpressionAtmosphericFogColor public : MaterialExpression
{
	// Fields
	ExpressionInput WorldPosition; // 0x40

};


instance 1ab5e1691c0
class MaterialExpressionAtmosphericLightColor public : MaterialExpression
{
	// Fields

};


instance 1ab5e168f80
class MaterialExpressionAtmosphericLightVector public : MaterialExpression
{
	// Fields

};


instance 1ab5e168d40
class MaterialExpressionBentNormalCustomOutput public : MaterialExpressionCustomOutput
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e168b00
class MaterialExpressionBlackBody public : MaterialExpression
{
	// Fields
	ExpressionInput Temp; // 0x40

};


instance 1ab5e1688c0
class MaterialExpressionBlendMaterialAttributes public : MaterialExpression
{
	// Fields
	MaterialAttributesInput A; // 0x40
	MaterialAttributesInput B; // 0x58
	ExpressionInput Alpha; // 0x70
	BYTE PixelAttributeBlendType; // 0x84
	BYTE VertexAttributeBlendType; // 0x85

};


instance 1ab5e168680
class MaterialExpressionBreakMaterialAttributes public : MaterialExpression
{
	// Fields
	MaterialAttributesInput MaterialAttributes; // 0x40

};


instance 1ab5e168440
class MaterialExpressionBumpOffset public : MaterialExpression
{
	// Fields
	ExpressionInput Coordinate; // 0x40
	ExpressionInput Height; // 0x54
	ExpressionInput HeightRatioInput; // 0x68
	float HeightRatio; // 0x7c
	float ReferencePlane; // 0x80
	int ConstCoordinate; // 0x84

};


instance 1ab5e168200
class MaterialExpressionCameraPositionWS public : MaterialExpression
{
	// Fields

};


instance 1ab5e167fc0
class MaterialExpressionCameraVectorWS public : MaterialExpression
{
	// Fields

};


instance 1ab5e167d80
class MaterialExpressionCeil public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e1676c0
class MaterialExpressionParameter public : MaterialExpression
{
	// Fields
	FName ParameterName; // 0x40
	Guid ExpressionGUID; // 0x48

};


instance 1ab5e167900
class MaterialExpressionVectorParameter public : MaterialExpressionParameter
{
	// Fields
	LinearColor DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x68
	BYTE PrimitiveDataIndex; // 0x69

};


instance 1ab5e167b40
class MaterialExpressionChannelMaskParameter public : MaterialExpressionVectorParameter
{
	// Fields
	BYTE MaskChannel; // 0x70
	ExpressionInput Input; // 0x74

};


instance 1ab5e167480
class MaterialExpressionClamp public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40
	ExpressionInput Min; // 0x54
	ExpressionInput Max; // 0x68
	BYTE ClampMode; // 0x7c
	float MinDefault; // 0x80
	float MaxDefault; // 0x84

};


instance 1ab5e167240
class MaterialExpressionClearCoatNormalCustomOutput public : MaterialExpressionCustomOutput
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e167000
class MaterialExpressionCollectionParameter public : MaterialExpression
{
	// Fields
	MaterialParameterCollection* Collection; // 0x40
	FName ParameterName; // 0x48
	Guid ParameterId; // 0x50

};


instance 1ab5e166dc0
class MaterialExpressionComment public : MaterialExpression
{
	// Fields
	int SizeX; // 0x40
	int SizeY; // 0x44
	FString Text; // 0x48
	LinearColor CommentColor; // 0x58
	int FontSize; // 0x68

};


instance 1ab5e166b80
class MaterialExpressionComponentMask public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40
	bool R; // 0x54
	bool G; // 0x54
	bool B; // 0x54
	bool A; // 0x54

};


instance 1ab5e166940
class MaterialExpressionConstant public : MaterialExpression
{
	// Fields
	float R; // 0x40

};


instance 1ab5e166700
class MaterialExpressionConstant2Vector public : MaterialExpression
{
	// Fields
	float R; // 0x40
	float G; // 0x44

};


instance 1ab5e1664c0
class MaterialExpressionConstant3Vector public : MaterialExpression
{
	// Fields
	LinearColor Constant; // 0x40

};


instance 1ab5e166280
class MaterialExpressionConstant4Vector public : MaterialExpression
{
	// Fields
	LinearColor Constant; // 0x40

};


instance 1ab5e166040
class MaterialExpressionConstantBiasScale public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40
	float Bias; // 0x54
	float Scale; // 0x58

};


instance 1ab5e165e00
class MaterialExpressionCosine public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40
	float Period; // 0x54

};


instance 1ab5e165bc0
class MaterialExpressionCrossProduct public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54

};


instance 1ab5e165740
class MaterialExpressionScalarParameter public : MaterialExpressionParameter
{
	// Fields
	float DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x5c
	BYTE PrimitiveDataIndex; // 0x5d

};


instance 1ab5e165980
class MaterialExpressionCurveAtlasRowParameter public : MaterialExpressionScalarParameter
{
	// Fields
	CurveLinearColor* Curve; // 0x60
	CurveLinearColorAtlas* Atlas; // 0x68
	ExpressionInput InputTime; // 0x70

};


instance 1ab5e165500
class MaterialExpressionCustom public : MaterialExpression
{
	// Fields
	FString Code; // 0x40
	BYTE OutputType; // 0x50
	FString Description; // 0x58
	TArray Inputs; // 0x68

};


instance 1ab5e1652c0
class MaterialExpressionDDX public : MaterialExpression
{
	// Fields
	ExpressionInput Value; // 0x40

};


instance 1ab5e165080
class MaterialExpressionDDY public : MaterialExpression
{
	// Fields
	ExpressionInput Value; // 0x40

};


instance 1ab5e164e40
class MaterialExpressionDecalDerivative public : MaterialExpression
{
	// Fields

};


instance 1ab5e164c00
class MaterialExpressionDecalLifetimeOpacity public : MaterialExpression
{
	// Fields

};


instance 1ab5e16de40
class MaterialExpressionDecalMipmapLevel public : MaterialExpression
{
	// Fields
	ExpressionInput TextureSize; // 0x40
	float ConstWidth; // 0x54
	float ConstHeight; // 0x58

};


instance 1ab5e16dc00
class MaterialExpressionDeltaTime public : MaterialExpression
{
	// Fields

};


instance 1ab5e16d9c0
class MaterialExpressionDepthFade public : MaterialExpression
{
	// Fields
	ExpressionInput InOpacity; // 0x40
	ExpressionInput FadeDistance; // 0x54
	float OpacityDefault; // 0x68
	float FadeDistanceDefault; // 0x6c

};


instance 1ab5e16d780
class MaterialExpressionDepthOfFieldFunction public : MaterialExpression
{
	// Fields
	BYTE FunctionValue; // 0x40
	ExpressionInput Depth; // 0x44

};


instance 1ab5e16d540
class MaterialExpressionDeriveNormalZ public : MaterialExpression
{
	// Fields
	ExpressionInput InXY; // 0x40

};


instance 1ab5e16d300
class MaterialExpressionDesaturation public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40
	ExpressionInput Fraction; // 0x54
	LinearColor LuminanceFactors; // 0x68

};


instance 1ab5e16d0c0
class MaterialExpressionDistance public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54

};


instance 1ab5e16ce80
class MaterialExpressionDistanceCullFade public : MaterialExpression
{
	// Fields

};


instance 1ab5e16cc40
class MaterialExpressionDistanceFieldGradient public : MaterialExpression
{
	// Fields
	ExpressionInput Position; // 0x40

};


instance 1ab5e16ca00
class MaterialExpressionDistanceToNearestSurface public : MaterialExpression
{
	// Fields
	ExpressionInput Position; // 0x40

};


instance 1ab5e16c7c0
class MaterialExpressionDivide public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c

};


instance 1ab5e16c580
class MaterialExpressionDotProduct public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54

};


instance 1ab5e16c340
class MaterialExpressionDynamicParameter public : MaterialExpression
{
	// Fields
	TArray ParamNames; // 0x40
	LinearColor DefaultValue; // 0x50
	int ParameterIndex; // 0x60

};


instance 1ab5e16c100
class MaterialExpressionEyeAdaptation public : MaterialExpression
{
	// Fields

};


instance 1ab5e16bec0
class MaterialExpressionFeatureLevelSwitch public : MaterialExpression
{
	// Fields
	ExpressionInput Default; // 0x40
	ExpressionInput Inputs; // 0x54

};


instance 1ab5e16bc80
class MaterialExpressionFloor public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e16ba40
class MaterialExpressionFmod public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54

};


instance 1ab5e16b800
class MaterialExpressionFontSample public : MaterialExpression
{
	// Fields
	Font* Font; // 0x40
	int FontTexturePage; // 0x48

};


instance 1ab5e16b5c0
class MaterialExpressionFontSampleParameter public : MaterialExpressionFontSample
{
	// Fields
	FName ParameterName; // 0x50
	Guid ExpressionGUID; // 0x58
	FName Group; // 0x68

};


instance 1ab5e16b380
class MaterialExpressionFrac public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e16b140
class MaterialExpressionFresnel public : MaterialExpression
{
	// Fields
	ExpressionInput ExponentIn; // 0x40
	float Exponent; // 0x54
	ExpressionInput BaseReflectFractionIn; // 0x58
	float BaseReflectFraction; // 0x6c
	ExpressionInput Normal; // 0x70

};


instance 1ab5e16af00
class MaterialExpressionFunctionInput public : MaterialExpression
{
	// Fields
	ExpressionInput Preview; // 0x40
	FName InputName; // 0x54
	FString Description; // 0x60
	Guid ID; // 0x70
	BYTE InputType; // 0x80
	Vector4 PreviewValue; // 0x90
	bool bUsePreviewValueAsDefault; // 0xa0
	int SortPriority; // 0xa4
	bool bCompilingFunctionPreview; // 0xa8

};


instance 1ab5e16acc0
class MaterialExpressionFunctionOutput public : MaterialExpression
{
	// Fields
	FName OutputName; // 0x40
	FString Description; // 0x48
	int SortPriority; // 0x58
	ExpressionInput A; // 0x5c
	bool bLastPreviewed; // 0x70
	Guid ID; // 0x74

};


instance 1ab5e16aa80
class MaterialExpressionGetMaterialAttributes public : MaterialExpression
{
	// Fields
	MaterialAttributesInput MaterialAttributes; // 0x40
	TArray AttributeGetTypes; // 0x58

};


instance 1ab5e16a840
class MaterialExpressionGIReplace public : MaterialExpression
{
	// Fields
	ExpressionInput Default; // 0x40
	ExpressionInput StaticIndirect; // 0x54
	ExpressionInput DynamicIndirect; // 0x68

};


instance 1ab5e16a600
class MaterialExpressionHairAttributes public : MaterialExpression
{
	// Fields

};


instance 1ab5e16a3c0
class MaterialExpressionIf public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54
	ExpressionInput AGreaterThanB; // 0x68
	ExpressionInput AEqualsB; // 0x7c
	ExpressionInput ALessThanB; // 0x90
	float EqualsThreshold; // 0xa4
	float ConstB; // 0xa8
	float ConstAEqualsB; // 0xac

};


instance 1ab5e16a180
class MaterialExpressionLightmapUVs public : MaterialExpression
{
	// Fields

};


instance 1ab5e169f40
class MaterialExpressionLightmassReplace public : MaterialExpression
{
	// Fields
	ExpressionInput Realtime; // 0x40
	ExpressionInput Lightmass; // 0x54

};


instance 1ab5e169d00
class MaterialExpressionLightVector public : MaterialExpression
{
	// Fields

};


instance 1ab5e169ac0
class MaterialExpressionLinearInterpolate public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54
	ExpressionInput Alpha; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstAlpha; // 0x84

};


instance 1ab5e169880
class MaterialExpressionLogarithm10 public : MaterialExpression
{
	// Fields
	ExpressionInput X; // 0x40

};


instance 1ab5e169640
class MaterialExpressionLogarithm2 public : MaterialExpression
{
	// Fields
	ExpressionInput X; // 0x40

};


instance 1ab5e16fdc0
class MaterialExpressionMakeMaterialAttributes public : MaterialExpression
{
	// Fields
	ExpressionInput BaseColor; // 0x40
	ExpressionInput Metallic; // 0x54
	ExpressionInput Specular; // 0x68
	ExpressionInput Roughness; // 0x7c
	ExpressionInput EmissiveColor; // 0x90
	ExpressionInput Opacity; // 0xa4
	ExpressionInput OpacityMask; // 0xb8
	ExpressionInput Normal; // 0xcc
	ExpressionInput WorldPositionOffset; // 0xe0
	ExpressionInput WorldDisplacement; // 0xf4
	ExpressionInput TessellationMultiplier; // 0x108
	ExpressionInput SubsurfaceColor; // 0x11c
	ExpressionInput ClearCoat; // 0x130
	ExpressionInput ClearCoatRoughness; // 0x144
	ExpressionInput AmbientOcclusion; // 0x158
	ExpressionInput Refraction; // 0x16c
	ExpressionInput CustomizedUVs; // 0x180
	ExpressionInput PixelDepthOffset; // 0x220
	ExpressionInput ShadingModel; // 0x234

};


instance 1ab5e16fb80
class MaterialExpressionMapARPassthroughCameraUV public : MaterialExpression
{
	// Fields
	ExpressionInput Coordinates; // 0x40

};


instance 1ab5e16f940
class MaterialExpressionMaterialAttributeLayers public : MaterialExpression
{
	// Fields
	FName ParameterName; // 0x40
	Guid ExpressionGUID; // 0x48
	MaterialAttributesInput Input; // 0x58
	MaterialLayersFunctions DefaultLayers; // 0x70
	TArray LayerCallers; // 0xb0
	int NumActiveLayerCallers; // 0xc0
	TArray BlendCallers; // 0xc8
	int NumActiveBlendCallers; // 0xd8
	bool bIsLayerGraphBuilt; // 0xdc

};


instance 1ab5e16f700
class MaterialExpressionMaterialFunctionCall public : MaterialExpression
{
	// Fields
	MaterialFunctionInterface* MaterialFunction; // 0x40
	MaterialParameterInfo FunctionParameterInfo; // 0x48

};


instance 1ab5e16f4c0
class MaterialExpressionMaterialLayerOutput public : MaterialExpressionFunctionOutput
{
	// Fields

};


instance 1ab5e16f280
class MaterialExpressionMaterialProxyReplace public : MaterialExpression
{
	// Fields
	ExpressionInput Realtime; // 0x40
	ExpressionInput MaterialProxy; // 0x54

};


instance 1ab5e16f040
class MaterialExpressionMax public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c

};


instance 1ab5e16ee00
class MaterialExpressionMin public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c

};


instance 1ab5e16ebc0
class MaterialExpressionMultiply public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c

};


instance 1ab5e16e980
class MaterialExpressionNoise public : MaterialExpression
{
	// Fields
	ExpressionInput Position; // 0x40
	ExpressionInput FilterWidth; // 0x54
	float Scale; // 0x68
	int Quality; // 0x6c
	BYTE NoiseFunction; // 0x70
	bool bTurbulence; // 0x74
	int Levels; // 0x78
	float OutputMin; // 0x7c
	float OutputMax; // 0x80
	float LevelScale; // 0x84
	bool bTiling; // 0x88
	int RepeatSize; // 0x8c

};


instance 1ab5e16e740
class MaterialExpressionNormalize public : MaterialExpression
{
	// Fields
	ExpressionInput VectorInput; // 0x40

};


instance 1ab5e16e500
class MaterialExpressionObjectBounds public : MaterialExpression
{
	// Fields

};


instance 1ab5e16e2c0
class MaterialExpressionObjectOrientation public : MaterialExpression
{
	// Fields

};


instance 1ab5e16e080
class MaterialExpressionObjectPositionWS public : MaterialExpression
{
	// Fields

};


instance 1ab5e1849c0
class MaterialExpressionObjectRadius public : MaterialExpression
{
	// Fields

};


instance 1ab5e184780
class MaterialExpressionOneMinus public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e184540
class MaterialExpressionPanner public : MaterialExpression
{
	// Fields
	ExpressionInput Coordinate; // 0x40
	ExpressionInput Time; // 0x54
	ExpressionInput Speed; // 0x68
	float SpeedX; // 0x7c
	float SpeedY; // 0x80
	int ConstCoordinate; // 0x84
	bool bFractionalPart; // 0x88

};


instance 1ab5e184300
class MaterialExpressionParticleColor public : MaterialExpression
{
	// Fields

};


instance 1ab5e1840c0
class MaterialExpressionParticleDirection public : MaterialExpression
{
	// Fields

};


instance 1ab5e183e80
class MaterialExpressionParticleMacroUV public : MaterialExpression
{
	// Fields

};


instance 1ab5e183c40
class MaterialExpressionParticleMotionBlurFade public : MaterialExpression
{
	// Fields

};


instance 1ab5e183a00
class MaterialExpressionParticlePositionWS public : MaterialExpression
{
	// Fields

};


instance 1ab5e1837c0
class MaterialExpressionParticleRadius public : MaterialExpression
{
	// Fields

};


instance 1ab5e183580
class MaterialExpressionParticleRandom public : MaterialExpression
{
	// Fields

};


instance 1ab5e183340
class MaterialExpressionParticleRelativeTime public : MaterialExpression
{
	// Fields

};


instance 1ab5e183100
class MaterialExpressionParticleSize public : MaterialExpression
{
	// Fields

};


instance 1ab5e182ec0
class MaterialExpressionParticleSpeed public : MaterialExpression
{
	// Fields

};


instance 1ab5e182c80
class MaterialExpressionParticleSubUV public : MaterialExpressionTextureSample
{
	// Fields
	bool bBlend; // 0xd0

};


instance 1ab5e182a40
class MaterialExpressionParticleSubUVProperties public : MaterialExpression
{
	// Fields

};


instance 1ab5e182800
class MaterialExpressionPerInstanceFadeAmount public : MaterialExpression
{
	// Fields

};


instance 1ab5e1825c0
class MaterialExpressionPerInstanceRandom public : MaterialExpression
{
	// Fields

};


instance 1ab5e182380
class MaterialExpressionPixelDepth public : MaterialExpression
{
	// Fields

};


instance 1ab5e182140
class MaterialExpressionPixelNormalWS public : MaterialExpression
{
	// Fields

};


instance 1ab5e181f00
class MaterialExpressionPower public : MaterialExpression
{
	// Fields
	ExpressionInput Base; // 0x40
	ExpressionInput Exponent; // 0x54
	float ConstExponent; // 0x68

};


instance 1ab5e181cc0
class MaterialExpressionPrecomputedAOMask public : MaterialExpression
{
	// Fields

};


instance 1ab5e181a80
class MaterialExpressionPreSkinnedLocalBounds public : MaterialExpression
{
	// Fields

};


instance 1ab5e181840
class MaterialExpressionPreSkinnedNormal public : MaterialExpression
{
	// Fields

};


instance 1ab5e181600
class MaterialExpressionPreSkinnedPosition public : MaterialExpression
{
	// Fields

};


instance 1ab5e1813c0
class MaterialExpressionPreviousFrameSwitch public : MaterialExpression
{
	// Fields
	ExpressionInput CurrentFrame; // 0x40
	ExpressionInput PreviousFrame; // 0x54

};


instance 1ab5e181180
class MaterialExpressionQualitySwitch public : MaterialExpression
{
	// Fields
	ExpressionInput Default; // 0x40
	ExpressionInput Inputs; // 0x54

};


instance 1ab5e180f40
class MaterialExpressionRayTracingQualitySwitch public : MaterialExpression
{
	// Fields
	ExpressionInput Normal; // 0x40
	ExpressionInput RayTraced; // 0x54

};


instance 1ab5e180d00
class MaterialExpressionReflectionVectorWS public : MaterialExpression
{
	// Fields
	ExpressionInput CustomWorldNormal; // 0x40
	bool bNormalizeCustomWorldNormal; // 0x54

};


instance 1ab5e180ac0
class MaterialExpressionReroute public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e180880
class MaterialExpressionRotateAboutAxis public : MaterialExpression
{
	// Fields
	ExpressionInput NormalizedRotationAxis; // 0x40
	ExpressionInput RotationAngle; // 0x54
	ExpressionInput PivotPoint; // 0x68
	ExpressionInput Position; // 0x7c
	float Period; // 0x90

};


instance 1ab5e180640
class MaterialExpressionRotator public : MaterialExpression
{
	// Fields
	ExpressionInput Coordinate; // 0x40
	ExpressionInput Time; // 0x54
	float CenterX; // 0x68
	float CenterY; // 0x6c
	float Speed; // 0x70
	int ConstCoordinate; // 0x74

};


instance 1ab5e180400
class MaterialExpressionRound public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e1801c0
class MaterialExpressionRuntimeVirtualTextureOutput public : MaterialExpressionCustomOutput
{
	// Fields
	ExpressionInput BaseColor; // 0x40
	ExpressionInput Specular; // 0x54
	ExpressionInput Roughness; // 0x68
	ExpressionInput Normal; // 0x7c
	ExpressionInput WorldHeight; // 0x90
	ExpressionInput Opacity; // 0xa4

};


instance 1ab5e189400
class MaterialExpressionRuntimeVirtualTextureReplace public : MaterialExpression
{
	// Fields
	ExpressionInput Default; // 0x40
	ExpressionInput VirtualTextureOutput; // 0x54

};


instance 1ab5e1891c0
class MaterialExpressionRuntimeVirtualTextureSample public : MaterialExpression
{
	// Fields
	ExpressionInput Coordinates; // 0x40
	ExpressionInput MipValue; // 0x54
	RuntimeVirtualTexture* VirtualTexture; // 0x68
	ERuntimeVirtualTextureMaterialType MaterialType; // 0x70
	bool bSinglePhysicalSpace; // 0x71
	BYTE MipValueMode; // 0x72

};


instance 1ab5e188f80
class MaterialExpressionRuntimeVirtualTextureSampleParameter public : MaterialExpressionRuntimeVirtualTextureSample
{
	// Fields
	FName ParameterName; // 0x78
	Guid ExpressionGUID; // 0x80
	FName Group; // 0x90

};


instance 1ab5e188d40
class MaterialExpressionSaturate public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e188b00
class MaterialExpressionSceneColor public : MaterialExpression
{
	// Fields
	BYTE InputMode; // 0x40
	ExpressionInput Input; // 0x44
	ExpressionInput OffsetFraction; // 0x58
	Vector2D ConstInput; // 0x6c

};


instance 1ab5e1888c0
class MaterialExpressionSceneDepth public : MaterialExpression
{
	// Fields
	BYTE InputMode; // 0x40
	ExpressionInput Input; // 0x44
	ExpressionInput Coordinates; // 0x58
	Vector2D ConstInput; // 0x6c

};


instance 1ab5e188680
class MaterialExpressionSceneTexelSize public : MaterialExpression
{
	// Fields

};


instance 1ab5e188440
class MaterialExpressionSceneTexture public : MaterialExpression
{
	// Fields
	ExpressionInput Coordinates; // 0x40
	BYTE SceneTextureId; // 0x54
	bool bFiltered; // 0x55

};


instance 1ab5e188200
class MaterialExpressionScreenPosition public : MaterialExpression
{
	// Fields

};


instance 1ab5e187fc0
class MaterialExpressionSetMaterialAttributes public : MaterialExpression
{
	// Fields
	TArray Inputs; // 0x40
	TArray AttributeSetTypes; // 0x50

};


instance 1ab5e187d80
class MaterialExpressionShaderStageSwitch public : MaterialExpression
{
	// Fields
	ExpressionInput PixelShader; // 0x40
	ExpressionInput VertexShader; // 0x54

};


instance 1ab5e187b40
class MaterialExpressionShadingModel public : MaterialExpression
{
	// Fields
	BYTE ShadingModel; // 0x40

};


instance 1ab5e187900
class MaterialExpressionShadingPathSwitch public : MaterialExpression
{
	// Fields
	ExpressionInput Default; // 0x40
	ExpressionInput Inputs; // 0x54

};


instance 1ab5e1876c0
class MaterialExpressionShadowReplace public : MaterialExpression
{
	// Fields
	ExpressionInput Default; // 0x40
	ExpressionInput Shadow; // 0x54

};


instance 1ab5e187480
class MaterialExpressionSign public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e187240
class MaterialExpressionSine public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40
	float Period; // 0x54

};


instance 1ab5e187000
class MaterialExpressionSingleLayerWaterMaterialOutput public : MaterialExpressionCustomOutput
{
	// Fields
	ExpressionInput ScatteringCoefficients; // 0x40
	ExpressionInput AbsorptionCoefficients; // 0x54
	ExpressionInput PhaseG; // 0x68

};


instance 1ab5e186dc0
class MaterialExpressionSkyAtmosphereLightDirection public : MaterialExpression
{
	// Fields
	int LightIndex; // 0x40

};


instance 1ab5e186b80
class MaterialExpressionSkyAtmosphereLightIlluminance public : MaterialExpression
{
	// Fields
	int LightIndex; // 0x40
	ExpressionInput WorldPosition; // 0x44

};


instance 1ab5e186940
class MaterialExpressionSkyAtmosphereLightDiskLuminance public : MaterialExpression
{
	// Fields
	int LightIndex; // 0x40

};


instance 1ab5e186700
class MaterialExpressionSkyAtmosphereAerialPerspective public : MaterialExpression
{
	// Fields
	ExpressionInput WorldPosition; // 0x40

};


instance 1ab5e1864c0
class MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance public : MaterialExpression
{
	// Fields

};


instance 1ab5e186280
class MaterialExpressionSkyAtmosphereViewLuminance public : MaterialExpression
{
	// Fields

};


instance 1ab5e186040
class MaterialExpressionSobol public : MaterialExpression
{
	// Fields
	ExpressionInput Cell; // 0x40
	ExpressionInput Index; // 0x54
	ExpressionInput Seed; // 0x68
	int ConstIndex; // 0x7c
	Vector2D ConstSeed; // 0x80

};


instance 1ab5e185e00
class MaterialExpressionSpeedTree public : MaterialExpression
{
	// Fields
	ExpressionInput GeometryInput; // 0x40
	ExpressionInput WindInput; // 0x54
	ExpressionInput LODInput; // 0x68
	ExpressionInput ExtraBendWS; // 0x7c
	BYTE GeometryType; // 0x90
	BYTE WindType; // 0x91
	BYTE LODType; // 0x92
	float BillboardThreshold; // 0x94
	bool bAccurateWindVelocities; // 0x98

};


instance 1ab5e185bc0
class MaterialExpressionSphereMask public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54
	ExpressionInput Radius; // 0x68
	ExpressionInput Hardness; // 0x7c
	float AttenuationRadius; // 0x90
	float HardnessPercent; // 0x94

};


instance 1ab5e185980
class MaterialExpressionSphericalParticleOpacity public : MaterialExpression
{
	// Fields
	ExpressionInput Density; // 0x40
	float ConstantDensity; // 0x54

};


instance 1ab5e185740
class MaterialExpressionSquareRoot public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e185500
class MaterialExpressionStaticBool public : MaterialExpression
{
	// Fields
	bool Value; // 0x40

};


instance 1ab5e1852c0
class MaterialExpressionStaticBoolParameter public : MaterialExpressionParameter
{
	// Fields
	bool DefaultValue; // 0x58

};


instance 1ab5e185080
class MaterialExpressionStaticComponentMaskParameter public : MaterialExpressionParameter
{
	// Fields
	ExpressionInput Input; // 0x58
	bool DefaultR; // 0x6c
	bool DefaultG; // 0x6c
	bool DefaultB; // 0x6c
	bool DefaultA; // 0x6c

};


instance 1ab5e184e40
class MaterialExpressionStaticSwitch public : MaterialExpression
{
	// Fields
	bool DefaultValue; // 0x40
	ExpressionInput A; // 0x44
	ExpressionInput B; // 0x58
	ExpressionInput Value; // 0x6c

};


instance 1ab5e184c00
class MaterialExpressionStaticSwitchParameter public : MaterialExpressionStaticBoolParameter
{
	// Fields
	ExpressionInput A; // 0x60
	ExpressionInput B; // 0x74

};


instance 1ab5e18de40
class MaterialExpressionSubtract public : MaterialExpression
{
	// Fields
	ExpressionInput A; // 0x40
	ExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c

};


instance 1ab5e18dc00
class MaterialExpressionTangent public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40
	float Period; // 0x54

};


instance 1ab5e18d9c0
class MaterialExpressionTangentOutput public : MaterialExpressionCustomOutput
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e18d780
class MaterialExpressionTemporalSobol public : MaterialExpression
{
	// Fields
	ExpressionInput Index; // 0x40
	ExpressionInput Seed; // 0x54
	int ConstIndex; // 0x68
	Vector2D ConstSeed; // 0x6c

};


instance 1ab5e18d540
class MaterialExpressionTextureCoordinate public : MaterialExpression
{
	// Fields
	int CoordinateIndex; // 0x40
	float UTiling; // 0x44
	float VTiling; // 0x48
	bool UnMirrorU; // 0x4c
	bool UnMirrorV; // 0x4c

};


instance 1ab5e18d300
class MaterialExpressionTextureObject public : MaterialExpressionTextureBase
{
	// Fields

};


instance 1ab5e18d0c0
class MaterialExpressionTextureObjectParameter public : MaterialExpressionTextureSampleParameter
{
	// Fields

};


instance 1ab5e18ce80
class MaterialExpressionTextureProperty public : MaterialExpression
{
	// Fields
	ExpressionInput TextureObject; // 0x40
	BYTE Property; // 0x54

};


instance 1ab5e18cc40
class MaterialExpressionTextureSampleParameter2DArray public : MaterialExpressionTextureSampleParameter
{
	// Fields

};


instance 1ab5e18ca00
class MaterialExpressionTextureSampleParameterCube public : MaterialExpressionTextureSampleParameter
{
	// Fields

};


instance 1ab5e18c7c0
class MaterialExpressionTextureSampleParameterSubUV public : MaterialExpressionTextureSampleParameter2D
{
	// Fields
	bool bBlend; // 0xf0

};


instance 1ab5e18c580
class MaterialExpressionTextureSampleParameterVolume public : MaterialExpressionTextureSampleParameter
{
	// Fields

};


instance 1ab5e18c340
class MaterialExpressionTime public : MaterialExpression
{
	// Fields
	bool bIgnorePause; // 0x40
	bool bOverride_Period; // 0x40
	float Period; // 0x44

};


instance 1ab5e18c100
class MaterialExpressionTransform public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40
	BYTE TransformSourceType; // 0x54
	BYTE TransformType; // 0x55

};


instance 1ab5e18bec0
class MaterialExpressionTransformPosition public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40
	BYTE TransformSourceType; // 0x54
	BYTE TransformType; // 0x55

};


instance 1ab5e18bc80
class MaterialExpressionTruncate public : MaterialExpression
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e18ba40
class MaterialExpressionTwoSidedSign public : MaterialExpression
{
	// Fields

};


instance 1ab5e18b800
class MaterialExpressionVectorNoise public : MaterialExpression
{
	// Fields
	ExpressionInput Position; // 0x40
	BYTE NoiseFunction; // 0x54
	int Quality; // 0x58
	bool bTiling; // 0x5c
	int TileSize; // 0x60

};


instance 1ab5e18b5c0
class MaterialExpressionVertexColor public : MaterialExpression
{
	// Fields

};


instance 1ab5e18b380
class MaterialExpressionVertexInterpolator public : MaterialExpressionCustomOutput
{
	// Fields
	ExpressionInput Input; // 0x40

};


instance 1ab5e18b140
class MaterialExpressionVertexNormalWS public : MaterialExpression
{
	// Fields

};


instance 1ab5e18af00
class MaterialExpressionViewProperty public : MaterialExpression
{
	// Fields
	BYTE Property; // 0x40

};


instance 1ab5e18acc0
class MaterialExpressionViewSize public : MaterialExpression
{
	// Fields

};


instance 1ab5e18aa80
class MaterialExpressionVirtualTextureFeatureSwitch public : MaterialExpression
{
	// Fields
	ExpressionInput No; // 0x40
	ExpressionInput Yes; // 0x54

};


instance 1ab5e18a840
class MaterialExpressionWorldPosition public : MaterialExpression
{
	// Fields
	BYTE WorldPositionShaderOffset; // 0x40

};


instance 1ab5e18a3c0
class MaterialFunctionInterface public : Object
{
	// Fields
	Guid StateId; // 0x28
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x38

};


instance 1ab5e18a600
class MaterialFunction public : MaterialFunctionInterface
{
	// Fields
	FString Description; // 0x40
	TArray FunctionExpressions; // 0x50
	bool bExposeToLibrary; // 0x60
	bool bPrefixParameterNames; // 0x60
	bool bReentrantFlag; // 0x60

};


instance 1ab5e18a180
class MaterialFunctionInstance public : MaterialFunctionInterface
{
	// Fields
	MaterialFunctionInterface* Parent; // 0x40
	MaterialFunctionInterface* Base; // 0x48
	TArray ScalarParameterValues; // 0x50
	TArray VectorParameterValues; // 0x60
	TArray TextureParameterValues; // 0x70
	TArray FontParameterValues; // 0x80
	TArray StaticSwitchParameterValues; // 0x90
	TArray StaticComponentMaskParameterValues; // 0xa0
	TArray RuntimeVirtualTextureParameterValues; // 0xb0

};


instance 1ab5e189f40
class MaterialFunctionMaterialLayer public : MaterialFunction
{
	// Fields

};


instance 1ab5e189d00
class MaterialFunctionMaterialLayerInstance public : MaterialFunctionInstance
{
	// Fields

};


instance 1ab5e189ac0
class MaterialFunctionMaterialLayerBlend public : MaterialFunction
{
	// Fields

};


instance 1ab5e189880
class MaterialFunctionMaterialLayerBlendInstance public : MaterialFunctionInstance
{
	// Fields

};


instance 1ab5e189640
class MaterialInstanceActor public : Actor
{
	// Fields
	TArray TargetActors; // 0x218

};


instance 1ab5e18fdc0
class MaterialInstanceDynamic public : MaterialInstance
{
	// Fields

	// Functions
	SetVectorParameterValue 0x4b11d hash 21f81422 params:( None ParameterName;LinearColor Value; );
	SetTextureParameterValue 0x4e99f hash 5eb31820 params:( None ParameterName;Texture Value; );
	SetScalarParameterValue 0x4b110 hash 3dea55e5 params:( None ParameterName;None Value; );
	K2_InterpolateMaterialInstanceParams 0x4e98c hash d41a78f0 params:( MaterialInstance SourceA;MaterialInstance SourceB;None Alpha; );
	K2_GetVectorParameterValue 0x45fe8 hash 12f87352 params:( None ParameterName;LinearColor ReturnValue; );
	K2_GetTextureParameterValue 0x45fd9 hash 6fbf5d50 params:( None ParameterName;Texture ReturnValue; );
	K2_GetScalarParameterValue 0x45fcb hash 2eeab515 params:( None ParameterName;None ReturnValue; );
	K2_CopyMaterialInstanceParameters 0x4e97a hash 90b5d14 params:( MaterialInterface Source;None bQuickParametersOnly; );
	CopyParameterOverrides 0x4e96e hash 257274b4 params:( MaterialInstance MaterialInstance; );
	CopyInterpParameters 0x4e963 hash 1409b5c6 params:( MaterialInstance Source; );
};


instance 1ab5e18fb80
class MaterialParameterCollection public : Object
{
	// Fields
	Guid StateId; // 0x28
	TArray ScalarParameters; // 0x38
	TArray VectorParameters; // 0x48

};


instance 1ab5e18f940
class MaterialParameterCollectionInstance public : Object
{
	// Fields
	MaterialParameterCollection* Collection; // 0x30

};


instance 1ab5e18f700
class MatineeActor public : Actor
{
	// Fields
	InterpData* MatineeData; // 0x218
	FName MatineeControllerName; // 0x220
	float PlayRate; // 0x228
	bool bPlayOnLevelLoad; // 0x22c
	bool bForceStartPos; // 0x22c
	float ForceStartPosition; // 0x230
	bool bLooping; // 0x234
	bool bRewindOnPlay; // 0x234
	bool bNoResetOnRewind; // 0x234
	bool bRewindIfAlreadyPlaying; // 0x234
	bool bDisableRadioFilter; // 0x234
	bool bClientSideOnly; // 0x234
	bool bSkipUpdateIfNotVisible; // 0x234
	bool bIsSkippable; // 0x234
	int PreferredSplitScreenNum; // 0x238
	bool bDisableMovementInput; // 0x23c
	bool bDisableLookAtInput; // 0x23c
	bool bHidePlayer; // 0x23c
	bool bHideHud; // 0x23c
	TArray GroupActorInfos; // 0x240
	bool bShouldShowGore; // 0x250
	TArray GroupInst; // 0x258
	TArray CameraCuts; // 0x268
	bool bIsPlaying; // 0x278
	bool bReversePlayback; // 0x278
	bool bPaused; // 0x278
	bool bPendingStop; // 0x278
	float InterpPosition; // 0x27c
	BYTE ReplicationForceIsPlaying; // 0x284
	MulticastInlineDelegateProperty OnPlay; // 0x288 property 0x1ab71eb5480 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnStop; // 0x298 property 0x1ab71eb5500 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnPause; // 0x2a8 property 0x1ab71eb5580 hash 0xb7a5ed1a

	// Functions
	Stop 0x3e2ef hash 7c8c8f2b params:(  );
	SetPosition 0x40839 hash d2089706 params:( None NewPosition;None bJump; );
	SetLoopingState 0x4e9df hash e4167e6a params:( None bNewLooping; );
	Reverse 0x3fb7d hash a010bca1 params:(  );
	Play 0x3fb72 hash 7c8ac63b params:(  );
	Pause 0xb98f hash dddda23 params:(  );
	EnableGroupByName 0x4e9d5 hash 392d5395 params:( None GroupName;None bEnable; );
	ChangePlaybackDirection 0x4136a hash e0d49ad3 params:(  );
};


instance 1ab5e18f4c0
class MatineeActorCameraAnim public : MatineeActor
{
	// Fields
	CameraAnim* CameraAnim; // 0x2c0

};


instance 1ab5e18f280
class MatineeAnimInterface public : Interface
{
	// Fields

};


instance 1ab5e18f040
class MatineeInterface public : Interface
{
	// Fields

};


instance 1ab5e18ee00
class MeshMergeCullingVolume public : Volume
{
	// Fields

};


instance 1ab5e18ebc0
class MeshSimplificationSettings public : DeveloperSettings
{
	// Fields
	FName MeshReductionModuleName; // 0x38

};


instance 1ab5e18e980
class MeshVertexPainterKismetLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	RemovePaintedVertices 0x4ea4d hash 51474bfd params:( StaticMeshComponent StaticMeshComponent; );
	PaintVerticesSingleColor 0x4ea40 hash 1f372e87 params:( StaticMeshComponent StaticMeshComponent;LinearColor FillColor;None bConvertToSRGB; );
	PaintVerticesLerpAlongAxis 0x4ea32 hash 3147b67f params:( StaticMeshComponent StaticMeshComponent;LinearColor StartColor;LinearColor EndColor;UnderlyingType Axis;None bConvertToSRGB; );
};


instance 1ab5e18e740
class MicroTransactionBase public : PlatformInterfaceBase
{
	// Fields
	TArray AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58

};


instance 1ab5e18e500
class ModelComponent public : PrimitiveComponent
{
	// Fields
	BodySetup* ModelBodySetup; // 0x3f0

};


instance 1ab5e18e2c0
class MorphTarget public : Object
{
	// Fields
	SkeletalMesh* BaseSkelMesh; // 0x28

};


instance 1ab5e18e080
class NavAgentInterface public : Interface
{
	// Fields

};


instance 1ab5e1949c0
class NavAreaBase public : Object
{
	// Fields

};


instance 1ab5e194780
class NavCollisionBase public : Object
{
	// Fields
	bool bIsDynamicObstacle; // 0x28

};


instance 1ab5e194540
class NavEdgeProviderInterface public : Interface
{
	// Fields

};


instance 1ab5e194300
class NavigationDataChunk public : Object
{
	// Fields
	FName NavigationDataName; // 0x28

};


instance 1ab5e1940c0
class NavigationDataInterface public : Interface
{
	// Fields

};


instance 1ab5e193e80
class NavigationObjectBase public : Actor
{
	// Fields
	CapsuleComponent* CapsuleComponent; // 0x220
	BillboardComponent* GoodSprite; // 0x228
	BillboardComponent* BadSprite; // 0x230
	bool bIsPIEPlayerStart; // 0x238

};


instance 1ab5e193c40
class NavigationSystemBase public : Object
{
	// Fields

};


instance 1ab5e193a00
class NavigationSystemConfig public : Object
{
	// Fields
	SoftClassPath NavigationSystemClass; // 0x28
	NavAgentSelector SupportedAgentsMask; // 0x40
	FName DefaultAgentName; // 0x44
	bool bIsOverriden; // 0x4c

};


instance 1ab5e1937c0
class NullNavSysConfig public : NavigationSystemConfig
{
	// Fields

};


instance 1ab5e193580
class NavLinkDefinition public : Object
{
	// Fields
	TArray Links; // 0x28
	TArray SegmentLinks; // 0x38

};


instance 1ab5e193340
class NavPathObserverInterface public : Interface
{
	// Fields

};


instance 1ab5e193100
class NavRelevantInterface public : Interface
{
	// Fields

};


instance 1ab5e192ec0
class SimulatedClientNetConnection public : NetConnection
{
	// Fields

};


instance 1ab5e192c80
class NetworkPredictionInterface public : Interface
{
	// Fields

};


instance 1ab5e192a40
class NetworkSettings public : DeveloperSettings
{
	// Fields
	bool bVerifyPeer; // 0x38
	bool bEnableMultiplayerWorldOriginRebasing; // 0x38
	int MaxRepArraySize; // 0x3c
	int MaxRepArrayMemory; // 0x40
	TArray NetworkEmulationProfiles; // 0x48

};


instance 1ab5e192800
class NodeMappingContainer public : Object
{
	// Fields
	MapProperty SourceItems; // 0x28 property 0x1ab71168bc0 hash 0xadd0fb88
	MapProperty TargetItems; // 0x78 property 0x1ab71168c60 hash 0xadd0fb88
	MapProperty SourceToTarget; // 0xc8 property 0x1ab71168d00 hash 0xadd0fb88
	Object* SourceAsset; // 0x118
	Object* TargetAsset; // 0x140

};


instance 1ab5e1925c0
class NodeMappingProviderInterface public : Interface
{
	// Fields

};


instance 1ab5e192380
class Note public : Actor
{
	// Fields

};


instance 1ab5e192140
class ObjectLibrary public : Object
{
	// Fields
	Object* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray Objects; // 0x38
	TArray WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59

};


instance 1ab5e191f00
class ObjectReferencer public : Object
{
	// Fields
	TArray ReferencedObjects; // 0x28

};


instance 1ab5e191cc0
class PackageMapClient public : PackageMap
{
	// Fields

};


instance 1ab5e191a80
class PainCausingVolume public : PhysicsVolume
{
	// Fields
	bool bPainCausing; // 0x260
	float DamagePerSec; // 0x264
	DamageType* DamageType; // 0x268
	float PainInterval; // 0x270
	bool bEntryPain; // 0x274
	bool BACKUP_bPainCausing; // 0x274
	Controller* DamageInstigator; // 0x278

};


instance 1ab5e191840
class ParticleEmitter public : Object
{
	// Fields
	FName EmitterName; // 0x28
	int SubUVDataOffset; // 0x30
	BYTE EmitterRenderMode; // 0x34
	EParticleSignificanceLevel SignificanceLevel; // 0x35
	bool bUseLegacySpawningBehavior; // 0x37
	bool ConvertedModules; // 0x37
	bool bIsSoloing; // 0x37
	bool bCookedOut; // 0x37
	bool bDisabledLODsKeepEmitterAlive; // 0x37
	bool bDisableWhenInsignficant; // 0x38
	TArray LODLevels; // 0x40
	int PeakActiveParticles; // 0x50
	int InitialAllocationCount; // 0x54
	float QualityLevelSpawnRateScale; // 0x58
	int DetailModeBitmask; // 0x5c

};


instance 1ab5e191600
class ParticleEventManager public : Actor
{
	// Fields

};


instance 1ab5e1913c0
class ParticleLODLevel public : Object
{
	// Fields
	int Level; // 0x28
	bool bEnabled; // 0x2c
	ParticleModuleRequired* RequiredModule; // 0x30
	TArray Modules; // 0x38
	ParticleModuleTypeDataBase* TypeDataModule; // 0x48
	ParticleModuleSpawn* SpawnModule; // 0x50
	ParticleModuleEventGenerator* EventGenerator; // 0x58
	TArray SpawningModules; // 0x60
	TArray SpawnModules; // 0x70
	TArray UpdateModules; // 0x80
	TArray OrbitModules; // 0x90
	TArray EventReceiverModules; // 0xa0
	bool ConvertedModules; // 0xb0
	int PeakActiveParticles; // 0xb4

};


instance 1ab5e191180
class ParticleModule public : Object
{
	// Fields
	bool bSpawnModule; // 0x28
	bool bUpdateModule; // 0x28
	bool bFinalUpdateModule; // 0x28
	bool bUpdateForGPUEmitter; // 0x28
	bool bCurvesAsColor; // 0x28
	bool b3DDrawMode; // 0x28
	bool bSupported3DDrawMode; // 0x28
	bool bEnabled; // 0x28
	bool bEditable; // 0x29
	bool LODDuplicate; // 0x29
	bool bSupportsRandomSeed; // 0x29
	bool bRequiresLoopingNotification; // 0x29
	BYTE LODValidity; // 0x2a

};


instance 1ab5e190d00
class ParticleModuleAccelerationBase public : ParticleModule
{
	// Fields
	bool bAlwaysInWorldSpace; // 0x30

};


instance 1ab5e190f40
class ParticleModuleAcceleration public : ParticleModuleAccelerationBase
{
	// Fields
	RawDistributionVector Acceleration; // 0x38
	bool bApplyOwnerScale; // 0x80

};


instance 1ab5e190ac0
class ParticleModuleAccelerationConstant public : ParticleModuleAccelerationBase
{
	// Fields
	Vector Acceleration; // 0x38

};


instance 1ab5e190880
class ParticleModuleAccelerationDrag public : ParticleModuleAccelerationBase
{
	// Fields
	DistributionFloat* DragCoefficient; // 0x38
	RawDistributionFloat DragCoefficientRaw; // 0x40

};


instance 1ab5e190640
class ParticleModuleAccelerationDragScaleOverLife public : ParticleModuleAccelerationBase
{
	// Fields
	DistributionFloat* DragScale; // 0x38
	RawDistributionFloat DragScaleRaw; // 0x40

};


instance 1ab5e190400
class ParticleModuleAccelerationOverLifetime public : ParticleModuleAccelerationBase
{
	// Fields
	RawDistributionVector AccelOverLife; // 0x38

};


instance 1ab5e1901c0
class ParticleModuleAttractorBase public : ParticleModule
{
	// Fields

};


instance 1ab5e199400
class ParticleModuleAttractorLine public : ParticleModuleAttractorBase
{
	// Fields
	Vector EndPoint0; // 0x30
	Vector EndPoint1; // 0x3c
	RawDistributionFloat Range; // 0x48
	RawDistributionFloat Strength; // 0x78

};


instance 1ab5e1991c0
class ParticleModuleAttractorParticle public : ParticleModuleAttractorBase
{
	// Fields
	FName EmitterName; // 0x30
	RawDistributionFloat Range; // 0x38
	bool bStrengthByDistance; // 0x68
	RawDistributionFloat Strength; // 0x70
	bool bAffectBaseVelocity; // 0xa0
	BYTE SelectionMethod; // 0xa4
	bool bRenewSource; // 0xa8
	bool bInheritSourceVel; // 0xa8
	int LastSelIndex; // 0xac

};


instance 1ab5e198f80
class ParticleModuleAttractorPoint public : ParticleModuleAttractorBase
{
	// Fields
	RawDistributionVector Position; // 0x30
	RawDistributionFloat Range; // 0x78
	RawDistributionFloat Strength; // 0xa8
	bool StrengthByDistance; // 0xd8
	bool bAffectBaseVelocity; // 0xd8
	bool bOverrideVelocity; // 0xd8
	bool bUseWorldSpacePosition; // 0xd8
	bool Positive_X; // 0xd8
	bool Positive_Y; // 0xd8
	bool Positive_Z; // 0xd8
	bool Negative_X; // 0xd8
	bool Negative_Y; // 0xd9
	bool Negative_Z; // 0xd9

};


instance 1ab5e198d40
class ParticleModuleAttractorPointGravity public : ParticleModuleAttractorBase
{
	// Fields
	Vector Position; // 0x30
	float Radius; // 0x3c
	DistributionFloat* Strength; // 0x40
	RawDistributionFloat StrengthRaw; // 0x48

};


instance 1ab5e198b00
class ParticleModuleBeamBase public : ParticleModule
{
	// Fields

};


instance 1ab5e1988c0
class ParticleModuleBeamModifier public : ParticleModuleBeamBase
{
	// Fields
	BYTE ModifierType; // 0x30
	BeamModifierOptions PositionOptions; // 0x34
	RawDistributionVector Position; // 0x38
	BeamModifierOptions TangentOptions; // 0x80
	RawDistributionVector Tangent; // 0x88
	bool bAbsoluteTangent; // 0xd0
	BeamModifierOptions StrengthOptions; // 0xd4
	RawDistributionFloat Strength; // 0xd8

};


instance 1ab5e198680
class ParticleModuleBeamNoise public : ParticleModuleBeamBase
{
	// Fields
	bool bLowFreq_Enabled; // 0x30
	int Frequency; // 0x34
	int Frequency_LowRange; // 0x38
	RawDistributionVector NoiseRange; // 0x40
	RawDistributionFloat NoiseRangeScale; // 0x88
	bool bNRScaleEmitterTime; // 0xb8
	RawDistributionVector NoiseSpeed; // 0xc0
	bool bSmooth; // 0x108
	float NoiseLockRadius; // 0x10c
	bool bNoiseLock; // 0x110
	bool bOscillate; // 0x110
	float NoiseLockTime; // 0x114
	float NoiseTension; // 0x118
	bool bUseNoiseTangents; // 0x11c
	RawDistributionFloat NoiseTangentStrength; // 0x120
	int NoiseTessellation; // 0x150
	bool bTargetNoise; // 0x154
	float FrequencyDistance; // 0x158
	bool bApplyNoiseScale; // 0x15c
	RawDistributionFloat NoiseScale; // 0x160

};


instance 1ab5e198440
class ParticleModuleBeamSource public : ParticleModuleBeamBase
{
	// Fields
	BYTE SourceMethod; // 0x30
	FName SourceName; // 0x34
	bool bSourceAbsolute; // 0x3c
	RawDistributionVector Source; // 0x40
	bool bLockSource; // 0x88
	BYTE SourceTangentMethod; // 0x8c
	RawDistributionVector SourceTangent; // 0x90
	bool bLockSourceTangent; // 0xd8
	RawDistributionFloat SourceStrength; // 0xe0
	bool bLockSourceStength; // 0x110

};


instance 1ab5e198200
class ParticleModuleBeamTarget public : ParticleModuleBeamBase
{
	// Fields
	BYTE TargetMethod; // 0x30
	FName TargetName; // 0x34
	RawDistributionVector Target; // 0x40
	bool bTargetAbsolute; // 0x88
	bool bLockTarget; // 0x88
	BYTE TargetTangentMethod; // 0x8c
	RawDistributionVector TargetTangent; // 0x90
	bool bLockTargetTangent; // 0xd8
	RawDistributionFloat TargetStrength; // 0xe0
	bool bLockTargetStength; // 0x110
	float LockRadius; // 0x114

};


instance 1ab5e197fc0
class ParticleModuleCameraBase public : ParticleModule
{
	// Fields

};


instance 1ab5e197d80
class ParticleModuleCameraOffset public : ParticleModuleCameraBase
{
	// Fields
	RawDistributionFloat CameraOffset; // 0x30
	bool bSpawnTimeOnly; // 0x60
	BYTE UpdateMethod; // 0x64

};


instance 1ab5e197900
class ParticleModuleCollisionBase public : ParticleModule
{
	// Fields

};


instance 1ab5e197b40
class ParticleModuleCollision public : ParticleModuleCollisionBase
{
	// Fields
	RawDistributionVector DampingFactor; // 0x30
	RawDistributionVector DampingFactorRotation; // 0x78
	RawDistributionFloat MaxCollisions; // 0xc0
	BYTE CollisionCompletionOption; // 0xf0
	TArray CollisionTypes; // 0xf8
	bool bApplyPhysics; // 0x110
	bool bIgnoreTriggerVolumes; // 0x110
	RawDistributionFloat ParticleMass; // 0x118
	float DirScalar; // 0x148
	bool bPawnsDoNotDecrementCount; // 0x14c
	bool bOnlyVerticalNormalsDecrementCount; // 0x14c
	float VerticalFudgeFactor; // 0x150
	RawDistributionFloat DelayAmount; // 0x158
	bool bDropDetail; // 0x188
	bool bCollideOnlyIfVisible; // 0x188
	bool bIgnoreSourceActor; // 0x188
	float MaxCollisionDistance; // 0x18c

};


instance 1ab5e1976c0
class ParticleModuleCollisionGPU public : ParticleModuleCollisionBase
{
	// Fields
	RawDistributionFloat Resilience; // 0x30
	RawDistributionFloat ResilienceScaleOverLife; // 0x60
	float Friction; // 0x90
	float RandomSpread; // 0x94
	float RandomDistribution; // 0x98
	float RadiusScale; // 0x9c
	float RadiusBias; // 0xa0
	BYTE Response; // 0xa4
	BYTE CollisionMode; // 0xa5

};


instance 1ab5e197240
class ParticleModuleColorBase public : ParticleModule
{
	// Fields

};


instance 1ab5e197480
class ParticleModuleColor public : ParticleModuleColorBase
{
	// Fields
	RawDistributionVector StartColor; // 0x30
	RawDistributionFloat StartAlpha; // 0x78
	bool bClampAlpha; // 0xa8

};


instance 1ab5e197000
class ParticleModuleColor_Seeded public : ParticleModuleColor
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0xb0

};


instance 1ab5e196dc0
class ParticleModuleColorOverLife public : ParticleModuleColorBase
{
	// Fields
	RawDistributionVector ColorOverLife; // 0x30
	RawDistributionFloat AlphaOverLife; // 0x78
	bool bClampAlpha; // 0xa8

};


instance 1ab5e196b80
class ParticleModuleColorScaleOverLife public : ParticleModuleColorBase
{
	// Fields
	RawDistributionVector ColorScaleOverLife; // 0x30
	RawDistributionFloat AlphaScaleOverLife; // 0x78
	bool bEmitterTime; // 0xa8

};


instance 1ab5e196940
class ParticleModuleEventBase public : ParticleModule
{
	// Fields

};


instance 1ab5e196700
class ParticleModuleEventGenerator public : ParticleModuleEventBase
{
	// Fields
	TArray Events; // 0x30

};


instance 1ab5e1964c0
class ParticleModuleEventReceiverBase public : ParticleModuleEventBase
{
	// Fields
	BYTE EventGeneratorType; // 0x30
	FName EventName; // 0x34

};


instance 1ab5e196280
class ParticleModuleEventReceiverKillParticles public : ParticleModuleEventReceiverBase
{
	// Fields
	bool bStopSpawning; // 0x40

};


instance 1ab5e196040
class ParticleModuleEventReceiverSpawn public : ParticleModuleEventReceiverBase
{
	// Fields
	RawDistributionFloat SpawnCount; // 0x40
	bool bUseParticleTime; // 0x70
	bool bUsePSysLocation; // 0x70
	bool bInheritVelocity; // 0x70
	RawDistributionVector InheritVelocityScale; // 0x78
	TArray PhysicalMaterials; // 0xc0
	bool bBanPhysicalMaterials; // 0xd0

};


instance 1ab5e195e00
class ParticleModuleEventSendToGame public : Object
{
	// Fields

};


instance 1ab5e195bc0
class ParticleModuleKillBase public : ParticleModule
{
	// Fields

};


instance 1ab5e195980
class ParticleModuleKillBox public : ParticleModuleKillBase
{
	// Fields
	RawDistributionVector LowerLeftCorner; // 0x30
	RawDistributionVector UpperRightCorner; // 0x78
	bool bAbsolute; // 0xc0
	bool bKillInside; // 0xc0
	bool bAxisAlignedAndFixedSize; // 0xc0

};


instance 1ab5e195740
class ParticleModuleKillHeight public : ParticleModuleKillBase
{
	// Fields
	RawDistributionFloat Height; // 0x30
	bool bAbsolute; // 0x60
	bool bFloor; // 0x60
	bool bApplyPSysScale; // 0x60

};


instance 1ab5e1952c0
class ParticleModuleLifetimeBase public : ParticleModule
{
	// Fields

};


instance 1ab5e195500
class ParticleModuleLifetime public : ParticleModuleLifetimeBase
{
	// Fields
	RawDistributionFloat LifeTime; // 0x30

};


instance 1ab5e195080
class ParticleModuleLifetime_Seeded public : ParticleModuleLifetime
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x60

};


instance 1ab5e194c00
class ParticleModuleLightBase public : ParticleModule
{
	// Fields

};


instance 1ab5e194e40
class ParticleModuleLight public : ParticleModuleLightBase
{
	// Fields
	bool bUseInverseSquaredFalloff; // 0x30
	bool bAffectsTranslucency; // 0x31
	bool bPreviewLightRadius; // 0x32
	float SpawnFraction; // 0x34
	RawDistributionVector ColorScaleOverLife; // 0x38
	RawDistributionFloat BrightnessOverLife; // 0x80
	RawDistributionFloat RadiusScale; // 0xb0
	RawDistributionFloat LightExponent; // 0xe0
	LightingChannels LightingChannels; // 0x110
	float VolumetricScatteringIntensity; // 0x114
	bool bHighQualityLights; // 0x118
	bool bShadowCastingLights; // 0x119

};


instance 1ab5e19de40
class ParticleModuleLight_Seeded public : ParticleModuleLight
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x120

};


instance 1ab5e19d9c0
class ParticleModuleLocationBase public : ParticleModule
{
	// Fields

};


instance 1ab5e19dc00
class ParticleModuleLocation public : ParticleModuleLocationBase
{
	// Fields
	RawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x78
	float DistributeThreshold; // 0x7c

};


instance 1ab5e19d780
class ParticleModuleLocation_Seeded public : ParticleModuleLocation
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x80

};


instance 1ab5e19d540
class ParticleModuleLocationBoneSocket public : ParticleModuleLocationBase
{
	// Fields
	BYTE SourceType; // 0x30
	Vector UniversalOffset; // 0x34
	TArray SourceLocations; // 0x40
	BYTE SelectionMethod; // 0x50
	bool bUpdatePositionEachFrame; // 0x54
	bool bOrientMeshEmitters; // 0x54
	bool bInheritBoneVelocity; // 0x54
	float InheritVelocityScale; // 0x58
	FName SkelMeshActorParamName; // 0x5c
	int NumPreSelectedIndices; // 0x64

};


instance 1ab5e19d300
class ParticleModuleLocationDirect public : ParticleModuleLocationBase
{
	// Fields
	RawDistributionVector Location; // 0x30
	RawDistributionVector LocationOffset; // 0x78
	RawDistributionVector ScaleFactor; // 0xc0
	RawDistributionVector Direction; // 0x108

};


instance 1ab5e19d0c0
class ParticleModuleLocationEmitter public : ParticleModuleLocationBase
{
	// Fields
	FName EmitterName; // 0x30
	BYTE SelectionMethod; // 0x38
	bool InheritSourceVelocity; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	bool bInheritSourceRotation; // 0x44
	float InheritSourceRotationScale; // 0x48

};


instance 1ab5e19ce80
class ParticleModuleLocationEmitterDirect public : ParticleModuleLocationBase
{
	// Fields
	FName EmitterName; // 0x30

};


instance 1ab5e19cc40
class ParticleModuleLocationPrimitiveBase public : ParticleModuleLocationBase
{
	// Fields
	bool Positive_X; // 0x30
	bool Positive_Y; // 0x30
	bool Positive_Z; // 0x30
	bool Negative_X; // 0x30
	bool Negative_Y; // 0x30
	bool Negative_Z; // 0x30
	bool SurfaceOnly; // 0x30
	bool Velocity; // 0x30
	RawDistributionFloat VelocityScale; // 0x38
	RawDistributionVector StartLocation; // 0x68

};


instance 1ab5e19ca00
class ParticleModuleLocationPrimitiveCylinder public : ParticleModuleLocationPrimitiveBase
{
	// Fields
	bool RadialVelocity; // 0xb0
	RawDistributionFloat StartRadius; // 0xb8
	RawDistributionFloat StartHeight; // 0xe8
	BYTE HeightAxis; // 0x118

};


instance 1ab5e19c7c0
class ParticleModuleLocationPrimitiveCylinder_Seeded public : ParticleModuleLocationPrimitiveCylinder
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x120

};


instance 1ab5e19c580
class ParticleModuleLocationPrimitiveSphere public : ParticleModuleLocationPrimitiveBase
{
	// Fields
	RawDistributionFloat StartRadius; // 0xb0

};


instance 1ab5e19c340
class ParticleModuleLocationPrimitiveSphere_Seeded public : ParticleModuleLocationPrimitiveSphere
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0xe0

};


instance 1ab5e19c100
class ParticleModuleLocationPrimitiveTriangle public : ParticleModuleLocationBase
{
	// Fields
	RawDistributionVector StartOffset; // 0x30
	RawDistributionFloat Height; // 0x78
	RawDistributionFloat Angle; // 0xa8
	RawDistributionFloat Thickness; // 0xd8

};


instance 1ab5e19bec0
class ParticleModuleLocationSkelVertSurface public : ParticleModuleLocationBase
{
	// Fields
	BYTE SourceType; // 0x30
	Vector UniversalOffset; // 0x34
	bool bUpdatePositionEachFrame; // 0x40
	bool bOrientMeshEmitters; // 0x40
	bool bInheritBoneVelocity; // 0x40
	float InheritVelocityScale; // 0x44
	FName SkelMeshActorParamName; // 0x48
	TArray ValidAssociatedBones; // 0x50
	bool bEnforceNormalCheck; // 0x60
	Vector NormalToCompare; // 0x64
	float NormalCheckToleranceDegrees; // 0x70
	float NormalCheckTolerance; // 0x74
	TArray ValidMaterialIndices; // 0x78
	bool bInheritVertexColor; // 0x88
	bool bInheritUV; // 0x88
	int InheritUVChannel; // 0x8c

};


instance 1ab5e19bc80
class ParticleModuleLocationWorldOffset public : ParticleModuleLocation
{
	// Fields

};


instance 1ab5e19ba40
class ParticleModuleLocationWorldOffset_Seeded public : ParticleModuleLocationWorldOffset
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x80

};


instance 1ab5e19b800
class ParticleModuleMaterialBase public : ParticleModule
{
	// Fields

};


instance 1ab5e19b5c0
class ParticleModuleMeshMaterial public : ParticleModuleMaterialBase
{
	// Fields
	TArray MeshMaterials; // 0x30

};


instance 1ab5e19b140
class ParticleModuleRotationBase public : ParticleModule
{
	// Fields

};


instance 1ab5e19b380
class ParticleModuleMeshRotation public : ParticleModuleRotationBase
{
	// Fields
	RawDistributionVector StartRotation; // 0x30
	bool bInheritParent; // 0x78

};


instance 1ab5e19af00
class ParticleModuleMeshRotation_Seeded public : ParticleModuleMeshRotation
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x80

};


instance 1ab5e19aa80
class ParticleModuleRotationRateBase public : ParticleModule
{
	// Fields

};


instance 1ab5e19acc0
class ParticleModuleMeshRotationRate public : ParticleModuleRotationRateBase
{
	// Fields
	RawDistributionVector StartRotationRate; // 0x30

};


instance 1ab5e19a840
class ParticleModuleMeshRotationRate_Seeded public : ParticleModuleMeshRotationRate
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x78

};


instance 1ab5e19a600
class ParticleModuleMeshRotationRateMultiplyLife public : ParticleModuleRotationRateBase
{
	// Fields
	RawDistributionVector LifeMultiplier; // 0x30

};


instance 1ab5e19a3c0
class ParticleModuleMeshRotationRateOverLife public : ParticleModuleRotationRateBase
{
	// Fields
	RawDistributionVector RotRate; // 0x30
	bool bScaleRotRate; // 0x78

};


instance 1ab5e199f40
class ParticleModuleOrbitBase public : ParticleModule
{
	// Fields
	bool bUseEmitterTime; // 0x30

};


instance 1ab5e19a180
class ParticleModuleOrbit public : ParticleModuleOrbitBase
{
	// Fields
	BYTE ChainMode; // 0x38
	RawDistributionVector OffsetAmount; // 0x40
	OrbitOptions OffsetOptions; // 0x88
	RawDistributionVector RotationAmount; // 0x90
	OrbitOptions RotationOptions; // 0xd8
	RawDistributionVector RotationRateAmount; // 0xe0
	OrbitOptions RotationRateOptions; // 0x128

};


instance 1ab5e199ac0
class ParticleModuleOrientationBase public : ParticleModule
{
	// Fields

};


instance 1ab5e199d00
class ParticleModuleOrientationAxisLock public : ParticleModuleOrientationBase
{
	// Fields
	BYTE LockAxisFlags; // 0x30

};


instance 1ab5e199880
class ParticleModuleParameterBase public : ParticleModule
{
	// Fields

};


instance 1ab5e199640
class ParticleModuleParameterDynamic public : ParticleModuleParameterBase
{
	// Fields
	TArray DynamicParams; // 0x30
	int UpdateFlags; // 0x40
	bool bUsesVelocity; // 0x44

};


instance 1ab5e19fdc0
class ParticleModuleParameterDynamic_Seeded public : ParticleModuleParameterDynamic
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x48

};


instance 1ab5e19fb80
class ParticleModulePivotOffset public : ParticleModuleLocationBase
{
	// Fields
	Vector2D PivotOffset; // 0x30

};


instance 1ab5e19f940
class ParticleModuleRequired public : ParticleModule
{
	// Fields
	MaterialInterface* Material; // 0x30
	float MinFacingCameraBlendDistance; // 0x38
	float MaxFacingCameraBlendDistance; // 0x3c
	Vector EmitterOrigin; // 0x40
	Rotator EmitterRotation; // 0x4c
	BYTE ScreenAlignment; // 0x58
	bool bUseLocalSpace; // 0x59
	bool bKillOnDeactivate; // 0x59
	bool bKillOnCompleted; // 0x59
	BYTE SortMode; // 0x5a
	bool bUseLegacyEmitterTime; // 0x5b
	bool bRemoveHMDRoll; // 0x5b
	bool bEmitterDurationUseRange; // 0x5b
	float EmitterDuration; // 0x5c
	RawDistributionFloat SpawnRate; // 0x60
	TArray BurstList; // 0x90
	float EmitterDelay; // 0xa0
	float EmitterDelayLow; // 0xa4
	bool bDelayFirstLoopOnly; // 0xa8
	BYTE InterpolationMethod; // 0xa9
	bool bScaleUV; // 0xaa
	bool bEmitterDelayUseRange; // 0xaa
	BYTE ParticleBurstMethod; // 0xab
	bool bOverrideSystemMacroUV; // 0xac
	bool bUseMaxDrawCount; // 0xac
	BYTE OpacitySourceMode; // 0xad
	BYTE EmitterNormalsMode; // 0xae
	bool bOrbitModuleAffectsVelocityAlignment; // 0xaf
	int SubImages_Horizontal; // 0xb0
	int SubImages_Vertical; // 0xb4
	float RandomImageTime; // 0xb8
	int RandomImageChanges; // 0xbc
	Vector MacroUVPosition; // 0xc0
	float MacroUVRadius; // 0xcc
	EParticleUVFlipMode UVFlippingMode; // 0xd0
	BYTE BoundingMode; // 0xd1
	bool bDurationRecalcEachLoop; // 0xd2
	Vector NormalsSphereCenter; // 0xd4
	float AlphaThreshold; // 0xe0
	int EmitterLoops; // 0xe4
	Texture2D* CutoutTexture; // 0xe8
	int MaxDrawCount; // 0xf0
	float EmitterDurationLow; // 0xf4
	Vector NormalsCylinderDirection; // 0xf8
	TArray NamedMaterialOverrides; // 0x108

};


instance 1ab5e19f700
class ParticleModuleRotation public : ParticleModuleRotationBase
{
	// Fields
	RawDistributionFloat StartRotation; // 0x30

};


instance 1ab5e19f4c0
class ParticleModuleRotation_Seeded public : ParticleModuleRotation
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x60

};


instance 1ab5e19f280
class ParticleModuleRotationOverLifetime public : ParticleModuleRotationBase
{
	// Fields
	RawDistributionFloat RotationOverLife; // 0x30
	bool Scale; // 0x60

};


instance 1ab5e19f040
class ParticleModuleRotationRate public : ParticleModuleRotationRateBase
{
	// Fields
	RawDistributionFloat StartRotationRate; // 0x30

};


instance 1ab5e19ee00
class ParticleModuleRotationRate_Seeded public : ParticleModuleRotationRate
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x60

};


instance 1ab5e19ebc0
class ParticleModuleRotationRateMultiplyLife public : ParticleModuleRotationRateBase
{
	// Fields
	RawDistributionFloat LifeMultiplier; // 0x30

};


instance 1ab5e19e740
class ParticleModuleSizeBase public : ParticleModule
{
	// Fields

};


instance 1ab5e19e980
class ParticleModuleSize public : ParticleModuleSizeBase
{
	// Fields
	RawDistributionVector StartSize; // 0x30

};


instance 1ab5e19e500
class ParticleModuleSize_Seeded public : ParticleModuleSize
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0x78

};


instance 1ab5e19e2c0
class ParticleModuleSizeMultiplyLife public : ParticleModuleSizeBase
{
	// Fields
	RawDistributionVector LifeMultiplier; // 0x30
	bool MultiplyX; // 0x78
	bool MultiplyY; // 0x78
	bool MultiplyZ; // 0x78

};


instance 1ab5e19e080
class ParticleModuleSizeScale public : ParticleModuleSizeBase
{
	// Fields
	RawDistributionVector SizeScale; // 0x30
	bool EnableX; // 0x78
	bool EnableY; // 0x78
	bool EnableZ; // 0x78

};


instance 1ab5e1a49c0
class ParticleModuleSizeScaleBySpeed public : ParticleModuleSizeBase
{
	// Fields
	Vector2D SpeedScale; // 0x30
	Vector2D MaxScale; // 0x38

};


instance 1ab5e1a4780
class ParticleModuleSourceMovement public : ParticleModuleLocationBase
{
	// Fields
	RawDistributionVector SourceMovementScale; // 0x30

};


instance 1ab5e1a4300
class ParticleModuleSpawnBase public : ParticleModule
{
	// Fields
	bool bProcessSpawnRate; // 0x30
	bool bProcessBurstList; // 0x30

};


instance 1ab5e1a4540
class ParticleModuleSpawn public : ParticleModuleSpawnBase
{
	// Fields
	RawDistributionFloat Rate; // 0x38
	RawDistributionFloat RateScale; // 0x68
	BYTE ParticleBurstMethod; // 0x98
	TArray BurstList; // 0xa0
	RawDistributionFloat BurstScale; // 0xb0
	bool bApplyGlobalSpawnRateScale; // 0xe0

};


instance 1ab5e1a40c0
class ParticleModuleSpawnPerUnit public : ParticleModuleSpawnBase
{
	// Fields
	float UnitScalar; // 0x38
	float MovementTolerance; // 0x3c
	RawDistributionFloat SpawnPerUnit; // 0x40
	float MaxFrameDistance; // 0x70
	bool bIgnoreSpawnRateWhenMoving; // 0x74
	bool bIgnoreMovementAlongX; // 0x74
	bool bIgnoreMovementAlongY; // 0x74
	bool bIgnoreMovementAlongZ; // 0x74

};


instance 1ab5e1a3c40
class ParticleModuleSubUVBase public : ParticleModule
{
	// Fields

};


instance 1ab5e1a3e80
class ParticleModuleSubUV public : ParticleModuleSubUVBase
{
	// Fields
	SubUVAnimation* Animation; // 0x30
	RawDistributionFloat SubImageIndex; // 0x38
	bool bUseRealTime; // 0x68

};


instance 1ab5e1a3a00
class ParticleModuleSubUVMovie public : ParticleModuleSubUV
{
	// Fields
	bool bUseEmitterTime; // 0x70
	RawDistributionFloat FrameRate; // 0x78
	int StartingFrame; // 0xa8

};


instance 1ab5e1a37c0
class ParticleModuleTrailBase public : ParticleModule
{
	// Fields

};


instance 1ab5e1a3580
class ParticleModuleTrailSource public : ParticleModuleTrailBase
{
	// Fields
	BYTE SourceMethod; // 0x30
	FName SourceName; // 0x34
	RawDistributionFloat SourceStrength; // 0x40
	bool bLockSourceStength; // 0x70
	int SourceOffsetCount; // 0x74
	TArray SourceOffsetDefaults; // 0x78
	BYTE SelectionMethod; // 0x88
	bool bInheritRotation; // 0x8c

};


instance 1ab5e1a3100
class ParticleModuleTypeDataBase public : ParticleModule
{
	// Fields

};


instance 1ab5e1a3340
class ParticleModuleTypeDataAnimTrail public : ParticleModuleTypeDataBase
{
	// Fields
	bool bDeadTrailsOnDeactivate; // 0x30
	bool bEnablePreviousTangentRecalculation; // 0x30
	bool bTangentRecalculationEveryFrame; // 0x30
	float TilingDistance; // 0x34
	float DistanceTessellationStepSize; // 0x38
	float TangentTessellationStepSize; // 0x3c
	float WidthTessellationStepSize; // 0x40

};


instance 1ab5e1a2ec0
class ParticleModuleTypeDataBeam2 public : ParticleModuleTypeDataBase
{
	// Fields
	BYTE BeamMethod; // 0x30
	int TextureTile; // 0x34
	float TextureTileDistance; // 0x38
	int Sheets; // 0x3c
	int MaxBeamCount; // 0x40
	float Speed; // 0x44
	int InterpolationPoints; // 0x48
	bool bAlwaysOn; // 0x4c
	int UpVectorStepSize; // 0x50
	FName BranchParentName; // 0x54
	RawDistributionFloat Distance; // 0x60
	BYTE TaperMethod; // 0x90
	RawDistributionFloat TaperFactor; // 0x98
	RawDistributionFloat TaperScale; // 0xc8
	bool RenderGeometry; // 0xf8
	bool RenderDirectLine; // 0xf8
	bool RenderLines; // 0xf8
	bool RenderTessellation; // 0xf8

};


instance 1ab5e1a2c80
class ParticleModuleTypeDataGpu public : ParticleModuleTypeDataBase
{
	// Fields
	GPUSpriteEmitterInfo EmitterInfo; // 0x30
	GPUSpriteResourceData ResourceData; // 0x2b0
	float CameraMotionBlurAmount; // 0x410
	bool bClearExistingParticlesOnInit; // 0x414

};


instance 1ab5e1a2a40
class ParticleModuleTypeDataMesh public : ParticleModuleTypeDataBase
{
	// Fields
	StaticMesh* Mesh; // 0x30
	float LODSizeScale; // 0x40
	bool bUseStaticMeshLODs; // 0x44
	bool CastShadows; // 0x44
	bool DoCollisions; // 0x44
	BYTE MeshAlignment; // 0x45
	bool bOverrideMaterial; // 0x46
	bool bOverrideDefaultMotionBlurSettings; // 0x46
	bool bEnableMotionBlur; // 0x46
	RawDistributionVector RollPitchYawRange; // 0x48
	BYTE AxisLockOption; // 0x90
	bool bCameraFacing; // 0x91
	BYTE CameraFacingUpAxisOption; // 0x92
	BYTE CameraFacingOption; // 0x93
	bool bApplyParticleRotationAsSpin; // 0x94
	bool bFaceCameraDirectionRatherThanPosition; // 0x94
	bool bCollisionsConsiderPartilceSize; // 0x94

};


instance 1ab5e1a2800
class ParticleModuleTypeDataRibbon public : ParticleModuleTypeDataBase
{
	// Fields
	int MaxTessellationBetweenParticles; // 0x30
	int SheetsPerTrail; // 0x34
	int MaxTrailCount; // 0x38
	int MaxParticleInTrailCount; // 0x3c
	bool bDeadTrailsOnDeactivate; // 0x40
	bool bDeadTrailsOnSourceLoss; // 0x40
	bool bClipSourceSegement; // 0x40
	bool bEnablePreviousTangentRecalculation; // 0x40
	bool bTangentRecalculationEveryFrame; // 0x40
	bool bSpawnInitialParticle; // 0x40
	BYTE RenderAxis; // 0x44
	float TangentSpawningScalar; // 0x48
	bool bRenderGeometry; // 0x4c
	bool bRenderSpawnPoints; // 0x4c
	bool bRenderTangents; // 0x4c
	bool bRenderTessellation; // 0x4c
	float TilingDistance; // 0x50
	float DistanceTessellationStepSize; // 0x54
	bool bEnableTangentDiffInterpScale; // 0x58
	float TangentTessellationScalar; // 0x5c

};


instance 1ab5e1a25c0
class ParticleModuleVectorFieldBase public : ParticleModule
{
	// Fields

};


instance 1ab5e1a2380
class ParticleModuleVectorFieldGlobal public : ParticleModuleVectorFieldBase
{
	// Fields
	bool bOverrideGlobalVectorFieldTightness; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38

};


instance 1ab5e1a2140
class ParticleModuleVectorFieldLocal public : ParticleModuleVectorFieldBase
{
	// Fields
	VectorField* VectorField; // 0x30
	Vector RelativeTranslation; // 0x38
	Rotator RelativeRotation; // 0x44
	Vector RelativeScale3D; // 0x50
	float Intensity; // 0x5c
	float Tightness; // 0x60
	bool bIgnoreComponentTransform; // 0x64
	bool bTileX; // 0x64
	bool bTileY; // 0x64
	bool bTileZ; // 0x64
	bool bUseFixDT; // 0x64

};


instance 1ab5e1a1f00
class ParticleModuleVectorFieldRotation public : ParticleModuleVectorFieldBase
{
	// Fields
	Vector MinInitialRotation; // 0x30
	Vector MaxInitialRotation; // 0x3c

};


instance 1ab5e1a1cc0
class ParticleModuleVectorFieldRotationRate public : ParticleModuleVectorFieldBase
{
	// Fields
	Vector RotationRate; // 0x30

};


instance 1ab5e1a1a80
class ParticleModuleVectorFieldScale public : ParticleModuleVectorFieldBase
{
	// Fields
	DistributionFloat* VectorFieldScale; // 0x30
	RawDistributionFloat VectorFieldScaleRaw; // 0x38

};


instance 1ab5e1a1840
class ParticleModuleVectorFieldScaleOverLife public : ParticleModuleVectorFieldBase
{
	// Fields
	DistributionFloat* VectorFieldScaleOverLife; // 0x30
	RawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38

};


instance 1ab5e1a13c0
class ParticleModuleVelocityBase public : ParticleModule
{
	// Fields
	bool bInWorldSpace; // 0x30
	bool bApplyOwnerScale; // 0x30

};


instance 1ab5e1a1600
class ParticleModuleVelocity public : ParticleModuleVelocityBase
{
	// Fields
	RawDistributionVector StartVelocity; // 0x38
	RawDistributionFloat StartVelocityRadial; // 0x80

};


instance 1ab5e1a1180
class ParticleModuleVelocity_Seeded public : ParticleModuleVelocity
{
	// Fields
	ParticleRandomSeedInfo RandomSeedInfo; // 0xb0

};


instance 1ab5e1a0f40
class ParticleModuleVelocityCone public : ParticleModuleVelocityBase
{
	// Fields
	RawDistributionFloat Angle; // 0x38
	RawDistributionFloat Velocity; // 0x68
	Vector Direction; // 0x98

};


instance 1ab5e1a0d00
class ParticleModuleVelocityInheritParent public : ParticleModuleVelocityBase
{
	// Fields
	RawDistributionVector Scale; // 0x38

};


instance 1ab5e1a0ac0
class ParticleModuleVelocityOverLifetime public : ParticleModuleVelocityBase
{
	// Fields
	RawDistributionVector VelOverLife; // 0x38
	bool Absolute; // 0x80

};


instance 1ab5e1a0880
class ParticleSpriteEmitter public : ParticleEmitter
{
	// Fields

};


instance 1ab5e1a0640
class FXSystemAsset public : Object
{
	// Fields
	int MaxPoolSize; // 0x28

};


instance 1ab5e1a0400
class ParticleSystem public : FXSystemAsset
{
	// Fields
	float UpdateTime_FPS; // 0x30
	float UpdateTime_Delta; // 0x34
	float WarmupTime; // 0x38
	float WarmupTickRate; // 0x3c
	TArray Emitters; // 0x40
	ParticleSystemComponent* PreviewComponent; // 0x50
	InterpCurveEdSetup* CurveEdSetup; // 0x58
	float LODDistanceCheckTime; // 0x60
	float MacroUVRadius; // 0x64
	TArray LODDistances; // 0x68
	TArray LODSettings; // 0x78
	Box FixedRelativeBoundingBox; // 0x88
	float SecondsBeforeInactive; // 0xa4
	float Delay; // 0xa8
	float DelayLow; // 0xac
	bool bOrientZAxisTowardCamera; // 0xb0
	bool bUseFixedRelativeBoundingBox; // 0xb0
	bool bShouldResetPeakCounts; // 0xb0
	bool bHasPhysics; // 0xb0
	bool bUseRealtimeThumbnail; // 0xb0
	bool ThumbnailImageOutOfDate; // 0xb0
	bool bUseDelayRange; // 0xb1
	bool bAllowManagedTicking; // 0xb1
	bool bAutoDeactivate; // 0xb1
	bool bRegenerateLODDuplicate; // 0xb1
	BYTE SystemUpdateMode; // 0xb2
	BYTE LODMethod; // 0xb3
	EParticleSystemInsignificanceReaction InsignificantReaction; // 0xb4
	BYTE OcclusionBoundsMethod; // 0xb5
	EParticleSignificanceLevel MaxSignificanceLevel; // 0xb7
	int MinTimeBetweenTicks; // 0xb8
	float InsignificanceDelay; // 0xbc
	Vector MacroUVPosition; // 0xc0
	Box CustomOcclusionBounds; // 0xcc
	TArray SoloTracking; // 0xe8
	TArray NamedMaterialSlots; // 0xf8

	// Functions
	ContainsEmitterType 0x4f2b7 hash f2300280 params:( Class TypeData;None ReturnValue; );
};


instance 1ab5e1a01c0
class FXSystemComponent public : PrimitiveComponent
{
	// Fields

	// Functions
	SetVectorParameter 0x49c90 hash df99c205 params:( None ParameterName;Vector Param; );
	SetUseAutoManageAttachment 0x4f2f5 hash c7e2a509 params:( None bAutoManage; );
	SetFloatParameter 0x40ca1 hash 44c33de8 params:( None ParameterName;None Param; );
	SetEmitterEnable 0x4f2ec hash aa1837b2 params:( None EmitterName;None bNewEnableState; );
	SetColorParameter 0x49c74 hash 31425cb1 params:( None ParameterName;LinearColor Param; );
	SetAutoAttachmentParameters 0x4f2dd hash bc2d3a47 params:( SceneComponent Parent;None SocketName;UnderlyingType LocationRule;UnderlyingType RotationRule;UnderlyingType ScaleRule; );
	SetActorParameter 0x49c6a hash 89e8626b params:( None ParameterName;Actor Param; );
	ReleaseToPool 0x4f2d5 hash 742315c3 params:(  );
	GetFXSystemAsset 0x4f2cc hash d61436e8 params:( FXSystemAsset ReturnValue; );
};


instance 1ab5e1a9400
class ParticleSystemComponent public : FXSystemComponent
{
	// Fields
	ParticleSystem* Template; // 0x3d8
	TArray EmitterMaterials; // 0x3e0
	TArray SkelMeshComponents; // 0x3f0
	bool bResetOnDetach; // 0x401
	bool bUpdateOnDedicatedServer; // 0x401
	bool bAllowRecycling; // 0x401
	bool bAutoManageAttachment; // 0x401
	bool bWarmingUp; // 0x402
	bool bOverrideLODMethod; // 0x402
	bool bSkipUpdateDynamicDataDuringTick; // 0x402
	BYTE LODMethod; // 0x40d
	EParticleSignificanceLevel RequiredSignificance; // 0x40e
	TArray InstanceParameters; // 0x410
	MulticastInlineDelegateProperty OnParticleSpawn; // 0x420 property 0x1ab71ec9300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnParticleBurst; // 0x430 property 0x1ab71ec9380 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnParticleDeath; // 0x440 property 0x1ab71ec9400 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnParticleCollide; // 0x450 property 0x1ab71ec9480 hash 0xb7a5ed1a
	Vector OldPosition; // 0x460
	Vector PartSysVelocity; // 0x46c
	float WarmupTime; // 0x478
	float WarmupTickRate; // 0x47c
	float SecondsBeforeInactive; // 0x484
	float MaxTimeBeforeForceUpdateTransform; // 0x48c
	TArray ReplayClips; // 0x4b0
	float CustomTimeDilation; // 0x4c8
	WeakObjectProperty AutoAttachParent; // 0x520 property 0x1ab71ec7600 hash 0x24388009
	FName AutoAttachSocketName; // 0x528
	EAttachmentRule AutoAttachLocationRule; // 0x530
	EAttachmentRule AutoAttachRotationRule; // 0x531
	EAttachmentRule AutoAttachScaleRule; // 0x532
	MulticastInlineDelegateProperty OnSystemFinished; // 0x560 property 0x1ab71ec7980 hash 0xb7a5ed1a

	// Functions
	SetTrailSourceData 0x4f3f1 hash 68fa8138 params:( None InFirstSocketName;None InSecondSocketName;ETrailWidthMode InWidthMode;None InWidth; );
	SetTemplate 0x49c89 hash 73c4be4d params:( ParticleSystem NewTemplate; );
	SetMaterialParameter 0x49c7e hash 6d43c681 params:( None ParameterName;MaterialInterface Param; );
	SetBeamTargetTangent 0x4f3e6 hash e7d60fe params:( None EmitterIndex;Vector NewTangentPoint;None TargetIndex; );
	SetBeamTargetStrength 0x4f3da hash b1af71bc params:( None EmitterIndex;None NewTargetStrength;None TargetIndex; );
	SetBeamTargetPoint 0x4f3d0 hash 16cc4257 params:( None EmitterIndex;Vector NewTargetPoint;None TargetIndex; );
	SetBeamSourceTangent 0x4f3c5 hash 682373c8 params:( None EmitterIndex;Vector NewTangentPoint;None SourceIndex; );
	SetBeamSourceStrength 0x4f3b9 hash 4017ddc6 params:( None EmitterIndex;None NewSourceStrength;None SourceIndex; );
	SetBeamSourcePoint 0x4f3af hash 915b1aa1 params:( None EmitterIndex;Vector NewSourcePoint;None SourceIndex; );
	SetBeamEndPoint 0x4f3a6 hash ee7231a7 params:( None EmitterIndex;Vector NewEndPoint; );
	SetAutoAttachParams 0x4f39b hash 38dd7d03 params:( SceneComponent Parent;None SocketName;EAttachLocation LocationType; );
	GetNumActiveParticles 0x4f38f hash 27b5c738 params:( None ReturnValue; );
	GetNamedMaterial 0x4f386 hash 51d5b419 params:( None InName;MaterialInterface ReturnValue; );
	GetBeamTargetTangent 0x4f37b hash 7ca73472 params:( None EmitterIndex;None TargetIndex;Vector OutTangentPoint;None ReturnValue; );
	GetBeamTargetStrength 0x4f36f hash e513b3b0 params:( None EmitterIndex;None TargetIndex;None OutTargetStrength;None ReturnValue; );
	GetBeamTargetPoint 0x4f365 hash edc2a8cb params:( None EmitterIndex;None TargetIndex;Vector OutTargetPoint;None ReturnValue; );
	GetBeamSourceTangent 0x4f35a hash d64d473c params:( None EmitterIndex;None SourceIndex;Vector OutTangentPoint;None ReturnValue; );
	GetBeamSourceStrength 0x4f34e hash 737c1fba params:( None EmitterIndex;None SourceIndex;None OutSourceStrength;None ReturnValue; );
	GetBeamSourcePoint 0x4f344 hash 68518115 params:( None EmitterIndex;None SourceIndex;Vector OutSourcePoint;None ReturnValue; );
	GetBeamEndPoint 0x4f33b hash 47190c9b params:( None EmitterIndex;Vector OutEndPoint;None ReturnValue; );
	GenerateParticleEvent 0x4f32f hash d4c682e6 params:( None InEventName;None InEmitterTime;Vector InLocation;Vector InDirection;Vector InVelocity; );
	EndTrails 0x4f329 hash b9e7700b params:(  );
	CreateNamedDynamicMaterialInstance 0x4f317 hash 9265b2e7 params:( None InName;MaterialInterface SourceMaterial;MaterialInstanceDynamic ReturnValue; );
	BeginTrails 0x4f310 hash 8a4ae359 params:( None InFirstSocketName;None InSecondSocketName;ETrailWidthMode InWidthMode;None InWidth; );
};


instance 1ab5e1a91c0
class ParticleSystemReplay public : Object
{
	// Fields
	int ClipIDNumber; // 0x28

};


instance 1ab5e1a8f80
class PathFollowingAgentInterface public : Interface
{
	// Fields

};


instance 1ab5e1a8d40
class PawnNoiseEmitterComponent public : ActorComponent
{
	// Fields
	bool bAIPerceptionSystemCompatibilityMode; // 0xb0
	Vector LastRemoteNoisePosition; // 0xb4
	float NoiseLifetime; // 0xc0
	float LastRemoteNoiseVolume; // 0xc4
	float LastRemoteNoiseTime; // 0xc8
	float LastLocalNoiseVolume; // 0xcc
	float LastLocalNoiseTime; // 0xd0

	// Functions
	MakeNoise 0x3f223 hash 9e6ec0a1 params:( Actor NoiseMaker;None Loudness;Vector NoiseLocation; );
};


instance 1ab5e1a8b00
class PhysicalAnimationComponent public : ActorComponent
{
	// Fields
	float StrengthMultiplyer; // 0xb0
	SkeletalMeshComponent* SkeletalMeshComponent; // 0xb8

	// Functions
	SetStrengthMultiplyer 0x4f47f hash aaeffef7 params:( None InStrengthMultiplyer; );
	SetSkeletalMeshComponent 0x4f472 hash a098c66 params:( SkeletalMeshComponent InSkeletalMeshComponent; );
	GetBodyTargetTransform 0x4f466 hash b425f236 params:( None BodyName;Transform ReturnValue; );
	ApplyPhysicalAnimationSettingsBelow 0x4f453 hash 206441f2 params:( None BodyName;PhysicalAnimationData PhysicalAnimationData;None bIncludeSelf; );
	ApplyPhysicalAnimationSettings 0x4f443 hash a0c7ec99 params:( None BodyName;PhysicalAnimationData PhysicalAnimationData; );
	ApplyPhysicalAnimationProfileBelow 0x4f431 hash 83aa6a92 params:( None BodyName;None ProfileName;None bIncludeSelf;None bClearNotFound; );
};


instance 1ab5e1a88c0
class PhysicalMaterialPropertyBase public : Object
{
	// Fields

};


instance 1ab5e1a8680
class PhysicsAsset public : Object
{
	// Fields
	TArray BoundsBodies; // 0x30
	TArray SkeletalBodySetups; // 0x40
	TArray ConstraintSetup; // 0x50
	bool bNotForDedicatedServer; // 0x60
	ThumbnailInfo* ThumbnailInfo; // 0x108
	TArray BodySetup; // 0x110

};


instance 1ab5e1a8440
class SkeletalBodySetup public : BodySetup
{
	// Fields
	bool bSkipScaleFromAnimation; // 0x240
	TArray PhysicalAnimationData; // 0x248

};


instance 1ab5e1a8200
class PhysicsCollisionHandler public : Object
{
	// Fields
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	SoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38

};


instance 1ab5e1a7d80
class RigidBodyBase public : Actor
{
	// Fields

};


instance 1ab5e1a7fc0
class PhysicsConstraintActor public : RigidBodyBase
{
	// Fields
	PhysicsConstraintComponent* ConstraintComp; // 0x218
	Actor* ConstraintActor1; // 0x220
	Actor* ConstraintActor2; // 0x228
	bool bDisableCollision; // 0x230

};


instance 1ab5e1a7b40
class PhysicsConstraintComponent public : SceneComponent
{
	// Fields
	Actor* ConstraintActor1; // 0x1f0
	ConstrainComponentPropName ComponentName1; // 0x1f8
	Actor* ConstraintActor2; // 0x200
	ConstrainComponentPropName ComponentName2; // 0x208
	PhysicsConstraintTemplate* ConstraintSetup; // 0x220
	MulticastInlineDelegateProperty OnConstraintBroken; // 0x228 property 0x1ab71eca780 hash 0xb7a5ed1a
	ConstraintInstance ConstraintInstance; // 0x238

	// Functions
	SetOrientationDriveTwistAndSwing 0x4f65a hash a353f78d params:( None bEnableTwistDrive;None bEnableSwingDrive; );
	SetOrientationDriveSLERP 0x4f64d hash 7d5f541d params:( None bEnableSLERP; );
	SetLinearZLimit 0x4f644 hash 71898c85 params:( ELinearConstraintMotion ConstraintType;None LimitSize; );
	SetLinearYLimit 0x4f63b hash 6f3463e4 params:( ELinearConstraintMotion ConstraintType;None LimitSize; );
	SetLinearXLimit 0x4f632 hash 6cdf3b43 params:( ELinearConstraintMotion ConstraintType;None LimitSize; );
	SetLinearVelocityTarget 0x4f625 hash f669b22 params:( Vector InVelTarget; );
	SetLinearVelocityDrive 0x4f619 hash 3d6ea2f5 params:( None bEnableDriveX;None bEnableDriveY;None bEnableDriveZ; );
	SetLinearPositionTarget 0x4f60c hash 54c0cd08 params:( Vector InPosTarget; );
	SetLinearPositionDrive 0x4f600 hash f9b7301b params:( None bEnableDriveX;None bEnableDriveY;None bEnableDriveZ; );
	SetLinearDriveParams 0x4f5f5 hash 88c2686a params:( None PositionStrength;None VelocityStrength;None InForceLimit; );
	SetLinearBreakable 0x4f5eb hash 14469625 params:( None bLinearBreakable;None LinearBreakThreshold; );
	SetDisableCollision 0x4f5e0 hash edd77d31 params:( None bDisableCollision; );
	SetConstraintReferencePosition 0x4f5d0 hash 302c9c3a params:( EConstraintFrame Frame;Vector RefPosition; );
	SetConstraintReferenceOrientation 0x4f5be hash 3a093d91 params:( EConstraintFrame Frame;Vector PriAxis;Vector SecAxis; );
	SetConstraintReferenceFrame 0x4f5af hash 37698350 params:( EConstraintFrame Frame;Transform RefFrame; );
	SetConstrainedComponents 0x4f5a2 hash 9b657ab1 params:( PrimitiveComponent Component1;None BoneName1;PrimitiveComponent Component2;None BoneName2; );
	SetAngularVelocityTarget 0x4f595 hash 37682d51 params:( Vector InVelTarget; );
	SetAngularVelocityDriveTwistAndSwing 0x4f582 hash 8896a53a params:( None bEnableTwistDrive;None bEnableSwingDrive; );
	SetAngularVelocityDriveSLERP 0x4f573 hash 8d39a4ca params:( None bEnableSLERP; );
	SetAngularVelocityDrive 0x4f566 hash 275f2b44 params:( None bEnableSwingDrive;None bEnableTwistDrive; );
	SetAngularTwistLimit 0x4f55b hash 417576d5 params:( EAngularConstraintMotion ConstraintType;None TwistLimitAngle; );
	SetAngularSwing2Limit 0x4f54f hash 26145594 params:( EAngularConstraintMotion MotionType;None Swing2LimitAngle; );
	SetAngularSwing1Limit 0x4f543 hash 23bf2cf3 params:( EAngularConstraintMotion MotionType;None Swing1LimitAngle; );
	SetAngularOrientationTarget 0x4f534 hash fa670a0e params:( Rotator InPosTarget; );
	SetAngularOrientationDrive 0x4f526 hash a966e461 params:( None bEnableSwingDrive;None bEnableTwistDrive; );
	SetAngularDriveParams 0x4f51a hash 510690f9 params:( None PositionStrength;None VelocityStrength;None InForceLimit; );
	SetAngularDriveMode 0x4f50f hash 326024da params:( EAngularDriveMode DriveMode; );
	SetAngularBreakable 0x4f504 hash e4f94ef4 params:( None bAngularBreakable;None AngularBreakThreshold; );
	IsBroken 0x4f4ff hash 11245e82 params:( None ReturnValue; );
	GetCurrentTwist 0x4f4f6 hash 6d38223 params:( None ReturnValue; );
	GetCurrentSwing2 0x4f4ed hash deee8722 params:( None ReturnValue; );
	GetCurrentSwing1 0x4f4e4 hash deee8721 params:( None ReturnValue; );
	GetConstraintForce 0x4f4da hash cfb5c939 params:( Vector OutLinearForce;Vector OutAngularForce; );
	BreakConstraint 0x404f9 hash 6ee61a8f params:(  );
};


instance 1ab5e1a7900
class PhysicsConstraintTemplate public : Object
{
	// Fields
	ConstraintInstance DefaultInstance; // 0x28
	TArray ProfileHandles; // 0x1e0
	ConstraintProfileProperties DefaultProfile; // 0x1f0

};


instance 1ab5e1a76c0
class PhysicsHandleComponent public : ActorComponent
{
	// Fields
	PrimitiveComponent* GrabbedComponent; // 0xb0
	bool bSoftAngularConstraint; // 0xc0
	bool bSoftLinearConstraint; // 0xc0
	bool bInterpolateTarget; // 0xc0
	float LinearDamping; // 0xc4
	float LinearStiffness; // 0xc8
	float AngularDamping; // 0xcc
	float AngularStiffness; // 0xd0
	float InterpolationSpeed; // 0x140

	// Functions
	SetTargetRotation 0x4f70a hash 5dcf71a8 params:( Rotator NewRotation; );
	SetTargetLocationAndRotation 0x4f6fb hash a1bfda14 params:( Vector NewLocation;Rotator NewRotation; );
	SetTargetLocation 0x4f6f1 hash ac9cc1b1 params:( Vector NewLocation; );
	SetLinearStiffness 0x4f6e7 hash e84d3341 params:( None NewLinearStiffness; );
	SetLinearDamping 0x3f981 hash 3680408c params:( None NewLinearDamping; );
	SetInterpolationSpeed 0x4f6db hash 7db8ffaa params:( None NewInterpolationSpeed; );
	SetAngularStiffness 0x4f6d0 hash b8ffec10 params:( None NewAngularStiffness; );
	SetAngularDamping 0x3f868 hash 1640799b params:( None NewAngularDamping; );
	ReleaseComponent 0x4f6c7 hash 2f9f4159 params:(  );
	GrabComponentAtLocationWithRotation 0x4f6b4 hash e99ba36e params:( PrimitiveComponent Component;None InBoneName;Vector Location;Rotator Rotation; );
	GrabComponentAtLocation 0x4f6a7 hash 52676e82 params:( PrimitiveComponent Component;None InBoneName;Vector GrabLocation; );
	GrabComponent 0x4f69f hash 11e3fcb4 params:( PrimitiveComponent Component;None InBoneName;Vector GrabLocation;None bConstrainRotation; );
	GetTargetLocationAndRotation 0x4f690 hash 826fe188 params:( Vector TargetLocation;Rotator TargetRotation; );
	GetGrabbedComponent 0x4f685 hash 57bd191f params:( PrimitiveComponent ReturnValue; );
};


instance 1ab5e1a7480
class PhysicsSettings public : DeveloperSettings
{
	// Fields
	float DefaultGravityZ; // 0x38
	float DefaultTerminalVelocity; // 0x3c
	float DefaultFluidFriction; // 0x40
	int SimulateScratchMemorySize; // 0x44
	int RagdollAggregateThreshold; // 0x48
	float TriangleMeshTriangleMinAreaThreshold; // 0x4c
	bool bEnableShapeSharing; // 0x50
	bool bEnablePCM; // 0x51
	bool bEnableStabilization; // 0x52
	bool bWarnMissingLocks; // 0x53
	bool bEnable2DPhysics; // 0x54
	RigidBodyErrorCorrection PhysicErrorCorrection; // 0x58
	BYTE LockedAxis; // 0x8c
	BYTE DefaultDegreesOfFreedom; // 0x8d
	float BounceThresholdVelocity; // 0x90
	BYTE FrictionCombineMode; // 0x94
	BYTE RestitutionCombineMode; // 0x95
	float MaxAngularVelocity; // 0x98
	float MaxDepenetrationVelocity; // 0x9c
	float ContactOffsetMultiplier; // 0xa0
	float MinContactOffset; // 0xa4
	float MaxContactOffset; // 0xa8
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0xac
	BYTE DefaultShapeComplexity; // 0xad
	bool bDefaultHasComplexCollision; // 0xae
	bool bSuppressFaceRemapTable; // 0xaf
	bool bSupportUVFromHitResults; // 0xb0
	bool bDisableActiveActors; // 0xb1
	bool bDisableKinematicStaticPairs; // 0xb2
	bool bDisableKinematicKinematicPairs; // 0xb3
	bool bDisableCCD; // 0xb4
	bool bEnableEnhancedDeterminism; // 0xb5
	float AnimPhysicsMinDeltaTime; // 0xb8
	bool bSimulateAnimPhysicsAfterReset; // 0xbc
	float MaxPhysicsDeltaTime; // 0xc0
	bool bSubstepping; // 0xc4
	bool bSubsteppingAsync; // 0xc5
	float MaxSubstepDeltaTime; // 0xc8
	int MaxSubsteps; // 0xcc
	float SyncSceneSmoothingFactor; // 0xd0
	float InitialAverageFrameRate; // 0xd4
	int PhysXTreeRebuildRate; // 0xd8
	TArray PhysicalSurfaces; // 0xe0
	BroadphaseSettings DefaultBroadphaseSettings; // 0xf0
	ChaosPhysicsSettings ChaosSettings; // 0x130

};


instance 1ab5e1a7240
class PhysicsSpringComponent public : SceneComponent
{
	// Fields
	float SpringStiffness; // 0x1f0
	float SpringDamping; // 0x1f4
	float SpringLengthAtRest; // 0x1f8
	float SpringRadius; // 0x1fc
	BYTE SpringChannel; // 0x200
	bool bIgnoreSelf; // 0x201
	float SpringCompression; // 0x204

	// Functions
	GetSpringRestingPoint 0x4f750 hash 9b2818de params:( Vector ReturnValue; );
	GetSpringDirection 0x4f746 hash 27a90779 params:( Vector ReturnValue; );
	GetSpringCurrentEndPoint 0x4f739 hash 7ca0265c params:( Vector ReturnValue; );
	GetNormalizedCompressionScalar 0x4f729 hash af5913a2 params:( None ReturnValue; );
};


instance 1ab5e1a7000
class PhysicsThruster public : RigidBodyBase
{
	// Fields
	PhysicsThrusterComponent* ThrusterComponent; // 0x218

};


instance 1ab5e1a6dc0
class PhysicsThrusterComponent public : SceneComponent
{
	// Fields
	float ThrustStrength; // 0x1f0

};


instance 1ab5e1a6940
class SceneCapture public : Actor
{
	// Fields
	StaticMeshComponent* MeshComp; // 0x218
	SceneComponent* SceneComponent; // 0x220

};


instance 1ab5e1a6b80
class PlanarReflection public : SceneCapture
{
	// Fields
	PlanarReflectionComponent* PlanarReflectionComponent; // 0x228
	bool bShowPreviewPlane; // 0x230

	// Functions
	OnInterpToggle 0x4f782 hash 2bfb47b6 params:( None bEnable; );
};


instance 1ab5e1a64c0
class SceneCaptureComponent public : SceneComponent
{
	// Fields
	ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; // 0x1f0
	BYTE CaptureSource; // 0x1f1
	TArray HiddenComponents; // 0x1f8
	TArray HiddenActors; // 0x208
	TArray ShowOnlyComponents; // 0x218
	TArray ShowOnlyActors; // 0x228
	bool bCaptureEveryFrame; // 0x238
	bool bCaptureOnMovement; // 0x239
	bool bAlwaysPersistRenderingState; // 0x23a
	float LODDistanceFactor; // 0x23c
	float MaxViewDistanceOverride; // 0x240
	int CaptureSortPriority; // 0x244
	TArray ShowFlagSettings; // 0x248
	FString ProfilingEventName; // 0x268

	// Functions
	ShowOnlyComponent 0x4f806 hash d44cbbbb params:( PrimitiveComponent InComponent; );
	ShowOnlyActorComponents 0x4f7f9 hash 29797e47 params:( Actor InActor; );
	SetCaptureSortPriority 0x4f7ed hash f2b92acf params:( None NewCaptureSortPriority; );
	RemoveShowOnlyComponent 0x4f7e0 hash 6871ccc9 params:( PrimitiveComponent InComponent; );
	RemoveShowOnlyActorComponents 0x4f7d0 hash 5916a1d5 params:( Actor InActor; );
	HideComponent 0x4f7c8 hash 44ea90f2 params:( PrimitiveComponent InComponent; );
	HideActorComponents 0x4f7bd hash 9a2620be params:( Actor InActor; );
	ClearShowOnlyComponents 0x4f7b0 hash d7d9fb5 params:(  );
	ClearHiddenComponents 0x4f7a4 hash 2473f17e params:(  );
};


instance 1ab5e1a6700
class PlanarReflectionComponent public : SceneCaptureComponent
{
	// Fields
	BoxComponent* PreviewBox; // 0x288
	float NormalDistortionStrength; // 0x290
	float PrefilterRoughness; // 0x294
	float PrefilterRoughnessDistance; // 0x298
	int ScreenPercentage; // 0x29c
	float ExtraFOV; // 0x2a0
	float DistanceFromPlaneFadeStart; // 0x2a4
	float DistanceFromPlaneFadeEnd; // 0x2a8
	float DistanceFromPlaneFadeoutStart; // 0x2ac
	float DistanceFromPlaneFadeoutEnd; // 0x2b0
	float AngleFromPlaneFadeStart; // 0x2b4
	float AngleFromPlaneFadeEnd; // 0x2b8
	bool bShowPreviewPlane; // 0x2bc
	bool bRenderSceneTwoSided; // 0x2bd

};


instance 1ab5e1a6280
class PlaneReflectionCapture public : ReflectionCapture
{
	// Fields

};


instance 1ab5e1a6040
class PlaneReflectionCaptureComponent public : ReflectionCaptureComponent
{
	// Fields
	float InfluenceRadiusScale; // 0x268
	DrawSphereComponent* PreviewInfluenceRadius; // 0x270
	BoxComponent* PreviewCaptureBox; // 0x278

};


instance 1ab5e1a5e00
class PlatformEventsComponent public : ActorComponent
{
	// Fields
	MulticastInlineDelegateProperty PlatformChangedToLaptopModeDelegate; // 0xb0 property 0x1ab712f4400 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty PlatformChangedToTabletModeDelegate; // 0xc0 property 0x1ab712f4480 hash 0xb7a5ed1a
	DelegateFunction PlatformEventDelegate__DelegateSignature; // 0x0 property 0x1ab712061a0 hash 0x8ad2d5e6

	// Functions
	SupportsConvertibleLaptops 0x4f84a hash e4d16b95 params:( None ReturnValue; );
	IsInTabletMode 0x4f842 hash 31ff0099 params:( None ReturnValue; );
	IsInLaptopMode 0x4f83a hash 7c21362d params:( None ReturnValue; );
};


instance 1ab5e1a5bc0
class PlatformInterfaceWebResponse public : Object
{
	// Fields
	FString OriginalURL; // 0x28
	int ResponseCode; // 0x38
	int Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray BinaryResponse; // 0x50

	// Functions
	GetNumHeaders 0x4f875 hash d78a6b51 params:( None ReturnValue; );
	GetHeaderValue 0x4f86d hash f00891ab params:( None HeaderName;None ReturnValue; );
	GetHeader 0x4f867 hash 74a65ee params:( None HeaderIndex;None Header;None Value; );
};


instance 1ab5e1a5980
class PlayerCameraManager public : Actor
{
	// Fields
	PlayerController* PCOwner; // 0x218
	SceneComponent* TransformComponent; // 0x220
	float DefaultFOV; // 0x230
	float DefaultOrthoWidth; // 0x238
	float DefaultAspectRatio; // 0x240
	CameraCacheEntry CameraCache; // 0x290
	CameraCacheEntry LastFrameCameraCache; // 0x860
	TViewTarget ViewTarget; // 0xe30
	TViewTarget PendingViewTarget; // 0x1410
	CameraCacheEntry CameraCachePrivate; // 0x1a10
	CameraCacheEntry LastFrameCameraCachePrivate; // 0x1fe0
	TArray ModifierList; // 0x25b0
	TArray DefaultModifiers; // 0x25c0
	float FreeCamDistance; // 0x25d0
	Vector FreeCamOffset; // 0x25d4
	Vector ViewTargetOffset; // 0x25e0
	TArray CameraLensEffects; // 0x2600
	CameraModifier_CameraShake* CachedCameraShakeMod; // 0x2610
	CameraAnimInst* AnimInstPool; // 0x2618
	TArray PostProcessBlendCache; // 0x2658
	TArray ActiveAnims; // 0x2678
	TArray FreeAnims; // 0x2688
	CameraActor* AnimCameraActor; // 0x2698
	bool bIsOrthographic; // 0x26a0
	bool bDefaultConstrainAspectRatio; // 0x26a0
	bool bClientSimulatingViewTarget; // 0x26a0
	bool bUseClientSideCameraUpdates; // 0x26a0
	bool bGameCameraCutThisFrame; // 0x26a1
	float ViewPitchMin; // 0x26a4
	float ViewPitchMax; // 0x26a8
	float ViewYawMin; // 0x26ac
	float ViewYawMax; // 0x26b0
	float ViewRollMin; // 0x26b4
	float ViewRollMax; // 0x26b8
	float ServerUpdateCameraTimeout; // 0x26c0

	// Functions
	StopCameraShake 0x4f963 hash a51b7d00 params:( CameraShake ShakeInstance;None bImmediately; );
	StopCameraFade 0x4f95b hash 4f996e4 params:(  );
	StopCameraAnimInst 0x4f951 hash dbc2d057 params:( CameraAnimInst AnimInst;None bImmediate; );
	StopAllInstancesOfCameraShake 0x4f941 hash 90677316 params:( Class Shake;None bImmediately; );
	StopAllInstancesOfCameraAnim 0x4f932 hash 70f19c4f params:( CameraAnim Anim;None bImmediate; );
	StopAllCameraShakes 0x4f927 hash 8f2eb1ec params:( None bImmediately; );
	StopAllCameraAnims 0x4f91d hash 6faf99e5 params:( None bImmediate; );
	StartCameraFade 0x4f914 hash e9680b6c params:( None FromAlpha;None ToAlpha;None Duration;LinearColor Color;None bShouldFadeAudio;None bHoldWhenFinished; );
	SetManualCameraFade 0x4f909 hash 52daa888 params:( None InFadeAmount;LinearColor Color;None bInFadeAudio; );
	SetGameCameraCutThisFrame 0x4f8fb hash 98809203 params:(  );
	RemoveCameraModifier 0x4f8f0 hash 432e618b params:( CameraModifier ModifierToRemove;None ReturnValue; );
	RemoveCameraLensEffect 0x4f8e4 hash 268e817b params:( EmitterCameraLensEffectBase Emitter; );
	PlayCameraShake 0x4f8db hash 429f2a10 params:( Class ShakeClass;None Scale;ECameraAnimPlaySpace PlaySpace;Rotator UserPlaySpaceRot;CameraShake ReturnValue; );
	PlayCameraAnim 0x4f8d3 hash db315c09 params:( CameraAnim Anim;None Rate;None Scale;None BlendInTime;None BlendOutTime;None bLoop;None bRandomStartTime;None Duration;ECameraAnimPlaySpace PlaySpace;Rotator UserPlaySpaceRot;CameraAnimInst ReturnValue; );
	PhotographyCameraModify 0x3221c hash a3b31d4b params:( Vector NewCameraLocation;Vector PreviousCameraLocation;Vector OriginalCameraLocation;Vector ResultCameraLocation; );
	OnPhotographySessionStart 0x3220e hash 8b28749 params:(  );
	OnPhotographySessionEnd 0x32201 hash 705fd712 params:(  );
	OnPhotographyMultiPartCaptureStart 0x321ef hash 5a40875b params:(  );
	OnPhotographyMultiPartCaptureEnd 0x321de hash b3eaaaa4 params:(  );
	GetOwningPlayerController 0x43ada hash f503cb48 params:( PlayerController ReturnValue; );
	GetFOVAngle 0x4f8cc hash 71596d77 params:( None ReturnValue; );
	GetCameraRotation 0x4f8c2 hash 1c27c41e params:( Rotator ReturnValue; );
	GetCameraLocation 0x4f8b8 hash 6af51427 params:( Vector ReturnValue; );
	FindCameraModifierByClass 0x4f8aa hash 24f2786f params:( Class ModifierClass;CameraModifier ReturnValue; );
	ClearCameraLensEffects 0x4f89e hash 4b2a387 params:(  );
	BlueprintUpdateCamera 0x321d2 hash 9c718286 params:( Actor CameraTarget;Vector NewCameraLocation;Rotator NewCameraRotation;None NewCameraFOV;None ReturnValue; );
	AddNewCameraModifier 0x4f893 hash 625ac530 params:( Class ModifierClass;CameraModifier ReturnValue; );
	AddCameraLensEffect 0x4f888 hash 516a4bd6 params:( Class LensEffectEmitterClass;EmitterCameraLensEffectBase ReturnValue; );
};


instance 1ab5e1a5740
class PlayerInput public : Object
{
	// Fields
	TArray DebugExecBindings; // 0x120
	TArray InvertedAxis; // 0x160

	// Functions
	SetMouseSensitivity 0x4f98e hash 35086b05 params:( None Sensitivity; );
	SetBind 0x4f989 hash ecd3702e params:( None BindName;None Command; );
	InvertAxisKey 0x4f981 hash c0eda27b params:( Key AxisKey; );
	InvertAxis 0x4f97b hash c180cb32 params:( None AxisName; );
	ClearSmoothing 0x4f973 hash 776162a4 params:(  );
};


instance 1ab5e1a5500
class PlayerStart public : NavigationObjectBase
{
	// Fields
	FName PlayerStartTag; // 0x240

};


instance 1ab5e1a52c0
class PlayerStartPIE public : PlayerStart
{
	// Fields

};


instance 1ab5e1a5080
class PlayerState public : Info
{
	// Fields
	float Score; // 0x218
	FString PlayerName; // 0x220
	int PlayerId; // 0x240
	BYTE Ping; // 0x244
	bool bShouldUpdateReplicatedPing; // 0x246
	bool bIsSpectator; // 0x246
	bool bOnlySpectator; // 0x246
	bool bIsABot; // 0x246
	bool bIsInactive; // 0x246
	bool bFromPreviousLevel; // 0x246
	int StartTime; // 0x248
	LocalMessage* EngineMessageClass; // 0x250
	FString SavedNetworkAddress; // 0x260
	UniqueNetIdRepl UniqueId; // 0x270
	Pawn* PawnPrivate; // 0x2a0
	FString PlayerNamePrivate; // 0x320

	// Functions
	ReceiveOverrideWith 0x327a7 hash bfd976a4 params:( PlayerState OldPlayerState; );
	ReceiveCopyProperties 0x3279b hash f4c4d30 params:( PlayerState NewPlayerState; );
	OnRep_UniqueId 0x4f9d9 hash 3cf0d5cc params:(  );
	OnRep_Score 0x4f9d2 hash e6900d04 params:(  );
	OnRep_PlayerName 0x4f9c9 hash 20ae7436 params:(  );
	OnRep_PlayerId 0x4f9c1 hash f3922422 params:(  );
	OnRep_bIsInactive 0x4f9b7 hash 7ca2b959 params:(  );
	GetPlayerName 0x4f9af hash 7136b973 params:( None ReturnValue; );
};


instance 1ab5e1a4e40
class PluginCommandlet public : Commandlet
{
	// Fields

};


instance 1ab5e1a4c00
class PointLight public : Light
{
	// Fields
	PointLightComponent* PointLightComponent; // 0x228

	// Functions
	SetRadius 0x469f4 hash 942ca2b9 params:( None NewRadius; );
	SetLightFalloffExponent 0x4f9f0 hash 18459f54 params:( None NewLightFalloffExponent; );
};


instance 1ab5e1ade40
class PointLightComponent public : LocalLightComponent
{
	// Fields
	bool bUseInverseSquaredFalloff; // 0x350
	float LightFalloffExponent; // 0x354
	float SourceRadius; // 0x358
	float SoftSourceRadius; // 0x35c
	float SourceLength; // 0x360

	// Functions
	SetSourceRadius 0x4fa1c hash cd9792ca params:( None bNewValue; );
	SetSourceLength 0x4fa13 hash bfe67424 params:( None NewValue; );
	SetSoftSourceRadius 0x4fa08 hash 4494c686 params:( None bNewValue; );
	SetLightFalloffExponent 0x4f9f0 hash 18459f54 params:( None NewLightFalloffExponent; );
};


instance 1ab5e1adc00
class Polys public : Object
{
	// Fields

};


instance 1ab5e1ad9c0
class PoseableMeshComponent public : SkinnedMeshComponent
{
	// Fields

	// Functions
	SetBoneTransformByName 0x4faa2 hash 6e45ffed params:( None BoneName;Transform InTransform;EBoneSpaces BoneSpace; );
	SetBoneScaleByName 0x4fa98 hash d976e9f9 params:( None BoneName;Vector InScale3D;EBoneSpaces BoneSpace; );
	SetBoneRotationByName 0x4fa8c hash eb127881 params:( None BoneName;Rotator InRotation;EBoneSpaces BoneSpace; );
	SetBoneLocationByName 0x4fa80 hash 4767eb4a params:( None BoneName;Vector InLocation;EBoneSpaces BoneSpace; );
	ResetBoneTransformByName 0x4fa73 hash 13f5cf84 params:( None BoneName; );
	GetBoneTransformByName 0x4fa67 hash e328061 params:( None BoneName;EBoneSpaces BoneSpace;Transform ReturnValue; );
	GetBoneScaleByName 0x4fa5d hash b06d506d params:( None BoneName;EBoneSpaces BoneSpace;Vector ReturnValue; );
	GetBoneRotationByName 0x4fa51 hash 1e76ba75 params:( None BoneName;EBoneSpaces BoneSpace;Rotator ReturnValue; );
	GetBoneLocationByName 0x4fa45 hash 7acc2d3e params:( None BoneName;EBoneSpaces BoneSpace;Vector ReturnValue; );
	CopyPoseFromSkeletalComponent 0x4fa35 hash 775659f3 params:( SkeletalMeshComponent InComponentToCopy; );
};


instance 1ab5e1ad780
class PoseAsset public : AnimationAsset
{
	// Fields
	PoseDataContainer PoseContainer; // 0x80
	bool bAdditivePose; // 0x110
	int BasePoseIndex; // 0x114
	FName RetargetSource; // 0x118

};


instance 1ab5e1ad540
class PoseWatch public : Object
{
	// Fields
	EdGraphNode* Node; // 0x28
	Color PoseWatchColour; // 0x30

};


instance 1ab5e1ad300
class PostProcessComponent public : SceneComponent
{
	// Fields
	PostProcessSettings Settings; // 0x200
	float Priority; // 0x730
	float BlendRadius; // 0x734
	float BlendWeight; // 0x738
	bool bEnabled; // 0x73c
	bool bUnbound; // 0x73c

	// Functions
	AddOrUpdateBlendable 0x4245b hash 236616eb params:( BlendableInterface InBlendableObject;None InWeight; );
};


instance 1ab5e1ad0c0
class PostProcessVolume public : Volume
{
	// Fields
	PostProcessSettings Settings; // 0x260
	float Priority; // 0x790
	float BlendRadius; // 0x794
	float BlendWeight; // 0x798
	bool bEnabled; // 0x79c
	bool bUnbound; // 0x79c

	// Functions
	AddOrUpdateBlendable 0x4245b hash 236616eb params:( BlendableInterface InBlendableObject;None InWeight; );
};


instance 1ab5e1ace80
class PrecomputedVisibilityOverrideVolume public : Volume
{
	// Fields
	TArray OverrideVisibleActors; // 0x250
	TArray OverrideInvisibleActors; // 0x260
	TArray OverrideInvisibleLevels; // 0x270

};


instance 1ab5e1acc40
class PrecomputedVisibilityVolume public : Volume
{
	// Fields

};


instance 1ab5e1aca00
class PreviewCollectionInterface public : Interface
{
	// Fields

};


instance 1ab5e1ac7c0
class PreviewMeshCollection public : DataAsset
{
	// Fields
	Skeleton* Skeleton; // 0x38
	TArray SkeletalMeshes; // 0x40

};


instance 1ab5e1ac580
class PrimaryAssetLabel public : PrimaryDataAsset
{
	// Fields
	PrimaryAssetRules Rules; // 0x30
	bool bLabelAssetsInMyDirectory; // 0x3c
	bool bIsRuntimeLabel; // 0x3c
	TArray ExplicitAssets; // 0x40
	TArray ExplicitBlueprints; // 0x50
	CollectionReference AssetCollection; // 0x60

};


instance 1ab5e1ac340
class ProjectileMovementComponent public : MovementComponent
{
	// Fields
	float InitialSpeed; // 0xf0
	float MaxSpeed; // 0xf4
	bool bRotationFollowsVelocity; // 0xf8
	bool bRotationRemainsVertical; // 0xf8
	bool bShouldBounce; // 0xf8
	bool bInitialVelocityInLocalSpace; // 0xf8
	bool bForceSubStepping; // 0xf8
	bool bSimulationEnabled; // 0xf8
	bool bSweepCollision; // 0xf8
	bool bIsHomingProjectile; // 0xf8
	bool bBounceAngleAffectsFriction; // 0xf9
	bool bIsSliding; // 0xf9
	bool bInterpMovement; // 0xf9
	bool bInterpRotation; // 0xf9
	float PreviousHitTime; // 0xfc
	Vector PreviousHitNormal; // 0x100
	float ProjectileGravityScale; // 0x10c
	float Buoyancy; // 0x110
	float Bounciness; // 0x114
	float Friction; // 0x118
	float BounceVelocityStopSimulatingThreshold; // 0x11c
	float MinFrictionFraction; // 0x120
	MulticastInlineDelegateProperty OnProjectileBounce; // 0x128 property 0x1ab712f5300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnProjectileStop; // 0x138 property 0x1ab712f5400 hash 0xb7a5ed1a
	float HomingAccelerationMagnitude; // 0x148
	WeakObjectProperty HomingTargetComponent; // 0x14c property 0x1ab712f5500 hash 0x24388009
	float MaxSimulationTimeStep; // 0x154
	int MaxSimulationIterations; // 0x158
	int BounceAdditionalIterations; // 0x15c
	float InterpLocationTime; // 0x160
	float InterpRotationTime; // 0x164
	float InterpLocationMaxLagDistance; // 0x168
	float InterpLocationSnapToTargetDistance; // 0x16c
	DelegateFunction OnProjectileStopDelegate__DelegateSignature; // 0x0 property 0x1ab71208660 hash 0x8ad2d5e6
	DelegateFunction OnProjectileBounceDelegate__DelegateSignature; // 0x0 property 0x1ab71208740 hash 0x8ad2d5e6

	// Functions
	StopSimulating 0x4aa7e hash ab446608 params:( HitResult HitResult; );
	SetVelocityInLocalSpace 0x4fb65 hash 1c33e38e params:( Vector NewVelocity; );
	SetInterpolatedComponent 0x4fb58 hash 6c5492f params:( SceneComponent Component; );
	ResetInterpolation 0x4fb4e hash a277b710 params:(  );
	MoveInterpolationTarget 0x4fb41 hash 46ed852b params:( Vector NewLocation;Rotator NewRotation; );
	LimitVelocity 0x4fb39 hash b0ab313 params:( Vector NewVelocity;Vector ReturnValue; );
	IsVelocityUnderSimulationThreshold 0x4fb27 hash 2f4996e0 params:( None ReturnValue; );
	IsInterpolationComplete 0x4fb1a hash 39149fe2 params:( None ReturnValue; );
};


instance 1ab5e1ac100
class ProxyLODMeshSimplificationSettings public : DeveloperSettings
{
	// Fields
	FName ProxyLODMeshReductionModuleName; // 0x38

};


instance 1ab5e1abec0
class RadialForceActor public : RigidBodyBase
{
	// Fields
	RadialForceComponent* ForceComponent; // 0x218

	// Functions
	ToggleForce 0x4fba2 hash c55478d6 params:(  );
	FireImpulse 0x4fb9b hash 1a46886a params:(  );
	EnableForce 0x4fb94 hash 98a77a7b params:(  );
	DisableForce 0x4fb8d hash dbc397a8 params:(  );
};


instance 1ab5e1abc80
class RadialForceComponent public : SceneComponent
{
	// Fields
	float Radius; // 0x1f0
	BYTE Falloff; // 0x1f4
	float ImpulseStrength; // 0x1f8
	bool bImpulseVelChange; // 0x1fc
	bool bIgnoreOwningActor; // 0x1fc
	float ForceStrength; // 0x200
	float DestructibleDamage; // 0x204
	TArray ObjectTypesToAffect; // 0x208

	// Functions
	RemoveObjectTypeToAffect 0x4fbc0 hash d94f7a58 params:( EObjectTypeQuery ObjectType; );
	FireImpulse 0x4fb9b hash 1a46886a params:(  );
	AddObjectTypeToAffect 0x4fbb4 hash 2a474773 params:( EObjectTypeQuery ObjectType; );
};


instance 1ab5e1aba40
class RectLight public : Light
{
	// Fields
	RectLightComponent* RectLightComponent; // 0x228

};


instance 1ab5e1ab800
class RectLightComponent public : LocalLightComponent
{
	// Fields
	float SourceWidth; // 0x350
	float SourceHeight; // 0x354
	float BarnDoorAngle; // 0x358
	float BarnDoorLength; // 0x35c
	Texture* SourceTexture; // 0x360

	// Functions
	SetSourceWidth 0x4fc02 hash e7920262 params:( None bNewValue; );
	SetSourceTexture 0x4fbf9 hash 2542fa93 params:( Texture bNewValue; );
	SetSourceHeight 0x4fbf0 hash b68f123b params:( None NewValue; );
	SetBarnDoorLength 0x4fbe6 hash 5a63f94a params:( None NewValue; );
	SetBarnDoorAngle 0x4fbdd hash eab5294f params:( None NewValue; );
};


instance 1ab5e1ab5c0
class RendererSettings public : DeveloperSettings
{
	// Fields
	bool bMobileHDR; // 0x38
	bool bMobileDisableVertexFog; // 0x38
	int MaxMobileCascades; // 0x3c
	BYTE MobileMSAASampleCount; // 0x40
	bool bMobileUseLegacyShadingModel; // 0x44
	bool bMobileUseHWsRGBEncoding; // 0x44
	bool bMobileAllowDitheredLODTransition; // 0x44
	bool bMobileAllowSoftwareOcclusionCulling; // 0x44
	bool bDiscardUnusedQualityLevels; // 0x44
	bool bOcclusionCulling; // 0x44
	float MinScreenRadiusForLights; // 0x48
	float MinScreenRadiusForEarlyZPass; // 0x4c
	float MinScreenRadiusForCSMdepth; // 0x50
	bool bPrecomputedVisibilityWarning; // 0x54
	bool bTextureStreaming; // 0x54
	bool bUseDXT5NormalMaps; // 0x54
	bool bVirtualTextures; // 0x54
	bool bVirtualTexturedLightmaps; // 0x54
	int VirtualTextureTileSize; // 0x58
	int VirtualTextureTileBorderSize; // 0x5c
	int VirtualTextureFeedbackFactor; // 0x60
	bool bVirtualTextureEnableCompressZlib; // 0x64
	bool bVirtualTextureEnableCompressCrunch; // 0x64
	bool bClearCoatEnableSecondNormal; // 0x64
	int ReflectionCaptureResolution; // 0x68
	bool ReflectionEnvironmentLightmapMixBasedOnRoughness; // 0x6c
	bool bForwardShading; // 0x6c
	bool bVertexFoggingForOpaque; // 0x6c
	bool bAllowStaticLighting; // 0x6c
	bool bUseNormalMapsForStaticLighting; // 0x6c
	bool bGenerateMeshDistanceFields; // 0x6c
	bool bEightBitMeshDistanceFields; // 0x6c
	bool bGenerateLandscapeGIData; // 0x6c
	bool bCompressMeshDistanceFields; // 0x6d
	float TessellationAdaptivePixelsPerTriangle; // 0x70
	bool bSeparateTranslucency; // 0x74
	BYTE TranslucentSortPolicy; // 0x78
	Vector TranslucentSortAxis; // 0x7c
	BYTE CustomDepthStencil; // 0x88
	bool bCustomDepthTaaJitter; // 0x8c
	BYTE bEnableAlphaChannelInPostProcessing; // 0x90
	bool bDefaultFeatureBloom; // 0x94
	bool bDefaultFeatureAmbientOcclusion; // 0x94
	bool bDefaultFeatureAmbientOcclusionStaticFraction; // 0x94
	bool bDefaultFeatureAutoExposure; // 0x94
	BYTE DefaultFeatureAutoExposure; // 0x98
	bool bExtendDefaultLuminanceRangeInAutoExposureSettings; // 0x9c
	bool bUsePreExposure; // 0x9c
	bool bEnablePreExposureOnlyInTheEditor; // 0x9c
	bool bDefaultFeatureMotionBlur; // 0x9c
	bool bDefaultFeatureLensFlare; // 0x9c
	bool bTemporalUpsampling; // 0x9c
	bool bSSGI; // 0x9c
	BYTE DefaultFeatureAntiAliasing; // 0xa0
	ELightUnits DefaultLightUnits; // 0xa1
	BYTE DefaultBackBufferPixelFormat; // 0xa2
	bool bRenderUnbuiltPreviewShadowsInGame; // 0xa4
	bool bStencilForLODDither; // 0xa4
	BYTE EarlyZPass; // 0xa8
	bool bEarlyZPassOnlyMaterialMasking; // 0xac
	bool bDBuffer; // 0xac
	BYTE ClearSceneMethod; // 0xb0
	bool bBasePassOutputsVelocity; // 0xb4
	bool bSelectiveBasePassOutputs; // 0xb4
	bool bDefaultParticleCutouts; // 0xb4
	int GPUSimulationTextureSizeX; // 0xb8
	int GPUSimulationTextureSizeY; // 0xbc
	bool bGlobalClipPlane; // 0xc0
	BYTE GBufferFormat; // 0xc4
	bool bUseGPUMorphTargets; // 0xc8
	bool bNvidiaAftermathEnabled; // 0xc8
	bool bInstancedStereo; // 0xc8
	bool bMultiView; // 0xc8
	bool bMobileMultiView; // 0xc8
	bool bMobileMultiViewDirect; // 0xc8
	bool bRoundRobinOcclusion; // 0xc8
	bool bODSCapture; // 0xc8
	float WireframeCullThreshold; // 0xcc
	bool bEnableRayTracing; // 0xd0
	bool bEnableRayTracingTextureLOD; // 0xd0
	bool bSupportStationarySkylight; // 0xd0
	bool bSupportLowQualityLightmaps; // 0xd0
	bool bSupportPointLightWholeSceneShadows; // 0xd0
	bool bSupportAtmosphericFog; // 0xd0
	bool bSupportSkyAtmosphere; // 0xd0
	bool bSupportSkyAtmosphereAffectsHeightFog; // 0xd0
	bool bSupportSkinCacheShaders; // 0xd1
	bool bMobileEnableStaticAndCSMShadowReceivers; // 0xd1
	bool bMobileEnableMovableLightCSMShaderCulling; // 0xd1
	bool bMobileAllowDistanceFieldShadows; // 0xd1
	bool bMobileAllowMovableDirectionalLights; // 0xd1
	int MobileNumDynamicPointLights; // 0xd4
	bool bMobileDynamicPointLightsUseStaticBranch; // 0xd8
	bool bMobileAllowMovableSpotlights; // 0xd8
	float SkinCacheSceneMemoryLimitInMB; // 0xdc
	bool bGPUSkinLimit2BoneInfluences; // 0xe0
	bool bSupportDepthOnlyIndexBuffers; // 0xe0
	bool bSupportReversedIndexBuffers; // 0xe0
	bool bSupportMaterialLayers; // 0xe0
	bool bLPV; // 0xe0

};


instance 1ab5e1ab380
class RendererOverrideSettings public : DeveloperSettings
{
	// Fields
	bool bSupportAllShaderPermutations; // 0x38
	bool bForceRecomputeTangents; // 0x38

};


instance 1ab5e1ab140
class ReplicationDriver public : Object
{
	// Fields

};


instance 1ab5e1aaf00
class ReplicationConnectionDriver public : Object
{
	// Fields

};


instance 1ab5e1aacc0
class ReporterBase public : Object
{
	// Fields

};


instance 1ab5e1aaa80
class ReporterGraph public : ReporterBase
{
	// Fields

};


instance 1ab5e1aa840
class ReverbEffect public : Object
{
	// Fields
	float Density; // 0x28
	float Diffusion; // 0x2c
	float Gain; // 0x30
	float GainHF; // 0x34
	float DecayTime; // 0x38
	float DecayHFRatio; // 0x3c
	float ReflectionsGain; // 0x40
	float ReflectionsDelay; // 0x44
	float LateGain; // 0x48
	float LateDelay; // 0x4c
	float AirAbsorptionGainHF; // 0x50
	float RoomRolloffFactor; // 0x54

};


instance 1ab5e1aa600
class Rig public : Object
{
	// Fields
	TArray TransformBases; // 0x30
	TArray Nodes; // 0x40

};


instance 1ab5e1aa3c0
class RotatingMovementComponent public : MovementComponent
{
	// Fields
	Rotator RotationRate; // 0xf0
	Vector PivotTranslation; // 0xfc
	bool bRotationInLocalSpace; // 0x108

};


instance 1ab5e1aa180
class RuntimeOptionsBase public : Object
{
	// Fields

};


instance 1ab5e1a9f40
class RuntimeVirtualTexture public : Object
{
	// Fields
	ERuntimeVirtualTextureMaterialType MaterialType; // 0x28
	bool bCompressTextures; // 0x29
	bool bEnable; // 0x2a
	bool bClearTextures; // 0x2b
	bool bSinglePhysicalSpace; // 0x2c
	bool bPrivateSpace; // 0x2d
	bool bEnableScalability; // 0x2e
	int Size; // 0x30
	int TileCount; // 0x34
	int TileSize; // 0x38
	int TileBorderSize; // 0x3c
	int RemoveLowMips; // 0x40
	int StreamLowMips; // 0x44
	RuntimeVirtualTextureStreamingProxy* StreamingTexture; // 0x48

};


instance 1ab5e1a9d00
class RuntimeVirtualTextureComponent public : SceneComponent
{
	// Fields
	RuntimeVirtualTexture* VirtualTexture; // 0x1f0
	bool bUseStreamingLowMipsInEditor; // 0x1f8
	Actor* BoundsSourceActor; // 0x200

};


instance 1ab5e1a9ac0
class RuntimeVirtualTextureStreamingProxy public : Texture2D
{
	// Fields
	VirtualTextureBuildSettings Settings; // 0x100
	bool bSinglePhysicalSpace; // 0x10c
	int BuildHash; // 0x110

};


instance 1ab5e1a9880
class RuntimeVirtualTextureVolume public : Actor
{
	// Fields
	RuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x218

};


instance 1ab5e1a9640
class RVOAvoidanceInterface public : Interface
{
	// Fields

};


instance 1ab5e1afdc0
class SaveGame public : Object
{
	// Fields

};


instance 1ab5e1afb80
class Scene public : Object
{
	// Fields

};


instance 1ab5e1af940
class SceneCapture2D public : SceneCapture
{
	// Fields
	SceneCaptureComponent2D* CaptureComponent2D; // 0x228

	// Functions
	OnInterpToggle 0x4f782 hash 2bfb47b6 params:( None bEnable; );
};


instance 1ab5e1af700
class SceneCaptureComponent2D public : SceneCaptureComponent
{
	// Fields
	BYTE ProjectionType; // 0x288
	float FOVAngle; // 0x28c
	float OrthoWidth; // 0x290
	TextureRenderTarget2D* TextureTarget; // 0x298
	BYTE CompositeMode; // 0x2a0
	PostProcessSettings PostProcessSettings; // 0x2b0
	float PostProcessBlendWeight; // 0x7e0
	bool bOverride_CustomNearClippingPlane; // 0x7e4
	float CustomNearClippingPlane; // 0x7e8
	bool bUseCustomProjectionMatrix; // 0x7ec
	Matrix CustomProjectionMatrix; // 0x7f0
	bool bEnableClipPlane; // 0x830
	Vector ClipPlaneBase; // 0x834
	Vector ClipPlaneNormal; // 0x840
	bool bCameraCutThisFrame; // 0x84c
	bool bConsiderUnrenderedOpaquePixelAsFullyTranslucent; // 0x84c

	// Functions
	CaptureScene 0x4fcd2 hash 70abed47 params:(  );
	AddOrUpdateBlendable 0x4245b hash 236616eb params:( BlendableInterface InBlendableObject;None InWeight; );
};


instance 1ab5e1af4c0
class SceneCaptureComponentCube public : SceneCaptureComponent
{
	// Fields
	TextureRenderTargetCube* TextureTarget; // 0x288
	bool bCaptureRotation; // 0x290
	TextureRenderTargetCube* TextureTargetLeft; // 0x298
	TextureRenderTargetCube* TextureTargetRight; // 0x2a0
	TextureRenderTarget2D* TextureTargetODS; // 0x2a8
	float IPD; // 0x2b0

	// Functions
	CaptureScene 0x4fcd2 hash 70abed47 params:(  );
};


instance 1ab5e1af280
class SceneCaptureCube public : SceneCapture
{
	// Fields
	SceneCaptureComponentCube* CaptureComponentCube; // 0x228

	// Functions
	OnInterpToggle 0x4f782 hash 2bfb47b6 params:( None bEnable; );
};


instance 1ab5e1af040
class SCS_Node public : Object
{
	// Fields
	Object* ComponentClass; // 0x28
	ActorComponent* ComponentTemplate; // 0x30
	BlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38
	FName AttachToName; // 0x80
	FName ParentComponentOrVariableName; // 0x88
	FName ParentComponentOwnerClassName; // 0x90
	bool bIsParentComponentNative; // 0x98
	TArray ChildNodes; // 0xa0
	TArray MetaDataArray; // 0xb0
	Guid VariableGuid; // 0xc0
	FName InternalVariableName; // 0xd0

};


instance 1ab5e1aee00
class Selection public : Object
{
	// Fields

};


instance 1ab5e1aebc0
class ServerStatReplicator public : Info
{
	// Fields
	bool bUpdateStatNet; // 0x218
	bool bOverwriteClientStats; // 0x219
	int Channels; // 0x21c
	int InRate; // 0x220
	int OutRate; // 0x224
	int OutSaturation; // 0x228
	int MaxPacketOverhead; // 0x22c
	int InRateClientMax; // 0x230
	int InRateClientMin; // 0x234
	int InRateClientAvg; // 0x238
	int InPacketsClientMax; // 0x23c
	int InPacketsClientMin; // 0x240
	int InPacketsClientAvg; // 0x244
	int OutRateClientMax; // 0x248
	int OutRateClientMin; // 0x24c
	int OutRateClientAvg; // 0x250
	int OutPacketsClientMax; // 0x254
	int OutPacketsClientMin; // 0x258
	int OutPacketsClientAvg; // 0x25c
	int NetNumClients; // 0x260
	int InPackets; // 0x264
	int OutPackets; // 0x268
	int InBunches; // 0x26c
	int OutBunches; // 0x270
	int OutLoss; // 0x274
	int InLoss; // 0x278
	int VoiceBytesSent; // 0x27c
	int VoiceBytesRecv; // 0x280
	int VoicePacketsSent; // 0x284
	int VoicePacketsRecv; // 0x288
	int PercentInVoice; // 0x28c
	int PercentOutVoice; // 0x290
	int NumActorChannels; // 0x294
	int NumConsideredActors; // 0x298
	int PrioritizedActors; // 0x29c
	int NumRelevantActors; // 0x2a0
	int NumRelevantDeletedActors; // 0x2a4
	int NumReplicatedActorAttempts; // 0x2a8
	int NumReplicatedActors; // 0x2ac
	int NumActors; // 0x2b0
	int NumNetActors; // 0x2b4
	int NumDormantActors; // 0x2b8
	int NumInitiallyDormantActors; // 0x2bc
	int NumNetGUIDsAckd; // 0x2c0
	int NumNetGUIDsPending; // 0x2c4
	int NumNetGUIDsUnAckd; // 0x2c8
	int ObjPathBytes; // 0x2cc
	int NetGUIDOutRate; // 0x2d0
	int NetGUIDInRate; // 0x2d4
	int NetSaturated; // 0x2d8

};


instance 1ab5e1ae980
class ShadowMapTexture2D public : Texture2D
{
	// Fields
	BYTE ShadowmapFlags; // 0x100

};


instance 1ab5e1ae740
class SimpleConstructionScript public : Object
{
	// Fields
	TArray RootNodes; // 0x28
	TArray AllNodes; // 0x38
	SCS_Node* DefaultSceneRootNode; // 0x48

};


instance 1ab5e1ae500
class SkeletalMesh public : StreamableRenderAsset
{
	// Fields
	Skeleton* Skeleton; // 0x60
	BoxSphereBounds ImportedBounds; // 0x68
	BoxSphereBounds ExtendedBounds; // 0x84
	Vector PositiveBoundsExtension; // 0xa0
	Vector NegativeBoundsExtension; // 0xac
	TArray Materials; // 0xb8
	TArray SkelMirrorTable; // 0xc8
	TArray LODInfo; // 0xd8
	PerPlatformInt MinLOD; // 0x138
	PerPlatformBool DisableBelowMinLodStripping; // 0x13c
	BYTE SkelMirrorAxis; // 0x13d
	BYTE SkelMirrorFlipAxis; // 0x13e
	bool bUseFullPrecisionUVs; // 0x13f
	bool bUseHighPrecisionTangentBasis; // 0x13f
	bool bHasBeenSimplified; // 0x13f
	bool bHasVertexColors; // 0x13f
	bool bEnablePerPolyCollision; // 0x13f
	BodySetup* BodySetup; // 0x140
	PhysicsAsset* PhysicsAsset; // 0x148
	PhysicsAsset* ShadowPhysicsAsset; // 0x150
	TArray NodeMappingData; // 0x158
	TArray MorphTargets; // 0x168
	AnimInstance* PostProcessAnimBlueprint; // 0x2f0
	TArray MeshClothingAssets; // 0x2f8
	SkeletalMeshSamplingInfo SamplingInfo; // 0x308
	TArray AssetUserData; // 0x338
	TArray Sockets; // 0x350
	TArray SkinWeightProfiles; // 0x370

	// Functions
	SetLODSettings 0x4fd81 hash 97eb4b81 params:( SkeletalMeshLODSettings InLODSettings; );
	NumSockets 0x4fd7b hash 45179471 params:( None ReturnValue; );
	K2_GetAllMorphTargetNames 0x4fd6d hash 9dbbfadb params:( ReturnValue ReturnValue; );
	IsSectionUsingCloth 0x4fd62 hash b1a2a776 params:( None InSectionIndex;None bCheckCorrespondingSections;None ReturnValue; );
	GetSocketByIndex 0x4fd59 hash 9883abe1 params:( None Index;SkeletalMeshSocket ReturnValue; );
	GetNodeMappingContainer 0x4fd4c hash cb39c95a params:( Blueprint SourceAsset;NodeMappingContainer ReturnValue; );
	GetImportedBounds 0x4fd42 hash 6c5157f4 params:( BoxSphereBounds ReturnValue; );
	GetBounds 0x4fd3c hash fa0b8930 params:( BoxSphereBounds ReturnValue; );
	FindSocketInfo 0x4fd34 hash 3e1e5ebb params:( None InSocketName;Transform OutTransform;None OutBoneIndex;None OutIndex;SkeletalMeshSocket ReturnValue; );
	FindSocketAndIndex 0x4fd2a hash 662ab15a params:( None InSocketName;None OutIndex;SkeletalMeshSocket ReturnValue; );
	FindSocket 0x4fd24 hash 7752060f params:( None InSocketName;SkeletalMeshSocket ReturnValue; );
};


instance 1ab5e1ae2c0
class SkeletalMeshActor public : Actor
{
	// Fields
	bool bShouldDoAnimNotifies; // 0x220
	bool bWakeOnLevelStart; // 0x220
	SkeletalMeshComponent* SkeletalMeshComponent; // 0x228
	SkeletalMesh* ReplicatedMesh; // 0x230
	PhysicsAsset* ReplicatedPhysAsset; // 0x238
	MaterialInterface* ReplicatedMaterial0; // 0x240
	MaterialInterface* ReplicatedMaterial1; // 0x248

	// Functions
	OnRep_ReplicatedPhysAsset 0x4fdba hash 842180a9 params:(  );
	OnRep_ReplicatedMesh 0x4fdaf hash cbd3a152 params:(  );
	OnRep_ReplicatedMaterial1 0x4fda1 hash 12c4dbe5 params:(  );
	OnRep_ReplicatedMaterial0 0x4fd93 hash 12c4dbe4 params:(  );
};


instance 1ab5e1ae080
class SkeletalMeshLODSettings public : DataAsset
{
	// Fields
	PerPlatformInt MinLOD; // 0x30
	PerPlatformBool DisableBelowMinLodStripping; // 0x34
	PerPlatformBool bSupportLODStreaming; // 0x35
	PerPlatformInt MaxNumStreamedLODs; // 0x38
	PerPlatformInt MaxNumOptionalLODs; // 0x3c
	TArray LODGroups; // 0x40

};


instance 1ab5e1b49c0
class SkeletalMeshSimplificationSettings public : DeveloperSettings
{
	// Fields
	FName SkeletalMeshReductionModuleName; // 0x38

};


instance 1ab5e1b4780
class SkeletalMeshSocket public : Object
{
	// Fields
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	Vector RelativeLocation; // 0x38
	Rotator RelativeRotation; // 0x44
	Vector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c

	// Functions
	InitializeSocketFromLocation 0x4fdf1 hash 8d7f872d params:( SkeletalMeshComponent SkelComp;Vector WorldLocation;Vector WorldNormal; );
	GetSocketLocation 0x3e0e9 hash 1d88d167 params:( SkeletalMeshComponent SkelComp;Vector ReturnValue; );
};


instance 1ab5e1b4540
class SkyAtmosphereComponent public : SceneComponent
{
	// Fields
	float BottomRadius; // 0x1f0
	Color GroundAlbedo; // 0x1f4
	float AtmosphereHeight; // 0x1f8
	float MultiScatteringFactor; // 0x1fc
	float RayleighScatteringScale; // 0x200
	LinearColor RayleighScattering; // 0x204
	float RayleighExponentialDistribution; // 0x214
	float MieScatteringScale; // 0x218
	LinearColor MieScattering; // 0x21c
	float MieAbsorptionScale; // 0x22c
	LinearColor MieAbsorption; // 0x230
	float MieAnisotropy; // 0x240
	float MieExponentialDistribution; // 0x244
	float OtherAbsorptionScale; // 0x248
	LinearColor OtherAbsorption; // 0x24c
	TentDistribution OtherTentDistribution; // 0x25c
	LinearColor SkyLuminanceFactor; // 0x268
	float AerialPespectiveViewDistanceScale; // 0x278
	float HeightFogContribution; // 0x27c
	float TransmittanceMinLightElevationAngle; // 0x280
	Guid bStaticLightingBuiltGUID; // 0x2ac

	// Functions
	SetSkyLuminanceFactor 0x4fec3 hash 632d9a63 params:( LinearColor NewValue; );
	SetRayleighScatteringScale 0x4feb5 hash ae4664e2 params:( None NewValue; );
	SetRayleighScattering 0x4fea9 hash 89c6765a params:( LinearColor NewValue; );
	SetRayleighExponentialDistribution 0x4fe97 hash 62b252ed params:( None NewValue; );
	SetOtherAbsorptionScale 0x4fe8a hash 91a2dc3c params:( None NewValue; );
	SetOtherAbsorption 0x4fe80 hash 686a6d74 params:( LinearColor NewValue; );
	SetMieScatteringScale 0x4fe74 hash efda94a8 params:( None NewValue; );
	SetMieScattering 0x4fe6b hash 60263260 params:( LinearColor NewValue; );
	SetMieExponentialDistribution 0x4fe5b hash e944e8b3 params:( None NewValue; );
	SetMieAnisotropy 0x4fe52 hash 233b01a4 params:( None NewValue; );
	SetMieAbsorptionScale 0x4fe46 hash 418488b5 params:( None NewValue; );
	SetMieAbsorption 0x4fe3d hash bac72a4d params:( LinearColor NewValue; );
	SetHeightFogContribution 0x4fe30 hash 62e764e6 params:( None NewValue; );
	SetAerialPespectiveViewDistanceScale 0x4fe1d hash be422685 params:( None NewValue; );
	OverrideAtmosphereLightDirection 0x4fe0c hash b99fea16 params:( None AtmosphereLightIndex;Vector LightDirection; );
};


instance 1ab5e1b4300
class SkyAtmosphere public : Info
{
	// Fields
	SkyAtmosphereComponent* SkyAtmosphereComponent; // 0x218

};


instance 1ab5e1b40c0
class SkyLightComponent public : LightComponentBase
{
	// Fields
	BYTE SourceType; // 0x220
	TextureCube* Cubemap; // 0x228
	float SourceCubemapAngle; // 0x230
	int CubemapResolution; // 0x234
	float SkyDistanceThreshold; // 0x238
	bool bCaptureEmissiveOnly; // 0x23c
	bool bLowerHemisphereIsBlack; // 0x23d
	LinearColor LowerHemisphereColor; // 0x240
	float OcclusionMaxDistance; // 0x250
	float Contrast; // 0x254
	float OcclusionExponent; // 0x258
	float MinOcclusion; // 0x25c
	Color OcclusionTint; // 0x260
	BYTE OcclusionCombineMode; // 0x264
	TextureCube* BlendDestinationCubemap; // 0x308

	// Functions
	SetVolumetricScatteringIntensity 0x49a60 hash 3bafe356 params:( None NewIntensity; );
	SetOcclusionTint 0x4ff23 hash a707c27f params:( Color InTint; );
	SetOcclusionExponent 0x4ff18 hash 416ee4d1 params:( None InOcclusionExponent; );
	SetOcclusionContrast 0x4ff0d hash afd162ae params:( None InOcclusionContrast; );
	SetMinOcclusion 0x4ff04 hash 228d81c4 params:( None InMinOcclusion; );
	SetLowerHemisphereColor 0x4fef7 hash 2512fa3 params:( LinearColor InLowerHemisphereColor; );
	SetLightColor 0x498f5 hash 48b5b1c8 params:( LinearColor NewLightColor; );
	SetIntensity 0x49a10 hash 3ab0f698 params:( None NewIntensity; );
	SetIndirectLightingIntensity 0x49a01 hash e69948e0 params:( None NewIntensity; );
	SetCubemapBlend 0x4feee hash f1eaf3d3 params:( TextureCube SourceCubemap;TextureCube DestinationCubemap;None InBlendFraction; );
	SetCubemap 0x4fee8 hash c59810ae params:( TextureCube NewCubemap; );
	RecaptureSky 0x4fee1 hash aecb17e7 params:(  );
};


instance 1ab5e1b3e80
class SlateBrushAsset public : Object
{
	// Fields
	SlateBrush Brush; // 0x28

};


instance 1ab5e1b3c40
class SlateTextureAtlasInterface public : Interface
{
	// Fields

};


instance 1ab5e1b3a00
class SmokeTestCommandlet public : Commandlet
{
	// Fields

};


instance 1ab5e1b37c0
class SoundAttenuation public : Object
{
	// Fields
	SoundAttenuationSettings Attenuation; // 0x28

};


instance 1ab5e1b3580
class SoundClass public : Object
{
	// Fields
	SoundClassProperties Properties; // 0x28
	TArray ChildClasses; // 0x58
	TArray PassiveSoundMixModifiers; // 0x68
	SoundModulation Modulation; // 0x78
	SoundClass* ParentClass; // 0x88

};


instance 1ab5e1b3340
class SoundConcurrency public : Object
{
	// Fields
	SoundConcurrencySettings Concurrency; // 0x28

};


instance 1ab5e1b3100
class SoundCue public : SoundBase
{
	// Fields
	bool bPrimeOnLoad; // 0x160
	SoundNode* FirstNode; // 0x168
	float VolumeMultiplier; // 0x170
	float PitchMultiplier; // 0x174
	SoundAttenuationSettings AttenuationOverrides; // 0x178
	float SubtitlePriority; // 0x468
	bool bOverrideAttenuation; // 0x470
	bool bExcludeFromRandomNodeBranchCulling; // 0x470
	bool bHasPlayWhenSilent; // 0x470

};


instance 1ab5e1b2ec0
class SoundCueTemplate public : SoundCue
{
	// Fields

};


instance 1ab5e1b2c80
class SoundEffectSourcePresetChain public : Object
{
	// Fields
	TArray Chain; // 0x28
	bool bPlayEffectChainTails; // 0x38

};


instance 1ab5e1b2a40
class SoundGroups public : Object
{
	// Fields
	TArray SoundGroupProfiles; // 0x28

};


instance 1ab5e1b2800
class SoundMix public : Object
{
	// Fields
	bool bApplyEQ; // 0x28
	float EQPriority; // 0x2c
	AudioEQEffect EQSettings; // 0x30
	TArray SoundClassEffects; // 0x68
	float InitialDelay; // 0x78
	float FadeInTime; // 0x7c
	float Duration; // 0x80
	float FadeOutTime; // 0x84

};


instance 1ab5e1b25c0
class SoundNode public : Object
{
	// Fields
	TArray ChildNodes; // 0x28

};


instance 1ab5e1b2380
class SoundNodeAssetReferencer public : SoundNode
{
	// Fields

};


instance 1ab5e1b2140
class SoundNodeAttenuation public : SoundNode
{
	// Fields
	SoundAttenuation* AttenuationSettings; // 0x40
	SoundAttenuationSettings AttenuationOverrides; // 0x48
	bool bOverrideAttenuation; // 0x338

};


instance 1ab5e1b1f00
class SoundNodeBranch public : SoundNode
{
	// Fields
	FName BoolParameterName; // 0x40

};


instance 1ab5e1b1cc0
class SoundNodeConcatenator public : SoundNode
{
	// Fields
	TArray InputVolume; // 0x40

};


instance 1ab5e1b1a80
class SoundNodeDelay public : SoundNode
{
	// Fields
	float DelayMin; // 0x40
	float DelayMax; // 0x44

};


instance 1ab5e1b1840
class SoundNodeDialoguePlayer public : SoundNode
{
	// Fields
	DialogueWaveParameter DialogueWaveParameter; // 0x40
	bool bLooping; // 0x60

};


instance 1ab5e1b1600
class SoundNodeDistanceCrossFade public : SoundNode
{
	// Fields
	TArray CrossFadeInput; // 0x40

};


instance 1ab5e1b13c0
class SoundNodeDoppler public : SoundNode
{
	// Fields
	float DopplerIntensity; // 0x40
	bool bUseSmoothing; // 0x44
	float SmoothingInterpSpeed; // 0x48

};


instance 1ab5e1b1180
class SoundNodeEnveloper public : SoundNode
{
	// Fields
	float LoopStart; // 0x40
	float LoopEnd; // 0x44
	float DurationAfterLoop; // 0x48
	int LoopCount; // 0x4c
	bool bLoopIndefinitely; // 0x50
	bool bLoop; // 0x50
	DistributionFloatConstantCurve* VolumeInterpCurve; // 0x58
	DistributionFloatConstantCurve* PitchInterpCurve; // 0x60
	RuntimeFloatCurve VolumeCurve; // 0x68
	RuntimeFloatCurve PitchCurve; // 0xf0
	float PitchMin; // 0x178
	float PitchMax; // 0x17c
	float VolumeMin; // 0x180
	float VolumeMax; // 0x184

};


instance 1ab5e1b0f40
class SoundNodeGroupControl public : SoundNode
{
	// Fields
	TArray GroupSizes; // 0x40

};


instance 1ab5e1b0d00
class SoundNodeLooping public : SoundNode
{
	// Fields
	int LoopCount; // 0x40
	bool bLoopIndefinitely; // 0x44

};


instance 1ab5e1b0ac0
class SoundNodeMature public : SoundNode
{
	// Fields

};


instance 1ab5e1b0880
class SoundNodeMixer public : SoundNode
{
	// Fields
	TArray InputVolume; // 0x40

};


instance 1ab5e1b0640
class SoundNodeModulator public : SoundNode
{
	// Fields
	float PitchMin; // 0x40
	float PitchMax; // 0x44
	float VolumeMin; // 0x48
	float VolumeMax; // 0x4c

};


instance 1ab5e1b0400
class SoundNodeModulatorContinuous public : SoundNode
{
	// Fields
	ModulatorContinuousParams PitchModulationParams; // 0x40
	ModulatorContinuousParams VolumeModulationParams; // 0x60

};


instance 1ab5e1b01c0
class SoundNodeOscillator public : SoundNode
{
	// Fields
	bool bModulateVolume; // 0x40
	bool bModulatePitch; // 0x40
	float AmplitudeMin; // 0x44
	float AmplitudeMax; // 0x48
	float FrequencyMin; // 0x4c
	float FrequencyMax; // 0x50
	float OffsetMin; // 0x54
	float OffsetMax; // 0x58
	float CenterMin; // 0x5c
	float CenterMax; // 0x60

};


instance 1ab5e1b9400
class SoundNodeParamCrossFade public : SoundNodeDistanceCrossFade
{
	// Fields
	FName ParamName; // 0x50

};


instance 1ab5e1b91c0
class SoundNodeQualityLevel public : SoundNode
{
	// Fields

};


instance 1ab5e1b8f80
class SoundNodeRandom public : SoundNode
{
	// Fields
	TArray Weights; // 0x40
	TArray HasBeenUsed; // 0x50
	int NumRandomUsed; // 0x60
	int PreselectAtLevelLoad; // 0x64
	bool bShouldExcludeFromBranchCulling; // 0x68
	bool bSoundCueExcludedFromBranchCulling; // 0x68
	bool bRandomizeWithoutReplacement; // 0x68

};


instance 1ab5e1b8d40
class SoundNodeSoundClass public : SoundNode
{
	// Fields
	SoundClass* SoundClassOverride; // 0x40

};


instance 1ab5e1b8b00
class SoundNodeSwitch public : SoundNode
{
	// Fields
	FName IntParameterName; // 0x40

};


instance 1ab5e1b88c0
class SoundNodeWaveParam public : SoundNode
{
	// Fields
	FName WaveParameterName; // 0x40

};


instance 1ab5e1b8680
class SoundNodeWavePlayer public : SoundNodeAssetReferencer
{
	// Fields
	SoundWave* SoundWaveAssetPtr; // 0x40
	SoundWave* SoundWave; // 0x68
	bool bLooping; // 0x70

};


instance 1ab5e1b8440
class SoundSourceBus public : SoundWave
{
	// Fields
	ESourceBusChannels SourceBusChannels; // 0x378
	float SourceBusDuration; // 0x37c
	bool bAutoDeactivateWhenSilent; // 0x380

};


instance 1ab5e1b8200
class SoundSubmix public : Object
{
	// Fields
	TArray ChildSubmixes; // 0x28
	SoundSubmix* ParentSubmix; // 0x38
	ESubmixChannelFormat ChannelFormat; // 0x40
	bool bMuteWhenBackgrounded; // 0x41
	TArray SubmixEffectChain; // 0x48
	AmbisonicsSubmixSettingsBase* AmbisonicsPluginSettings; // 0x58
	int EnvelopeFollowerAttackTime; // 0x60
	int EnvelopeFollowerReleaseTime; // 0x64
	float OutputVolume; // 0x68
	MulticastInlineDelegateProperty OnSubmixRecordedFileDone; // 0x70 property 0x1ab71fde080 hash 0xb7a5ed1a

	// Functions
	StopRecordingOutput 0x47c31 hash 4da0a39 params:( Object WorldContextObject;UnderlyingType ExportType;None Name;None Path;SoundWave ExistingSoundWaveToOverwrite; );
	StopEnvelopeFollowing 0x500bf hash e62c645a params:( Object WorldContextObject; );
	StartRecordingOutput 0x47c1b hash b1ae93c1 params:( Object WorldContextObject;None ExpectedDuration; );
	StartEnvelopeFollowing 0x500b3 hash 1a496fe2 params:( Object WorldContextObject; );
	SetSubmixOutputVolume 0x500a7 hash dd645e12 params:( Object WorldContextObject;None InOutputVolume; );
	AddEnvelopeFollowerDelegate 0x50098 hash e891cc51 params:( Object WorldContextObject;OnSubmixEnvelopeBP__DelegateSignature OnSubmixEnvelopeBP; );
};


instance 1ab5e1b7fc0
class SpectatorPawn public : DefaultPawn
{
	// Fields

};


instance 1ab5e1b7d80
class SpectatorPawnMovement public : FloatingPawnMovement
{
	// Fields
	bool bIgnoreTimeDilation; // 0x150

};


instance 1ab5e1b7b40
class SphereReflectionCapture public : ReflectionCapture
{
	// Fields
	DrawSphereComponent* DrawCaptureRadius; // 0x220

};


instance 1ab5e1b7900
class SphereReflectionCaptureComponent public : ReflectionCaptureComponent
{
	// Fields
	float InfluenceRadius; // 0x268
	float CaptureDistanceScale; // 0x26c
	DrawSphereComponent* PreviewInfluenceRadius; // 0x270

};


instance 1ab5e1b76c0
class SplineMetadata public : Object
{
	// Fields

};


instance 1ab5e1b7480
class SplineMeshActor public : Actor
{
	// Fields
	SplineMeshComponent* SplineMeshComponent; // 0x218

};


instance 1ab5e1b7240
class SplineMeshComponent public : StaticMeshComponent
{
	// Fields
	SplineMeshParams SplineParams; // 0x470
	Vector SplineUpDir; // 0x4c8
	float SplineBoundaryMin; // 0x4d4
	Guid CachedMeshBodySetupGuid; // 0x4d8
	BodySetup* BodySetup; // 0x4e8
	float SplineBoundaryMax; // 0x4f0
	bool bAllowSplineEditingPerInstance; // 0x4f4
	bool bSmoothInterpRollScale; // 0x4f4
	bool bMeshDirty; // 0x4f4
	BYTE ForwardAxis; // 0x4f5
	float VirtualTextureMainPassMaxDrawDistance; // 0x4f8

	// Functions
	UpdateMesh 0x501eb hash e0fb695 params:(  );
	SetStartTangent 0x501e2 hash cf3f13d0 params:( Vector StartTangent;None bUpdateMesh; );
	SetStartScale 0x501da hash dfaeab47 params:( Vector2D StartScale;None bUpdateMesh; );
	SetStartRoll 0x501d3 hash b9337eb8 params:( None StartRoll;None bUpdateMesh; );
	SetStartPosition 0x501ca hash 479fad34 params:( Vector StartPos;None bUpdateMesh; );
	SetStartOffset 0x464e8 hash cc689746 params:( Vector2D StartOffset;None bUpdateMesh; );
	SetStartAndEnd 0x501c2 hash ac4f4729 params:( Vector StartPos;Vector StartTangent;Vector EndPos;Vector EndTangent;None bUpdateMesh; );
	SetSplineUpDir 0x501ba hash d38bd700 params:( Vector InSplineUpDir;None bUpdateMesh; );
	SetForwardAxis 0x501b2 hash e6e4dd3b params:( ESplineMeshAxis InForwardAxis;None bUpdateMesh; );
	SetEndTangent 0x501aa hash 813b49f9 params:( Vector EndTangent;None bUpdateMesh; );
	SetEndScale 0x501a3 hash 39a54330 params:( Vector2D EndScale;None bUpdateMesh; );
	SetEndRoll 0x5019d hash 4f523d81 params:( None EndRoll;None bUpdateMesh; );
	SetEndPosition 0x50195 hash 3922a87d params:( Vector EndPos;None bUpdateMesh; );
	SetEndOffset 0x5018e hash 65322c4f params:( Vector2D EndOffset;None bUpdateMesh; );
	SetBoundaryMin 0x50186 hash a0f93839 params:( None InBoundaryMin;None bUpdateMesh; );
	SetBoundaryMax 0x5017e hash a0f9373b params:( None InBoundaryMax;None bUpdateMesh; );
	GetStartTangent 0x50175 hash 27e5eec4 params:( Vector ReturnValue; );
	GetStartScale 0x5016d hash 273a393b params:( Vector2D ReturnValue; );
	GetStartRoll 0x50166 hash 6dcb1e2c params:( None ReturnValue; );
	GetStartPosition 0x5015d hash b521e6a8 params:( Vector ReturnValue; );
	GetStartOffset 0x464e0 hash 565e3ba params:( Vector2D ReturnValue; );
	GetSplineUpDir 0x50155 hash c892374 params:( Vector ReturnValue; );
	GetForwardAxis 0x5014d hash 1fe229af params:( ESplineMeshAxis ReturnValue; );
	GetEndTangent 0x50145 hash c8c6d7ed params:( Vector ReturnValue; );
	GetEndScale 0x5013e hash f94cc424 params:( Vector2D ReturnValue; );
	GetEndRoll 0x50138 hash 1ed36ff5 params:( None ReturnValue; );
	GetEndPosition 0x50130 hash 721ff4f1 params:( Vector ReturnValue; );
	GetEndOffset 0x50129 hash 19c9cbc3 params:( Vector2D ReturnValue; );
	GetBoundaryMin 0x50121 hash d9f684ad params:( None ReturnValue; );
	GetBoundaryMax 0x50119 hash d9f683af params:( None ReturnValue; );
};


instance 1ab5e1b7000
class SpotLightComponent public : PointLightComponent
{
	// Fields
	float InnerConeAngle; // 0x368
	float OuterConeAngle; // 0x36c
	float LightShaftConeAngle; // 0x370

	// Functions
	SetOuterConeAngle 0x4a6f6 hash fa17394c params:( None NewOuterConeAngle; );
	SetInnerConeAngle 0x4a6ec hash 45486cb9 params:( None NewInnerConeAngle; );
};


instance 1ab5e1b6dc0
class SpringArmComponent public : SceneComponent
{
	// Fields
	float TargetArmLength; // 0x1f0
	Vector SocketOffset; // 0x1f4
	Vector TargetOffset; // 0x200
	float ProbeSize; // 0x20c
	BYTE ProbeChannel; // 0x210
	bool bDoCollisionTest; // 0x214
	bool bUsePawnControlRotation; // 0x214
	bool bInheritPitch; // 0x214
	bool bInheritYaw; // 0x214
	bool bInheritRoll; // 0x214
	bool bEnableCameraLag; // 0x214
	bool bEnableCameraRotationLag; // 0x214
	bool bUseCameraLagSubstepping; // 0x214
	bool bDrawDebugLagMarkers; // 0x215
	float CameraLagSpeed; // 0x218
	float CameraRotationLagSpeed; // 0x21c
	float CameraLagMaxTimeStep; // 0x220
	float CameraLagMaxDistance; // 0x224

	// Functions
	IsCollisionFixApplied 0x5021c hash b61bc053 params:( None ReturnValue; );
	GetUnfixedCameraPosition 0x5020f hash 2361b3b6 params:( Vector ReturnValue; );
	GetTargetRotation 0x50205 hash 7b98d99c params:( Rotator ReturnValue; );
};


instance 1ab5e1b6b80
class StaticMesh public : StreamableRenderAsset
{
	// Fields
	PerPlatformInt MinLOD; // 0x60
	float LpvBiasMultiplier; // 0x64
	TArray StaticMaterials; // 0x68
	float LightmapUVDensity; // 0x78
	int LightMapResolution; // 0x7c
	int LightMapCoordinateIndex; // 0x80
	float DistanceFieldSelfShadowBias; // 0x84
	BodySetup* BodySetup; // 0x88
	int LODForCollision; // 0x90
	bool bGenerateMeshDistanceField; // 0x94
	bool bStripComplexCollisionForConsole; // 0x94
	bool bHasNavigationData; // 0x94
	bool bSupportUniformlyDistributedSampling; // 0x94
	bool bIsBuiltAtRuntime; // 0x94
	bool bAllowCPUAccess; // 0x94
	bool bSupportGpuUniformlyDistributedSampling; // 0x94
	TArray Sockets; // 0xb8
	Vector PositiveBoundsExtension; // 0xd8
	Vector NegativeBoundsExtension; // 0xe4
	BoxSphereBounds ExtendedBounds; // 0xf0
	int ElementToIgnoreForTexFactor; // 0x10c
	TArray AssetUserData; // 0x110
	Object* EditableMesh; // 0x128
	NavCollisionBase* NavCollision; // 0x130

	// Functions
	RemoveSocket 0x50276 hash ed5dfcdc params:( StaticMeshSocket Socket; );
	GetNumSections 0x423a6 hash f579f8fd params:( None InLOD;None ReturnValue; );
	GetNumLODs 0x40372 hash e492b427 params:( None ReturnValue; );
	GetMinimumLODForPlatforms 0x50268 hash b4f3d9ff params:( PlatformMinimumLODs_Key PlatformMinimumLODs; );
	GetMinimumLODForPlatform 0x5025b hash 79d8d80c params:( None PlatformName;None ReturnValue; );
	GetMaterialIndex 0x3fac3 hash c95adcac params:( None MaterialSlotName;None ReturnValue; );
	GetMaterial 0x3f6f5 hash 9946f2d4 params:( None MaterialIndex;MaterialInterface ReturnValue; );
	GetBounds 0x4fd3c hash fa0b8930 params:( BoxSphereBounds ReturnValue; );
	GetBoundingBox 0x458a4 hash ec4d5ae4 params:( Box ReturnValue; );
	FindSocket 0x4fd24 hash 7752060f params:( None InSocketName;StaticMeshSocket ReturnValue; );
	CreateStaticMeshDescription 0x5024c hash 55340d72 params:( Object Outer;StaticMeshDescription ReturnValue; );
	BuildFromStaticMeshDescriptions 0x5023b hash dd4408f5 params:( StaticMeshDescriptions StaticMeshDescriptions; );
	AddSocket 0x50235 hash aad90977 params:( StaticMeshSocket Socket; );
	AddMaterial 0x5022e hash 2d49121d params:( MaterialInterface Material;None ReturnValue; );
};


instance 1ab5e1b6940
class StaticMeshSocket public : Object
{
	// Fields
	FName SocketName; // 0x28
	Vector RelativeLocation; // 0x30
	Rotator RelativeRotation; // 0x3c
	Vector RelativeScale; // 0x48
	FString Tag; // 0x58

};


instance 1ab5e1b6700
class StereoLayerComponent public : SceneComponent
{
	// Fields
	bool bLiveTexture; // 0x1f0
	bool bSupportsDepth; // 0x1f0
	bool bNoAlphaChannel; // 0x1f0
	Texture* Texture; // 0x1f8
	Texture* LeftTexture; // 0x200
	bool bQuadPreserveTextureRatio; // 0x208
	Vector2D QuadSize; // 0x20c
	Box2D UVRect; // 0x214
	float CylinderRadius; // 0x228
	float CylinderOverlayArc; // 0x22c
	int CylinderHeight; // 0x230
	EquirectProps EquirectProps; // 0x234
	BYTE StereoLayerType; // 0x27c
	BYTE StereoLayerShape; // 0x27d
	int Priority; // 0x280

	// Functions
	SetUVRect 0x502dc hash 9a5b1cea params:( Box2D InUVRect; );
	SetTexture 0x502d6 hash be7a0862 params:( Texture InTexture; );
	SetQuadSize 0x502cf hash 61be6b77 params:( Vector2D InQuadSize; );
	SetPriority 0x48ccc hash a20f31f3 params:( None InPriority; );
	SetLeftTexture 0x502c7 hash 9e8a568d params:( Texture InTexture; );
	SetEquirectProps 0x502be hash 81b49f47 params:( EquirectProps InScaleBiases; );
	MarkTextureForUpdate 0x502b3 hash 5c26812b params:(  );
	GetUVRect 0x502ad hash 2485d0de params:( Box2D ReturnValue; );
	GetTexture 0x502a7 hash 8dfb3ad6 params:( Texture ReturnValue; );
	GetQuadSize 0x502a0 hash 2165ec6b params:( Vector2D ReturnValue; );
	GetPriority 0x50299 hash 61b6b2e7 params:( None ReturnValue; );
	GetLeftTexture 0x50291 hash d787a301 params:( Texture ReturnValue; );
};


instance 1ab5e1b64c0
class StereoLayerFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	ShowSplashScreen 0x50312 hash dd3b9731 params:(  );
	SetSplashScreen 0x50309 hash 1fdea4fc params:( Texture Texture;Vector2D Scale;Vector Offset;None bShowLoadingMovie;None bShowOnSet; );
	HideSplashScreen 0x50300 hash d9c93f4a params:(  );
	EnableAutoLoadingSplashScreen 0x502f0 hash 50e08d4e params:( None InAutoShowEnabled; );
};


instance 1ab5e1b6280
class StringTable public : Object
{
	// Fields

};


instance 1ab5e1b6040
class SubsurfaceProfile public : Object
{
	// Fields
	SubsurfaceProfileStruct Settings; // 0x28

};


instance 1ab5e1b5e00
class SubsystemBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	GetWorldSubsystem 0x50375 hash 7aee3d1c params:( Object ContextObject;Class Class;WorldSubsystem ReturnValue; );
	GetLocalPlayerSubSystemFromPlayerController 0x5035e hash 40fe9cb1 params:( PlayerController PlayerController;Class Class;LocalPlayerSubsystem ReturnValue; );
	GetLocalPlayerSubsystem 0x50351 hash c8ee3a0c params:( Object ContextObject;Class Class;LocalPlayerSubsystem ReturnValue; );
	GetGameInstanceSubsystem 0x50344 hash a57973e3 params:( Object ContextObject;Class Class;GameInstanceSubsystem ReturnValue; );
	GetEngineSubsystem 0x5033a hash 8b08cb6a params:( Class Class;EngineSubsystem ReturnValue; );
};


instance 1ab5e1b5bc0
class SubUVAnimation public : Object
{
	// Fields
	Texture2D* SubUVTexture; // 0x28
	int SubImages_Horizontal; // 0x30
	int SubImages_Vertical; // 0x34
	BYTE BoundingMode; // 0x38
	BYTE OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c

};


instance 1ab5e1b5740
class TimecodeProvider public : Object
{
	// Fields
	int FrameDelay; // 0x28

	// Functions
	GetTimecode 0x461a5 hash 66896ecf params:( Timecode ReturnValue; );
	GetSynchronizationState 0x503a8 hash 476dbdd8 params:( UnderlyingType ReturnValue; );
	GetFrameRate 0x413a2 hash 9e3c421c params:( FrameRate ReturnValue; );
	GetDelayedTimecode 0x5039e hash e5e86547 params:( Timecode ReturnValue; );
};


instance 1ab5e1b5980
class SystemTimeTimecodeProvider public : TimecodeProvider
{
	// Fields
	FrameRate FrameRate; // 0x30

	// Functions
	SetFrameRate 0x4145c hash e9a4a2a8 params:( FrameRate InFrameRate; );
};


instance 1ab5e1b5500
class TargetPoint public : Actor
{
	// Fields

};


instance 1ab5e1b52c0
class TextPropertyTestObject public : Object
{
	// Fields
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58

};


instance 1ab5e1b5080
class TextRenderActor public : Actor
{
	// Fields
	TextRenderComponent* TextRender; // 0x218

};


instance 1ab5e1b4e40
class TextRenderComponent public : PrimitiveComponent
{
	// Fields
	FText Text; // 0x3d8
	MaterialInterface* TextMaterial; // 0x3f0
	Font* Font; // 0x3f8
	BYTE HorizontalAlignment; // 0x400
	BYTE VerticalAlignment; // 0x401
	Color TextRenderColor; // 0x404
	float XScale; // 0x408
	float YScale; // 0x40c
	float WorldSize; // 0x410
	float InvDefaultSize; // 0x414
	float HorizSpacingAdjust; // 0x418
	float VertSpacingAdjust; // 0x41c
	bool bAlwaysRenderAsText; // 0x420

	// Functions
	SetYScale 0x5042b hash a382b872 params:( None Value; );
	SetXScale 0x50425 hash a12d8fd1 params:( None Value; );
	SetWorldSize 0x5041e hash fb5a1bf4 params:( None Value; );
	SetVertSpacingAdjust 0x50413 hash 55353162 params:( None Value; );
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalTextAligment Value; );
	SetTextRenderColor 0x50409 hash 73277695 params:( Color Value; );
	SetTextMaterial 0x50400 hash 8c12a4c5 params:( MaterialInterface Material; );
	SetText 0x46afa hash ecdd3f56 params:( None Value; );
	SetHorizSpacingAdjust 0x503f4 hash bdd1794d params:( None Value; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizTextAligment Value; );
	SetFont 0x4732b hash ecd5bb48 params:( Font Value; );
	K2_SetText 0x503ee hash baa01792 params:( None Value; );
	GetTextWorldSize 0x503e5 hash 69b5e4ed params:( Vector ReturnValue; );
	GetTextLocalSize 0x503dc hash cc9b7fb0 params:( Vector ReturnValue; );
};


instance 1ab5e1b4c00
class Texture2DArray public : Texture
{
	// Fields

};


instance 1ab5e1bde40
class Texture2DDynamic public : Texture
{
	// Fields
	BYTE Format; // 0xd8

};


instance 1ab5e1bdc00
class TextureLightProfile public : Texture2D
{
	// Fields
	float Brightness; // 0x100
	float TextureMultiplier; // 0x104

};


instance 1ab5e1bd9c0
class TextureRenderTargetCube public : TextureRenderTarget
{
	// Fields
	int SizeX; // 0xd8
	LinearColor ClearColor; // 0xdc
	BYTE OverrideFormat; // 0xec
	bool bHDR; // 0xed
	bool bForceLinearGamma; // 0xed

};


instance 1ab5e1bd780
class ThumbnailInfo public : Object
{
	// Fields

};


instance 1ab5e1bd540
class TimelineComponent public : ActorComponent
{
	// Fields
	Timeline TheTimeline; // 0xb0
	bool bIgnoreTimeDilation; // 0x148

	// Functions
	Stop 0x3e2ef hash 7c8c8f2b params:(  );
	SetVectorCurve 0x504bf hash afacfe09 params:( CurveVector NewVectorCurve;None VectorTrackName; );
	SetTimelineLengthMode 0x504b3 hash 3c16c08f params:( ETimelineLengthMode NewLengthMode; );
	SetTimelineLength 0x504a9 hash 6ca23cea params:( None NewLength; );
	SetPlayRate 0x3fbb7 hash c22bc733 params:( None NewRate; );
	SetPlaybackPosition 0x3fb9d hash 7c3bb7ad params:( None NewPosition;None bFireEvents;None bFireUpdate; );
	SetNewTime 0x3fb97 hash f078c38a params:( None NewTime; );
	SetLooping 0x3fb91 hash 6d567709 params:( None bNewLooping; );
	SetLinearColorCurve 0x5049e hash fd6a8230 params:( CurveLinearColor NewLinearColorCurve;None LinearColorTrackName; );
	SetIgnoreTimeDilation 0x50492 hash d4a11d78 params:( None bNewIgnoreTimeDilation; );
	SetFloatCurve 0x5048a hash d526006c params:( CurveFloat NewFloatCurve;None FloatTrackName; );
	ReverseFromEnd 0x3fb82 hash fa3a6b4c params:(  );
	Reverse 0x3fb7d hash a010bca1 params:(  );
	PlayFromStart 0x3fb75 hash c6b288dd params:(  );
	Play 0x3fb72 hash 7c8ac63b params:(  );
	OnRep_Timeline 0x50482 hash d84273ff params:(  );
	IsReversing 0x3fb60 hash b8aea716 params:( None ReturnValue; );
	IsPlaying 0x3e2d2 hash 5c6af535 params:( None ReturnValue; );
	IsLooping 0x3fb5a hash 3079e3b9 params:( None ReturnValue; );
	GetTimelineLength 0x50478 hash 8a6ba4de params:( None ReturnValue; );
	GetPlayRate 0x3fb53 hash 81d34827 params:( None ReturnValue; );
	GetPlaybackPosition 0x3fb39 hash 31feeca1 params:( None ReturnValue; );
	GetIgnoreTimeDilation 0x5046c hash 8055f6c params:( None ReturnValue; );
};


instance 1ab5e1bd300
class TimelineTemplate public : Object
{
	// Fields
	float TimelineLength; // 0x28
	BYTE LengthMode; // 0x2c
	bool bAutoPlay; // 0x2d
	bool bLoop; // 0x2d
	bool bReplicated; // 0x2d
	bool bIgnoreTimeDilation; // 0x2d
	TArray EventTracks; // 0x30
	TArray FloatTracks; // 0x40
	TArray VectorTracks; // 0x50
	TArray LinearColorTracks; // 0x60
	TArray MetaDataArray; // 0x70
	Guid TimelineGuid; // 0x80
	FName VariableName; // 0x90
	FName DirectionPropertyName; // 0x98
	FName UpdateFunctionName; // 0xa0
	FName FinishedFunctionName; // 0xa8

};


instance 1ab5e1bd0c0
class TireType public : DataAsset
{
	// Fields
	float FrictionScale; // 0x30

};


instance 1ab5e1bce80
class TouchInterface public : Object
{
	// Fields
	TArray Controls; // 0x28
	float ActiveOpacity; // 0x38
	float InactiveOpacity; // 0x3c
	float TimeUntilDeactive; // 0x40
	float TimeUntilReset; // 0x44
	float ActivationDelay; // 0x48
	bool bPreventRecenter; // 0x4c
	float StartupDelay; // 0x50

};


instance 1ab5e1bcc40
class TriggerBase public : Actor
{
	// Fields
	ShapeComponent* CollisionComponent; // 0x218

};


instance 1ab5e1bca00
class TriggerBox public : TriggerBase
{
	// Fields

};


instance 1ab5e1bc7c0
class TriggerCapsule public : TriggerBase
{
	// Fields

};


instance 1ab5e1bc580
class TriggerSphere public : TriggerBase
{
	// Fields

};


instance 1ab5e1bc340
class TriggerVolume public : Volume
{
	// Fields

};


instance 1ab5e1bc100
class TwitterIntegrationBase public : PlatformInterfaceBase
{
	// Fields

	// Functions
	TwitterRequest 0x50537 hash 7fac13e1 params:( None URL;ParamKeysAndValues ParamKeysAndValues;ETwitterRequestMethod RequestMethod;None AccountIndex;None ReturnValue; );
	ShowTweetUI 0x50530 hash 80614d6d params:( None InitialMessage;None URL;None Picture;None ReturnValue; );
	Init 0x36c hash 7c86f919 params:(  );
	GetNumAccounts 0x50528 hash be909e35 params:( None ReturnValue; );
	GetAccountName 0x50520 hash 1a9aeff3 params:( None AccountIndex;None ReturnValue; );
	CanShowTweetUI 0x50518 hash 3ec14dff params:( None ReturnValue; );
	AuthorizeAccounts 0x5050e hash df8fef20 params:( None ReturnValue; );
};


instance 1ab5e1bbec0
class UserDefinedEnum public : Enum
{
	// Fields
	MapProperty DisplayNameMap; // 0x60 property 0x1ab71168a80 hash 0xadd0fb88

};


instance 1ab5e1bbc80
class UserDefinedStruct public : ScriptStruct
{
	// Fields
	BYTE Status; // 0xa8
	Guid Guid; // 0xac

};


instance 1ab5e1bba40
class UserInterfaceSettings public : DeveloperSettings
{
	// Fields
	ERenderFocusRule RenderFocusRule; // 0x38
	MapProperty HardwareCursors; // 0x40 property 0x1ab71168940 hash 0xadd0fb88
	MapProperty SoftwareCursors; // 0x90 property 0x1ab711689e0 hash 0xadd0fb88
	SoftClassPath DefaultCursor; // 0xe0
	SoftClassPath TextEditBeamCursor; // 0xf8
	SoftClassPath CrosshairsCursor; // 0x110
	SoftClassPath HandCursor; // 0x128
	SoftClassPath GrabHandCursor; // 0x140
	SoftClassPath GrabHandClosedCursor; // 0x158
	SoftClassPath SlashedCircleCursor; // 0x170
	float ApplicationScale; // 0x188
	EUIScalingRule UIScaleRule; // 0x18c
	SoftClassPath CustomScalingRuleClass; // 0x190
	RuntimeFloatCurve UIScaleCurve; // 0x1a8
	bool bAllowHighDPIInGameMode; // 0x230
	bool bLoadWidgetsOnDedicatedServer; // 0x231
	TArray CursorClasses; // 0x238
	Object* CustomScalingRuleClassInstance; // 0x248
	DPICustomScalingRule* CustomScalingRule; // 0x250

};


instance 1ab5e1bb800
class VectorField public : Object
{
	// Fields
	Box Bounds; // 0x28
	float Intensity; // 0x44

};


instance 1ab5e1bb5c0
class VectorFieldAnimated public : VectorField
{
	// Fields
	Texture2D* Texture; // 0x48
	BYTE ConstructionOp; // 0x50
	int VolumeSizeX; // 0x54
	int VolumeSizeY; // 0x58
	int VolumeSizeZ; // 0x5c
	int SubImagesX; // 0x60
	int SubImagesY; // 0x64
	int FrameCount; // 0x68
	float FramesPerSecond; // 0x6c
	bool bLoop; // 0x70
	VectorFieldStatic* NoiseField; // 0x78
	float NoiseScale; // 0x80
	float NoiseMax; // 0x84

};


instance 1ab5e1bb380
class VectorFieldComponent public : PrimitiveComponent
{
	// Fields
	VectorField* VectorField; // 0x3d8
	float Intensity; // 0x3e0
	float Tightness; // 0x3e4
	bool bPreviewVectorField; // 0x3e8

	// Functions
	SetIntensity 0x49a10 hash 3ab0f698 params:( None NewIntensity; );
};


instance 1ab5e1bb140
class VectorFieldStatic public : VectorField
{
	// Fields
	int SizeX; // 0x48
	int SizeY; // 0x4c
	int SizeZ; // 0x50
	bool bAllowCPUAccess; // 0x54
	TArray CPUData; // 0xf0

};


instance 1ab5e1baf00
class VectorFieldVolume public : Actor
{
	// Fields
	VectorFieldComponent* VectorFieldComponent; // 0x218

};


instance 1ab5e1bacc0
class VirtualTexture public : Object
{
	// Fields

};


instance 1ab5e1baa80
class LightMapVirtualTexture public : VirtualTexture
{
	// Fields

};


instance 1ab5e1ba840
class LightMapVirtualTexture2D public : Texture2D
{
	// Fields
	TArray TypeToLayer; // 0x100

};


instance 1ab5e1ba600
class VirtualTexturePoolConfig public : Object
{
	// Fields
	int DefaultSizeInMegabyte; // 0x28
	TArray Pools; // 0x30

};


instance 1ab5e1ba3c0
class VisualLoggerAutomationTests public : Object
{
	// Fields

};


instance 1ab5e1ba180
class VisualLoggerDebugSnapshotInterface public : Interface
{
	// Fields

};


instance 1ab5e1b9f40
class VisualLoggerKismetLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	RedirectVislog 0x505fd hash fa7cae0b params:( Object SourceOwner;Object DestinationOwner; );
	LogText 0xb05e hash e86dedcc params:( Object WorldContextObject;None Text;None LogCategory;None bAddToMessageLog; );
	LogSegment 0x505f7 hash e182b29a params:( Object WorldContextObject;Vector SegmentStart;Vector SegmentEnd;None Text;LinearColor ObjectColor;None Thickness;None CategoryName;None bAddToMessageLog; );
	LogLocation 0x505f0 hash 93aceee0 params:( Object WorldContextObject;Vector Location;None Text;LinearColor ObjectColor;None Radius;None LogCategory;None bAddToMessageLog; );
	LogBox 0x505ec hash c1395710 params:( Object WorldContextObject;Box BoxShape;None Text;LinearColor ObjectColor;None LogCategory;None bAddToMessageLog; );
	EnableRecording 0x505e3 hash 12417529 params:( None bEnabled; );
};


instance 1ab5e1b9d00
class VoiceChannel public : Channel
{
	// Fields

};


instance 1ab5e1b9ac0
class VOIPTalker public : ActorComponent
{
	// Fields
	VoiceSettings Settings; // 0xb0

	// Functions
	RegisterWithPlayerState 0x50626 hash df891634 params:( PlayerState OwningState; );
	GetVoiceLevel 0x5061e hash a8d63393 params:( None ReturnValue; );
	CreateTalkerForPlayer 0x50612 hash 8eea1390 params:( PlayerState OwningState;VOIPTalker ReturnValue; );
	BPOnTalkingEnd 0x3665b hash d58104d5 params:(  );
	BPOnTalkingBegin 0x36652 hash 399a6fe3 params:( AudioComponent AudioComponent; );
};


instance 1ab5e1b9880
class VOIPStatics public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SetMicThreshold 0x5063a hash 4bfbf597 params:( None InThreshold; );
};


instance 1ab5e1b9640
class VolumeTexture public : Texture
{
	// Fields

};


instance 1ab5e1bfdc0
class VolumetricLightmapDensityVolume public : Volume
{
	// Fields
	Int32Interval AllowedMipLevelRange; // 0x250

};


instance 1ab5e1bfb80
class WindDirectionalSource public : Info
{
	// Fields
	WindDirectionalSourceComponent* Component; // 0x218

};


instance 1ab5e1bf940
class WindDirectionalSourceComponent public : SceneComponent
{
	// Fields
	float Strength; // 0x1f0
	float Speed; // 0x1f4
	float MinGustAmount; // 0x1f8
	float MaxGustAmount; // 0x1fc
	float Radius; // 0x200
	bool bPointWind; // 0x204

	// Functions
	SetWindType 0x5069a hash 6de26f05 params:( UnderlyingType InNewType; );
	SetStrength 0x50693 hash 151068a0 params:( None InNewStrength; );
	SetSpeed 0x5068e hash 8878c762 params:( None InNewSpeed; );
	SetRadius 0x469f4 hash 942ca2b9 params:( None InNewRadius; );
	SetMinimumGustAmount 0x50683 hash 13923364 params:( None InNewMinGust; );
	SetMaximumGustAmount 0x50678 hash 12b34de6 params:( None InNewMaxGust; );
};


instance 1ab5e1bf700
class WorldComposition public : Object
{
	// Fields
	TArray TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64

};


instance 1ab5e1bf4c0
class HierarchicalLODSetup public : Object
{
	// Fields
	TArray HierarchicalLODSetup; // 0x28
	MaterialInterface* OverrideBaseMaterial; // 0x38

};


instance 1ab5e1bf280
class WorldSettings public : Info
{
	// Fields
	int VisibilityCellSize; // 0x220
	BYTE VisibilityAggressiveness; // 0x224
	bool bPrecomputeVisibility; // 0x225
	bool bPlaceCellsOnlyAlongCameraTracks; // 0x225
	bool bEnableWorldBoundsChecks; // 0x225
	bool bEnableNavigationSystem; // 0x225
	bool bEnableAISystem; // 0x225
	bool bEnableWorldComposition; // 0x225
	bool bUseClientSideLevelStreamingVolumes; // 0x225
	bool bEnableWorldOriginRebasing; // 0x225
	bool bWorldGravitySet; // 0x226
	bool bGlobalGravitySet; // 0x226
	bool bMinimizeBSPSections; // 0x226
	bool bForceNoPrecomputedLighting; // 0x226
	bool bHighPriorityLoading; // 0x226
	bool bHighPriorityLoadingLocal; // 0x226
	bool bOverrideDefaultBroadphaseSettings; // 0x226
	NavigationSystemConfig* NavigationSystemConfig; // 0x228
	NavigationSystemConfig* NavigationSystemConfigOverride; // 0x230
	float WorldToMeters; // 0x238
	float KillZ; // 0x23c
	DamageType* KillZDamageType; // 0x240
	float WorldGravityZ; // 0x248
	float GlobalGravityZ; // 0x24c
	DefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x250
	PhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x258
	GameModeBase* DefaultGameMode; // 0x260
	GameNetworkManager* GameNetworkManagerClass; // 0x268
	int PackedLightAndShadowMapTextureSize; // 0x270
	Vector DefaultColorScale; // 0x274
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x280
	float GlobalDistanceFieldViewDistance; // 0x284
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x288
	ReverbSettings DefaultReverbSettings; // 0x290
	InteriorSettings DefaultAmbientZoneSettings; // 0x2b0
	float MonoCullingDistance; // 0x2d4
	SoundMix* DefaultBaseSoundMix; // 0x2d8
	float TimeDilation; // 0x2e0
	float MatineeTimeDilation; // 0x2e4
	float DemoPlayTimeDilation; // 0x2e8
	float MinGlobalTimeDilation; // 0x2ec
	float MaxGlobalTimeDilation; // 0x2f0
	float MinUndilatedFrameTime; // 0x2f4
	float MaxUndilatedFrameTime; // 0x2f8
	BroadphaseSettings BroadphaseSettings; // 0x2fc
	PlayerState* Pauser; // 0x340
	TArray ReplicationViewers; // 0x348
	TArray AssetUserData; // 0x358
	PlayerState* PauserPlayerState; // 0x368
	int MaxNumberOfBookmarks; // 0x370
	BookmarkBase* DefaultBookmarkClass; // 0x378
	TArray BookmarkArray; // 0x380
	BookmarkBase* LastBookmarkClass; // 0x390

	// Functions
	OnRep_WorldGravityZ 0x506bd hash df05f990 params:(  );
};


instance 1ab5e1bf040
class WorldSubsystem public : Subsystem
{
	// Fields

};


instance 1ab70e9a3c0
struct DistributionLookupTable 
{
	// Fields
	float TimeScale; // 0x0
	float TimeBias; // 0x4
	TArray Values; // 0x8
	BYTE Op; // 0x18
	BYTE EntryCount; // 0x19
	BYTE EntryStride; // 0x1a
	BYTE SubEntryStride; // 0x1b
	BYTE LockFlag; // 0x1c

};


instance 1ab70e9a240
struct RawDistribution 
{
	// Fields
	DistributionLookupTable Table; // 0x0

};


instance 1ab70e9a180
struct FloatDistribution 
{
	// Fields
	DistributionLookupTable Table; // 0x0

};


instance 1ab70e9a0c0
struct VectorDistribution 
{
	// Fields
	DistributionLookupTable Table; // 0x0

};


instance 1ab70e9a000
struct Vector4Distribution 
{
	// Fields
	DistributionLookupTable Table; // 0x0

};


instance 1ab70e99f40
struct FloatRK4SpringInterpolator 
{
	// Fields
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4

};


instance 1ab70e99e80
struct VectorRK4SpringInterpolator 
{
	// Fields
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4

};


instance 1ab70e99dc0
struct FormatArgumentData 
{
	// Fields
	FString ArgumentName; // 0x0
	BYTE ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38

};


instance 1ab70e99d00
struct ExpressionInput 
{
	// Fields
	int OutputIndex; // 0x0
	FName ExpressionName; // 0x4

};


instance 1ab70e99c40
struct MaterialAttributesInput 
{
	// Fields
	int PropertyConnectedBitmask; // 0xc

};


instance 1ab70e99b80
struct ExpressionOutput 
{
	// Fields
	FName OutputName; // 0x0

};


instance 1ab70e99ac0
struct MaterialInput 
{
	// Fields
	int OutputIndex; // 0x0
	FName ExpressionName; // 0x4

};


instance 1ab70e99a00
struct ColorMaterialInput 
{
	// Fields

};


instance 1ab70e99940
struct ScalarMaterialInput 
{
	// Fields

};


instance 1ab70e99880
struct ShadingModelMaterialInput 
{
	// Fields

};


instance 1ab70e997c0
struct VectorMaterialInput 
{
	// Fields

};


instance 1ab70e99700
struct Vector2MaterialInput 
{
	// Fields

};


instance 1ab70e99640
struct HitResult 
{
	// Fields
	bool bBlockingHit; // 0x0
	bool bStartPenetrating; // 0x0
	int FaceIndex; // 0x4
	float Time; // 0x8
	float Distance; // 0xc
	Vector_NetQuantize Location; // 0x10
	Vector_NetQuantize ImpactPoint; // 0x1c
	Vector_NetQuantizeNormal Normal; // 0x28
	Vector_NetQuantizeNormal ImpactNormal; // 0x34
	Vector_NetQuantize TraceStart; // 0x40
	Vector_NetQuantize TraceEnd; // 0x4c
	float PenetrationDepth; // 0x58
	int Item; // 0x5c
	WeakObjectProperty PhysMaterial; // 0x60 property 0x1ab70f8db00 hash 0x24388009
	WeakObjectProperty Actor; // 0x68 property 0x1ab70f8db80 hash 0x24388009
	WeakObjectProperty Component; // 0x70 property 0x1ab70f8dc80 hash 0x24388009
	FName BoneName; // 0x78
	FName MyBoneName; // 0x80

};


instance 1ab70e99580
struct Vector_NetQuantize 
{
	// Fields

};


instance 1ab70e994c0
struct Vector_NetQuantizeNormal 
{
	// Fields

};


instance 1ab70e9c4c0
struct BranchingPointNotifyPayload 
{
	// Fields

};


instance 1ab70e9c400
struct SimpleMemberReference 
{
	// Fields
	Object* MemberParent; // 0x0
	FName MemberName; // 0x8
	Guid MemberGuid; // 0x10

};


instance 1ab70e9c340
struct TickFunction 
{
	// Fields
	BYTE TickGroup; // 0x8
	BYTE EndTickGroup; // 0x9
	bool bTickEvenWhenPaused; // 0xa
	bool bCanEverTick; // 0xa
	bool bStartWithTickEnabled; // 0xa
	bool bAllowTickOnDedicatedServer; // 0xa
	float TickInterval; // 0xc

};


instance 1ab70e9c280
struct ActorComponentTickFunction 
{
	// Fields

};


instance 1ab70e9c1c0
struct SubtitleCue 
{
	// Fields
	FText Text; // 0x0
	float Time; // 0x18

};


instance 1ab70e9c100
struct InterpControlPoint 
{
	// Fields
	Vector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc

};


instance 1ab70e9c040
struct PlatformInterfaceDelegateResult 
{
	// Fields
	bool bSuccessful; // 0x0
	PlatformInterfaceData Data; // 0x8

};


instance 1ab70e9bf80
struct PlatformInterfaceData 
{
	// Fields
	FName DataName; // 0x0
	BYTE Type; // 0x8
	int IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	Object* ObjectValue; // 0x28

};


instance 1ab70e9bec0
struct DebugFloatHistory 
{
	// Fields
	TArray Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c

};


instance 1ab70e9bd40
struct LatentActionInfo 
{
	// Fields
	int Linkage; // 0x0
	int UUID; // 0x4
	FName ExecutionFunction; // 0x8
	Object* CallbackTarget; // 0x10

};


instance 1ab70e9bc80
struct TimerHandle 
{
	// Fields
	ULONG64 Handle; // 0x0

};


instance 1ab70e9bbc0
struct CollisionProfileName 
{
	// Fields
	FName Name; // 0x0

};


instance 1ab70e9bb00
struct GenericStruct 
{
	// Fields
	int Data; // 0x0

};


instance 1ab70e9ba40
struct UserActivity 
{
	// Fields
	FString ActionName; // 0x0

};


instance 1ab70e9cdc0
struct WalkableSlopeOverride 
{
	// Fields
	BYTE WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4

};


instance 1ab70e9cd00
struct BodyInstance 
{
	// Fields
	BYTE ObjectType; // 0x6
	BYTE CollisionEnabled; // 0x8
	ESleepFamily SleepFamily; // 0xa
	BYTE DOFMode; // 0xb
	bool bUseCCD; // 0xc
	bool bNotifyRigidBodyCollision; // 0xc
	bool bSimulatePhysics; // 0xc
	bool bOverrideMass; // 0xc
	bool bEnableGravity; // 0xc
	bool bAutoWeld; // 0xc
	bool bStartAwake; // 0xc
	bool bGenerateWakeEvents; // 0xd
	bool bUpdateMassWhenScaleChanges; // 0xd
	bool bLockTranslation; // 0xd
	bool bLockRotation; // 0xd
	bool bLockXTranslation; // 0xd
	bool bLockYTranslation; // 0xd
	bool bLockZTranslation; // 0xd
	bool bLockXRotation; // 0xd
	bool bLockYRotation; // 0xe
	bool bLockZRotation; // 0xe
	bool bOverrideMaxAngularVelocity; // 0xe
	bool bOverrideMaxDepenetrationVelocity; // 0xe
	bool bOverrideWalkableSlopeOnInstance; // 0xe
	bool bInterpolateWhenSubStepping; // 0xe
	FName CollisionProfileName; // 0x1c
	BYTE PositionSolverIterationCount; // 0x24
	BYTE VelocitySolverIterationCount; // 0x25
	CollisionResponse CollisionResponses; // 0x28
	float MaxDepenetrationVelocity; // 0x58
	float MassInKgOverride; // 0x5c
	float LinearDamping; // 0x68
	float AngularDamping; // 0x6c
	Vector CustomDOFPlaneNormal; // 0x70
	Vector COMNudge; // 0x7c
	float MassScale; // 0x88
	Vector InertiaTensorScale; // 0x8c
	WalkableSlopeOverride WalkableSlopeOverride; // 0xa8
	PhysicalMaterial* PhysMaterialOverride; // 0xb8
	float MaxAngularVelocity; // 0xc0
	float CustomSleepThresholdMultiplier; // 0xc4
	float StabilizationThresholdMultiplier; // 0xc8
	float PhysicsBlendWeight; // 0xcc

};


instance 1ab70e9cc40
struct CollisionResponse 
{
	// Fields
	CollisionResponseContainer ResponseToChannels; // 0x0
	TArray ResponseArray; // 0x20

};


instance 1ab70e9cb80
struct ResponseChannel 
{
	// Fields
	FName Channel; // 0x0
	BYTE Response; // 0x8

};


instance 1ab70e9cac0
struct CollisionResponseContainer 
{
	// Fields
	BYTE WorldStatic; // 0x0
	BYTE WorldDynamic; // 0x1
	BYTE Pawn; // 0x2
	BYTE Visibility; // 0x3
	BYTE Camera; // 0x4
	BYTE PhysicsBody; // 0x5
	BYTE Vehicle; // 0x6
	BYTE Destructible; // 0x7
	BYTE EngineTraceChannel1; // 0x8
	BYTE EngineTraceChannel2; // 0x9
	BYTE EngineTraceChannel3; // 0xa
	BYTE EngineTraceChannel4; // 0xb
	BYTE EngineTraceChannel5; // 0xc
	BYTE EngineTraceChannel6; // 0xd
	BYTE GameTraceChannel1; // 0xe
	BYTE GameTraceChannel2; // 0xf
	BYTE GameTraceChannel3; // 0x10
	BYTE GameTraceChannel4; // 0x11
	BYTE GameTraceChannel5; // 0x12
	BYTE GameTraceChannel6; // 0x13
	BYTE GameTraceChannel7; // 0x14
	BYTE GameTraceChannel8; // 0x15
	BYTE GameTraceChannel9; // 0x16
	BYTE GameTraceChannel10; // 0x17
	BYTE GameTraceChannel11; // 0x18
	BYTE GameTraceChannel12; // 0x19
	BYTE GameTraceChannel13; // 0x1a
	BYTE GameTraceChannel14; // 0x1b
	BYTE GameTraceChannel15; // 0x1c
	BYTE GameTraceChannel16; // 0x1d
	BYTE GameTraceChannel17; // 0x1e
	BYTE GameTraceChannel18; // 0x1f

};


instance 1ab70e9ca00
struct CustomPrimitiveData 
{
	// Fields
	TArray Data; // 0x0

};


instance 1ab70e9c940
struct LightingChannels 
{
	// Fields
	bool bChannel0; // 0x0
	bool bChannel1; // 0x0
	bool bChannel2; // 0x0

};


instance 1ab70e9f580
struct TableRowBase 
{
	// Fields

};


instance 1ab714516c0
struct PerPlatformFloat 
{
	// Fields
	float Default; // 0x0

};


instance 1ab71451600
struct PerPlatformInt 
{
	// Fields
	int Default; // 0x0

};


instance 1ab71451540
struct PerPlatformBool 
{
	// Fields
	bool Default; // 0x0

};


instance 1ab71452980
struct UniqueNetIdRepl 
{
	// Fields
	TArray ReplicationBytes; // 0x18

};


instance 1ab71453a00
struct AnimNode_Base 
{
	// Fields

};


instance 1ab71453880
struct InputScaleBiasClamp 
{
	// Fields
	bool bMapRange; // 0x0
	bool bClampResult; // 0x1
	bool bInterpResult; // 0x2
	InputRange InRange; // 0x4
	InputRange OutRange; // 0xc
	float Scale; // 0x14
	float Bias; // 0x18
	float ClampMin; // 0x1c
	float ClampMax; // 0x20
	float InterpSpeedIncreasing; // 0x24
	float InterpSpeedDecreasing; // 0x28

};


instance 1ab714537c0
struct InputRange 
{
	// Fields
	float Min; // 0x0
	float Max; // 0x4

};


instance 1ab71453700
struct InputAlphaBoolBlend 
{
	// Fields
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	CurveFloat* CustomCurve; // 0x10
	AlphaBlend AlphaBlend; // 0x18

};


instance 1ab71453640
struct AlphaBlend 
{
	// Fields
	CurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24

};


instance 1ab71453580
struct InputScaleBias 
{
	// Fields
	float Scale; // 0x0
	float Bias; // 0x4

};


instance 1ab714534c0
struct PoseLinkBase 
{
	// Fields
	int LinkID; // 0x0

};


instance 1ab71453400
struct ComponentSpacePoseLink 
{
	// Fields

};


instance 1ab714531c0
struct AnimInstanceProxy 
{
	// Fields

};


instance 1ab71455d40
struct RuntimeFloatCurve 
{
	// Fields
	RichCurve EditorCurveData; // 0x0
	CurveFloat* ExternalCurve; // 0x80

};


instance 1ab71455c80
struct IndexedCurve 
{
	// Fields
	KeyHandleMap KeyHandlesToIndices; // 0x8

};


instance 1ab71455bc0
struct KeyHandleMap 
{
	// Fields

};


instance 1ab71455b00
struct RealCurve 
{
	// Fields
	float DefaultValue; // 0x68
	BYTE PreInfinityExtrap; // 0x6c
	BYTE PostInfinityExtrap; // 0x6d

};


instance 1ab71455a40
struct RichCurve 
{
	// Fields
	TArray Keys; // 0x70

};


instance 1ab71455980
struct RichCurveKey 
{
	// Fields
	BYTE InterpMode; // 0x0
	BYTE TangentMode; // 0x1
	BYTE TangentWeightMode; // 0x2
	float Time; // 0x4
	float Value; // 0x8
	float ArriveTangent; // 0xc
	float ArriveTangentWeight; // 0x10
	float LeaveTangent; // 0x14
	float LeaveTangentWeight; // 0x18

};


instance 1ab7145d180
struct KeyHandleLookupTable 
{
	// Fields

};


instance 1ab71510b80
struct AnimNode_AssetPlayerBase 
{
	// Fields
	int GroupIndex; // 0x10
	BYTE GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c

};


instance 1ab71510940
struct PoseLink 
{
	// Fields

};


instance 1ab71510640
struct BoneReference 
{
	// Fields
	FName BoneName; // 0x0

};


instance 1ab71512440
struct PerBoneBlendWeight 
{
	// Fields
	int SourceIndex; // 0x0
	float BlendWeight; // 0x4

};


instance 1ab71512380
struct InputBlendPose 
{
	// Fields
	TArray BranchFilters; // 0x0

};


instance 1ab715122c0
struct BranchFilter 
{
	// Fields
	FName BoneName; // 0x0
	int BlendDepth; // 0x8

};


instance 1ab71514540
struct PoseSnapshot 
{
	// Fields
	TArray LocalTransforms; // 0x0
	TArray BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30

};


instance 1ab71513880
struct AnimNode_Root 
{
	// Fields
	PoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28

};


instance 1ab715134c0
struct AnimCurveParam 
{
	// Fields
	FName Name; // 0x0

};


instance 1ab71518440
struct ActorComponentInstanceData 
{
	// Fields
	Object* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int SourceComponentTypeSerializedIndex; // 0x14
	TArray SavedProperties; // 0x18
	TArray DuplicatedObjects; // 0x28
	TArray ReferencedObjects; // 0x38
	TArray ReferencedNames; // 0x48

};


instance 1ab71518380
struct ActorComponentDuplicatedObjectData 
{
	// Fields

};


instance 1ab715182c0
struct SceneComponentInstanceData 
{
	// Fields
	MapProperty AttachedInstanceComponents; // 0x58 property 0x1ab71164480 hash 0xadd0fb88

};


instance 1ab7151b8c0
struct RepAttachment 
{
	// Fields
	Actor* AttachParent; // 0x0
	Vector_NetQuantize100 LocationOffset; // 0x8
	Vector_NetQuantize100 RelativeScale3D; // 0x14
	Rotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	SceneComponent* AttachComponent; // 0x38

};


instance 1ab7151b800
struct Vector_NetQuantize100 
{
	// Fields

};


instance 1ab7151b740
struct RepMovement 
{
	// Fields
	Vector LinearVelocity; // 0x0
	Vector AngularVelocity; // 0xc
	Vector Location; // 0x18
	Rotator Rotation; // 0x24
	bool bSimulatedPhysicSleep; // 0x30
	bool bRepPhysics; // 0x30
	EVectorQuantization LocationQuantizationLevel; // 0x31
	EVectorQuantization VelocityQuantizationLevel; // 0x32
	ERotatorQuantization RotationQuantizationLevel; // 0x33

};


instance 1ab7151b680
struct ActorTickFunction 
{
	// Fields

};


instance 1ab7151dcc0
struct DirectoryPath 
{
	// Fields
	FString Path; // 0x0

};


instance 1ab7151da80
struct KAggregateGeom 
{
	// Fields
	TArray SphereElems; // 0x0
	TArray BoxElems; // 0x10
	TArray SphylElems; // 0x20
	TArray ConvexElems; // 0x30
	TArray TaperedCapsuleElems; // 0x40

};


instance 1ab7151d9c0
struct KShapeElem 
{
	// Fields
	float RestOffset; // 0x8
	FName Name; // 0xc
	bool bContributeToMass; // 0x18

};


instance 1ab7151d900
struct KTaperedCapsuleElem 
{
	// Fields
	Vector Center; // 0x30
	Rotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50

};


instance 1ab7151d840
struct KConvexElem 
{
	// Fields
	TArray VertexData; // 0x30
	Box ElemBox; // 0x40
	Transform Transform; // 0x60

};


instance 1ab7151d780
struct KSphylElem 
{
	// Fields
	Vector Center; // 0x30
	Rotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c

};


instance 1ab7151d6c0
struct KBoxElem 
{
	// Fields
	Vector Center; // 0x30
	Rotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50

};


instance 1ab7151d600
struct KSphereElem 
{
	// Fields
	Vector Center; // 0x30
	float Radius; // 0x3c

};


instance 1ab7151d540
struct AnimationGroupReference 
{
	// Fields
	FName GroupName; // 0x0
	BYTE GroupRole; // 0x8

};


instance 1ab7151d480
struct RootMotionMovementParams 
{
	// Fields
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	Transform RootMotionTransform; // 0x10

};


instance 1ab7151d3c0
struct AnimGroupInstance 
{
	// Fields

};


instance 1ab7151d300
struct AnimTickRecord 
{
	// Fields
	AnimationAsset* SourceAsset; // 0x0

};


instance 1ab7151d240
struct MarkerSyncAnimPosition 
{
	// Fields
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10

};


instance 1ab7151d180
struct BlendFilter 
{
	// Fields

};


instance 1ab7151d0c0
struct BlendSampleData 
{
	// Fields
	int SampleDataIndex; // 0x0
	AnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c

};


instance 1ab7151d000
struct AnimationRecordingSettings 
{
	// Fields
	bool bRecordInWorldSpace; // 0x0
	bool bRemoveRootAnimation; // 0x1
	bool bAutoSaveAsset; // 0x2
	float SampleRate; // 0x4
	float Length; // 0x8
	BYTE InterpMode; // 0xc
	BYTE TangentMode; // 0xd

};


instance 1ab7151cf40
struct ComponentSpacePose 
{
	// Fields
	TArray Transforms; // 0x0
	TArray Names; // 0x10

};


instance 1ab7151ce80
struct LocalSpacePose 
{
	// Fields
	TArray Transforms; // 0x0
	TArray Names; // 0x10

};


instance 1ab7151cdc0
struct NamedTransform 
{
	// Fields
	Transform Value; // 0x0
	FName Name; // 0x30

};


instance 1ab7151cd00
struct NamedColor 
{
	// Fields
	Color Value; // 0x0
	FName Name; // 0x4

};


instance 1ab7151cc40
struct NamedVector 
{
	// Fields
	Vector Value; // 0x0
	FName Name; // 0xc

};


instance 1ab7151cb80
struct NamedFloat 
{
	// Fields
	float Value; // 0x0
	FName Name; // 0x4

};


instance 1ab7151cac0
struct AnimParentNodeAssetOverride 
{
	// Fields
	AnimationAsset* NewAsset; // 0x0
	Guid ParentNodeGuid; // 0x8

};


instance 1ab7151ca00
struct AnimGroupInfo 
{
	// Fields
	FName Name; // 0x0
	LinearColor Color; // 0x8

};


instance 1ab7151c940
struct AnimBlueprintDebugData 
{
	// Fields

};


instance 1ab7151c880
struct AnimationFrameSnapshot 
{
	// Fields

};


instance 1ab7151c7c0
struct StateMachineDebugData 
{
	// Fields

};


instance 1ab7151c700
struct AnimGraphBlendOptions 
{
	// Fields
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4

};


instance 1ab7151c640
struct GraphAssetPlayerInformation 
{
	// Fields
	TArray PlayerNodeIndices; // 0x0

};


instance 1ab7151f700
struct CachedPoseIndices 
{
	// Fields
	TArray OrderedSavedPoseNodeIndices; // 0x0

};


instance 1ab7151f640
struct AnimBlueprintFunction 
{
	// Fields
	FName Name; // 0x0
	FName Group; // 0x8
	int OutputPoseNodeIndex; // 0x10
	TArray InputPoseNames; // 0x18
	TArray InputPoseNodeIndices; // 0x28
	StructProperty* OutputPoseNodeProperty; // 0x38
	TArray InputPoseNodeProperties; // 0x40
	TArray InputProperties; // 0x50
	bool bImplemented; // 0x60

};


instance 1ab7151f580
struct AnimTrack 
{
	// Fields
	TArray AnimSegments; // 0x0

};


instance 1ab7151f4c0
struct AnimSegment 
{
	// Fields
	AnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int LoopingCount; // 0x18

};


instance 1ab7151f400
struct RootMotionExtractionStep 
{
	// Fields
	AnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc

};


instance 1ab7151f340
struct CompressedSegment 
{
	// Fields

};


instance 1ab7151f280
struct RawCurveTracks 
{
	// Fields
	TArray FloatCurves; // 0x0

};


instance 1ab7151f1c0
struct AnimCurveBase 
{
	// Fields
	FName LastObservedName; // 0x0
	SmartName Name; // 0x8
	int CurveTypeFlags; // 0x14

};


instance 1ab7151f100
struct SmartName 
{
	// Fields
	FName DisplayName; // 0x0

};


instance 1ab7151f040
struct FloatCurve 
{
	// Fields
	RichCurve FloatCurve; // 0x18

};


instance 1ab7151ef80
struct TransformCurve 
{
	// Fields
	VectorCurve TranslationCurve; // 0x18
	VectorCurve RotationCurve; // 0x1b0
	VectorCurve ScaleCurve; // 0x348

};


instance 1ab7151eec0
struct VectorCurve 
{
	// Fields
	RichCurve FloatCurves; // 0x18

};


instance 1ab7151ee00
struct SlotEvaluationPose 
{
	// Fields
	BYTE AdditiveType; // 0x0
	float Weight; // 0x4

};


instance 1ab7151ed40
struct A2Pose 
{
	// Fields
	TArray Bones; // 0x0

};


instance 1ab7151ec80
struct A2CSPose 
{
	// Fields
	TArray ComponentSpaceFlags; // 0x18

};


instance 1ab7151ebc0
struct QueuedDrawDebugItem 
{
	// Fields
	BYTE ItemType; // 0x0
	Vector StartLoc; // 0x4
	Vector EndLoc; // 0x10
	Vector Center; // 0x1c
	Rotator Rotation; // 0x28
	float Radius; // 0x34
	float Size; // 0x38
	int Segments; // 0x3c
	Color Color; // 0x40
	bool bPersistentLines; // 0x44
	float LifeTime; // 0x48
	float Thickness; // 0x4c
	FString Message; // 0x50
	Vector2D TextScale; // 0x60

};


instance 1ab7151eb00
struct AnimLinkableElement 
{
	// Fields
	AnimMontage* LinkedMontage; // 0x8
	int SlotIndex; // 0x10
	int SegmentIndex; // 0x14
	BYTE LinkMethod; // 0x18
	BYTE CachedLinkMethod; // 0x19
	float SegmentBeginTime; // 0x1c
	float SegmentLength; // 0x20
	float LinkValue; // 0x24
	AnimSequenceBase* LinkedSequence; // 0x28

};


instance 1ab7151ea40
struct AnimMontageInstance 
{
	// Fields
	AnimMontage* Montage; // 0x0
	bool bPlaying; // 0x28
	float DefaultBlendTimeMultiplier; // 0x2c
	TArray NextSections; // 0xe8
	TArray PrevSections; // 0xf8
	TArray ActiveStateBranchingPoints; // 0x118
	float Position; // 0x128
	float PlayRate; // 0x12c
	AlphaBlend Blend; // 0x130
	int DisableRootMotionCount; // 0x188

};


instance 1ab7151e980
struct AnimNotifyEvent 
{
	// Fields
	float DisplayTime; // 0x30
	float TriggerTimeOffset; // 0x34
	float EndTriggerTimeOffset; // 0x38
	float TriggerWeightThreshold; // 0x3c
	FName NotifyName; // 0x40
	AnimNotify* Notify; // 0x48
	AnimNotifyState* NotifyStateClass; // 0x50
	float Duration; // 0x58
	AnimLinkableElement EndLink; // 0x60
	bool bConvertedFromBranchingPoint; // 0x90
	BYTE MontageTickType; // 0x91
	float NotifyTriggerChance; // 0x94
	BYTE NotifyFilterType; // 0x98
	int NotifyFilterLOD; // 0x9c
	bool bTriggerOnDedicatedServer; // 0xa0
	bool bTriggerOnFollower; // 0xa1
	int TrackIndex; // 0xa4

};


instance 1ab7151e8c0
struct BranchingPointMarker 
{
	// Fields
	int NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	BYTE NotifyEventType; // 0x8

};


instance 1ab7151e800
struct BranchingPoint 
{
	// Fields
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c

};


instance 1ab7151e740
struct SlotAnimationTrack 
{
	// Fields
	FName SlotName; // 0x0
	AnimTrack AnimTrack; // 0x8

};


instance 1ab7151e680
struct CompositeSection 
{
	// Fields
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray MetaData; // 0x48

};


instance 1ab7151e5c0
struct AnimNode_ApplyMeshSpaceAdditive 
{
	// Fields
	PoseLink Base; // 0x10
	PoseLink Additive; // 0x20
	float Alpha; // 0x30
	InputScaleBias AlphaScaleBias; // 0x34
	int LODThreshold; // 0x3c

};


instance 1ab7151e500
struct AnimNode_CustomProperty 
{
	// Fields
	TArray SourcePropertyNames; // 0x10
	TArray DestPropertyNames; // 0x20
	Object* TargetInstance; // 0x30
	TArray SourceProperties; // 0x38
	TArray DestProperties; // 0x48

};


instance 1ab7151e440
struct AnimNode_Inertialization 
{
	// Fields
	PoseLink Source; // 0x10

};


instance 1ab7151e380
struct InertializationPoseDiff 
{
	// Fields

};


instance 1ab7151e2c0
struct InertializationCurveDiff 
{
	// Fields

};


instance 1ab7151e200
struct InertializationBoneDiff 
{
	// Fields

};


instance 1ab7151e140
struct InertializationPose 
{
	// Fields

};


instance 1ab7151e080
struct AnimNode_LinkedAnimGraph 
{
	// Fields
	TArray InputPoses; // 0x58
	TArray InputPoseNames; // 0x68
	AnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80

};


instance 1ab7151dfc0
struct AnimNode_LinkedAnimLayer 
{
	// Fields
	AnimLayerInterface* Interface; // 0x98
	FName Layer; // 0xa0

};


instance 1ab7151df00
struct AnimNode_LinkedInputPose 
{
	// Fields
	FName Name; // 0x10
	FName Graph; // 0x18
	PoseLink InputPose; // 0x20

};


instance 1ab7151ff40
struct AnimNode_SaveCachedPose 
{
	// Fields
	PoseLink Pose; // 0x10
	FName CachePoseName; // 0x20

};


instance 1ab7151fe80
struct AnimNode_SequencePlayer 
{
	// Fields
	AnimSequenceBase* Sequence; // 0x30
	float PlayRateBasis; // 0x38
	float PlayRate; // 0x3c
	InputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40
	float StartPosition; // 0x70
	bool bLoopAnimation; // 0x74

};


instance 1ab7151fdc0
struct AnimNode_StateMachine 
{
	// Fields
	int StateMachineIndexInClass; // 0x10
	int MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19

};


instance 1ab7151fd00
struct AnimationPotentialTransition 
{
	// Fields

};


instance 1ab7151fc40
struct AnimationActiveTransitionEntry 
{
	// Fields
	BlendProfile* BlendProfile; // 0xb8

};


instance 1ab7151fb80
struct AnimNode_TransitionPoseEvaluator 
{
	// Fields
	int FramesToCachePose; // 0x48
	BYTE DataSource; // 0x50
	BYTE EvaluatorMode; // 0x51

};


instance 1ab7151fac0
struct AnimNode_TransitionResult 
{
	// Fields
	bool bCanEnterTransition; // 0x10

};


instance 1ab7151fa00
struct AnimNode_UseCachedPose 
{
	// Fields
	PoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20

};


instance 1ab7151f940
struct ExposedValueHandler 
{
	// Fields
	FName BoundFunction; // 0x0
	TArray CopyRecords; // 0x8
	Function* Function; // 0x18
	StructProperty* ValueHandlerNodeProperty; // 0x20

};


instance 1ab7151f880
struct ExposedValueCopyRecord 
{
	// Fields
	FName SourcePropertyName; // 0x0
	FName SourceSubPropertyName; // 0x8
	int SourceArrayIndex; // 0x10
	bool bInstanceIsTarget; // 0x14
	EPostCopyOperation PostCopyOperation; // 0x15
	ECopyType CopyType; // 0x16
	Property* DestProperty; // 0x18
	int DestArrayIndex; // 0x20
	int Size; // 0x24
	Property* CachedSourceProperty; // 0x28
	Property* CachedSourceStructSubProperty; // 0x30

};


instance 1ab7151f7c0
struct AnimNode_ConvertLocalToComponentSpace 
{
	// Fields
	PoseLink LocalPose; // 0x10

};


instance 1ab71601840
struct AnimNode_ConvertComponentToLocalSpace 
{
	// Fields
	ComponentSpacePoseLink ComponentPose; // 0x10

};


instance 1ab71601780
struct AnimNotifyQueue 
{
	// Fields
	TArray AnimNotifies; // 0x10
	MapProperty UnfilteredMontageAnimNotifies; // 0x20 property 0x1ab711640c0 hash 0xadd0fb88

};


instance 1ab716016c0
struct AnimNotifyArray 
{
	// Fields
	TArray Notifies; // 0x0

};


instance 1ab71601600
struct AnimNotifyEventReference 
{
	// Fields
	Object* NotifySource; // 0x8

};


instance 1ab71601540
struct CompressedTrack 
{
	// Fields
	TArray ByteStream; // 0x0
	TArray Times; // 0x10
	float Mins; // 0x20
	float Ranges; // 0x2c

};


instance 1ab71601480
struct CurveTrack 
{
	// Fields
	FName CurveName; // 0x0
	TArray CurveWeights; // 0x8

};


instance 1ab716013c0
struct ScaleTrack 
{
	// Fields
	TArray ScaleKeys; // 0x0
	TArray Times; // 0x10

};


instance 1ab71601300
struct RotationTrack 
{
	// Fields
	TArray RotKeys; // 0x0
	TArray Times; // 0x10

};


instance 1ab71601240
struct TranslationTrack 
{
	// Fields
	TArray PosKeys; // 0x0
	TArray Times; // 0x10

};


instance 1ab71601180
struct AnimSequenceTrackContainer 
{
	// Fields
	TArray AnimationTracks; // 0x0
	TArray TrackNames; // 0x10

};


instance 1ab716010c0
struct RawAnimSequenceTrack 
{
	// Fields
	TArray PosKeys; // 0x0
	TArray RotKeys; // 0x10
	TArray ScaleKeys; // 0x20

};


instance 1ab71601000
struct AnimSetMeshLinkup 
{
	// Fields
	TArray BoneToTrackTable; // 0x0

};


instance 1ab71600f40
struct AnimSingleNodeInstanceProxy 
{
	// Fields

};


instance 1ab71600e80
struct AnimNode_SingleNode 
{
	// Fields
	PoseLink SourcePose; // 0x10

};


instance 1ab71600dc0
struct BakedAnimationStateMachine 
{
	// Fields
	FName MachineName; // 0x0
	int InitialState; // 0x8
	TArray States; // 0x10
	TArray Transitions; // 0x20

};


instance 1ab71600d00
struct AnimationStateBase 
{
	// Fields
	FName StateName; // 0x0

};


instance 1ab71600c40
struct AnimationTransitionBetweenStates 
{
	// Fields
	int PreviousState; // 0x8
	int NextState; // 0xc
	float CrossfadeDuration; // 0x10
	int StartNotify; // 0x14
	int EndNotify; // 0x18
	int InterruptNotify; // 0x1c
	EAlphaBlendOption BlendMode; // 0x20
	CurveFloat* CustomCurve; // 0x28
	BlendProfile* BlendProfile; // 0x30
	BYTE LogicType; // 0x38

};


instance 1ab71600b80
struct BakedAnimationState 
{
	// Fields
	FName StateName; // 0x0
	TArray Transitions; // 0x8
	int StateRootNodeIndex; // 0x18
	int StartNotify; // 0x1c
	int EndNotify; // 0x20
	int FullyBlendedNotify; // 0x24
	bool bIsAConduit; // 0x28
	int EntryRuleNodeIndex; // 0x2c
	TArray PlayerNodeIndices; // 0x30
	TArray LayerNodeIndices; // 0x40
	bool bAlwaysResetOnEntry; // 0x50

};


instance 1ab71600ac0
struct BakedStateExitTransition 
{
	// Fields
	int CanTakeDelegateIndex; // 0x0
	int CustomResultNodeIndex; // 0x4
	int TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray PoseEvaluatorLinks; // 0x10

};


instance 1ab71600a00
struct AnimationState 
{
	// Fields
	TArray Transitions; // 0x8
	int StateRootNodeIndex; // 0x18
	int StartNotify; // 0x1c
	int EndNotify; // 0x20
	int FullyBlendedNotify; // 0x24

};


instance 1ab71600940
struct AnimationTransitionRule 
{
	// Fields
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int TransitionIndex; // 0xc

};


instance 1ab71600880
struct TrackToSkeletonMap 
{
	// Fields
	int BoneTreeIndex; // 0x0

};


instance 1ab716007c0
struct MarkerSyncData 
{
	// Fields
	TArray AuthoredSyncMarkers; // 0x0

};


instance 1ab71600700
struct AnimSyncMarker 
{
	// Fields
	FName MarkerName; // 0x0
	float Time; // 0x8

};


instance 1ab71600640
struct AnimNotifyTrack 
{
	// Fields
	FName TrackName; // 0x0
	LinearColor TrackColor; // 0x8

};


instance 1ab71600580
struct PerBoneBlendWeights 
{
	// Fields
	TArray BoneBlendWeights; // 0x0

};


instance 1ab716004c0
struct AssetImportInfo 
{
	// Fields

};


instance 1ab71600400
struct PrimaryAssetRulesCustomOverride 
{
	// Fields
	PrimaryAssetType PrimaryAssetType; // 0x0
	DirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	PrimaryAssetRules Rules; // 0x28

};


instance 1ab71600340
struct PrimaryAssetRules 
{
	// Fields
	int Priority; // 0x0
	int ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9

};


instance 1ab71600280
struct PrimaryAssetRulesOverride 
{
	// Fields
	PrimaryAssetId PrimaryAssetId; // 0x0
	PrimaryAssetRules Rules; // 0x10

};


instance 1ab716001c0
struct AssetManagerRedirect 
{
	// Fields
	FString Old; // 0x0
	FString New; // 0x10

};


instance 1ab71600100
struct PrimaryAssetTypeInfo 
{
	// Fields
	FName PrimaryAssetType; // 0x0
	Object* AssetBaseClass; // 0x8
	Object* AssetBaseClassLoaded; // 0x30
	bool bHasBlueprintClasses; // 0x38
	bool bIsEditorOnly; // 0x39
	TArray Directories; // 0x40
	TArray SpecificAssets; // 0x50
	PrimaryAssetRules Rules; // 0x60
	TArray AssetScanPaths; // 0x70
	bool bIsDynamicAsset; // 0x80
	int NumberOfAssets; // 0x84

};


instance 1ab71600040
struct AssetMapping 
{
	// Fields
	AnimationAsset* SourceAsset; // 0x0
	AnimationAsset* TargetAsset; // 0x8

};


instance 1ab71603100
struct AtmospherePrecomputeInstanceData 
{
	// Fields

};


instance 1ab71603040
struct AtmospherePrecomputeParameters 
{
	// Fields
	float DensityHeight; // 0x0
	float DecayHeight; // 0x4
	int MaxScatteringOrder; // 0x8
	int TransmittanceTexWidth; // 0xc
	int TransmittanceTexHeight; // 0x10
	int IrradianceTexWidth; // 0x14
	int IrradianceTexHeight; // 0x18
	int InscatterAltitudeSampleNum; // 0x1c
	int InscatterMuNum; // 0x20
	int InscatterMuSNum; // 0x24
	int InscatterNuNum; // 0x28

};


instance 1ab71602f80
struct BaseAttenuationSettings 
{
	// Fields
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	BYTE AttenuationShape; // 0x9
	float dBAttenuationAtMax; // 0xc
	Vector AttenuationShapeExtents; // 0x10
	float ConeOffset; // 0x1c
	float FalloffDistance; // 0x20
	RuntimeFloatCurve CustomAttenuationCurve; // 0x28

};


instance 1ab71602ec0
struct AudioComponentParam 
{
	// Fields
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int IntParam; // 0x10
	SoundWave* SoundWaveParam; // 0x18

};


instance 1ab71602e00
struct AudioQualitySettings 
{
	// Fields
	FText DisplayName; // 0x0
	int MaxChannels; // 0x18

};


instance 1ab71602d40
struct InteriorSettings 
{
	// Fields
	bool bIsWorldSettings; // 0x0
	float ExteriorVolume; // 0x4
	float ExteriorTime; // 0x8
	float ExteriorLPF; // 0xc
	float ExteriorLPFTime; // 0x10
	float InteriorVolume; // 0x14
	float InteriorTime; // 0x18
	float InteriorLPF; // 0x1c
	float InteriorLPFTime; // 0x20

};


instance 1ab71602c80
struct ReverbSettings 
{
	// Fields
	bool bApplyReverb; // 0x0
	ReverbEffect* ReverbEffect; // 0x8
	SoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c

};


instance 1ab71602bc0
struct LaunchOnTestSettings 
{
	// Fields
	FilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10

};


instance 1ab71602b00
struct FilePath 
{
	// Fields
	FString FilePath; // 0x0

};


instance 1ab71602a40
struct EditorMapPerformanceTestDefinition 
{
	// Fields
	SoftObjectPath PerformanceTestmap; // 0x0
	int TestTimer; // 0x18

};


instance 1ab71602980
struct BuildPromotionTestSettings 
{
	// Fields
	FilePath DefaultStaticMeshAsset; // 0x0
	BuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	BuildPromotionOpenAssetSettings OpenAssets; // 0x160
	BuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FilePath SourceControlMaterial; // 0x1e0

};


instance 1ab716028c0
struct BuildPromotionNewProjectSettings 
{
	// Fields
	DirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10

};


instance 1ab71602800
struct BuildPromotionOpenAssetSettings 
{
	// Fields
	FilePath BlueprintAsset; // 0x0
	FilePath MaterialAsset; // 0x10
	FilePath ParticleSystemAsset; // 0x20
	FilePath SkeletalMeshAsset; // 0x30
	FilePath StaticMeshAsset; // 0x40
	FilePath TextureAsset; // 0x50

};


instance 1ab71602740
struct BuildPromotionImportWorkflowSettings 
{
	// Fields
	EditorImportWorkflowDefinition Diffuse; // 0x0
	EditorImportWorkflowDefinition Normal; // 0x20
	EditorImportWorkflowDefinition StaticMesh; // 0x40
	EditorImportWorkflowDefinition ReimportStaticMesh; // 0x60
	EditorImportWorkflowDefinition BlendShapeMesh; // 0x80
	EditorImportWorkflowDefinition MorphMesh; // 0xa0
	EditorImportWorkflowDefinition SkeletalMesh; // 0xc0
	EditorImportWorkflowDefinition Animation; // 0xe0
	EditorImportWorkflowDefinition Sound; // 0x100
	EditorImportWorkflowDefinition SurroundSound; // 0x120
	TArray OtherAssetsToImport; // 0x140

};


instance 1ab71602680
struct EditorImportWorkflowDefinition 
{
	// Fields
	FilePath ImportFilePath; // 0x0
	TArray FactorySettings; // 0x10

};


instance 1ab716025c0
struct ImportFactorySettingValues 
{
	// Fields
	FString SettingName; // 0x0
	FString Value; // 0x10

};


instance 1ab71602500
struct BlueprintEditorPromotionSettings 
{
	// Fields
	FilePath FirstMeshPath; // 0x0
	FilePath SecondMeshPath; // 0x10
	FilePath DefaultParticleAsset; // 0x20

};


instance 1ab71602440
struct ParticleEditorPromotionSettings 
{
	// Fields
	FilePath DefaultParticleAsset; // 0x0

};


instance 1ab71602380
struct MaterialEditorPromotionSettings 
{
	// Fields
	FilePath DefaultMaterialAsset; // 0x0
	FilePath DefaultDiffuseTexture; // 0x10
	FilePath DefaultNormalTexture; // 0x20

};


instance 1ab716022c0
struct EditorImportExportTestDefinition 
{
	// Fields
	FilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray FactorySettings; // 0x28

};


instance 1ab71602200
struct ExternalToolDefinition 
{
	// Fields
	FString ToolName; // 0x0
	FilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	DirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	DirectoryPath ScriptDirectory; // 0x50

};


instance 1ab71602140
struct NavAvoidanceData 
{
	// Fields

};


instance 1ab71602080
struct BandwidthTestGenerator 
{
	// Fields
	TArray ReplicatedBuffers; // 0x0

};


instance 1ab71601fc0
struct BandwidthTestItem 
{
	// Fields
	TArray Kilobyte; // 0x0

};


instance 1ab71601f00
struct BlendProfileBoneEntry 
{
	// Fields
	BoneReference BoneReference; // 0x0
	float BlendScale; // 0x10

};


instance 1ab71601e40
struct PerBoneInterpolation 
{
	// Fields
	BoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10

};


instance 1ab71601d80
struct GridBlendSample 
{
	// Fields
	EditorElement GridElement; // 0x0
	float BlendWeight; // 0x18

};


instance 1ab71601cc0
struct EditorElement 
{
	// Fields
	int Indices; // 0x0
	float Weights; // 0xc

};


instance 1ab71601c00
struct BlendSample 
{
	// Fields
	AnimSequence* Animation; // 0x0
	Vector SampleValue; // 0x8
	float RateScale; // 0x14

};


instance 1ab71601b40
struct BlendParameter 
{
	// Fields
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int GridNum; // 0x18

};


instance 1ab71601a80
struct InterpolationParameter 
{
	// Fields
	float InterpolationTime; // 0x0
	BYTE InterpolationType; // 0x4

};


instance 1ab716019c0
struct BPEditorBookmarkNode 
{
	// Fields
	Guid NodeGuid; // 0x0
	Guid ParentGuid; // 0x10
	FText DisplayName; // 0x20

};


instance 1ab71601900
struct EditedDocumentInfo 
{
	// Fields
	SoftObjectPath EditedObjectPath; // 0x0
	Vector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	Object* EditedObject; // 0x28

};


instance 1ab716049c0
struct BPInterfaceDescription 
{
	// Fields
	Interface* Interface; // 0x0
	TArray Graphs; // 0x8

};


instance 1ab71604900
struct BPVariableDescription 
{
	// Fields
	FName VarName; // 0x0
	Guid VarGuid; // 0x8
	EdGraphPinType VarType; // 0x18
	FString FriendlyName; // 0x70
	FText Category; // 0x80
	ULONG64 PropertyFlags; // 0x98
	FName RepNotifyFunc; // 0xa0
	BYTE ReplicationCondition; // 0xa8
	TArray MetaDataArray; // 0xb0
	FString DefaultValue; // 0xc0

};


instance 1ab71604840
struct BPVariableMetaDataEntry 
{
	// Fields
	FName DataKey; // 0x0
	FString DataValue; // 0x8

};


instance 1ab71604780
struct EdGraphPinType 
{
	// Fields
	FName PinCategory; // 0x0
	FName PinSubCategory; // 0x8
	WeakObjectProperty PinSubCategoryObject; // 0x10 property 0x1ab715f6580 hash 0x24388009
	SimpleMemberReference PinSubCategoryMemberReference; // 0x18
	EdGraphTerminalType PinValueType; // 0x38
	EPinContainerType ContainerType; // 0x54
	bool bIsArray; // 0x55
	bool bIsReference; // 0x55
	bool bIsConst; // 0x55
	bool bIsWeakPointer; // 0x55

};


instance 1ab716046c0
struct EdGraphTerminalType 
{
	// Fields
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	WeakObjectProperty TerminalSubCategoryObject; // 0x10 property 0x1ab715f6680 hash 0x24388009
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19

};


instance 1ab71604600
struct BlueprintMacroCosmeticInfo 
{
	// Fields

};


instance 1ab71604540
struct CompilerNativizationOptions 
{
	// Fields
	FName PlatformName; // 0x0
	bool ServerOnlyPlatform; // 0x8
	bool ClientOnlyPlatform; // 0x9
	bool bExcludeMonolithicHeaders; // 0xa
	TArray ExcludedModules; // 0x10
	SetProperty ExcludedAssets; // 0x20 property 0x1ab71164020 hash 0xb0194396
	TArray ExcludedFolderPaths; // 0x70

};


instance 1ab71604480
struct BPComponentClassOverride 
{
	// Fields
	FName ComponentName; // 0x0
	Object* ComponentClass; // 0x8

};


instance 1ab716043c0
struct BlueprintCookedComponentInstancingData 
{
	// Fields
	TArray ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21

};


instance 1ab71604300
struct BlueprintComponentChangedPropertyInfo 
{
	// Fields
	FName PropertyName; // 0x0
	int ArrayIndex; // 0x8
	Struct* PropertyScope; // 0x10

};


instance 1ab71604240
struct EventGraphFastCallPair 
{
	// Fields
	Function* FunctionToPatch; // 0x0
	int EventGraphCallOffset; // 0x8

};


instance 1ab71604180
struct BlueprintDebugData 
{
	// Fields

};


instance 1ab716040c0
struct PointerToUberGraphFrame 
{
	// Fields

};


instance 1ab71604000
struct DebuggingInfoForSingleFunction 
{
	// Fields

};


instance 1ab71603f40
struct NodeToCodeAssociation 
{
	// Fields

};


instance 1ab71603e80
struct AnimCurveType 
{
	// Fields

};


instance 1ab71603dc0
struct BookmarkBaseJumpToSettings 
{
	// Fields

};


instance 1ab71603d00
struct BookmarkJumpToSettings 
{
	// Fields

};


instance 1ab71603c40
struct Bookmark2DJumpToSettings 
{
	// Fields

};


instance 1ab71603b80
struct GeomSelection 
{
	// Fields
	int Type; // 0x0
	int Index; // 0x4
	int SelectionIndex; // 0x8

};


instance 1ab71603ac0
struct BuilderPoly 
{
	// Fields
	TArray VertexIndices; // 0x0
	int Direction; // 0x10
	FName ItemName; // 0x14
	int PolyFlags; // 0x1c

};


instance 1ab71603a00
struct CachedAnimTransitionData 
{
	// Fields
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10

};


instance 1ab71603940
struct CachedAnimRelevancyData 
{
	// Fields
	FName StateMachineName; // 0x0
	FName StateName; // 0x8

};


instance 1ab71603880
struct CachedAnimAssetPlayerData 
{
	// Fields
	FName StateMachineName; // 0x0
	FName StateName; // 0x8

};


instance 1ab716037c0
struct CachedAnimStateArray 
{
	// Fields
	TArray States; // 0x0

};


instance 1ab71603700
struct CachedAnimStateData 
{
	// Fields
	FName StateMachineName; // 0x0
	FName StateName; // 0x8

};


instance 1ab71603640
struct PooledCameraShakes 
{
	// Fields
	TArray PooledShakes; // 0x0

};


instance 1ab71603580
struct VOscillator 
{
	// Fields
	FOscillator X; // 0x0
	FOscillator Y; // 0xc
	FOscillator Z; // 0x18

};


instance 1ab716034c0
struct FOscillator 
{
	// Fields
	float Amplitude; // 0x0
	float Frequency; // 0x4
	BYTE InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9

};


instance 1ab71603400
struct ROscillator 
{
	// Fields
	FOscillator Pitch; // 0x0
	FOscillator Yaw; // 0xc
	FOscillator Roll; // 0x18

};


instance 1ab71603340
struct DummySpacerCameraTypes 
{
	// Fields

};


instance 1ab71603280
struct MinimalViewInfo 
{
	// Fields
	Vector Location; // 0x0
	Rotator Rotation; // 0xc
	float FOV; // 0x18
	float DesiredFOV; // 0x1c
	float OrthoWidth; // 0x20
	float OrthoNearClipPlane; // 0x24
	float OrthoFarClipPlane; // 0x28
	float AspectRatio; // 0x2c
	bool bConstrainAspectRatio; // 0x30
	bool bUseFieldOfViewForLOD; // 0x30
	BYTE ProjectionMode; // 0x34
	float PostProcessBlendWeight; // 0x38
	PostProcessSettings PostProcessSettings; // 0x40
	Vector2D OffCenterProjectionOffset; // 0x570

};


instance 1ab716031c0
struct PostProcessSettings 
{
	// Fields
	bool bOverride_WhiteTemp; // 0x0
	bool bOverride_WhiteTint; // 0x0
	bool bOverride_ColorSaturation; // 0x0
	bool bOverride_ColorContrast; // 0x0
	bool bOverride_ColorGamma; // 0x0
	bool bOverride_ColorGain; // 0x0
	bool bOverride_ColorOffset; // 0x0
	bool bOverride_ColorSaturationShadows; // 0x0
	bool bOverride_ColorContrastShadows; // 0x1
	bool bOverride_ColorGammaShadows; // 0x1
	bool bOverride_ColorGainShadows; // 0x1
	bool bOverride_ColorOffsetShadows; // 0x1
	bool bOverride_ColorSaturationMidtones; // 0x1
	bool bOverride_ColorContrastMidtones; // 0x1
	bool bOverride_ColorGammaMidtones; // 0x1
	bool bOverride_ColorGainMidtones; // 0x1
	bool bOverride_ColorOffsetMidtones; // 0x2
	bool bOverride_ColorSaturationHighlights; // 0x2
	bool bOverride_ColorContrastHighlights; // 0x2
	bool bOverride_ColorGammaHighlights; // 0x2
	bool bOverride_ColorGainHighlights; // 0x2
	bool bOverride_ColorOffsetHighlights; // 0x2
	bool bOverride_ColorCorrectionShadowsMax; // 0x2
	bool bOverride_ColorCorrectionHighlightsMin; // 0x2
	bool bOverride_BlueCorrection; // 0x3
	bool bOverride_ExpandGamut; // 0x3
	bool bOverride_FilmWhitePoint; // 0x3
	bool bOverride_FilmSaturation; // 0x3
	bool bOverride_FilmChannelMixerRed; // 0x3
	bool bOverride_FilmChannelMixerGreen; // 0x3
	bool bOverride_FilmChannelMixerBlue; // 0x3
	bool bOverride_FilmContrast; // 0x3
	bool bOverride_FilmDynamicRange; // 0x4
	bool bOverride_FilmHealAmount; // 0x4
	bool bOverride_FilmToeAmount; // 0x4
	bool bOverride_FilmShadowTint; // 0x4
	bool bOverride_FilmShadowTintBlend; // 0x4
	bool bOverride_FilmShadowTintAmount; // 0x4
	bool bOverride_FilmSlope; // 0x4
	bool bOverride_FilmToe; // 0x4
	bool bOverride_FilmShoulder; // 0x5
	bool bOverride_FilmBlackClip; // 0x5
	bool bOverride_FilmWhiteClip; // 0x5
	bool bOverride_SceneColorTint; // 0x5
	bool bOverride_SceneFringeIntensity; // 0x5
	bool bOverride_ChromaticAberrationStartOffset; // 0x5
	bool bOverride_AmbientCubemapTint; // 0x5
	bool bOverride_AmbientCubemapIntensity; // 0x5
	bool bOverride_BloomMethod; // 0x6
	bool bOverride_BloomIntensity; // 0x6
	bool bOverride_BloomThreshold; // 0x6
	bool bOverride_Bloom1Tint; // 0x6
	bool bOverride_Bloom1Size; // 0x6
	bool bOverride_Bloom2Size; // 0x6
	bool bOverride_Bloom2Tint; // 0x6
	bool bOverride_Bloom3Tint; // 0x6
	bool bOverride_Bloom3Size; // 0x7
	bool bOverride_Bloom4Tint; // 0x7
	bool bOverride_Bloom4Size; // 0x7
	bool bOverride_Bloom5Tint; // 0x7
	bool bOverride_Bloom5Size; // 0x7
	bool bOverride_Bloom6Tint; // 0x7
	bool bOverride_Bloom6Size; // 0x7
	bool bOverride_BloomSizeScale; // 0x7
	bool bOverride_BloomConvolutionTexture; // 0x8
	bool bOverride_BloomConvolutionSize; // 0x8
	bool bOverride_BloomConvolutionCenterUV; // 0x8
	bool bOverride_BloomConvolutionPreFilter; // 0x8
	bool bOverride_BloomConvolutionPreFilterMin; // 0x8
	bool bOverride_BloomConvolutionPreFilterMax; // 0x8
	bool bOverride_BloomConvolutionPreFilterMult; // 0x8
	bool bOverride_BloomConvolutionBufferScale; // 0x8
	bool bOverride_BloomDirtMaskIntensity; // 0x9
	bool bOverride_BloomDirtMaskTint; // 0x9
	bool bOverride_BloomDirtMask; // 0x9
	bool bOverride_CameraShutterSpeed; // 0x9
	bool bOverride_CameraISO; // 0x9
	bool bOverride_AutoExposureMethod; // 0x9
	bool bOverride_AutoExposureLowPercent; // 0x9
	bool bOverride_AutoExposureHighPercent; // 0x9
	bool bOverride_AutoExposureMinBrightness; // 0xa
	bool bOverride_AutoExposureMaxBrightness; // 0xa
	bool bOverride_AutoExposureCalibrationConstant; // 0xa
	bool bOverride_AutoExposureSpeedUp; // 0xa
	bool bOverride_AutoExposureSpeedDown; // 0xa
	bool bOverride_AutoExposureBias; // 0xa
	bool bOverride_AutoExposureBiasCurve; // 0xa
	bool bOverride_HistogramLogMin; // 0xa
	bool bOverride_HistogramLogMax; // 0xb
	bool bOverride_LensFlareIntensity; // 0xb
	bool bOverride_LensFlareTint; // 0xb
	bool bOverride_LensFlareTints; // 0xb
	bool bOverride_LensFlareBokehSize; // 0xb
	bool bOverride_LensFlareBokehShape; // 0xb
	bool bOverride_LensFlareThreshold; // 0xb
	bool bOverride_VignetteIntensity; // 0xb
	bool bOverride_GrainIntensity; // 0xc
	bool bOverride_GrainJitter; // 0xc
	bool bOverride_AmbientOcclusionIntensity; // 0xc
	bool bOverride_AmbientOcclusionStaticFraction; // 0xc
	bool bOverride_AmbientOcclusionRadius; // 0xc
	bool bOverride_AmbientOcclusionFadeDistance; // 0xc
	bool bOverride_AmbientOcclusionFadeRadius; // 0xc
	bool bOverride_AmbientOcclusionDistance; // 0xc
	bool bOverride_AmbientOcclusionRadiusInWS; // 0xd
	bool bOverride_AmbientOcclusionPower; // 0xd
	bool bOverride_AmbientOcclusionBias; // 0xd
	bool bOverride_AmbientOcclusionQuality; // 0xd
	bool bOverride_AmbientOcclusionMipBlend; // 0xd
	bool bOverride_AmbientOcclusionMipScale; // 0xd
	bool bOverride_AmbientOcclusionMipThreshold; // 0xd
	bool bOverride_RayTracingAO; // 0x10
	bool bOverride_RayTracingAOSamplesPerPixel; // 0x10
	bool bOverride_LPVIntensity; // 0x14
	bool bOverride_LPVDirectionalOcclusionIntensity; // 0x14
	bool bOverride_LPVDirectionalOcclusionRadius; // 0x14
	bool bOverride_LPVDiffuseOcclusionExponent; // 0x14
	bool bOverride_LPVSpecularOcclusionExponent; // 0x14
	bool bOverride_LPVDiffuseOcclusionIntensity; // 0x14
	bool bOverride_LPVSpecularOcclusionIntensity; // 0x14
	bool bOverride_LPVSize; // 0x14
	bool bOverride_LPVSecondaryOcclusionIntensity; // 0x15
	bool bOverride_LPVSecondaryBounceIntensity; // 0x15
	bool bOverride_LPVGeometryVolumeBias; // 0x15
	bool bOverride_LPVVplInjectionBias; // 0x15
	bool bOverride_LPVEmissiveInjectionIntensity; // 0x15
	bool bOverride_LPVFadeRange; // 0x15
	bool bOverride_LPVDirectionalOcclusionFadeRange; // 0x15
	bool bOverride_IndirectLightingColor; // 0x15
	bool bOverride_IndirectLightingIntensity; // 0x16
	bool bOverride_ColorGradingIntensity; // 0x16
	bool bOverride_ColorGradingLUT; // 0x16
	bool bOverride_DepthOfFieldFocalDistance; // 0x16
	bool bOverride_DepthOfFieldFstop; // 0x16
	bool bOverride_DepthOfFieldMinFstop; // 0x16
	bool bOverride_DepthOfFieldBladeCount; // 0x16
	bool bOverride_DepthOfFieldSensorWidth; // 0x16
	bool bOverride_DepthOfFieldDepthBlurRadius; // 0x17
	bool bOverride_DepthOfFieldDepthBlurAmount; // 0x17
	bool bOverride_DepthOfFieldFocalRegion; // 0x17
	bool bOverride_DepthOfFieldNearTransitionRegion; // 0x17
	bool bOverride_DepthOfFieldFarTransitionRegion; // 0x17
	bool bOverride_DepthOfFieldScale; // 0x17
	bool bOverride_DepthOfFieldNearBlurSize; // 0x17
	bool bOverride_DepthOfFieldFarBlurSize; // 0x17
	bool bOverride_MobileHQGaussian; // 0x18
	bool bOverride_DepthOfFieldOcclusion; // 0x18
	bool bOverride_DepthOfFieldSkyFocusDistance; // 0x18
	bool bOverride_DepthOfFieldVignetteSize; // 0x18
	bool bOverride_MotionBlurAmount; // 0x18
	bool bOverride_MotionBlurMax; // 0x18
	bool bOverride_MotionBlurTargetFPS; // 0x18
	bool bOverride_MotionBlurPerObjectSize; // 0x18
	bool bOverride_ScreenPercentage; // 0x19
	bool bOverride_ScreenSpaceReflectionIntensity; // 0x19
	bool bOverride_ScreenSpaceReflectionQuality; // 0x19
	bool bOverride_ScreenSpaceReflectionMaxRoughness; // 0x19
	bool bOverride_ScreenSpaceReflectionRoughnessScale; // 0x19
	bool bOverride_ReflectionsType; // 0x1c
	bool bOverride_RayTracingReflectionsMaxRoughness; // 0x1c
	bool bOverride_RayTracingReflectionsMaxBounces; // 0x1c
	bool bOverride_RayTracingReflectionsSamplesPerPixel; // 0x1c
	bool bOverride_RayTracingReflectionsShadows; // 0x1c
	bool bOverride_RayTracingReflectionsTranslucency; // 0x1c
	bool bOverride_TranslucencyType; // 0x1c
	bool bOverride_RayTracingTranslucencyMaxRoughness; // 0x1c
	bool bOverride_RayTracingTranslucencyRefractionRays; // 0x1d
	bool bOverride_RayTracingTranslucencySamplesPerPixel; // 0x1d
	bool bOverride_RayTracingTranslucencyShadows; // 0x1d
	bool bOverride_RayTracingTranslucencyRefraction; // 0x1d
	bool bOverride_RayTracingGI; // 0x1d
	bool bOverride_RayTracingGIMaxBounces; // 0x1d
	bool bOverride_RayTracingGISamplesPerPixel; // 0x1d
	bool bOverride_PathTracingMaxBounces; // 0x1d
	bool bOverride_PathTracingSamplesPerPixel; // 0x1e
	bool bMobileHQGaussian; // 0x20
	BYTE BloomMethod; // 0x21
	BYTE AutoExposureMethod; // 0x22
	float WhiteTemp; // 0x24
	float WhiteTint; // 0x28
	Vector4 ColorSaturation; // 0x30
	Vector4 ColorContrast; // 0x40
	Vector4 ColorGamma; // 0x50
	Vector4 ColorGain; // 0x60
	Vector4 ColorOffset; // 0x70
	Vector4 ColorSaturationShadows; // 0x80
	Vector4 ColorContrastShadows; // 0x90
	Vector4 ColorGammaShadows; // 0xa0
	Vector4 ColorGainShadows; // 0xb0
	Vector4 ColorOffsetShadows; // 0xc0
	Vector4 ColorSaturationMidtones; // 0xd0
	Vector4 ColorContrastMidtones; // 0xe0
	Vector4 ColorGammaMidtones; // 0xf0
	Vector4 ColorGainMidtones; // 0x100
	Vector4 ColorOffsetMidtones; // 0x110
	Vector4 ColorSaturationHighlights; // 0x120
	Vector4 ColorContrastHighlights; // 0x130
	Vector4 ColorGammaHighlights; // 0x140
	Vector4 ColorGainHighlights; // 0x150
	Vector4 ColorOffsetHighlights; // 0x160
	float ColorCorrectionHighlightsMin; // 0x170
	float ColorCorrectionShadowsMax; // 0x174
	float BlueCorrection; // 0x178
	float ExpandGamut; // 0x17c
	float FilmSlope; // 0x180
	float FilmToe; // 0x184
	float FilmShoulder; // 0x188
	float FilmBlackClip; // 0x18c
	float FilmWhiteClip; // 0x190
	LinearColor FilmWhitePoint; // 0x194
	LinearColor FilmShadowTint; // 0x1a4
	float FilmShadowTintBlend; // 0x1b4
	float FilmShadowTintAmount; // 0x1b8
	float FilmSaturation; // 0x1bc
	LinearColor FilmChannelMixerRed; // 0x1c0
	LinearColor FilmChannelMixerGreen; // 0x1d0
	LinearColor FilmChannelMixerBlue; // 0x1e0
	float FilmContrast; // 0x1f0
	float FilmToeAmount; // 0x1f4
	float FilmHealAmount; // 0x1f8
	float FilmDynamicRange; // 0x1fc
	LinearColor SceneColorTint; // 0x200
	float SceneFringeIntensity; // 0x210
	float ChromaticAberrationStartOffset; // 0x214
	float BloomIntensity; // 0x218
	float BloomThreshold; // 0x21c
	float BloomSizeScale; // 0x220
	float Bloom1Size; // 0x224
	float Bloom2Size; // 0x228
	float Bloom3Size; // 0x22c
	float Bloom4Size; // 0x230
	float Bloom5Size; // 0x234
	float Bloom6Size; // 0x238
	LinearColor Bloom1Tint; // 0x23c
	LinearColor Bloom2Tint; // 0x24c
	LinearColor Bloom3Tint; // 0x25c
	LinearColor Bloom4Tint; // 0x26c
	LinearColor Bloom5Tint; // 0x27c
	LinearColor Bloom6Tint; // 0x28c
	float BloomConvolutionSize; // 0x29c
	Texture2D* BloomConvolutionTexture; // 0x2a0
	Vector2D BloomConvolutionCenterUV; // 0x2a8
	float BloomConvolutionPreFilterMin; // 0x2b0
	float BloomConvolutionPreFilterMax; // 0x2b4
	float BloomConvolutionPreFilterMult; // 0x2b8
	float BloomConvolutionBufferScale; // 0x2bc
	Texture* BloomDirtMask; // 0x2c0
	float BloomDirtMaskIntensity; // 0x2c8
	LinearColor BloomDirtMaskTint; // 0x2cc
	LinearColor AmbientCubemapTint; // 0x2dc
	float AmbientCubemapIntensity; // 0x2ec
	TextureCube* AmbientCubemap; // 0x2f0
	float CameraShutterSpeed; // 0x2f8
	float CameraISO; // 0x2fc
	float DepthOfFieldFstop; // 0x300
	float DepthOfFieldMinFstop; // 0x304
	int DepthOfFieldBladeCount; // 0x308
	float AutoExposureBias; // 0x30c
	CurveFloat* AutoExposureBiasCurve; // 0x310
	float AutoExposureLowPercent; // 0x318
	float AutoExposureHighPercent; // 0x31c
	float AutoExposureMinBrightness; // 0x320
	float AutoExposureMaxBrightness; // 0x324
	float AutoExposureSpeedUp; // 0x328
	float AutoExposureSpeedDown; // 0x32c
	float HistogramLogMin; // 0x330
	float HistogramLogMax; // 0x334
	float AutoExposureCalibrationConstant; // 0x338
	float LensFlareIntensity; // 0x33c
	LinearColor LensFlareTint; // 0x340
	float LensFlareBokehSize; // 0x350
	float LensFlareThreshold; // 0x354
	Texture* LensFlareBokehShape; // 0x358
	LinearColor LensFlareTints; // 0x360
	float VignetteIntensity; // 0x3e0
	float GrainJitter; // 0x3e4
	float GrainIntensity; // 0x3e8
	float AmbientOcclusionIntensity; // 0x3ec
	float AmbientOcclusionStaticFraction; // 0x3f0
	float AmbientOcclusionRadius; // 0x3f4
	bool AmbientOcclusionRadiusInWS; // 0x3f8
	float AmbientOcclusionFadeDistance; // 0x3fc
	float AmbientOcclusionFadeRadius; // 0x400
	float AmbientOcclusionDistance; // 0x404
	float AmbientOcclusionPower; // 0x408
	float AmbientOcclusionBias; // 0x40c
	float AmbientOcclusionQuality; // 0x410
	float AmbientOcclusionMipBlend; // 0x414
	float AmbientOcclusionMipScale; // 0x418
	float AmbientOcclusionMipThreshold; // 0x41c
	bool RayTracingAO; // 0x420
	int RayTracingAOSamplesPerPixel; // 0x424
	LinearColor IndirectLightingColor; // 0x428
	float IndirectLightingIntensity; // 0x438
	ERayTracingGlobalIlluminationType RayTracingGIType; // 0x43c
	int RayTracingGIMaxBounces; // 0x440
	int RayTracingGISamplesPerPixel; // 0x444
	float ColorGradingIntensity; // 0x448
	Texture* ColorGradingLUT; // 0x450
	float DepthOfFieldSensorWidth; // 0x458
	float DepthOfFieldFocalDistance; // 0x45c
	float DepthOfFieldDepthBlurAmount; // 0x460
	float DepthOfFieldDepthBlurRadius; // 0x464
	float DepthOfFieldFocalRegion; // 0x468
	float DepthOfFieldNearTransitionRegion; // 0x46c
	float DepthOfFieldFarTransitionRegion; // 0x470
	float DepthOfFieldScale; // 0x474
	float DepthOfFieldNearBlurSize; // 0x478
	float DepthOfFieldFarBlurSize; // 0x47c
	float DepthOfFieldOcclusion; // 0x480
	float DepthOfFieldSkyFocusDistance; // 0x484
	float DepthOfFieldVignetteSize; // 0x488
	float MotionBlurAmount; // 0x48c
	float MotionBlurMax; // 0x490
	int MotionBlurTargetFPS; // 0x494
	float MotionBlurPerObjectSize; // 0x498
	float LPVIntensity; // 0x49c
	float LPVVplInjectionBias; // 0x4a0
	float LPVSize; // 0x4a4
	float LPVSecondaryOcclusionIntensity; // 0x4a8
	float LPVSecondaryBounceIntensity; // 0x4ac
	float LPVGeometryVolumeBias; // 0x4b0
	float LPVEmissiveInjectionIntensity; // 0x4b4
	float LPVDirectionalOcclusionIntensity; // 0x4b8
	float LPVDirectionalOcclusionRadius; // 0x4bc
	float LPVDiffuseOcclusionExponent; // 0x4c0
	float LPVSpecularOcclusionExponent; // 0x4c4
	float LPVDiffuseOcclusionIntensity; // 0x4c8
	float LPVSpecularOcclusionIntensity; // 0x4cc
	EReflectionsType ReflectionsType; // 0x4d0
	float ScreenSpaceReflectionIntensity; // 0x4d4
	float ScreenSpaceReflectionQuality; // 0x4d8
	float ScreenSpaceReflectionMaxRoughness; // 0x4dc
	float RayTracingReflectionsMaxRoughness; // 0x4e0
	int RayTracingReflectionsMaxBounces; // 0x4e4
	int RayTracingReflectionsSamplesPerPixel; // 0x4e8
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x4ec
	bool RayTracingReflectionsTranslucency; // 0x4ed
	ETranslucencyType TranslucencyType; // 0x4ee
	float RayTracingTranslucencyMaxRoughness; // 0x4f0
	int RayTracingTranslucencyRefractionRays; // 0x4f4
	int RayTracingTranslucencySamplesPerPixel; // 0x4f8
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x4fc
	bool RayTracingTranslucencyRefraction; // 0x4fd
	int PathTracingMaxBounces; // 0x500
	int PathTracingSamplesPerPixel; // 0x504
	float LPVFadeRange; // 0x508
	float LPVDirectionalOcclusionFadeRange; // 0x50c
	float ScreenPercentage; // 0x510
	WeightedBlendables WeightedBlendables; // 0x518

};


instance 1ab71606280
struct WeightedBlendables 
{
	// Fields
	TArray Array; // 0x0

};


instance 1ab716061c0
struct WeightedBlendable 
{
	// Fields
	float Weight; // 0x0
	Object* Object; // 0x8

};


instance 1ab71606100
struct CanvasIcon 
{
	// Fields
	Texture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14

};


instance 1ab71606040
struct WrappedStringElement 
{
	// Fields
	FString Value; // 0x0
	Vector2D LineExtent; // 0x10

};


instance 1ab71605f80
struct TextSizingParameters 
{
	// Fields
	float DrawX; // 0x0
	float DrawY; // 0x4
	float DrawXL; // 0x8
	float DrawYL; // 0xc
	Vector2D Scaling; // 0x10
	Font* DrawFont; // 0x18
	Vector2D SpacingAdjust; // 0x20

};


instance 1ab71605ec0
struct BasedMovementInfo 
{
	// Fields
	PrimitiveComponent* MovementBase; // 0x0
	FName BoneName; // 0x8
	Vector_NetQuantize100 Location; // 0x10
	Rotator Rotation; // 0x1c
	bool bServerHasBaseComponent; // 0x28
	bool bRelativeRotation; // 0x29
	bool bServerHasVelocity; // 0x2a

};


instance 1ab71605e00
struct SimulatedRootMotionReplicatedMove 
{
	// Fields
	float Time; // 0x0
	RepRootMotionMontage RootMotion; // 0x8

};


instance 1ab71605d40
struct RepRootMotionMontage 
{
	// Fields
	bool bIsActive; // 0x0
	AnimMontage* AnimMontage; // 0x8
	float Position; // 0x10
	Vector_NetQuantize100 Location; // 0x14
	Rotator Rotation; // 0x20
	PrimitiveComponent* MovementBase; // 0x30
	FName MovementBaseBoneName; // 0x38
	bool bRelativePosition; // 0x40
	bool bRelativeRotation; // 0x41
	RootMotionSourceGroup AuthoritativeRootMotion; // 0x48
	Vector_NetQuantize10 Acceleration; // 0x140
	Vector_NetQuantize10 LinearVelocity; // 0x14c

};


instance 1ab71605c80
struct Vector_NetQuantize10 
{
	// Fields

};


instance 1ab71605bc0
struct RootMotionSourceGroup 
{
	// Fields
	bool bHasAdditiveSources; // 0xe8
	bool bHasOverrideSources; // 0xe8
	bool bIsAdditiveVelocityApplied; // 0xe8
	RootMotionSourceSettings LastAccumulatedSettings; // 0xe9
	Vector_NetQuantize10 LastPreAdditiveVelocity; // 0xec

};


instance 1ab71605b00
struct RootMotionSourceSettings 
{
	// Fields
	BYTE Flags; // 0x0

};


instance 1ab71605a40
struct CharacterMovementComponentPostPhysicsTickFunction 
{
	// Fields

};


instance 1ab71605980
struct FindFloorResult 
{
	// Fields
	bool bBlockingHit; // 0x0
	bool bWalkableFloor; // 0x0
	bool bLineTrace; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	HitResult HitResult; // 0xc

};


instance 1ab716058c0
struct ChildActorComponentInstanceData 
{
	// Fields
	FName ChildActorName; // 0xa8
	TArray AttachedActors; // 0xb0

};


instance 1ab71605800
struct ChildActorAttachedActorInfo 
{
	// Fields
	WeakObjectProperty Actor; // 0x0 property 0x1ab716a0400 hash 0x24388009
	FName SocketName; // 0x8
	Transform RelativeTransform; // 0x10

};


instance 1ab71605740
struct CustomProfile 
{
	// Fields
	FName Name; // 0x0
	TArray CustomResponses; // 0x8

};


instance 1ab71605680
struct CustomChannelSetup 
{
	// Fields
	BYTE Channel; // 0x0
	BYTE DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4

};


instance 1ab716055c0
struct CollisionResponseTemplate 
{
	// Fields
	FName Name; // 0x0
	BYTE CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray CustomResponses; // 0x38

};


instance 1ab71605500
struct BlueprintComponentDelegateBinding 
{
	// Fields
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10

};


instance 1ab71605440
struct MeshUVChannelInfo 
{
	// Fields
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities; // 0x4

};


instance 1ab71605380
struct AutoCompleteNode 
{
	// Fields
	int IndexChar; // 0x0
	TArray AutoCompleteListIndices; // 0x8

};


instance 1ab716052c0
struct AngularDriveConstraint 
{
	// Fields
	ConstraintDrive TwistDrive; // 0x0
	ConstraintDrive SwingDrive; // 0x10
	ConstraintDrive SlerpDrive; // 0x20
	Rotator OrientationTarget; // 0x30
	Vector AngularVelocityTarget; // 0x3c
	BYTE AngularDriveMode; // 0x48

};


instance 1ab71605200
struct ConstraintDrive 
{
	// Fields
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	bool bEnablePositionDrive; // 0xc
	bool bEnableVelocityDrive; // 0xc

};


instance 1ab71605140
struct LinearDriveConstraint 
{
	// Fields
	Vector PositionTarget; // 0x0
	Vector VelocityTarget; // 0xc
	ConstraintDrive XDrive; // 0x18
	ConstraintDrive YDrive; // 0x28
	ConstraintDrive ZDrive; // 0x38
	bool bEnablePositionDrive; // 0x48

};


instance 1ab71605080
struct ConstraintInstance 
{
	// Fields
	FName JointName; // 0x18
	FName ConstraintBone1; // 0x20
	FName ConstraintBone2; // 0x28
	Vector Pos1; // 0x30
	Vector PriAxis1; // 0x3c
	Vector SecAxis1; // 0x48
	Vector Pos2; // 0x54
	Vector PriAxis2; // 0x60
	Vector SecAxis2; // 0x6c
	Rotator AngularRotationOffset; // 0x78
	bool bScaleLinearLimits; // 0x84
	ConstraintProfileProperties ProfileInstance; // 0x8c

};


instance 1ab71604fc0
struct ConstraintProfileProperties 
{
	// Fields
	float ProjectionLinearTolerance; // 0x0
	float ProjectionAngularTolerance; // 0x4
	float LinearBreakThreshold; // 0x8
	float AngularBreakThreshold; // 0xc
	LinearConstraint LinearLimit; // 0x10
	ConeConstraint ConeLimit; // 0x2c
	TwistConstraint TwistLimit; // 0x4c
	LinearDriveConstraint LinearDrive; // 0x68
	AngularDriveConstraint AngularDrive; // 0xb4
	bool bDisableCollision; // 0x100
	bool bParentDominates; // 0x100
	bool bEnableProjection; // 0x100
	bool bAngularBreakable; // 0x100
	bool bLinearBreakable; // 0x100

};


instance 1ab71604f00
struct ConstraintBaseParams 
{
	// Fields
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	bool bSoftConstraint; // 0x10

};


instance 1ab71604e40
struct TwistConstraint 
{
	// Fields
	float TwistLimitDegrees; // 0x14
	BYTE TwistMotion; // 0x18

};


instance 1ab71604d80
struct ConeConstraint 
{
	// Fields
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	BYTE Swing1Motion; // 0x1c
	BYTE Swing2Motion; // 0x1d

};


instance 1ab71604cc0
struct LinearConstraint 
{
	// Fields
	float Limit; // 0x14
	BYTE XMotion; // 0x18
	BYTE YMotion; // 0x19
	BYTE ZMotion; // 0x1a

};


instance 1ab71604c00
struct CullDistanceSizePair 
{
	// Fields
	float Size; // 0x0
	float CullDistance; // 0x4

};


instance 1ab71604b40
struct RuntimeCurveLinearColor 
{
	// Fields
	RichCurve ColorCurves; // 0x0
	CurveLinearColor* ExternalCurve; // 0x200

};


instance 1ab71604a80
struct NamedCurveValue 
{
	// Fields
	FName Name; // 0x0
	float Value; // 0x8

};


instance 1ab71607b40
struct CurveTableRowHandle 
{
	// Fields
	CurveTable* CurveTable; // 0x0
	FName RowName; // 0x8

};


instance 1ab71607a80
struct DataTableCategoryHandle 
{
	// Fields
	DataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10

};


instance 1ab716079c0
struct DataTableRowHandle 
{
	// Fields
	DataTable* DataTable; // 0x0
	FName RowName; // 0x8

};


instance 1ab71607900
struct DebugCameraControllerSettingsViewModeIndex 
{
	// Fields
	BYTE ViewModeIndex; // 0x8

};


instance 1ab71607840
struct DebugDisplayProperty 
{
	// Fields
	Object* Obj; // 0x0
	Object* WithinClass; // 0x8

};


instance 1ab71607780
struct DebugTextInfo 
{
	// Fields
	Actor* SrcActor; // 0x0
	Vector SrcActorOffset; // 0x8
	Vector SrcActorDesiredOffset; // 0x14
	FString DebugText; // 0x20
	float TimeRemaining; // 0x30
	float Duration; // 0x34
	Color TextColor; // 0x38
	bool bAbsoluteLocation; // 0x3c
	bool bKeepAttachedToActor; // 0x3c
	bool bDrawShadow; // 0x3c
	Vector OrigActorLocation; // 0x40
	Font* Font; // 0x50
	float FontScale; // 0x58

};


instance 1ab716076c0
struct MulticastRecordOptions 
{
	// Fields
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11

};


instance 1ab71607600
struct RollbackNetStartupActorInfo 
{
	// Fields
	Object* Archetype; // 0x8
	Level* Level; // 0x28
	TArray ObjReferences; // 0x90

};


instance 1ab71607540
struct LevelNameAndTime 
{
	// Fields
	FString LevelName; // 0x0
	int LevelChangeTimeInMS; // 0x10

};


instance 1ab71607480
struct DialogueWaveParameter 
{
	// Fields
	DialogueWave* DialogueWave; // 0x0
	DialogueContext Context; // 0x8

};


instance 1ab716073c0
struct DialogueContext 
{
	// Fields
	DialogueVoice* Speaker; // 0x0
	TArray Targets; // 0x8

};


instance 1ab71607300
struct DialogueContextMapping 
{
	// Fields
	DialogueContext Context; // 0x0
	SoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	DialogueSoundWaveProxy* Proxy; // 0x30

};


instance 1ab71607240
struct RawDistributionFloat 
{
	// Fields
	float MinValue; // 0x20
	float MaxValue; // 0x24
	DistributionFloat* Distribution; // 0x28

};


instance 1ab71607180
struct RawDistributionVector 
{
	// Fields
	float MinValue; // 0x20
	float MaxValue; // 0x24
	Vector MinValueVec; // 0x28
	Vector MaxValueVec; // 0x34
	DistributionVector* Distribution; // 0x40

};


instance 1ab716070c0
struct GraphReference 
{
	// Fields
	EdGraph* MacroGraph; // 0x0
	Blueprint* GraphBlueprint; // 0x8
	Guid GraphGuid; // 0x10

};


instance 1ab71607000
struct EdGraphPinReference 
{
	// Fields
	WeakObjectProperty OwningNode; // 0x0 property 0x1ab716a3800 hash 0x24388009
	Guid PinId; // 0x8

};


instance 1ab71606f40
struct EdGraphSchemaAction 
{
	// Fields
	FText MenuDescription; // 0x8
	FText TooltipDescription; // 0x20
	FText Category; // 0x38
	FText Keywords; // 0x50
	int Grouping; // 0x68
	int SectionID; // 0x6c
	TArray MenuDescriptionArray; // 0x70
	TArray FullSearchTitlesArray; // 0x80
	TArray FullSearchKeywordsArray; // 0x90
	TArray FullSearchCategoryArray; // 0xa0
	TArray LocalizedMenuDescriptionArray; // 0xb0
	TArray LocalizedFullSearchTitlesArray; // 0xc0
	TArray LocalizedFullSearchKeywordsArray; // 0xd0
	TArray LocalizedFullSearchCategoryArray; // 0xe0
	FString SearchText; // 0xf0

};


instance 1ab71606e80
struct EdGraphSchemaAction_NewNode 
{
	// Fields
	EdGraphNode* NodeTemplate; // 0x100

};


instance 1ab71606dc0
struct PluginRedirect 
{
	// Fields
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10

};


instance 1ab71606d00
struct StructRedirect 
{
	// Fields
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8

};


instance 1ab71606c40
struct ClassRedirect 
{
	// Fields
	FName ObjectName; // 0x0
	FName OldClassName; // 0x8
	FName NewClassName; // 0x10
	FName OldSubobjName; // 0x18
	FName NewSubobjName; // 0x20
	FName NewClassClass; // 0x28
	FName NewClassPackage; // 0x30
	bool InstanceOnly; // 0x38

};


instance 1ab71606b80
struct GameNameRedirect 
{
	// Fields
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8

};


instance 1ab71606ac0
struct ScreenMessageString 
{
	// Fields
	ULONG64 Key; // 0x0
	FString ScreenMessage; // 0x8
	Color DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	Vector2D TextScale; // 0x24

};


instance 1ab71606a00
struct DropNoteInfo 
{
	// Fields
	Vector Location; // 0x0
	Rotator Rotation; // 0xc
	FString Comment; // 0x18

};


instance 1ab71606940
struct StatColorMapping 
{
	// Fields
	FString StatName; // 0x0
	TArray ColorMap; // 0x10
	bool DisableBlend; // 0x20

};


instance 1ab71606880
struct StatColorMapEntry 
{
	// Fields
	float In; // 0x0
	Color Out; // 0x4

};


instance 1ab716067c0
struct WorldContext 
{
	// Fields
	URL LastURL; // 0xd0
	URL LastRemoteURL; // 0x138
	PendingNetGame* PendingNetGame; // 0x1a0
	TArray PackagesToFullyLoad; // 0x1a8
	TArray LoadedLevelsForPendingMapChange; // 0x1c8
	TArray ObjectReferencers; // 0x1f0
	TArray PendingLevelStreamingStatusUpdates; // 0x200
	GameViewportClient* GameViewport; // 0x210
	GameInstance* OwningGameInstance; // 0x218
	TArray ActiveNetDrivers; // 0x220

};


instance 1ab71606700
struct NamedNetDriver 
{
	// Fields
	NetDriver* NetDriver; // 0x0

};


instance 1ab71606640
struct LevelStreamingStatus 
{
	// Fields
	FName PackageName; // 0x0
	bool bShouldBeLoaded; // 0x8
	bool bShouldBeVisible; // 0x8
	int LODIndex; // 0xc

};


instance 1ab71606580
struct FullyLoadedPackagesInfo 
{
	// Fields
	BYTE FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray PackagesToLoad; // 0x18
	TArray LoadedObjects; // 0x28

};


instance 1ab716064c0
struct URL 
{
	// Fields
	FString Protocol; // 0x0
	FString Host; // 0x10
	int Port; // 0x20
	int Valid; // 0x24
	FString Map; // 0x28
	FString RedirectURL; // 0x38
	TArray Op; // 0x48
	FString Portal; // 0x58

};


instance 1ab71606400
struct NetDriverDefinition 
{
	// Fields
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10

};


instance 1ab71606340
struct ExposureSettings 
{
	// Fields
	float FixedEV100; // 0x0
	bool bFixed; // 0x4

};


instance 1ab71609400
struct TickPrerequisite 
{
	// Fields

};


instance 1ab71609340
struct CanvasUVTri 
{
	// Fields
	Vector2D V0_Pos; // 0x0
	Vector2D V0_UV; // 0x8
	LinearColor V0_Color; // 0x10
	Vector2D V1_Pos; // 0x20
	Vector2D V1_UV; // 0x28
	LinearColor V1_Color; // 0x30
	Vector2D V2_Pos; // 0x40
	Vector2D V2_UV; // 0x48
	LinearColor V2_Color; // 0x50

};


instance 1ab71609280
struct FontRenderInfo 
{
	// Fields
	bool bClipText; // 0x0
	bool bEnableShadow; // 0x0
	DepthFieldGlowInfo GlowInfo; // 0x4

};


instance 1ab716091c0
struct DepthFieldGlowInfo 
{
	// Fields
	bool bEnableGlow; // 0x0
	LinearColor GlowColor; // 0x4
	Vector2D GlowOuterRadius; // 0x14
	Vector2D GlowInnerRadius; // 0x1c

};


instance 1ab71609100
struct Redirector 
{
	// Fields
	FName OldName; // 0x0
	FName NewName; // 0x8

};


instance 1ab71609040
struct CollectionReference 
{
	// Fields
	FName CollectionName; // 0x0

};


instance 1ab71608f80
struct ComponentReference 
{
	// Fields
	Actor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10

};


instance 1ab71608ec0
struct ConstrainComponentPropName 
{
	// Fields
	FName ComponentName; // 0x0

};


instance 1ab71608e00
struct DamageEvent 
{
	// Fields
	DamageType* DamageTypeClass; // 0x8

};


instance 1ab71608d40
struct RadialDamageEvent 
{
	// Fields
	RadialDamageParams Params; // 0x10
	Vector Origin; // 0x24
	TArray ComponentHits; // 0x30

};


instance 1ab71608c80
struct RadialDamageParams 
{
	// Fields
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10

};


instance 1ab71608bc0
struct PointDamageEvent 
{
	// Fields
	float Damage; // 0x10
	Vector_NetQuantizeNormal ShotDirection; // 0x14
	HitResult HitInfo; // 0x20

};


instance 1ab71608b00
struct SkeletalMeshBuildSettings 
{
	// Fields
	bool bRecomputeNormals; // 0x0
	bool bRecomputeTangents; // 0x0
	bool bUseMikkTSpace; // 0x0
	bool bComputeWeightedNormals; // 0x0
	bool bRemoveDegenerates; // 0x0
	bool bUseHighPrecisionTangentBasis; // 0x0
	bool bUseFullPrecisionUVs; // 0x0
	bool bBuildAdjacencyBuffer; // 0x0
	float ThresholdPosition; // 0x4
	float ThresholdTangentNormal; // 0x8
	float ThresholdUV; // 0xc

};


instance 1ab71608a40
struct MeshBuildSettings 
{
	// Fields
	bool bUseMikkTSpace; // 0x0
	bool bRecomputeNormals; // 0x0
	bool bRecomputeTangents; // 0x0
	bool bComputeWeightedNormals; // 0x0
	bool bRemoveDegenerates; // 0x0
	bool bBuildAdjacencyBuffer; // 0x0
	bool bBuildReversedIndexBuffer; // 0x0
	bool bUseHighPrecisionTangentBasis; // 0x0
	bool bUseFullPrecisionUVs; // 0x1
	bool bGenerateLightmapUVs; // 0x1
	bool bGenerateDistanceFieldAsIfTwoSided; // 0x1
	int MinLightmapResolution; // 0x4
	int SrcLightmapIndex; // 0x8
	int DstLightmapIndex; // 0xc
	float BuildScale; // 0x10
	Vector BuildScale3D; // 0x14
	float DistanceFieldResolutionScale; // 0x20
	StaticMesh* DistanceFieldReplacementMesh; // 0x28

};


instance 1ab71608980
struct POV 
{
	// Fields
	Vector Location; // 0x0
	Rotator Rotation; // 0xc
	float FOV; // 0x18

};


instance 1ab716088c0
struct AnimUpdateRateParameters 
{
	// Fields
	EUpdateRateShiftBucket ShiftBucket; // 0x1
	bool bInterpolateSkippedFrames; // 0x2
	bool bShouldUseLodMap; // 0x2
	bool bShouldUseMinLod; // 0x2
	bool bSkipUpdate; // 0x2
	bool bSkipEvaluation; // 0x2
	int UpdateRate; // 0x4
	int EvaluationRate; // 0x8
	float TickedPoseOffestTime; // 0xc
	float AdditionalTime; // 0x10
	int BaseNonRenderedUpdateRate; // 0x18
	int MaxEvalRateForInterpolation; // 0x1c
	TArray BaseVisibleDistanceFactorThesholds; // 0x20
	MapProperty LODToFrameSkipMap; // 0x30 property 0x1ab71163f80 hash 0xadd0fb88
	int SkippedUpdateFrames; // 0x80
	int SkippedEvalFrames; // 0x84

};


instance 1ab71608800
struct AnimSlotDesc 
{
	// Fields
	FName SlotName; // 0x0
	int NumChannels; // 0x8

};


instance 1ab71608740
struct AnimSlotInfo 
{
	// Fields
	FName SlotName; // 0x0
	TArray ChannelWeights; // 0x8

};


instance 1ab71608680
struct MTDResult 
{
	// Fields
	Vector Direction; // 0x0
	float Distance; // 0xc

};


instance 1ab716085c0
struct OverlapResult 
{
	// Fields
	WeakObjectProperty Actor; // 0x0 property 0x1ab716a6780 hash 0x24388009
	WeakObjectProperty Component; // 0x8 property 0x1ab716a6800 hash 0x24388009
	bool bBlockingHit; // 0x14

};


instance 1ab71608500
struct PrimitiveMaterialRef 
{
	// Fields
	PrimitiveComponent* Primitive; // 0x0
	DecalComponent* Decal; // 0x8
	int ElementIndex; // 0x10

};


instance 1ab71608440
struct SwarmDebugOptions 
{
	// Fields
	bool bDistributionEnabled; // 0x0
	bool bForceContentExport; // 0x0
	bool bInitialized; // 0x0

};


instance 1ab71608380
struct LightmassDebugOptions 
{
	// Fields
	bool bDebugMode; // 0x0
	bool bStatsEnabled; // 0x0
	bool bGatherBSPSurfacesAcrossComponents; // 0x0
	float CoplanarTolerance; // 0x4
	bool bUseImmediateImport; // 0x8
	bool bImmediateProcessMappings; // 0x8
	bool bSortMappings; // 0x8
	bool bDumpBinaryFiles; // 0x8
	bool bDebugMaterials; // 0x8
	bool bPadMappings; // 0x8
	bool bDebugPaddings; // 0x8
	bool bOnlyCalcDebugTexelMappings; // 0x8
	bool bUseRandomColors; // 0x9
	bool bColorBordersGreen; // 0x9
	bool bColorByExecutionTime; // 0x9
	float ExecutionTimeDivisor; // 0xc

};


instance 1ab716082c0
struct LightmassPrimitiveSettings 
{
	// Fields
	bool bUseTwoSidedLighting; // 0x0
	bool bShadowIndirectOnly; // 0x0
	bool bUseEmissiveForStaticLighting; // 0x0
	bool bUseVertexNormalForHemisphereGather; // 0x0
	float EmissiveLightFalloffExponent; // 0x4
	float EmissiveLightExplicitInfluenceRadius; // 0x8
	float EmissiveBoost; // 0xc
	float DiffuseBoost; // 0x10
	float FullyOccludedSamplesFraction; // 0x14

};


instance 1ab71608200
struct LightmassLightSettings 
{
	// Fields
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8

};


instance 1ab71608140
struct LightmassDirectionalLightSettings 
{
	// Fields
	float LightSourceAngle; // 0xc

};


instance 1ab71608080
struct LightmassPointLightSettings 
{
	// Fields

};


instance 1ab71607fc0
struct BasedPosition 
{
	// Fields
	Actor* Base; // 0x0
	Vector Position; // 0x8
	Vector CachedBaseLocation; // 0x14
	Rotator CachedBaseRotation; // 0x20
	Vector CachedTransPosition; // 0x2c

};


instance 1ab71607f00
struct FractureEffect 
{
	// Fields
	ParticleSystem* ParticleSystem; // 0x0
	SoundBase* Sound; // 0x8

};


instance 1ab71607e40
struct CollisionImpactData 
{
	// Fields
	TArray ContactInfos; // 0x0
	Vector TotalNormalImpulse; // 0x10
	Vector TotalFrictionImpulse; // 0x1c

};


instance 1ab71607d80
struct RigidBodyContactInfo 
{
	// Fields
	Vector ContactPosition; // 0x0
	Vector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	PhysicalMaterial* PhysMaterial; // 0x20

};


instance 1ab71607cc0
struct RigidBodyErrorCorrection 
{
	// Fields
	float PingExtrapolation; // 0x0
	float PingLimit; // 0x4
	float ErrorPerLinearDifference; // 0x8
	float ErrorPerAngularDifference; // 0xc
	float MaxRestoredStateError; // 0x10
	float MaxLinearHardSnapDistance; // 0x14
	float PositionLerp; // 0x18
	float AngleLerp; // 0x1c
	float LinearVelocityCoefficient; // 0x20
	float AngularVelocityCoefficient; // 0x24
	float ErrorAccumulationSeconds; // 0x28
	float ErrorAccumulationDistanceSq; // 0x2c
	float ErrorAccumulationSimilarity; // 0x30

};


instance 1ab71607c00
struct RigidBodyState 
{
	// Fields
	Vector_NetQuantize100 Position; // 0x0
	Quat Quaternion; // 0x10
	Vector_NetQuantize100 LinVel; // 0x20
	Vector_NetQuantize100 AngVel; // 0x2c
	BYTE Flags; // 0x38

};


instance 1ab7160acc0
struct MaterialShadingModelField 
{
	// Fields
	USHORT ShadingModelField; // 0x0

};


instance 1ab7160ac00
struct ExponentialHeightFogData 
{
	// Fields
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8

};


instance 1ab7160ab40
struct FontCharacter 
{
	// Fields
	int StartU; // 0x0
	int StartV; // 0x4
	int USize; // 0x8
	int VSize; // 0xc
	BYTE TextureIndex; // 0x10
	int VerticalOffset; // 0x14

};


instance 1ab7160aa80
struct FontImportOptionsData 
{
	// Fields
	FString FontName; // 0x0
	float Height; // 0x10
	bool bEnableAntialiasing; // 0x14
	bool bEnableBold; // 0x14
	bool bEnableItalic; // 0x14
	bool bEnableUnderline; // 0x14
	bool bAlphaOnly; // 0x14
	BYTE CharacterSet; // 0x18
	FString Chars; // 0x20
	FString UnicodeRange; // 0x30
	FString CharsFilePath; // 0x40
	FString CharsFileWildcard; // 0x50
	bool bCreatePrintableOnly; // 0x60
	bool bIncludeASCIIRange; // 0x60
	LinearColor ForegroundColor; // 0x64
	bool bEnableDropShadow; // 0x74
	int TexturePageWidth; // 0x78
	int TexturePageMaxHeight; // 0x7c
	int XPadding; // 0x80
	int YPadding; // 0x84
	int ExtendBoxTop; // 0x88
	int ExtendBoxBottom; // 0x8c
	int ExtendBoxRight; // 0x90
	int ExtendBoxLeft; // 0x94
	bool bEnableLegacyMode; // 0x98
	int Kerning; // 0x9c
	bool bUseDistanceFieldAlpha; // 0xa0
	int DistanceFieldScaleFactor; // 0xa4
	float DistanceFieldScanRadiusScale; // 0xa8

};


instance 1ab7160a9c0
struct ForceFeedbackAttenuationSettings 
{
	// Fields

};


instance 1ab7160a900
struct ActiveForceFeedbackEffect 
{
	// Fields
	ForceFeedbackEffect* ForceFeedbackEffect; // 0x0

};


instance 1ab7160a840
struct ForceFeedbackParameters 
{
	// Fields
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa

};


instance 1ab7160a780
struct ForceFeedbackChannelDetails 
{
	// Fields
	bool bAffectsLeftLarge; // 0x0
	bool bAffectsLeftSmall; // 0x0
	bool bAffectsRightLarge; // 0x0
	bool bAffectsRightSmall; // 0x0
	RuntimeFloatCurve Curve; // 0x8

};


instance 1ab7160a6c0
struct PredictProjectilePathResult 
{
	// Fields
	TArray PathData; // 0x0
	PredictProjectilePathPointData LastTraceDestination; // 0x10
	HitResult HitResult; // 0x2c

};


instance 1ab7160a600
struct PredictProjectilePathPointData 
{
	// Fields
	Vector Location; // 0x0
	Vector Velocity; // 0xc
	float Time; // 0x18

};


instance 1ab7160a540
struct PredictProjectilePathParams 
{
	// Fields
	Vector StartLocation; // 0x0
	Vector LaunchVelocity; // 0xc
	bool bTraceWithCollision; // 0x18
	float ProjectileRadius; // 0x1c
	float MaxSimTime; // 0x20
	bool bTraceWithChannel; // 0x24
	BYTE TraceChannel; // 0x25
	TArray ObjectTypes; // 0x28
	TArray ActorsToIgnore; // 0x38
	float SimFrequency; // 0x48
	float OverrideGravityZ; // 0x4c
	BYTE DrawDebugType; // 0x50
	float DrawDebugTime; // 0x54
	bool bTraceComplex; // 0x58

};


instance 1ab7160a480
struct ActiveHapticFeedbackEffect 
{
	// Fields
	HapticFeedbackEffect_Base* HapticEffect; // 0x0

};


instance 1ab7160a3c0
struct HapticFeedbackDetails_Curve 
{
	// Fields
	RuntimeFloatCurve Frequency; // 0x0
	RuntimeFloatCurve Amplitude; // 0x88

};


instance 1ab7160a300
struct ClusterNode 
{
	// Fields
	Vector BoundMin; // 0x0
	int FirstChild; // 0xc
	Vector BoundMax; // 0x10
	int LastChild; // 0x1c
	int FirstInstance; // 0x20
	int LastInstance; // 0x24
	Vector MinInstanceScale; // 0x28
	Vector MaxInstanceScale; // 0x34

};


instance 1ab7160a240
struct ClusterNode_DEPRECATED 
{
	// Fields
	Vector BoundMin; // 0x0
	int FirstChild; // 0xc
	Vector BoundMax; // 0x10
	int LastChild; // 0x1c
	int FirstInstance; // 0x20
	int LastInstance; // 0x24

};


instance 1ab7160a180
struct HLODProxyMesh 
{
	// Fields
	LazyObjectProperty LODActor; // 0x0 property 0x1ab716a9b80 hash 0xbcf63421
	StaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28

};


instance 1ab7160a0c0
struct SoundModulationParameter 
{
	// Fields
	FName Control; // 0x0
	float Value; // 0x8

};


instance 1ab7160a000
struct SoundModulation 
{
	// Fields
	TArray Settings; // 0x0

};


instance 1ab71609f40
struct ImportanceTexture 
{
	// Fields
	IntPoint Size; // 0x0
	int NumMips; // 0x8
	TArray MarginalCDF; // 0x10
	TArray ConditionalCDF; // 0x20
	TArray TextureData; // 0x30
	WeakObjectProperty Texture; // 0x40 property 0x1ab716a9980 hash 0x24388009
	BYTE Weighting; // 0x48

};


instance 1ab71609e80
struct ComponentOverrideRecord 
{
	// Fields
	Object* ComponentClass; // 0x0
	ActorComponent* ComponentTemplate; // 0x8
	ComponentKey ComponentKey; // 0x10
	BlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30

};


instance 1ab71609dc0
struct ComponentKey 
{
	// Fields
	Object* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	Guid AssociatedGuid; // 0x10

};


instance 1ab71609d00
struct BlueprintInputDelegateBinding 
{
	// Fields
	bool bConsumeInput; // 0x0
	bool bExecuteWhenPaused; // 0x0
	bool bOverrideParentBinding; // 0x0

};


instance 1ab71609c40
struct BlueprintInputActionDelegateBinding 
{
	// Fields
	FName InputActionName; // 0x4
	BYTE InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10

};


instance 1ab71609b80
struct BlueprintInputAxisDelegateBinding 
{
	// Fields
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc

};


instance 1ab71609ac0
struct BlueprintInputAxisKeyDelegateBinding 
{
	// Fields
	Key AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20

};


instance 1ab71609a00
struct CachedKeyToActionInfo 
{
	// Fields
	PlayerInput* PlayerInput; // 0x0

};


instance 1ab71609940
struct BlueprintInputKeyDelegateBinding 
{
	// Fields
	InputChord InputChord; // 0x8
	BYTE InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c

};


instance 1ab71609880
struct BlueprintInputTouchDelegateBinding 
{
	// Fields
	BYTE InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8

};


instance 1ab716097c0
struct InstancedStaticMeshComponentInstanceData 
{
	// Fields
	StaticMesh* StaticMesh; // 0xa8
	InstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0
	TArray PerInstanceSMData; // 0xf0
	int InstancingRandomSeed; // 0x120

};


instance 1ab71609700
struct InstancedStaticMeshInstanceData 
{
	// Fields
	Matrix Transform; // 0x0

};


instance 1ab71609640
struct InstancedStaticMeshLightMapInstanceData 
{
	// Fields
	Transform Transform; // 0x0
	TArray MapBuildDataIds; // 0x30

};


instance 1ab71609580
struct InstancedStaticMeshMappingInfo 
{
	// Fields

};


instance 1ab716094c0
struct IntegralCurve 
{
	// Fields
	TArray Keys; // 0x68
	int DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c

};


instance 1ab7160c580
struct IntegralKey 
{
	// Fields
	float Time; // 0x0
	int Value; // 0x4

};


instance 1ab7160c4c0
struct CurveEdTab 
{
	// Fields
	FString TabName; // 0x0
	TArray Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c

};


instance 1ab7160c400
struct CurveEdEntry 
{
	// Fields
	Object* CurveObject; // 0x0
	Color CurveColor; // 0x8
	FString CurveName; // 0x10
	int bHideCurve; // 0x20
	int bColorCurve; // 0x24
	int bFloatingPointColorCurve; // 0x28
	int bClamp; // 0x2c
	float ClampLow; // 0x30
	float ClampHigh; // 0x34

};


instance 1ab7160c340
struct InterpEdSelKey 
{
	// Fields
	InterpGroup* Group; // 0x0
	InterpTrack* Track; // 0x8
	int KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14

};


instance 1ab7160c280
struct CameraPreviewInfo 
{
	// Fields
	Pawn* PawnClass; // 0x0
	AnimSequence* AnimSeq; // 0x8
	Vector Location; // 0x10
	Rotator Rotation; // 0x1c
	Pawn* PawnInst; // 0x28

};


instance 1ab7160c1c0
struct SubTrackGroup 
{
	// Fields
	FString GroupName; // 0x0
	TArray TrackIndices; // 0x10
	bool bIsCollapsed; // 0x20
	bool bIsSelected; // 0x20

};


instance 1ab7160c100
struct SupportedSubTrackInfo 
{
	// Fields
	InterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int GroupIndex; // 0x18

};


instance 1ab7160c040
struct AnimControlTrackKey 
{
	// Fields
	float StartTime; // 0x0
	AnimSequence* AnimSeq; // 0x8
	float AnimStartOffset; // 0x10
	float AnimEndOffset; // 0x14
	float AnimPlayRate; // 0x18
	bool bLooping; // 0x1c
	bool bReverse; // 0x1c

};


instance 1ab7160bf80
struct BoolTrackKey 
{
	// Fields
	float Time; // 0x0
	bool Value; // 0x4

};


instance 1ab7160bec0
struct DirectorTrackCut 
{
	// Fields
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int ShotNumber; // 0x10

};


instance 1ab7160be00
struct EventTrackKey 
{
	// Fields
	float Time; // 0x0
	FName EventName; // 0x4

};


instance 1ab7160bd40
struct InterpLookupTrack 
{
	// Fields
	TArray Points; // 0x0

};


instance 1ab7160bc80
struct InterpLookupPoint 
{
	// Fields
	FName GroupName; // 0x0
	float Time; // 0x8

};


instance 1ab7160bbc0
struct ParticleReplayTrackKey 
{
	// Fields
	float Time; // 0x0
	float Duration; // 0x4
	int ClipIDNumber; // 0x8

};


instance 1ab7160bb00
struct SoundTrackKey 
{
	// Fields
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	SoundBase* Sound; // 0x10

};


instance 1ab7160ba40
struct ToggleTrackKey 
{
	// Fields
	float Time; // 0x0
	BYTE ToggleAction; // 0x4

};


instance 1ab7160b980
struct VisibilityTrackKey 
{
	// Fields
	float Time; // 0x0
	BYTE Action; // 0x4
	BYTE ActiveCondition; // 0x5

};


instance 1ab7160b8c0
struct VectorSpringState 
{
	// Fields

};


instance 1ab7160b800
struct FloatSpringState 
{
	// Fields

};


instance 1ab7160b740
struct DrawToRenderTargetContext 
{
	// Fields
	TextureRenderTarget2D* RenderTarget; // 0x0

};


instance 1ab7160b680
struct LatentActionManager 
{
	// Fields

};


instance 1ab7160b5c0
struct LayerActorStats 
{
	// Fields
	Object* Type; // 0x0
	int Total; // 0x8

};


instance 1ab7160b500
struct ReplicatedStaticActorDestructionInfo 
{
	// Fields
	Object* ObjClass; // 0x30

};


instance 1ab7160b440
struct LevelSimplificationDetails 
{
	// Fields
	bool bCreatePackagePerAsset; // 0x0
	float DetailsPercentage; // 0x4
	MaterialProxySettings StaticMeshMaterialSettings; // 0x8
	bool bOverrideLandscapeExportLOD; // 0x7c
	int LandscapeExportLOD; // 0x80
	MaterialProxySettings LandscapeMaterialSettings; // 0x84
	bool bBakeFoliageToLandscape; // 0xf8
	bool bBakeGrassToLandscape; // 0xf9
	bool bGenerateMeshNormalMap; // 0xfa
	bool bGenerateMeshMetallicMap; // 0xfb
	bool bGenerateMeshRoughnessMap; // 0xfc
	bool bGenerateMeshSpecularMap; // 0xfd
	bool bGenerateLandscapeNormalMap; // 0xfe
	bool bGenerateLandscapeMetallicMap; // 0xff
	bool bGenerateLandscapeRoughnessMap; // 0x100
	bool bGenerateLandscapeSpecularMap; // 0x101

};


instance 1ab7160b380
struct MaterialProxySettings 
{
	// Fields
	IntPoint TextureSize; // 0x0
	float GutterSpace; // 0x8
	float MetallicConstant; // 0xc
	float RoughnessConstant; // 0x10
	float SpecularConstant; // 0x14
	float OpacityConstant; // 0x18
	float OpacityMaskConstant; // 0x1c
	float AmbientOcclusionConstant; // 0x20
	BYTE TextureSizingType; // 0x24
	BYTE MaterialMergeType; // 0x25
	BYTE BlendMode; // 0x26
	bool bAllowTwoSidedMaterial; // 0x27
	bool bNormalMap; // 0x27
	bool bMetallicMap; // 0x27
	bool bRoughnessMap; // 0x27
	bool bSpecularMap; // 0x27
	bool bEmissiveMap; // 0x27
	bool bOpacityMap; // 0x27
	bool bOpacityMaskMap; // 0x27
	bool bAmbientOcclusionMap; // 0x28
	IntPoint DiffuseTextureSize; // 0x2c
	IntPoint NormalTextureSize; // 0x34
	IntPoint MetallicTextureSize; // 0x3c
	IntPoint RoughnessTextureSize; // 0x44
	IntPoint SpecularTextureSize; // 0x4c
	IntPoint EmissiveTextureSize; // 0x54
	IntPoint OpacityTextureSize; // 0x5c
	IntPoint OpacityMaskTextureSize; // 0x64
	IntPoint AmbientOcclusionTextureSize; // 0x6c

};


instance 1ab7160b2c0
struct StreamableTextureInstance 
{
	// Fields

};


instance 1ab7160b200
struct DynamicTextureInstance 
{
	// Fields
	Texture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34

};


instance 1ab7160b140
struct PrecomputedLightInstanceData 
{
	// Fields
	Transform Transform; // 0xb0
	Guid LightGuid; // 0xe0
	int PreviewShadowMapChannel; // 0xf0

};


instance 1ab7160b080
struct BatchedPoint 
{
	// Fields
	Vector Position; // 0x0
	LinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	BYTE DepthPriority; // 0x24

};


instance 1ab7160afc0
struct BatchedLine 
{
	// Fields
	Vector Start; // 0x0
	Vector End; // 0xc
	LinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	BYTE DepthPriority; // 0x30

};


instance 1ab7160af00
struct ClientReceiveData 
{
	// Fields
	PlayerController* LocalPC; // 0x0
	FName MessageType; // 0x8
	int MessageIndex; // 0x10
	FString MessageString; // 0x18
	PlayerState* RelatedPlayerState; // 0x28
	PlayerState* RelatedPlayerState; // 0x30
	Object* OptionalObject; // 0x38

};


instance 1ab7160ae40
struct ParameterGroupData 
{
	// Fields
	FString GroupName; // 0x0
	int GroupSortPriority; // 0x10

};


instance 1ab7160ad80
struct MaterialParameterCollectionInfo 
{
	// Fields
	Guid StateId; // 0x0
	MaterialParameterCollection* ParameterCollection; // 0x10

};


instance 1ab7160de40
struct MaterialFunctionInfo 
{
	// Fields
	Guid StateId; // 0x0
	MaterialFunctionInterface* Function; // 0x10

};


instance 1ab7160dd80
struct MaterialSpriteElement 
{
	// Fields
	MaterialInterface* Material; // 0x0
	CurveFloat* DistanceToOpacityCurve; // 0x8
	bool bSizeIsInScreenSpace; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	CurveFloat* DistanceToSizeCurve; // 0x20

};


instance 1ab7160dcc0
struct ParameterChannelNames 
{
	// Fields
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48

};


instance 1ab7160dc00
struct CustomInput 
{
	// Fields
	FName InputName; // 0x0
	ExpressionInput Input; // 0x8

};


instance 1ab7160db40
struct FunctionExpressionOutput 
{
	// Fields
	MaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	Guid ExpressionOutputId; // 0x8
	ExpressionOutput Output; // 0x18

};


instance 1ab7160da80
struct FunctionExpressionInput 
{
	// Fields
	MaterialExpressionFunctionInput* ExpressionInput; // 0x0
	Guid ExpressionInputId; // 0x8
	ExpressionInput Input; // 0x18

};


instance 1ab7160d9c0
struct FontParameterValue 
{
	// Fields
	MaterialParameterInfo ParameterInfo; // 0x0
	Font* FontValue; // 0x10
	int FontPage; // 0x18
	Guid ExpressionGUID; // 0x1c

};


instance 1ab7160d900
struct MaterialParameterInfo 
{
	// Fields
	FName Name; // 0x0
	BYTE Association; // 0x8
	int Index; // 0xc

};


instance 1ab7160d840
struct RuntimeVirtualTextureParameterValue 
{
	// Fields
	MaterialParameterInfo ParameterInfo; // 0x0
	RuntimeVirtualTexture* ParameterValue; // 0x10
	Guid ExpressionGUID; // 0x18

};


instance 1ab7160d780
struct TextureParameterValue 
{
	// Fields
	MaterialParameterInfo ParameterInfo; // 0x0
	Texture* ParameterValue; // 0x10
	Guid ExpressionGUID; // 0x18

};


instance 1ab7160d6c0
struct VectorParameterValue 
{
	// Fields
	MaterialParameterInfo ParameterInfo; // 0x0
	LinearColor ParameterValue; // 0x10
	Guid ExpressionGUID; // 0x20

};


instance 1ab7160d600
struct ScalarParameterValue 
{
	// Fields
	MaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	Guid ExpressionGUID; // 0x14

};


instance 1ab7160d540
struct ScalarParameterAtlasInstanceData 
{
	// Fields
	bool bIsUsedAsAtlasPosition; // 0x0
	CurveLinearColor* Curve; // 0x8
	CurveLinearColorAtlas* Atlas; // 0x30

};


instance 1ab7160d480
struct MaterialInstanceBasePropertyOverrides 
{
	// Fields
	bool bOverride_OpacityMaskClipValue; // 0x0
	bool bOverride_BlendMode; // 0x0
	bool bOverride_ShadingModel; // 0x0
	bool bOverride_DitheredLODTransition; // 0x0
	bool bOverride_CastDynamicShadowAsMasked; // 0x0
	bool bOverride_TwoSided; // 0x0
	bool TwoSided; // 0x0
	bool DitheredLODTransition; // 0x0
	bool bCastDynamicShadowAsMasked; // 0x1
	BYTE BlendMode; // 0x2
	BYTE ShadingModel; // 0x3
	float OpacityMaskClipValue; // 0x4

};


instance 1ab7160d3c0
struct MaterialTextureInfo 
{
	// Fields
	float SamplingScale; // 0x0
	int UVChannelIndex; // 0x4
	FName TextureName; // 0x8

};


instance 1ab7160d300
struct LightmassMaterialInterfaceSettings 
{
	// Fields
	float EmissiveBoost; // 0x0
	float DiffuseBoost; // 0x4
	float ExportResolutionScale; // 0x8
	bool bCastShadowAsMasked; // 0xc
	bool bOverrideCastShadowAsMasked; // 0xc
	bool bOverrideEmissiveBoost; // 0xc
	bool bOverrideDiffuseBoost; // 0xc
	bool bOverrideExportResolutionScale; // 0xc

};


instance 1ab7160d240
struct MaterialLayersFunctions 
{
	// Fields
	TArray Layers; // 0x0
	TArray Blends; // 0x10
	TArray LayerStates; // 0x20
	FString KeyString; // 0x30

};


instance 1ab7160d180
struct CollectionParameterBase 
{
	// Fields
	FName ParameterName; // 0x0
	Guid ID; // 0x8

};


instance 1ab7160d0c0
struct CollectionVectorParameter 
{
	// Fields
	LinearColor DefaultValue; // 0x18

};


instance 1ab7160d000
struct CollectionScalarParameter 
{
	// Fields
	float DefaultValue; // 0x18

};


instance 1ab7160cf40
struct InterpGroupActorInfo 
{
	// Fields
	FName ObjectName; // 0x0
	TArray Actors; // 0x8

};


instance 1ab7160ce80
struct CameraCutInfo 
{
	// Fields
	Vector Location; // 0x0
	float Timestamp; // 0xc

};


instance 1ab7160cdc0
struct MemberReference 
{
	// Fields
	Object* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	Guid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31

};


instance 1ab7160cd00
struct MeshInstancingSettings 
{
	// Fields
	Actor* ActorClassToUse; // 0x0
	int InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	InstancedStaticMeshComponent* ISMComponentToUse; // 0x10

};


instance 1ab7160cc40
struct MeshMergingSettings 
{
	// Fields
	int TargetLightMapResolution; // 0x0
	EUVOutput OutputUVs; // 0x4
	MaterialProxySettings MaterialSettings; // 0xc
	int GutterSize; // 0x80
	int SpecificLOD; // 0x84
	EMeshLODSelectionType LODSelectionType; // 0x88
	bool bGenerateLightMapUV; // 0x89
	bool bComputedLightMapResolution; // 0x89
	bool bPivotPointAtZero; // 0x89
	bool bMergePhysicsData; // 0x89
	bool bMergeMaterials; // 0x89
	bool bCreateMergedMaterial; // 0x89
	bool bBakeVertexDataToMesh; // 0x89
	bool bUseVertexDataForBakingMaterial; // 0x89
	bool bUseTextureBinning; // 0x8a
	bool bReuseMeshLightmapUVs; // 0x8a
	bool bMergeEquivalentMaterials; // 0x8a
	bool bUseLandscapeCulling; // 0x8a
	bool bIncludeImposters; // 0x8a
	bool bAllowDistanceField; // 0x8a

};


instance 1ab7160cb80
struct MeshProxySettings 
{
	// Fields
	int ScreenSize; // 0x0
	float VoxelSize; // 0x4
	MaterialProxySettings MaterialSettings; // 0x8
	float MergeDistance; // 0x7c
	Color UnresolvedGeometryColor; // 0x80
	float MaxRayCastDist; // 0x84
	float HardAngleThreshold; // 0x88
	int LightMapResolution; // 0x8c
	BYTE NormalCalculationMethod; // 0x90
	BYTE LandscapeCullingPrecision; // 0x91
	bool bCalculateCorrectLODModel; // 0x92
	bool bOverrideVoxelSize; // 0x92
	bool bOverrideTransferDistance; // 0x92
	bool bUseHardAngleThreshold; // 0x92
	bool bComputeLightMapResolution; // 0x92
	bool bRecalculateNormals; // 0x92
	bool bUseLandscapeCulling; // 0x92
	bool bAllowAdjacency; // 0x92
	bool bAllowDistanceField; // 0x93
	bool bReuseMeshLightmapUVs; // 0x93
	bool bCreateCollision; // 0x93
	bool bAllowVertexColors; // 0x93
	bool bGenerateLightmapUVs; // 0x93

};


instance 1ab7160cac0
struct MeshReductionSettings 
{
	// Fields
	float PercentTriangles; // 0x0
	float PercentVertices; // 0x4
	float MaxDeviation; // 0x8
	float PixelError; // 0xc
	float WeldingThreshold; // 0x10
	float HardAngleThreshold; // 0x14
	int BaseLODModel; // 0x18
	BYTE SilhouetteImportance; // 0x1c
	BYTE TextureImportance; // 0x1d
	BYTE ShadingImportance; // 0x1e
	bool bRecalculateNormals; // 0x1f
	bool bGenerateUniqueLightmapUVs; // 0x1f
	bool bKeepSymmetry; // 0x1f
	bool bVisibilityAided; // 0x1f
	bool bCullOccluded; // 0x1f
	EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20
	BYTE VisibilityAggressiveness; // 0x21
	BYTE VertexColorImportance; // 0x22

};


instance 1ab7160ca00
struct PurchaseInfo 
{
	// Fields
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30

};


instance 1ab7160c940
struct NameCurve 
{
	// Fields
	TArray Keys; // 0x68

};


instance 1ab7160c880
struct NameCurveKey 
{
	// Fields
	float Time; // 0x0
	FName Value; // 0x4

};


instance 1ab7160c7c0
struct NavAvoidanceMask 
{
	// Fields
	bool bGroup0; // 0x0
	bool bGroup1; // 0x0
	bool bGroup2; // 0x0
	bool bGroup3; // 0x0
	bool bGroup4; // 0x0
	bool bGroup5; // 0x0
	bool bGroup6; // 0x0
	bool bGroup7; // 0x0
	bool bGroup8; // 0x1
	bool bGroup9; // 0x1
	bool bGroup10; // 0x1
	bool bGroup11; // 0x1
	bool bGroup12; // 0x1
	bool bGroup13; // 0x1
	bool bGroup14; // 0x1
	bool bGroup15; // 0x1
	bool bGroup16; // 0x2
	bool bGroup17; // 0x2
	bool bGroup18; // 0x2
	bool bGroup19; // 0x2
	bool bGroup20; // 0x2
	bool bGroup21; // 0x2
	bool bGroup22; // 0x2
	bool bGroup23; // 0x2
	bool bGroup24; // 0x3
	bool bGroup25; // 0x3
	bool bGroup26; // 0x3
	bool bGroup27; // 0x3
	bool bGroup28; // 0x3
	bool bGroup29; // 0x3
	bool bGroup30; // 0x3
	bool bGroup31; // 0x3

};


instance 1ab7160c700
struct MovementProperties 
{
	// Fields
	bool bCanCrouch; // 0x0
	bool bCanJump; // 0x0
	bool bCanWalk; // 0x0
	bool bCanSwim; // 0x0
	bool bCanFly; // 0x0

};


instance 1ab7160c640
struct NavAgentProperties 
{
	// Fields
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	SoftClassPath PreferredNavData; // 0x18

};


instance 1ab7160f700
struct NavDataConfig 
{
	// Fields
	FName Name; // 0x30
	Color Color; // 0x38
	Vector DefaultQueryExtent; // 0x3c
	Actor* NavigationDataClass; // 0x48
	Actor* NavDataClass; // 0x50

};


instance 1ab7160f640
struct NavAgentSelector 
{
	// Fields
	bool bSupportsAgent0; // 0x0
	bool bSupportsAgent1; // 0x0
	bool bSupportsAgent2; // 0x0
	bool bSupportsAgent3; // 0x0
	bool bSupportsAgent4; // 0x0
	bool bSupportsAgent5; // 0x0
	bool bSupportsAgent6; // 0x0
	bool bSupportsAgent7; // 0x0
	bool bSupportsAgent8; // 0x1
	bool bSupportsAgent9; // 0x1
	bool bSupportsAgent10; // 0x1
	bool bSupportsAgent11; // 0x1
	bool bSupportsAgent12; // 0x1
	bool bSupportsAgent13; // 0x1
	bool bSupportsAgent14; // 0x1
	bool bSupportsAgent15; // 0x1

};


instance 1ab7160f580
struct NavigationLinkBase 
{
	// Fields
	float LeftProjectHeight; // 0x0
	float MaxFallDownLength; // 0x4
	float SnapRadius; // 0xc
	float SnapHeight; // 0x10
	NavAgentSelector SupportedAgents; // 0x14
	bool bSupportsAgent0; // 0x18
	bool bSupportsAgent1; // 0x18
	bool bSupportsAgent2; // 0x18
	bool bSupportsAgent3; // 0x18
	bool bSupportsAgent4; // 0x18
	bool bSupportsAgent5; // 0x18
	bool bSupportsAgent6; // 0x18
	bool bSupportsAgent7; // 0x18
	bool bSupportsAgent8; // 0x19
	bool bSupportsAgent9; // 0x19
	bool bSupportsAgent10; // 0x19
	bool bSupportsAgent11; // 0x19
	bool bSupportsAgent12; // 0x19
	bool bSupportsAgent13; // 0x19
	bool bSupportsAgent14; // 0x19
	bool bSupportsAgent15; // 0x19
	BYTE Direction; // 0x1c
	bool bUseSnapHeight; // 0x1d
	bool bSnapToCheapestArea; // 0x1d
	bool bCustomFlag0; // 0x1d
	bool bCustomFlag1; // 0x1d
	bool bCustomFlag2; // 0x1d
	bool bCustomFlag3; // 0x1d
	bool bCustomFlag4; // 0x1d
	bool bCustomFlag5; // 0x1d
	bool bCustomFlag6; // 0x1e
	bool bCustomFlag7; // 0x1e
	NavAreaBase* AreaClass; // 0x20

};


instance 1ab7160f4c0
struct NavigationSegmentLink 
{
	// Fields
	Vector LeftStart; // 0x30
	Vector LeftEnd; // 0x3c
	Vector RightStart; // 0x48
	Vector RightEnd; // 0x54

};


instance 1ab7160f400
struct NavigationLink 
{
	// Fields
	Vector Left; // 0x30
	Vector Right; // 0x3c

};


instance 1ab7160f340
struct ChannelDefinition 
{
	// Fields
	FName ChannelName; // 0x0
	FName ClassName; // 0x8
	Object* ChannelClass; // 0x10
	int StaticChannelIndex; // 0x18
	bool bTickOnCreate; // 0x1c
	bool bServerOpen; // 0x1d
	bool bClientOpen; // 0x1e
	bool bInitialServer; // 0x1f
	bool bInitialClient; // 0x20

};


instance 1ab7160f280
struct PacketSimulationSettings 
{
	// Fields
	int PktLoss; // 0x0
	int PktLossMaxSize; // 0x4
	int PktLossMinSize; // 0x8
	int PktOrder; // 0xc
	int PktDup; // 0x10
	int PktLag; // 0x14
	int PktLagVariance; // 0x18
	int PktLagMin; // 0x1c
	int PktLagMax; // 0x20
	int PktIncomingLagMin; // 0x24
	int PktIncomingLagMax; // 0x28
	int PktIncomingLoss; // 0x2c

};


instance 1ab7160f1c0
struct FastArraySerializer 
{
	// Fields
	int ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100

};


instance 1ab7160f100
struct FastArraySerializerItem 
{
	// Fields
	int ReplicationID; // 0x0
	int ReplicationKey; // 0x4
	int MostRecentArrayReplicationKey; // 0x8

};


instance 1ab7160f040
struct NetworkEmulationProfileDescription 
{
	// Fields
	FString ProfileName; // 0x0
	FString ToolTip; // 0x10

};


instance 1ab7160ef80
struct NodeItem 
{
	// Fields
	FName ParentName; // 0x0
	Transform Transform; // 0x10

};


instance 1ab7160eec0
struct ParticleBurst 
{
	// Fields
	int Count; // 0x0
	int CountLow; // 0x4
	float Time; // 0x8

};


instance 1ab7160ee00
struct ParticleRandomSeedInfo 
{
	// Fields
	FName ParameterName; // 0x0
	bool bGetSeedFromInstance; // 0x8
	bool bInstanceSeedIsIndex; // 0x8
	bool bResetSeedOnEmitterLooping; // 0x8
	bool bRandomlySelectSeedArray; // 0x8
	TArray RandomSeeds; // 0x10

};


instance 1ab7160ed40
struct ParticleCurvePair 
{
	// Fields
	FString CurveName; // 0x0
	Object* CurveObject; // 0x10

};


instance 1ab7160ec80
struct BeamModifierOptions 
{
	// Fields
	bool bModify; // 0x0
	bool bScale; // 0x0
	bool bLock; // 0x0

};


instance 1ab7160ebc0
struct ParticleEvent_GenerateInfo 
{
	// Fields
	BYTE Type; // 0x0
	int Frequency; // 0x4
	int ParticleFrequency; // 0x8
	bool FirstTimeOnly; // 0xc
	bool LastTimeOnly; // 0xc
	bool UseReflectedImpactVector; // 0xc
	bool bUseOrbitOffset; // 0xc
	FName CustomName; // 0x10
	TArray ParticleModuleEventsToSendToGame; // 0x18

};


instance 1ab7160eb00
struct LocationBoneSocketInfo 
{
	// Fields
	FName BoneSocketName; // 0x0
	Vector Offset; // 0x8

};


instance 1ab7160ea40
struct OrbitOptions 
{
	// Fields
	bool bProcessDuringSpawn; // 0x0
	bool bProcessDuringUpdate; // 0x0
	bool bUseEmitterTime; // 0x0

};


instance 1ab7160e980
struct EmitterDynamicParameter 
{
	// Fields
	FName ParamName; // 0x0
	bool bUseEmitterTime; // 0x8
	bool bSpawnTimeOnly; // 0x8
	BYTE ValueMethod; // 0xc
	bool bScaleVelocityByParamValue; // 0x10
	RawDistributionFloat ParamValue; // 0x18

};


instance 1ab7160e8c0
struct BeamTargetData 
{
	// Fields
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8

};


instance 1ab7160e800
struct GPUSpriteResourceData 
{
	// Fields
	TArray QuantizedColorSamples; // 0x0
	TArray QuantizedMiscSamples; // 0x10
	TArray QuantizedSimulationAttrSamples; // 0x20
	Vector4 ColorScale; // 0x30
	Vector4 ColorBias; // 0x40
	Vector4 MiscScale; // 0x50
	Vector4 MiscBias; // 0x60
	Vector4 SimulationAttrCurveScale; // 0x70
	Vector4 SimulationAttrCurveBias; // 0x80
	Vector4 SubImageSize; // 0x90
	Vector4 SizeBySpeed; // 0xa0
	Vector ConstantAcceleration; // 0xb0
	Vector OrbitOffsetBase; // 0xbc
	Vector OrbitOffsetRange; // 0xc8
	Vector OrbitFrequencyBase; // 0xd4
	Vector OrbitFrequencyRange; // 0xe0
	Vector OrbitPhaseBase; // 0xec
	Vector OrbitPhaseRange; // 0xf8
	float GlobalVectorFieldScale; // 0x104
	float GlobalVectorFieldTightness; // 0x108
	float PerParticleVectorFieldScale; // 0x10c
	float PerParticleVectorFieldBias; // 0x110
	float DragCoefficientScale; // 0x114
	float DragCoefficientBias; // 0x118
	float ResilienceScale; // 0x11c
	float ResilienceBias; // 0x120
	float CollisionRadiusScale; // 0x124
	float CollisionRadiusBias; // 0x128
	float CollisionTimeBias; // 0x12c
	float CollisionRandomSpread; // 0x130
	float CollisionRandomDistribution; // 0x134
	float OneMinusFriction; // 0x138
	float RotationRateScale; // 0x13c
	float CameraMotionBlurAmount; // 0x140
	BYTE ScreenAlignment; // 0x144
	BYTE LockAxisFlag; // 0x145
	Vector2D PivotOffset; // 0x148
	bool bRemoveHMDRoll; // 0x150
	float MinFacingCameraBlendDistance; // 0x154
	float MaxFacingCameraBlendDistance; // 0x158

};


instance 1ab7160e740
struct GPUSpriteEmitterInfo 
{
	// Fields
	ParticleModuleRequired* RequiredModule; // 0x0
	ParticleModuleSpawn* SpawnModule; // 0x8
	ParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10
	TArray SpawnModules; // 0x18
	GPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30
	FloatDistribution VectorFieldScale; // 0xa0
	FloatDistribution DragCoefficient; // 0xc0
	FloatDistribution PointAttractorStrength; // 0xe0
	FloatDistribution Resilience; // 0x100
	Vector ConstantAcceleration; // 0x120
	Vector PointAttractorPosition; // 0x12c
	float PointAttractorRadiusSq; // 0x138
	Vector OrbitOffsetBase; // 0x13c
	Vector OrbitOffsetRange; // 0x148
	Vector2D InvMaxSize; // 0x154
	float InvRotationRateScale; // 0x15c
	float MaxLifetime; // 0x160
	int MaxParticleCount; // 0x164
	BYTE ScreenAlignment; // 0x168
	BYTE LockAxisFlag; // 0x169
	bool bEnableCollision; // 0x16c
	BYTE CollisionMode; // 0x170
	bool bRemoveHMDRoll; // 0x174
	float MinFacingCameraBlendDistance; // 0x178
	float MaxFacingCameraBlendDistance; // 0x17c
	RawDistributionVector DynamicColor; // 0x180
	RawDistributionFloat DynamicAlpha; // 0x1c8
	RawDistributionVector DynamicColorScale; // 0x1f8
	RawDistributionFloat DynamicAlphaScale; // 0x240

};


instance 1ab7160e680
struct GPUSpriteLocalVectorFieldInfo 
{
	// Fields
	VectorField* Field; // 0x0
	Transform Transform; // 0x10
	Rotator MinInitialRotation; // 0x40
	Rotator MaxInitialRotation; // 0x4c
	Rotator RotationRate; // 0x58
	float Intensity; // 0x64
	float Tightness; // 0x68
	bool bIgnoreComponentTransform; // 0x6c
	bool bTileX; // 0x6c
	bool bTileY; // 0x6c
	bool bTileZ; // 0x6c
	bool bUseFixDT; // 0x6c

};


instance 1ab7160e5c0
struct NamedEmitterMaterial 
{
	// Fields
	FName Name; // 0x0
	MaterialInterface* Material; // 0x8

};


instance 1ab7160e500
struct LODSoloTrack 
{
	// Fields
	TArray SoloEnableSetting; // 0x0

};


instance 1ab7160e440
struct ParticleSystemLOD 
{
	// Fields

};


instance 1ab7160e380
struct ParticleSysParam 
{
	// Fields
	FName Name; // 0x0
	BYTE ParamType; // 0x8
	float Scalar; // 0xc
	float Scalar_Low; // 0x10
	Vector Vector; // 0x14
	Vector Vector_Low; // 0x20
	Color Color; // 0x2c
	Actor* Actor; // 0x30
	MaterialInterface* Material; // 0x38

};


instance 1ab7160e2c0
struct ParticleSystemWorldManagerTickFunction 
{
	// Fields

};


instance 1ab7160e200
struct ParticleSystemReplayFrame 
{
	// Fields

};


instance 1ab7160e140
struct ParticleEmitterReplayFrame 
{
	// Fields

};


instance 1ab7160e080
struct PhysicalAnimationData 
{
	// Fields
	FName BodyName; // 0x0
	bool bIsLocalSimulation; // 0x8
	float OrientationStrength; // 0xc
	float AngularVelocityStrength; // 0x10
	float PositionStrength; // 0x14
	float VelocityStrength; // 0x18
	float MaxLinearForce; // 0x1c
	float MaxAngularForce; // 0x20

};


instance 1ab7160dfc0
struct TireFrictionScalePair 
{
	// Fields
	TireType* TireType; // 0x0
	float FrictionScale; // 0x8

};


instance 1ab7160df00
struct PhysicalAnimationProfile 
{
	// Fields
	FName ProfileName; // 0x0
	PhysicalAnimationData PhysicalAnimationData; // 0x8

};


instance 1ab7160ff40
struct PhysicsConstraintProfileHandle 
{
	// Fields
	ConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x104

};


instance 1ab7160fe80
struct ChaosPhysicsSettings 
{
	// Fields
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2

};


instance 1ab7160fdc0
struct PhysicalSurfaceName 
{
	// Fields
	BYTE Type; // 0x0
	FName Name; // 0x4

};


instance 1ab7160fd00
struct DelegateArray 
{
	// Fields
	TArray Delegates; // 0x0

};


instance 1ab7160fc40
struct ViewTargetTransitionParams 
{
	// Fields
	float BlendTime; // 0x0
	BYTE BlendFunction; // 0x4
	float BlendExp; // 0x8
	bool bLockOutgoing; // 0xc

};


instance 1ab7160fb80
struct TViewTarget 
{
	// Fields
	Actor* Target; // 0x0
	MinimalViewInfo POV; // 0x10
	PlayerState* PlayerState; // 0x5d0

};


instance 1ab7160fac0
struct CameraCacheEntry 
{
	// Fields
	float Timestamp; // 0x0
	MinimalViewInfo POV; // 0x10

};


instance 1ab7160fa00
struct UpdateLevelVisibilityLevelInfo 
{
	// Fields
	FName PackageName; // 0x0
	FName Filename; // 0x8
	bool bIsVisible; // 0x10

};


instance 1ab7160f940
struct UpdateLevelStreamingLevelStatus 
{
	// Fields
	FName PackageName; // 0x0
	int LODIndex; // 0x8
	bool bNewShouldBeLoaded; // 0xc
	bool bNewShouldBeVisible; // 0xc
	bool bNewShouldBlockOnLoad; // 0xc

};


instance 1ab7160f880
struct InputActionSpeechMapping 
{
	// Fields
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8

};


instance 1ab7160f7c0
struct InputAxisKeyMapping 
{
	// Fields
	FName AxisName; // 0x0
	float Scale; // 0x8
	Key Key; // 0x10

};


instance 1ab716e1840
struct InputActionKeyMapping 
{
	// Fields
	FName ActionName; // 0x0
	bool bShift; // 0x8
	bool bCtrl; // 0x8
	bool bAlt; // 0x8
	bool bCmd; // 0x8
	Key Key; // 0x10

};


instance 1ab716e1780
struct InputAxisConfigEntry 
{
	// Fields
	FName AxisKeyName; // 0x0
	InputAxisProperties AxisProperties; // 0x8

};


instance 1ab716e16c0
struct InputAxisProperties 
{
	// Fields
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	bool bInvert; // 0xc

};


instance 1ab716e1600
struct KeyBind 
{
	// Fields
	Key Key; // 0x0
	FString Command; // 0x18
	bool Control; // 0x28
	bool Shift; // 0x28
	bool Alt; // 0x28
	bool Cmd; // 0x28
	bool bIgnoreCtrl; // 0x28
	bool bIgnoreShift; // 0x28
	bool bIgnoreAlt; // 0x28
	bool bIgnoreCmd; // 0x28
	bool bDisabled; // 0x29

};


instance 1ab716e1540
struct PlayerMuteList 
{
	// Fields
	bool bHasVoiceHandshakeCompleted; // 0x30
	int VoiceChannelIdx; // 0x34

};


instance 1ab716e1480
struct PoseDataContainer 
{
	// Fields
	TArray PoseNames; // 0x0
	TArray Tracks; // 0x10
	MapProperty TrackMap; // 0x20 property 0x1ab71163e40 hash 0xadd0fb88
	TArray Poses; // 0x70
	TArray Curves; // 0x80

};


instance 1ab716e13c0
struct PoseData 
{
	// Fields
	TArray LocalSpacePose; // 0x0
	MapProperty TrackToBufferIndex; // 0x10 property 0x1ab71163ee0 hash 0xadd0fb88
	TArray CurveData; // 0x60

};


instance 1ab716e1300
struct PreviewAssetAttachContainer 
{
	// Fields
	TArray AttachedObjects; // 0x0

};


instance 1ab716e1240
struct PreviewAttachedObjectPair 
{
	// Fields
	Object* AttachedObject; // 0x0
	Object* Object; // 0x28
	FName AttachedTo; // 0x30

};


instance 1ab716e1180
struct PreviewMeshCollectionEntry 
{
	// Fields
	SkeletalMesh* SkeletalMesh; // 0x0

};


instance 1ab716e10c0
struct PrimitiveComponentInstanceData 
{
	// Fields
	Transform ComponentTransform; // 0xb0
	int VisibilityId; // 0xe0
	PrimitiveComponent* LODParent; // 0xe8

};


instance 1ab716e1000
struct SpriteCategoryInfo 
{
	// Fields
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20

};


instance 1ab716e0f40
struct CompressedRichCurve 
{
	// Fields

};


instance 1ab716e0e80
struct TransformBase 
{
	// Fields
	FName Node; // 0x0
	TransformBaseConstraint Constraints; // 0x8

};


instance 1ab716e0dc0
struct TransformBaseConstraint 
{
	// Fields
	TArray TransformConstraints; // 0x0

};


instance 1ab716e0d00
struct RigTransformConstraint 
{
	// Fields
	BYTE TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc

};


instance 1ab716e0c40
struct Node 
{
	// Fields
	FName Name; // 0x0
	FName ParentName; // 0x8
	Transform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50

};


instance 1ab716e0b80
struct RootMotionSource 
{
	// Fields
	USHORT Priority; // 0x10
	USHORT LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x20
	float CurrentTime; // 0x24
	float PreviousTime; // 0x28
	float Duration; // 0x2c
	RootMotionSourceStatus Status; // 0x30
	RootMotionSourceSettings Settings; // 0x31
	bool bInLocalSpace; // 0x32
	RootMotionMovementParams RootMotionParams; // 0x40
	RootMotionFinishVelocitySettings FinishVelocityParams; // 0x80

};


instance 1ab716e0ac0
struct RootMotionFinishVelocitySettings 
{
	// Fields
	ERootMotionFinishVelocityMode Mode; // 0x0
	Vector SetVelocity; // 0x4
	float ClampVelocity; // 0x10

};


instance 1ab716e0a00
struct RootMotionSourceStatus 
{
	// Fields
	BYTE Flags; // 0x0

};


instance 1ab716e0940
struct RootMotionSource_JumpForce 
{
	// Fields
	Rotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	CurveVector* PathOffsetCurve; // 0xb0
	CurveFloat* TimeMappingCurve; // 0xb8

};


instance 1ab716e0880
struct RootMotionSource_MoveToDynamicForce 
{
	// Fields
	Vector StartLocation; // 0x98
	Vector InitialTargetLocation; // 0xa4
	Vector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	CurveVector* PathOffsetCurve; // 0xc0
	CurveFloat* TimeMappingCurve; // 0xc8

};


instance 1ab716e07c0
struct RootMotionSource_MoveToForce 
{
	// Fields
	Vector StartLocation; // 0x98
	Vector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	CurveVector* PathOffsetCurve; // 0xb8

};


instance 1ab716e0700
struct RootMotionSource_RadialForce 
{
	// Fields
	Vector Location; // 0x98
	Actor* LocationActor; // 0xa8
	float Radius; // 0xb0
	float Strength; // 0xb4
	bool bIsPush; // 0xb8
	bool bNoZForce; // 0xb9
	CurveFloat* StrengthDistanceFalloff; // 0xc0
	CurveFloat* StrengthOverTime; // 0xc8
	bool bUseFixedWorldDirection; // 0xd0
	Rotator FixedWorldDirection; // 0xd4

};


instance 1ab716e0640
struct RootMotionSource_ConstantForce 
{
	// Fields
	Vector Force; // 0x98
	CurveFloat* StrengthOverTime; // 0xa8

};


instance 1ab716e0580
struct CameraExposureSettings 
{
	// Fields
	BYTE Method; // 0x0
	float LowPercent; // 0x4
	float HighPercent; // 0x8
	float MinBrightness; // 0xc
	float MaxBrightness; // 0x10
	float SpeedUp; // 0x14
	float SpeedDown; // 0x18
	float Bias; // 0x1c
	CurveFloat* BiasCurve; // 0x20
	float HistogramLogMin; // 0x28
	float HistogramLogMax; // 0x2c
	float CalibrationConstant; // 0x30

};


instance 1ab716e04c0
struct LensSettings 
{
	// Fields
	LensBloomSettings Bloom; // 0x0
	LensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8

};


instance 1ab716e0400
struct LensImperfectionSettings 
{
	// Fields
	Texture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	LinearColor DirtMaskTint; // 0xc

};


instance 1ab716e0340
struct LensBloomSettings 
{
	// Fields
	GaussianSumBloomSettings GaussianSum; // 0x0
	ConvolutionBloomSettings Convolution; // 0x88
	BYTE Method; // 0xb0

};


instance 1ab716e0280
struct ConvolutionBloomSettings 
{
	// Fields
	Texture2D* Texture; // 0x0
	float Size; // 0x8
	Vector2D CenterUV; // 0xc
	float PreFilterMin; // 0x14
	float PreFilterMax; // 0x18
	float PreFilterMult; // 0x1c
	float BufferScale; // 0x20

};


instance 1ab716e01c0
struct GaussianSumBloomSettings 
{
	// Fields
	float Intensity; // 0x0
	float Threshold; // 0x4
	float SizeScale; // 0x8
	float Filter1Size; // 0xc
	float Filter2Size; // 0x10
	float Filter3Size; // 0x14
	float Filter4Size; // 0x18
	float Filter5Size; // 0x1c
	float Filter6Size; // 0x20
	LinearColor Filter1Tint; // 0x24
	LinearColor Filter2Tint; // 0x34
	LinearColor Filter3Tint; // 0x44
	LinearColor Filter4Tint; // 0x54
	LinearColor Filter5Tint; // 0x64
	LinearColor Filter6Tint; // 0x74

};


instance 1ab716e0100
struct FilmStockSettings 
{
	// Fields
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10

};


instance 1ab716e0040
struct ColorGradingSettings 
{
	// Fields
	ColorGradePerRangeSettings Global; // 0x0
	ColorGradePerRangeSettings Shadows; // 0x50
	ColorGradePerRangeSettings Midtones; // 0xa0
	ColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144

};


instance 1ab716e3100
struct ColorGradePerRangeSettings 
{
	// Fields
	Vector4 Saturation; // 0x0
	Vector4 Contrast; // 0x10
	Vector4 Gamma; // 0x20
	Vector4 Gain; // 0x30
	Vector4 Offset; // 0x40

};


instance 1ab716e3040
struct EngineShowFlagsSetting 
{
	// Fields
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10

};


instance 1ab716e2f80
struct SimpleCurve 
{
	// Fields
	BYTE InterpMode; // 0x70
	TArray Keys; // 0x78

};


instance 1ab716e2ec0
struct SimpleCurveKey 
{
	// Fields
	float Time; // 0x0
	float Value; // 0x4

};


instance 1ab716e2e00
struct SingleAnimationPlayData 
{
	// Fields
	AnimationAsset* AnimToPlay; // 0x0
	bool bSavedLooping; // 0x8
	bool bSavedPlaying; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10

};


instance 1ab716e2d40
struct SkeletalMaterial 
{
	// Fields
	MaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	MeshUVChannelInfo UVChannelData; // 0x10

};


instance 1ab716e2c80
struct ClothingAssetData_Legacy 
{
	// Fields
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	ClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c

};


instance 1ab716e2bc0
struct ClothPhysicsProperties_Legacy 
{
	// Fields
	float VerticalResistance; // 0x0
	float HorizontalResistance; // 0x4
	float BendResistance; // 0x8
	float ShearResistance; // 0xc
	float Friction; // 0x10
	float Damping; // 0x14
	float TetherStiffness; // 0x18
	float TetherLimit; // 0x1c
	float Drag; // 0x20
	float StiffnessFrequency; // 0x24
	float GravityScale; // 0x28
	float MassScale; // 0x2c
	float InertiaBlend; // 0x30
	float SelfCollisionThickness; // 0x34
	float SelfCollisionSquashScale; // 0x38
	float SelfCollisionStiffness; // 0x3c
	float SolverFrequency; // 0x40
	float FiberCompression; // 0x44
	float FiberExpansion; // 0x48
	float FiberResistance; // 0x4c

};


instance 1ab716e2b00
struct SkeletalMeshLODInfo 
{
	// Fields
	PerPlatformFloat ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	TArray LODMaterialMap; // 0x8
	SkeletalMeshBuildSettings BuildSettings; // 0x18
	SkeletalMeshOptimizationSettings ReductionSettings; // 0x28
	TArray BonesToRemove; // 0x68
	TArray BonesToPrioritize; // 0x78
	float WeightOfPrioritization; // 0x88
	AnimSequence* BakePose; // 0x90
	AnimSequence* BakePoseOverride; // 0x98
	FString SourceImportFilename; // 0xa0
	bool bHasBeenSimplified; // 0xb0
	bool bHasPerLODVertexColors; // 0xb0
	bool bAllowCPUAccess; // 0xb0
	bool bSupportUniformlyDistributedSampling; // 0xb0

};


instance 1ab716e2a40
struct SkeletalMeshOptimizationSettings 
{
	// Fields
	BYTE TerminationCriterion; // 0x0
	float NumOfTrianglesPercentage; // 0x4
	float NumOfVertPercentage; // 0x8
	int MaxNumOfTriangles; // 0xc
	int MaxNumOfVerts; // 0x10
	float MaxDeviationPercentage; // 0x14
	BYTE ReductionMethod; // 0x18
	BYTE SilhouetteImportance; // 0x19
	BYTE TextureImportance; // 0x1a
	BYTE ShadingImportance; // 0x1b
	BYTE SkinningImportance; // 0x1c
	bool bRemapMorphTargets; // 0x1d
	bool bRecalcNormals; // 0x1d
	float WeldingThreshold; // 0x20
	float NormalsThreshold; // 0x24
	int MaxBonesPerVertex; // 0x28
	bool bEnforceBoneBoundaries; // 0x2c
	float VolumeImportance; // 0x30
	bool bLockEdges; // 0x34
	int BaseLOD; // 0x38

};


instance 1ab716e2980
struct SkeletalMeshClothBuildParams 
{
	// Fields
	WeakObjectProperty TargetAsset; // 0x0 property 0x1ab716dcf80 hash 0x24388009
	int TargetLod; // 0x8
	bool bRemapParameters; // 0xc
	FString AssetName; // 0x10
	int LODIndex; // 0x20
	int SourceSection; // 0x24
	bool bRemoveFromMesh; // 0x28
	PhysicsAsset* PhysicsAsset; // 0x30

};


instance 1ab716e28c0
struct BoneMirrorExport 
{
	// Fields
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	BYTE BoneFlipAxis; // 0x10

};


instance 1ab716e2800
struct BoneMirrorInfo 
{
	// Fields
	int SourceIndex; // 0x0
	BYTE BoneFlipAxis; // 0x4

};


instance 1ab716e2740
struct SkeletalMeshComponentClothTickFunction 
{
	// Fields

};


instance 1ab716e2680
struct SkeletalMeshComponentEndPhysicsTickFunction 
{
	// Fields

};


instance 1ab716e25c0
struct SkeletalMeshLODGroupSettings 
{
	// Fields
	PerPlatformFloat ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	EBoneFilterActionOption BoneFilterActionOption; // 0x8
	TArray BoneList; // 0x10
	TArray BonesToPrioritize; // 0x20
	float WeightOfPrioritization; // 0x30
	AnimSequence* BakePose; // 0x38
	SkeletalMeshOptimizationSettings ReductionSettings; // 0x40

};


instance 1ab716e2500
struct BoneFilter 
{
	// Fields
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4

};


instance 1ab716e2440
struct SkeletalMeshSamplingInfo 
{
	// Fields
	TArray Regions; // 0x0
	SkeletalMeshSamplingBuiltData BuiltData; // 0x10

};


instance 1ab716e2380
struct SkeletalMeshSamplingBuiltData 
{
	// Fields
	TArray WholeMeshBuiltData; // 0x0
	TArray RegionBuiltData; // 0x10

};


instance 1ab716e22c0
struct SkeletalMeshSamplingRegionBuiltData 
{
	// Fields

};


instance 1ab716e2200
struct SkeletalMeshSamplingLODBuiltData 
{
	// Fields

};


instance 1ab716e2140
struct SkeletalMeshSamplingRegion 
{
	// Fields
	FName Name; // 0x0
	int LODIndex; // 0x8
	bool bSupportUniformlyDistributedSampling; // 0xc
	TArray MaterialFilters; // 0x10
	TArray BoneFilters; // 0x20

};


instance 1ab716e2080
struct SkeletalMeshSamplingRegionBoneFilter 
{
	// Fields
	FName BoneName; // 0x0
	bool bIncludeOrExclude; // 0x8
	bool bApplyToChildren; // 0x8

};


instance 1ab716e1fc0
struct SkeletalMeshSamplingRegionMaterialFilter 
{
	// Fields
	FName MaterialName; // 0x0

};


instance 1ab716e1f00
struct VirtualBone 
{
	// Fields
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10

};


instance 1ab716e1e40
struct AnimSlotGroup 
{
	// Fields
	FName GroupName; // 0x0
	TArray SlotNames; // 0x8

};


instance 1ab716e1d80
struct RigConfiguration 
{
	// Fields
	Rig* Rig; // 0x0
	TArray BoneMappingTable; // 0x8

};


instance 1ab716e1cc0
struct NameMapping 
{
	// Fields
	FName NodeName; // 0x0
	FName BoneName; // 0x8

};


instance 1ab716e1c00
struct BoneReductionSetting 
{
	// Fields
	TArray BonesToRemove; // 0x0

};


instance 1ab716e1b40
struct ReferencePose 
{
	// Fields
	FName PoseName; // 0x0
	TArray ReferencePose; // 0x8

};


instance 1ab716e1a80
struct BoneNode 
{
	// Fields
	FName Name; // 0x0
	int ParentIndex; // 0x8
	BYTE TranslationRetargetingMode; // 0xc

};


instance 1ab716e19c0
struct SkeletonToMeshLinkup 
{
	// Fields
	TArray SkeletonToMeshTable; // 0x0
	TArray MeshToSkeletonTable; // 0x10

};


instance 1ab716e1900
struct SkelMeshComponentLODInfo 
{
	// Fields
	TArray HiddenMaterials; // 0x0

};


instance 1ab716e49c0
struct SkelMeshSkinWeightInfo 
{
	// Fields
	int Bones; // 0x0
	BYTE Weights; // 0x20

};


instance 1ab716e4900
struct SkinWeightProfileInfo 
{
	// Fields
	FName Name; // 0x0
	PerPlatformBool DefaultProfile; // 0x8
	PerPlatformInt DefaultProfileFromLODIndex; // 0xc

};


instance 1ab716e4840
struct TentDistribution 
{
	// Fields
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8

};


instance 1ab716e4780
struct PrecomputedSkyLightInstanceData 
{
	// Fields
	Guid LightGuid; // 0xa8
	float AverageBrightness; // 0xb8

};


instance 1ab716e46c0
struct SmartNameContainer 
{
	// Fields

};


instance 1ab716e4600
struct SmartNameMapping 
{
	// Fields

};


instance 1ab716e4540
struct CurveMetaData 
{
	// Fields

};


instance 1ab716e4480
struct SoundAttenuationSettings 
{
	// Fields
	bool bAttenuate; // 0xb0
	bool bSpatialize; // 0xb0
	bool bAttenuateWithLPF; // 0xb0
	bool bEnableListenerFocus; // 0xb0
	bool bEnableFocusInterpolation; // 0xb0
	bool bEnableOcclusion; // 0xb0
	bool bUseComplexCollisionForOcclusion; // 0xb0
	bool bEnableReverbSend; // 0xb0
	bool bApplyNormalizationToStereoSounds; // 0xb1
	bool bEnableLogFrequencyScaling; // 0xb1
	BYTE SpatializationAlgorithm; // 0xb2
	float BinauralRadius; // 0xb4
	EAirAbsorptionMethod AbsorptionMethod; // 0xb8
	BYTE OcclusionTraceChannel; // 0xb9
	EReverbSendMethod ReverbSendMethod; // 0xba
	float OmniRadius; // 0xbc
	float StereoSpread; // 0xc0
	float LPFRadiusMin; // 0xc4
	float LPFRadiusMax; // 0xc8
	RuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xd0
	RuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x158
	float LPFFrequencyAtMin; // 0x1e0
	float LPFFrequencyAtMax; // 0x1e4
	float HPFFrequencyAtMin; // 0x1e8
	float HPFFrequencyAtMax; // 0x1ec
	float FocusAzimuth; // 0x1f0
	float NonFocusAzimuth; // 0x1f4
	float FocusDistanceScale; // 0x1f8
	float NonFocusDistanceScale; // 0x1fc
	float FocusPriorityScale; // 0x200
	float NonFocusPriorityScale; // 0x204
	float FocusVolumeAttenuation; // 0x208
	float NonFocusVolumeAttenuation; // 0x20c
	float FocusAttackInterpSpeed; // 0x210
	float FocusReleaseInterpSpeed; // 0x214
	float OcclusionLowPassFilterFrequency; // 0x218
	float OcclusionVolumeAttenuation; // 0x21c
	float OcclusionInterpolationTime; // 0x220
	float ReverbWetLevelMin; // 0x224
	float ReverbWetLevelMax; // 0x228
	float ReverbDistanceMin; // 0x22c
	float ReverbDistanceMax; // 0x230
	float ManualReverbSendLevel; // 0x234
	RuntimeFloatCurve CustomReverbSendCurve; // 0x238
	SoundAttenuationPluginSettings PluginSettings; // 0x2c0

};


instance 1ab716e43c0
struct SoundAttenuationPluginSettings 
{
	// Fields
	TArray SpatializationPluginSettingsArray; // 0x0
	TArray OcclusionPluginSettingsArray; // 0x10
	TArray ReverbPluginSettingsArray; // 0x20

};


instance 1ab716e4300
struct PassiveSoundMixModifier 
{
	// Fields
	SoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc

};


instance 1ab716e4240
struct SoundClassProperties 
{
	// Fields
	float Volume; // 0x0
	float Pitch; // 0x4
	float LowPassFilterFrequency; // 0x8
	float StereoBleed; // 0xc
	float LFEBleed; // 0x10
	float VoiceCenterChannelVolume; // 0x14
	float RadioFilterVolume; // 0x18
	float RadioFilterVolumeThreshold; // 0x1c
	bool bApplyEffects; // 0x20
	bool bAlwaysPlay; // 0x20
	bool bIsUISound; // 0x20
	bool bIsMusic; // 0x20
	bool bReverb; // 0x20
	float Default2DReverbSendAmount; // 0x24
	bool bCenterChannelOnly; // 0x28
	bool bApplyAmbientVolumes; // 0x28
	BYTE OutputTarget; // 0x2c
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x2d

};


instance 1ab716e4180
struct SoundClassEditorData 
{
	// Fields

};


instance 1ab716e40c0
struct SoundConcurrencySettings 
{
	// Fields
	int MaxCount; // 0x0
	bool bLimitToOwner; // 0x4
	BYTE ResolutionRule; // 0x8
	float VolumeScale; // 0xc
	float VolumeScaleAttackTime; // 0x10
	bool bVolumeScaleCanRelease; // 0x14
	float VolumeScaleReleaseTime; // 0x18
	float VoiceStealReleaseTime; // 0x1c

};


instance 1ab716e4000
struct SoundNodeEditorData 
{
	// Fields

};


instance 1ab716e3f40
struct SourceEffectChainEntry 
{
	// Fields
	SoundEffectSourcePreset* Preset; // 0x0
	bool bBypass; // 0x8

};


instance 1ab716e3e80
struct SoundGroup 
{
	// Fields
	BYTE SoundGroup; // 0x0
	FString DisplayName; // 0x8
	bool bAlwaysDecompressOnLoad; // 0x18
	float DecompressedDuration; // 0x1c

};


instance 1ab716e3dc0
struct SoundClassAdjuster 
{
	// Fields
	SoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	bool bApplyToChildren; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18

};


instance 1ab716e3d00
struct AudioEQEffect 
{
	// Fields
	float FrequencyCenter0; // 0x8
	float Gain0; // 0xc
	float Bandwidth0; // 0x10
	float FrequencyCenter1; // 0x14
	float Gain1; // 0x18
	float Bandwidth1; // 0x1c
	float FrequencyCenter2; // 0x20
	float Gain2; // 0x24
	float Bandwidth2; // 0x28
	float FrequencyCenter3; // 0x2c
	float Gain3; // 0x30
	float Bandwidth3; // 0x34

};


instance 1ab716e3c40
struct DistanceDatum 
{
	// Fields
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10

};


instance 1ab716e3b80
struct ModulatorContinuousParams 
{
	// Fields
	FName ParameterName; // 0x0
	float Default; // 0x8
	float MinInput; // 0xc
	float MaxInput; // 0x10
	float MinOutput; // 0x14
	float MaxOutput; // 0x18
	BYTE ParamMode; // 0x1c

};


instance 1ab716e3ac0
struct SoundSourceBusSendInfo 
{
	// Fields
	ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0
	SoundSourceBus* SoundSourceBus; // 0x8
	float SendLevel; // 0x10
	float MinSendLevel; // 0x14
	float MaxSendLevel; // 0x18
	float MinSendDistance; // 0x1c
	float MaxSendDistance; // 0x20
	RuntimeFloatCurve CustomSendLevelCurve; // 0x28

};


instance 1ab716e3a00
struct SoundSubmixSendInfo 
{
	// Fields
	ESendLevelControlMethod SendLevelControlMethod; // 0x0
	SoundSubmix* SoundSubmix; // 0x8
	float SendLevel; // 0x10
	float MinSendLevel; // 0x14
	float MaxSendLevel; // 0x18
	float MinSendDistance; // 0x1c
	float MaxSendDistance; // 0x20
	RuntimeFloatCurve CustomSendLevelCurve; // 0x28

};


instance 1ab716e3940
struct SoundWaveEnvelopeTimeData 
{
	// Fields
	float Amplitude; // 0x0
	float TimeSec; // 0x4

};


instance 1ab716e3880
struct SoundWaveSpectralTimeData 
{
	// Fields
	TArray Data; // 0x0
	float TimeSec; // 0x10

};


instance 1ab716e37c0
struct SoundWaveSpectralDataEntry 
{
	// Fields
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4

};


instance 1ab716e3700
struct SoundWaveEnvelopeDataPerSound 
{
	// Fields
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	SoundWave* SoundWave; // 0x8

};


instance 1ab716e3640
struct SoundWaveSpectralDataPerSound 
{
	// Fields
	TArray SpectralData; // 0x0
	float PlaybackTime; // 0x10
	SoundWave* SoundWave; // 0x18

};


instance 1ab716e3580
struct SoundWaveSpectralData 
{
	// Fields
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8

};


instance 1ab716e34c0
struct StreamedAudioPlatformData 
{
	// Fields

};


instance 1ab716e3400
struct SplineInstanceData 
{
	// Fields
	bool bSplineHasBeenEdited; // 0xa8
	SplineCurves SplineCurves; // 0xb0
	SplineCurves SplineCurvesPreUCS; // 0x118

};


instance 1ab716e3340
struct SplineCurves 
{
	// Fields
	InterpCurveVector Position; // 0x0
	InterpCurveQuat Rotation; // 0x18
	InterpCurveVector Scale; // 0x30
	InterpCurveFloat ReparamTable; // 0x48
	SplineMetadata* MetaData; // 0x60

};


instance 1ab716e3280
struct SplinePoint 
{
	// Fields
	float InputKey; // 0x0
	Vector Position; // 0x4
	Vector ArriveTangent; // 0x10
	Vector LeaveTangent; // 0x1c
	Rotator Rotation; // 0x28
	Vector Scale; // 0x34
	BYTE Type; // 0x40

};


instance 1ab716e31c0
struct SplineMeshInstanceData 
{
	// Fields
	Vector StartPos; // 0xa8
	Vector EndPos; // 0xb4
	Vector StartTangent; // 0xc0
	Vector EndTangent; // 0xcc

};


instance 1ab716e6280
struct SplineMeshParams 
{
	// Fields
	Vector StartPos; // 0x0
	Vector StartTangent; // 0xc
	Vector2D StartScale; // 0x18
	float StartRoll; // 0x20
	Vector2D StartOffset; // 0x24
	Vector EndPos; // 0x2c
	Vector2D EndScale; // 0x38
	Vector EndTangent; // 0x40
	float EndRoll; // 0x4c
	Vector2D EndOffset; // 0x50

};


instance 1ab716e61c0
struct MaterialRemapIndex 
{
	// Fields
	int ImportVersionKey; // 0x0
	TArray MaterialRemap; // 0x8

};


instance 1ab716e6100
struct StaticMaterial 
{
	// Fields
	MaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	MeshUVChannelInfo UVChannelData; // 0x18

};


instance 1ab716e6040
struct AssetEditorOrbitCameraPosition 
{
	// Fields
	bool bIsSet; // 0x0
	Vector CamOrbitPoint; // 0x4
	Vector CamOrbitZoom; // 0x10
	Rotator CamOrbitRotation; // 0x1c

};


instance 1ab716e5f80
struct MeshSectionInfoMap 
{
	// Fields
	MapProperty Map; // 0x0 property 0x1ab711666e0 hash 0xadd0fb88

};


instance 1ab716e5ec0
struct MeshSectionInfo 
{
	// Fields
	int MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5

};


instance 1ab716e5e00
struct StaticMeshSourceModel 
{
	// Fields
	MeshBuildSettings BuildSettings; // 0x0
	MeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	PerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60

};


instance 1ab716e5d40
struct StaticMeshOptimizationSettings 
{
	// Fields
	BYTE ReductionMethod; // 0x0
	float NumOfTrianglesPercentage; // 0x4
	float MaxDeviationPercentage; // 0x8
	float WeldingThreshold; // 0xc
	bool bRecalcNormals; // 0x10
	float NormalsThreshold; // 0x14
	BYTE SilhouetteImportance; // 0x18
	BYTE TextureImportance; // 0x19
	BYTE ShadingImportance; // 0x1a

};


instance 1ab716e5c80
struct StaticMeshComponentInstanceData 
{
	// Fields
	StaticMesh* StaticMesh; // 0xf0
	TArray VertexColorLODs; // 0xf8
	TArray CachedStaticLighting; // 0x108
	TArray StreamingTextureData; // 0x118

};


instance 1ab716e5bc0
struct StreamingTextureBuildInfo 
{
	// Fields
	int PackedRelativeBox; // 0x0
	int TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8

};


instance 1ab716e5b00
struct StaticMeshVertexColorLODData 
{
	// Fields
	TArray PaintedVertices; // 0x0
	TArray VertexBufferColors; // 0x10
	int LODIndex; // 0x20

};


instance 1ab716e5a40
struct PaintedVertex 
{
	// Fields
	Vector Position; // 0x0
	Color Color; // 0xc
	Vector4 Normal; // 0x10

};


instance 1ab716e5980
struct StaticMeshComponentLODInfo 
{
	// Fields

};


instance 1ab716e58c0
struct StaticParameterSet 
{
	// Fields
	TArray StaticSwitchParameters; // 0x0
	TArray StaticComponentMaskParameters; // 0x10
	TArray TerrainLayerWeightParameters; // 0x20
	TArray MaterialLayersParameters; // 0x30

};


instance 1ab716e5800
struct StaticParameterBase 
{
	// Fields
	MaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	Guid ExpressionGUID; // 0x14

};


instance 1ab716e5740
struct StaticMaterialLayersParameter 
{
	// Fields
	MaterialLayersFunctions Value; // 0x28

};


instance 1ab716e5680
struct StaticTerrainLayerWeightParameter 
{
	// Fields
	int WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28

};


instance 1ab716e55c0
struct StaticComponentMaskParameter 
{
	// Fields
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27

};


instance 1ab716e5500
struct StaticSwitchParameter 
{
	// Fields
	bool Value; // 0x24

};


instance 1ab716e5440
struct EquirectProps 
{
	// Fields
	Box2D LeftUVRect; // 0x0
	Box2D RightUVRect; // 0x14
	Vector2D LeftScale; // 0x28
	Vector2D RightScale; // 0x30
	Vector2D LeftBias; // 0x38
	Vector2D RightBias; // 0x40

};


instance 1ab716e5380
struct StringCurve 
{
	// Fields
	FString DefaultValue; // 0x68
	TArray Keys; // 0x78

};


instance 1ab716e52c0
struct StringCurveKey 
{
	// Fields
	float Time; // 0x0
	FString Value; // 0x8

};


instance 1ab716e5200
struct SubsurfaceProfileStruct 
{
	// Fields
	LinearColor SurfaceAlbedo; // 0x0
	LinearColor MeanFreePathColor; // 0x10
	float MeanFreePathDistance; // 0x20
	float WorldUnitScale; // 0x24
	bool bEnableBurley; // 0x28
	float ScatterRadius; // 0x2c
	LinearColor SubsurfaceColor; // 0x30
	LinearColor FalloffColor; // 0x40
	LinearColor BoundaryColorBleed; // 0x50
	float ExtinctionScale; // 0x60
	float NormalScale; // 0x64
	float ScatteringDistribution; // 0x68
	float IOR; // 0x6c
	float Roughness0; // 0x70
	float Roughness1; // 0x74
	float LobeMix; // 0x78
	LinearColor TransmissionTintColor; // 0x7c

};


instance 1ab716e5140
struct TextureFormatSettings 
{
	// Fields
	BYTE CompressionSettings; // 0x0
	bool CompressionNoAlpha; // 0x1
	bool CompressionNone; // 0x1
	bool CompressionYCoCg; // 0x1
	bool SRGB; // 0x1

};


instance 1ab716e5080
struct TexturePlatformData 
{
	// Fields

};


instance 1ab716e4fc0
struct TextureSource 
{
	// Fields

};


instance 1ab716e4f00
struct TextureSourceBlock 
{
	// Fields
	int BlockX; // 0x0
	int BlockY; // 0x4
	int SizeX; // 0x8
	int SizeY; // 0xc
	int NumSlices; // 0x10
	int NumMips; // 0x14

};


instance 1ab716e4e40
struct TextureLODGroup 
{
	// Fields
	BYTE Group; // 0x0
	int LODBias; // 0xc
	int LODBias_Smaller; // 0x10
	int LODBias_Smallest; // 0x14
	int NumStreamedMips; // 0x1c
	BYTE MipGenSettings; // 0x20
	int MinLODSize; // 0x24
	int MaxLODSize; // 0x28
	int MaxLODSize_Smaller; // 0x2c
	int MaxLODSize_Smallest; // 0x30
	int OptionalLODBias; // 0x34
	int OptionalMaxLODSize; // 0x38
	FName MinMagFilter; // 0x40
	FName MipFilter; // 0x48
	ETextureMipLoadOptions MipLoadOptions; // 0x50
	bool DuplicateNonOptionalMips; // 0x51

};


instance 1ab716e4d80
struct StreamingRenderAssetPrimitiveInfo 
{
	// Fields
	StreamableRenderAsset* RenderAsset; // 0x0
	BoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	int PackedRelativeBox; // 0x28
	bool bAllowInvalidTexelFactorWhenUnregistered; // 0x2c

};


instance 1ab716e4cc0
struct Timeline 
{
	// Fields
	BYTE LengthMode; // 0x0
	bool bLooping; // 0x1
	bool bReversePlayback; // 0x1
	bool bPlaying; // 0x1
	float Length; // 0x4
	float PlayRate; // 0x8
	float Position; // 0xc
	TArray Events; // 0x10
	TArray InterpVectors; // 0x20
	TArray InterpFloats; // 0x30
	TArray InterpLinearColors; // 0x40
	DelegateProperty TimelinePostUpdateFunc; // 0x50 property 0x1ab71713b00 hash 0xe1aec4e5
	DelegateProperty TimelineFinishedFunc; // 0x60 property 0x1ab71713b80 hash 0xe1aec4e5
	WeakObjectProperty PropertySetObject; // 0x70 property 0x1ab71713c00 hash 0x24388009
	FName DirectionPropertyName; // 0x78
	Property* DirectionProperty; // 0x90

};


instance 1ab716e4c00
struct TimelineLinearColorTrack 
{
	// Fields
	CurveLinearColor* LinearColorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8 property 0x1ab71713900 hash 0xe1aec4e5
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
	StructProperty* LinearColorProperty; // 0x28

};


instance 1ab716e4b40
struct TimelineFloatTrack 
{
	// Fields
	CurveFloat* FloatCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8 property 0x1ab71713680 hash 0xe1aec4e5
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
	FloatProperty* FloatProperty; // 0x28

};


instance 1ab716e4a80
struct TimelineVectorTrack 
{
	// Fields
	CurveVector* VectorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8 property 0x1ab71713400 hash 0xe1aec4e5
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
	StructProperty* VectorProperty; // 0x28

};


instance 1ab716e7b40
struct TimelineEventEntry 
{
	// Fields
	float Time; // 0x0
	DelegateProperty EventFunc; // 0x4 property 0x1ab71713200 hash 0xe1aec4e5

};


instance 1ab716e7a80
struct TTTrackBase 
{
	// Fields
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10

};


instance 1ab716e79c0
struct TTPropertyTrack 
{
	// Fields
	FName PropertyName; // 0x18

};


instance 1ab716e7900
struct TTLinearColorTrack 
{
	// Fields
	CurveLinearColor* CurveLinearColor; // 0x20

};


instance 1ab716e7840
struct TTVectorTrack 
{
	// Fields
	CurveVector* CurveVector; // 0x20

};


instance 1ab716e7780
struct TTFloatTrack 
{
	// Fields
	CurveFloat* CurveFloat; // 0x20

};


instance 1ab716e76c0
struct TTEventTrack 
{
	// Fields
	FName FunctionName; // 0x18
	CurveFloat* CurveKeys; // 0x20

};


instance 1ab716e7600
struct TimeStretchCurveInstance 
{
	// Fields
	bool bHasValidData; // 0x0

};


instance 1ab716e7540
struct TimeStretchCurve 
{
	// Fields
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray Markers; // 0x8
	float Sum_dT_i_by_C_i; // 0x18

};


instance 1ab716e7480
struct TimeStretchCurveMarker 
{
	// Fields
	float Time; // 0x0
	float Alpha; // 0xc

};


instance 1ab716e73c0
struct TouchInputControl 
{
	// Fields
	Texture2D* Image1; // 0x0
	Texture2D* Image2; // 0x8
	Vector2D Center; // 0x10
	Vector2D VisualSize; // 0x18
	Vector2D ThumbSize; // 0x20
	Vector2D InteractionSize; // 0x28
	Vector2D InputScale; // 0x30
	Key MainInputKey; // 0x38
	Key AltInputKey; // 0x50

};


instance 1ab716e7300
struct HardwareCursorReference 
{
	// Fields
	FName CursorPath; // 0x0
	Vector2D HotSpot; // 0x8

};


instance 1ab716e7240
struct VirtualTextureBuildSettings 
{
	// Fields
	int TileSize; // 0x0
	int TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9

};


instance 1ab716e7180
struct VirtualTextureSpacePoolConfig 
{
	// Fields
	int MinTileSize; // 0x0
	int MaxTileSize; // 0x4
	TArray Formats; // 0x8
	int SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c

};


instance 1ab716e70c0
struct VoiceSettings 
{
	// Fields
	SceneComponent* ComponentToAttachTo; // 0x0
	SoundAttenuation* AttenuationSettings; // 0x8
	SoundEffectSourcePresetChain* SourceEffectChain; // 0x10

};


instance 1ab716e7000
struct StreamingLevelsToConsider 
{
	// Fields
	TArray StreamingLevels; // 0x0

};


instance 1ab716e6f40
struct LevelStreamingWrapper 
{
	// Fields
	LevelStreaming* StreamingLevel; // 0x0

};


instance 1ab716e6e80
struct LevelCollection 
{
	// Fields
	GameStateBase* GameState; // 0x8
	NetDriver* NetDriver; // 0x10
	DemoNetDriver* DemoNetDriver; // 0x18
	Level* PersistentLevel; // 0x20
	SetProperty Levels; // 0x28 property 0x1ab71166640 hash 0xb0194396

};


instance 1ab716e6dc0
struct EndPhysicsTickFunction 
{
	// Fields

};


instance 1ab716e6d00
struct StartPhysicsTickFunction 
{
	// Fields

};


instance 1ab716e6c40
struct LevelViewportInfo 
{
	// Fields
	Vector CamPosition; // 0x0
	Rotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c

};


instance 1ab716e6b80
struct WorldPSCPool 
{
	// Fields
	MapProperty WorldParticleSystemPools; // 0x0 property 0x1ab711665a0 hash 0xadd0fb88

};


instance 1ab716e6ac0
struct PSCPool 
{
	// Fields
	TArray FreeElements; // 0x0
	TArray InUseComponents_Auto; // 0x10
	TArray InUseComponents_Manual; // 0x20

};


instance 1ab716e6a00
struct PSCPoolElem 
{
	// Fields
	ParticleSystemComponent* PSC; // 0x0

};


instance 1ab716e6940
struct BroadphaseSettings 
{
	// Fields
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	Box MBPBounds; // 0x4
	Box MBPOuterBounds; // 0x20
	int MBPNumSubdivs; // 0x3c

};


instance 1ab716e6880
struct HierarchicalSimplification 
{
	// Fields
	float TransitionScreenSize; // 0x0
	float OverrideDrawDistance; // 0x4
	bool bUseOverrideDrawDistance; // 0x8
	bool bAllowSpecificExclusion; // 0x8
	bool bSimplifyMesh; // 0x8
	bool bOnlyGenerateClustersForVolumes; // 0x8
	bool bReusePreviousLevelClusters; // 0x8
	MeshProxySettings ProxySetting; // 0xc
	MeshMergingSettings MergeSetting; // 0xa0
	float DesiredBoundRadius; // 0x12c
	float DesiredFillingPercentage; // 0x130
	int MinNumberOfActorsToBuild; // 0x134

};


instance 1ab716e67c0
struct NetViewer 
{
	// Fields
	NetConnection* Connection; // 0x0
	Actor* InViewer; // 0x8
	Actor* ViewTarget; // 0x10
	Vector ViewLocation; // 0x18
	Vector ViewDir; // 0x24

};


instance 1ab716e6700
struct LightmassWorldInfoSettings 
{
	// Fields
	float StaticLightingLevelScale; // 0x0
	int NumIndirectLightingBounces; // 0x4
	int NumSkyLightingBounces; // 0x8
	float IndirectLightingQuality; // 0xc
	float IndirectLightingSmoothness; // 0x10
	Color EnvironmentColor; // 0x14
	float EnvironmentIntensity; // 0x18
	float EmissiveBoost; // 0x1c
	float DiffuseBoost; // 0x20
	BYTE VolumeLightingMethod; // 0x24
	bool bUseAmbientOcclusion; // 0x25
	bool bGenerateAmbientOcclusionMaterialMask; // 0x25
	bool bVisualizeMaterialDiffuse; // 0x25
	bool bVisualizeAmbientOcclusion; // 0x25
	bool bCompressLightmaps; // 0x25
	float VolumetricLightmapDetailCellSize; // 0x28
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x2c
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30
	float VolumeLightSamplePlacementScale; // 0x34
	float DirectIlluminationOcclusionFraction; // 0x38
	float IndirectIlluminationOcclusionFraction; // 0x3c
	float OcclusionExponent; // 0x40
	float FullyOccludedSamplesFraction; // 0x44
	float MaxOcclusionDistance; // 0x48

};


