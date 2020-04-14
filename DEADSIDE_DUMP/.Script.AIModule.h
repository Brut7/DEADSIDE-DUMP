instance 1ab5e0a37c0
class BTNode public : Object
{
	// Fields
	FString NodeName; // 0x30
	BehaviorTree* TreeAsset; // 0x40
	BTCompositeNode* ParentNode; // 0x48

};


instance 1ab5e0a3a00
class BTAuxiliaryNode public : BTNode
{
	// Fields

};


instance 1ab5e0a3c40
class BTDecorator public : BTAuxiliaryNode
{
	// Fields
	bool bInverseCondition; // 0x60
	BYTE FlowAbortMode; // 0x64

};


instance 1ab5e0a25c0
class BTService public : BTAuxiliaryNode
{
	// Fields
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	bool bCallTickOnSearchStart; // 0x68
	bool bRestartTimerOnEachActivation; // 0x68

};


instance 1ab5e0a1cc0
class BTTaskNode public : BTNode
{
	// Fields
	TArray Services; // 0x58
	bool bIgnoreRestartSelf; // 0x68

};


instance 1ab5e0a6700
class AIController public : Controller
{
	// Fields
	bool bStopAILogicOnUnposses; // 0x2c8
	bool bLOSflag; // 0x2c8
	bool bSkipExtraLOSChecks; // 0x2c8
	bool bAllowStrafe; // 0x2c8
	bool bWantsPlayerState; // 0x2c8
	bool bSetControlRotationFromPawnOrientation; // 0x2c8
	PathFollowingComponent* PathFollowingComponent; // 0x2d0
	BrainComponent* BrainComponent; // 0x2d8
	AIPerceptionComponent* PerceptionComponent; // 0x2e0
	PawnActionsComponent* ActionsComp; // 0x2e8
	BlackboardComponent* Blackboard; // 0x2f0
	GameplayTasksComponent* CachedGameplayTasksComponent; // 0x2f8
	NavigationQueryFilter* DefaultNavigationFilterClass; // 0x300
	MulticastInlineDelegateProperty ReceiveMoveCompleted; // 0x308 property 0x1ab719d1d80 hash 0xb7a5ed1a

	// Functions
	UseBlackboard 0x42edc hash dc241777 params:( BlackboardData BlackboardAsset;BlackboardComponent BlackboardComponent;None ReturnValue; );
	UnclaimTaskResource 0x42ed1 hash 5a1002a9 params:( Class ResourceClass; );
	SetPathFollowingComponent 0x42ec3 hash f8ea89a2 params:( PathFollowingComponent NewPFComponent; );
	SetMoveBlockDetection 0x42eb7 hash e4a21812 params:( None bEnable; );
	RunBehaviorTree 0x42eae hash 9d20b6fa params:( BehaviorTree BTAsset;None ReturnValue; );
	OnUsingBlackBoard 0x383ba hash 922ac0ed params:( BlackboardComponent BlackboardComp;BlackboardData BlackboardAsset; );
	OnGameplayTaskResourcesClaimed 0x42e9e hash 1e8f5f8f params:( GameplayResourceSet NewlyClaimed;GameplayResourceSet FreshlyReleased; );
	MoveToLocation 0x42e96 hash be308cb8 params:( Vector Dest;None AcceptanceRadius;None bStopOnOverlap;None bUsePathfinding;None bProjectDestinationToNavigation;None bCanStrafe;Class FilterClass;None bAllowPartialPath;EPathFollowingRequestResult ReturnValue; );
	MoveToActor 0x42e8f hash fa0f5898 params:( Actor Goal;None AcceptanceRadius;None bStopOnOverlap;None bUsePathfinding;None bCanStrafe;Class FilterClass;None bAllowPartialPath;EPathFollowingRequestResult ReturnValue; );
	K2_SetFocus 0x42e88 hash daad5cd params:( Actor NewFocus; );
	K2_SetFocalPoint 0x42e7f hash d2eef61c params:( Vector FP; );
	K2_ClearFocus 0x42e77 hash 5deda5a8 params:(  );
	HasPartialPath 0x42e6f hash 65bb569b params:( None ReturnValue; );
	GetPathFollowingComponent 0x42e61 hash e7c6a596 params:( PathFollowingComponent ReturnValue; );
	GetMoveStatus 0x42e59 hash f6982340 params:( EPathFollowingStatus ReturnValue; );
	GetImmediateMoveDestination 0x42e4a hash ef290a4d params:( Vector ReturnValue; );
	GetFocusActor 0x42e42 hash 681a751e params:( Actor ReturnValue; );
	GetFocalPointOnActor 0x42e37 hash 1d0cab8a params:( Actor Actor;Vector ReturnValue; );
	GetFocalPoint 0x42e2f hash 554f6ed4 params:( Vector ReturnValue; );
	GetAIPerceptionComponent 0x42e22 hash 8030ef3b params:( AIPerceptionComponent ReturnValue; );
	ClaimTaskResource 0x42e18 hash 3c76a786 params:( Class ResourceClass; );
};


instance 1ab5e0a5e00
class AISenseConfig public : Object
{
	// Fields
	Color DebugColor; // 0x28
	float MaxAge; // 0x2c
	bool bStartsEnabled; // 0x30

};


instance 1ab5e0a6040
class AISenseConfig_Sight public : AISenseConfig
{
	// Fields
	AISense_Sight* Implementation; // 0x48
	float SightRadius; // 0x50
	float LoseSightRadius; // 0x54
	float PeripheralVisionAngleDegrees; // 0x58
	AISenseAffiliationFilter DetectionByAffiliation; // 0x5c
	float AutoSuccessRangeFromLastSeenLocation; // 0x60

};


instance 1ab5e0a5980
class AISenseConfig_Hearing public : AISenseConfig
{
	// Fields
	AISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	bool bUseLoSHearing; // 0x58
	AISenseAffiliationFilter DetectionByAffiliation; // 0x5c

};


instance 1ab5e0a52c0
class AISense public : Object
{
	// Fields
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType NotifyType; // 0x2c
	bool bWantsNewPawnNotification; // 0x30
	bool bAutoRegisterAllPawnsAsSources; // 0x30
	AIPerceptionSystem* PerceptionSystemInstance; // 0x38

};


instance 1ab5e0a5500
class AISense_Sight public : AISense
{
	// Fields
	int MaxTracesPerTick; // 0x130
	int MinQueriesPerTimeSliceCheck; // 0x134
	double MaxTimeSlicePerTick; // 0x138
	float HighImportanceQueryDistanceThreshold; // 0x140
	float MaxQueryImportance; // 0x148
	float SightLimitQueryImportance; // 0x14c

};


instance 1ab5e1e52c0
class AIAsyncTaskBlueprintProxy public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab7209b480 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFail; // 0x38 property 0x1ab7209b500 hash 0xb7a5ed1a

	// Functions
	OnMoveCompleted 0x50ed1 hash 5c9133f6 params:( AIRequestID RequestID;EPathFollowingResult MovementResult; );
};


instance 1ab5e1e5080
class AIBlueprintHelperLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	UnlockAIResourcesWithAnimation 0x50f4b hash 58e96db2 params:( AnimInstance AnimInstance;None bUnlockMovement;None UnlockAILogic; );
	SpawnAIFromClass 0x50f42 hash f9fd3942 params:( Object WorldContextObject;Class PawnClass;BehaviorTree BehaviorTree;Vector Location;Rotator Rotation;None bNoCollisionFail;Pawn ReturnValue; );
	SimpleMoveToLocation 0x50cfa hash 4239b722 params:( Controller Controller;Vector Goal; );
	SimpleMoveToActor 0x50cf0 hash 61f08b42 params:( Controller Controller;Actor Goal; );
	SendAIMessage 0x50f3a hash 686342de params:( Pawn Target;None Message;Object MessageSource;None bSuccess; );
	LockAIResourcesWithAnimation 0x50f2b hash 59792e6f params:( AnimInstance AnimInstance;None bLockMovement;None LockAILogic; );
	IsValidAIRotation 0x50f21 hash 2a265d0b params:( Rotator Rotation;None ReturnValue; );
	IsValidAILocation 0x50f17 hash 78f3ad14 params:( Vector Location;None ReturnValue; );
	IsValidAIDirection 0x50f0d hash f4cb4abc params:( Vector DirectionVector;None ReturnValue; );
	GetCurrentPath 0x50f05 hash 367ffa15 params:( Controller Controller;NavigationPath ReturnValue; );
	GetBlackboard 0x50efd hash a81115ea params:( Actor Target;BlackboardComponent ReturnValue; );
	GetAIController 0x50ef4 hash b6fdd7b3 params:( Actor ControlledActor;AIController ReturnValue; );
	CreateMoveToProxyObject 0x50ee7 hash 497ca4ac params:( Object WorldContextObject;Pawn Pawn;Vector Destination;Actor TargetActor;None AcceptanceRadius;None bStopOnOverlap;AIAsyncTaskBlueprintProxy ReturnValue; );
};


instance 1ab5e1e4e40
class AIDataProvider public : Object
{
	// Fields

};


instance 1ab5e1e4c00
class AIDataProvider_QueryParams public : AIDataProvider
{
	// Fields
	FName ParamName; // 0x28
	float FloatValue; // 0x30
	int IntValue; // 0x34
	bool BoolValue; // 0x38

};


instance 1ab5e1ede40
class AIDataProvider_Random public : AIDataProvider_QueryParams
{
	// Fields
	float Min; // 0x40
	float Max; // 0x44
	bool bInteger; // 0x48

};


instance 1ab5e1edc00
class AIHotSpotManager public : Object
{
	// Fields

};


