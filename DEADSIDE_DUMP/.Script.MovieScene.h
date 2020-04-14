instance 1ab5e05ebc0
class MovieSceneSignedObject public : Object
{
	// Fields
	Guid Signature; // 0x28

};


instance 1ab5e05ee00
class MovieSceneSection public : MovieSceneSignedObject
{
	// Fields
	MovieSceneSectionEvalOptions EvalOptions; // 0x50
	MovieSceneEasingSettings Easing; // 0x58
	MovieSceneFrameRange SectionRange; // 0x90
	FrameNumber PreRollFrames; // 0xa0
	FrameNumber PostRollFrames; // 0xa4
	int RowIndex; // 0xa8
	int OverlapPriority; // 0xac
	bool bIsActive; // 0xb0
	bool bIsLocked; // 0xb0
	float StartTime; // 0xb4
	float EndTime; // 0xb8
	float PrerollTime; // 0xbc
	float PostrollTime; // 0xc0
	bool bIsInfinite; // 0xc4
	bool bSupportsInfiniteRange; // 0xc8
	OptionalMovieSceneBlendType BlendType; // 0xc9

	// Functions
	SetRowIndex 0x412e7 hash b19a7261 params:( None NewRowIndex; );
	SetPreRollFrames 0x412de hash cd3340ef params:( None InPreRollFrames; );
	SetPostRollFrames 0x412d4 hash d90f882e params:( None InPostRollFrames; );
	SetOverlapPriority 0x412ca hash b1fa920c params:( None NewPriority; );
	SetIsLocked 0x412c3 hash 358ecf1f params:( None bInIsLocked; );
	SetIsActive 0x412bc hash 1b163649 params:( None bInIsActive; );
	SetCompletionMode 0x412b2 hash 524c0a50 params:( UnderlyingType InCompletionMode; );
	SetBlendType 0x412ab hash c45562d8 params:( UnderlyingType InBlendType; );
	IsLocked 0x412a6 hash 283b16b3 params:( None ReturnValue; );
	IsActive 0x3dfb3 hash dc27ddd params:( None ReturnValue; );
	GetRowIndex 0x4129f hash 7141f355 params:( None ReturnValue; );
	GetPreRollFrames 0x41296 hash 3ab57a63 params:( None ReturnValue; );
	GetPostRollFrames 0x4128c hash f6d8f022 params:( None ReturnValue; );
	GetOverlapPriority 0x41282 hash 88f0f880 params:( None ReturnValue; );
	GetCompletionMode 0x41278 hash 70157244 params:( UnderlyingType ReturnValue; );
	GetBlendType 0x41271 hash 78ed024c params:( OptionalMovieSceneBlendType ReturnValue; );
};


instance 1ab5e05e500
class MovieSceneTrack public : MovieSceneSignedObject
{
	// Fields
	MovieSceneTrackEvalOptions EvalOptions; // 0x50
	bool bIsEvalDisabled; // 0x55

};


instance 1ab5e05e740
class MovieSceneNameableTrack public : MovieSceneTrack
{
	// Fields

};


instance 1ab5e094780
class MovieSceneSequence public : MovieSceneSignedObject
{
	// Fields
	MovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x50
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x340
	bool bParentContextsAreSignificant; // 0x341
	bool bPlayableDirectly; // 0x342

	// Functions
	FindBindingsByTag 0x4133c hash afdd554b params:( None InBindingName;ReturnValue ReturnValue; );
	FindBindingByTag 0x41333 hash 1fb24d8 params:( None InBindingName;MovieSceneObjectBindingID ReturnValue; );
};


