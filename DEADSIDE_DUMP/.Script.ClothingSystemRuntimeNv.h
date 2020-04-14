instance 1ab5e1be080
class ClothConfigNv public : ClothConfigBase
{
	// Fields
	EClothingWindMethod WindMethod; // 0x28
	ClothConstraintSetup VerticalConstraintConfig; // 0x2c
	ClothConstraintSetup HorizontalConstraintConfig; // 0x3c
	ClothConstraintSetup BendConstraintConfig; // 0x4c
	ClothConstraintSetup ShearConstraintConfig; // 0x5c
	float SelfCollisionRadius; // 0x6c
	float SelfCollisionStiffness; // 0x70
	float SelfCollisionCullScale; // 0x74
	Vector Damping; // 0x78
	float Friction; // 0x84
	float WindDragCoefficient; // 0x88
	float WindLiftCoefficient; // 0x8c
	Vector LinearDrag; // 0x90
	Vector AngularDrag; // 0x9c
	Vector LinearInertiaScale; // 0xa8
	Vector AngularInertiaScale; // 0xb4
	Vector CentrifugalInertiaScale; // 0xc0
	float SolverFrequency; // 0xcc
	float StiffnessFrequency; // 0xd0
	float GravityScale; // 0xd4
	Vector GravityOverride; // 0xd8
	bool bUseGravityOverride; // 0xe4
	float TetherStiffness; // 0xe8
	float TetherLimit; // 0xec
	float CollisionThickness; // 0xf0
	float AnimDriveSpringStiffness; // 0xf4
	float AnimDriveDamperStiffness; // 0xf8

};


instance 1ab5e1e49c0
class ClothingAssetNv public : ClothingAssetCommon
{
	// Fields
	ClothConfig ClothConfig; // 0xa8
	TArray LODData; // 0x180

};


instance 1ab5e1e4780
class ClothingSimulationFactoryNv public : ClothingSimulationFactory
{
	// Fields

};


instance 1ab5e1e4540
class ClothingSimulationInteractorNv public : ClothingSimulationInteractor
{
	// Fields

	// Functions
	SetAnimDriveSpringStiffness 0x5075f hash d4c08f8 params:( None InStiffness; );
	SetAnimDriveDamperStiffness 0x50750 hash 4957757e params:( None InStiffness; );
	EnableGravityOverride 0x50744 hash 19ba6b72 params:( Vector InVector; );
	DisableGravityOverride 0x50738 hash e1aaa4df params:(  );
};


instance 1ab5e1e4300
class ClothLODDataNv public : ClothLODDataBase
{
	// Fields

};


instance 1ab5e1e40c0
class ClothPhysicalMeshDataNv public : ClothPhysicalMeshDataBase
{
	// Fields
	TArray MaxDistances; // 0xe0
	TArray BackstopDistances; // 0xf0
	TArray BackstopRadiuses; // 0x100
	TArray AnimDriveMultipliers; // 0x110

};


instance 1ab716e8f80
struct ClothConfig 
{
	// Fields
	EClothingWindMethod WindMethod; // 0x0
	ClothConstraintSetup VerticalConstraintConfig; // 0x4
	ClothConstraintSetup HorizontalConstraintConfig; // 0x14
	ClothConstraintSetup BendConstraintConfig; // 0x24
	ClothConstraintSetup ShearConstraintConfig; // 0x34
	float SelfCollisionRadius; // 0x44
	float SelfCollisionStiffness; // 0x48
	float SelfCollisionCullScale; // 0x4c
	Vector Damping; // 0x50
	float Friction; // 0x5c
	float WindDragCoefficient; // 0x60
	float WindLiftCoefficient; // 0x64
	Vector LinearDrag; // 0x68
	Vector AngularDrag; // 0x74
	Vector LinearInertiaScale; // 0x80
	Vector AngularInertiaScale; // 0x8c
	Vector CentrifugalInertiaScale; // 0x98
	float SolverFrequency; // 0xa4
	float StiffnessFrequency; // 0xa8
	float GravityScale; // 0xac
	Vector GravityOverride; // 0xb0
	bool bUseGravityOverride; // 0xbc
	float TetherStiffness; // 0xc0
	float TetherLimit; // 0xc4
	float CollisionThickness; // 0xc8
	float AnimDriveSpringStiffness; // 0xcc
	float AnimDriveDamperStiffness; // 0xd0

};


instance 1ab716e8ec0
struct ClothConstraintSetup 
{
	// Fields
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc

};


instance 1ab716e8e00
struct ClothLODData 
{
	// Fields
	ClothPhysicalMeshData PhysicalMeshData; // 0x0
	ClothCollisionData CollisionData; // 0xa8

};


instance 1ab716e8d40
struct ClothPhysicalMeshData 
{
	// Fields
	TArray Vertices; // 0x0
	TArray Normals; // 0x10
	TArray Indices; // 0x20
	TArray MaxDistances; // 0x30
	TArray BackstopDistances; // 0x40
	TArray BackstopRadiuses; // 0x50
	TArray AnimDriveMultipliers; // 0x60
	TArray InverseMasses; // 0x70
	TArray BoneData; // 0x80
	int MaxBoneWeights; // 0x90
	int NumFixedVerts; // 0x94
	TArray SelfCollisionIndices; // 0x98

};


instance 1ab716e8c80
struct ClothParameterMask_PhysMesh 
{
	// Fields
	FName MaskName; // 0x0
	MaskTarget_PhysMesh CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray Values; // 0x18
	bool bEnabled; // 0x28

};


