instance 1ab5c9fb800
class ModularSynthPresetBank public : Object
{
	// Fields
	TArray Presets; // 0x28

};


instance 1ab5c9fb5c0
class ModularSynthLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	AddModularSynthPresetToBankAsset 0x3df3c hash 926e14a params:( ModularSynthPresetBank InBank;ModularSynthPreset Preset;None PresetName; );
};


instance 1ab5c9fb380
class ModularSynthComponent public : SynthComponent
{
	// Fields
	int VoiceCount; // 0x620

	// Functions
	SetSynthPreset 0x3e4de hash ae5bcfa params:( ModularSynthPreset SynthPreset; );
	SetSustainGain 0x3e4d6 hash 6049da77 params:( None SustainGain; );
	SetStereoDelayWetlevel 0x3e4ca hash ac099bfa params:( None DelayWetlevel; );
	SetStereoDelayTime 0x3e4c0 hash d7c3aa41 params:( None DelayTimeMsec; );
	SetStereoDelayRatio 0x3e4b5 hash d0107d11 params:( None DelayRatio; );
	SetStereoDelayMode 0x3e4ab hash d7bfebf7 params:( UnderlyingType StereoDelayMode; );
	SetStereoDelayIsEnabled 0x3e49e hash 9c6e7ef9 params:( None StereoDelayEnabled; );
	SetStereoDelayFeedback 0x3e492 hash d81a54d7 params:( None DelayFeedback; );
	SetSpread 0x3e48c hash 9798d490 params:( None Spread; );
	SetReleaseTime 0x3e484 hash a9b98021 params:( None ReleaseTimeMsec; );
	SetPortamento 0x3e47c hash acfa299a params:( None Portamento; );
	SetPitchBend 0x3e475 hash c79d1082 params:( None PitchBend; );
	SetPan 0x3e471 hash d0dfd910 params:( None Pan; );
	SetOscType 0x3e46b hash 5cb19378 params:( None OscIndex;UnderlyingType OscType; );
	SetOscSync 0x3e465 hash 5cb106d3 params:( None bIsSynced; );
	SetOscSemitones 0x3e45c hash 32c7320d params:( None OscIndex;None Semitones; );
	SetOscPulsewidth 0x3e453 hash ba69fbff params:( None OscIndex;None Pulsewidth; );
	SetOscOctave 0x3e44c hash 422e9b58 params:( None OscIndex;None Octave; );
	SetOscGainMod 0x3e444 hash 1ac535b5 params:( None OscIndex;None OscGainMod; );
	SetOscGain 0x3e43e hash 5caa0b95 params:( None OscIndex;None OscGain; );
	SetOscFrequencyMod 0x3e434 hash e41d6d28 params:( None OscIndex;None OscFreqMod; );
	SetOscCents 0x3e42d hash f1a56433 params:( None OscIndex;None Cents; );
	SetModEnvSustainGain 0x3e422 hash ffcd6200 params:( None SustainGain; );
	SetModEnvReleaseTime 0x3e417 hash 493d07aa params:( None Release; );
	SetModEnvPatch 0x3e40f hash f975588a params:( UnderlyingType InPatchType; );
	SetModEnvInvert 0x3e406 hash 18b8aef2 params:( None bInvert; );
	SetModEnvDepth 0x3e3fe hash f89e552f params:( None Depth; );
	SetModEnvDecayTime 0x3e3f4 hash 96fb86f params:( None DecayTimeMsec; );
	SetModEnvBiasPatch 0x3e3ea hash 5ea7ed89 params:( UnderlyingType InPatchType; );
	SetModEnvBiasInvert 0x3e3df hash 243de3d1 params:( None bInvert; );
	SetModEnvAttackTime 0x3e3d4 hash 7d33f721 params:( None AttackTimeMsec; );
	SetLFOType 0x3e3ce hash b60ced4 params:( None LFOIndex;UnderlyingType LFOType; );
	SetLFOPatch 0x3e3c7 hash 77252f62 params:( None LFOIndex;UnderlyingType LFOPatchType; );
	SetLFOMode 0x3e3c1 hash b5ccc17 params:( None LFOIndex;UnderlyingType LFOMode; );
	SetLFOGainMod 0x3e3b9 hash 1fa10391 params:( None LFOIndex;None GainMod; );
	SetLFOGain 0x3e3b3 hash b5946f1 params:( None LFOIndex;None Gain; );
	SetLFOFrequencyMod 0x3e3a9 hash 5c904484 params:( None LFOIndex;None FrequencyModHz; );
	SetLFOFrequency 0x3e3a0 hash 9db7f4c4 params:( None LFOIndex;None FrequencyHz; );
	SetGainDb 0x3e39a hash 7a86b096 params:( None GainDb; );
	SetFilterType 0x3e392 hash 49c0d3d9 params:( UnderlyingType FilterType; );
	SetFilterQMod 0x3e38a hash 49be7368 params:( None FilterQ; );
	SetFilterQ 0x3e384 hash 9145ee28 params:( None FilterQ; );
	SetFilterFrequencyMod 0x3e378 hash af937e89 params:( None FilterFrequencyHz; );
	SetFilterFrequency 0x3e36e hash 8d8ce4e9 params:( None FilterFrequencyHz; );
	SetFilterAlgorithm 0x3e364 hash 52a9dcfe params:( UnderlyingType FilterAlgorithm; );
	SetEnableUnison 0x3e35b hash 588f7794 params:( None EnableUnison; );
	SetEnableRetrigger 0x3e351 hash a3f83dc3 params:( None RetriggerEnabled; );
	SetEnablePolyphony 0x3e347 hash 9e933e0a params:( None bEnablePolyphony; );
	SetEnablePatch 0x3e33f hash 6ee8bba8 params:( PatchId PatchId;None bIsEnabled;None ReturnValue; );
	SetEnableLegato 0x3e336 hash 42ecc8b4 params:( None LegatoEnabled; );
	SetDecayTime 0x3e32f hash 80b5a726 params:( None DecayTimeMsec; );
	SetChorusFrequency 0x3e325 hash 4e82a8f7 params:( None Frequency; );
	SetChorusFeedback 0x3e31b hash 56c5beca params:( None Feedback; );
	SetChorusEnabled 0x3e312 hash 6582cfb0 params:( None EnableChorus; );
	SetChorusDepth 0x3e30a hash 4378beba params:( None Depth; );
	SetAttackTime 0x3e302 hash dd37bcb8 params:( None AttackTimeMsec; );
	NoteOn 0x3e2fe hash c5eb59f8 params:( None Note;None Velocity;None Duration; );
	NoteOff 0x3e2f9 hash 83569856 params:( None Note;None bAllNotesOff;None bKillAllNotes; );
	CreatePatch 0x3e2f2 hash ec4779e9 params:( UnderlyingType PatchSource;PatchCables PatchCables;None bEnableByDefault;PatchId ReturnValue; );
};