instance 1ab5e0940c0
class MovieSceneSequencePlayer public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnPlay; // 0x408 property 0x1ab71826600 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnPlayReverse; // 0x418 property 0x1ab71826680 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnStop; // 0x428 property 0x1ab71826700 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnPause; // 0x438 property 0x1ab71826780 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFinished; // 0x448 property 0x1ab71826800 hash 0xb7a5ed1a
	BYTE Status; // 0x458
	bool bReversePlayback; // 0x45c
	MovieSceneSequence* Sequence; // 0x460
	FrameNumber StartTime; // 0x468
	int DurationFrames; // 0x46c
	int CurrentNumLoops; // 0x470
	MovieSceneSequencePlaybackSettings PlaybackSettings; // 0x488
	MovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4a0
	MovieSceneSequenceReplProperties NetSyncProps; // 0x810
	InterfaceProperty PlaybackClient; // 0x820 property 0x1ab71826b80 hash 0x92a49b

	// Functions
	StopAtCurrentTime 0x41473 hash e5f59e32 params:(  );
	Stop 0x3e2ef hash 7c8c8f2b params:(  );
	SetTimeRange 0x4146c hash 81e4868d params:( None StartTime;None Duration; );
	SetPlayRate 0x3fbb7 hash c22bc733 params:( None PlayRate; );
	SetPlaybackRange 0x41463 hash bdc225c5 params:( None NewStartTime;None NewEndTime; );
	SetPlaybackPosition 0x3fb9d hash 7c3bb7ad params:( None NewPlaybackPosition; );
	SetFrameRate 0x4145c hash e9a4a2a8 params:( FrameRate FrameRate; );
	SetFrameRange 0x41454 hash 1e38dec9 params:( None StartFrame;None Duration; );
	SetDisableCameraCuts 0x41449 hash 2f0719cd params:( None bInDisableCameraCuts; );
	ScrubToSeconds 0x41441 hash d11ca596 params:( None TimeInSeconds; );
	ScrubToMarkedFrame 0x41437 hash edb404e6 params:( None InLabel;None ReturnValue; );
	ScrubToFrame 0x41430 hash 8f675612 params:( FrameTime NewPosition; );
	Scrub 0x4142c hash e152fe4 params:(  );
	RPC_OnStopEvent 0x18eb3 hash 7b800eae params:( FrameTime StoppedTime; );
	RPC_ExplicitServerUpdateEvent 0x18ea3 hash f9f6fde7 params:( UnderlyingType Method;FrameTime RelevantTime; );
	PlayToSeconds 0x41424 hash e3d24dcd params:( None TimeInSeconds; );
	PlayToMarkedFrame 0x4141a hash 36e0f09d params:( None InLabel;None ReturnValue; );
	PlayToFrame 0x41413 hash 65578489 params:( FrameTime NewPosition; );
	PlayReverse 0x4140c hash b76d3517 params:(  );
	PlayLooping 0x41405 hash 6a9493 params:( None NumLoops; );
	Play 0x3fb72 hash 7c8ac63b params:(  );
	Pause 0xb98f hash dddda23 params:(  );
	JumpToSeconds 0x413fd hash dc1fc213 params:( None TimeInSeconds; );
	JumpToPosition 0x413f5 hash c2023bd9 params:( None NewPlaybackPosition; );
	JumpToMarkedFrame 0x413eb hash c5bb17e3 params:( None InLabel;None ReturnValue; );
	JumpToFrame 0x413e4 hash 910f2f4f params:( FrameTime NewPosition; );
	IsReversed 0x413de hash d70d0c41 params:( None ReturnValue; );
	IsPlaying 0x3e2d2 hash 5c6af535 params:( None ReturnValue; );
	IsPaused 0x413d9 hash 309c6303 params:( None ReturnValue; );
	GoToEndAndStop 0x413d1 hash c9e317ce params:(  );
	GetStartTime 0x413ca hash 6dcc1d82 params:( QualifiedFrameTime ReturnValue; );
	GetPlayRate 0x3fb53 hash 81d34827 params:( None ReturnValue; );
	GetPlaybackStart 0x413c1 hash 2b60ad1a params:( None ReturnValue; );
	GetPlaybackPosition 0x3fb39 hash 31feeca1 params:( None ReturnValue; );
	GetPlaybackEnd 0x413b9 hash 8af854a3 params:( None ReturnValue; );
	GetObjectBindings 0x413af hash 6883f26a params:( Object InObject;ReturnValue ReturnValue; );
	GetLength 0x413a9 hash 10a63807 params:( None ReturnValue; );
	GetFrameRate 0x413a2 hash 9e3c421c params:( FrameRate ReturnValue; );
	GetFrameDuration 0x41399 hash 1bc9c0f6 params:( None ReturnValue; );
	GetEndTime 0x41393 hash 1ed46f4b params:( QualifiedFrameTime ReturnValue; );
	GetDuration 0x41182 hash 49919d4b params:( QualifiedFrameTime ReturnValue; );
	GetDisableCameraCuts 0x41388 hash 9d30ed41 params:( None ReturnValue; );
	GetCurrentTime 0x41380 hash 36824cb7 params:( QualifiedFrameTime ReturnValue; );
	GetBoundObjects 0x41377 hash 88d9ebe7 params:( MovieSceneObjectBindingID ObjectBinding;ReturnValue ReturnValue; );
	ChangePlaybackDirection 0x4136a hash e0d49ad3 params:(  );
};


