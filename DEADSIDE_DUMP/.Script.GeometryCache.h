instance 1ab5e059f40
class GeometryCache public : Object
{
	// Fields
	TArray Materials; // 0x30
	TArray Tracks; // 0x40
	int StartFrame; // 0x60
	int EndFrame; // 0x64

};


instance 1ab5e059d00
class GeometryCacheActor public : Actor
{
	// Fields
	GeometryCacheComponent* GeometryCacheComponent; // 0x218

	// Functions
	GetGeometryCacheComponent 0x4113c hash 9310be98 params:( GeometryCacheComponent ReturnValue; );
};


instance 1ab5e059ac0
class GeometryCacheCodecBase public : Object
{
	// Fields
	TArray TopologyRanges; // 0x28

};


instance 1ab5e059880
class GeometryCacheCodecRaw public : GeometryCacheCodecBase
{
	// Fields
	int DummyProperty; // 0x38

};


instance 1ab5e059640
class GeometryCacheCodecV1 public : GeometryCacheCodecBase
{
	// Fields

};


instance 1ab5e05fdc0
class GeometryCacheComponent public : MeshComponent
{
	// Fields
	GeometryCache* GeometryCache; // 0x400
	bool bRunning; // 0x408
	bool bLooping; // 0x409
	float StartTimeOffset; // 0x40c
	float PlaybackSpeed; // 0x410
	int NumTracks; // 0x414
	float ElapsedTime; // 0x418
	float Duration; // 0x44c
	bool bManualTick; // 0x450

	// Functions
	TickAtThisTime 0x411e0 hash 4ee3c62c params:( None Time;None bInIsRunning;None bInBackwards;None bInIsLooping; );
	Stop 0x3e2ef hash 7c8c8f2b params:(  );
	SetStartTimeOffset 0x411d6 hash ef8182f5 params:( None NewStartTimeOffset; );
	SetPlaybackSpeed 0x3e8fe hash bddc5169 params:( None NewPlaybackSpeed; );
	SetLooping 0x3fb91 hash 6d567709 params:( None bNewLooping; );
	SetGeometryCache 0x411cd hash 3ff0a831 params:( GeometryCache NewGeomCache;None ReturnValue; );
	PlayReversedFromEnd 0x411c2 hash 7725d1c6 params:(  );
	PlayReversed 0x411bb hash a513d85b params:(  );
	PlayFromStart 0x3fb75 hash c6b288dd params:(  );
	Play 0x3fb72 hash 7c8ac63b params:(  );
	Pause 0xb98f hash dddda23 params:(  );
	IsPlayingReversed 0x411b1 hash 82c86155 params:( None ReturnValue; );
	IsPlaying 0x3e2d2 hash 5c6af535 params:( None ReturnValue; );
	IsLooping 0x3fb5a hash 3079e3b9 params:( None ReturnValue; );
	GetStartTimeOffset 0x411a7 hash c677e969 params:( None ReturnValue; );
	GetPlaybackSpeed 0x4119e hash 2b5e8add params:( None ReturnValue; );
	GetPlaybackDirection 0x41193 hash 1affa6cd params:( None ReturnValue; );
	GetNumberOfFrames 0x41189 hash ef455581 params:( None ReturnValue; );
	GetDuration 0x41182 hash 49919d4b params:( None ReturnValue; );
	GetAnimationTime 0x41179 hash ce8c4b54 params:( None ReturnValue; );
};


instance 1ab5e05fb80
class GeometryCacheTrack public : Object
{
	// Fields
	float Duration; // 0x28

};


instance 1ab5e05f940
class GeometryCacheTrack_FlipbookAnimation public : GeometryCacheTrack
{
	// Fields
	int NumMeshSamples; // 0x58

	// Functions
	AddMeshSample 0x41205 hash 279ab71d params:( GeometryCacheMeshData MeshData;None SampleTime; );
};


instance 1ab5e05f700
class GeometryCacheTrackStreamable public : GeometryCacheTrack
{
	// Fields
	GeometryCacheCodecBase* Codec; // 0x58
	float StartSampleTime; // 0x188

};


instance 1ab5e05f4c0
class GeometryCacheTrack_TransformAnimation public : GeometryCacheTrack
{
	// Fields

	// Functions
	SetMesh 0x41230 hash ecd967fe params:( GeometryCacheMeshData NewMeshData; );
};


instance 1ab5e05f280
class GeometryCacheTrack_TransformGroupAnimation public : GeometryCacheTrack
{
	// Fields

	// Functions
	SetMesh 0x41230 hash ecd967fe params:( GeometryCacheMeshData NewMeshData; );
};


instance 1ab714504c0
struct TrackRenderData 
{
	// Fields

};


instance 1ab71450400
struct GeometryCacheMeshData 
{
	// Fields

};


instance 1ab71450340
struct GeometryCacheVertexInfo 
{
	// Fields

};


instance 1ab71450280
struct GeometryCacheMeshBatchInfo 
{
	// Fields

};


