instance 1ab5e051600
class AnimSharingStateInstance public : AnimInstance
{
	// Fields
	AnimSequence* AnimationToPlay; // 0x268
	float PermutationTimeOffset; // 0x270
	float PlayRate; // 0x274
	bool bStateBool; // 0x278
	AnimSharingInstance* Instance; // 0x280

	// Functions
	GetInstancedActors 0x40b5b hash f128874a params:( Actors Actors; );
};


instance 1ab5e050d00
class AnimSharingTransitionInstance public : AnimInstance
{
	// Fields
	WeakObjectProperty FromComponent; // 0x268 property 0x1ab7180c000 hash 0x24388009
	WeakObjectProperty ToComponent; // 0x270 property 0x1ab7180c080 hash 0x24388009
	float BlendTime; // 0x278
	bool bBlendBool; // 0x27c

};


instance 1ab5e050ac0
class AnimSharingAdditiveInstance public : AnimInstance
{
	// Fields
	WeakObjectProperty BaseComponent; // 0x268 property 0x1ab7180be80 hash 0x24388009
	WeakObjectProperty AdditiveAnimation; // 0x270 property 0x1ab7180bf00 hash 0x24388009
	float Alpha; // 0x278
	bool bStateBool; // 0x27c

};


instance 1ab5e050880
class AnimSharingInstance public : Object
{
	// Fields
	TArray RegisteredActors; // 0x28
	AnimationSharingStateProcessor* StateProcessor; // 0xa8
	TArray UsedAnimationSequences; // 0xe8
	Enum* StateEnum; // 0x108
	Actor* SharingActor; // 0x110

};


instance 1ab5e050640
class AnimationSharingManager public : Object
{
	// Fields
	TArray Skeletons; // 0x28
	TArray PerSkeletonData; // 0x38

	// Functions
	RegisterActorWithSkeletonBP 0x40bc7 hash 4919e676 params:( Actor InActor;Skeleton SharingSkeleton; );
	GetAnimationSharingManager 0x40bb9 hash 1e8ff74c params:( Object WorldContextObject;AnimationSharingManager ReturnValue; );
	CreateAnimationSharingManager 0x40ba9 hash 39ecd00 params:( Object WorldContextObject;AnimationSharingSetup Setup;None ReturnValue; );
	AnimationSharingEnabled 0x40b9c hash fb2e371c params:( None ReturnValue; );
};


instance 1ab5e050400
class AnimationSharingSetup public : Object
{
	// Fields
	TArray SkeletonSetups; // 0x28
	AnimationSharingScalability ScalabilitySettings; // 0x38

};


instance 1ab5e0501c0
class AnimationSharingStateProcessor public : Object
{
	// Fields
	Enum* AnimationStateEnum; // 0x28

	// Functions
	ProcessActorState 0x1ea6 hash 4871889e params:( None OutState;Actor InActor;None CurrentState;None OnDemandState;None bShouldProcess; );
	GetAnimationStateEnum 0x1e9a hash bdca215b params:( Enum ReturnValue; );
};


instance 1ab71451840
struct TickAnimationSharingFunction 
{
	// Fields

};


instance 1ab71451780
struct AnimationSharingScalability 
{
	// Fields
	PerPlatformBool UseBlendTransitions; // 0x0
	PerPlatformFloat BlendSignificanceValue; // 0x4
	PerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	PerPlatformFloat TickSignificanceValue; // 0xc

};


instance 1ab71451480
struct PerSkeletonAnimationSharingSetup 
{
	// Fields
	Skeleton* Skeleton; // 0x0
	SkeletalMesh* SkeletalMesh; // 0x8
	AnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	AnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	AnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray AnimationStates; // 0x28

};


instance 1ab714513c0
struct AnimationStateEntry 
{
	// Fields
	BYTE State; // 0x0
	TArray AnimationSetups; // 0x8
	bool bOnDemand; // 0x18
	bool bAdditive; // 0x19
	float BlendTime; // 0x1c
	bool bReturnToPreviousState; // 0x20
	bool bSetNextState; // 0x21
	BYTE NextState; // 0x22
	PerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24
	float WiggleTimePercentage; // 0x28
	bool bRequiresCurves; // 0x2c

};


instance 1ab71451300
struct AnimationSetup 
{
	// Fields
	AnimSequence* AnimSequence; // 0x0
	AnimSharingStateInstance* AnimBlueprint; // 0x8
	PerPlatformInt NumRandomizedInstances; // 0x10
	PerPlatformBool Enabled; // 0x14

};