instance 1ab5e0faa80
class MovieScenePlaybackClient public : Interface
{
	// Fields

};


instance 1ab5e0fa840
class MovieScene public : MovieSceneSignedObject
{
	// Fields
	TArray Spawnables; // 0x50
	TArray Possessables; // 0x60
	TArray ObjectBindings; // 0x70
	MapProperty BindingGroups; // 0x80 property 0x1ab71165420 hash 0xadd0fb88
	TArray MasterTracks; // 0xd0
	MovieSceneTrack* CameraCutTrack; // 0xe0
	MovieSceneFrameRange SelectionRange; // 0xe8
	MovieSceneFrameRange PlaybackRange; // 0xf8
	FrameRate TickResolution; // 0x108
	FrameRate DisplayRate; // 0x110
	EMovieSceneEvaluationType EvaluationType; // 0x118
	EUpdateClockSource ClockSource; // 0x119
	TArray MarkedFrames; // 0x120

};


instance 1ab5e0fa600
class MovieSceneBindingOverrides public : Object
{
	// Fields
	TArray BindingData; // 0x28

};


instance 1ab5e0fa3c0
class MovieSceneBindingOwnerInterface public : Interface
{
	// Fields

};


instance 1ab5e0fa180
class MovieSceneBuiltInEasingFunction public : Object
{
	// Fields
	EMovieSceneBuiltInEasing Type; // 0x30

};


instance 1ab5e0f9f40
class MovieSceneEasingExternalCurve public : Object
{
	// Fields
	CurveFloat* Curve; // 0x30

};


instance 1ab5e0f9d00
class MovieSceneEasingFunction public : Interface
{
	// Fields

	// Functions
	OnEvaluate 0x184ec hash 95a82839 params:( None Interp;None ReturnValue; );
};


instance 1ab5e0f9ac0
class MovieSceneFolder public : Object
{
	// Fields
	FName FolderName; // 0x28
	TArray ChildFolders; // 0x30
	TArray ChildMasterTracks; // 0x40
	TArray ChildObjectBindingStrings; // 0x50

};


instance 1ab5e0f9880
class MovieSceneKeyProxy public : Interface
{
	// Fields

};


instance 1ab5e0f9640
class MovieSceneSubSection public : MovieSceneSection
{
	// Fields
	MovieSceneSectionParameters Parameters; // 0xe0
	float StartOffset; // 0xf8
	float TimeScale; // 0xfc
	float PrerollTime; // 0x100
	MovieSceneSequence* SubSequence; // 0x108
	LazyObjectProperty ActorToRecord; // 0x110 property 0x1ab71b77080 hash 0xbcf63421
	FString TargetSequenceName; // 0x130
	DirectoryPath TargetPathToRecordTo; // 0x140

	// Functions
	SetSequence 0x462a8 hash 912e64ea params:( MovieSceneSequence Sequence; );
	GetSequence 0x462a1 hash 50d5e5de params:( MovieSceneSequence ReturnValue; );
};


instance 1ab5e0ffdc0
class MovieSceneSubTrack public : MovieSceneNameableTrack
{
	// Fields
	TArray Sections; // 0x58

};


instance 1ab5e0ffb80
class TestMovieSceneTrack public : MovieSceneTrack
{
	// Fields
	bool bHighPassFilter; // 0x58
	TArray SectionArray; // 0x60

};


instance 1ab5e0ff940
class TestMovieSceneSection public : MovieSceneSection
{
	// Fields

};


