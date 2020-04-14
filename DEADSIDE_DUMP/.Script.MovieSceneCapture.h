instance 1ab5e1340c0
class MovieSceneCaptureProtocolBase public : Object
{
	// Fields
	EMovieSceneCaptureProtocolState State; // 0x50

	// Functions
	IsCapturing 0x4866e hash 89b2668e params:( None ReturnValue; );
	GetState 0x48669 hash 7564ef46 params:( UnderlyingType ReturnValue; );
};


instance 1ab5e134300
class MovieSceneAudioCaptureProtocolBase public : MovieSceneCaptureProtocolBase
{
	// Fields

};


instance 1ab5e134540
class NullAudioCaptureProtocol public : MovieSceneAudioCaptureProtocolBase
{
	// Fields

};


instance 1ab5e133e80
class MasterAudioSubmixCaptureProtocol public : MovieSceneAudioCaptureProtocolBase
{
	// Fields
	FString Filename; // 0x58

};


instance 1ab5e133a00
class MovieSceneImageCaptureProtocolBase public : MovieSceneCaptureProtocolBase
{
	// Fields

};


instance 1ab5e133c40
class CompositionGraphCaptureProtocol public : MovieSceneImageCaptureProtocolBase
{
	// Fields
	CompositionGraphCapturePasses IncludeRenderPasses; // 0x58
	bool bCaptureFramesInHDR; // 0x68
	int HDRCompressionQuality; // 0x6c
	BYTE CaptureGamut; // 0x70
	SoftObjectPath PostProcessingMaterial; // 0x78
	bool bDisableScreenPercentage; // 0x90
	MaterialInterface* PostProcessingMaterialPtr; // 0x98

};


instance 1ab5e1337c0
class FrameGrabberProtocol public : MovieSceneImageCaptureProtocolBase
{
	// Fields

};


instance 1ab5e133580
class ImageSequenceProtocol public : FrameGrabberProtocol
{
	// Fields

};


instance 1ab5e133340
class CompressedImageSequenceProtocol public : ImageSequenceProtocol
{
	// Fields
	int CompressionQuality; // 0xd8

};


instance 1ab5e133100
class ImageSequenceProtocol_BMP public : ImageSequenceProtocol
{
	// Fields

};


instance 1ab5e132ec0
class ImageSequenceProtocol_PNG public : CompressedImageSequenceProtocol
{
	// Fields

};


instance 1ab5e132c80
class ImageSequenceProtocol_JPG public : CompressedImageSequenceProtocol
{
	// Fields

};


instance 1ab5e132a40
class ImageSequenceProtocol_EXR public : ImageSequenceProtocol
{
	// Fields
	bool bCompressed; // 0xd8
	BYTE CaptureGamut; // 0xd9

};


instance 1ab5e132800
class MovieSceneCaptureInterface public : Interface
{
	// Fields

};


instance 1ab5e132380
class MovieSceneCapture public : Object
{
	// Fields
	SoftClassPath ImageCaptureProtocolType; // 0x38
	SoftClassPath AudioCaptureProtocolType; // 0x50
	MovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68
	MovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70
	MovieSceneCaptureSettings Settings; // 0x78
	bool bUseSeparateProcess; // 0xe8
	bool bCloseEditorWhenCaptureStarts; // 0xe9
	FString AdditionalCommandLineArguments; // 0xf0
	FString InheritedCommandLineArguments; // 0x100

	// Functions
	SetImageCaptureProtocolType 0x48747 hash 2964d77c params:( Class ProtocolType; );
	SetAudioCaptureProtocolType 0x48738 hash e76cbb2b params:( Class ProtocolType; );
	GetImageCaptureProtocol 0x4872b hash 44a6480e params:( MovieSceneCaptureProtocolBase ReturnValue; );
	GetAudioCaptureProtocol 0x4871e hash d449ac3d params:( MovieSceneCaptureProtocolBase ReturnValue; );
};


instance 1ab5e1325c0
class LevelCapture public : MovieSceneCapture
{
	// Fields
	bool bAutoStartCapture; // 0x220
	Guid PrerequisiteActorId; // 0x22c

};


instance 1ab5e132140
class MovieSceneCaptureEnvironment public : Object
{
	// Fields

	// Functions
	IsCaptureInProgress 0x48797 hash f8a2aae1 params:( None ReturnValue; );
	GetCaptureFrameNumber 0x4878b hash a995b34d params:( None ReturnValue; );
	GetCaptureElapsedTime 0x4877f hash 3ad3d7a6 params:( None ReturnValue; );
	FindImageCaptureProtocol 0x48772 hash 90d3c36f params:( MovieSceneImageCaptureProtocolBase ReturnValue; );
	FindAudioCaptureProtocol 0x48765 hash 2077279e params:( MovieSceneAudioCaptureProtocolBase ReturnValue; );
};


