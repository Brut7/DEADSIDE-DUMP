instance 1ab5e1e2380
class NavigationData public : Actor
{
	// Fields
	PrimitiveComponent* RenderingComp; // 0x220
	NavDataConfig NavDataConfig; // 0x228
	bool bEnableDrawing; // 0x2a0
	bool bForceRebuildOnLoad; // 0x2a0
	bool bAutoDestroyWhenNoNavigation; // 0x2a0
	bool bCanBeMainNavData; // 0x2a0
	bool bCanSpawnOnRebuild; // 0x2a0
	bool bRebuildAtRuntime; // 0x2a0
	ERuntimeGenerationType RuntimeGeneration; // 0x2a4
	float ObservedPathsTickInterval; // 0x2a8
	int DataVersion; // 0x2ac
	TArray SupportedAreas; // 0x390

};


instance 1ab5e1e25c0
class AbstractNavData public : NavigationData
{
	// Fields

};


instance 1ab5e1e2140
class CrowdManagerBase public : Object
{
	// Fields

};


instance 1ab5e1e1f00
class NavArea public : NavAreaBase
{
	// Fields
	float DefaultCost; // 0x30
	float FixedAreaEnteringCost; // 0x34
	Color DrawColor; // 0x38
	NavAgentSelector SupportedAgents; // 0x3c
	bool bSupportsAgent0; // 0x40
	bool bSupportsAgent1; // 0x40
	bool bSupportsAgent2; // 0x40
	bool bSupportsAgent3; // 0x40
	bool bSupportsAgent4; // 0x40
	bool bSupportsAgent5; // 0x40
	bool bSupportsAgent6; // 0x40
	bool bSupportsAgent7; // 0x40
	bool bSupportsAgent8; // 0x41
	bool bSupportsAgent9; // 0x41
	bool bSupportsAgent10; // 0x41
	bool bSupportsAgent11; // 0x41
	bool bSupportsAgent12; // 0x41
	bool bSupportsAgent13; // 0x41
	bool bSupportsAgent14; // 0x41
	bool bSupportsAgent15; // 0x41

};


instance 1ab5e1e1cc0
class NavArea_Default public : NavArea
{
	// Fields

};


instance 1ab5e1e1a80
class NavArea_LowHeight public : NavArea
{
	// Fields

};


instance 1ab5e1e1840
class NavArea_Null public : NavArea
{
	// Fields

};


instance 1ab5e1e1600
class NavArea_Obstacle public : NavArea
{
	// Fields

};


instance 1ab5e1e13c0
class NavAreaMeta public : NavArea
{
	// Fields

};


instance 1ab5e1e1180
class NavAreaMeta_SwitchByAgent public : NavAreaMeta
{
	// Fields
	NavArea* Agent0Area; // 0x48
	NavArea* Agent1Area; // 0x50
	NavArea* Agent2Area; // 0x58
	NavArea* Agent3Area; // 0x60
	NavArea* Agent4Area; // 0x68
	NavArea* Agent5Area; // 0x70
	NavArea* Agent6Area; // 0x78
	NavArea* Agent7Area; // 0x80
	NavArea* Agent8Area; // 0x88
	NavArea* Agent9Area; // 0x90
	NavArea* Agent10Area; // 0x98
	NavArea* Agent11Area; // 0xa0
	NavArea* Agent12Area; // 0xa8
	NavArea* Agent13Area; // 0xb0
	NavArea* Agent14Area; // 0xb8
	NavArea* Agent15Area; // 0xc0

};


instance 1ab5e1e0f40
class NavCollision public : NavCollisionBase
{
	// Fields
	TArray CylinderCollision; // 0x80
	TArray BoxCollision; // 0x90
	NavArea* AreaClass; // 0xa0
	bool bGatherConvexGeometry; // 0xa8
	bool bCreateOnClient; // 0xa8

};


instance 1ab5e1e0d00
class NavigationGraph public : NavigationData
{
	// Fields

};


instance 1ab5e1e0ac0
class NavigationGraphNode public : Actor
{
	// Fields

};