instance 1ab5c9faa80
class SourceEffectBitCrusherPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectBitCrusherSettings Settings; // 0x70

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectBitCrusherSettings InSettings; );
};


instance 1ab5c9fa3c0
class SourceEffectChorusPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectChorusSettings Settings; // 0x80

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectChorusSettings InSettings; );
};


instance 1ab5c9fa180
class SourceEffectDynamicsProcessorPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectDynamicsProcessorSettings Settings; // 0x90

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectDynamicsProcessorSettings InSettings; );
};


instance 1ab5c9f9f40
class EnvelopeFollowerListener public : ActorComponent
{
	// Fields
	MulticastInlineDelegateProperty OnEnvelopeFollowerUpdate; // 0xb0 property 0x1ab71730080 hash 0xb7a5ed1a

};


instance 1ab5c9f9d00
class SourceEffectEnvelopeFollowerPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectEnvelopeFollowerSettings Settings; // 0x74

	// Functions
	UnregisterEnvelopeFollowerListener 0x3e55c hash d620397b params:( EnvelopeFollowerListener EnvelopeFollowerListener; );
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectEnvelopeFollowerSettings InSettings; );
	RegisterEnvelopeFollowerListener 0x3e54b hash 25ec10b8 params:( EnvelopeFollowerListener EnvelopeFollowerListener; );
};


instance 1ab5c9f9ac0
class SourceEffectEQPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectEQSettings Settings; // 0x78

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectEQSettings InSettings; );
};


