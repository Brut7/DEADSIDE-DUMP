instance 1ab5e0fe2c0
class MovieSceneTransformOrigin public : Interface
{
	// Fields

	// Functions
	BP_GetTransformOrigin 0x1a394 hash 72b961a params:( Transform ReturnValue; );
};


instance 1ab5e1149c0
class MovieScene3DConstraintSection public : MovieSceneSection
{
	// Fields
	Guid ConstraintId; // 0xe0
	MovieSceneObjectBindingID ConstraintBindingID; // 0xf0

	// Functions
	SetConstraintBindingID 0x46443 hash af03251e params:( MovieSceneObjectBindingID InConstraintBindingID; );
	GetConstraintBindingID 0x46437 hash 4eefa592 params:( MovieSceneObjectBindingID ReturnValue; );
};


instance 1ab5e0fe080
class MovieScene3DAttachSection public : MovieScene3DConstraintSection
{
	// Fields
	FName AttachSocketName; // 0x108
	FName AttachComponentName; // 0x110
	EAttachmentRule AttachmentLocationRule; // 0x118
	EAttachmentRule AttachmentRotationRule; // 0x119
	EAttachmentRule AttachmentScaleRule; // 0x11a
	EDetachmentRule DetachmentLocationRule; // 0x11b
	EDetachmentRule DetachmentRotationRule; // 0x11c
	EDetachmentRule DetachmentScaleRule; // 0x11d

};


instance 1ab5e114540
class MovieScene3DConstraintTrack public : MovieSceneTrack
{
	// Fields
	TArray ConstraintSections; // 0x58

};


instance 1ab5e114780
class MovieScene3DAttachTrack public : MovieScene3DConstraintTrack
{
	// Fields

};


instance 1ab5e114300
class MovieScene3DPathSection public : MovieScene3DConstraintSection
{
	// Fields
	MovieSceneFloatChannel TimingCurve; // 0x108
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1a8
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1a9
	bool bFollow; // 0x1ac
	bool bReverse; // 0x1ac
	bool bForceUpright; // 0x1ac

};


instance 1ab5e1140c0
class MovieScene3DPathTrack public : MovieScene3DConstraintTrack
{
	// Fields

};


instance 1ab5e113e80
class MovieScene3DTransformSection public : MovieSceneSection
{
	// Fields
	MovieSceneTransformMask TransformMask; // 0xe0
	MovieSceneFloatChannel Translation; // 0xe8
	MovieSceneFloatChannel Rotation; // 0x2c8
	MovieSceneFloatChannel Scale; // 0x4a8
	MovieSceneFloatChannel ManualWeight; // 0x688
	bool bUseQuaternionInterpolation; // 0x72c

};


instance 1ab5e113a00
class MovieScenePropertyTrack public : MovieSceneNameableTrack
{
	// Fields
	MovieSceneSection* SectionToKey; // 0x58
	FName PropertyName; // 0x60
	FString PropertyPath; // 0x68
	TArray Sections; // 0x78

};


instance 1ab5e113c40
class MovieScene3DTransformTrack public : MovieScenePropertyTrack
{
	// Fields

};


instance 1ab5e1137c0
class MovieSceneActorReferenceSection public : MovieSceneSection
{
	// Fields
	MovieSceneActorReferenceData ActorReferenceData; // 0xe0
	IntegralCurve ActorGuidIndexCurve; // 0x180
	TArray ActorGuidStrings; // 0x200

};


instance 1ab5e113580
class MovieSceneActorReferenceTrack public : MovieScenePropertyTrack
{
	// Fields

};


instance 1ab5e113340
class MovieSceneAudioSection public : MovieSceneSection
{
	// Fields
	SoundBase* Sound; // 0xe0
	FrameNumber StartFrameOffset; // 0xe8
	float StartOffset; // 0xec
	float AudioStartTime; // 0xf0
	float AudioDilationFactor; // 0xf4
	float AudioVolume; // 0xf8
	MovieSceneFloatChannel SoundVolume; // 0x100
	MovieSceneFloatChannel PitchMultiplier; // 0x1a0
	bool bSuppressSubtitles; // 0x240
	bool bOverrideAttenuation; // 0x241
	SoundAttenuation* AttenuationSettings; // 0x248
	DelegateProperty OnQueueSubtitles; // 0x250 property 0x1ab71b79c80 hash 0xe1aec4e5
	MulticastInlineDelegateProperty OnAudioFinished; // 0x260 property 0x1ab71b79d00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnAudioPlaybackPercent; // 0x270 property 0x1ab71b79d80 hash 0xb7a5ed1a

