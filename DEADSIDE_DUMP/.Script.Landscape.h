instance 1ab5e0f6dc0
class ControlPointMeshActor public : Actor
{
	// Fields
	ControlPointMeshComponent* ControlPointMeshComponent; // 0x218

};


instance 1ab5e0f6b80
class ControlPointMeshComponent public : StaticMeshComponent
{
	// Fields
	float VirtualTextureMainPassMaxDrawDistance; // 0x468

};


instance 1ab5e0f6700
class LandscapeProxy public : Actor
{
	// Fields
	LandscapeSplinesComponent* SplineComponent; // 0x218
	Guid LandscapeGuid; // 0x220
	IntPoint LandscapeSectionOffset; // 0x230
	int MaxLODLevel; // 0x238
	float LODDistanceFactor; // 0x23c
	BYTE LODFalloff; // 0x240
	float ComponentScreenSizeToUseSubSections; // 0x244
	float LOD0ScreenSize; // 0x248
	float LOD0DistributionSetting; // 0x24c
	float LODDistributionSetting; // 0x250
	float TessellationComponentScreenSize; // 0x254
	bool UseTessellationComponentScreenSizeFalloff; // 0x258
	float TessellationComponentScreenSizeFalloff; // 0x25c
	int OccluderGeometryLOD; // 0x260
	int StaticLightingLOD; // 0x264
	PhysicalMaterial* DefaultPhysMaterial; // 0x268
	float StreamingDistanceMultiplier; // 0x270
	MaterialInterface* LandscapeMaterial; // 0x278
	MaterialInterface* LandscapeHoleMaterial; // 0x280
	TArray LandscapeMaterialsOverride; // 0x288
	TArray RuntimeVirtualTextures; // 0x298
	int VirtualTextureNumLods; // 0x2a8
	int VirtualTextureLodBias; // 0x2ac
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2b0
	float NegativeZBoundsExtension; // 0x2b4
	float PositiveZBoundsExtension; // 0x2b8
	TArray LandscapeComponents; // 0x2c0
	TArray CollisionComponents; // 0x2d0
	TArray FoliageComponents; // 0x2e0
	bool bHasLandscapeGrass; // 0x354
	float StaticLightingResolution; // 0x358
	bool bCastStaticShadow; // 0x35c
	bool bCastShadowAsTwoSided; // 0x35c
	bool bCastFarShadow; // 0x35c
	bool bAffectDistanceFieldLighting; // 0x360
	LightingChannels LightingChannels; // 0x361
	bool bUseMaterialPositionOffsetInStaticLighting; // 0x364
	bool bRenderCustomDepth; // 0x364
	int CustomDepthStencilValue; // 0x368
	float LDMaxDrawDistance; // 0x36c
	LightmassPrimitiveSettings LightmassSettings; // 0x370
	int CollisionMipLevel; // 0x388
	int SimpleCollisionMipLevel; // 0x38c
	float CollisionThickness; // 0x390
	BodyInstance BodyInstance; // 0x398
	bool bGenerateOverlapEvents; // 0x4a8
	bool bBakeMaterialPositionOffsetIntoCollision; // 0x4a8
	int ComponentSizeQuads; // 0x4ac
	int SubsectionSizeQuads; // 0x4b0
	int NumSubsections; // 0x4b4
	bool bUsedForNavigation; // 0x4b8
	bool bUseDynamicMaterialInstance; // 0x4bc
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x4bd
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x4be
	bool bHasLayersContent; // 0x4bf
	MapProperty WeightmapUsageMap; // 0x4c0 property 0x1ab711654c0 hash 0xadd0fb88

	// Functions
	SetLandscapeMaterialVectorParameterValue 0x45e95 hash 8e3a45fc params:( None ParameterName;LinearColor Value; );
	SetLandscapeMaterialTextureParameterValue 0x45e7f hash 533b853a params:( None ParameterName;Texture Value; );
	SetLandscapeMaterialScalarParameterValue 0x45e6a hash aa2c87bf params:( None ParameterName;None Value; );
	EditorSetLandscapeMaterial 0x45e5c hash 2c69a152 params:( MaterialInterface NewLandscapeMaterial; );
	EditorApplySpline 0x45e52 hash 481e505d params:( SplineComponent InSplineComponent;None StartWidth;None EndWidth;None StartSideFalloff;None EndSideFalloff;None StartRoll;None EndRoll;None NumSubdivisions;None bRaiseHeights;None bLowerHeights;LandscapeLayerInfoObject PaintLayer; );
	ChangeUseTessellationComponentScreenSizeFalloff 0x45e39 hash f2820837 params:( None InComponentScreenSizeToUseSubSections; );
	ChangeTessellationComponentScreenSizeFalloff 0x45e22 hash 30ff398a params:( None InUseTessellationComponentScreenSizeFalloff; );
	ChangeTessellationComponentScreenSize 0x45e0e hash a3d168b0 params:( None InTessellationComponentScreenSize; );
	ChangeLODDistanceFactor 0x45e01 hash 2125d374 params:( None InLODDistanceFactor; );
	ChangeComponentScreenSizeToUseSubSections 0x45deb hash f03b5d9b params:( None InComponentScreenSizeToUseSubSections; );
};


