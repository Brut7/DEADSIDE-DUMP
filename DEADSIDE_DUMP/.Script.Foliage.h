instance 1ab5e099880
class FoliageInstancedStaticMeshComponent public : HierarchicalInstancedStaticMeshComponent
{
	// Fields
	MulticastInlineDelegateProperty OnInstanceTakePointDamage; // 0x5e8 property 0x1ab718e0a80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnInstanceTakeRadialDamage; // 0x5f8 property 0x1ab718e0b00 hash 0xb7a5ed1a

};


instance 1ab5e0f8b00
class FoliageStatistics public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	FoliageOverlappingSphereCount 0x45d2d hash 84fc14d3 params:( Object WorldContextObject;StaticMesh StaticMesh;Vector CenterPosition;None Radius;None ReturnValue; );
	FoliageOverlappingBoxCount 0x45d1f hash b48293b5 params:( Object WorldContextObject;StaticMesh StaticMesh;Box Box;None ReturnValue; );
};


instance 1ab5e0f88c0
class FoliageType public : Object
{
	// Fields
	Guid UpdateGuid; // 0x28
	float Density; // 0x38
	float DensityAdjustmentFactor; // 0x3c
	float Radius; // 0x40
	bool bSingleInstanceModeOverrideRadius; // 0x44
	float SingleInstanceModeRadius; // 0x48
	EFoliageScaling Scaling; // 0x4c
	FloatInterval ScaleX; // 0x50
	FloatInterval ScaleY; // 0x58
	FloatInterval ScaleZ; // 0x60
	FoliageVertexColorChannelMask VertexColorMaskByChannel; // 0x68
	BYTE VertexColorMask; // 0x98
	float VertexColorMaskThreshold; // 0x9c
	bool VertexColorMaskInvert; // 0xa0
	FloatInterval ZOffset; // 0xa4
	bool AlignToNormal; // 0xac
	float AlignMaxAngle; // 0xb0
	bool RandomYaw; // 0xb4
	float RandomPitchAngle; // 0xb8
	FloatInterval GroundSlopeAngle; // 0xbc
	FloatInterval Height; // 0xc4
	TArray LandscapeLayers; // 0xd0
	float MinimumLayerWeight; // 0xe0
	TArray ExclusionLandscapeLayers; // 0xe8
	float MinimumExclusionLayerWeight; // 0xf8
	FName LandscapeLayer; // 0xfc
	bool CollisionWithWorld; // 0x104
	Vector CollisionScale; // 0x108
	BoxSphereBounds MeshBounds; // 0x114
	Vector LowBoundOriginRadius; // 0x130
	BYTE Mobility; // 0x13c
	Int32Interval CullDistance; // 0x140
	bool bEnableStaticLighting; // 0x148
	bool CastShadow; // 0x148
	bool bAffectDynamicIndirectLighting; // 0x148
	bool bAffectDistanceFieldLighting; // 0x148
	bool bCastDynamicShadow; // 0x148
	bool bCastStaticShadow; // 0x148
	bool bCastShadowAsTwoSided; // 0x148
	bool bReceivesDecals; // 0x148
	bool bOverrideLightMapRes; // 0x149
	int OverriddenLightMapRes; // 0x14c
	ELightmapType LightmapType; // 0x150
	bool bUseAsOccluder; // 0x154
	BodyInstance BodyInstance; // 0x158
	BYTE CustomNavigableGeometry; // 0x268
	LightingChannels LightingChannels; // 0x269
	bool bRenderCustomDepth; // 0x26c
	int CustomDepthStencilValue; // 0x270
	int TranslucencySortPriority; // 0x274
	float CollisionRadius; // 0x278
	float ShadeRadius; // 0x27c
	int NumSteps; // 0x280
	float InitialSeedDensity; // 0x284
	float AverageSpreadDistance; // 0x288
	float SpreadVariance; // 0x28c
	int SeedsPerStep; // 0x290
	int DistributionSeed; // 0x294
	float MaxInitialSeedOffset; // 0x298
	bool bCanGrowInShade; // 0x29c
	bool bSpawnsInShade; // 0x29d
	float MaxInitialAge; // 0x2a0
	float MaxAge; // 0x2a4
	float OverlapPriority; // 0x2a8
	FloatInterval ProceduralScale; // 0x2ac
	RuntimeFloatCurve ScaleCurve; // 0x2b8
	int ChangeCount; // 0x340
	bool ReapplyDensity; // 0x344
	bool ReapplyRadius; // 0x344
	bool ReapplyAlignToNormal; // 0x344
	bool ReapplyRandomYaw; // 0x344
	bool ReapplyScaling; // 0x344
	bool ReapplyScaleX; // 0x344
	bool ReapplyScaleY; // 0x344
	bool ReapplyScaleZ; // 0x344
	bool ReapplyRandomPitchAngle; // 0x345
	bool ReapplyGroundSlope; // 0x345
	bool ReapplyHeight; // 0x345
	bool ReapplyLandscapeLayers; // 0x345
	bool ReapplyZOffset; // 0x345
	bool ReapplyCollisionWithWorld; // 0x345
	bool ReapplyVertexColorMask; // 0x345
	bool bEnableDensityScaling; // 0x345
	TArray RuntimeVirtualTextures; // 0x348
	int VirtualTextureCullMips; // 0x358
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x35c

};