instance 1ab5e1ed9c0
class AIPerceptionComponent public : ActorComponent
{
	// Fields
	TArray SensesConfig; // 0xb0
	AISense* DominantSense; // 0xc0
	AIController* AIOwner; // 0xd8
	MulticastInlineDelegateProperty OnPerceptionUpdated; // 0x160 property 0x1ab7209b780 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnTargetPerceptionUpdated; // 0x170 property 0x1ab7209b800 hash 0xb7a5ed1a

	// Functions
	SetSenseEnabled 0x50fe8 hash 6ab66c7a params:( Class SenseClass;None bEnable; );
	RequestStimuliListenerUpdate 0x50fd9 hash 6b67d85e params:(  );
	OnOwnerEndPlay 0x50fd1 hash 377cc61a params:( Actor Actor;EEndPlayReason EndPlayReason; );
	GetPerceivedHostileActors 0x50fc3 hash c5b9fe0 params:( OutActors OutActors; );
	GetPerceivedActors 0x50fb9 hash 69cca668 params:( Class SenseToUse;OutActors OutActors; );
	GetKnownPerceivedActors 0x50fac hash c609f155 params:( Class SenseToUse;OutActors OutActors; );
	GetCurrentlyPerceivedActors 0x50f9d hash d2bc9b30 params:( Class SenseToUse;OutActors OutActors; );
	GetActorsPerception 0x50f92 hash 164dc94a params:( Actor Actor;ActorPerceptionBlueprintInfo Info;None ReturnValue; );
};


instance 1ab5e1ed780
class AIPerceptionListenerInterface public : Interface
{
	// Fields

};


instance 1ab5e1ed540
class AIPerceptionStimuliSourceComponent public : ActorComponent
{
	// Fields
	bool bAutoRegisterAsSource; // 0xb0
	TArray RegisterAsSourceForSenses; // 0xb8

	// Functions
	UnregisterFromSense 0x5103b hash 231d22bf params:( Class SenseClass; );
	UnregisterFromPerceptionSystem 0x5102b hash c447071f params:(  );
	RegisterWithPerceptionSystem 0x5101c hash e3f084a4 params:(  );
	RegisterForSense 0x51013 hash 6440888f params:( Class SenseClass; );
};


instance 1ab5e1ed0c0
class AISubsystem public : Object
{
	// Fields
	AISystem* AISystem; // 0x30

};


instance 1ab5e1ed300
class AIPerceptionSystem public : AISubsystem
{
	// Fields
	TArray Senses; // 0x88
	float PerceptionAgingRate; // 0x98

	// Functions
	ReportPerceptionEvent 0x5108d hash 8e454a1c params:( Object WorldContextObject;AISenseEvent PerceptionEvent; );
	ReportEvent 0x51086 hash fd6c5963 params:( AISenseEvent PerceptionEvent; );
	RegisterPerceptionStimuliSource 0x51075 hash ffe7c53b params:( Object WorldContextObject;Class Sense;Actor Target;None ReturnValue; );
	OnPerceptionStimuliSourceEndPlay 0x51064 hash abafc7a0 params:( Actor Actor;EEndPlayReason EndPlayReason; );
	GetSenseClassForStimulus 0x51057 hash 2109cfc6 params:( Object WorldContextObject;AIStimulus Stimulus;Class ReturnValue; );
};


instance 1ab5e1ece80
class AIResourceInterface public : Interface
{
	// Fields

};


instance 1ab5e1ecc40
class AIResource_Movement public : GameplayTaskResource
{
	// Fields

};


instance 1ab5e1eca00
class AIResource_Logic public : GameplayTaskResource
{
	// Fields

};


instance 1ab5e1ec7c0
class AISense_Blueprint public : AISense
{
	// Fields
	UserDefinedStruct* ListenerDataType; // 0x80
	TArray ListenerContainer; // 0x88
	TArray UnprocessedEvents; // 0x98

	// Functions
	OnUpdate 0x387f2 hash 45f3ce25 params:( EventsToProcess EventsToProcess;None ReturnValue; );
	OnListenerUpdated 0x387e8 hash c3fa22cf params:( Actor ActorListener;AIPerceptionComponent PerceptionComponent; );
	OnListenerUnregistered 0x387dc hash e2427999 params:( Actor ActorListener;AIPerceptionComponent PerceptionComponent; );
	OnListenerRegistered 0x387d1 hash 2aac0056 params:( Actor ActorListener;AIPerceptionComponent PerceptionComponent; );
	K2_OnNewPawn 0x387ca hash 1b1532de params:( Pawn NewPawn; );
	GetAllListenerComponents 0x510cd hash 740700aa params:( ListenerComponents ListenerComponents; );
	GetAllListenerActors 0x510c2 hash 910b0e90 params:( ListenerActors ListenerActors; );
};


instance 1ab5e1ec580
class AISense_Damage public : AISense
{
	// Fields
	TArray RegisteredEvents; // 0x80

	// Functions
	ReportDamageEvent 0x510e2 hash f4a8b0c2 params:( Object WorldContextObject;Actor DamagedActor;Actor Instigator;None DamageAmount;Vector EventLocation;Vector HitLocation; );
};


instance 1ab5e1ec340
class AISense_Hearing public : AISense
{
	// Fields
	TArray NoiseEvents; // 0x80
	float SpeedOfSoundSq; // 0x90

	// Functions
	ReportNoiseEvent 0x510f5 hash cc02e001 params:( Object WorldContextObject;Vector NoiseLocation;None Loudness;Actor Instigator;None MaxRange;None Tag; );
};


instance 1ab5e1ec100
class AISense_Prediction public : AISense
{
	// Fields
	TArray RegisteredEvents; // 0x80

	// Functions
	RequestPawnPredictionEvent 0x51119 hash 7b112ab7 params:( Pawn Requestor;Actor PredictedActor;None PredictionTime; );
	RequestControllerPredictionEvent 0x51108 hash 6f14e565 params:( AIController Requestor;Actor PredictedActor;None PredictionTime; );
};


instance 1ab5e1ebec0
class AISense_Team public : AISense
{
	// Fields
	TArray RegisteredEvents; // 0x80

};


instance 1ab5e1ebc80
class AISense_Touch public : AISense
{
	// Fields
	TArray RegisteredEvents; // 0x80

};


instance 1ab5e1eba40
class AISenseBlueprintListener public : UserDefinedStruct
{
	// Fields

};


instance 1ab5e1eb800
class AISenseConfig_Blueprint public : AISenseConfig
{
	// Fields
	AISense_Blueprint* Implementation; // 0x48

};


instance 1ab5e1eb5c0
class AISenseConfig_Damage public : AISenseConfig
{
	// Fields
	AISense_Damage* Implementation; // 0x48

};


instance 1ab5e1eb380
class AISenseConfig_Prediction public : AISenseConfig
{
	// Fields

};


instance 1ab5e1eb140
class AISenseConfig_Team public : AISenseConfig
{
	// Fields

};


instance 1ab5e1eaf00
class AISenseConfig_Touch public : AISenseConfig
{
	// Fields

};


instance 1ab5e1eacc0
class AISenseEvent public : Object
{
	// Fields

};


instance 1ab5e1eaa80
class AISenseEvent_Damage public : AISenseEvent
{
	// Fields
	AIDamageEvent Event; // 0x28

};


instance 1ab5e1ea840
class AISenseEvent_Hearing public : AISenseEvent
{
	// Fields
	AINoiseEvent Event; // 0x28

};


instance 1ab5e1ea600
class AISightTargetInterface public : Interface
{
	// Fields

};


instance 1ab5e1ea3c0
class AISystem public : AISystemBase
{
	// Fields
	SoftClassPath PerceptionSystemClassName; // 0x58
	SoftClassPath HotSpotManagerClassName; // 0x70
	float AcceptanceRadius; // 0x88
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x8c
	float PathfollowingNavLinkAcceptanceRadius; // 0x90
	bool bFinishMoveOnGoalOverlap; // 0x94
	bool bAcceptPartialPaths; // 0x95
	bool bAllowStrafing; // 0x96
	bool bEnableBTAITasks; // 0x97
	bool bAllowControllersAsEQSQuerier; // 0x98
	bool bEnableDebuggerPlugin; // 0x99
	BYTE DefaultSightCollisionChannel; // 0x9a
	BehaviorTreeManager* BehaviorTreeManager; // 0xa0
	EnvQueryManager* EnvironmentQueryManager; // 0xa8
	AIPerceptionSystem* PerceptionSystem; // 0xb0
	TArray AllProxyObjects; // 0xb8
	AIHotSpotManager* HotSpotManager; // 0xc8
	NavLocalGridManager* NavLocalGrids; // 0xd0

	// Functions
	AILoggingVerbose 0x511b4 hash 5660dcec params:(  );
	AIIgnorePlayers 0x511ab hash 7caa6553 params:(  );
};


instance 1ab5e1ea180
class AITask public : GameplayTask
{
	// Fields
	AIController* OwnerController; // 0x68

};


instance 1ab5e1e9f40
class AITask_LockLogic public : AITask
{
	// Fields

};


instance 1ab5e1e9d00
class AITask_MoveTo public : AITask
{
	// Fields
	MulticastInlineDelegateProperty OnRequestFailed; // 0x70 property 0x1ab7209e900 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnMoveFinished; // 0x80 property 0x1ab7209e980 hash 0xb7a5ed1a
	AIMoveRequest MoveRequest; // 0x90