instance 1ab5e0f6940
class Landscape public : LandscapeProxy
{
	// Fields

};


instance 1ab5e0f64c0
class LandscapeBlueprintBrushBase public : Actor
{
	// Fields

	// Functions
	RequestLandscapeUpdate 0x45eb9 hash b072317c params:(  );
	Render 0x17485 hash ce87bbc5 params:( None InIsHeightmap;TextureRenderTarget2D InCombinedResult;None InWeightmapLayerName;TextureRenderTarget2D ReturnValue; );
	Initialize 0x1747f hash 2e93a277 params:( Transform InLandscapeTransform;IntPoint InLandscapeSize;IntPoint InLandscapeRenderTargetSize; );
	GetBlueprintRenderDependencies 0x1746f hash 2d867c41 params:( OutStreamableAssets OutStreamableAssets; );
};


instance 1ab5e0f6280
class LandscapeComponent public : PrimitiveComponent
{
	// Fields
	int SectionBaseX; // 0x3d8
	int SectionBaseY; // 0x3dc
	int ComponentSizeQuads; // 0x3e0
	int SubsectionSizeQuads; // 0x3e4
	int NumSubsections; // 0x3e8
	MaterialInterface* OverrideMaterial; // 0x3f0
	MaterialInterface* OverrideHoleMaterial; // 0x3f8
	TArray OverrideMaterials; // 0x400
	TArray MaterialInstances; // 0x410
	TArray MaterialInstancesDynamic; // 0x420
	TArray LODIndexToMaterialIndex; // 0x430
	TArray MaterialIndexToDisabledTessellationMaterial; // 0x440
	Texture2D* XYOffsetmapTexture; // 0x450
	Vector4 WeightmapScaleBias; // 0x460
	float WeightmapSubsectionOffset; // 0x470
	Vector4 HeightmapScaleBias; // 0x480
	Box CachedLocalBox; // 0x490
	LazyObjectProperty CollisionComponent; // 0x4ac property 0x1ab71b70c00 hash 0xbcf63421
	Texture2D* HeightmapTexture; // 0x4c8
	TArray WeightmapLayerAllocations; // 0x4d0
	TArray WeightmapTextures; // 0x4e0
	Guid MapBuildDataId; // 0x4f0
	TArray IrrelevantLights; // 0x500
	int CollisionMipLevel; // 0x510
	int SimpleCollisionMipLevel; // 0x514
	float NegativeZBoundsExtension; // 0x518
	float PositiveZBoundsExtension; // 0x51c
	float StaticLightingResolution; // 0x520
	int ForcedLOD; // 0x524
	int LODBias; // 0x528
	Guid StateId; // 0x52c
	Guid BakedTextureMaterialGuid; // 0x53c
	Texture2D* GIBakedBaseColorTexture; // 0x550
	BYTE MobileBlendableLayerMask; // 0x558
	MaterialInterface* MobileMaterialInterface; // 0x560
	TArray MobileMaterialInterfaces; // 0x568
	TArray MobileWeightmapTextures; // 0x578

	// Functions
	GetMaterialInstanceDynamic 0x45ef8 hash 24c05b8e params:( None InIndex;MaterialInstanceDynamic ReturnValue; );
	EditorGetPaintLayerWeightByNameAtLocation 0x45ee2 hash aa2e06b7 params:( Vector InLocation;None InPaintLayerName;None ReturnValue; );
	EditorGetPaintLayerWeightAtLocation 0x45ecf hash f3ed5edb params:( Vector InLocation;LandscapeLayerInfoObject PaintLayer;None ReturnValue; );
};


instance 1ab5e0f5e00
class LandscapeGizmoActor public : Actor
{
	// Fields

};


instance 1ab5e0f6040
class LandscapeGizmoActiveActor public : LandscapeGizmoActor
{
	// Fields

};