instance 1ab5c9f9880
class SourceEffectFilterPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectFilterSettings Settings; // 0x74

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectFilterSettings InSettings; );
};


instance 1ab5c9f9640
class SourceEffectFoldbackDistortionPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectFoldbackDistortionSettings Settings; // 0x74

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectFoldbackDistortionSettings InSettings; );
};


instance 1ab5c9f9400
class SourceEffectMidSideSpreaderPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectMidSideSpreaderSettings Settings; // 0x74

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectMidSideSpreaderSettings InSettings; );
};


instance 1ab5c9f91c0
class SourceEffectPannerPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectPannerSettings Settings; // 0x70

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectPannerSettings InSettings; );
};


instance 1ab5c9f8f80
class SourceEffectPhaserPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectPhaserSettings Settings; // 0x78

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectPhaserSettings InSettings; );
};


instance 1ab5c9f8d40
class SourceEffectRingModulationPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectRingModulationSettings Settings; // 0x7c

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectRingModulationSettings InSettings; );
};


instance 1ab5c9f8b00
class SourceEffectSimpleDelayPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectSimpleDelaySettings Settings; // 0x80

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectSimpleDelaySettings InSettings; );
};


instance 1ab5c9f88c0
class SourceEffectStereoDelayPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectStereoDelaySettings Settings; // 0x7c

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectStereoDelaySettings InSettings; );
};


instance 1ab5c9f8680
class SourceEffectWaveShaperPreset public : SoundEffectSourcePreset
{
	// Fields
	SourceEffectWaveShaperSettings Settings; // 0x70

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SourceEffectWaveShaperSettings InSettings; );
};


instance 1ab5c9f8440
class SubmixEffectDelayPreset public : SoundEffectSubmixPreset
{
	// Fields
	SubmixEffectDelaySettings Settings; // 0x74
	SubmixEffectDelaySettings DynamicSettings; // 0x80

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SubmixEffectDelaySettings InSettings; );
	SetInterpolationTime 0x3e632 hash 13539e28 params:( None Time; );
	SetDelay 0x3e62d hash 87636d00 params:( None Length; );
	GetMaxDelayInMilliseconds 0x3e61f hash 1cc71257 params:( None ReturnValue; );
};


instance 1ab5c9f7fc0
class SubmixEffectFilterPreset public : SoundEffectSubmixPreset
{
	// Fields
	SubmixEffectFilterSettings Settings; // 0x74

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SubmixEffectFilterSettings InSettings; );
	SetFilterType 0x3e392 hash 49c0d3d9 params:( UnderlyingType InType; );
	SetFilterQMod 0x3e38a hash 49be7368 params:( None InQ; );
	SetFilterQ 0x3e384 hash 9145ee28 params:( None InQ; );
	SetFilterCutoffFrequencyMod 0x3e657 hash 7c8e3510 params:( None InFrequency; );
	SetFilterCutoffFrequency 0x3e64a hash 658cd0d0 params:( None InFrequency; );
	SetFilterAlgorithm 0x3e364 hash 52a9dcfe params:( UnderlyingType InAlgorithm; );
};


instance 1ab5c9f7d80
class SubmixEffectFlexiverbPreset public : SoundEffectSubmixPreset
{
	// Fields
	SubmixEffectFlexiverbSettings Settings; // 0x78

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( SubmixEffectFlexiverbSettings InSettings; );
};


instance 1ab5c9f7b40
class SubmixEffectTapDelayPreset public : SoundEffectSubmixPreset
{
	// Fields
	SubmixEffectTapDelaySettings Settings; // 0x80

	// Functions
	SetTap 0x3e697 hash d0dfea16 params:( None TapId;TapDelayInfo TapInfo; );
	SetSettings 0x1f837 hash 981df862 params:( SubmixEffectTapDelaySettings InSettings; );
	SetInterpolationTime 0x3e632 hash 13539e28 params:( None Time; );
	RemoveTap 0x3e691 hash 49fa55b8 params:( None TapId; );
	GetTapIds 0x3e68b hash 2307b22a params:( TapIds TapIds; );
	GetTap 0x3e687 hash b4e2028a params:( None TapId;TapDelayInfo TapInfo; );
	GetMaxDelayInMilliseconds 0x3e61f hash 1cc71257 params:( None ReturnValue; );
	AddTap 0x3e683 hash a6c83033 params:( None TapId; );
};


