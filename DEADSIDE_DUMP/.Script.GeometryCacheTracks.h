instance 1ab5e05f040
class MovieSceneGeometryCacheSection public : MovieSceneSection
{
	// Fields
	MovieSceneGeometryCacheParams Params; // 0xe0

};


instance 1ab5e05e980
class MovieSceneGeometryCacheTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray AnimationSections; // 0x58

};


instance 1ab714501c0
struct MovieSceneGeometryCacheParams 
{
	// Fields
	GeometryCache* GeometryCacheAsset; // 0x0
	FrameNumber FirstLoopStartFrameOffset; // 0x8
	FrameNumber StartFrameOffset; // 0xc
	FrameNumber EndFrameOffset; // 0x10
	float PlayRate; // 0x14
	bool bReverse; // 0x18
	float StartOffset; // 0x1c
	float EndOffset; // 0x20
	SoftObjectPath GeometryCache; // 0x28

};


instance 1ab71453100
struct MovieSceneGeometryCacheSectionTemplate 
{
	// Fields
	MovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20

};


instance 1ab71453040
struct MovieSceneGeometryCacheSectionTemplateParameters 
{
	// Fields
	FrameNumber SectionStartTime; // 0x40
	FrameNumber SectionEndTime; // 0x44

};