	// Functions
	SetStartOffset 0x464e8 hash cc689746 params:( FrameNumber InStartOffset; );
	SetSound 0x40cd1 hash 8878803a params:( SoundBase InSound; );
	GetStartOffset 0x464e0 hash 565e3ba params:( FrameNumber ReturnValue; );
	GetSound 0x464db hash 756285ae params:( SoundBase ReturnValue; );
};


instance 1ab5e113100
class MovieSceneAudioTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray AudioSections; // 0x58

};


instance 1ab5e112ec0
class MovieSceneBoolSection public : MovieSceneSection
{
	// Fields
	bool DefaultValue; // 0xe0
	MovieSceneBoolChannel BoolCurve; // 0xe8

};


instance 1ab5e112c80
class MovieSceneBoolTrack public : MovieScenePropertyTrack
{
	// Fields

};


instance 1ab5e112a40
class MovieSceneByteSection public : MovieSceneSection
{
	// Fields
	MovieSceneByteChannel ByteCurve; // 0xe0

};


instance 1ab5e112800
class MovieSceneByteTrack public : MovieScenePropertyTrack
{
	// Fields
	Enum* Enum; // 0x88

};


instance 1ab5e1125c0
class MovieSceneCameraAnimSection public : MovieSceneSection
{
	// Fields
	MovieSceneCameraAnimSectionData AnimData; // 0xe0
	CameraAnim* CameraAnim; // 0x100
	float PlayRate; // 0x108
	float PlayScale; // 0x10c
	float BlendInTime; // 0x110
	float BlendOutTime; // 0x114
	bool bLooping; // 0x118

};


instance 1ab5e112380
class MovieSceneCameraAnimTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray CameraAnimSections; // 0x58

};


instance 1ab5e112140
class MovieSceneCameraCutSection public : MovieSceneSection
{
	// Fields
	Guid CameraGuid; // 0xe0
	MovieSceneObjectBindingID CameraBindingID; // 0xf0

	// Functions
	SetCameraBindingID 0x4655e hash 31356b42 params:( MovieSceneObjectBindingID InCameraBindingID; );
	GetCameraBindingID 0x46554 hash 82bd1b6 params:( MovieSceneObjectBindingID ReturnValue; );
};


instance 1ab5e111f00
class MovieSceneCameraCutTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray Sections; // 0x58

};


instance 1ab5e111cc0
class MovieSceneCameraShakeSection public : MovieSceneSection
{
	// Fields
	MovieSceneCameraShakeSectionData ShakeData; // 0xe0
	CameraShake* ShakeClass; // 0x100
	float PlayScale; // 0x108
	BYTE PlaySpace; // 0x10c
	Rotator UserDefinedPlaySpace; // 0x110

};


instance 1ab5e111a80
class MovieSceneCameraShakeTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray CameraShakeSections; // 0x58

};


instance 1ab5e111840
class MovieSceneCinematicShotSection public : MovieSceneSubSection
{
	// Fields
	FString ShotDisplayName; // 0x150
	FText DisplayName; // 0x160

	// Functions
	SetShotDisplayName 0x465ac hash ccd4c4e6 params:( None InShotDisplayName; );
	GetShotDisplayName 0x465a2 hash a3cb2b5a params:( None ReturnValue; );
};


instance 1ab5e111600
class MovieSceneCinematicShotTrack public : MovieSceneSubTrack
{
	// Fields

};


instance 1ab5e1113c0
class MovieSceneColorSection public : MovieSceneSection
{
	// Fields
	MovieSceneFloatChannel RedCurve; // 0xe0
	MovieSceneFloatChannel GreenCurve; // 0x180
	MovieSceneFloatChannel BlueCurve; // 0x220
	MovieSceneFloatChannel AlphaCurve; // 0x2c0

};


instance 1ab5e111180
class MovieSceneColorTrack public : MovieScenePropertyTrack
{
	// Fields
	bool bIsSlateColor; // 0x88

};