	// Functions
	AIMoveTo 0x511d2 hash 277df029 params:( AIController Controller;Vector GoalLocation;Actor GoalActor;None AcceptanceRadius;EAIOptionFlag StopOnOverlap;EAIOptionFlag AcceptPartialPath;None bUsePathfinding;None bLockAILogic;None bUseContinuosGoalTracking;EAIOptionFlag ProjectGoalOnNavigation;AITask_MoveTo ReturnValue; );
};


instance 1ab5e1e9ac0
class AITask_RunEQS public : AITask
{
	// Fields

	// Functions
	RunEQS 0x511df hash cfa8bd43 params:( AIController Controller;EnvQuery QueryTemplate;AITask_RunEQS ReturnValue; );
};


instance 1ab5e1e9880
class BehaviorTree public : Object
{
	// Fields
	BTCompositeNode* RootNode; // 0x28
	BlackboardData* BlackboardAsset; // 0x30
	TArray RootDecorators; // 0x38
	TArray RootDecoratorOps; // 0x48

};


instance 1ab5e1efdc0
class BrainComponent public : ActorComponent
{
	// Fields
	BlackboardComponent* BlackboardComp; // 0xb8
	AIController* AIOwner; // 0xc0

	// Functions
	StopLogic 0x51205 hash 2fa9aa79 params:( None Reason; );
	RestartLogic 0x511fe hash 1de19f18 params:(  );
	IsRunning 0x42c88 hash c4312c2 params:( None ReturnValue; );
	IsPaused 0x413d9 hash 309c6303 params:( None ReturnValue; );
};


instance 1ab5e1e9640
class BehaviorTreeComponent public : BrainComponent
{
	// Fields
	TArray NodeInstances; // 0x130

	// Functions
	SetDynamicSubtree 0x51223 hash 9d1e9890 params:( GameplayTag InjectTag;BehaviorTree BehaviorAsset; );
	GetTagCooldownEndTime 0x51217 hash fd5a11ec params:( GameplayTag CooldownTag;None ReturnValue; );
	AddCooldownTagDuration 0x5120b hash bcb7d195 params:( GameplayTag CooldownTag;None CooldownDuration;None bAddToExistingDuration; );
};


instance 1ab5e1efb80
class BehaviorTreeManager public : Object
{
	// Fields
	int MaxDebuggerSteps; // 0x28
	TArray LoadedTemplates; // 0x30
	TArray ActiveComponents; // 0x40

};


instance 1ab5e1ef940
class BehaviorTreeTypes public : Object
{
	// Fields

};


instance 1ab5e1ef700
class BlackboardComponent public : ActorComponent
{
	// Fields
	BrainComponent* BrainComp; // 0xb0
	BlackboardData* BlackboardAsset; // 0xb8
	TArray KeyInstances; // 0xe0

	// Functions
	SetValueAsVector 0x51317 hash 9f941395 params:( None KeyName;Vector VectorValue; );
	SetValueAsString 0x5130e hash 99ac13f9 params:( None KeyName;None StringValue; );
	SetValueAsRotator 0x51304 hash 76aa742d params:( None KeyName;Rotator VectorValue; );
	SetValueAsObject 0x512fb hash 8f0d42f9 params:( None KeyName;Object ObjectValue; );
	SetValueAsName 0x512f3 hash 33604d03 params:( None KeyName;None NameValue; );
	SetValueAsInt 0x512eb hash 301a1d4d params:( None KeyName;None IntValue; );
	SetValueAsFloat 0x512e2 hash 9edf39f8 params:( None KeyName;None FloatValue; );
	SetValueAsEnum 0x512da hash 335b95f7 params:( None KeyName;None EnumValue; );
	SetValueAsClass 0x512d1 hash 9ea8b738 params:( None KeyName;Class ClassValue; );
	SetValueAsBool 0x512c9 hash 3359f44e params:( None KeyName;None BoolValue; );
	IsVectorValueSet 0x512c0 hash 5393e3fd params:( None KeyName;None ReturnValue; );
	GetValueAsVector 0x512b7 hash d164d09 params:( None KeyName;Vector ReturnValue; );
	GetValueAsString 0x512ae hash 72e4d6d params:( None KeyName;None ReturnValue; );
	GetValueAsRotator 0x512a4 hash 9473dc21 params:( None KeyName;Rotator ReturnValue; );
	GetValueAsObject 0x5129b hash fc8f7c6d params:( None KeyName;Object ReturnValue; );
	GetValueAsName 0x51293 hash 6c5d9977 params:( None KeyName;None ReturnValue; );
	GetValueAsInt 0x5128b hash 77a5ab41 params:( None KeyName;None ReturnValue; );
	GetValueAsFloat 0x51282 hash f78614ec params:( None KeyName;None ReturnValue; );
	GetValueAsEnum 0x5127a hash 6c58e26b params:( None KeyName;None ReturnValue; );
	GetValueAsClass 0x51271 hash f74f922c params:( None KeyName;Class ReturnValue; );
	GetValueAsBool 0x51269 hash 6c5740c2 params:( None KeyName;None ReturnValue; );
	GetRotationFromEntry 0x5125e hash bf3e55bb params:( None KeyName;Rotator ResultRotation;None ReturnValue; );
	GetLocationFromEntry 0x51253 hash 7664bfe4 params:( None KeyName;Vector ResultLocation;None ReturnValue; );
	ClearValue 0x5124d hash d9f2e7e9 params:( None KeyName; );
};


instance 1ab5e1ef4c0
class BlackboardData public : DataAsset
{
	// Fields
	BlackboardData* Parent; // 0x30
	TArray Keys; // 0x38
	bool bHasSynchronizedKeys; // 0x48

};


instance 1ab5e1ef280
class BlackboardKeyType public : Object
{
	// Fields

};


instance 1ab5e1ef040
class BlackboardKeyType_Bool public : BlackboardKeyType
{
	// Fields

};


instance 1ab5e1eee00
class BlackboardKeyType_Class public : BlackboardKeyType
{
	// Fields
	Object* BaseClass; // 0x30

};


instance 1ab5e1eebc0
class BlackboardKeyType_Enum public : BlackboardKeyType
{
	// Fields
	Enum* EnumType; // 0x30
	FString EnumName; // 0x38
	bool bIsEnumNameValid; // 0x48

};


instance 1ab5e1ee980
class BlackboardKeyType_Float public : BlackboardKeyType
{
	// Fields

};


instance 1ab5e1ee740
class BlackboardKeyType_Int public : BlackboardKeyType
{
	// Fields

};


instance 1ab5e1ee500
class BlackboardKeyType_Name public : BlackboardKeyType
{
	// Fields

};


instance 1ab5e1ee2c0
class BlackboardKeyType_NativeEnum public : BlackboardKeyType
{
	// Fields
	FString EnumName; // 0x30
	Enum* EnumType; // 0x40

};


instance 1ab5e1ee080
class BlackboardKeyType_Object public : BlackboardKeyType
{
	// Fields
	Object* BaseClass; // 0x30

};


instance 1ab5e2049c0
class BlackboardKeyType_Rotator public : BlackboardKeyType
{
	// Fields

};


instance 1ab5e204780
class BlackboardKeyType_String public : BlackboardKeyType
{
	// Fields
	FString StringValue; // 0x30

};


instance 1ab5e204540
class BlackboardKeyType_Vector public : BlackboardKeyType
{
	// Fields

};


instance 1ab5e2040c0
class BTCompositeNode public : BTNode
{
	// Fields
	TArray Children; // 0x58
	TArray Services; // 0x68
	bool bApplyDecoratorScope; // 0x88

};


instance 1ab5e204300
class BTComposite_Selector public : BTCompositeNode
{
	// Fields

};


instance 1ab5e203e80
class BTComposite_Sequence public : BTCompositeNode
{
	// Fields

};


instance 1ab5e203c40
class BTComposite_SimpleParallel public : BTCompositeNode
{
	// Fields
	BYTE FinishMode; // 0x90

};


instance 1ab5e2037c0
class BTDecorator_BlackboardBase public : BTDecorator
{
	// Fields
	BlackboardKeySelector BlackboardKey; // 0x68

};


instance 1ab5e203a00
class BTDecorator_Blackboard public : BTDecorator_BlackboardBase
{
	// Fields
	int IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	BYTE OperationType; // 0xb8
	BYTE NotifyObserver; // 0xb9

};


instance 1ab5e203580
class BTDecorator_BlueprintBase public : BTDecorator
{
	// Fields
	AIController* AIOwner; // 0x68
	Actor* ActorOwner; // 0x70
	TArray ObservedKeyNames; // 0x78
	bool bShowPropertyDetails; // 0x98
	bool bCheckConditionOnlyBlackBoardChanges; // 0x98
	bool bIsObservingBB; // 0x98

	// Functions
	ReceiveTickAI 0x39634 hash 2c277e3d params:( AIController OwnerController;Pawn ControlledPawn;None DeltaSeconds; );
	ReceiveTick 0x2222c hash 2a96f4d3 params:( Actor OwnerActor;None DeltaSeconds; );
	ReceiveObserverDeactivatedAI 0x39625 hash 731d58b8 params:( AIController OwnerController;Pawn ControlledPawn; );
	ReceiveObserverDeactivated 0x39617 hash 47cdf48e params:( Actor OwnerActor; );
	ReceiveObserverActivatedAI 0x39609 hash 6592ff0f params:( AIController OwnerController;Pawn ControlledPawn; );
	ReceiveObserverActivated 0x395fc hash fb281925 params:( Actor OwnerActor; );
	ReceiveExecutionStartAI 0x395ef hash 1837d1d4 params:( AIController OwnerController;Pawn ControlledPawn; );
	ReceiveExecutionStart 0x395e3 hash 7a7f76aa params:( Actor OwnerActor; );
	ReceiveExecutionFinishAI 0x395d6 hash eec9ed07 params:( AIController OwnerController;Pawn ControlledPawn;EBTNodeResult NodeResult; );
	ReceiveExecutionFinish 0x395ca hash ab5b291d params:( Actor OwnerActor;EBTNodeResult NodeResult; );
	PerformConditionCheckAI 0x395bd hash 6f3533cf params:( AIController OwnerController;Pawn ControlledPawn;None ReturnValue; );
	PerformConditionCheck 0x395b1 hash 49361de5 params:( Actor OwnerActor;None ReturnValue; );
	IsDecoratorObserverActive 0x51423 hash 7714e448 params:( None ReturnValue; );
	IsDecoratorExecutionActive 0x51415 hash 23ff9614 params:( None ReturnValue; );
};