instance 1ab5e0f8680
class FoliageType_Actor public : FoliageType
{
	// Fields
	Actor* ActorClass; // 0x360
	bool bShouldAttachToBaseComponent; // 0x368

};


instance 1ab5e0f8440
class FoliageType_InstancedStaticMesh public : FoliageType
{
	// Fields
	StaticMesh* Mesh; // 0x360
	TArray OverrideMaterials; // 0x368
	FoliageInstancedStaticMeshComponent* ComponentClass; // 0x378

};


instance 1ab5e0f8200
class InstancedFoliageActor public : Actor
{
	// Fields

};


instance 1ab5e0f7fc0
class InteractiveFoliageActor public : StaticMeshActor
{
	// Fields
	CapsuleComponent* CapsuleComponent; // 0x228
	Vector TouchingActorEntryPosition; // 0x230
	Vector FoliageVelocity; // 0x23c
	Vector FoliageForce; // 0x248
	Vector FoliagePosition; // 0x254
	float FoliageDamageImpulseScale; // 0x260
	float FoliageTouchImpulseScale; // 0x264
	float FoliageStiffness; // 0x268
	float FoliageStiffnessQuadratic; // 0x26c
	float FoliageDamping; // 0x270
	float MaxDamageImpulse; // 0x274
	float MaxTouchImpulse; // 0x278
	float MaxForce; // 0x27c
	float Mass; // 0x280

	// Functions
	CapsuleTouched 0x434c0 hash 7528be1e params:( PrimitiveComponent OverlappedComp;Actor Other;PrimitiveComponent OtherComp;None OtherBodyIndex;None bFromSweep;HitResult OverlapInfo; );
};


instance 1ab5e0f7b40
class InteractiveFoliageComponent public : StaticMeshComponent
{
	// Fields

};


instance 1ab5e0f7900
class ProceduralFoliageBlockingVolume public : Volume
{
	// Fields
	ProceduralFoliageVolume* ProceduralFoliageVolume; // 0x250

};


instance 1ab5e0f76c0
class ProceduralFoliageComponent public : ActorComponent
{
	// Fields
	ProceduralFoliageSpawner* FoliageSpawner; // 0xb0
	float TileOverlap; // 0xb8
	Volume* SpawningVolume; // 0xc0
	Guid ProceduralGuid; // 0xc8

};


instance 1ab5e0f7480
class ProceduralFoliageSpawner public : Object
{
	// Fields
	int RandomSeed; // 0x28
	float TileSize; // 0x2c
	int NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray FoliageTypes; // 0x40
	bool bNeedsSimulation; // 0x50

	// Functions
	Simulate 0x45dab hash ae729e89 params:( None NumSteps; );
};


instance 1ab5e0f7240
class ProceduralFoliageTile public : Object
{
	// Fields
	ProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray InstancesArray; // 0xd0

};


instance 1ab5e0f7000
class ProceduralFoliageVolume public : Volume
{
	// Fields
	ProceduralFoliageComponent* ProceduralComponent; // 0x250

};


instance 1ab7145bec0
struct FoliageVertexColorChannelMask 
{
	// Fields
	bool UseMask; // 0x0
	float MaskThreshold; // 0x4
	bool InvertMask; // 0x8

};


instance 1ab7145be00
struct FoliageTypeObject 
{
	// Fields
	Object* FoliageTypeObject; // 0x0
	FoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	FoliageType_InstancedStaticMesh* Type; // 0x18

};


instance 1ab7145bd40
struct ProceduralFoliageInstance 
{
	// Fields
	Vector Location; // 0x0
	Quat Rotation; // 0x10
	Vector Normal; // 0x20
	float Age; // 0x2c
	float Scale; // 0x30
	FoliageType* Type; // 0x38

};