instance 1ab5e110f40
class MovieSceneEnumSection public : MovieSceneSection
{
	// Fields
	MovieSceneByteChannel EnumCurve; // 0xe0

};


instance 1ab5e110d00
class MovieSceneEnumTrack public : MovieScenePropertyTrack
{
	// Fields
	Enum* Enum; // 0x88

};


instance 1ab5e110ac0
class MovieSceneEulerTransformTrack public : MovieScenePropertyTrack
{
	// Fields

};


instance 1ab5e110640
class MovieSceneEventSectionBase public : MovieSceneSection
{
	// Fields

};


instance 1ab5e110880
class MovieSceneEventRepeaterSection public : MovieSceneEventSectionBase
{
	// Fields
	MovieSceneEvent Event; // 0xe0

};


instance 1ab5e110400
class MovieSceneEventSection public : MovieSceneSection
{
	// Fields
	NameCurve Events; // 0xe0
	MovieSceneEventSectionData EventData; // 0x158

};


instance 1ab5e1101c0
class MovieSceneEventTrack public : MovieSceneNameableTrack
{
	// Fields
	bool bFireEventsWhenForwards; // 0x58
	bool bFireEventsWhenBackwards; // 0x58
	EFireEventsAtPosition EventPosition; // 0x5c
	TArray EventReceivers; // 0x60
	TArray Sections; // 0x70

};


instance 1ab5e119400
class MovieSceneEventTriggerSection public : MovieSceneEventSectionBase
{
	// Fields
	MovieSceneEventChannel EventChannel; // 0xe0

};


instance 1ab5e118f80
class MovieSceneFloatSection public : MovieSceneSection
{
	// Fields
	MovieSceneFloatChannel FloatCurve; // 0xe0

};


instance 1ab5e1191c0
class MovieSceneFadeSection public : MovieSceneFloatSection
{
	// Fields
	LinearColor FadeColor; // 0x180
	bool bFadeAudio; // 0x190

};


instance 1ab5e118b00
class MovieSceneFloatTrack public : MovieScenePropertyTrack
{
	// Fields

};


instance 1ab5e118d40
class MovieSceneFadeTrack public : MovieSceneFloatTrack
{
	// Fields

};


instance 1ab5e1188c0
class MovieSceneIntegerSection public : MovieSceneSection
{
	// Fields
	MovieSceneIntegerChannel IntegerCurve; // 0xe0

};


instance 1ab5e118680
class MovieSceneIntegerTrack public : MovieScenePropertyTrack
{
	// Fields

};


instance 1ab5e118440
class MovieSceneLevelVisibilitySection public : MovieSceneSection
{
	// Fields
	ELevelVisibility Visibility; // 0xe0
	TArray LevelNames; // 0xe8

	// Functions
	SetVisibility 0x3e2b4 hash a9e0aaf9 params:( UnderlyingType InVisibility; );
	SetLevelNames 0x466a8 hash 55c6cedd params:( InLevelNames InLevelNames; );
	GetVisibility 0x3e72d hash f16c38ed params:( UnderlyingType ReturnValue; );
	GetLevelNames 0x466a0 hash 9d525cd1 params:( ReturnValue ReturnValue; );
};


instance 1ab5e118200
class MovieSceneLevelVisibilityTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray Sections; // 0x58

};


instance 1ab5e117d80
class MovieSceneMaterialTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray Sections; // 0x58

};


instance 1ab5e117fc0
class MovieSceneMaterialParameterCollectionTrack public : MovieSceneMaterialTrack
{
	// Fields
	MaterialParameterCollection* MPC; // 0x68

};


instance 1ab5e117b40
class MovieSceneComponentMaterialTrack public : MovieSceneMaterialTrack
{
	// Fields
	int MaterialIndex; // 0x68

};


instance 1ab5e117900
class MovieSceneObjectPropertySection public : MovieSceneSection
{
	// Fields
	MovieSceneObjectPathChannel ObjectChannel; // 0xe0

};


instance 1ab5e1176c0
class MovieSceneObjectPropertyTrack public : MovieScenePropertyTrack
{
	// Fields
	Object* PropertyClass; // 0x88

};