instance 1ab5e203340
class BTDecorator_CheckGameplayTagsOnActor public : BTDecorator
{
	// Fields
	BlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	GameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8

};


instance 1ab5e203100
class BTDecorator_CompareBBEntries public : BTDecorator
{
	// Fields
	BYTE Operator; // 0x68
	BlackboardKeySelector BlackboardKeyA; // 0x70
	BlackboardKeySelector BlackboardKeyB; // 0x98

};


instance 1ab5e202ec0
class BTDecorator_ConditionalLoop public : BTDecorator_Blackboard
{
	// Fields

};


instance 1ab5e202c80
class BTDecorator_ConeCheck public : BTDecorator
{
	// Fields
	float ConeHalfAngle; // 0x68
	BlackboardKeySelector ConeOrigin; // 0x70
	BlackboardKeySelector ConeDirection; // 0x98
	BlackboardKeySelector Observed; // 0xc0

};


instance 1ab5e202a40
class BTDecorator_Cooldown public : BTDecorator
{
	// Fields
	float CooldownTime; // 0x68

};


instance 1ab5e202800
class BTDecorator_DoesPathExist public : BTDecorator
{
	// Fields
	BlackboardKeySelector BlackboardKeyA; // 0x68
	BlackboardKeySelector BlackboardKeyB; // 0x90
	bool bUseSelf; // 0xb8
	BYTE PathQueryType; // 0xbc
	NavigationQueryFilter* FilterClass; // 0xc0

};


instance 1ab5e2025c0
class BTDecorator_ForceSuccess public : BTDecorator
{
	// Fields

};


instance 1ab5e202380
class BTDecorator_IsAtLocation public : BTDecorator_BlackboardBase
{
	// Fields
	float AcceptableRadius; // 0x90
	AIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	FAIDistanceType GeometricDistanceType; // 0xc8
	bool bUseParametrizedRadius; // 0xcc
	bool bUseNavAgentGoalLocation; // 0xcc
	bool bPathFindingBasedTest; // 0xcc

};


instance 1ab5e202140
class BTDecorator_IsBBEntryOfClass public : BTDecorator_BlackboardBase
{
	// Fields
	Object* TestClass; // 0x90

};


instance 1ab5e201f00
class BTDecorator_KeepInCone public : BTDecorator
{
	// Fields
	float ConeHalfAngle; // 0x68
	BlackboardKeySelector ConeOrigin; // 0x70
	BlackboardKeySelector Observed; // 0x98
	bool bUseSelfAsOrigin; // 0xc0
	bool bUseSelfAsObserved; // 0xc0

};


instance 1ab5e201cc0
class BTDecorator_Loop public : BTDecorator
{
	// Fields
	int NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70

};


instance 1ab5e201a80
class BTDecorator_ReachedMoveGoal public : BTDecorator
{
	// Fields

};


instance 1ab5e201840
class BTDecorator_SetTagCooldown public : BTDecorator
{
	// Fields
	GameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74

};


instance 1ab5e201600
class BTDecorator_TagCooldown public : BTDecorator
{
	// Fields
	GameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75

};


instance 1ab5e2013c0
class BTDecorator_TimeLimit public : BTDecorator
{
	// Fields
	float TimeLimit; // 0x68

};


instance 1ab5e201180
class BTFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	StopUsingExternalEvent 0x51661 hash e5bf1f6 params:( BTNode NodeOwner; );
	StartUsingExternalEvent 0x51654 hash c61a6e7e params:( BTNode NodeOwner;Actor OwningActor; );
	SetBlackboardValueAsVector 0x51646 hash c7052a3a params:( BTNode NodeOwner;BlackboardKeySelector Key;Vector Value; );
	SetBlackboardValueAsString 0x51638 hash c11d2a9e params:( BTNode NodeOwner;BlackboardKeySelector Key;None Value; );
	SetBlackboardValueAsRotator 0x51629 hash 8c3e5f72 params:( BTNode NodeOwner;BlackboardKeySelector Key;Rotator Value; );
	SetBlackboardValueAsObject 0x5161b hash b67e599e params:( BTNode NodeOwner;BlackboardKeySelector Key;Object Value; );
	SetBlackboardValueAsName 0x5160e hash b5e17668 params:( BTNode NodeOwner;BlackboardKeySelector Key;None Value; );
	SetBlackboardValueAsInt 0x51601 hash deb92e12 params:( BTNode NodeOwner;BlackboardKeySelector Key;None Value; );
	SetBlackboardValueAsFloat 0x515f3 hash 71858ffd params:( BTNode NodeOwner;BlackboardKeySelector Key;None Value; );
	SetBlackboardValueAsEnum 0x515e6 hash b5dcbf5c params:( BTNode NodeOwner;BlackboardKeySelector Key;None Value; );
	SetBlackboardValueAsClass 0x515d8 hash 714f0d3d params:( BTNode NodeOwner;BlackboardKeySelector Key;Class Value; );
	SetBlackboardValueAsBool 0x515cb hash b5db1db3 params:( BTNode NodeOwner;BlackboardKeySelector Key;None Value; );
	GetOwnersBlackboard 0x515c0 hash 59057748 params:( BTNode NodeOwner;BlackboardComponent ReturnValue; );
	GetOwnerComponent 0x515b6 hash 60d96523 params:( BTNode NodeOwner;BehaviorTreeComponent ReturnValue; );
	GetBlackboardValueAsVector 0x515a8 hash 9164c4ae params:( BTNode NodeOwner;BlackboardKeySelector Key;Vector ReturnValue; );
	GetBlackboardValueAsString 0x5159a hash 8b7cc512 params:( BTNode NodeOwner;BlackboardKeySelector Key;None ReturnValue; );
	GetBlackboardValueAsRotator 0x5158b hash a2914866 params:( BTNode NodeOwner;BlackboardKeySelector Key;Rotator ReturnValue; );
	GetBlackboardValueAsObject 0x5157d hash 80ddf412 params:( BTNode NodeOwner;BlackboardKeySelector Key;Object ReturnValue; );
	GetBlackboardValueAsName 0x51570 hash 2efe3dc params:( BTNode NodeOwner;BlackboardKeySelector Key;None ReturnValue; );
	GetBlackboardValueAsInt 0x51563 hash 7c35bd06 params:( BTNode NodeOwner;BlackboardKeySelector Key;None ReturnValue; );
	GetBlackboardValueAsFloat 0x51555 hash 6061abf1 params:( BTNode NodeOwner;BlackboardKeySelector Key;None ReturnValue; );
	GetBlackboardValueAsEnum 0x51548 hash 2eb2cd0 params:( BTNode NodeOwner;BlackboardKeySelector Key;None ReturnValue; );
	GetBlackboardValueAsClass 0x5153a hash 602b2931 params:( BTNode NodeOwner;BlackboardKeySelector Key;Class ReturnValue; );
	GetBlackboardValueAsBool 0x5152d hash 2e98b27 params:( BTNode NodeOwner;BlackboardKeySelector Key;None ReturnValue; );
	GetBlackboardValueAsActor 0x5151f hash 60025914 params:( BTNode NodeOwner;BlackboardKeySelector Key;Actor ReturnValue; );
	ClearBlackboardValueAsVector 0x51510 hash 57c293d5 params:( BTNode NodeOwner;BlackboardKeySelector Key; );
	ClearBlackboardValue 0x51505 hash 5379374e params:( BTNode NodeOwner;BlackboardKeySelector Key; );
};


instance 1ab5e200f40
class BTService_BlackboardBase public : BTService
{
	// Fields
	BlackboardKeySelector BlackboardKey; // 0x70

};


instance 1ab5e200d00
class BTService_BlueprintBase public : BTService
{
	// Fields
	AIController* AIOwner; // 0x70
	Actor* ActorOwner; // 0x78
	bool bShowPropertyDetails; // 0x90
	bool bShowEventDetails; // 0x90

	// Functions
	ReceiveTickAI 0x39634 hash 2c277e3d params:( AIController OwnerController;Pawn ControlledPawn;None DeltaSeconds; );
	ReceiveTick 0x2222c hash 2a96f4d3 params:( Actor OwnerActor;None DeltaSeconds; );
	ReceiveSearchStartAI 0x39b43 hash ea752d16 params:( AIController OwnerController;Pawn ControlledPawn; );
	ReceiveSearchStart 0x39b39 hash d3c9196c params:( Actor OwnerActor; );
	ReceiveDeactivationAI 0x39b2d hash 6b33a56d params:( AIController OwnerController;Pawn ControlledPawn; );
	ReceiveDeactivation 0x39b22 hash e90f9003 params:( Actor OwnerActor; );
	ReceiveActivationAI 0x39b17 hash bfc500a4 params:( AIController OwnerController;Pawn ControlledPawn; );
	ReceiveActivation 0x39b0d hash 6052b17a params:( Actor OwnerActor; );
	IsServiceActive 0x51687 hash 3472c38e params:( None ReturnValue; );
};


