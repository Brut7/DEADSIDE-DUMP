instance 1ab5e12f4c0
class DefaultLevelSequenceInstanceData public : Object
{
	// Fields
	Actor* TransformOriginActor; // 0x30
	Transform TransformOrigin; // 0x40

};


instance 1ab5e12f280
class LevelSequenceMetaData public : Interface
{
	// Fields

};


instance 1ab5e12f040
class LevelSequence public : MovieSceneSequence
{
	// Fields
	MovieScene* MovieScene; // 0x348
	LevelSequenceObjectReferenceMap ObjectReferences; // 0x350
	LevelSequenceBindingReferences BindingReferences; // 0x3a0
	MapProperty PossessedObjects; // 0x440 property 0x1ab71167b80 hash 0xadd0fb88
	Object* DirectorClass; // 0x490

	// Functions
	RemoveMetaDataByClass 0x4851d hash 24e344a5 params:( Class InClass; );
	FindOrAddMetaDataByClass 0x48510 hash 8cda7282 params:( Class InClass;Object ReturnValue; );
	FindMetaDataByClass 0x48505 hash 4e8c5738 params:( Class InClass;Object ReturnValue; );
	CopyMetaData 0x484fe hash 53175b61 params:( Object InMetaData;Object ReturnValue; );
};


instance 1ab5e12ee00
class LevelSequenceBurnInInitSettings public : Object
{
	// Fields

};


instance 1ab5e12ebc0
class LevelSequenceBurnInOptions public : Object
{
	// Fields
	bool bUseBurnIn; // 0x28
	SoftClassPath BurnInClass; // 0x30
	LevelSequenceBurnInInitSettings* Settings; // 0x48

	// Functions
	SetBurnIn 0x48548 hash 704bbf9f params:( SoftClassPath InBurnInClass; );
};


instance 1ab5e12e980
class LevelSequenceActor public : Actor
{
	// Fields
	MovieSceneSequencePlaybackSettings PlaybackSettings; // 0x228
	LevelSequencePlayer* SequencePlayer; // 0x240
	SoftObjectPath LevelSequence; // 0x248
	TArray AdditionalEventReceivers; // 0x260
	LevelSequenceCameraSettings CameraSettings; // 0x270
	LevelSequenceBurnInOptions* BurnInOptions; // 0x278
	MovieSceneBindingOverrides* BindingOverrides; // 0x280
	bool bAutoPlay; // 0x288
	bool bOverrideInstanceData; // 0x288
	bool bReplicatePlayback; // 0x288
	Object* DefaultInstanceData; // 0x290
	LevelSequenceBurnIn* BurnInInstance; // 0x298
	bool bShowBurnin; // 0x2a0
	DelegateFunction OnLevelSequenceLoaded__DelegateSignature; // 0x0 property 0x1ab7141ace0 hash 0x8ad2d5e6

	// Functions
	ShowBurnin 0x485d6 hash b3007234 params:(  );
	SetSequence 0x462a8 hash 912e64ea params:( LevelSequence InSequence; );
	SetReplicatePlayback 0x485cb hash cf168d11 params:( None ReplicatePlayback; );
	SetEventReceivers 0x485c1 hash 1fd8ecdb params:( AdditionalReceivers AdditionalReceivers; );
	SetBindingByTag 0x485b8 hash 5f579f83 params:( None BindingTag;Actors Actors;None bAllowBindingsFromAsset; );
	SetBinding 0x485b2 hash 5d7876ac params:( MovieSceneObjectBindingID Binding;Actors Actors;None bAllowBindingsFromAsset; );
	ResetBindings 0x485aa hash f6246496 params:(  );
	ResetBinding 0x485a3 hash 4d46ebc3 params:( MovieSceneObjectBindingID Binding; );
	RemoveBindingByTag 0x48599 hash af0a4165 params:( None Tag;Actor Actor; );
	RemoveBinding 0x48591 hash 6f43e34e params:( MovieSceneObjectBindingID Binding;Actor Actor; );
	LoadSequence 0x4858a hash c4d998de params:( LevelSequence ReturnValue; );
	HideBurnin 0x48584 hash 6a9c3b8d params:(  );
	GetSequencePlayer 0x4857a hash 38649e0b params:( LevelSequencePlayer ReturnValue; );
	GetSequence 0x462a1 hash 50d5e5de params:( LevelSequence ReturnValue; );
	FindNamedBindings 0x48570 hash e4f8559 params:( None Tag;ReturnValue ReturnValue; );
	FindNamedBinding 0x48567 hash c25f8026 params:( None Tag;MovieSceneObjectBindingID ReturnValue; );
	AddBindingByTag 0x4855e hash b3211640 params:( None BindingTag;Actor Actor;None bAllowBindingsFromAsset; );
	AddBinding 0x48558 hash dc208349 params:( MovieSceneObjectBindingID Binding;Actor Actor;None bAllowBindingsFromAsset; );
};