instance 1ab5e117480
class MovieSceneParameterSection public : MovieSceneSection
{
	// Fields
	TArray ScalarParameterNamesAndCurves; // 0xe0
	TArray VectorParameterNamesAndCurves; // 0xf0
	TArray ColorParameterNamesAndCurves; // 0x100
	TArray TransformParameterNamesAndCurves; // 0x110

};


instance 1ab5e117240
class MovieSceneParticleParameterTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray Sections; // 0x58

};


instance 1ab5e117000
class MovieSceneParticleSection public : MovieSceneSection
{
	// Fields
	MovieSceneParticleChannel ParticleKeys; // 0xe0

};


instance 1ab5e116dc0
class MovieSceneParticleTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray ParticleSections; // 0x58

};


instance 1ab5e116b80
class MovieScenePrimitiveMaterialSection public : MovieSceneSection
{
	// Fields
	MovieSceneObjectPathChannel MaterialChannel; // 0xe0

};


instance 1ab5e116940
class MovieScenePrimitiveMaterialTrack public : MovieScenePropertyTrack
{
	// Fields
	int MaterialIndex; // 0x88

};


instance 1ab5e116700
class MovieSceneSkeletalAnimationSection public : MovieSceneSection
{
	// Fields
	MovieSceneSkeletalAnimationParams Params; // 0xe0
	AnimSequence* AnimSequence; // 0x1b8
	AnimSequenceBase* Animation; // 0x1c0
	float StartOffset; // 0x1c8
	float EndOffset; // 0x1cc
	float PlayRate; // 0x1d0
	bool bReverse; // 0x1d4
	FName SlotName; // 0x1d8

};


instance 1ab5e1164c0
class MovieSceneSkeletalAnimationTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray AnimationSections; // 0x58
	bool bUseLegacySectionIndexBlend; // 0x68

};


instance 1ab5e116280
class MovieSceneSlomoSection public : MovieSceneFloatSection
{
	// Fields

};


instance 1ab5e116040
class MovieSceneSlomoTrack public : MovieSceneFloatTrack
{
	// Fields

};


instance 1ab5e115e00
class MovieSceneSpawnSection public : MovieSceneBoolSection
{
	// Fields

};


instance 1ab5e115bc0
class MovieSceneSpawnTrack public : MovieSceneTrack
{
	// Fields
	TArray Sections; // 0x58
	Guid ObjectGuid; // 0x68

};


instance 1ab5e115980
class MovieSceneStringSection public : MovieSceneSection
{
	// Fields
	MovieSceneStringChannel StringCurve; // 0xe0

};


instance 1ab5e115740
class MovieSceneStringTrack public : MovieScenePropertyTrack
{
	// Fields

};


instance 1ab5e115500
class MovieSceneTransformTrack public : MovieScenePropertyTrack
{
	// Fields

};


instance 1ab5e1152c0
class MovieSceneVectorSection public : MovieSceneSection
{
	// Fields
	MovieSceneFloatChannel Curves; // 0xe0
	int ChannelsUsed; // 0x360

};


instance 1ab5e115080
class MovieSceneVectorTrack public : MovieScenePropertyTrack
{
	// Fields
	int NumChannelsUsed; // 0x88

};


instance 1ab5e114e40
class MovieSceneVisibilityTrack public : MovieSceneBoolTrack
{
	// Fields

};


instance 1ab71516040
struct MovieScene3DAttachSectionTemplate 
{
	// Fields
	MovieSceneObjectBindingID AttachBindingID; // 0x20
	FName AttachSocketName; // 0x38
	FName AttachComponentName; // 0x40
	EAttachmentRule AttachmentLocationRule; // 0x48
	EAttachmentRule AttachmentRotationRule; // 0x49
	EAttachmentRule AttachmentScaleRule; // 0x4a
	EDetachmentRule DetachmentLocationRule; // 0x4b
	EDetachmentRule DetachmentRotationRule; // 0x4c
	EDetachmentRule DetachmentScaleRule; // 0x4d

};


instance 1ab71515f80
struct MovieScene3DPathSectionTemplate 
{
	// Fields
	MovieSceneObjectBindingID PathBindingID; // 0x20
	MovieSceneFloatChannel TimingCurve; // 0x38
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8
	MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9
	bool bFollow; // 0xdc
	bool bReverse; // 0xdc
	bool bForceUpright; // 0xdc

};


