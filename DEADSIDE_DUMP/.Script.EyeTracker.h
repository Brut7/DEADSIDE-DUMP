instance 1ab5e12f940
class EyeTrackerFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SetEyeTrackedPlayer 0x484c9 hash 853b73ff params:( PlayerController PlayerController; );
	IsStereoGazeDataAvailable 0x484bb hash 52eb0115 params:( None ReturnValue; );
	IsEyeTrackerConnected 0x484af hash 1a0025c3 params:( None ReturnValue; );
	GetStereoGazeData 0x484a5 hash ce419558 params:( EyeTrackerStereoGazeData OutGazeData;None ReturnValue; );
	GetGazeData 0x4849e hash 1da19046 params:( EyeTrackerGazeData OutGazeData;None ReturnValue; );
};


instance 1ab7151bb00
struct EyeTrackerStereoGazeData 
{
	// Fields
	Vector LeftEyeOrigin; // 0x0
	Vector LeftEyeDirection; // 0xc
	Vector RightEyeOrigin; // 0x18
	Vector RightEyeDirection; // 0x24
	Vector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c

};


instance 1ab7151ba40
struct EyeTrackerGazeData 
{
	// Fields
	Vector GazeOrigin; // 0x0
	Vector GazeDirection; // 0xc
	Vector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24

};


