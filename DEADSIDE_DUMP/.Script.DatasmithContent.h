instance 1ab5e0588c0
class DatasmithObjectTemplate public : Object
{
	// Fields

};


instance 1ab5e058b00
class DatasmithActorTemplate public : DatasmithObjectTemplate
{
	// Fields
	SetProperty Layers; // 0x30 property 0x1ab71165ce0 hash 0xb0194396
	SetProperty Tags; // 0x80 property 0x1ab71165d80 hash 0xb0194396

};


instance 1ab5e058680
class DatasmithAdditionalData public : Object
{
	// Fields

};


instance 1ab5e058440
class DatasmithAreaLightActor public : Actor
{
	// Fields
	EDatasmithAreaLightActorType LightType; // 0x218
	EDatasmithAreaLightActorShape LightShape; // 0x219
	Vector2D Dimensions; // 0x21c
	float Intensity; // 0x224
	ELightUnits IntensityUnits; // 0x228
	LinearColor Color; // 0x22c
	float Temperature; // 0x23c
	TextureLightProfile* IESTexture; // 0x240
	bool bUseIESBrightness; // 0x248
	float IESBrightnessScale; // 0x24c
	Rotator Rotation; // 0x250
	float SourceRadius; // 0x25c
	float SourceLength; // 0x260
	float AttenuationRadius; // 0x264
	float SpotlightInnerAngle; // 0x268
	float SpotlightOuterAngle; // 0x26c

};


instance 1ab5e058200
class DatasmithAreaLightActorTemplate public : DatasmithObjectTemplate
{
	// Fields
	EDatasmithAreaLightActorType LightType; // 0x30
	EDatasmithAreaLightActorShape LightShape; // 0x31
	Vector2D Dimensions; // 0x34
	LinearColor Color; // 0x3c
	float Intensity; // 0x4c
	ELightUnits IntensityUnits; // 0x50
	float Temperature; // 0x54
	TextureLightProfile* IESTexture; // 0x58
	bool bUseIESBrightness; // 0x80
	float IESBrightnessScale; // 0x84
	Rotator Rotation; // 0x88
	float SourceRadius; // 0x94
	float SourceLength; // 0x98
	float AttenuationRadius; // 0x9c

};


instance 1ab5e057fc0
class DatasmithAssetImportData public : AssetImportData
{
	// Fields

};


instance 1ab5e057b40
class DatasmithStaticMeshImportData public : DatasmithAssetImportData
{
	// Fields

};


instance 1ab5e057900
class DatasmithStaticMeshCADImportData public : DatasmithStaticMeshImportData
{
	// Fields

};


instance 1ab5e0576c0
class DatasmithSceneImportData public : AssetImportData
{
	// Fields

};


instance 1ab5e057480
class DatasmithTranslatedSceneImportData public : DatasmithSceneImportData
{
	// Fields

};


instance 1ab5e057240
class DatasmithCADImportSceneData public : DatasmithSceneImportData
{
	// Fields

};


instance 1ab5e057000
class DatasmithMDLSceneImportData public : DatasmithSceneImportData
{
	// Fields

};


instance 1ab5e056dc0
class DatasmithGLTFSceneImportData public : DatasmithSceneImportData
{
	// Fields
	FString Generator; // 0x28
	float Version; // 0x38
	FString Author; // 0x40
	FString License; // 0x50
	FString Source; // 0x60

};


instance 1ab5e056b80
class DatasmithStaticMeshGLTFImportData public : DatasmithStaticMeshImportData
{
	// Fields
	FString SourceMeshName; // 0x28

};


instance 1ab5e056940
class DatasmithFBXSceneImportData public : DatasmithSceneImportData
{
	// Fields
	bool bGenerateLightmapUVs; // 0x28
	FString TexturesDir; // 0x30
	BYTE IntermediateSerialization; // 0x40
	bool bColorizeMaterials; // 0x41

};


instance 1ab5e056700
class DatasmithDeltaGenAssetImportData public : DatasmithAssetImportData
{
	// Fields

};


