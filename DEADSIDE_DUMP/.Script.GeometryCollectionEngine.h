instance 1ab5e210400
class ChaosDestructionListener public : SceneComponent
{
	// Fields
	bool bIsCollisionEventListeningEnabled; // 0x1f0
	bool bIsBreakingEventListeningEnabled; // 0x1f0
	bool bIsTrailingEventListeningEnabled; // 0x1f0
	ChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x1f4
	ChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x20c
	ChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x224
	SetProperty ChaosSolverActors; // 0x240 property 0x1ab71168620 hash 0xb0194396
	SetProperty GeometryCollectionActors; // 0x290 property 0x1ab711686c0 hash 0xb0194396
	MulticastInlineDelegateProperty OnCollisionEvents; // 0x2e0 property 0x1ab72235180 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnBreakingEvents; // 0x2f0 property 0x1ab72235200 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnTrailingEvents; // 0x300 property 0x1ab72235280 hash 0xb7a5ed1a

	// Functions
	SortTrailingEvents 0x51f6c hash 52f3dcdc params:( TrailingEvents TrailingEvents;UnderlyingType SortMethod; );
	SortCollisionEvents 0x51f61 hash bac98c2e params:( CollisionEvents CollisionEvents;UnderlyingType SortMethod; );
	SortBreakingEvents 0x51f57 hash bd4d09e5 params:( BreakingEvents BreakingEvents;UnderlyingType SortMethod; );
	SetTrailingEventRequestSettings 0x51f46 hash 7e0bc7c7 params:( ChaosTrailingEventRequestSettings InSettings; );
	SetTrailingEventEnabled 0x51f39 hash eae0dc58 params:( None bIsEnabled; );
	SetCollisionEventRequestSettings 0x51f28 hash 98b18319 params:( ChaosCollisionEventRequestSettings InSettings; );
	SetCollisionEventEnabled 0x51f1b hash cd3165aa params:( None bIsEnabled; );
	SetBreakingEventRequestSettings 0x51f0a hash dbf29090 params:( ChaosBreakingEventRequestSettings InSettings; );
	SetBreakingEventEnabled 0x51efd hash a573ec21 params:( None bIsEnabled; );
	RemoveGeometryCollectionActor 0x51eed hash dbafabc4 params:( GeometryCollectionActor GeometryCollectionActor; );
	RemoveChaosSolverActor 0x51ee1 hash 25a919f5 params:( ChaosSolverActor ChaosSolverActor; );
	IsEventListening 0x51ed8 hash b91e59f0 params:( None ReturnValue; );
	AddGeometryCollectionActor 0x51eca hash cf8ae1bf params:( GeometryCollectionActor GeometryCollectionActor; );
	AddChaosSolverActor 0x51ebf hash 5084e450 params:( ChaosSolverActor ChaosSolverActor; );
};


instance 1ab5e2101c0
class GeometryCollectionActor public : Actor
{
	// Fields
	GeometryCollectionComponent* GeometryCollectionComponent; // 0x218
	GeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x220

	// Functions
	RaycastSingle 0x51f83 hash ededd6de params:( Vector Start;Vector End;HitResult OutHit;None ReturnValue; );
};


instance 1ab5e219400
class GeometryCollectionCache public : Object
{
	// Fields
	RecordedTransformTrack RecordedData; // 0x28
	GeometryCollection* SupportedCollection; // 0x38
	Guid CompatibleCollectionState; // 0x40

};


