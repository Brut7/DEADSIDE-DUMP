instance 1ab5e20e2c0
class ChaosDebugDrawComponent public : ActorComponent
{
	// Fields

};


instance 1ab5e20e080
class ChaosEventListenerComponent public : ActorComponent
{
	// Fields

};


instance 1ab5e2149c0
class ChaosGameplayEventDispatcher public : ChaosEventListenerComponent
{
	// Fields
	MapProperty CollisionEventRegistrations; // 0x1c8 property 0x1ab71168760 hash 0xadd0fb88
	MapProperty BreakEventRegistrations; // 0x218 property 0x1ab71168800 hash 0xadd0fb88

};


instance 1ab5e214780
class ChaosNotifyHandlerInterface public : Interface
{
	// Fields

};


instance 1ab5e214540
class ChaosSolverEngineBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	ConvertPhysicsCollisionToHitResult 0x51c86 hash f57455dc params:( ChaosPhysicsCollisionInfo PhysicsCollision;HitResult ReturnValue; );
};


instance 1ab5e214300
class ChaosSolver public : Object
{
	// Fields

};


instance 1ab5e2140c0
class ChaosSolverActor public : Actor
{
	// Fields
	float TimeStepMultiplier; // 0x218
	int CollisionIterations; // 0x21c
	int PushOutIterations; // 0x220
	int PushOutPairIterations; // 0x224
	float ClusterConnectionFactor; // 0x228
	EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x22c
	bool DoGenerateCollisionData; // 0x22d
	SolverCollisionFilterSettings CollisionFilterSettings; // 0x230
	bool DoGenerateBreakingData; // 0x240
	SolverBreakingFilterSettings BreakingFilterSettings; // 0x244
	bool DoGenerateTrailingData; // 0x254
	SolverTrailingFilterSettings TrailingFilterSettings; // 0x258
	bool bHasFloor; // 0x268
	float FloorHeight; // 0x26c
	float MassScale; // 0x270
	ChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x274
	BillboardComponent* SpriteComponent; // 0x278
	ChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x298

	// Functions
	SetSolverActive 0x51cb5 hash 14e840a8 params:( None bActive; );
	SetAsCurrentWorldSolver 0x51ca8 hash 10a06e8b params:(  );
};


instance 1ab5e213e80
class ChaosSolverSettings public : DeveloperSettings
{
	// Fields
	SoftClassPath DefaultChaosSolverActorClass; // 0x40

};


instance 1ab70e9cf40
struct ChaosPhysicsCollisionInfo 
{
	// Fields
	PrimitiveComponent* Component; // 0x0
	PrimitiveComponent* OtherComponent; // 0x8
	Vector Location; // 0x10
	Vector Normal; // 0x1c
	Vector AccumulatedImpulse; // 0x28
	Vector Velocity; // 0x34
	Vector OtherVelocity; // 0x40
	Vector AngularVelocity; // 0x4c
	Vector OtherAngularVelocity; // 0x58
	float Mass; // 0x64
	float OtherMass; // 0x68

};


instance 1ab70e9ce80
struct ChaosBreakEvent 
{
	// Fields
	PrimitiveComponent* Component; // 0x0
	Vector Location; // 0x8
	Vector Velocity; // 0x14
	Vector AngularVelocity; // 0x20
	float Mass; // 0x2c

};


instance 1ab716e9700
struct ChaosHandlerSet 
{
	// Fields
	SetProperty ChaosHandlers; // 0x8 property 0x1ab71166000 hash 0xb0194396

};


instance 1ab716e9640
struct BreakEventCallbackWrapper 
{
	// Fields

};


instance 1ab716e9580
struct ChaosDebugSubstepControl 
{
	// Fields
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2

};