instance 1ab5c9ffdc0
class Synth2DSlider public : Widget
{
	// Fields
	float ValueX; // 0x108
	float ValueY; // 0x10c
	DelegateProperty ValueXDelegate; // 0x110 property 0x1ab71732380 hash 0xe1aec4e5
	DelegateProperty ValueYDelegate; // 0x120 property 0x1ab71732400 hash 0xe1aec4e5
	Synth2DSliderStyle WidgetStyle; // 0x130
	LinearColor SliderHandleColor; // 0x3e8
	bool IndentHandle; // 0x3f8
	bool Locked; // 0x3f9
	float StepSize; // 0x3fc
	bool IsFocusable; // 0x400
	MulticastInlineDelegateProperty OnMouseCaptureBegin; // 0x408 property 0x1ab71732780 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnMouseCaptureEnd; // 0x418 property 0x1ab71732800 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnControllerCaptureBegin; // 0x428 property 0x1ab71732880 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnControllerCaptureEnd; // 0x438 property 0x1ab71732900 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnValueChangedX; // 0x448 property 0x1ab71732980 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnValueChangedY; // 0x458 property 0x1ab71732a00 hash 0xb7a5ed1a

	// Functions
	SetValue 0x3e896 hash 88a6f70e params:( Vector2D InValue; );
	SetStepSize 0x3e88f hash f775a108 params:( None InValue; );
	SetSliderHandleColor 0x3e884 hash 476de7ff params:( LinearColor InValue; );
	SetLocked 0x3e87e hash 872a8003 params:( None InValue; );
	SetIndentHandle 0x3e875 hash c1e35b7f params:( None InValue; );
	GetValue 0x3e870 hash 7590fc82 params:( Vector2D ReturnValue; );
};


instance 1ab5c9ff700
class GranularSynth public : SynthComponent
{
	// Fields
	SoundWave* GranulatedSoundWave; // 0x620

	// Functions
	SetSustainGain 0x3e4d6 hash 6049da77 params:( None SustainGain; );
	SetSoundWave 0x3e921 hash 15036e6d params:( SoundWave InSoundWave; );
	SetScrubMode 0x3e91a hash 2b296675 params:( None bScrubMode; );
	SetReleaseTimeMsec 0x3e910 hash ecfad869 params:( None ReleaseTimeMsec; );
	SetPlayheadTime 0x3e907 hash 49af2788 params:( None InPositionSec;None LerpTimeSec;UnderlyingType SeekType; );
	SetPlaybackSpeed 0x3e8fe hash bddc5169 params:( None InPlayheadRate; );
	SetGrainVolume 0x3e8f6 hash 78c75a3a params:( None BaseVolume;Vector2D VolumeRange; );
	SetGrainsPerSecond 0x3e8ec hash a5f53058 params:( None InGrainsPerSecond; );
	SetGrainProbability 0x3e8e1 hash aa2f89a3 params:( None InGrainProbability; );
	SetGrainPitch 0x3e8d9 hash 339359a params:( None BasePitch;Vector2D PitchRange; );
	SetGrainPan 0x3e8d2 hash 40a63fa1 params:( None BasePan;Vector2D PanRange; );
	SetGrainEnvelopeType 0x3e8c7 hash 594b6da2 params:( UnderlyingType EnvelopeType; );
	SetGrainDuration 0x3e8be hash 5dc4588 params:( None BaseDurationMsec;Vector2D DurationRange; );
	SetDecayTime 0x3e32f hash 80b5a726 params:( None DecayTimeMsec; );
	SetAttackTime 0x3e302 hash dd37bcb8 params:( None AttackTimeMsec; );
	NoteOn 0x3e2fe hash c5eb59f8 params:( None Note;None Velocity;None Duration; );
	NoteOff 0x3e2f9 hash 83569856 params:( None Note;None bKill; );
	IsLoaded 0x3e8b9 hash 2839e02a params:( None ReturnValue; );
	GetSampleDuration 0x3e8af hash 2272fc2d params:( None ReturnValue; );
	GetCurrentPlayheadTime 0x3e8a3 hash c7840c5f params:( None ReturnValue; );
};


