instance 1ab5c9fbec0
class SoundSimple public : SoundBase
{
	// Fields
	TArray Variations; // 0x160
	SoundWave* SoundWave; // 0x170

};


instance 1ab5c9fba40
class SoundUtilitiesBPFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	GetPitchScaleFromMIDIPitch 0x3df17 hash 9e6856d4 params:( None BaseMidiNote;None TargetMidiNote;None ReturnValue; );
	GetMIDIPitchFromFrequency 0x3df09 hash 8056e26 params:( None Frequency;None ReturnValue; );
	GetFrequencyFromMIDIPitch 0x3defb hash a4115f86 params:( None MidiNote;None ReturnValue; );
	GetBeatTempo 0x3def4 hash dc1dc846 params:( None BeatsPerMinute;None BeatMultiplier;None DivisionsOfWholeNote;None ReturnValue; );
};


instance 1ab70e9f700
struct SoundVariation 
{
	// Fields
	SoundWave* SoundWave; // 0x0
	float ProbabilityWeight; // 0x8
	Vector2D VolumeRange; // 0xc
	Vector2D PitchRange; // 0x14

};


