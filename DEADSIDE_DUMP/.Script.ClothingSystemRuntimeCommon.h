instance 1ab5e1be740
class ClothingAssetCustomData public : Object
{
	// Fields

};


instance 1ab5e1be500
class ClothingAssetCommon public : ClothingAssetBase
{
	// Fields
	PhysicsAsset* PhysicsAsset; // 0x48
	ClothConfigBase* ClothSimConfig; // 0x50
	TArray ClothLODData; // 0x58
	TArray LodMap; // 0x68
	TArray UsedBoneNames; // 0x78
	TArray UsedBoneIndices; // 0x88
	int ReferenceBoneIndex; // 0x98
	ClothingAssetCustomData* CustomData; // 0xa0

};


instance 1ab5e1be2c0
class ClothLODDataBase public : Object
{
	// Fields
	ClothPhysicalMeshDataBase* PhysicalMeshData; // 0x28
	ClothCollisionData CollisionData; // 0x30

};