instance 1ab5e200ac0
class BTService_DefaultFocus public : BTService_BlackboardBase
{
	// Fields
	BYTE FocusPriority; // 0x98

};


instance 1ab5e200880
class BTService_RunEQS public : BTService_BlackboardBase
{
	// Fields
	EQSParametrizedQueryExecutionRequest EQSRequest; // 0x98

};


instance 1ab5e200640
class BTTask_BlackboardBase public : BTTaskNode
{
	// Fields
	BlackboardKeySelector BlackboardKey; // 0x70

};


instance 1ab5e200400
class BTTask_BlueprintBase public : BTTaskNode
{
	// Fields
	AIController* AIOwner; // 0x70
	Actor* ActorOwner; // 0x78
	IntervalCountdown TickInterval; // 0x80
	bool bShowPropertyDetails; // 0xa0

	// Functions
	SetFinishOnMessageWithId 0x516e6 hash d3af1d params:( None MessageName;None RequestID; );
	SetFinishOnMessage 0x516dc hash 48468454 params:( None MessageName; );
	ReceiveTickAI 0x39634 hash 2c277e3d params:( AIController OwnerController;Pawn ControlledPawn;None DeltaSeconds; );
	ReceiveTick 0x2222c hash 2a96f4d3 params:( Actor OwnerActor;None DeltaSeconds; );
	ReceiveExecuteAI 0x39c47 hash e3a28485 params:( AIController OwnerController;Pawn ControlledPawn; );
	ReceiveExecute 0x39c3f hash 518bc91b params:( Actor OwnerActor; );
	ReceiveAbortAI 0x39c37 hash eb0e7c0a params:( AIController OwnerController;Pawn ControlledPawn; );
	ReceiveAbort 0x39c30 hash 7c1a1b60 params:( Actor OwnerActor; );
	IsTaskExecuting 0x516d3 hash 69688020 params:( None ReturnValue; );
	IsTaskAborting 0x516cb hash 31e4abca params:( None ReturnValue; );
	FinishExecute 0x516c3 hash 58534379 params:( None bSuccess; );
	FinishAbort 0x516bc hash 8b63663e params:(  );
};


instance 1ab5e2001c0
class BTTask_FinishWithResult public : BTTaskNode
{
	// Fields
	BYTE Result; // 0x70

};


instance 1ab5e209400
class BTTask_GameplayTaskBase public : BTTaskNode
{
	// Fields
	bool bWaitForGameplayTask; // 0x70

};


instance 1ab5e2091c0
class BTTask_MakeNoise public : BTTaskNode
{
	// Fields
	float Loudnes; // 0x70

};


instance 1ab5e208d40
class BTTask_MoveTo public : BTTask_BlackboardBase
{
	// Fields
	float AcceptableRadius; // 0x98
	NavigationQueryFilter* FilterClass; // 0xa0
	float ObservedBlackboardValueTolerance; // 0xa8
	bool bObserveBlackboardValue; // 0xac
	bool bAllowStrafe; // 0xac
	bool bAllowPartialPath; // 0xac
	bool bTrackMovingGoal; // 0xac
	bool bProjectGoalLocation; // 0xac
	bool bReachTestIncludesAgentRadius; // 0xac
	bool bReachTestIncludesGoalRadius; // 0xac
	bool bStopOnOverlap; // 0xac
	bool bStopOnOverlapNeedsUpdate; // 0xad

};


instance 1ab5e208f80
class BTTask_MoveDirectlyToward public : BTTask_MoveTo
{
	// Fields
	bool bDisablePathUpdateOnGoalLocationChange; // 0xb0
	bool bProjectVectorGoalToNavigation; // 0xb0
	bool bUpdatedDeprecatedProperties; // 0xb0

};


instance 1ab5e208b00
class BTTask_PawnActionBase public : BTTaskNode
{
	// Fields

};


instance 1ab5e2088c0
class BTTask_PlayAnimation public : BTTaskNode
{
	// Fields
	AnimationAsset* AnimationToPlay; // 0x70
	bool bLooping; // 0x78
	bool bNonBlocking; // 0x78
	BehaviorTreeComponent* MyOwnerComp; // 0x80
	SkeletalMeshComponent* CachedSkelMesh; // 0x88

};


instance 1ab5e208680
class BTTask_PlaySound public : BTTaskNode
{
	// Fields
	SoundCue* SoundToPlay; // 0x70

};


instance 1ab5e208440
class BTTask_PushPawnAction public : BTTask_PawnActionBase
{
	// Fields
	PawnAction* Action; // 0x70

};


instance 1ab5e208200
class BTTask_RotateToFaceBBEntry public : BTTask_BlackboardBase
{
	// Fields
	float Precision; // 0x98

};


instance 1ab5e207fc0
class BTTask_RunBehavior public : BTTaskNode
{
	// Fields
	BehaviorTree* BehaviorAsset; // 0x70

};


instance 1ab5e207d80
class BTTask_RunBehaviorDynamic public : BTTaskNode
{
	// Fields
	GameplayTag InjectionTag; // 0x70
	BehaviorTree* DefaultBehaviorAsset; // 0x78
	BehaviorTree* BehaviorAsset; // 0x80

};


instance 1ab5e207b40
class BTTask_RunEQSQuery public : BTTask_BlackboardBase
{
	// Fields
	EnvQuery* QueryTemplate; // 0x98
	TArray QueryParams; // 0xa0
	TArray QueryConfig; // 0xb0
	BYTE RunMode; // 0xc0
	BlackboardKeySelector EQSQueryBlackboardKey; // 0xc8
	bool bUseBBKey; // 0xf0
	EQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8

};


instance 1ab5e207900
class BTTask_SetTagCooldown public : BTTaskNode
{
	// Fields
	GameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c

};


instance 1ab5e2076c0
class BTTask_Wait public : BTTaskNode
{
	// Fields
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74

};


instance 1ab5e207480
class BTTask_WaitBlackboardTime public : BTTask_Wait
{
	// Fields
	BlackboardKeySelector BlackboardKey; // 0x78

};


instance 1ab5e207240
class CrowdAgentInterface public : Interface
{
	// Fields

};


instance 1ab5e206dc0
class PathFollowingComponent public : ActorComponent
{
	// Fields
	NavMovementComponent* MovementComp; // 0xe8
	NavigationData* MyNavData; // 0xf8

	// Functions
	OnNavDataRegistered 0x517e8 hash 32ae1bef params:( NavigationData NavData; );
	OnActorBump 0x517e1 hash ad23574f params:( Actor SelfActor;Actor OtherActor;Vector NormalImpulse;HitResult Hit; );
	GetPathDestination 0x517d7 hash 334a3334 params:( Vector ReturnValue; );
	GetPathActionType 0x517cd hash b02c7e32 params:( EPathFollowingAction ReturnValue; );
};


instance 1ab5e207000
class CrowdFollowingComponent public : PathFollowingComponent
{
	// Fields
	CharacterMovementComponent* CharacterMovement; // 0x260
	Vector CrowdAgentMoveDirection; // 0x268

	// Functions
	SuspendCrowdSteering 0x517f3 hash 3105e4a7 params:( None bSuspend; );
};


instance 1ab5e206b80
class CrowdManager public : CrowdManagerBase
{
	// Fields
	NavigationData* MyNavData; // 0x28
	TArray AvoidanceConfig; // 0x30
	TArray SamplingPatterns; // 0x40
	int MaxAgents; // 0x50
	float MaxAgentRadius; // 0x54
	int MaxAvoidedAgents; // 0x58
	int MaxAvoidedWalls; // 0x5c
	float NavmeshCheckInterval; // 0x60
	float PathOptimizationInterval; // 0x64
	float SeparationDirClamp; // 0x68
	float PathOffsetRadiusMultiplier; // 0x6c
	bool bResolveCollisions; // 0x70

};


instance 1ab5e206940
class DetourCrowdAIController public : AIController
{
	// Fields

};


instance 1ab5e206700
class EnvQuery public : DataAsset
{
	// Fields
	FName QueryName; // 0x30
	TArray Options; // 0x38

};


instance 1ab5e2064c0
class EnvQueryContext public : Object
{
	// Fields

};


instance 1ab5e206280
class EnvQueryContext_BlueprintBase public : EnvQueryContext
{
	// Fields

	// Functions
	ProvideSingleLocation 0x3a1c4 hash 583dab9 params:( Object QuerierObject;Actor QuerierActor;Vector ResultingLocation; );
	ProvideSingleActor 0x3a1ba hash c2607e39 params:( Object QuerierObject;Actor QuerierActor;Actor ResultingActor; );
	ProvideLocationsSet 0x3a1af hash f2a10496 params:( Object QuerierObject;Actor QuerierActor;ResultingLocationSet ResultingLocationSet; );
	ProvideActorsSet 0x3a1a6 hash 2cbe80d6 params:( Object QuerierObject;Actor QuerierActor;ResultingActorsSet ResultingActorsSet; );
};


instance 1ab5e206040
class EnvQueryContext_Item public : EnvQueryContext
{
	// Fields

};


instance 1ab5e205e00
class EnvQueryContext_Querier public : EnvQueryContext
{
	// Fields

};


instance 1ab5e205bc0
class EnvQueryDebugHelpers public : Object
{
	// Fields

};


instance 1ab5e205740
class EnvQueryNode public : Object
{
	// Fields
	int VerNum; // 0x28

};


instance 1ab5e205980
class EnvQueryGenerator public : EnvQueryNode
{
	// Fields
	FString OptionName; // 0x30
	EnvQueryItemType* ItemType; // 0x40
	bool bAutoSortTests; // 0x48

};