instance 1ab5c9ff4c0
class MonoWaveTableSynthPreset public : Object
{
	// Fields
	FString PresetName; // 0x28
	bool bLockKeyframesToGridBool; // 0x38
	int LockKeyframesToGrid; // 0x3c
	int WaveTableResolution; // 0x40
	TArray WaveTable; // 0x48
	bool bNormalizeWaveTables; // 0x58

};


instance 1ab5c9ff280
class SynthComponentMonoWaveTable public : SynthComponent
{
	// Fields
	MulticastInlineDelegateProperty OnTableAltered; // 0x620 property 0x1ab71735200 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnNumTablesChanged; // 0x630 property 0x1ab71735280 hash 0xb7a5ed1a
	MonoWaveTableSynthPreset* CurrentPreset; // 0x640

	// Functions
	SetWaveTablePosition 0x3eb53 hash 41981481 params:( None InPosition; );
	SetSustainPedalState 0x3eb48 hash 576955f params:( None InSustainPedalState; );
	SetPosLfoType 0x3eb40 hash 9de75846 params:( UnderlyingType InLfoType; );
	SetPosLfoFrequency 0x3eb36 hash 50a83576 params:( None InLfoFrequency; );
	SetPosLfoDepth 0x3eb2e hash 59a5e3b9 params:( None InLfoDepth; );
	SetPositionEnvelopeSustainGain 0x3eb1e hash 9ff410ca params:( None InSustainGain; );
	SetPositionEnvelopeReleaseTime 0x3eb0e hash e963b674 params:( None InReleaseTimeMsec; );
	SetPositionEnvelopeInvert 0x3eb00 hash 9a9a777c params:( None bInInvert; );
	SetPositionEnvelopeDepth 0x3eaf3 hash d5c43479 params:( None InDepth; );
	SetPositionEnvelopeDecayTime 0x3eae4 hash b9a82cb9 params:( None InDecayTimeMsec; );
	SetPositionEnvelopeBiasInvert 0x3ead4 hash db84e15b params:( None bInBiasInvert; );
	SetPositionEnvelopeBiasDepth 0x3eac5 hash e095e78 params:( None InDepth; );
	SetPositionEnvelopeAttackTime 0x3eab5 hash 347af4ab params:( None InAttackTimeMsec; );
	SetLowPassFilterResonance 0x3eaa7 hash 1bb982be params:( None InNewQ; );
	SetLowPassFilterFrequency 0x3ea99 hash 74b7e1f2 params:( None InNewFrequency; );
	SetFrequencyWithMidiNote 0x3ea8c hash ea80b7d8 params:( None InMidiNote; );
	SetFrequencyPitchBend 0x3ea80 hash beaa87f4 params:( None FrequencyOffsetCents; );
	SetFrequency 0x3ea79 hash 280e60a3 params:( None FrequencyHz; );
	SetFilterEnvelopeSustainGain 0x3ea6a hash ce40d11b params:( None InSustainGain; );
	SetFilterEnvelopeReleaseTime 0x3ea5b hash 17b076c5 params:( None InReleaseTimeMsec; );
	SetFilterEnvelopenDecayTime 0x3ea4c hash ac0ac798 params:( None InDecayTimeMsec; );
	SetFilterEnvelopeInvert 0x3ea3f hash d6d8812d params:( None bInInvert; );
	SetFilterEnvelopeDepth 0x3ea33 hash f69f4c0a params:( None InDepth; );
	SetFilterEnvelopeBiasInvert 0x3ea24 hash b6225b8c params:( None bInBiasInvert; );
	SetFilterEnvelopeBiasDepth 0x3ea16 hash ced7d689 params:( None InDepth; );
	SetFilterEnvelopeAttackTime 0x3ea07 hash f186edc params:( None InAttackTimeMsec; );
	SetCurveValue 0x3e9ff hash d5021f73 params:( None TableIndex;None KeyframeIndex;None NewValue;None ReturnValue; );
	SetCurveTangent 0x3e9f6 hash 842fe107 params:( None TableIndex;None InNewTangent;None ReturnValue; );
	SetCurveInterpolationType 0x3e9e8 hash ea29ca80 params:( UnderlyingType InterpolationType;None TableIndex;None ReturnValue; );
	SetAmpEnvelopeSustainGain 0x3e9da hash 91b99df3 params:( None InSustainGain; );
	SetAmpEnvelopeReleaseTime 0x3e9cc hash db29439d params:( None InReleaseTimeMsec; );
	SetAmpEnvelopeInvert 0x3e9c1 hash 4f0fe705 params:( None bInInvert; );
	SetAmpEnvelopeDepth 0x3e9b6 hash 401556e2 params:( None InDepth; );
	SetAmpEnvelopeDecayTime 0x3e9a9 hash 53265ba2 params:( None InDecayTimeMsec; );
	SetAmpEnvelopeBiasInvert 0x3e99c hash a4c8ed64 params:( None bInBiasInvert; );
	SetAmpEnvelopeBiasDepth 0x3e98f hash a7878d61 params:( None InDepth; );
	SetAmpEnvelopeAttackTime 0x3e982 hash fdbf00b4 params:( None InAttackTimeMsec; );
	RefreshWaveTable 0x3e979 hash 6b315c0f params:( None Index; );
	RefreshAllWaveTables 0x3e96e hash f24047fb params:(  );
	NoteOn 0x3e2fe hash c5eb59f8 params:( None InMidiNote;None InVelocity; );
	NoteOff 0x3e2f9 hash 83569856 params:( None InMidiNote; );
	GetNumTableEntries 0x3e964 hash c567bb57 params:( None ReturnValue; );
	GetMaxTableIndex 0x3e95b hash a6763b2b params:( None ReturnValue; );
	GetKeyFrameValuesForTable 0x3e94d hash 19daad18 params:( None TableIndex;ReturnValue ReturnValue; );
	GetCurveTangent 0x3e944 hash dcd6bbfb params:( None TableIndex;None ReturnValue; );
};


