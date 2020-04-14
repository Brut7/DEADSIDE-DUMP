instance 1ab5e094c00
class CableActor public : Actor
{
	// Fields
	CableComponent* CableComponent; // 0x218

};


instance 1ab5e09de40
class CableComponent public : MeshComponent
{
	// Fields
	bool bAttachStart; // 0x400
	bool bAttachEnd; // 0x401
	ComponentReference AttachEndTo; // 0x408
	FName AttachEndToSocketName; // 0x430
	Vector EndLocation; // 0x438
	float CableLength; // 0x444
	int NumSegments; // 0x448
	float SubstepTime; // 0x44c
	int SolverIterations; // 0x450
	bool bEnableStiffness; // 0x454
	bool bEnableCollision; // 0x455
	float CollisionFriction; // 0x458
	Vector CableForce; // 0x45c
	float CableGravityScale; // 0x468
	float CableWidth; // 0x46c
	int NumSides; // 0x470
	float TileMaterial; // 0x474

	// Functions
	SetAttachEndToComponent 0x41974 hash 15d65773 params:( SceneComponent Component;None SocketName; );
	SetAttachEndTo 0x4196c hash 7c230020 params:( Actor Actor;None ComponentProperty;None SocketName; );
	GetCableParticleLocations 0x4195e hash 63dee49c params:( Locations Locations; );
	GetAttachedComponent 0x41953 hash b54c45d6 params:( SceneComponent ReturnValue; );
	GetAttachedActor 0x4194a hash 3e8c77c params:( Actor ReturnValue; );
};