instance 1ab5e12e740
class LevelSequenceBurnIn public : UserWidget
{
	// Fields
	LevelSequencePlayerSnapshot FrameInformation; // 0x230
	LevelSequenceActor* LevelSequenceActor; // 0x2e8

	// Functions
	SetSettings 0x1f837 hash 981df862 params:( Object InSettings; );
	GetSettingsClass 0x1f82e hash 8ae0dac params:( Class ReturnValue; );
};


instance 1ab5e12e500
class LevelSequenceDirector public : Object
{
	// Fields
	LevelSequencePlayer* Player; // 0x28

	// Functions
	OnCreated 0x1f879 hash 9f91b75a params:(  );
};


instance 1ab5e12e2c0
class LegacyLevelSequenceDirectorBlueprint public : Blueprint
{
	// Fields

};


instance 1ab5e134780
class LevelSequencePlayer public : MovieSceneSequencePlayer
{
	// Fields
	MulticastInlineDelegateProperty OnCameraCut; // 0x870 property 0x1ab71c09c80 hash 0xb7a5ed1a

	// Functions
	GetActiveCameraComponent 0x4862d hash 7af2777d params:( CameraComponent ReturnValue; );
	CreateLevelSequencePlayer 0x4861f hash b4fab6d7 params:( Object WorldContextObject;LevelSequence LevelSequence;MovieSceneSequencePlaybackSettings Settings;LevelSequenceActor OutActor;LevelSequencePlayer ReturnValue; );
};


instance 1ab7151b5c0
struct LevelSequenceCameraSettings 
{
	// Fields
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	BYTE AspectRatioAxisConstraint; // 0x1

};


instance 1ab7151b500
struct BoundActorProxy 
{
	// Fields

};


instance 1ab7151b440
struct LevelSequenceBindingReferences 
{
	// Fields
	MapProperty BindingIdToReferences; // 0x0 property 0x1ab71164200 hash 0xadd0fb88
	SetProperty AnimSequenceInstances; // 0x50 property 0x1ab711642a0 hash 0xb0194396

};


instance 1ab7151b380
struct LevelSequenceBindingReferenceArray 
{
	// Fields
	TArray References; // 0x0

};


instance 1ab7151b2c0
struct LevelSequenceBindingReference 
{
	// Fields
	FString PackageName; // 0x0
	SoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28

};


instance 1ab7151b200
struct LevelSequenceObjectReferenceMap 
{
	// Fields

};


instance 1ab7151b140
struct LevelSequenceLegacyObjectReference 
{
	// Fields

};


instance 1ab7151b080
struct LevelSequenceObject 
{
	// Fields
	LazyObjectProperty ObjectOrOwner; // 0x0 property 0x1ab7156d680 hash 0xbcf63421
	FString ComponentName; // 0x20
	WeakObjectProperty CachedComponent; // 0x30 property 0x1ab7156b600 hash 0x24388009

};


instance 1ab7151afc0
struct LevelSequencePlayerSnapshot 
{
	// Fields
	FString MasterName; // 0x0
	QualifiedFrameTime MasterTime; // 0x10
	QualifiedFrameTime SourceTime; // 0x20
	FString CurrentShotName; // 0x30
	QualifiedFrameTime CurrentShotLocalTime; // 0x40
	QualifiedFrameTime CurrentShotSourceTime; // 0x50
	FString SourceTimecode; // 0x60
	CameraComponent* CameraComponent; // 0x70
	LevelSequenceSnapshotSettings Settings; // 0x98
	LevelSequence* ActiveShot; // 0xa8
	MovieSceneSequenceID ShotID; // 0xb0

};


instance 1ab7151af00
struct LevelSequenceSnapshotSettings 
{
	// Fields
	BYTE ZeroPadAmount; // 0x0
	FrameRate FrameRate; // 0x4

};