instance 1ab5e0564c0
class DatasmithDeltaGenSceneImportData public : DatasmithFBXSceneImportData
{
	// Fields
	bool bMergeNodes; // 0x48
	bool bOptimizeDuplicatedNodes; // 0x49
	bool bRemoveInvisibleNodes; // 0x4a
	bool bSimplifyNodeHierarchy; // 0x4b
	bool bImportVar; // 0x4c
	FString VarPath; // 0x50
	bool bImportPos; // 0x60
	FString PosPath; // 0x68
	bool bImportTml; // 0x78
	FString TmlPath; // 0x80

};


instance 1ab5e056280
class DatasmithVREDAssetImportData public : DatasmithAssetImportData
{
	// Fields

};


instance 1ab5e056040
class DatasmithVREDSceneImportData public : DatasmithFBXSceneImportData
{
	// Fields
	bool bMergeNodes; // 0x48
	bool bOptimizeDuplicatedNodes; // 0x49
	bool bImportMats; // 0x4a
	FString MatsPath; // 0x50
	bool bImportVar; // 0x60
	bool bCleanVar; // 0x61
	FString VarPath; // 0x68
	bool bImportLightInfo; // 0x78
	FString LightInfoPath; // 0x80
	bool bImportClipInfo; // 0x90
	FString ClipInfoPath; // 0x98

};


instance 1ab5e055e00
class DatasmithIFCSceneImportData public : DatasmithSceneImportData
{
	// Fields

};


instance 1ab5e055bc0
class DatasmithStaticMeshIFCImportData public : DatasmithStaticMeshImportData
{
	// Fields
	FString SourceGlobalId; // 0x28

};


instance 1ab5e055980
class DatasmithAssetUserData public : AssetUserData
{
	// Fields
	MapProperty MetaData; // 0x28 property 0x1ab71165c40 hash 0xadd0fb88

};


instance 1ab5e055500
class DatasmithCineCameraActorTemplate public : DatasmithObjectTemplate
{
	// Fields
	DatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30

};


instance 1ab5e0552c0
class DatasmithCineCameraComponentTemplate public : DatasmithObjectTemplate
{
	// Fields
	DatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30
	DatasmithCameraLensSettingsTemplate LensSettings; // 0x38
	DatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c
	float CurrentFocalLength; // 0x44
	float CurrentAperture; // 0x48
	DatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50

};


instance 1ab5e055080
class DatasmithContentBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	GetDatasmithUserDataValueForKey 0x40eba hash 90ee6baa params:( Object Object;None Key;None ReturnValue; );
	GetDatasmithUserDataKeysAndValuesForValue 0x40ea4 hash 2750460 params:( Object Object;None StringToMatch;OutKeys OutKeys;OutValues OutValues; );
	GetDatasmithUserData 0x40e99 hash 5256035d params:( Object Object;DatasmithAssetUserData ReturnValue; );
};


instance 1ab5e054e40
class DatasmithCustomActionBase public : Object
{
	// Fields

};


instance 1ab5e054c00
class DatasmithImportedSequencesActor public : Actor
{
	// Fields
	TArray ImportedSequences; // 0x218

	// Functions
	PlayLevelSequence 0x40eea hash 7ef2548c params:( LevelSequence SequenceToPlay; );
};


instance 1ab5e05de40
class DatasmithCommonTessellationOptions public : Object
{
	// Fields
	DatasmithTessellationOptions Options; // 0x28

};


instance 1ab5e05dc00
class DatasmithImportOptions public : Object
{
	// Fields
	EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28
	EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29
	EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2a
	EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2b
	EDatasmithImportActorPolicy LightImportPolicy; // 0x2c
	EDatasmithImportActorPolicy CameraImportPolicy; // 0x2d
	EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2e
	EDatasmithImportMaterialQuality MaterialQuality; // 0x2f
	DatasmithImportBaseOptions BaseOptions; // 0x34
	DatasmithReimportOptions ReimportOptions; // 0x48
	FString Filename; // 0x50
	FString FilePath; // 0x60

};


