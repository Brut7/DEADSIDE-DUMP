instance 1ab5e129ac0
class ClothConfigBase public : Object
{
	// Fields

};


instance 1ab5e129880
class ClothingAssetBase public : Object
{
	// Fields
	FString ImportedFilePath; // 0x28
	Guid AssetGuid; // 0x38

};


instance 1ab5e129640
class ClothingSimulationFactory public : Object
{
	// Fields

};


instance 1ab5e12fdc0
class ClothingSimulationInteractor public : Object
{
	// Fields

	// Functions
	PhysicsAssetUpdated 0x48477 hash 653c270f params:(  );
	ClothConfigUpdated 0x4846d hash 56768c1c params:(  );
};


instance 1ab5e12fb80
class ClothPhysicalMeshDataBase public : Object
{
	// Fields
	TArray Vertices; // 0x28
	TArray Normals; // 0x38
	TArray Indices; // 0x48
	TArray InverseMasses; // 0x58
	TArray BoneData; // 0x68
	int NumFixedVerts; // 0x78
	int MaxBoneWeights; // 0x7c
	TArray SelfCollisionIndices; // 0x80

};


instance 1ab7151c040
struct ClothCollisionData 
{
	// Fields
	TArray Spheres; // 0x0
	TArray SphereConnections; // 0x10
	TArray Convexes; // 0x20
	TArray Boxes; // 0x30

};


instance 1ab7151bf80
struct ClothCollisionPrim_Box 
{
	// Fields
	int BoneIndex; // 0x0
	Vector LocalMin; // 0x4
	Vector LocalMax; // 0x10

};


instance 1ab7151bec0
struct ClothCollisionPrim_Convex 
{
	// Fields
	TArray Planes; // 0x0
	int BoneIndex; // 0x10

};


instance 1ab7151be00
struct ClothCollisionPrim_SphereConnection 
{
	// Fields
	int SphereIndices; // 0x0

};


instance 1ab7151bd40
struct ClothCollisionPrim_Sphere 
{
	// Fields
	int BoneIndex; // 0x0
	float Radius; // 0x4
	Vector LocalPosition; // 0x8

};


instance 1ab7151bc80
struct ClothVertBoneData 
{
	// Fields
	int NumInfluences; // 0x0
	USHORT BoneIndices; // 0x4
	float BoneWeights; // 0x14

};


instance 1ab7151bbc0
struct PointWeightMap 
{
	// Fields
	FName Name; // 0x0
	BYTE CurrentTarget; // 0x8
	TArray Values; // 0x10
	bool bEnabled; // 0x20

};