instance 1ab5c9ff040
class SynthSamplePlayer public : SynthComponent
{
	// Fields
	SoundWave* SoundWave; // 0x620
	MulticastInlineDelegateProperty OnSampleLoaded; // 0x628 property 0x1ab71734e00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnSamplePlaybackProgress; // 0x638 property 0x1ab71734e80 hash 0xb7a5ed1a

	// Functions
	SetSoundWave 0x3e921 hash 15036e6d params:( SoundWave InSoundWave; );
	SetScrubTimeWidth 0x3eb95 hash ecee947f params:( None InScrubTimeWidthSec; );
	SetScrubMode 0x3e91a hash 2b296675 params:( None bScrubMode; );
	SetPitch 0x3eb90 hash 883ee6c9 params:( None InPitch;None TimeSec; );
	SeekToTime 0x3eb8a hash a8bdb57f params:( None TimeSec;UnderlyingType SeekType;None bWrap; );
	IsLoaded 0x3e8b9 hash 2839e02a params:( None ReturnValue; );
	GetSampleDuration 0x3e8af hash 2272fc2d params:( None ReturnValue; );
	GetCurrentPlaybackProgressTime 0x3eb7a hash 6cdae873 params:( None ReturnValue; );
	GetCurrentPlaybackProgressPercent 0x3eb68 hash b92e8015 params:( None ReturnValue; );
};


instance 1ab5c9fee00
class SynthKnob public : Widget
{
	// Fields
	float Value; // 0x108
	float StepSize; // 0x10c
	float MouseSpeed; // 0x110
	float MouseFineTuneSpeed; // 0x114
	bool ShowTooltipInfo; // 0x118
	FText ParameterName; // 0x120
	FText ParameterUnits; // 0x138
	DelegateProperty ValueDelegate; // 0x150 property 0x1ab71734880 hash 0xe1aec4e5
	SynthKnobStyle WidgetStyle; // 0x160
	bool Locked; // 0x398
	bool IsFocusable; // 0x399
	MulticastInlineDelegateProperty OnMouseCaptureBegin; // 0x3a0 property 0x1ab71734a80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnMouseCaptureEnd; // 0x3b0 property 0x1ab71734b00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnControllerCaptureBegin; // 0x3c0 property 0x1ab71734b80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnControllerCaptureEnd; // 0x3d0 property 0x1ab71734c00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnValueChanged; // 0x3e0 property 0x1ab71734c80 hash 0xb7a5ed1a