instance 1ab5e1e0880
class NavigationGraphNodeComponent public : SceneComponent
{
	// Fields
	NavGraphNode Node; // 0x1f0
	NavigationGraphNodeComponent* NextNodeComponent; // 0x208
	NavigationGraphNodeComponent* PrevNodeComponent; // 0x210

};


instance 1ab5e1e0640
class NavigationInvokerComponent public : ActorComponent
{
	// Fields
	float TileGenerationRadius; // 0xb0
	float TileRemovalRadius; // 0xb4

};


instance 1ab5e1e0400
class NavigationPath public : Object
{
	// Fields
	MulticastInlineDelegateProperty PathUpdatedNotifier; // 0x28 property 0x1ab72091100 hash 0xb7a5ed1a
	TArray PathPoints; // 0x38
	BYTE RecalculateOnInvalidation; // 0x48

	// Functions
	IsValid 0x47d13 hash 9a77631 params:( None ReturnValue; );
	IsStringPulled 0x50b9a hash ba26f0fe params:( None ReturnValue; );
	IsPartial 0x50b94 hash 43f3174e params:( None ReturnValue; );
	GetPathLength 0x50b8c hash a0f81294 params:( None ReturnValue; );
	GetPathCost 0x50b85 hash 5e29110b params:( None ReturnValue; );
	GetDebugString 0x50b7d hash 533e0283 params:( None ReturnValue; );
	EnableRecalculationOnInvalidation 0x50b6b hash ad87af11 params:( ENavigationOptionFlag DoRecalculation; );
	EnableDebugDrawing 0x50b61 hash e72cebf params:( None bShouldDrawDebugData;LinearColor PathColor; );
};


instance 1ab5e1e01c0
class NavigationPathGenerator public : Interface
{
	// Fields

};


instance 1ab5e1e9400
class NavigationQueryFilter public : Object
{
	// Fields
	TArray Areas; // 0x28
	NavigationFilterFlags IncludeFlags; // 0x38
	NavigationFilterFlags ExcludeFlags; // 0x3c

};


instance 1ab5e1e91c0
class NavigationSystemV1 public : NavigationSystemBase
{
	// Fields
	NavigationData* MainNavData; // 0x28
	NavigationData* AbstractNavData; // 0x30
	FName DefaultAgentName; // 0x38
	CrowdManagerBase* CrowdManagerClass; // 0x40
	bool bAutoCreateNavigationData; // 0x68
	bool bSpawnNavDataInNavBoundsLevel; // 0x68
	bool bAllowClientSideNavigation; // 0x68
	bool bShouldDiscardSubLevelNavData; // 0x68
	bool bTickWhilePaused; // 0x68
	bool bSupportRebuilding; // 0x68
	bool bInitialBuildingLocked; // 0x68
	bool bSkipAgentHeightCheckWhenPickingNavData; // 0x69
	ENavDataGatheringModeConfig DataGatheringMode; // 0x6c
	bool bGenerateNavigationOnlyAroundNavigationInvokers; // 0x70
	float ActiveTilesUpdateInterval; // 0x74
	TArray SupportedAgents; // 0x78
	NavAgentSelector SupportedAgentsMask; // 0x88
	TArray NavDataSet; // 0x90
	TArray NavDataRegistrationQueue; // 0xa0
	MulticastInlineDelegateProperty OnNavDataRegisteredEvent; // 0xc0 property 0x1ab72096200 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnNavigationGenerationFinishedDelegate; // 0xd0 property 0x1ab72096280 hash 0xb7a5ed1a
	FNavigationSystemRunMode OperationMode; // 0x1bc
	float DirtyAreasUpdateFreq; // 0x514