instance 1ab5e2191c0
class GeometryCollectionComponent public : MeshComponent
{
	// Fields
	ChaosSolverActor* ChaosSolverActor; // 0x408
	GeometryCollection* RestCollection; // 0x4f0
	TArray InitializationFields; // 0x4f8
	bool Simulating; // 0x508
	EObjectStateTypeEnum ObjectType; // 0x510
	bool EnableClustering; // 0x511
	int ClusterGroupIndex; // 0x514
	int MaxClusterLevel; // 0x518
	TArray DamageThreshold; // 0x520
	EClusterConnectionTypeEnum ClusterConnectionType; // 0x530
	int CollisionGroup; // 0x534
	float CollisionSampleFraction; // 0x538
	ChaosPhysicalMaterial* PhysicalMaterial; // 0x540
	EInitialVelocityTypeEnum InitialVelocityType; // 0x548
	Vector InitialLinearVelocity; // 0x54c
	Vector InitialAngularVelocity; // 0x558
	GeomComponentCacheParameters CacheParameters; // 0x568
	MulticastInlineDelegateProperty NotifyGeometryCollectionPhysicsStateChange; // 0x5b8 property 0x1ab71425780 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x5c8 property 0x1ab71425800 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnChaosBreakEvent; // 0x5f0 property 0x1ab71425880 hash 0xb7a5ed1a
	float DesiredCacheTime; // 0x600
	bool CachePlayback; // 0x604
	MulticastInlineDelegateProperty OnChaosPhysicsCollision; // 0x608 property 0x1ab71425980 hash 0xb7a5ed1a
	bool bNotifyBreaks; // 0x618
	bool bNotifyCollisions; // 0x619
	BodySetup* DummyBodySetup; // 0x7c8
	DelegateFunction NotifyGeometryCollectionPhysicsStateChange__DelegateSignature; // 0x0 property 0x1ab71410b00 hash 0x8ad2d5e6
	DelegateFunction NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature; // 0x0 property 0x1ab71410be0 hash 0x8ad2d5e6

	// Functions
	SetNotifyBreaks 0x51fb2 hash 609ff302 params:( None bNewNotifyBreaks; );
	ReceivePhysicsCollision 0x3beb5 hash 5c0e2ab7 params:( ChaosPhysicsCollisionInfo CollisionInfo; );
	ApplyPhysicsField 0x51cf6 hash 7de365b2 params:( None Enabled;UnderlyingType Target;FieldSystemMetaData MetaData;FieldNodeBase Field; );
	ApplyKinematicField 0x51fa7 hash cf629ea4 params:( None Radius;Vector Position; );
};


instance 1ab5e218f80
class GeometryCollectionDebugDrawActor public : Actor
{
	// Fields
	GeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x218
	GeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x220
	bool bDebugDrawWholeCollection; // 0x238
	bool bDebugDrawHierarchy; // 0x239
	bool bDebugDrawClustering; // 0x23a
	EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x23b
	bool bShowRigidBodyId; // 0x23c
	bool bShowRigidBodyCollision; // 0x23d
	bool bCollisionAtOrigin; // 0x23e
	bool bShowRigidBodyTransform; // 0x23f
	bool bShowRigidBodyInertia; // 0x240
	bool bShowRigidBodyVelocity; // 0x241
	bool bShowRigidBodyForce; // 0x242
	bool bShowRigidBodyInfos; // 0x243
	bool bShowTransformIndex; // 0x244
	bool bShowTransform; // 0x245
	bool bShowParent; // 0x246
	bool bShowLevel; // 0x247
	bool bShowConnectivityEdges; // 0x248
	bool bShowGeometryIndex; // 0x249
	bool bShowGeometryTransform; // 0x24a
	bool bShowBoundingBox; // 0x24b
	bool bShowFaces; // 0x24c
	bool bShowFaceIndices; // 0x24d
	bool bShowFaceNormals; // 0x24e
	bool bShowSingleFace; // 0x24f
	int SingleFaceIndex; // 0x250
	bool bShowVertices; // 0x254
	bool bShowVertexIndices; // 0x255
	bool bShowVertexNormals; // 0x256
	bool bUseActiveVisualization; // 0x257
	float PointThickness; // 0x258
	float LineThickness; // 0x25c
	bool bTextShadow; // 0x260
	float TextScale; // 0x264
	float NormalScale; // 0x268
	float AxisScale; // 0x26c
	float ArrowScale; // 0x270
	Color RigidBodyIdColor; // 0x274
	float RigidBodyTransformScale; // 0x278
	Color RigidBodyCollisionColor; // 0x27c
	Color RigidBodyInertiaColor; // 0x280
	Color RigidBodyVelocityColor; // 0x284
	Color RigidBodyForceColor; // 0x288
	Color RigidBodyInfoColor; // 0x28c
	Color TransformIndexColor; // 0x290
	float TransformScale; // 0x294
	Color LevelColor; // 0x298
	Color ParentColor; // 0x29c
	float ConnectivityEdgeThickness; // 0x2a0
	Color GeometryIndexColor; // 0x2a4
	float GeometryTransformScale; // 0x2a8
	Color BoundingBoxColor; // 0x2ac
	Color FaceColor; // 0x2b0
	Color FaceIndexColor; // 0x2b4
	Color FaceNormalColor; // 0x2b8
	Color SingleFaceColor; // 0x2bc
	Color VertexColor; // 0x2c0
	Color VertexIndexColor; // 0x2c4
	Color VertexNormalColor; // 0x2c8
	BillboardComponent* SpriteComponent; // 0x2d0

};