instance 1ab5e0f5bc0
class LandscapeGizmoRenderComponent public : PrimitiveComponent
{
	// Fields

};


instance 1ab5e0f5980
class LandscapeGrassType public : Object
{
	// Fields
	TArray GrassVarieties; // 0x28
	bool bEnableDensityScaling; // 0x38
	StaticMesh* GrassMesh; // 0x40
	float GrassDensity; // 0x48
	float PlacementJitter; // 0x4c
	int StartCullDistance; // 0x50
	int EndCullDistance; // 0x54
	bool RandomRotation; // 0x58
	bool AlignToSurface; // 0x59

};


instance 1ab5e0f5740
class LandscapeHeightfieldCollisionComponent public : PrimitiveComponent
{
	// Fields
	TArray ComponentLayerInfos; // 0x3d8
	int SectionBaseX; // 0x3e8
	int SectionBaseY; // 0x3ec
	int CollisionSizeQuads; // 0x3f0
	float CollisionScale; // 0x3f4
	int SimpleCollisionSizeQuads; // 0x3f8
	TArray CollisionQuadFlags; // 0x400
	Guid HeightfieldGuid; // 0x410
	Box CachedLocalBox; // 0x420
	LazyObjectProperty RenderComponent; // 0x43c property 0x1ab71b72100 hash 0xbcf63421
	TArray CookedPhysicalMaterials; // 0x468

	// Functions
	GetRenderComponent 0x45f4d hash f13dea18 params:( LandscapeComponent ReturnValue; );
};


instance 1ab5e0f5500
class LandscapeInfo public : Object
{
	// Fields
	LazyObjectProperty LandscapeActor; // 0x28 property 0x1ab71b71b80 hash 0xbcf63421
	Guid LandscapeGuid; // 0x44
	int ComponentSizeQuads; // 0x54
	int SubsectionSizeQuads; // 0x58
	int ComponentNumSubsections; // 0x5c
	Vector DrawScale; // 0x60
	TArray Proxies; // 0x110

};


instance 1ab5e0f52c0
class LandscapeInfoMap public : Object
{
	// Fields

};


instance 1ab5e0f5080
class LandscapeLayerInfoObject public : Object
{
	// Fields
	FName LayerName; // 0x28
	PhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	LinearColor LayerUsageDebugColor; // 0x3c

};


instance 1ab5e0f4e40
class LandscapeMaterialInstanceConstant public : MaterialInstanceConstant
{
	// Fields
	bool bIsLayerThumbnail; // 0x1d8
	bool bDisableTessellation; // 0x1d8
	bool bMobile; // 0x1d8
	bool bEditorToolUsage; // 0x1d8

};


instance 1ab5e0fd9c0
class LandscapeMeshCollisionComponent public : LandscapeHeightfieldCollisionComponent
{
	// Fields
	Guid MeshGuid; // 0x4b8

};


instance 1ab5e0fd780
class LandscapeMeshProxyActor public : Actor
{
	// Fields
	LandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x218

};


instance 1ab5e0fd540
class LandscapeMeshProxyComponent public : StaticMeshComponent
{
	// Fields
	Guid LandscapeGuid; // 0x468
	TArray ProxyComponentBases; // 0x478
	char ProxyLOD; // 0x488

};


instance 1ab5e0fd300
class LandscapeSettings public : DeveloperSettings
{
	// Fields
	int MaxNumberOfLayers; // 0x38

};


instance 1ab5e0fce80
class LandscapeSplinesComponent public : PrimitiveComponent
{
	// Fields
	TArray ControlPoints; // 0x3d8
	TArray Segments; // 0x3e8
	TArray CookedForeignMeshComponents; // 0x3f8

	// Functions
	GetSplineMeshComponents 0x4604a hash c5f77d63 params:( ReturnValue ReturnValue; );
};


instance 1ab5e0fd0c0
class LandscapeSplineControlPoint public : Object
{
	// Fields
	Vector Location; // 0x28
	Rotator Rotation; // 0x34
	float Width; // 0x40
	float LayerWidthRatio; // 0x44
	float SideFalloff; // 0x48
	float LeftSideFalloffFactor; // 0x4c
	float RightSideFalloffFactor; // 0x50
	float LeftSideLayerFalloffFactor; // 0x54
	float RightSideLayerFalloffFactor; // 0x58
	float EndFalloff; // 0x5c
	TArray ConnectedSegments; // 0x60
	TArray Points; // 0x70
	Box Bounds; // 0x80
	ControlPointMeshComponent* LocalMeshComponent; // 0xa0

};