	// Functions
	UnregisterNavigationInvoker 0x50d05 hash 26429d7b params:( Actor Invoker; );
	SimpleMoveToLocation 0x50cfa hash 4239b722 params:( Controller Controller;Vector Goal; );
	SimpleMoveToActor 0x50cf0 hash 61f08b42 params:( Controller Controller;Actor Goal; );
	SetMaxSimultaneousTileGenerationJobsCount 0x50cda hash f1f5b051 params:( None MaxNumberOfJobs; );
	SetGeometryGatheringMode 0x50ccd hash e8d9f9b params:( UnderlyingType NewMode; );
	ResetMaxSimultaneousTileGenerationJobsCount 0x50cb6 hash 44e17a88 params:(  );
	RegisterNavigationInvoker 0x50ca8 hash 567acf58 params:( Actor Invoker;None TileGenerationRadius;None TileRemovalRadius; );
	ProjectPointToNavigation 0x50c9b hash 8c036cd9 params:( Object WorldContextObject;Vector Point;NavigationData NavData;Class FilterClass;Vector QueryExtent;Vector ReturnValue; );
	OnNavigationBoundsUpdated 0x50c8d hash 1df70124 params:( NavMeshBoundsVolume NavVolume; );
	NavigationRaycast 0x50c83 hash 91408a2c params:( Object WorldContextObject;Vector RayStart;Vector RayEnd;Vector HitLocation;Class FilterClass;Controller Querier;None ReturnValue; );
	K2_ReplaceAreaInOctreeData 0x50c75 hash 98e127c9 params:( Object Object;Class OldArea;Class NewArea;None ReturnValue; );
	K2_ProjectPointToNavigation 0x50c66 hash 50014495 params:( Object WorldContextObject;Vector Point;Vector ProjectedLocation;NavigationData NavData;Class FilterClass;Vector QueryExtent;None ReturnValue; );
	K2_GetRandomReachablePointInRadius 0x50c54 hash 999b4aa2 params:( Object WorldContextObject;Vector Origin;Vector RandomLocation;None Radius;NavigationData NavData;Class FilterClass;None ReturnValue; );
	K2_GetRandomPointInNavigableRadius 0x50c42 hash 8bb338b4 params:( Object WorldContextObject;Vector Origin;Vector RandomLocation;None Radius;NavigationData NavData;Class FilterClass;None ReturnValue; );
	K2_GetRandomLocationInNavigableRadius 0x50c2e hash a6e444a3 params:( Object WorldContextObject;Vector Origin;Vector RandomLocation;None Radius;NavigationData NavData;Class FilterClass;None ReturnValue; );
	IsNavigationBeingBuiltOrLocked 0x50c1e hash b1b5efa9 params:( Object WorldContextObject;None ReturnValue; );
	IsNavigationBeingBuilt 0x50c12 hash 40b54c76 params:( Object WorldContextObject;None ReturnValue; );
	GetRandomReachablePointInRadius 0x50c01 hash a1cfe66 params:( Object WorldContextObject;Vector Origin;None Radius;NavigationData NavData;Class FilterClass;Vector ReturnValue; );
	GetRandomPointInNavigableRadius 0x50bf0 hash fc34ec78 params:( Object WorldContextObject;Vector Origin;None Radius;NavigationData NavData;Class FilterClass;Vector ReturnValue; );
	GetPathLength 0x50b8c hash a0f81294 params:( Object WorldContextObject;Vector PathStart;Vector PathEnd;None PathLength;NavigationData NavData;Class FilterClass;ENavigationQueryResult ReturnValue; );
	GetPathCost 0x50b85 hash 5e29110b params:( Object WorldContextObject;Vector PathStart;Vector PathEnd;None PathCost;NavigationData NavData;Class FilterClass;ENavigationQueryResult ReturnValue; );
	GetNavigationSystem 0x50be5 hash 51cd3f5a params:( Object WorldContextObject;NavigationSystemV1 ReturnValue; );
	FindPathToLocationSynchronously 0x50bd4 hash d5a9ec9f params:( Object WorldContextObject;Vector PathStart;Vector PathEnd;Actor PathfindingContext;Class FilterClass;NavigationPath ReturnValue; );
	FindPathToActorSynchronously 0x50bc5 hash 5d2157df params:( Object WorldContextObject;Vector PathStart;Actor GoalActor;None TetherDistance;Actor PathfindingContext;Class FilterClass;NavigationPath ReturnValue; );
};