instance 1ab5e218d40
class GeometryCollectionDebugDrawComponent public : ActorComponent
{
	// Fields
	GeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0
	GeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8

};


instance 1ab5e218b00
class GeometryCollection public : Object
{
	// Fields
	TArray Materials; // 0x30
	ECollisionTypeEnum CollisionType; // 0x40
	EImplicitTypeEnum ImplicitType; // 0x41
	int MinLevelSetResolution; // 0x44
	int MaxLevelSetResolution; // 0x48
	int MinClusterLevelSetResolution; // 0x4c
	int MaxClusterLevelSetResolution; // 0x50
	float CollisionObjectReductionPercentage; // 0x54
	bool bMassAsDensity; // 0x58
	float Mass; // 0x5c
	float MinimumMassClamp; // 0x60
	float CollisionParticlesFraction; // 0x64
	int MaximumCollisionParticles; // 0x68
	TArray SizeSpecificData; // 0x70
	bool EnableRemovePiecesOnFracture; // 0x80
	TArray RemoveOnFractureMaterials; // 0x88
	Guid PersistentGuid; // 0x98
	Guid StateGuid; // 0xa8
	int BoneSelectedMaterialIndex; // 0xb8

};


instance 1ab5e2188c0
class GeometryCollectionRenderLevelSetActor public : Actor
{
	// Fields
	VolumeTexture* TargetVolumeTexture; // 0x218
	Material* RayMarchMaterial; // 0x220
	float SurfaceTolerance; // 0x228
	float Isovalue; // 0x22c
	bool Enabled; // 0x230
	bool RenderVolumeBoundingBox; // 0x231

};


instance 1ab5e218680
class SkeletalMeshSimulationComponent public : ActorComponent
{
	// Fields
	ChaosPhysicalMaterial* PhysicalMaterial; // 0xb8
	ChaosSolverActor* ChaosSolverActor; // 0xc0
	PhysicsAsset* OverridePhysicsAsset; // 0xc8
	bool bSimulating; // 0xd0
	bool bNotifyCollisions; // 0xd1
	EObjectStateTypeEnum ObjectType; // 0xd2
	float Density; // 0xd4
	float MinMass; // 0xd8
	float MaxMass; // 0xdc
	ECollisionTypeEnum CollisionType; // 0xe0
	float ImplicitShapeParticlesPerUnitArea; // 0xe4
	int ImplicitShapeMinNumParticles; // 0xe8
	int ImplicitShapeMaxNumParticles; // 0xec
	int MinLevelSetResolution; // 0xf0
	int MaxLevelSetResolution; // 0xf4
	int CollisionGroup; // 0xf8
	EInitialVelocityTypeEnum InitialVelocityType; // 0xfc
	Vector InitialLinearVelocity; // 0x100
	Vector InitialAngularVelocity; // 0x10c
	MulticastInlineDelegateProperty OnChaosPhysicsCollision; // 0x118 property 0x1ab72236580 hash 0xb7a5ed1a

	// Functions
	ReceivePhysicsCollision 0x3beb5 hash 5c0e2ab7 params:( ChaosPhysicsCollisionInfo CollisionInfo; );
};


instance 1ab5e218440
class StaticMeshSimulationComponent public : ActorComponent
{
	// Fields
	bool Simulating; // 0xb8
	bool bNotifyCollisions; // 0xb9
	EObjectStateTypeEnum ObjectType; // 0xba
	float Mass; // 0xbc
	ECollisionTypeEnum CollisionType; // 0xc0
	EImplicitTypeEnum ImplicitType; // 0xc1
	int MinLevelSetResolution; // 0xc4
	int MaxLevelSetResolution; // 0xc8
	EInitialVelocityTypeEnum InitialVelocityType; // 0xcc
	Vector InitialLinearVelocity; // 0xd0
	Vector InitialAngularVelocity; // 0xdc
	float DamageThreshold; // 0xe8
	ChaosPhysicalMaterial* PhysicalMaterial; // 0xf0
	ChaosSolverActor* ChaosSolverActor; // 0xf8
	MulticastInlineDelegateProperty OnChaosPhysicsCollision; // 0x100 property 0x1ab72237d80 hash 0xb7a5ed1a
	TArray SimulatedComponents; // 0x120