instance 1ab5e0fcc40
class LandscapeSplineSegment public : Object
{
	// Fields
	LandscapeSplineSegmentConnection Connections; // 0x28
	InterpCurveVector SplineInfo; // 0x58
	TArray Points; // 0x70
	Box Bounds; // 0x80
	TArray LocalMeshComponents; // 0xa0

};


instance 1ab5e0fca00
class LandscapeStreamingProxy public : LandscapeProxy
{
	// Fields
	LazyObjectProperty LandscapeActor; // 0x510 property 0x1ab71b73c00 hash 0xbcf63421

};


instance 1ab5e0fc7c0
class LandscapeWeightmapUsage public : Object
{
	// Fields
	LandscapeComponent* ChannelUsage; // 0x28
	Guid LayerGuid; // 0x48

};


instance 1ab5e0fc580
class MaterialExpressionLandscapeGrassOutput public : MaterialExpressionCustomOutput
{
	// Fields
	TArray GrassTypes; // 0x40

};


instance 1ab5e0fc100
class MaterialExpressionLandscapeLayerBlend public : MaterialExpression
{
	// Fields
	TArray Layers; // 0x40
	Guid ExpressionGUID; // 0x50

};


instance 1ab5e0fbec0
class MaterialExpressionLandscapeLayerCoords public : MaterialExpression
{
	// Fields
	BYTE MappingType; // 0x40
	BYTE CustomUVType; // 0x41
	float MappingScale; // 0x44
	float MappingRotation; // 0x48
	float MappingPanU; // 0x4c
	float MappingPanV; // 0x50

};


instance 1ab5e0fbc80
class MaterialExpressionLandscapeLayerSample public : MaterialExpression
{
	// Fields
	FName ParameterName; // 0x40
	float PreviewWeight; // 0x48
	Guid ExpressionGUID; // 0x4c

};


instance 1ab5e0fba40
class MaterialExpressionLandscapeLayerSwitch public : MaterialExpression
{
	// Fields
	ExpressionInput LayerUsed; // 0x40
	ExpressionInput LayerNotUsed; // 0x54
	FName ParameterName; // 0x68
	bool PreviewUsed; // 0x70
	Guid ExpressionGUID; // 0x74

};


instance 1ab5e0fb800
class MaterialExpressionLandscapeLayerWeight public : MaterialExpression
{
	// Fields
	ExpressionInput Base; // 0x40
	ExpressionInput Layer; // 0x54
	FName ParameterName; // 0x68
	float PreviewWeight; // 0x70
	Vector ConstBase; // 0x74
	Guid ExpressionGUID; // 0x80

};


instance 1ab5e0fb5c0
class MaterialExpressionLandscapeVisibilityMask public : MaterialExpression
{
	// Fields
	Guid ExpressionGUID; // 0x40

};


instance 1ab7145bc80
struct LandscapeLayer 
{
	// Fields
	Guid Guid; // 0x0
	FName Name; // 0x10
	bool bVisible; // 0x18
	bool bLocked; // 0x19
	float HeightmapAlpha; // 0x1c
	float WeightmapAlpha; // 0x20
	BYTE BlendMode; // 0x24
	TArray Brushes; // 0x28
	MapProperty WeightmapLayerAllocationBlend; // 0x38 property 0x1ab71164c00 hash 0xadd0fb88

};


instance 1ab7145bbc0
struct LandscapeLayerBrush 
{
	// Fields

};


instance 1ab7145bb00
struct LandscapeLayerComponentData 
{
	// Fields
	HeightmapData HeightmapData; // 0x0
	WeightmapData WeightmapData; // 0x8

};


instance 1ab7145ba40
struct WeightmapData 
{
	// Fields
	TArray Textures; // 0x0
	TArray LayerAllocations; // 0x10
	TArray TextureUsages; // 0x20

};


instance 1ab7145b980
struct WeightmapLayerAllocationInfo 
{
	// Fields
	LandscapeLayerInfoObject* LayerInfo; // 0x0
	BYTE WeightmapTextureIndex; // 0x8
	BYTE WeightmapTextureChannel; // 0x9

};


instance 1ab7145b8c0
struct HeightmapData 
{
	// Fields
	Texture2D* Texture; // 0x0

};


instance 1ab7145b800
struct LandscapeComponentMaterialOverride 
{
	// Fields
	PerPlatformInt LODIndex; // 0x0
	MaterialInterface* Material; // 0x8

};