instance 1ab5e205500
class EnvQueryGenerator_ActorsOfClass public : EnvQueryGenerator
{
	// Fields
	Actor* SearchedActorClass; // 0x50
	AIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	AIDataProviderFloatValue SearchRadius; // 0x88
	EnvQueryContext* SearchCenter; // 0xb8

};


instance 1ab5e2052c0
class EnvQueryGenerator_BlueprintBase public : EnvQueryGenerator
{
	// Fields
	FText GeneratorsActionDescription; // 0x50
	EnvQueryContext* Context; // 0x68
	EnvQueryItemType* GeneratedItemType; // 0x70

	// Functions
	GetQuerier 0x5189a hash cb05efa2 params:( Object ReturnValue; );
	DoItemGeneration 0x3a33c hash c4d2f713 params:( ContextLocations ContextLocations; );
	AddGeneratedVector 0x51890 hash d3826470 params:( Vector GeneratedVector; );
	AddGeneratedActor 0x51886 hash fd2a0896 params:( Actor GeneratedActor; );
};


instance 1ab5e205080
class EnvQueryGenerator_Composite public : EnvQueryGenerator
{
	// Fields
	TArray Generators; // 0x50
	bool bAllowDifferentItemTypes; // 0x60
	bool bHasMatchingItemType; // 0x60
	EnvQueryItemType* ForcedItemType; // 0x68

};


instance 1ab5e204c00
class EnvQueryGenerator_ProjectedPoints public : EnvQueryGenerator
{
	// Fields
	EnvTraceData ProjectionData; // 0x50

};


instance 1ab5e204e40
class EnvQueryGenerator_Cone public : EnvQueryGenerator_ProjectedPoints
{
	// Fields
	AIDataProviderFloatValue AlignedPointsDistance; // 0x80
	AIDataProviderFloatValue ConeDegrees; // 0xb0
	AIDataProviderFloatValue AngleStep; // 0xe0
	AIDataProviderFloatValue Range; // 0x110
	EnvQueryContext* CenterActor; // 0x140
	bool bIncludeContextLocation; // 0x148

};


instance 1ab5e20de40
class EnvQueryGenerator_CurrentLocation public : EnvQueryGenerator
{
	// Fields
	EnvQueryContext* QueryContext; // 0x50

};


instance 1ab5e20dc00
class EnvQueryGenerator_Donut public : EnvQueryGenerator_ProjectedPoints
{
	// Fields
	AIDataProviderFloatValue InnerRadius; // 0x80
	AIDataProviderFloatValue OuterRadius; // 0xb0
	AIDataProviderIntValue NumberOfRings; // 0xe0
	AIDataProviderIntValue PointsPerRing; // 0x110
	EnvDirection ArcDirection; // 0x140
	AIDataProviderFloatValue ArcAngle; // 0x160
	bool bUseSpiralPattern; // 0x190
	EnvQueryContext* Center; // 0x198
	bool bDefineArc; // 0x1a0

};


instance 1ab5e20d9c0
class EnvQueryGenerator_OnCircle public : EnvQueryGenerator_ProjectedPoints
{
	// Fields
	AIDataProviderFloatValue CircleRadius; // 0x80
	AIDataProviderFloatValue SpaceBetween; // 0xb0
	AIDataProviderIntValue NumberOfPoints; // 0xe0
	EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x110
	EnvDirection ArcDirection; // 0x118
	AIDataProviderFloatValue ArcAngle; // 0x138
	float AngleRadians; // 0x168
	EnvQueryContext* CircleCenter; // 0x170
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x178
	AIDataProviderFloatValue CircleCenterZOffset; // 0x180
	EnvTraceData TraceData; // 0x1b0
	bool bDefineArc; // 0x1e0

};


instance 1ab5e20d540
class EnvQueryGenerator_SimpleGrid public : EnvQueryGenerator_ProjectedPoints
{
	// Fields
	AIDataProviderFloatValue GridSize; // 0x80
	AIDataProviderFloatValue SpaceBetween; // 0xb0
	EnvQueryContext* GenerateAround; // 0xe0

};


instance 1ab5e20d780
class EnvQueryGenerator_PathingGrid public : EnvQueryGenerator_SimpleGrid
{
	// Fields
	AIDataProviderBoolValue PathToItem; // 0xe8
	NavigationQueryFilter* NavigationFilter; // 0x118
	AIDataProviderFloatValue ScanRangeMultiplier; // 0x120

};


instance 1ab5e20d300
class EnvQueryInstanceBlueprintWrapper public : Object
{
	// Fields
	int QueryID; // 0x30
	EnvQueryItemType* ItemType; // 0x58
	int OptionIndex; // 0x60
	MulticastInlineDelegateProperty OnQueryFinishedEvent; // 0x68 property 0x1ab713b9e00 hash 0xb7a5ed1a
	DelegateFunction EQSQueryDoneSignature__DelegateSignature; // 0x0 property 0x1ab7138a960 hash 0x8ad2d5e6

	// Functions
	SetNamedParam 0x51962 hash 2b14b1e7 params:( None ParamName;None Value; );
	GetResultsAsLocations 0x51956 hash 2cce26b7 params:( ReturnValue ReturnValue; );
	GetResultsAsActors 0x5194c hash 2ec69a17 params:( ReturnValue ReturnValue; );
	GetQueryResultsAsLocations 0x5193e hash eb159d4d params:( ResultLocations ResultLocations;None ReturnValue; );
	GetQueryResultsAsActors 0x51931 hash 8511a86d params:( ResultActors ResultActors;None ReturnValue; );
	GetItemScore 0x5192a hash 6e20690 params:( None ItemIndex;None ReturnValue; );
};


instance 1ab5e20d0c0
class EnvQueryItemType public : Object
{
	// Fields

};


instance 1ab5e20ca00
class EnvQueryItemType_VectorBase public : EnvQueryItemType
{
	// Fields

};


instance 1ab5e20cc40
class EnvQueryItemType_ActorBase public : EnvQueryItemType_VectorBase
{
	// Fields

};


instance 1ab5e20ce80
class EnvQueryItemType_Actor public : EnvQueryItemType_ActorBase
{
	// Fields

};


instance 1ab5e20c7c0
class EnvQueryItemType_Direction public : EnvQueryItemType_VectorBase
{
	// Fields

};


instance 1ab5e20c580
class EnvQueryItemType_Point public : EnvQueryItemType_VectorBase
{
	// Fields

};


instance 1ab5e20c340
class EnvQueryManager public : AISubsystem
{
	// Fields
	TArray InstanceCache; // 0xa8
	TArray LocalContexts; // 0xb8
	TArray GCShieldedWrappers; // 0xc8
	float MaxAllowedTestingTime; // 0x12c
	bool bTestQueriesUsingBreadth; // 0x130
	int QueryCountWarningThreshold; // 0x134
	double QueryCountWarningInterval; // 0x138

	// Functions
	RunEQSQuery 0x519bf hash 59ec2519 params:( Object WorldContextObject;EnvQuery QueryTemplate;Object Querier;EEnvQueryRunMode RunMode;Class WrapperClass;EnvQueryInstanceBlueprintWrapper ReturnValue; );
};


instance 1ab5e20c100
class EnvQueryOption public : Object
{
	// Fields
	EnvQueryGenerator* Generator; // 0x28
	TArray Tests; // 0x30

};


instance 1ab5e20bec0
class EnvQueryTest public : EnvQueryNode
{
	// Fields
	int TestOrder; // 0x30
	BYTE TestPurpose; // 0x34
	FString TestComment; // 0x38
	BYTE MultipleContextFilterOp; // 0x48
	BYTE MultipleContextScoreOp; // 0x49
	BYTE FilterType; // 0x4a
	AIDataProviderBoolValue BoolValue; // 0x50
	AIDataProviderFloatValue FloatValueMin; // 0x80
	AIDataProviderFloatValue FloatValueMax; // 0xb0
	BYTE ScoringEquation; // 0xe1
	BYTE ClampMinType; // 0xe2
	BYTE ClampMaxType; // 0xe3
	EEQSNormalizationType NormalizationType; // 0xe4
	AIDataProviderFloatValue ScoreClampMin; // 0xe8
	AIDataProviderFloatValue ScoreClampMax; // 0x118
	AIDataProviderFloatValue ScoringFactor; // 0x148
	AIDataProviderFloatValue ReferenceValue; // 0x178
	bool bDefineReferenceValue; // 0x1a8
	bool bWorkOnFloatValues; // 0x1b8

};


instance 1ab5e20bc80
class EnvQueryTest_Distance public : EnvQueryTest
{
	// Fields
	BYTE TestMode; // 0x1c0
	EnvQueryContext* DistanceTo; // 0x1c8

};


instance 1ab5e20ba40
class EnvQueryTest_Dot public : EnvQueryTest
{
	// Fields
	EnvDirection LineA; // 0x1c0
	EnvDirection LineB; // 0x1e0
	EEnvTestDot TestMode; // 0x200
	bool bAbsoluteValue; // 0x201

};


instance 1ab5e20b800
class EnvQueryTest_GameplayTags public : EnvQueryTest
{
	// Fields
	GameplayTagQuery TagQueryToMatch; // 0x1c0
	bool bUpdatedToUseQuery; // 0x208
	EGameplayContainerMatchType TagsToMatch; // 0x209
	GameplayTagContainer GameplayTags; // 0x210

};


instance 1ab5e20b5c0
class EnvQueryTest_Overlap public : EnvQueryTest
{
	// Fields
	EnvOverlapData OverlapData; // 0x1c0

};