instance 1ab5e0ff700
class TestMovieSceneSequence public : MovieSceneSequence
{
	// Fields
	MovieScene* MovieScene; // 0x348

};


instance 1ab71450100
struct MovieSceneEvalTemplateBase 
{
	// Fields

};


instance 1ab71450040
struct MovieSceneEvalTemplate 
{
	// Fields
	EMovieSceneCompletionMode CompletionMode; // 0x10
	WeakObjectProperty SourceSectionPtr; // 0x14 property 0x1ab7142df80 hash 0x24388009

};


instance 1ab7145dc00
struct MovieSceneSectionGroup 
{
	// Fields
	TArray Sections; // 0x0

};


instance 1ab7145db40
struct MovieSceneObjectBindingIDs 
{
	// Fields
	TArray IDs; // 0x0

};


instance 1ab7145da80
struct MovieSceneObjectBindingID 
{
	// Fields
	int SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	Guid Guid; // 0x8

};


instance 1ab7145d9c0
struct MovieSceneTrackLabels 
{
	// Fields
	TArray Strings; // 0x0

};


instance 1ab7145d900
struct MovieSceneEditorData 
{
	// Fields
	MapProperty ExpansionStates; // 0x0 property 0x1ab71164a20 hash 0xadd0fb88
	TArray PinnedNodes; // 0x50
	double ViewStart; // 0x60
	double ViewEnd; // 0x68
	double WorkStart; // 0x70
	double WorkEnd; // 0x78
	SetProperty MarkedFrames; // 0x80 property 0x1ab71164b60 hash 0xb0194396
	FloatRange WorkingRange; // 0xd0
	FloatRange ViewRange; // 0xe0

};


instance 1ab7145d840
struct MovieSceneExpansionState 
{
	// Fields
	bool bExpanded; // 0x0

};


instance 1ab7145d780
struct MovieSceneMarkedFrame 
{
	// Fields
	FrameNumber FrameNumber; // 0x0
	FString Label; // 0x8

};


instance 1ab7145d6c0
struct MovieSceneTimecodeSource 
{
	// Fields
	Timecode Timecode; // 0x0
	FrameNumber DeltaFrame; // 0x14

};


instance 1ab7145d600
struct MovieSceneBinding 
{
	// Fields
	Guid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray Tracks; // 0x20

};


instance 1ab7145d540
struct MovieSceneBindingOverrideData 
{
	// Fields
	MovieSceneObjectBindingID ObjectBindingId; // 0x0
	WeakObjectProperty Object; // 0x18 property 0x1ab714e2a80 hash 0x24388009
	bool bOverridesDefault; // 0x20

};


instance 1ab7145d480
struct OptionalMovieSceneBlendType 
{
	// Fields
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1

};


instance 1ab7145d3c0
struct MovieSceneChannel 
{
	// Fields

};


instance 1ab7145d300
struct MovieSceneBoolChannel 
{
	// Fields
	TArray Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray Values; // 0x20

};


instance 1ab7145d240
struct MovieSceneByteChannel 
{
	// Fields
	TArray Times; // 0x8
	BYTE DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray Values; // 0x20
	Enum* Enum; // 0x30

};


instance 1ab7145d0c0
struct MovieSceneKeyHandleMap 
{
	// Fields

};


instance 1ab7145d000
struct MovieSceneEvalTemplatePtr 
{
	// Fields

};


instance 1ab7145cf40
struct MovieSceneEmptyStruct 
{
	// Fields

};


instance 1ab7145ce80
struct MovieSceneEvaluationField 
{
	// Fields
	TArray Ranges; // 0x0
	TArray Groups; // 0x10
	TArray MetaData; // 0x20

};


instance 1ab7145cdc0
struct MovieSceneEvaluationMetaData 
{
	// Fields
	TArray ActiveSequences; // 0x0
	TArray ActiveEntities; // 0x10
	MapProperty SubTemplateSerialNumbers; // 0x20 property 0x1ab71164980 hash 0xadd0fb88

};


instance 1ab7145cd00
struct MovieSceneSequenceID 
{
	// Fields
	int Value; // 0x0

};