instance 1ab5e05d9c0
class DatasmithLandscapeTemplate public : DatasmithObjectTemplate
{
	// Fields
	MaterialInterface* LandscapeMaterial; // 0x30
	int StaticLightingLOD; // 0x38

};


instance 1ab5e05d780
class DatasmithLightComponentTemplate public : DatasmithObjectTemplate
{
	// Fields
	bool bVisible; // 0x30
	bool CastShadows; // 0x34
	bool bUseTemperature; // 0x34
	bool bUseIESBrightness; // 0x34
	float Intensity; // 0x38
	float Temperature; // 0x3c
	float IESBrightnessScale; // 0x40
	LinearColor LightColor; // 0x44
	MaterialInterface* LightFunctionMaterial; // 0x58
	TextureLightProfile* IESTexture; // 0x60

};


instance 1ab5e05d540
class DatasmithMaterialInstanceTemplate public : DatasmithObjectTemplate
{
	// Fields
	MapProperty ScalarParameterValues; // 0x30 property 0x1ab71165a60 hash 0xadd0fb88
	MapProperty VectorParameterValues; // 0x80 property 0x1ab71165b00 hash 0xadd0fb88
	MapProperty TextureParameterValues; // 0xd0 property 0x1ab71165ba0 hash 0xadd0fb88
	DatasmithStaticParameterSetTemplate StaticParameters; // 0x120

};


instance 1ab5e05d300
class DatasmithPointLightComponentTemplate public : DatasmithObjectTemplate
{
	// Fields
	ELightUnits IntensityUnits; // 0x30
	float SourceRadius; // 0x34
	float SourceLength; // 0x38
	float AttenuationRadius; // 0x3c

};


instance 1ab5e05d0c0
class DatasmithPostProcessVolumeTemplate public : DatasmithObjectTemplate
{
	// Fields
	DatasmithPostProcessSettingsTemplate Settings; // 0x30
	bool bEnabled; // 0x70
	bool bUnbound; // 0x70

};


instance 1ab5e05ce80
class DatasmithScene public : Object
{
	// Fields

};


instance 1ab5e05cc40
class DatasmithSceneActor public : Actor
{
	// Fields
	DatasmithScene* Scene; // 0x218
	MapProperty RelatedActors; // 0x220 property 0x1ab711659c0 hash 0xadd0fb88

};


instance 1ab5e05ca00
class DatasmithSceneComponentTemplate public : DatasmithObjectTemplate
{
	// Fields
	Transform RelativeTransform; // 0x30
	BYTE Mobility; // 0x60
	SceneComponent* AttachParent; // 0x68
	SetProperty Tags; // 0x90 property 0x1ab71165920 hash 0xb0194396

};


instance 1ab5e05c7c0
class DatasmithSkyLightComponentTemplate public : DatasmithObjectTemplate
{
	// Fields
	BYTE SourceType; // 0x30
	int CubemapResolution; // 0x34
	TextureCube* Cubemap; // 0x38

};


instance 1ab5e05c580
class DatasmithSpotLightComponentTemplate public : DatasmithObjectTemplate
{
	// Fields
	float InnerConeAngle; // 0x30
	float OuterConeAngle; // 0x34

};


instance 1ab5e05c340
class DatasmithStaticMeshComponentTemplate public : DatasmithObjectTemplate
{
	// Fields
	StaticMesh* StaticMesh; // 0x30
	TArray OverrideMaterials; // 0x38

};


instance 1ab5e05c100
class DatasmithStaticMeshTemplate public : DatasmithObjectTemplate
{
	// Fields
	DatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30
	int LightMapCoordinateIndex; // 0x80
	int LightMapResolution; // 0x84
	TArray BuildSettings; // 0x88
	TArray StaticMaterials; // 0x98

};