instance 1ab5e20b380
class EnvQueryTest_Pathfinding public : EnvQueryTest
{
	// Fields
	BYTE TestMode; // 0x1c0
	EnvQueryContext* Context; // 0x1c8
	AIDataProviderBoolValue PathFromContext; // 0x1d0
	AIDataProviderBoolValue SkipUnreachable; // 0x200
	NavigationQueryFilter* FilterClass; // 0x230

};


instance 1ab5e20b140
class EnvQueryTest_PathfindingBatch public : EnvQueryTest_Pathfinding
{
	// Fields
	AIDataProviderFloatValue ScanRangeMultiplier; // 0x238

};


instance 1ab5e20af00
class EnvQueryTest_Project public : EnvQueryTest
{
	// Fields
	EnvTraceData ProjectionData; // 0x1c0

};


instance 1ab5e20acc0
class EnvQueryTest_Random public : EnvQueryTest
{
	// Fields

};


instance 1ab5e20aa80
class EnvQueryTest_Trace public : EnvQueryTest
{
	// Fields
	EnvTraceData TraceData; // 0x1c0
	AIDataProviderBoolValue TraceFromContext; // 0x1f0
	AIDataProviderFloatValue ItemHeightOffset; // 0x220
	AIDataProviderFloatValue ContextHeightOffset; // 0x250
	EnvQueryContext* Context; // 0x280

};


instance 1ab5e20a840
class EnvQueryTest_Volume public : EnvQueryTest
{
	// Fields
	EnvQueryContext* VolumeContext; // 0x1c0
	Volume* VolumeClass; // 0x1c8
	bool bDoComplexVolumeTest; // 0x1d0

};


instance 1ab5e20a600
class EnvQueryTypes public : Object
{
	// Fields

};


instance 1ab5e20a3c0
class EQSQueryResultSourceInterface public : Interface
{
	// Fields

};


instance 1ab5e20a180
class EQSRenderingComponent public : PrimitiveComponent
{
	// Fields

};


instance 1ab5e209f40
class EQSTestingPawn public : Character
{
	// Fields
	EnvQuery* QueryTemplate; // 0x630
	TArray QueryParams; // 0x638
	TArray QueryConfig; // 0x648
	float TimeLimitPerStep; // 0x658
	int StepToDebugDraw; // 0x65c
	EEnvQueryHightlightMode HighlightMode; // 0x660
	bool bDrawLabels; // 0x664
	bool bDrawFailedItems; // 0x664
	bool bReRunQueryOnlyOnFinishedMove; // 0x664
	bool bShouldBeVisibleInGame; // 0x664
	bool bTickDuringGame; // 0x664
	BYTE QueryingMode; // 0x668
	NavAgentProperties NavAgentProperties; // 0x670

};


instance 1ab5e209d00
class GenericTeamAgentInterface public : Interface
{
	// Fields

};


instance 1ab5e209ac0
class GridPathAIController public : AIController
{
	// Fields

};


instance 1ab5e209880
class GridPathFollowingComponent public : PathFollowingComponent
{
	// Fields
	NavLocalGridManager* GridManager; // 0x258

};


instance 1ab5e209640
class NavFilter_AIControllerDefault public : NavigationQueryFilter
{
	// Fields

};


instance 1ab5e20fdc0
class NavLinkProxy public : Actor
{
	// Fields
	TArray PointLinks; // 0x228
	TArray SegmentLinks; // 0x238
	NavLinkCustomComponent* SmartLinkComp; // 0x248
	bool bSmartLinkIsRelevant; // 0x250
	MulticastInlineDelegateProperty OnSmartLinkReached; // 0x258 property 0x1ab7221c700 hash 0xb7a5ed1a

	// Functions
	SetSmartLinkEnabled 0x51ad3 hash 4c5eda51 params:( None bEnabled; );
	ResumePathFollowing 0x51ac8 hash 6e907b14 params:( Actor Agent; );
	ReceiveSmartLinkReached 0x3aedc hash c7ed2f89 params:( Actor Agent;Vector Destination; );
	IsSmartLinkEnabled 0x51abe hash 835f8d01 params:( None ReturnValue; );
	HasMovingAgents 0x51ab5 hash ecaa7453 params:( None ReturnValue; );
};


instance 1ab5e20fb80
class NavLocalGridManager public : Object
{
	// Fields

	// Functions
	SetLocalNavigationGridDensity 0x51b47 hash 23385032 params:( Object WorldContextObject;None CellSize;None ReturnValue; );
	RemoveLocalNavigationGrid 0x51b39 hash 40b8c834 params:( Object WorldContextObject;None GridId;None bRebuildGrids; );
	FindLocalNavigationGridPath 0x51b2a hash 69c74214 params:( Object WorldContextObject;Vector Start;Vector End;PathPoints PathPoints;None ReturnValue; );
	AddLocalNavigationGridForPoints 0x51b19 hash 779478b3 params:( Object WorldContextObject;Locations Locations;None Radius2D;None Height;None bRebuildGrids;None ReturnValue; );
	AddLocalNavigationGridForPoint 0x51b09 hash 9ec67040 params:( Object WorldContextObject;Vector Location;None Radius2D;None Height;None bRebuildGrids;None ReturnValue; );
	AddLocalNavigationGridForCapsule 0x51af8 hash 6147ada3 params:( Object WorldContextObject;Vector Location;None CapsuleRadius;None CapsuleHalfHeight;None Radius2D;None Height;None bRebuildGrids;None ReturnValue; );
	AddLocalNavigationGridForBox 0x51ae9 hash fe5269f params:( Object WorldContextObject;Vector Location;Vector Extent;Rotator Rotation;None Radius2D;None Height;None bRebuildGrids;None ReturnValue; );
};


instance 1ab5e20f940
class PathFollowingManager public : Object
{
	// Fields

};


instance 1ab5e20f700
class PawnAction public : Object
{
	// Fields
	PawnAction* ChildAction; // 0x28
	PawnAction* ParentAction; // 0x30
	PawnActionsComponent* OwnerComponent; // 0x38
	Object* Instigator; // 0x40
	BrainComponent* BrainComp; // 0x48
	bool bAllowNewSameClassInstance; // 0x80
	bool bReplaceActiveSameClassInstance; // 0x80
	bool bShouldPauseMovement; // 0x80
	bool bAlwaysNotifyOnFinished; // 0x80

	// Functions
	GetActionPriority 0x51b77 hash 84705cc5 params:( EAIRequestPriority ReturnValue; );
	Finish 0x51b73 hash b2d24d46 params:( EPawnActionResult WithResult; );
	CreateActionInstance 0x51b68 hash 4f3e642c params:( Object WorldContextObject;Class ActionClass;PawnAction ReturnValue; );
};


instance 1ab5e20f4c0
class PawnAction_BlueprintBase public : PawnAction
{
	// Fields

	// Functions
	ActionTick 0x3b085 hash f3d6ce0e params:( Pawn ControlledPawn;None DeltaSeconds; );
	ActionStart 0x3b07e hash 6ea47851 params:( Pawn ControlledPawn; );
	ActionResume 0x3b077 hash 3fd8d554 params:( Pawn ControlledPawn; );
	ActionPause 0x3b070 hash 6e6418c1 params:( Pawn ControlledPawn; );
	ActionFinished 0x3b068 hash adb6e60d params:( Pawn ControlledPawn;EPawnActionResult WithResult; );
};


instance 1ab5e20f280
class PawnAction_Move public : PawnAction
{
	// Fields
	Actor* GoalActor; // 0x98
	Vector GoalLocation; // 0xa0
	float AcceptableRadius; // 0xac
	NavigationQueryFilter* FilterClass; // 0xb0
	bool bAllowStrafe; // 0xb8
	bool bFinishOnOverlap; // 0xb8
	bool bUsePathfinding; // 0xb8
	bool bAllowPartialPath; // 0xb8
	bool bProjectGoalToNavigation; // 0xb8
	bool bUpdatePathToGoal; // 0xb8
	bool bAbortChildActionOnPathChange; // 0xb8

};


instance 1ab5e20f040
class PawnAction_Repeat public : PawnAction
{
	// Fields
	PawnAction* ActionToRepeat; // 0x98
	PawnAction* RecentActionCopy; // 0xa0
	BYTE ChildFailureHandlingMode; // 0xa8

};


instance 1ab5e20ee00
class PawnAction_Sequence public : PawnAction
{
	// Fields
	TArray ActionSequence; // 0x98
	BYTE ChildFailureHandlingMode; // 0xa8
	PawnAction* RecentActionCopy; // 0xb0

};


instance 1ab5e20ebc0
class PawnAction_Wait public : PawnAction
{
	// Fields
	float TimeToWait; // 0x98

};


instance 1ab5e20e980
class PawnActionsComponent public : ActorComponent
{
	// Fields
	Pawn* ControlledPawn; // 0xb0
	TArray ActionStacks; // 0xb8
	TArray ActionEvents; // 0xc8
	PawnAction* CurrentAction; // 0xd8

	// Functions
	K2_PushAction 0x51bdc hash 410b215f params:( PawnAction NewAction;EAIRequestPriority Priority;Object Instigator;None ReturnValue; );
	K2_PerformAction 0x51bd3 hash 6c0da1fa params:( Pawn Pawn;PawnAction Action;EAIRequestPriority Priority;None ReturnValue; );
	K2_ForceAbortAction 0x51bc8 hash 29b99626 params:( PawnAction ActionToAbort;EPawnActionAbortState ReturnValue; );
	K2_AbortAction 0x51bc0 hash b3357977 params:( PawnAction ActionToAbort;EPawnActionAbortState ReturnValue; );
};