instance 1ab71515ec0
struct MovieSceneTransformMask 
{
	// Fields
	int Mask; // 0x0

};


instance 1ab71515e00
struct MovieScene3DTransformKeyStruct 
{
	// Fields
	Vector Location; // 0x8
	Rotator Rotation; // 0x14
	Vector Scale; // 0x20
	FrameNumber Time; // 0x2c

};


instance 1ab71515d40
struct MovieScene3DScaleKeyStruct 
{
	// Fields
	Vector Scale; // 0x8
	FrameNumber Time; // 0x14

};


instance 1ab71515c80
struct MovieScene3DRotationKeyStruct 
{
	// Fields
	Rotator Rotation; // 0x8
	FrameNumber Time; // 0x14

};


instance 1ab71515bc0
struct MovieScene3DLocationKeyStruct 
{
	// Fields
	Vector Location; // 0x8
	FrameNumber Time; // 0x14

};


instance 1ab71515b00
struct MovieSceneComponentTransformSectionTemplate 
{
	// Fields
	MovieScene3DTransformTemplateData TemplateData; // 0x20

};


instance 1ab71515a40
struct MovieScene3DTransformTemplateData 
{
	// Fields
	MovieSceneFloatChannel TranslationCurve; // 0x0
	MovieSceneFloatChannel RotationCurve; // 0x1e0
	MovieSceneFloatChannel ScaleCurve; // 0x3c0
	MovieSceneFloatChannel ManualWeight; // 0x5a0
	EMovieSceneBlendType BlendType; // 0x640
	MovieSceneTransformMask Mask; // 0x644
	bool bUseQuaternionInterpolation; // 0x648

};


instance 1ab71515980
struct MovieSceneActorReferenceData 
{
	// Fields
	TArray KeyTimes; // 0x8
	TArray KeyValues; // 0x30

};


instance 1ab715158c0
struct MovieSceneActorReferenceKey 
{
	// Fields
	MovieSceneObjectBindingID Object; // 0x0

};


instance 1ab71515800
struct MovieSceneActorReferenceSectionTemplate 
{
	// Fields
	MovieScenePropertySectionData PropertyData; // 0x20
	MovieSceneActorReferenceData ActorReferenceData; // 0x48

};


instance 1ab71515740
struct MovieSceneAudioSectionTemplate 
{
	// Fields
	MovieSceneAudioSection* AudioSection; // 0x20

};


instance 1ab71515680
struct MovieSceneCameraAnimSectionData 
{
	// Fields
	CameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18

};


instance 1ab715155c0
struct MovieSceneAdditiveCameraAnimationTemplate 
{
	// Fields

};


instance 1ab71515500
struct MovieSceneCameraShakeSectionTemplate 
{
	// Fields
	MovieSceneCameraShakeSectionData SourceData; // 0x20
	FrameNumber SectionStartTime; // 0x40

};


instance 1ab71515440
struct MovieSceneCameraShakeSectionData 
{
	// Fields
	CameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	BYTE PlaySpace; // 0xc
	Rotator UserDefinedPlaySpace; // 0x10

};


instance 1ab71515380
struct MovieSceneCameraAnimSectionTemplate 
{
	// Fields
	MovieSceneCameraAnimSectionData SourceData; // 0x20
	FrameNumber SectionStartTime; // 0x40

};


instance 1ab715152c0
struct MovieSceneCameraCutSectionTemplate 
{
	// Fields
	MovieSceneObjectBindingID CameraBindingID; // 0x20
	Transform CutTransform; // 0x40
	bool bHasCutTransform; // 0x70

};


instance 1ab71515200
struct MovieSceneColorKeyStruct 
{
	// Fields
	LinearColor Color; // 0x8
	FrameNumber Time; // 0x18

};


instance 1ab71515140
struct MovieSceneColorSectionTemplate 
{
	// Fields
	MovieSceneFloatChannel Curves; // 0x48
	EMovieSceneBlendType BlendType; // 0x2c8

};


instance 1ab71515080
struct MovieSceneEvent 
{
	// Fields
	MovieSceneEventPtrs Ptrs; // 0x0

};


instance 1ab71514fc0
struct MovieSceneEventPtrs 
{
	// Fields
	Function* Function; // 0x0
	Property* BoundObjectProperty; // 0x8

};


