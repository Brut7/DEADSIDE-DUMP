instance 1ab5c9fb140
class SynthComponent public : SceneComponent
{
	// Fields
	bool bAutoDestroy; // 0x1f0
	bool bStopWhenOwnerDestroyed; // 0x1f0
	bool bAllowSpatialization; // 0x1f0
	bool bOverrideAttenuation; // 0x1f0
	bool bOutputToBusOnly; // 0x1f4
	SoundAttenuation* AttenuationSettings; // 0x1f8
	SoundAttenuationSettings AttenuationOverrides; // 0x200
	SoundConcurrency* ConcurrencySettings; // 0x4f0
	SetProperty ConcurrencySet; // 0x4f8 property 0x1ab71165ec0 hash 0xb0194396
	SoundClass* SoundClass; // 0x548
	SoundEffectSourcePresetChain* SourceEffectChain; // 0x550
	SoundSubmix* SoundSubmix; // 0x558
	TArray SoundSubmixSends; // 0x560
	TArray BusSends; // 0x570
	SoundModulation Modulation; // 0x580
	TArray PreEffectBusSends; // 0x590
	bool bIsUISound; // 0x5a0
	bool bIsPreviewSound; // 0x5a0
	int EnvelopeFollowerAttackTime; // 0x5a4
	int EnvelopeFollowerReleaseTime; // 0x5a8
	MulticastInlineDelegateProperty OnAudioEnvelopeValue; // 0x5b0 property 0x1ab7171f100 hash 0xb7a5ed1a
	SynthSound* Synth; // 0x5e0
	AudioComponent* AudioComponent; // 0x5e8

	// Functions
	Stop 0x3e2ef hash 7c8c8f2b params:(  );
	Start 0x3e2eb hash e1e39b3 params:(  );
	SetVolumeMultiplier 0x3e2e0 hash a2b02ad0 params:( None VolumeMultiplier; );
	SetSubmixSend 0x3e2d8 hash a875d853 params:( SoundSubmix Submix;None SendLevel; );
	IsPlaying 0x3e2d2 hash 5c6af535 params:( None ReturnValue; );
};


instance 1ab5e0952c0
class AudioGenerator public : Object
{
	// Fields

};


instance 1ab5e124e40
class AudioMixerBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	TrimAudioCache 0x47c3c hash d9de14a7 params:( None InMegabytesToFree;None ReturnValue; );
	StopRecordingOutput 0x47c31 hash 4da0a39 params:( Object WorldContextObject;UnderlyingType ExportType;None Name;None Path;SoundSubmix SubmixToRecord;SoundWave ExistingSoundWaveToOverwrite;SoundWave ReturnValue; );
	StopAnalyzingOutput 0x47c26 hash f370989 params:( Object WorldContextObject;SoundSubmix SubmixToStopAnalyzing; );
	StartRecordingOutput 0x47c1b hash b1ae93c1 params:( Object WorldContextObject;None ExpectedDuration;SoundSubmix SubmixToRecord; );
	StartAnalyzingOutput 0x47c10 hash bc0b9311 params:( Object WorldContextObject;SoundSubmix SubmixToAnalyze;UnderlyingType FFTSize;UnderlyingType InterpolationMethod;UnderlyingType WindowType;None HopSize; );
	SetBypassSourceEffectChainEntry 0x47bff hash decd9716 params:( Object WorldContextObject;SoundEffectSourcePresetChain PresetChain;None EntryIndex;None bBypassed; );
	ResumeRecordingOutput 0x47bf3 hash fc8e6a4 params:( Object WorldContextObject;SoundSubmix SubmixToPause; );
	RemoveSourceEffectFromPresetChain 0x47be1 hash fd61625b params:( Object WorldContextObject;SoundEffectSourcePresetChain PresetChain;None EntryIndex; );
	RemoveMasterSubmixEffect 0x47bd4 hash 858a1924 params:( Object WorldContextObject;SoundEffectSubmixPreset SubmixEffectPreset; );
	PrimeSoundForPlayback 0x47bc8 hash d5ef5979 params:( SoundWave SoundWave;OnSoundLoadComplete__DelegateSignature OnLoadCompletion; );
	PrimeSoundCueForPlayback 0x47bbb hash 62471df6 params:( SoundCue SoundCue; );
	PauseRecordingOutput 0x47bb0 hash a27ac631 params:( Object WorldContextObject;SoundSubmix SubmixToPause; );
	GetPhaseForFrequencies 0x47ba4 hash 2fe4dbb7 params:( Object WorldContextObject;Frequencies Frequencies;Phases Phases;SoundSubmix SubmixToAnalyze; );
	GetNumberOfEntriesInSourceEffectChain 0x47b90 hash 3e7ddb35 params:( Object WorldContextObject;SoundEffectSourcePresetChain PresetChain;None ReturnValue; );
	GetMagnitudeForFrequencies 0x47b82 hash d2303aa4 params:( Object WorldContextObject;Frequencies Frequencies;Magnitudes Magnitudes;SoundSubmix SubmixToAnalyze; );
	ClearMasterSubmixEffects 0x47b75 hash a7e6a290 params:( Object WorldContextObject; );
	AddSourceEffectToPresetChain 0x47b66 hash bfabc885 params:( Object WorldContextObject;SoundEffectSourcePresetChain PresetChain;SourceEffectChainEntry Entry; );
	AddMasterSubmixEffect 0x47b5a hash d681e63f params:( Object WorldContextObject;SoundEffectSubmixPreset SubmixEffectPreset; );
};


