instance 1ab5c9fde40
class MaterialExpressionSpriteTextureSampler public : MaterialExpressionTextureSampleParameter2D
{
	// Fields
	bool bSampleAdditionalTextures; // 0xf0
	int AdditionalSlotIndex; // 0xf4
	FText SlotDisplayName; // 0xf8

};


instance 1ab5c9fd0c0
class PaperCharacter public : Character
{
	// Fields
	PaperFlipbookComponent* Sprite; // 0x628

};


instance 1ab5c9fc7c0
class PaperFlipbook public : Object
{
	// Fields
	float FramesPerSecond; // 0x28
	TArray KeyFrames; // 0x30
	MaterialInterface* DefaultMaterial; // 0x40
	BYTE CollisionSource; // 0x48

	// Functions
	IsValidKeyFrameIndex 0x3f544 hash 35b1f5d params:( None Index;None ReturnValue; );
	GetTotalDuration 0x3f53b hash c4ebeb2f params:( None ReturnValue; );
	GetSpriteAtTime 0x3f532 hash 1121f140 params:( None Time;None bClampToEnds;PaperSprite ReturnValue; );
	GetSpriteAtFrame 0x3f529 hash 34677ffc params:( None FrameIndex;PaperSprite ReturnValue; );
	GetNumKeyFrames 0x3f520 hash 33a4a5dc params:( None ReturnValue; );
	GetNumFrames 0x3f519 hash 489a9ab3 params:( None ReturnValue; );
	GetKeyFrameIndexAtTime 0x3f50d hash 8b739d15 params:( None Time;None bClampToEnds;None ReturnValue; );
};


instance 1ab5c9fc580
class PaperFlipbookActor public : Actor
{
	// Fields
	PaperFlipbookComponent* RenderComponent; // 0x218

};


instance 1ab5e0549c0
class PaperFlipbookComponent public : MeshComponent
{
	// Fields
	PaperFlipbook* SourceFlipbook; // 0x400
	MaterialInterface* Material; // 0x408
	float PlayRate; // 0x410
	bool bLooping; // 0x414
	bool bReversePlayback; // 0x414
	bool bPlaying; // 0x414
	float AccumulatedTime; // 0x418
	int CachedFrameIndex; // 0x41c
	LinearColor SpriteColor; // 0x420
	BodySetup* CachedBodySetup; // 0x430
	MulticastInlineDelegateProperty OnFinishedPlaying; // 0x438 property 0x1ab7173f400 hash 0xb7a5ed1a

	// Functions
	Stop 0x3e2ef hash 7c8c8f2b params:(  );
	SetSpriteColor 0x3fbbe hash 5b0e4f07 params:( LinearColor NewColor; );
	SetPlayRate 0x3fbb7 hash c22bc733 params:( None NewRate; );
	SetPlaybackPositionInFrames 0x3fba8 hash 51f5f722 params:( None NewFramePosition;None bFireEvents; );
	SetPlaybackPosition 0x3fb9d hash 7c3bb7ad params:( None NewPosition;None bFireEvents; );
	SetNewTime 0x3fb97 hash f078c38a params:( None NewTime; );
	SetLooping 0x3fb91 hash 6d567709 params:( None bNewLooping; );
	SetFlipbook 0x3fb8a hash 99a8dfe7 params:( PaperFlipbook NewFlipbook;None ReturnValue; );
	ReverseFromEnd 0x3fb82 hash fa3a6b4c params:(  );
	Reverse 0x3fb7d hash a010bca1 params:(  );
	PlayFromStart 0x3fb75 hash c6b288dd params:(  );
	Play 0x3fb72 hash 7c8ac63b params:(  );
	OnRep_SourceFlipbook 0x3fb67 hash bde6e46f params:( PaperFlipbook OldFlipbook; );
	IsReversing 0x3fb60 hash b8aea716 params:( None ReturnValue; );
	IsPlaying 0x3e2d2 hash 5c6af535 params:( None ReturnValue; );
	IsLooping 0x3fb5a hash 3079e3b9 params:( None ReturnValue; );
	GetPlayRate 0x3fb53 hash 81d34827 params:( None ReturnValue; );
	GetPlaybackPositionInFrames 0x3fb44 hash 6848e016 params:( None ReturnValue; );
	GetPlaybackPosition 0x3fb39 hash 31feeca1 params:( None ReturnValue; );
	GetFlipbookLengthInFrames 0x3fb2b hash ba34ba72 params:( None ReturnValue; );
	GetFlipbookLength 0x3fb21 hash 7ed42afd params:( None ReturnValue; );
	GetFlipbookFramerate 0x3fb16 hash 7e956572 params:( None ReturnValue; );
	GetFlipbook 0x3fb0f hash 595060db params:( PaperFlipbook ReturnValue; );
};


