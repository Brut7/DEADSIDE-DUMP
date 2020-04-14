instance 1ab5e095500
class AudioCapture public : AudioGenerator
{
	// Fields

	// Functions
	StopCapturingAudio 0x41915 hash ea096c4a params:(  );
	StartCapturingAudio 0x4190a hash 922ee4d2 params:(  );
	IsCapturingAudio 0x41901 hash a738c7c0 params:( None ReturnValue; );
	GetAudioCaptureDeviceInfo 0x418f3 hash fdb2e3e7 params:( AudioCaptureDeviceInfo OutInfo;None ReturnValue; );
};


instance 1ab5e095080
class AudioCaptureFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	CreateAudioCapture 0x4192e hash 28e8d0ff params:( AudioCapture ReturnValue; );
};


instance 1ab5e094e40
class AudioCaptureComponent public : SynthComponent
{
	// Fields
	int JitterLatencyFrames; // 0x620

};


instance 1ab71452680
struct AudioCaptureDeviceInfo 
{
	// Fields
	FName DeviceName; // 0x0
	int NumInputChannels; // 0x8
	int SampleRate; // 0xc

};