	// Functions
	SetValue 0x3e896 hash 88a6f70e params:( None InValue; );
	SetStepSize 0x3e88f hash f775a108 params:( None InValue; );
	SetLocked 0x3e87e hash 872a8003 params:( None InValue; );
	GetValue 0x3e870 hash 7590fc82 params:( None ReturnValue; );
};


instance 1ab70e9f640
struct ModularSynthPresetBankEntry 
{
	// Fields
	FString PresetName; // 0x0
	ModularSynthPreset Preset; // 0x10

};


instance 1ab70e9f4c0
struct ModularSynthPreset 
{
	// Fields
	bool bEnablePolyphony; // 0x8
	ESynth1OscType Osc1Type; // 0xc
	float Osc1Gain; // 0x10
	float Osc1Octave; // 0x14
	float Osc1Semitones; // 0x18
	float Osc1Cents; // 0x1c
	float Osc1PulseWidth; // 0x20
	ESynth1OscType Osc2Type; // 0x24
	float Osc2Gain; // 0x28
	float Osc2Octave; // 0x2c
	float Osc2Semitones; // 0x30
	float Osc2Cents; // 0x34
	float Osc2PulseWidth; // 0x38
	float Portamento; // 0x3c
	bool bEnableUnison; // 0x40
	bool bEnableOscillatorSync; // 0x40
	float Spread; // 0x44
	float Pan; // 0x48
	float LFO1Frequency; // 0x4c
	float LFO1Gain; // 0x50
	ESynthLFOType LFO1Type; // 0x54
	ESynthLFOMode LFO1Mode; // 0x55
	ESynthLFOPatchType LFO1PatchType; // 0x56
	float LFO2Frequency; // 0x58
	float LFO2Gain; // 0x5c
	ESynthLFOType LFO2Type; // 0x60
	ESynthLFOMode LFO2Mode; // 0x61
	ESynthLFOPatchType LFO2PatchType; // 0x62
	float GainDb; // 0x64
	float AttackTime; // 0x68
	float DecayTime; // 0x6c
	float SustainGain; // 0x70
	float ReleaseTime; // 0x74
	ESynthModEnvPatch ModEnvPatchType; // 0x78
	ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x79
	bool bInvertModulationEnvelope; // 0x7c
	bool bInvertModulationEnvelopeBias; // 0x7c
	float ModulationEnvelopeDepth; // 0x80
	float ModulationEnvelopeAttackTime; // 0x84
	float ModulationEnvelopeDecayTime; // 0x88
	float ModulationEnvelopeSustainGain; // 0x8c
	float ModulationEnvelopeReleaseTime; // 0x90
	bool bLegato; // 0x94
	bool bRetrigger; // 0x94
	float FilterFrequency; // 0x98
	float FilterQ; // 0x9c
	ESynthFilterType FilterType; // 0xa0
	ESynthFilterAlgorithm FilterAlgorithm; // 0xa1
	bool bStereoDelayEnabled; // 0xa4
	ESynthStereoDelayMode StereoDelayMode; // 0xa8
	float StereoDelayTime; // 0xac
	float StereoDelayFeedback; // 0xb0
	float StereoDelayWetlevel; // 0xb4
	float StereoDelayRatio; // 0xb8
	bool bChorusEnabled; // 0xbc
	float ChorusDepth; // 0xc0
	float ChorusFeedback; // 0xc4
	float ChorusFrequency; // 0xc8
	TArray Patches; // 0xd0

};


instance 1ab70e9f400
struct EpicSynth1Patch 
{
	// Fields
	ESynth1PatchSource PatchSource; // 0x0
	TArray PatchCables; // 0x8

};


instance 1ab70e9f340
struct Synth1PatchCable 
{
	// Fields
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4

};


instance 1ab70e9f280
struct PatchId 
{
	// Fields
	int ID; // 0x0

};


instance 1ab70e9f1c0
struct SourceEffectBitCrusherSettings 
{
	// Fields
	float CrushedSampleRate; // 0x0
	float CrushedBits; // 0x4

};