instance 1ab5e1e8f80
class NavigationSystemModuleConfig public : NavigationSystemConfig
{
	// Fields
	bool bStrictlyStatic; // 0x50
	bool bCreateOnClient; // 0x50
	bool bAutoSpawnMissingNavData; // 0x50
	bool bSpawnNavDataInNavBoundsLevel; // 0x50

};


instance 1ab5e1e8d40
class NavigationTestingActor public : Actor
{
	// Fields
	CapsuleComponent* CapsuleComponent; // 0x228
	NavigationInvokerComponent* InvokerComponent; // 0x230
	bool bActAsNavigationInvoker; // 0x238
	NavAgentProperties NavAgentProps; // 0x240
	Vector QueryingExtent; // 0x270
	NavigationData* MyNavData; // 0x280
	Vector ProjectedLocation; // 0x288
	bool bProjectedLocationValid; // 0x294
	bool bSearchStart; // 0x294
	bool bBacktracking; // 0x294
	bool bUseHierarchicalPathfinding; // 0x294
	bool bGatherDetailedInfo; // 0x294
	bool bDrawDistanceToWall; // 0x294
	bool bShowNodePool; // 0x294
	bool bShowBestPath; // 0x294
	bool bShowDiffWithPreviousStep; // 0x295
	bool bShouldBeVisibleInGame; // 0x295
	BYTE CostDisplayMode; // 0x298
	Vector2D TextCanvasOffset; // 0x29c
	bool bPathExist; // 0x2a4
	bool bPathIsPartial; // 0x2a4
	bool bPathSearchOutOfNodes; // 0x2a4
	float PathfindingTime; // 0x2a8
	float PathCost; // 0x2ac
	int PathfindingSteps; // 0x2b0
	NavigationTestingActor* OtherActor; // 0x2b8
	NavigationQueryFilter* FilterClass; // 0x2c0
	int ShowStepIndex; // 0x2c8
	float OffsetFromCornersDistance; // 0x2cc

};


instance 1ab5e1e8b00
class NavLinkComponent public : PrimitiveComponent
{
	// Fields
	TArray Links; // 0x3e0

};


instance 1ab5e1e8680
class NavRelevantComponent public : ActorComponent
{
	// Fields
	bool bAttachToOwnersRoot; // 0xd4
	Object* CachedNavParent; // 0xd8

	// Functions
	SetNavigationRelevancy 0x50d4f hash 7736888a params:( None bRelevant; );
};


instance 1ab5e1e88c0
class NavLinkCustomComponent public : NavRelevantComponent
{
	// Fields
	int NavLinkUserId; // 0xe8
	NavArea* EnabledAreaClass; // 0xf0
	NavArea* DisabledAreaClass; // 0xf8
	NavAgentSelector SupportedAgents; // 0x100
	Vector LinkRelativeStart; // 0x104
	Vector LinkRelativeEnd; // 0x110
	BYTE LinkDirection; // 0x11c
	bool bLinkEnabled; // 0x120
	bool bNotifyWhenEnabled; // 0x120
	bool bNotifyWhenDisabled; // 0x120
	bool bCreateBoxObstacle; // 0x120
	Vector ObstacleOffset; // 0x124
	Vector ObstacleExtent; // 0x130
	NavArea* ObstacleAreaClass; // 0x140
	float BroadcastRadius; // 0x148
	float BroadcastInterval; // 0x14c
	BYTE BroadcastChannel; // 0x150

};


instance 1ab5e1e8440
class NavLinkCustomInterface public : Interface
{
	// Fields

};


instance 1ab5e1e8200
class NavLinkHostInterface public : Interface
{
	// Fields

};


instance 1ab5e1e7fc0
class NavLinkRenderingComponent public : PrimitiveComponent
{
	// Fields

};


instance 1ab5e1e7d80
class NavLinkTrivial public : NavLinkDefinition
{
	// Fields

};