instance 1ab5e054300
class PaperGroupedSpriteActor public : Actor
{
	// Fields
	PaperGroupedSpriteComponent* RenderComponent; // 0x218

};


instance 1ab5e0540c0
class PaperGroupedSpriteComponent public : MeshComponent
{
	// Fields
	TArray InstanceMaterials; // 0x400
	TArray PerInstanceSpriteData; // 0x410

	// Functions
	UpdateInstanceTransform 0x3fc24 hash 25c5c799 params:( None InstanceIndex;Transform NewInstanceTransform;None bWorldSpace;None bMarkRenderStateDirty;None bTeleport;None ReturnValue; );
	UpdateInstanceColor 0x3fc19 hash 349dd05c params:( None InstanceIndex;LinearColor NewInstanceColor;None bMarkRenderStateDirty;None ReturnValue; );
	SortInstancesAlongAxis 0x3fc0d hash b6a3e95b params:( Vector WorldSpaceSortAxis; );
	RemoveInstance 0x3fc05 hash 5b373f08 params:( None InstanceIndex;None ReturnValue; );
	GetInstanceTransform 0x3fbfa hash 26888f16 params:( None InstanceIndex;Transform OutInstanceTransform;None bWorldSpace;None ReturnValue; );
	GetInstanceCount 0x3fbf1 hash 29b68783 params:( None ReturnValue; );
	ClearInstances 0x3fbe9 hash 1504e9b4 params:(  );
	AddInstance 0x3fbe2 hash 63a7de63 params:( Transform Transform;PaperSprite Sprite;None bWorldSpace;LinearColor Color;None ReturnValue; );
};


instance 1ab5e053e80
class PaperRuntimeSettings public : Object
{
	// Fields
	bool bEnableSpriteAtlasGroups; // 0x28
	bool bEnableTerrainSplineEditing; // 0x29
	bool bResizeSpriteDataToMatchTextures; // 0x2a

};


instance 1ab5e053c40
class PaperSprite public : Object
{
	// Fields
	TArray AdditionalSourceTextures; // 0x38
	Vector2D BakedSourceUV; // 0x48
	Vector2D BakedSourceDimension; // 0x50
	Texture2D* BakedSourceTexture; // 0x58
	MaterialInterface* DefaultMaterial; // 0x60
	MaterialInterface* AlternateMaterial; // 0x68
	TArray Sockets; // 0x70
	BYTE SpriteCollisionDomain; // 0x80
	float PixelsPerUnrealUnit; // 0x84
	BodySetup* BodySetup; // 0x88
	int AlternateMaterialSplitIndex; // 0x90
	TArray BakedRenderData; // 0x98

};


instance 1ab5e053a00
class PaperSpriteActor public : Actor
{
	// Fields
	PaperSpriteComponent* RenderComponent; // 0x218

};


instance 1ab5e0537c0
class PaperSpriteAtlas public : Object
{
	// Fields

};