instance 1ab70e9f100
struct SourceEffectChorusSettings 
{
	// Fields
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14

};


instance 1ab70e9f040
struct SourceEffectDynamicsProcessorSettings 
{
	// Fields
	ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESourceEffectDynamicsPeakMode PeakMode; // 0x1
	float LookAheadMsec; // 0x4
	float AttackTimeMsec; // 0x8
	float ReleaseTimeMsec; // 0xc
	float ThresholdDb; // 0x10
	float Ratio; // 0x14
	float KneeBandwidthDb; // 0x18
	float InputGainDb; // 0x1c
	float OutputGainDb; // 0x20
	bool bStereoLinked; // 0x24
	bool bAnalogMode; // 0x24

};


instance 1ab70e9ef80
struct SourceEffectEnvelopeFollowerSettings 
{
	// Fields
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9

};


instance 1ab70e9eec0
struct SourceEffectEQSettings 
{
	// Fields
	TArray EQBands; // 0x0

};


instance 1ab70e9ee00
struct SourceEffectEQBand 
{
	// Fields
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	bool bEnabled; // 0xc

};


instance 1ab70e9ed40
struct SourceEffectFilterSettings 
{
	// Fields
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8

};


instance 1ab70e9ec80
struct SourceEffectFoldbackDistortionSettings 
{
	// Fields
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8

};


instance 1ab70e9ebc0
struct SourceEffectMidSideSpreaderSettings 
{
	// Fields
	EStereoChannelMode InputMode; // 0x0
	float SpreadAmount; // 0x4
	EStereoChannelMode OutputMode; // 0x8
	bool bEqualPower; // 0x9

};


instance 1ab70e9eb00
struct SourceEffectPannerSettings 
{
	// Fields
	float Spread; // 0x0
	float Pan; // 0x4

};


instance 1ab70e9ea40
struct SourceEffectPhaserSettings 
{
	// Fields
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd

};


instance 1ab70e9e980
struct SourceEffectRingModulationSettings 
{
	// Fields
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10

};


instance 1ab70e9e8c0
struct SourceEffectSimpleDelaySettings 
{
	// Fields
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	bool bDelayBasedOnDistance; // 0x14

};


instance 1ab70e9e800
struct SourceEffectStereoDelaySettings 
{
	// Fields
	EStereoDelaySourceEffect DelayMode; // 0x0
	float DelayTimeMsec; // 0x4
	float Feedback; // 0x8
	float DelayRatio; // 0xc
	float WetLevel; // 0x10

};


instance 1ab70e9e740
struct SourceEffectWaveShaperSettings 
{
	// Fields
	float Amount; // 0x0
	float OutputGainDb; // 0x4

};


instance 1ab70e9e680
struct SubmixEffectDelaySettings 
{
	// Fields
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8

};


instance 1ab70e9e5c0
struct SubmixEffectFilterSettings 
{
	// Fields
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8

};


instance 1ab70e9e500
struct SubmixEffectFlexiverbSettings 
{
	// Fields
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int Complexity; // 0xc

};


instance 1ab70e9e440
struct SubmixEffectTapDelaySettings 
{
	// Fields
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray Taps; // 0x8

};


instance 1ab70e9e380
struct TapDelayInfo 
{
	// Fields
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int TapId; // 0x14

};


instance 1ab70e9e2c0
struct Synth2DSliderStyle 
{
	// Fields
	SlateBrush NormalThumbImage; // 0x8
	SlateBrush DisabledThumbImage; // 0x90
	SlateBrush NormalBarImage; // 0x118
	SlateBrush DisabledBarImage; // 0x1a0
	SlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0

};


instance 1ab70e9e200
struct SynthKnobStyle 
{
	// Fields
	SlateBrush LargeKnob; // 0x8
	SlateBrush LargeKnobOverlay; // 0x90
	SlateBrush MediumKnob; // 0x118
	SlateBrush MediumKnobOverlay; // 0x1a0
	float MinValueAngle; // 0x228
	float MaxValueAngle; // 0x22c
	ESynthKnobSize KnobSize; // 0x230

};


instance 1ab70e9e140
struct SynthSlateStyle 
{
	// Fields
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9

};