instance 1ab5e1e7b40
class NavMeshBoundsVolume public : Volume
{
	// Fields
	NavAgentSelector SupportedAgents; // 0x250

};


instance 1ab5e1e7900
class NavMeshRenderingComponent public : PrimitiveComponent
{
	// Fields

};


instance 1ab5e1e76c0
class NavModifierComponent public : NavRelevantComponent
{
	// Fields
	NavArea* AreaClass; // 0xe0
	Vector FailsafeExtent; // 0xe8
	bool bIncludeAgentHeight; // 0xf4

	// Functions
	SetAreaClass 0x50dac hash b8c879c0 params:( Class NewAreaClass; );
};


instance 1ab5e1e7480
class NavModifierVolume public : Volume
{
	// Fields
	NavArea* AreaClass; // 0x258

	// Functions
	SetAreaClass 0x50dac hash b8c879c0 params:( Class NewAreaClass; );
};


instance 1ab5e1e7240
class NavNodeInterface public : Interface
{
	// Fields

};


instance 1ab5e1e7000
class NavSystemConfigOverride public : Actor
{
	// Fields
	NavigationSystemConfig* NavigationSystemConfig; // 0x218
	ENavSystemOverridePolicy OverridePolicy; // 0x220
	bool bLoadOnClient; // 0x221

};


instance 1ab5e1e6dc0
class NavTestRenderingComponent public : PrimitiveComponent
{
	// Fields

};


instance 1ab5e1e6b80
class RecastFilter_UseDefaultArea public : NavigationQueryFilter
{
	// Fields

};


instance 1ab5e1e6940
class RecastNavMesh public : NavigationData
{
	// Fields
	bool bDrawTriangleEdges; // 0x3f8
	bool bDrawPolyEdges; // 0x3f8
	bool bDrawFilledPolys; // 0x3f8
	bool bDrawNavMeshEdges; // 0x3f8
	bool bDrawTileBounds; // 0x3f8
	bool bDrawPathCollidingGeometry; // 0x3f8
	bool bDrawTileLabels; // 0x3f8
	bool bDrawPolygonLabels; // 0x3f8
	bool bDrawDefaultPolygonCost; // 0x3f9
	bool bDrawLabelsOnPathNodes; // 0x3f9
	bool bDrawNavLinks; // 0x3f9
	bool bDrawFailedNavLinks; // 0x3f9
	bool bDrawClusters; // 0x3f9
	bool bDrawOctree; // 0x3f9
	bool bDrawOctreeDetails; // 0x3f9
	bool bDrawMarkedForbiddenPolys; // 0x3f9
	bool bDistinctlyDrawTilesBeingBuilt; // 0x3fa
	bool bDrawNavMesh; // 0x3fa
	float DrawOffset; // 0x3fc
	bool bFixedTilePoolSize; // 0x400
	int TilePoolSize; // 0x404
	float TileSizeUU; // 0x408
	float CellSize; // 0x40c
	float CellHeight; // 0x410
	float AgentRadius; // 0x414
	float AgentHeight; // 0x418
	float AgentMaxHeight; // 0x41c
	float AgentMaxSlope; // 0x420
	float AgentMaxStepHeight; // 0x424
	float MinRegionArea; // 0x428
	float MergeRegionSize; // 0x42c
	float MaxSimplificationError; // 0x430
	int MaxSimultaneousTileGenerationJobsCount; // 0x434
	int TileNumberHardLimit; // 0x438
	int PolyRefTileBits; // 0x43c
	int PolyRefNavPolyBits; // 0x440
	int PolyRefSaltBits; // 0x444
	Vector NavMeshOriginOffset; // 0x448
	float DefaultDrawDistance; // 0x454
	float DefaultMaxSearchNodes; // 0x458
	float DefaultMaxHierarchicalSearchNodes; // 0x45c
	BYTE RegionPartitioning; // 0x460
	BYTE LayerPartitioning; // 0x461
	int RegionChunkSplits; // 0x464
	int LayerChunkSplits; // 0x468
	bool bSortNavigationAreasByCost; // 0x46c
	bool bPerformVoxelFiltering; // 0x46c
	bool bMarkLowHeightAreas; // 0x46c
	bool bFilterLowSpanSequences; // 0x46c
	bool bFilterLowSpanFromTileCache; // 0x46c
	bool bDoFullyAsyncNavDataGathering; // 0x46c
	bool bUseBetterOffsetsFromCorners; // 0x46c
	bool bStoreEmptyTileLayers; // 0x46c
	bool bUseVirtualFilters; // 0x46d
	bool bAllowNavLinkAsPathEnd; // 0x46d
	bool bUseVoxelCache; // 0x46d
	float TileSetUpdateInterval; // 0x470
	float HeuristicScale; // 0x474
	float VerticalDeviationFromGroundCompensation; // 0x478

