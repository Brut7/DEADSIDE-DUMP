instance 1ab5e1e64c0
class GameplayTask public : Object
{
	// Fields
	FName InstanceName; // 0x30
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
	GameplayTask* ChildTask; // 0x60
	DelegateFunction GenericGameplayTaskDelegate__DelegateSignature; // 0x0 property 0x1ab71387780 hash 0x8ad2d5e6

	// Functions
	ReadyForActivation 0x50e1e hash 19880b93 params:(  );
	EndTask 0x50e19 hash cb0ac0af params:(  );
};


instance 1ab5e1e6280
class GameplayTask_ClaimResource public : GameplayTask
{
	// Fields

	// Functions
	ClaimResources 0x50e3e hash 27ba1626 params:( GameplayTaskOwnerInterface InTaskOwner;ResourceClasses ResourceClasses;None Priority;None TaskInstanceName;GameplayTask_ClaimResource ReturnValue; );
	ClaimResource 0x50e36 hash c324ab53 params:( GameplayTaskOwnerInterface InTaskOwner;Class ResourceClass;None Priority;None TaskInstanceName;GameplayTask_ClaimResource ReturnValue; );
};


instance 1ab5e1e6040
class GameplayTask_SpawnActor public : GameplayTask
{
	// Fields
	MulticastInlineDelegateProperty Success; // 0x68 property 0x1ab72099f80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty DidNotSpawn; // 0x78 property 0x1ab7209a000 hash 0xb7a5ed1a
	Actor* ClassToSpawn; // 0xa0

	// Functions
	SpawnActor 0x50e5d hash ce383807 params:( GameplayTaskOwnerInterface TaskOwner;Vector SpawnLocation;Rotator SpawnRotation;Class Class;None bSpawnOnlyOnAuthority;GameplayTask_SpawnActor ReturnValue; );
	FinishSpawningActor 0x49fff hash 495d1326 params:( Object WorldContextObject;Actor SpawnedActor; );
	BeginSpawningActor 0x50e53 hash 93ff342a params:( Object WorldContextObject;Actor SpawnedActor;None ReturnValue; );
};


instance 1ab5e1e5e00
class GameplayTask_TimeLimitedExecution public : GameplayTask
{
	// Fields
	MulticastInlineDelegateProperty OnFinished; // 0x68 property 0x1ab713b8700 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnTimeExpired; // 0x78 property 0x1ab713b8780 hash 0xb7a5ed1a

};


instance 1ab5e1e5bc0
class GameplayTask_WaitDelay public : GameplayTask
{
	// Fields
	MulticastInlineDelegateProperty OnFinish; // 0x68 property 0x1ab713b8500 hash 0xb7a5ed1a
	DelegateFunction TaskDelayDelegate__DelegateSignature; // 0x0 property 0x1ab7138ace0 hash 0x8ad2d5e6

	// Functions
	TaskWaitDelay 0x50e81 hash 5eee0bdc params:( GameplayTaskOwnerInterface TaskOwner;None Time;None Priority;GameplayTask_WaitDelay ReturnValue; );
};


instance 1ab5e1e5980
class GameplayTaskOwnerInterface public : Interface
{
	// Fields

};


instance 1ab5e1e5740
class GameplayTaskResource public : Object
{
	// Fields
	int ManualResourceID; // 0x28
	char AutoResourceID; // 0x2c
	bool bManuallySetID; // 0x30

};


instance 1ab5e1e5500
class GameplayTasksComponent public : ActorComponent
{
	// Fields
	bool bIsNetDirty; // 0xbc
	TArray SimulatedTasks; // 0xc0
	TArray TaskPriorityQueue; // 0xd0
	TArray TickingTasks; // 0xf0
	TArray KnownTasks; // 0x100
	MulticastInlineDelegateProperty OnClaimedResourcesChange; // 0x110 property 0x1ab72099a00 hash 0xb7a5ed1a

	// Functions
	OnRep_SimulatedTasks 0x50eb8 hash 87ecd856 params:(  );
	K2_RunGameplayTask 0x50eae hash 5c1487f9 params:( GameplayTaskOwnerInterface TaskOwner;GameplayTask Task;None Priority;AdditionalRequiredResources AdditionalRequiredResources;AdditionalClaimedResources AdditionalClaimedResources;UnderlyingType ReturnValue; );
};


instance 1ab70e9d3c0
struct GameplayResourceSet 
{
	// Fields

};