instance 1ab5e124c00
class SubmixEffectDynamicsProcessorPreset public : SoundEffectSubmixPreset
{
	// Fields
	SubmixEffectDynamicsProcessorSettings Settings; // 0x90

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SubmixEffectDynamicsProcessorSettings InSettings; );
};


instance 1ab5e12de40
class SubmixEffectSubmixEQPreset public : SoundEffectSubmixPreset
{
	// Fields
	SubmixEffectSubmixEQSettings Settings; // 0x78

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SubmixEffectSubmixEQSettings InSettings; );
};


instance 1ab5e12dc00
class SubmixEffectReverbPreset public : SoundEffectSubmixPreset
{
	// Fields
	SubmixEffectReverbSettings Settings; // 0x9c

	// Functions
	SetSettingsWithReverbEffect 0x47c72 hash 2586ae11 params:( ReverbEffect InReverbEffect;None WetLevel;None DryLevel; );
	SetSettings 0x1f837 hash 981df862 params:( SubmixEffectReverbSettings InSettings; );
};


instance 1ab5e12d9c0
class SubmixEffectReverbFastPreset public : SoundEffectSubmixPreset
{
	// Fields
	SubmixEffectReverbFastSettings Settings; // 0x9c

	// Functions
	SetSettingsWithReverbEffect 0x47c72 hash 2586ae11 params:( ReverbEffect InReverbEffect;None WetLevel;None DryLevel; );
	SetSettings 0x1f837 hash 981df862 params:( SubmixEffectReverbFastSettings InSettings; );
};


instance 1ab5e12d780
class SynthSound public : SoundWaveProcedural
{
	// Fields
	SynthComponent* OwningSynthComponent; // 0x3d0

};


instance 1ab7151acc0
struct SubmixEffectDynamicsProcessorSettings 
{
	// Fields
	ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
	float LookAheadMsec; // 0x4
	float AttackTimeMsec; // 0x8
	float ReleaseTimeMsec; // 0xc
	float ThresholdDb; // 0x10
	float Ratio; // 0x14
	float KneeBandwidthDb; // 0x18
	float InputGainDb; // 0x1c
	float OutputGainDb; // 0x20
	bool bChannelLinked; // 0x24
	bool bAnalogMode; // 0x24

};


instance 1ab7151ac00
struct SubmixEffectSubmixEQSettings 
{
	// Fields
	TArray EQBands; // 0x0

};


instance 1ab7151ab40
struct SubmixEffectEQBand 
{
	// Fields
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	bool bEnabled; // 0xc

};


instance 1ab7151aa80
struct SubmixEffectReverbSettings 
{
	// Fields
	float Density; // 0x0
	float Diffusion; // 0x4
	float Gain; // 0x8
	float GainHF; // 0xc
	float DecayTime; // 0x10
	float DecayHFRatio; // 0x14
	float ReflectionsGain; // 0x18
	float ReflectionsDelay; // 0x1c
	float LateGain; // 0x20
	float LateDelay; // 0x24
	float AirAbsorptionGainHF; // 0x28
	float WetLevel; // 0x2c
	float DryLevel; // 0x30

};


instance 1ab7151a9c0
struct SubmixEffectReverbFastSettings 
{
	// Fields
	float Density; // 0x0
	float Diffusion; // 0x4
	float Gain; // 0x8
	float GainHF; // 0xc
	float DecayTime; // 0x10
	float DecayHFRatio; // 0x14
	float ReflectionsGain; // 0x18
	float ReflectionsDelay; // 0x1c
	float LateGain; // 0x20
	float LateDelay; // 0x24
	float AirAbsorptionGainHF; // 0x28
	float WetLevel; // 0x2c
	float DryLevel; // 0x30

};


