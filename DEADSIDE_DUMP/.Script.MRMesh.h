instance 1ab5e0df4c0
class MeshReconstructorBase public : Object
{
	// Fields

	// Functions
	StopReconstruction 0x4522b hash 5f1c3fed params:(  );
	StartReconstruction 0x45220 hash 741b875 params:(  );
	PauseReconstruction 0x45215 hash 3d195ce5 params:(  );
	IsReconstructionStarted 0x45208 hash 3e18707a params:( None ReturnValue; );
	IsReconstructionPaused 0x451fc hash f1d373c5 params:( None ReturnValue; );
	DisconnectMRMesh 0x451f3 hash 753c55fb params:(  );
	ConnectMRMesh 0x451eb hash 644704bb params:( MRMeshComponent Mesh; );
};


instance 1ab5e0df280
class MockDataMeshTrackerComponent public : SceneComponent
{
	// Fields
	MulticastInlineDelegateProperty OnMeshTrackerUpdated; // 0x1f0 property 0x1ab71345380 hash 0xb7a5ed1a
	bool ScanWorld; // 0x200
	bool RequestNormals; // 0x201
	bool RequestVertexConfidence; // 0x202
	EMeshTrackerVertexColorMode VertexColorMode; // 0x203
	TArray BlockVertexColors; // 0x208
	LinearColor VertexColorFromConfidenceZero; // 0x218
	LinearColor VertexColorFromConfidenceOne; // 0x228
	float UpdateInterval; // 0x238
	MRMeshComponent* MRMesh; // 0x240
	DelegateFunction OnMockDataMeshTrackerUpdated__DelegateSignature; // 0x0 property 0x1ab713199a0 hash 0x8ad2d5e6

	// Functions
	DisconnectMRMesh 0x451f3 hash 753c55fb params:( MRMeshComponent InMRMeshPtr; );
	ConnectMRMesh 0x451eb hash 644704bb params:( MRMeshComponent InMRMeshPtr; );
};


instance 1ab5e0df040
class MRMeshComponent public : PrimitiveComponent
{
	// Fields
	MaterialInterface* Material; // 0x3e0
	bool bCreateMeshProxySections; // 0x3e8
	bool bUpdateNavMeshOnMeshUpdate; // 0x3e9
	bool bNeverCreateCollisionMesh; // 0x3ea
	BodySetup* CachedBodySetup; // 0x3f0
	TArray BodySetups; // 0x3f8
	MaterialInterface* WireframeMaterial; // 0x408

	// Functions
	IsConnected 0x45257 hash cc2f0974 params:( None ReturnValue; );
	ForceNavMeshUpdate 0x4524d hash afa0caa9 params:(  );
	Clear 0x5adf hash cf85d6c params:(  );
};


instance 1ab714597c0
struct MRMeshConfiguration 
{
	// Fields

};