instance 1ab7145cc40
struct MovieSceneOrderedEvaluationKey 
{
	// Fields
	MovieSceneEvaluationKey Key; // 0x0
	USHORT SetupIndex; // 0xc
	USHORT TearDownIndex; // 0xe

};


instance 1ab7145cb80
struct MovieSceneEvaluationKey 
{
	// Fields
	MovieSceneSequenceID SequenceID; // 0x0
	MovieSceneTrackIdentifier TrackIdentifier; // 0x4
	int SectionIndex; // 0x8

};


instance 1ab7145cac0
struct MovieSceneTrackIdentifier 
{
	// Fields
	int Value; // 0x0

};


instance 1ab7145ca00
struct MovieSceneEvaluationGroup 
{
	// Fields
	TArray LUTIndices; // 0x0
	TArray SegmentPtrLUT; // 0x10

};


instance 1ab7145c940
struct MovieSceneEvaluationFieldTrackPtr 
{
	// Fields
	MovieSceneSequenceID SequenceID; // 0x0
	MovieSceneTrackIdentifier TrackIdentifier; // 0x4

};


instance 1ab7145c880
struct MovieSceneEvaluationFieldSegmentPtr 
{
	// Fields
	MovieSceneSegmentIdentifier SegmentID; // 0x8

};


instance 1ab7145c7c0
struct MovieSceneSegmentIdentifier 
{
	// Fields
	int IdentifierIndex; // 0x0

};


instance 1ab7145c700
struct MovieSceneEvaluationGroupLUTIndex 
{
	// Fields
	int LUTOffset; // 0x0
	int NumInitPtrs; // 0x4
	int NumEvalPtrs; // 0x8

};


instance 1ab7145c640
struct MovieSceneFrameRange 
{
	// Fields

};


instance 1ab7145f700
struct MovieSceneEvaluationOperand 
{
	// Fields
	Guid ObjectBindingId; // 0x0
	MovieSceneSequenceID SequenceID; // 0x10

};


instance 1ab7145f640
struct MovieSceneEvaluationTemplate 
{
	// Fields
	MapProperty Tracks; // 0x0 property 0x1ab71164660 hash 0xadd0fb88
	MovieSceneEvaluationField EvaluationField; // 0xa0
	MovieSceneSequenceHierarchy Hierarchy; // 0xd0
	Guid SequenceSignature; // 0x170
	MovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0x180
	MovieSceneTemplateGenerationLedger TemplateLedger; // 0x188
	MovieSceneTrackFieldData TrackFieldData; // 0x230
	MovieSceneSubSectionFieldData SubSectionFieldData; // 0x290

};


instance 1ab7145f580
struct MovieSceneSubSectionFieldData 
{
	// Fields

};


instance 1ab7145f4c0
struct MovieSceneTrackFieldData 
{
	// Fields

};


instance 1ab7145f400
struct MovieSceneTemplateGenerationLedger 
{
	// Fields
	MovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	MapProperty TrackSignatureToTrackIdentifier; // 0x8 property 0x1ab71164840 hash 0xadd0fb88
	MapProperty SubSectionRanges; // 0x58 property 0x1ab711648e0 hash 0xadd0fb88

};


instance 1ab7145f340
struct MovieSceneEvaluationTemplateSerialNumber 
{
	// Fields
	int Value; // 0x0

};


instance 1ab7145f280
struct MovieSceneSequenceHierarchy 
{
	// Fields
	MapProperty SubSequences; // 0x0 property 0x1ab71164700 hash 0xadd0fb88
	MapProperty Hierarchy; // 0x50 property 0x1ab711647a0 hash 0xadd0fb88

};


instance 1ab7145f1c0
struct MovieSceneSequenceHierarchyNode 
{
	// Fields
	MovieSceneSequenceID ParentID; // 0x0
	TArray Children; // 0x8

};


instance 1ab7145f100
struct MovieSceneSubSequenceData 
{
	// Fields
	SoftObjectPath Sequence; // 0x0
	MovieSceneSequenceTransform RootToSequenceTransform; // 0x18
	FrameRate TickResolution; // 0x24
	MovieSceneSequenceID DeterministicSequenceID; // 0x2c
	MovieSceneFrameRange PlayRange; // 0x30
	MovieSceneFrameRange PreRollRange; // 0x40
	MovieSceneFrameRange PostRollRange; // 0x50
	int HierarchicalBias; // 0x60
	MovieSceneSequenceInstanceDataPtr InstanceData; // 0x68
	Guid SubSectionSignature; // 0x88
	MovieSceneSequenceTransform OuterToInnerTransform; // 0x98

};