instance 1ab71514f00
struct MovieSceneEventPayloadVariable 
{
	// Fields
	FString Value; // 0x0

};


instance 1ab71514e40
struct MovieSceneEventChannel 
{
	// Fields
	TArray KeyTimes; // 0x8
	TArray KeyValues; // 0x18

};


instance 1ab71514d80
struct MovieSceneEventSectionData 
{
	// Fields
	TArray Times; // 0x8
	TArray KeyValues; // 0x18

};


instance 1ab71514cc0
struct EventPayload 
{
	// Fields
	FName EventName; // 0x0
	MovieSceneEventParameters Parameters; // 0x8

};


instance 1ab71514c00
struct MovieSceneEventParameters 
{
	// Fields

};


instance 1ab71514b40
struct MovieSceneEventTemplateBase 
{
	// Fields
	TArray EventReceivers; // 0x20
	bool bFireEventsWhenForwards; // 0x30
	bool bFireEventsWhenBackwards; // 0x30

};


instance 1ab71514a80
struct MovieSceneEventRepeaterTemplate 
{
	// Fields
	MovieSceneEventPtrs EventToTrigger; // 0x38

};


instance 1ab71517b40
struct MovieSceneEventTriggerTemplate 
{
	// Fields
	TArray EventTimes; // 0x38
	TArray Events; // 0x48

};


instance 1ab71517a80
struct MovieSceneEventSectionTemplate 
{
	// Fields
	MovieSceneEventSectionData EventData; // 0x38

};


instance 1ab715179c0
struct MovieSceneFadeSectionTemplate 
{
	// Fields
	MovieSceneFloatChannel FadeCurve; // 0x20
	LinearColor FadeColor; // 0xc0
	bool bFadeAudio; // 0xd0

};


instance 1ab71517900
struct MovieSceneLevelVisibilitySectionTemplate 
{
	// Fields
	ELevelVisibility Visibility; // 0x20
	TArray LevelNames; // 0x28

};


instance 1ab71517840
struct MovieSceneParameterSectionTemplate 
{
	// Fields
	TArray Scalars; // 0x20
	TArray Vectors; // 0x30
	TArray Colors; // 0x40
	TArray Transforms; // 0x50

};


instance 1ab71517780
struct TransformParameterNameAndCurves 
{
	// Fields
	FName ParameterName; // 0x0
	MovieSceneFloatChannel Translation; // 0x8
	MovieSceneFloatChannel Rotation; // 0x1e8
	MovieSceneFloatChannel Scale; // 0x3c8

};


instance 1ab715176c0
struct ColorParameterNameAndCurves 
{
	// Fields
	FName ParameterName; // 0x0
	MovieSceneFloatChannel RedCurve; // 0x8
	MovieSceneFloatChannel GreenCurve; // 0xa8
	MovieSceneFloatChannel BlueCurve; // 0x148
	MovieSceneFloatChannel AlphaCurve; // 0x1e8

};


instance 1ab71517600
struct VectorParameterNameAndCurves 
{
	// Fields
	FName ParameterName; // 0x0
	MovieSceneFloatChannel XCurve; // 0x8
	MovieSceneFloatChannel YCurve; // 0xa8
	MovieSceneFloatChannel ZCurve; // 0x148

};


instance 1ab71517540
struct ScalarParameterNameAndCurve 
{
	// Fields
	FName ParameterName; // 0x0
	MovieSceneFloatChannel ParameterCurve; // 0x8

};


instance 1ab71517480
struct MovieSceneMaterialParameterCollectionTemplate 
{
	// Fields
	MaterialParameterCollection* MPC; // 0x60

};


instance 1ab715173c0
struct MovieSceneObjectPropertyTemplate 
{
	// Fields
	MovieSceneObjectPathChannel ObjectChannel; // 0x48

};


instance 1ab71517300
struct MovieSceneComponentMaterialSectionTemplate 
{
	// Fields
	int MaterialIndex; // 0x60

};


instance 1ab71517240
struct MovieSceneParticleParameterSectionTemplate 
{
	// Fields

};


instance 1ab71517180
struct MovieSceneParticleChannel 
{
	// Fields

};


instance 1ab715170c0
struct MovieSceneParticleSectionTemplate 
{
	// Fields
	MovieSceneParticleChannel ParticleKeys; // 0x20

};