instance 1ab71451180
struct DatasmithCameraLookatTrackingSettingsTemplate 
{
	// Fields
	bool bEnableLookAtTracking; // 0x0
	bool bAllowRoll; // 0x0
	Actor* ActorToTrack; // 0x8

};


instance 1ab714510c0
struct DatasmithPostProcessSettingsTemplate 
{
	// Fields
	bool bOverride_WhiteTemp; // 0x0
	bool bOverride_ColorSaturation; // 0x0
	bool bOverride_VignetteIntensity; // 0x0
	bool bOverride_FilmWhitePoint; // 0x0
	bool bOverride_AutoExposureMethod; // 0x0
	bool bOverride_CameraISO; // 0x0
	bool bOverride_CameraShutterSpeed; // 0x0
	bool bOverride_DepthOfFieldFstop; // 0x4
	float WhiteTemp; // 0x8
	float VignetteIntensity; // 0xc
	LinearColor FilmWhitePoint; // 0x10
	Vector4 ColorSaturation; // 0x20
	BYTE AutoExposureMethod; // 0x30
	float CameraISO; // 0x34
	float CameraShutterSpeed; // 0x38
	float DepthOfFieldFstop; // 0x3c

};


instance 1ab71451000
struct DatasmithCameraFocusSettingsTemplate 
{
	// Fields
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4

};


instance 1ab71450f40
struct DatasmithCameraLensSettingsTemplate 
{
	// Fields
	float MaxFStop; // 0x0

};


instance 1ab71450e80
struct DatasmithCameraFilmbackSettingsTemplate 
{
	// Fields
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4

};


instance 1ab71450dc0
struct DatasmithTessellationOptions 
{
	// Fields
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc

};


instance 1ab71450d00
struct DatasmithImportBaseOptions 
{
	// Fields
	EDatasmithImportScene SceneHandling; // 0x0
	bool bIncludeGeometry; // 0x1
	bool bIncludeMaterial; // 0x2
	bool bIncludeLight; // 0x3
	bool bIncludeCamera; // 0x4
	bool bIncludeAnimation; // 0x5
	DatasmithAssetImportOptions AssetOptions; // 0x8
	DatasmithStaticMeshImportOptions StaticMeshOptions; // 0x10

};


instance 1ab71450c40
struct DatasmithStaticMeshImportOptions 
{
	// Fields
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3

};


instance 1ab71450b80
struct DatasmithAssetImportOptions 
{
	// Fields
	FName PackagePath; // 0x0

};


instance 1ab71450ac0
struct DatasmithReimportOptions 
{
	// Fields
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1

};


instance 1ab71450a00
struct DatasmithStaticParameterSetTemplate 
{
	// Fields
	MapProperty StaticSwitchParameters; // 0x0 property 0x1ab71164fc0 hash 0xadd0fb88

};


instance 1ab71450940
struct DatasmithMeshSectionInfoMapTemplate 
{
	// Fields
	MapProperty Map; // 0x0 property 0x1ab71164e80 hash 0xadd0fb88

};


instance 1ab71450880
struct DatasmithMeshSectionInfoTemplate 
{
	// Fields
	int MaterialIndex; // 0x0

};


instance 1ab714507c0
struct DatasmithStaticMaterialTemplate 
{
	// Fields
	FName MaterialSlotName; // 0x0
	MaterialInterface* MaterialInterface; // 0x8

};


instance 1ab71450700
struct DatasmithMeshBuildSettingsTemplate 
{
	// Fields
	bool bUseMikkTSpace; // 0x0
	bool bRecomputeNormals; // 0x0
	bool bRecomputeTangents; // 0x0
	bool bRemoveDegenerates; // 0x0
	bool bBuildAdjacencyBuffer; // 0x0
	bool bUseHighPrecisionTangentBasis; // 0x0
	bool bUseFullPrecisionUVs; // 0x0
	bool bGenerateLightmapUVs; // 0x0
	int MinLightmapResolution; // 0x4
	int SrcLightmapIndex; // 0x8
	int DstLightmapIndex; // 0xc

};


