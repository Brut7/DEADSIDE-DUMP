instance 1ab5e0949c0
class ActorSequence public : MovieSceneSequence
{
	// Fields
	MovieScene* MovieScene; // 0x348
	ActorSequenceObjectReferenceMap ObjectReferences; // 0x350

};


instance 1ab5e094540
class ActorSequenceComponent public : ActorComponent
{
	// Fields
	MovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0
	ActorSequence* Sequence; // 0xc8
	ActorSequencePlayer* SequencePlayer; // 0xd0

};


instance 1ab5e094300
class ActorSequencePlayer public : MovieSceneSequencePlayer
{
	// Fields

};


instance 1ab71452ec0
struct ActorSequenceObjectReferenceMap 
{
	// Fields
	TArray BindingIds; // 0x0
	TArray References; // 0x10

};


instance 1ab71452e00
struct ActorSequenceObjectReferences 
{
	// Fields
	TArray Array; // 0x0

};


instance 1ab71452d40
struct ActorSequenceObjectReference 
{
	// Fields
	EActorSequenceObjectReferenceType Type; // 0x0
	Guid ActorId; // 0x4
	FString PathToComponent; // 0x18

};