instance 1ab5e053580
class PaperSpriteBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	MakeBrushFromSprite 0x3fc64 hash b54b3a92 params:( PaperSprite Sprite;None Width;None Height;SlateBrush ReturnValue; );
};


instance 1ab5e053340
class PaperSpriteComponent public : MeshComponent
{
	// Fields
	PaperSprite* SourceSprite; // 0x400
	MaterialInterface* MaterialOverride; // 0x408
	LinearColor SpriteColor; // 0x410

	// Functions
	SetSpriteColor 0x3fbbe hash 5b0e4f07 params:( LinearColor NewColor; );
	SetSprite 0x3fc80 hash 9798e808 params:( PaperSprite NewSprite;None ReturnValue; );
	GetSprite 0x3fc7a hash 21c39bfc params:( PaperSprite ReturnValue; );
};


instance 1ab5e053100
class PaperTerrainActor public : Actor
{
	// Fields
	SceneComponent* DummyRoot; // 0x218
	PaperTerrainSplineComponent* SplineComponent; // 0x220
	PaperTerrainComponent* RenderComponent; // 0x228

};


instance 1ab5e052ec0
class PaperTerrainComponent public : PrimitiveComponent
{
	// Fields
	PaperTerrainMaterial* TerrainMaterial; // 0x3d8
	bool bClosedSpline; // 0x3e0
	bool bFilledSpline; // 0x3e1
	PaperTerrainSplineComponent* AssociatedSpline; // 0x3e8
	int RandomSeed; // 0x3f0
	float SegmentOverlapAmount; // 0x3f4
	LinearColor TerrainColor; // 0x3f8
	int ReparamStepsPerSegment; // 0x408
	BYTE SpriteCollisionDomain; // 0x40c
	float CollisionThickness; // 0x410
	BodySetup* CachedBodySetup; // 0x418

	// Functions
	SetTerrainColor 0x3fc9c hash 57691825 params:( LinearColor NewColor; );
};


instance 1ab5e052c80
class PaperTerrainMaterial public : DataAsset
{
	// Fields
	TArray Rules; // 0x30
	PaperSprite* InteriorFill; // 0x40

};


instance 1ab5e052800
class PaperTerrainSplineComponent public : SplineComponent
{
	// Fields

};


instance 1ab5e052380
class PaperTileLayer public : Object
{
	// Fields
	FText LayerName; // 0x28
	int LayerWidth; // 0x40
	int LayerHeight; // 0x44
	bool bHiddenInGame; // 0x48
	bool bLayerCollides; // 0x48
	bool bOverrideCollisionThickness; // 0x48
	bool bOverrideCollisionOffset; // 0x48
	float CollisionThicknessOverride; // 0x4c
	float CollisionOffsetOverride; // 0x50
	LinearColor LayerColor; // 0x54
	int AllocatedWidth; // 0x64
	int AllocatedHeight; // 0x68
	TArray AllocatedCells; // 0x70
	PaperTileSet* TileSet; // 0x80
	TArray AllocatedGrid; // 0x88

};


instance 1ab5e052140
class PaperTileMap public : Object
{
	// Fields
	int MapWidth; // 0x28
	int MapHeight; // 0x2c
	int TileWidth; // 0x30
	int TileHeight; // 0x34
	float PixelsPerUnrealUnit; // 0x38
	float SeparationPerTileX; // 0x3c
	float SeparationPerTileY; // 0x40
	float SeparationPerLayer; // 0x44
	PaperTileSet* SelectedTileSet; // 0x48
	MaterialInterface* Material; // 0x70
	TArray TileLayers; // 0x78
	float CollisionThickness; // 0x88
	BYTE SpriteCollisionDomain; // 0x8c
	BYTE ProjectionMode; // 0x8d
	int HexSideLength; // 0x90
	BodySetup* BodySetup; // 0x98
	int LayerNameIndex; // 0xa0

};


instance 1ab5e051f00
class PaperTileMapActor public : Actor
{
	// Fields
	PaperTileMapComponent* RenderComponent; // 0x218

};