	// Functions
	K2_ReplaceAreaInTileBounds 0x50df8 hash cc686186 params:( Box Bounds;Class OldArea;Class NewArea;None ReplaceLinks;None ReturnValue; );
};


instance 1ab5e1e6700
class RecastNavMeshDataChunk public : NavigationDataChunk
{
	// Fields

};


instance 1ab716e8680
struct NavCollisionBox 
{
	// Fields
	Vector Offset; // 0x0
	Vector Extent; // 0xc

};


instance 1ab716e85c0
struct NavCollisionCylinder 
{
	// Fields
	Vector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10

};


instance 1ab716e8500
struct SupportedAreaData 
{
	// Fields
	FString AreaClassName; // 0x0
	int AreaID; // 0x10
	Object* AreaClass; // 0x18

};


instance 1ab716e8440
struct NavGraphNode 
{
	// Fields
	Object* Owner; // 0x0

};


instance 1ab716e8380
struct NavGraphEdge 
{
	// Fields

};


instance 1ab716e82c0
struct NavigationFilterFlags 
{
	// Fields
	bool bNavFlag0; // 0x0
	bool bNavFlag1; // 0x0
	bool bNavFlag2; // 0x0
	bool bNavFlag3; // 0x0
	bool bNavFlag4; // 0x0
	bool bNavFlag5; // 0x0
	bool bNavFlag6; // 0x0
	bool bNavFlag7; // 0x0
	bool bNavFlag8; // 0x1
	bool bNavFlag9; // 0x1
	bool bNavFlag10; // 0x1
	bool bNavFlag11; // 0x1
	bool bNavFlag12; // 0x1
	bool bNavFlag13; // 0x1
	bool bNavFlag14; // 0x1
	bool bNavFlag15; // 0x1

};


instance 1ab716e8200
struct NavigationFilterArea 
{
	// Fields
	NavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	bool bIsExcluded; // 0x10
	bool bOverrideTravelCost; // 0x10
	bool bOverrideEnteringCost; // 0x10

};


instance 1ab716e8140
struct NavLinkCustomInstanceData 
{
	// Fields
	int NavLinkUserId; // 0x58

};


instance 1ab716e8080
struct RecastNavMeshGenerationProperties 
{
	// Fields
	int TilePoolSize; // 0x0
	float TileSizeUU; // 0x4
	float CellSize; // 0x8
	float CellHeight; // 0xc
	float AgentRadius; // 0x10
	float AgentHeight; // 0x14
	float AgentMaxSlope; // 0x18
	float AgentMaxStepHeight; // 0x1c
	float MinRegionArea; // 0x20
	float MergeRegionSize; // 0x24
	float MaxSimplificationError; // 0x28
	int TileNumberHardLimit; // 0x2c
	BYTE RegionPartitioning; // 0x30
	BYTE LayerPartitioning; // 0x31
	int RegionChunkSplits; // 0x34
	int LayerChunkSplits; // 0x38
	bool bSortNavigationAreasByCost; // 0x3c
	bool bPerformVoxelFiltering; // 0x3c
	bool bMarkLowHeightAreas; // 0x3c
	bool bFilterLowSpanSequences; // 0x3c
	bool bFilterLowSpanFromTileCache; // 0x3c
	bool bFixedTilePoolSize; // 0x3c

};