instance 1ab7145b740
struct LandscapeEditToolRenderData 
{
	// Fields
	MaterialInterface* ToolMaterial; // 0x0
	MaterialInterface* GizmoMaterial; // 0x8
	int SelectedType; // 0x10
	int DebugChannelR; // 0x14
	int DebugChannelG; // 0x18
	int DebugChannelB; // 0x1c
	Texture2D* DataTexture; // 0x20
	Texture2D* LayerContributionTexture; // 0x28
	Texture2D* DirtyTexture; // 0x30

};


instance 1ab7145b680
struct GizmoSelectData 
{
	// Fields

};


instance 1ab7145b5c0
struct GrassVariety 
{
	// Fields
	StaticMesh* GrassMesh; // 0x0
	PerPlatformFloat GrassDensity; // 0x8
	bool bUseGrid; // 0xc
	float PlacementJitter; // 0x10
	PerPlatformInt StartCullDistance; // 0x14
	PerPlatformInt EndCullDistance; // 0x18
	int MinLOD; // 0x1c
	EGrassScaling Scaling; // 0x20
	FloatInterval ScaleX; // 0x24
	FloatInterval ScaleY; // 0x2c
	FloatInterval ScaleZ; // 0x34
	bool RandomRotation; // 0x3c
	bool AlignToSurface; // 0x3d
	bool bUseLandscapeLightmap; // 0x3e
	LightingChannels LightingChannels; // 0x3f
	bool bReceivesDecals; // 0x40
	bool bCastDynamicShadow; // 0x41
	bool bKeepInstanceBufferCPUCopy; // 0x42

};


instance 1ab7145b500
struct LandscapeInfoLayerSettings 
{
	// Fields
	LandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8

};


instance 1ab7145b440
struct LandscapeProxyMaterialOverride 
{
	// Fields
	PerPlatformInt LODIndex; // 0x0
	MaterialInterface* Material; // 0x8

};


instance 1ab7145b380
struct LandscapeImportLayerInfo 
{
	// Fields

};


instance 1ab7145b2c0
struct LandscapeLayerStruct 
{
	// Fields
	LandscapeLayerInfoObject* LayerInfoObj; // 0x0

};


instance 1ab7145b200
struct LandscapeEditorLayerSettings 
{
	// Fields

};


instance 1ab7145b140
struct LandscapeSplineConnection 
{
	// Fields
	LandscapeSplineSegment* Segment; // 0x0
	bool End; // 0x8

};


instance 1ab7145b080
struct ForeignWorldSplineData 
{
	// Fields

};


instance 1ab7145afc0
struct ForeignSplineSegmentData 
{
	// Fields

};


instance 1ab7145af00
struct ForeignControlPointData 
{
	// Fields

};


instance 1ab7145ae40
struct LandscapeSplineMeshEntry 
{
	// Fields
	StaticMesh* Mesh; // 0x0
	TArray MaterialOverrides; // 0x8
	bool bCenterH; // 0x18
	Vector2D CenterAdjust; // 0x1c
	bool bScaleToWidth; // 0x24
	Vector Scale; // 0x28
	BYTE Orientation; // 0x34
	BYTE ForwardAxis; // 0x35
	BYTE UpAxis; // 0x36

};


instance 1ab7145ad80
struct LandscapeSplineSegmentConnection 
{
	// Fields
	LandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc

};


instance 1ab7145de40
struct LandscapeSplineInterpPoint 
{
	// Fields
	Vector Center; // 0x0
	Vector Left; // 0xc
	Vector Right; // 0x18
	Vector FalloffLeft; // 0x24
	Vector FalloffRight; // 0x30
	Vector LayerLeft; // 0x3c
	Vector LayerRight; // 0x48
	Vector LayerFalloffLeft; // 0x54
	Vector LayerFalloffRight; // 0x60
	float StartEndFalloff; // 0x6c

};


instance 1ab7145dd80
struct GrassInput 
{
	// Fields
	FName Name; // 0x0
	LandscapeGrassType* GrassType; // 0x8
	ExpressionInput Input; // 0x10

};


instance 1ab7145dcc0
struct LayerBlendInput 
{
	// Fields
	FName LayerName; // 0x0
	BYTE BlendType; // 0x8
	ExpressionInput LayerInput; // 0xc
	ExpressionInput HeightInput; // 0x20
	float PreviewWeight; // 0x34
	Vector ConstLayerInput; // 0x38
	float ConstHeightInput; // 0x44

};


