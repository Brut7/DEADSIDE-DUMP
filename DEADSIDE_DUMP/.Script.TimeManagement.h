instance 1ab5e0fb380
class FixedFrameRateCustomTimeStep public : EngineCustomTimeStep
{
	// Fields
	FrameRate FixedFrameRate; // 0x28

};


instance 1ab5e0faf00
class TimeManagementBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	TransformTime 0x46213 hash 71a762d0 params:( FrameTime SourceTime;FrameRate SourceRate;FrameRate DestinationRate;FrameTime ReturnValue; );
	Subtract_FrameNumberInteger 0x46204 hash fba550ce params:( FrameNumber A;None B;FrameNumber ReturnValue; );
	Subtract_FrameNumberFrameNumber 0x461f3 hash 6a1c0db4 params:( FrameNumber A;FrameNumber B;FrameNumber ReturnValue; );
	SnapFrameTimeToRate 0x461e8 hash 41459a40 params:( FrameTime SourceTime;FrameRate SourceRate;FrameRate SnapToRate;FrameTime ReturnValue; );
	Multiply_SecondsFrameRate 0x461da hash 9db9e62a params:( None TimeInSeconds;FrameRate FrameRate;FrameTime ReturnValue; );
	Multiply_FrameNumberInteger 0x461cb hash c4308466 params:( FrameNumber A;None B;FrameNumber ReturnValue; );
	IsValid_MultipleOf 0x461c1 hash 5a99cf11 params:( FrameRate InFrameRate;FrameRate OtherFramerate;None ReturnValue; );
	IsValid_Framerate 0x461b7 hash 886c60e7 params:( FrameRate InFrameRate;None ReturnValue; );
	GetTimecodeFrameRate 0x461ac hash df4dd9c6 params:( FrameRate ReturnValue; );
	GetTimecode 0x461a5 hash 66896ecf params:( Timecode ReturnValue; );
	Divide_FrameNumberInteger 0x46197 hash 8dff687b params:( FrameNumber A;None B;FrameNumber ReturnValue; );
	Conv_TimecodeToString 0x4618b hash d50c5d7e params:( Timecode InTimecode;None bForceSignDisplay;None ReturnValue; );
	Conv_QualifiedFrameTimeToSeconds 0x4617a hash 5a8aa37a params:( QualifiedFrameTime InFrameTime;None ReturnValue; );
	Conv_FrameRateToSeconds 0x4616d hash 73e19723 params:( FrameRate InFrameRate;None ReturnValue; );
	Conv_FrameNumberToInteger 0x4615f hash b1b7edf params:( FrameNumber InFrameNumber;None ReturnValue; );
	Add_FrameNumberInteger 0x46153 hash 84b04f8f params:( FrameNumber A;None B;FrameNumber ReturnValue; );
	Add_FrameNumberFrameNumber 0x46145 hash 6a1a84f5 params:( FrameNumber A;FrameNumber B;FrameNumber ReturnValue; );
};


instance 1ab5e0facc0
class TimeSynchronizationSource public : Object
{
	// Fields
	bool bUseForSynchronization; // 0x28
	int FrameOffset; // 0x2c

};