instance 1ab5e20e740
class PawnSensingComponent public : ActorComponent
{
	// Fields
	float HearingThreshold; // 0xb0
	float LOSHearingThreshold; // 0xb4
	float SightRadius; // 0xb8
	float SensingInterval; // 0xbc
	float HearingMaxSoundAge; // 0xc0
	bool bEnableSensingUpdates; // 0xc4
	bool bOnlySensePlayers; // 0xc4
	bool bSeePawns; // 0xc4
	bool bHearNoises; // 0xc4
	MulticastInlineDelegateProperty OnSeePawn; // 0xd0 property 0x1ab713b9600 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnHearNoise; // 0xe0 property 0x1ab713b9680 hash 0xb7a5ed1a
	float PeripheralVisionAngle; // 0xf0
	float PeripheralVisionCosine; // 0xf4
	DelegateFunction SeePawnDelegate__DelegateSignature; // 0x0 property 0x1ab71389e00 hash 0x8ad2d5e6
	DelegateFunction HearNoiseDelegate__DelegateSignature; // 0x0 property 0x1ab71389ee0 hash 0x8ad2d5e6

	// Functions
	SetSensingUpdatesEnabled 0x51c21 hash 1442bc89 params:( None bEnabled; );
	SetSensingInterval 0x51c17 hash 4670a7ad params:( None NewSensingInterval; );
	SetPeripheralVisionAngle 0x51c0a hash 7ebca27c params:( None NewPeripheralVisionAngle; );
	GetPeripheralVisionCosine 0x51bfc hash 49f0010a params:( None ReturnValue; );
	GetPeripheralVisionAngle 0x51bef hash cbcb0ff0 params:( None ReturnValue; );
};


instance 1ab5e20e500
class VisualLoggerExtension public : Object
{
	// Fields

};


instance 1ab70e9d0c0
struct AIRequestID 
{
	// Fields
	int RequestID; // 0x0

};


instance 1ab70e9d000
struct AIStimulus 
{
	// Fields
	float Age; // 0x0
	float ExpirationAge; // 0x4
	float Strength; // 0x8
	Vector StimulusLocation; // 0xc
	Vector ReceiverLocation; // 0x18
	FName Tag; // 0x24
	bool bSuccessfullySensed; // 0x38

};


instance 1ab716e7fc0
struct AIDataProviderValue 
{
	// Fields
	Property* CachedProperty; // 0x8
	AIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18

};


instance 1ab716e7f00
struct AIDataProviderTypedValue 
{
	// Fields
	Property* PropertyType; // 0x20

};


instance 1ab716e7e40
struct AIDataProviderBoolValue 
{
	// Fields
	bool DefaultValue; // 0x28

};


instance 1ab716e7d80
struct AIDataProviderFloatValue 
{
	// Fields
	float DefaultValue; // 0x28

};


instance 1ab716e7cc0
struct AIDataProviderIntValue 
{
	// Fields
	int DefaultValue; // 0x28

};


instance 1ab716e7c00
struct AIDataProviderStructValue 
{
	// Fields

};


instance 1ab716eacc0
struct ActorPerceptionBlueprintInfo 
{
	// Fields
	Actor* Target; // 0x0
	TArray LastSensedStimuli; // 0x8
	bool bIsHostile; // 0x18

};


instance 1ab716eac00
struct AISenseAffiliationFilter 
{
	// Fields
	bool bDetectEnemies; // 0x0
	bool bDetectNeutrals; // 0x0
	bool bDetectFriendlies; // 0x0

};


instance 1ab716eab40
struct AIDamageEvent 
{
	// Fields
	float Amount; // 0x0
	Vector Location; // 0x4
	Vector HitLocation; // 0x10
	Actor* DamagedActor; // 0x20
	Actor* Instigator; // 0x28

};


instance 1ab716eaa80
struct AINoiseEvent 
{
	// Fields
	Vector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	Actor* Instigator; // 0x18
	FName Tag; // 0x20

};


instance 1ab716ea9c0
struct AIPredictionEvent 
{
	// Fields
	Actor* Requestor; // 0x0
	Actor* PredictedActor; // 0x8

};


instance 1ab716ea900
struct AISightEvent 
{
	// Fields
	Actor* SeenActor; // 0x8
	Actor* Observer; // 0x10

};


instance 1ab716ea840
struct AITeamStimulusEvent 
{
	// Fields
	Actor* Broadcaster; // 0x28
	Actor* Enemy; // 0x30

};


instance 1ab716ea780
struct AITouchEvent 
{
	// Fields
	Actor* TouchReceiver; // 0x10
	Actor* OtherActor; // 0x18

};


instance 1ab716ea6c0
struct IntervalCountdown 
{
	// Fields
	float Interval; // 0x0

};


instance 1ab716ea600
struct AIMoveRequest 
{
	// Fields
	Actor* GoalActor; // 0x0

};


instance 1ab716ea540
struct BehaviorTreeTemplateInfo 
{
	// Fields
	BehaviorTree* Asset; // 0x0
	BTCompositeNode* Template; // 0x8

};


instance 1ab716ea480
struct BlackboardKeySelector 
{
	// Fields
	TArray AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	BlackboardKeyType* SelectedKeyType; // 0x18
	BYTE SelectedKeyID; // 0x20
	bool bNoneIsAllowedValue; // 0x24

};


instance 1ab716ea3c0
struct BlackboardEntry 
{
	// Fields
	FName EntryName; // 0x0
	BlackboardKeyType* KeyType; // 0x8
	bool bInstanceSynced; // 0x10

};


instance 1ab716ea300
struct BTCompositeChild 
{
	// Fields
	BTCompositeNode* ChildComposite; // 0x0
	BTTaskNode* ChildTask; // 0x8
	TArray Decorators; // 0x10
	TArray DecoratorOps; // 0x20

};


instance 1ab716ea240
struct BTDecoratorLogic 
{
	// Fields
	BYTE Operation; // 0x0
	USHORT Number; // 0x2

};


instance 1ab716ea180
struct CrowdAvoidanceSamplingPattern 
{
	// Fields
	TArray Angles; // 0x0
	TArray Radii; // 0x10

};


instance 1ab716ea0c0
struct CrowdAvoidanceConfig 
{
	// Fields
	float VelocityBias; // 0x0
	float DesiredVelocityWeight; // 0x4
	float CurrentVelocityWeight; // 0x8
	float SideBiasWeight; // 0xc
	float ImpactTimeWeight; // 0x10
	float ImpactTimeRange; // 0x14
	BYTE CustomPatternIdx; // 0x18
	BYTE AdaptiveDivisions; // 0x19
	BYTE AdaptiveRings; // 0x1a
	BYTE AdaptiveDepth; // 0x1b

};


instance 1ab716ea000
struct EnvQueryInstanceCache 
{
	// Fields
	EnvQuery* Template; // 0x0

};


instance 1ab716e9f40
struct EnvQueryRequest 
{
	// Fields
	EnvQuery* QueryTemplate; // 0x0
	Object* Owner; // 0x8
	World* World; // 0x10

};


instance 1ab716e9e80
struct EQSParametrizedQueryExecutionRequest 
{
	// Fields
	EnvQuery* QueryTemplate; // 0x0
	TArray QueryConfig; // 0x8
	BlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	BYTE RunMode; // 0x40
	bool bUseBBKeyForQueryTemplate; // 0x44

};


instance 1ab716e9dc0
struct AIDynamicParam 
{
	// Fields
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	BlackboardKeySelector BBKey; // 0x10

};


instance 1ab716e9d00
struct EnvQueryResult 
{
	// Fields
	EnvQueryItemType* ItemType; // 0x10
	int OptionIndex; // 0x2c
	int QueryID; // 0x30

};


instance 1ab716e9c40
struct EnvOverlapData 
{
	// Fields
	float ExtentX; // 0x0
	float ExtentY; // 0x4
	float ExtentZ; // 0x8
	Vector ShapeOffset; // 0xc
	BYTE OverlapChannel; // 0x18
	BYTE OverlapShape; // 0x19
	bool bOnlyBlockingHits; // 0x1c
	bool bOverlapComplex; // 0x1c
	bool bSkipOverlapQuerier; // 0x1c

};


instance 1ab716e9b80
struct EnvTraceData 
{
	// Fields
	int VersionNum; // 0x0
	NavigationQueryFilter* NavigationFilter; // 0x8
	float ProjectDown; // 0x10
	float ProjectUp; // 0x14
	float ExtentX; // 0x18
	float ExtentY; // 0x1c
	float ExtentZ; // 0x20
	float PostProjectionVerticalOffset; // 0x24
	BYTE TraceChannel; // 0x28
	BYTE SerializedChannel; // 0x29
	BYTE TraceShape; // 0x2a
	BYTE TraceMode; // 0x2b
	bool bTraceComplex; // 0x2c
	bool bOnlyBlockingHits; // 0x2c
	bool bCanTraceOnNavMesh; // 0x2c
	bool bCanTraceOnGeometry; // 0x2c
	bool bCanDisableTrace; // 0x2c
	bool bCanProjectDown; // 0x2c

};


instance 1ab716e9ac0
struct EnvDirection 
{
	// Fields
	EnvQueryContext* LineFrom; // 0x0
	EnvQueryContext* LineTo; // 0x8
	EnvQueryContext* Rotation; // 0x10
	BYTE DirMode; // 0x18

};


instance 1ab716e9a00
struct EnvNamedValue 
{
	// Fields
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc

};


instance 1ab716e9940
struct GenericTeamId 
{
	// Fields
	BYTE TeamID; // 0x0

};


instance 1ab716e9880
struct PawnActionStack 
{
	// Fields
	PawnAction* TopAction; // 0x0

};


instance 1ab716e97c0
struct PawnActionEvent 
{
	// Fields
	PawnAction* Action; // 0x0

};