instance 1ab5e051cc0
class PaperTileMapComponent public : MeshComponent
{
	// Fields
	int MapWidth; // 0x400
	int MapHeight; // 0x404
	int TileWidth; // 0x408
	int TileHeight; // 0x40c
	PaperTileSet* DefaultLayerTileSet; // 0x410
	MaterialInterface* Material; // 0x418
	TArray TileLayers; // 0x420
	LinearColor TileMapColor; // 0x430
	int UseSingleLayerIndex; // 0x440
	bool bUseSingleLayer; // 0x444
	PaperTileMap* TileMap; // 0x448

	// Functions
	SetTileMapColor 0x402a0 hash 91fe92fc params:( LinearColor NewColor; );
	SetTileMap 0x4029a hash c6ec9edd params:( PaperTileMap NewTileMap;None ReturnValue; );
	SetTile 0x40295 hash ecdd4ebf params:( None X;None Y;None Layer;PaperTileInfo NewValue; );
	SetLayerColor 0x4028d hash 55da1a0d params:( LinearColor NewColor;None Layer; );
	SetLayerCollision 0x40283 hash 82e0df1a params:( None Layer;None bHasCollision;None bOverrideThickness;None CustomThickness;None bOverrideOffset;None CustomOffset;None bRebuildCollision; );
	SetDefaultCollisionThickness 0x40274 hash df10c0e params:( None Thickness;None bRebuildCollision; );
	ResizeMap 0x4026e hash a2112b5 params:( None NewWidthInTiles;None NewHeightInTiles; );
	RebuildCollision 0x40265 hash 5c5c5af8 params:(  );
	OwnsTileMap 0x4025e hash 61df0358 params:( None ReturnValue; );
	MakeTileMapEditable 0x40253 hash d2bd2829 params:(  );
	GetTilePolygon 0x4024b hash d83abd9b params:( None TileX;None TileY;Points Points;None LayerIndex;None bWorldSpace; );
	GetTileMapColor 0x40242 hash eaa56df0 params:( LinearColor ReturnValue; );
	GetTileCornerPosition 0x40236 hash 3b8dc731 params:( None TileX;None TileY;None LayerIndex;None bWorldSpace;Vector ReturnValue; );
	GetTileCenterPosition 0x4022a hash 7e363229 params:( None TileX;None TileY;None LayerIndex;None bWorldSpace;Vector ReturnValue; );
	GetTile 0x40225 hash 512275b3 params:( None X;None Y;None Layer;PaperTileInfo ReturnValue; );
	GetMapSize 0x4021f hash 692be07e params:( None MapWidth;None MapHeight;None NumLayers; );
	GetLayerColor 0x40217 hash 9d65a801 params:( None Layer;LinearColor ReturnValue; );
	CreateNewTileMap 0x4020e hash 2685da6f params:( None MapWidth;None MapHeight;None TileWidth;None TileHeight;None PixelsPerUnrealUnit;None bCreateLayer; );
	AddNewLayer 0x40207 hash 52a5e175 params:( PaperTileLayer ReturnValue; );
};


instance 1ab5e051a80
class PaperTileSet public : Object
{
	// Fields
	IntPoint TileSize; // 0x28
	Texture2D* TileSheet; // 0x30
	TArray AdditionalSourceTextures; // 0x38
	IntMargin BorderMargin; // 0x48
	IntPoint PerTileSpacing; // 0x58
	IntPoint DrawingOffset; // 0x60
	int WidthInTiles; // 0x68
	int HeightInTiles; // 0x6c
	int AllocatedWidth; // 0x70
	int AllocatedHeight; // 0x74
	TArray PerTileData; // 0x78
	TArray Terrains; // 0x88
	int TileWidth; // 0x98
	int TileHeight; // 0x9c
	int Margin; // 0xa0
	int Spacing; // 0xa4

};