	// Functions
	ReceivePhysicsCollision 0x3beb5 hash 5c0e2ab7 params:( ChaosPhysicsCollisionInfo CollisionInfo; );
	ForceRecreatePhysicsState 0x5201e hash f491ba03 params:(  );
};


instance 1ab70e9c880
struct GeomComponentCacheParameters 
{
	// Fields
	EGeometryCollectionCacheType CacheMode; // 0x0
	GeometryCollectionCache* TargetCache; // 0x8
	float ReverseCacheBeginTime; // 0x10
	bool SaveCollisionData; // 0x14
	bool DoGenerateCollisionData; // 0x15
	int CollisionDataSizeMax; // 0x18
	bool DoCollisionDataSpatialHash; // 0x1c
	float CollisionDataSpatialHashRadius; // 0x20
	int MaxCollisionPerCell; // 0x24
	bool SaveBreakingData; // 0x28
	bool DoGenerateBreakingData; // 0x29
	int BreakingDataSizeMax; // 0x2c
	bool DoBreakingDataSpatialHash; // 0x30
	float BreakingDataSpatialHashRadius; // 0x34
	int MaxBreakingPerCell; // 0x38
	bool SaveTrailingData; // 0x3c
	bool DoGenerateTrailingData; // 0x3d
	int TrailingDataSizeMax; // 0x40
	float TrailingMinSpeedThreshold; // 0x44
	float TrailingMinVolumeThreshold; // 0x48

};


instance 1ab70e9c7c0
struct ChaosCollisionEventData 
{
	// Fields
	Vector Location; // 0x0
	Vector Normal; // 0xc
	Vector Velocity1; // 0x18
	Vector Velocity2; // 0x24
	float Mass1; // 0x30
	float Mass2; // 0x34
	Vector Impulse; // 0x38

};


instance 1ab70e9c700
struct ChaosBreakingEventData 
{
	// Fields
	Vector Location; // 0x0
	Vector Velocity; // 0xc
	float Mass; // 0x18
	int ParticleIndex; // 0x1c

};


instance 1ab70e9c640
struct ChaosTrailingEventData 
{
	// Fields
	Vector Location; // 0x0
	Vector Velocity; // 0xc
	Vector AngularVelocity; // 0x18
	float Mass; // 0x24
	int ParticleIndex; // 0x28

};


instance 1ab716e94c0
struct ChaosBreakingEventRequestSettings 
{
	// Fields
	int MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14

};


instance 1ab716ec580
struct ChaosCollisionEventRequestSettings 
{
	// Fields
	int MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14

};


instance 1ab716ec4c0
struct ChaosTrailingEventRequestSettings 
{
	// Fields
	int MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14

};


instance 1ab716ec400
struct GeometryCollectionDebugDrawActorSelectedRigidBody 
{
	// Fields
	int ID; // 0x0
	ChaosSolverActor* Solver; // 0x8
	GeometryCollectionActor* GeometryCollection; // 0x10

};


instance 1ab716ec340
struct GeometryCollectionDebugDrawWarningMessage 
{
	// Fields

};


instance 1ab716ec280
struct GeometryCollectionSizeSpecificData 
{
	// Fields
	float MaxSize; // 0x0
	ECollisionTypeEnum CollisionType; // 0x4
	EImplicitTypeEnum ImplicitType; // 0x5
	int MinLevelSetResolution; // 0x8
	int MaxLevelSetResolution; // 0xc
	int MinClusterLevelSetResolution; // 0x10
	int MaxClusterLevelSetResolution; // 0x14
	int CollisionObjectReductionPercentage; // 0x18
	float CollisionParticlesFraction; // 0x1c
	int MaximumCollisionParticles; // 0x20

};