instance 1ab7145f040
struct MovieSceneSequenceTransform 
{
	// Fields
	float TimeScale; // 0x0
	FrameTime Offset; // 0x4

};


instance 1ab7145ef80
struct MovieSceneSequenceInstanceDataPtr 
{
	// Fields

};


instance 1ab7145eec0
struct MovieSceneEvaluationTrack 
{
	// Fields
	Guid ObjectBindingId; // 0x0
	USHORT EvaluationPriority; // 0x10
	EEvaluationMethod EvaluationMethod; // 0x12
	MovieSceneEvaluationTrackSegments Segments; // 0x18
	MovieSceneTrack* SourceTrack; // 0x38
	SectionEvaluationDataTree EvaluationTree; // 0x40
	TArray ChildTemplates; // 0xa0
	MovieSceneTrackImplementationPtr TrackTemplate; // 0xb0
	FName EvaluationGroup; // 0xe8
	bool bEvaluateInPreroll; // 0xf0
	bool bEvaluateInPostroll; // 0xf0
	bool bTearDownPriority; // 0xf0

};


instance 1ab7145ee00
struct MovieSceneTrackImplementationPtr 
{
	// Fields

};


instance 1ab7145ed40
struct SectionEvaluationDataTree 
{
	// Fields

};


instance 1ab7145ec80
struct MovieSceneEvaluationTrackSegments 
{
	// Fields
	TArray SegmentIdentifierToIndex; // 0x0
	TArray SortedSegments; // 0x10

};


instance 1ab7145ebc0
struct MovieSceneSegment 
{
	// Fields

};


instance 1ab7145eb00
struct MovieSceneSubSectionData 
{
	// Fields
	WeakObjectProperty Section; // 0x0 property 0x1ab714e6080 hash 0x24388009
	Guid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18

};


instance 1ab7145ea40
struct MovieSceneRootEvaluationTemplateInstance 
{
	// Fields
	MapProperty DirectorInstances; // 0x18 property 0x1ab711645c0 hash 0xadd0fb88

};


instance 1ab7145e980
struct MovieSceneFloatChannel 
{
	// Fields
	BYTE PreInfinityExtrap; // 0x8
	BYTE PostInfinityExtrap; // 0x9
	TArray Times; // 0x10
	TArray Values; // 0x20
	float DefaultValue; // 0x30
	bool bHasDefaultValue; // 0x34
	MovieSceneKeyHandleMap KeyHandles; // 0x38
	FrameRate TickResolution; // 0x98

};


instance 1ab7145e8c0
struct MovieSceneFloatValue 
{
	// Fields
	float Value; // 0x0
	BYTE InterpMode; // 0x4
	BYTE TangentMode; // 0x5
	MovieSceneTangentData Tangent; // 0x8

};


instance 1ab7145e800
struct MovieSceneTangentData 
{
	// Fields
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	BYTE TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10

};


instance 1ab7145e740
struct MovieSceneIntegerChannel 
{
	// Fields
	TArray Times; // 0x8
	int DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray Values; // 0x20

};


instance 1ab7145e680
struct MovieSceneKeyStruct 
{
	// Fields

};


instance 1ab7145e5c0
struct MovieSceneKeyTimeStruct 
{
	// Fields
	FrameNumber Time; // 0x8

};


instance 1ab7145e500
struct GeneratedMovieSceneKeyStruct 
{
	// Fields

};


instance 1ab7145e440
struct MovieSceneObjectPathChannel 
{
	// Fields
	Object* PropertyClass; // 0x8
	TArray Times; // 0x10
	TArray Values; // 0x20
	MovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30

};


instance 1ab7145e380
struct MovieSceneObjectPathChannelKeyValue 
{
	// Fields
	Object* SoftPtr; // 0x0
	Object* HardPtr; // 0x28

};