instance 1ab5e051840
class TileMapBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	MakeTile 0x402d5 hash b73cd9d1 params:( None TileIndex;PaperTileSet TileSet;None bFlipH;None bFlipV;None bFlipD;PaperTileInfo ReturnValue; );
	GetTileUserData 0x402cc hash 9fde58cc params:( PaperTileInfo Tile;None ReturnValue; );
	GetTileTransform 0x402c3 hash 102c1cf params:( PaperTileInfo Tile;Transform ReturnValue; );
	BreakTile 0x402bd hash 7840f0f8 params:( PaperTileInfo Tile;None TileIndex;PaperTileSet TileSet;None bFlipH;None bFlipV;None bFlipD; );
};


instance 1ab70e9dfc0
struct IntMargin 
{
	// Fields
	int Left; // 0x0
	int Top; // 0x4
	int Right; // 0x8
	int Bottom; // 0xc

};


instance 1ab70e9df00
struct PaperFlipbookKeyFrame 
{
	// Fields
	PaperSprite* Sprite; // 0x0
	int FrameRun; // 0x8

};


instance 1ab70e9ff40
struct SpriteInstanceData 
{
	// Fields
	Matrix Transform; // 0x0
	PaperSprite* SourceSprite; // 0x40
	Color VertexColor; // 0x48
	int MaterialIndex; // 0x4c

};


instance 1ab70e9fe80
struct PaperSpriteSocket 
{
	// Fields
	Transform LocalTransform; // 0x0
	FName SocketName; // 0x30

};


instance 1ab70e9fdc0
struct PaperSpriteAtlasSlot 
{
	// Fields
	PaperSprite* SpriteRef; // 0x0
	int AtlasIndex; // 0x28
	int X; // 0x2c
	int Y; // 0x30
	int Width; // 0x34
	int Height; // 0x38

};


instance 1ab70e9fd00
struct PaperTerrainMaterialRule 
{
	// Fields
	PaperSprite* StartCap; // 0x0
	TArray Body; // 0x8
	PaperSprite* EndCap; // 0x18
	float MinimumAngle; // 0x20
	float MaximumAngle; // 0x24
	bool bEnableCollision; // 0x28
	float CollisionOffset; // 0x2c
	int DrawOrder; // 0x30

};


instance 1ab70e9fc40
struct PaperTileInfo 
{
	// Fields
	PaperTileSet* TileSet; // 0x0
	int PackedTileIndex; // 0x8

};


instance 1ab70e9fb80
struct PaperTileSetTerrain 
{
	// Fields
	FString TerrainName; // 0x0
	int CenterTileIndex; // 0x10

};


instance 1ab70e9fac0
struct PaperTileMetadata 
{
	// Fields
	FName UserDataName; // 0x0
	SpriteGeometryCollection CollisionData; // 0x8
	BYTE TerrainMembership; // 0x38

};


instance 1ab70e9fa00
struct SpriteGeometryCollection 
{
	// Fields
	TArray Shapes; // 0x0
	BYTE GeometryType; // 0x10
	int PixelsPerSubdivisionX; // 0x14
	int PixelsPerSubdivisionY; // 0x18
	bool bAvoidVertexMerging; // 0x1c
	float AlphaThreshold; // 0x20
	float DetailAmount; // 0x24
	float SimplifyEpsilon; // 0x28

};


instance 1ab70e9f940
struct SpriteGeometryShape 
{
	// Fields
	ESpriteShapeType ShapeType; // 0x0
	TArray Vertices; // 0x8
	Vector2D BoxSize; // 0x18
	Vector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c

};


instance 1ab70e9f880
struct SpriteDrawCallRecord 
{
	// Fields
	Vector Destination; // 0x0
	Texture* BaseTexture; // 0x10
	Color Color; // 0x48

};


instance 1ab70e9f7c0
struct SpriteAssetInitParameters 
{
	// Fields

};