instance 1ab5e131f00
class UserDefinedCaptureProtocol public : MovieSceneImageCaptureProtocolBase
{
	// Fields
	World* World; // 0x58

	// Functions
	StopCapturingFinalPixels 0x487db hash cf3c0df7 params:(  );
	StartCapturingFinalPixels 0x487cd hash 708bcc7f params:( CapturedPixelsID StreamID; );
	ResolveBuffer 0x487c5 hash deafafff params:( Texture Buffer;CapturedPixelsID BufferID; );
	OnWarmUp 0x200a4 hash 49968c3e params:(  );
	OnTick 0x200a0 hash c81cf18d params:(  );
	OnStartCapture 0x20098 hash 4225a664 params:(  );
	OnSetup 0x20093 hash cba72333 params:( None ReturnValue; );
	OnPreTick 0x2008d hash 883f7d34 params:(  );
	OnPixelsReceived 0x20084 hash 4f11a69e params:( CapturedPixels Pixels;CapturedPixelsID ID;FrameMetrics FrameMetrics; );
	OnPauseCapture 0x2007c hash b6de68d4 params:(  );
	OnFinalize 0x20076 hash b6bc1d54 params:(  );
	OnCaptureFrame 0x2006e hash 8733eaa1 params:(  );
	OnCanFinalize 0x20066 hash a4f14606 params:( None ReturnValue; );
	OnBeginFinalize 0x2005d hash cabb0739 params:(  );
	GetCurrentFrameMetrics 0x487b9 hash 96a4c60a params:( FrameMetrics ReturnValue; );
	GenerateFilename 0x487b0 hash a0235811 params:( FrameMetrics InFrameMetrics;None ReturnValue; );
};


instance 1ab5e131cc0
class UserDefinedImageCaptureProtocol public : UserDefinedCaptureProtocol
{
	// Fields
	EDesiredImageFormat Format; // 0xd8
	bool bEnableCompression; // 0xd9
	int CompressionQuality; // 0xdc

	// Functions
	WriteImageToDisk 0x48818 hash 4a53fe41 params:( CapturedPixels PixelData;CapturedPixelsID StreamID;FrameMetrics FrameMetrics;None bCopyImageData; );
	GenerateFilenameForCurrentFrame 0x48807 hash 5d7ab366 params:( None ReturnValue; );
	GenerateFilenameForBuffer 0x487f9 hash 928e9772 params:( Texture Buffer;CapturedPixelsID StreamID;None ReturnValue; );
};


instance 1ab5e131a80
class VideoCaptureProtocol public : FrameGrabberProtocol
{
	// Fields
	bool bUseCompression; // 0x68
	float CompressionQuality; // 0x6c

};


instance 1ab7151ae40
struct CompositionGraphCapturePasses 
{
	// Fields
	TArray Value; // 0x0

};


instance 1ab7151ad80
struct FrameMetrics 
{
	// Fields
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int FrameNumber; // 0x8
	int NumDroppedFrames; // 0xc

};


instance 1ab7151de40
struct MovieSceneCaptureSettings 
{
	// Fields
	DirectoryPath OutputDirectory; // 0x0
	GameModeBase* GameModeOverride; // 0x10
	FString OutputFormat; // 0x18
	bool bOverwriteExisting; // 0x28
	bool bUseRelativeFrameNumbers; // 0x29
	int HandleFrames; // 0x2c
	FString MovieExtension; // 0x30
	BYTE ZeroPadFrameNumbers; // 0x40
	FrameRate FrameRate; // 0x44
	bool bUseCustomFrameRate; // 0x4c
	FrameRate CustomFrameRate; // 0x50
	CaptureResolution Resolution; // 0x58
	bool bEnableTextureStreaming; // 0x60
	bool bCinematicEngineScalability; // 0x61
	bool bCinematicMode; // 0x62
	bool bAllowMovement; // 0x63
	bool bAllowTurning; // 0x64
	bool bShowPlayer; // 0x65
	bool bShowHUD; // 0x66
	bool bUsePathTracer; // 0x67
	int PathTracerSamplePerPixel; // 0x68

};


instance 1ab7151dd80
struct CaptureResolution 
{
	// Fields
	int ResX; // 0x0
	int ResY; // 0x4

};


instance 1ab7151dc00
struct CapturedPixels 
{
	// Fields

};


instance 1ab7151db40
struct CapturedPixelsID 
{
	// Fields
	MapProperty Identifiers; // 0x0 property 0x1ab71164160 hash 0xadd0fb88

};