instance 1ab7145e2c0
struct MovieScenePossessable 
{
	// Fields
	TArray Tags; // 0x0
	Guid Guid; // 0x10
	FString Name; // 0x20
	Object* PossessedObjectClass; // 0x30
	Guid ParentGuid; // 0x38

};


instance 1ab7145e200
struct MovieScenePropertySectionTemplate 
{
	// Fields
	MovieScenePropertySectionData PropertyData; // 0x20

};


instance 1ab7145e140
struct MovieScenePropertySectionData 
{
	// Fields
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
	FName FunctionName; // 0x18
	FName NotifyFunctionName; // 0x20

};


instance 1ab7145e080
struct MovieSceneEasingSettings 
{
	// Fields
	int AutoEaseInDuration; // 0x0
	int AutoEaseOutDuration; // 0x4
	InterfaceProperty EaseIn; // 0x8 property 0x1ab714e6e80 hash 0x92a49b
	bool bManualEaseIn; // 0x18
	int ManualEaseInDuration; // 0x1c
	InterfaceProperty EaseOut; // 0x20 property 0x1ab714e6f80 hash 0x92a49b
	bool bManualEaseOut; // 0x30
	int ManualEaseOutDuration; // 0x34

};


instance 1ab7145dfc0
struct MovieSceneSectionEvalOptions 
{
	// Fields
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1

};


instance 1ab7145df00
struct MovieSceneSectionParameters 
{
	// Fields
	FrameNumber StartFrameOffset; // 0x0
	float TimeScale; // 0x4
	int HierarchicalBias; // 0x8
	float StartOffset; // 0xc
	float PrerollTime; // 0x10
	float PostrollTime; // 0x14

};


instance 1ab7145ff40
struct SectionEvaluationData 
{
	// Fields
	int ImplIndex; // 0x0
	FrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8

};


instance 1ab7145fe80
struct MovieSceneSequenceInstanceData 
{
	// Fields

};


instance 1ab7145fdc0
struct MovieSceneSequencePlaybackSettings 
{
	// Fields
	bool bAutoPlay; // 0x0
	MovieSceneSequenceLoopCount LoopCount; // 0x4
	float PlayRate; // 0x8
	float StartTime; // 0xc
	bool bRandomStartTime; // 0x10
	bool bRestoreState; // 0x10
	bool bDisableMovementInput; // 0x10
	bool bDisableLookAtInput; // 0x10
	bool bHidePlayer; // 0x10
	bool bHideHud; // 0x10
	bool bDisableCameraCuts; // 0x10
	bool bPauseAtEnd; // 0x10

};


instance 1ab7145fd00
struct MovieSceneSequenceLoopCount 
{
	// Fields
	int Value; // 0x0

};


instance 1ab7145fc40
struct MovieSceneSequenceReplProperties 
{
	// Fields
	FrameTime LastKnownPosition; // 0x0
	BYTE LastKnownStatus; // 0x8
	int LastKnownNumLoops; // 0xc

};


instance 1ab7145fb80
struct MovieSceneSpawnable 
{
	// Fields
	Transform SpawnTransform; // 0x0
	TArray Tags; // 0x30
	bool bContinuouslyRespawn; // 0x40
	Guid Guid; // 0x44
	FString Name; // 0x58
	Object* ObjectTemplate; // 0x68
	TArray ChildPossessables; // 0x70
	ESpawnOwnership Ownership; // 0x80
	FName LevelName; // 0x84

};


instance 1ab7145fac0
struct TestMovieSceneEvalTemplate 
{
	// Fields

};


instance 1ab7145fa00
struct MovieSceneTrackDisplayOptions 
{
	// Fields
	bool bShowVerticalFrames; // 0x0

};


instance 1ab7145f940
struct MovieSceneTrackEvalOptions 
{
	// Fields
	bool bCanEvaluateNearestSection; // 0x0
	bool bEvalNearestSection; // 0x0
	bool bEvaluateInPreroll; // 0x0
	bool bEvaluateInPostroll; // 0x0
	bool bEvaluateNearestSection; // 0x0

};


instance 1ab7145f880
struct MovieSceneTrackImplementation 
{
	// Fields

};