instance 1ab71517000
struct MovieScenePrimitiveMaterialTemplate 
{
	// Fields
	int MaterialIndex; // 0x20
	MovieSceneObjectPathChannel MaterialChannel; // 0x28

};


instance 1ab71516f40
struct MovieSceneEulerTransformPropertySectionTemplate 
{
	// Fields
	MovieScene3DTransformTemplateData TemplateData; // 0x48

};


instance 1ab71516e80
struct MovieSceneTransformPropertySectionTemplate 
{
	// Fields
	MovieScene3DTransformTemplateData TemplateData; // 0x48

};


instance 1ab71516dc0
struct MovieSceneVectorPropertySectionTemplate 
{
	// Fields
	MovieSceneFloatChannel ComponentCurves; // 0x48
	int NumChannelsUsed; // 0x2c8
	EMovieSceneBlendType BlendType; // 0x2cc

};


instance 1ab71516d00
struct MovieSceneStringPropertySectionTemplate 
{
	// Fields
	MovieSceneStringChannel StringCurve; // 0x48

};


instance 1ab71516c40
struct MovieSceneStringChannel 
{
	// Fields
	TArray Times; // 0x8
	TArray Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38

};


instance 1ab71516b80
struct MovieSceneIntegerPropertySectionTemplate 
{
	// Fields
	MovieSceneIntegerChannel IntegerCurve; // 0x48
	EMovieSceneBlendType BlendType; // 0xd8

};


instance 1ab71516ac0
struct MovieSceneEnumPropertySectionTemplate 
{
	// Fields
	MovieSceneByteChannel EnumCurve; // 0x48

};


instance 1ab71516a00
struct MovieSceneBytePropertySectionTemplate 
{
	// Fields
	MovieSceneByteChannel ByteCurve; // 0x48

};


instance 1ab71516940
struct MovieSceneFloatPropertySectionTemplate 
{
	// Fields
	MovieSceneFloatChannel FloatFunction; // 0x48
	EMovieSceneBlendType BlendType; // 0xe8

};


instance 1ab71516880
struct MovieSceneBoolPropertySectionTemplate 
{
	// Fields
	MovieSceneBoolChannel BoolCurve; // 0x48

};


instance 1ab715167c0
struct MovieSceneSkeletalAnimationParams 
{
	// Fields
	AnimSequenceBase* Animation; // 0x0
	FrameNumber FirstLoopStartFrameOffset; // 0x8
	FrameNumber StartFrameOffset; // 0xc
	FrameNumber EndFrameOffset; // 0x10
	float PlayRate; // 0x14
	bool bReverse; // 0x18
	FName SlotName; // 0x1c
	MovieSceneFloatChannel Weight; // 0x28
	bool bSkipAnimNotifiers; // 0xc8
	bool bForceCustomMode; // 0xc9
	float StartOffset; // 0xcc
	float EndOffset; // 0xd0

};


instance 1ab71516700
struct MovieSceneSkeletalAnimationSectionTemplate 
{
	// Fields
	MovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20

};


instance 1ab71516640
struct MovieSceneSkeletalAnimationSectionTemplateParameters 
{
	// Fields
	FrameNumber SectionStartTime; // 0xd8
	FrameNumber SectionEndTime; // 0xdc

};


instance 1ab71516580
struct MovieSceneSlomoSectionTemplate 
{
	// Fields
	MovieSceneFloatChannel SlomoCurve; // 0x20

};


instance 1ab715164c0
struct MovieSceneSpawnSectionTemplate 
{
	// Fields
	MovieSceneBoolChannel Curve; // 0x20

};


instance 1ab71516400
struct MovieSceneVectorKeyStructBase 
{
	// Fields
	FrameNumber Time; // 0x8

};


instance 1ab71516340
struct MovieSceneVector4KeyStruct 
{
	// Fields
	Vector4 Vector; // 0x30

};


instance 1ab71519400
struct MovieSceneVectorKeyStruct 
{
	// Fields
	Vector Vector; // 0x28

};


instance 1ab71519340
struct MovieSceneVector2DKeyStruct 
{
	// Fields
	Vector2D Vector; // 0x28

};


instance 1ab71519280
struct MovieSceneVisibilitySectionTemplate 
{
	// Fields

};


