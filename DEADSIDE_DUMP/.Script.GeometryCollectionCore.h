instance 1ab715194c0
struct RecordedTransformTrack 
{
	// Fields
	TArray Records; // 0x0

};


instance 1ab7151c580
struct RecordedFrame 
{
	// Fields
	TArray Transforms; // 0x0
	TArray TransformIndices; // 0x10
	TArray PreviousTransformIndices; // 0x20
	TArray DisabledFlags; // 0x30
	TArray Collisions; // 0x40
	TArray Breakings; // 0x50
	SetProperty Trailings; // 0x60 property 0x1ab71164340 hash 0xb0194396
	float Timestamp; // 0xb0

};


instance 1ab7151c4c0
struct SolverTrailingData 
{
	// Fields
	Vector Location; // 0x0
	Vector Velocity; // 0xc
	Vector AngularVelocity; // 0x18
	float Mass; // 0x24
	int ParticleIndex; // 0x28
	int ParticleIndexMesh; // 0x2c

};


instance 1ab7151c400
struct SolverBreakingData 
{
	// Fields
	Vector Location; // 0x0
	Vector Velocity; // 0xc
	Vector AngularVelocity; // 0x18
	float Mass; // 0x24
	int ParticleIndex; // 0x28
	int ParticleIndexMesh; // 0x2c

};


instance 1ab7151c340
struct SolverCollisionData 
{
	// Fields
	Vector Location; // 0x0
	Vector AccumulatedImpulse; // 0xc
	Vector Normal; // 0x18
	Vector Velocity1; // 0x24
	Vector Velocity2; // 0x30
	Vector AngularVelocity1; // 0x3c
	Vector AngularVelocity2; // 0x48
	float Mass1; // 0x54
	float Mass2; // 0x58
	int ParticleIndex; // 0x5c
	int LevelsetIndex; // 0x60
	int ParticleIndexMesh; // 0x64
	int LevelsetIndexMesh; // 0x68

};


