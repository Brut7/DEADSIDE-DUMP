instance 1ab5e12a180
class MeshDescription public : Object
{
	// Fields

};


instance 1ab5e129f40
class MeshDescriptionBase public : Object
{
	// Fields

	// Functions
	SetVertexPosition 0x48406 hash cf2af4e4 params:( VertexID VertexID;Vector Position; );
	SetPolygonVertexInstance 0x483f9 hash 172a282c params:( PolygonID PolygonID;None PerimeterIndex;VertexInstanceID VertexInstanceID; );
	SetPolygonPolygonGroup 0x483ed hash 67d480e params:( PolygonID PolygonID;PolygonGroupID PolygonGroupID; );
	ReversePolygonFacing 0x483e2 hash e7995b31 params:( PolygonID PolygonID; );
	ReserveNewVertices 0x483d8 hash f0a39870 params:( None NumberOfNewVertices; );
	ReserveNewVertexInstances 0x483ca hash 7d144971 params:( None NumberOfNewVertexInstances; );
	ReserveNewTriangles 0x483bf hash 3ab43594 params:( None NumberOfNewTriangles; );
	ReserveNewPolygons 0x483b5 hash 5b399ce6 params:( None NumberOfNewPolygons; );
	ReserveNewPolygonGroups 0x483a8 hash e5c86913 params:( None NumberOfNewPolygonGroups; );
	ReserveNewEdges 0x4839f hash e8ca5053 params:( None NumberOfNewEdges; );
	IsVertexValid 0x48397 hash dbe734cf params:( VertexID VertexID;None ReturnValue; );
	IsVertexOrphaned 0x4838e hash 73903350 params:( VertexID VertexID;None ReturnValue; );
	IsVertexInstanceValid 0x48382 hash 6e7df8a4 params:( VertexInstanceID VertexInstanceID;None ReturnValue; );
	IsTriangleValid 0x48379 hash 605e8dc7 params:( TriangleID TriangleID;None ReturnValue; );
	IsTrianglePartOfNgon 0x4836e hash 99236d95 params:( TriangleID TriangleID;None ReturnValue; );
	IsPolygonValid 0x48366 hash f1cdcf59 params:( PolygonID PolygonID;None ReturnValue; );
	IsPolygonGroupValid 0x4835b hash c7d0d3c6 params:( PolygonGroupID PolygonGroupID;None ReturnValue; );
	IsEmpty 0x48356 hash 87a7cb0 params:( None ReturnValue; );
	IsEdgeValid 0x4834f hash 5d6d0506 params:( EdgeID EdgeID;None ReturnValue; );
	IsEdgeInternalToPolygon 0x48342 hash 55f4b55e params:( EdgeID EdgeID;PolygonID PolygonID;None ReturnValue; );
	IsEdgeInternal 0x4833a hash d5e6d3 params:( EdgeID EdgeID;None ReturnValue; );
	GetVertexVertexInstances 0x4832d hash 6c90e289 params:( VertexID VertexID;OutVertexInstanceIDs OutVertexInstanceIDs; );
	GetVertexPosition 0x48323 hash ecf45cd8 params:( VertexID VertexID;Vector ReturnValue; );
	GetVertexPairEdge 0x41d64 hash a07a7464 params:( VertexID VertexID0;VertexID VertexID1;EdgeID ReturnValue; );
	GetVertexInstanceVertex 0x41d57 hash 838aed16 params:( VertexInstanceID VertexInstanceID;VertexID ReturnValue; );
	GetVertexInstancePairEdge 0x48315 hash bf522819 params:( VertexInstanceID VertexInstanceID0;VertexInstanceID VertexInstanceID1;EdgeID ReturnValue; );
	GetVertexInstanceForTriangleVertex 0x48303 hash 86e21433 params:( TriangleID TriangleID;VertexID VertexID;VertexInstanceID ReturnValue; );
	GetVertexInstanceForPolygonVertex 0x482f1 hash 7a33c445 params:( PolygonID PolygonID;VertexID VertexID;VertexInstanceID ReturnValue; );
	GetVertexInstanceConnectedTriangles 0x482de hash c51b2794 params:( VertexInstanceID VertexInstanceID;OutConnectedTriangleIDs OutConnectedTriangleIDs; );
	GetVertexInstanceConnectedPolygons 0x41d39 hash db8a4ee6 params:( VertexInstanceID VertexInstanceID;OutConnectedPolygonIDs OutConnectedPolygonIDs; );
	GetVertexConnectedTriangles 0x482cf hash d03b8d9f params:( VertexID VertexID;OutConnectedTriangleIDs OutConnectedTriangleIDs; );
	GetVertexConnectedPolygons 0x41cfd hash dbe09f91 params:( VertexID VertexID;OutConnectedPolygonIDs OutConnectedPolygonIDs; );
	GetVertexConnectedEdges 0x41cf0 hash 38095ade params:( VertexID VertexID;OutEdgeIDs OutEdgeIDs; );
	GetVertexAdjacentVertices 0x41cc7 hash 879c7362 params:( VertexID VertexID;OutAdjacentVertexIDs OutAdjacentVertexIDs; );
	GetTriangleVertices 0x482c4 hash fad27380 params:( TriangleID TriangleID;OutVertexIDs OutVertexIDs; );
	GetTriangleVertexInstances 0x482b6 hash 9cbc1281 params:( TriangleID TriangleID;OutVertexInstanceIDs OutVertexInstanceIDs; );
	GetTriangleVertexInstance 0x482a8 hash 715b084e params:( TriangleID TriangleID;None Index;VertexInstanceID ReturnValue; );
	GetTrianglePolygonGroup 0x4829b hash 5153b7b0 params:( TriangleID TriangleID;PolygonGroupID ReturnValue; );
	GetTrianglePolygon 0x48291 hash 50a61323 params:( TriangleID TriangleID;PolygonID ReturnValue; );
	GetTriangleEdges 0x48288 hash fda08563 params:( TriangleID TriangleID;OutEdgeIDs OutEdgeIDs; );
	GetTriangleAdjacentTriangles 0x48279 hash 987f7cbe params:( TriangleID TriangleID;OutTriangleIDs OutTriangleIDs; );
	GetPolygonVertices 0x4826f hash 7aaceb52 params:( PolygonID PolygonID;OutVertexIDs OutVertexIDs; );
	GetPolygonVertexInstances 0x48261 hash eb4b4a13 params:( PolygonID PolygonID;OutVertexInstanceIDs OutVertexInstanceIDs; );
	GetPolygonTriangles 0x48256 hash 5e7e4b6 params:( PolygonID PolygonID;OutTriangleIDs OutTriangleIDs; );
	GetPolygonPolygonGroup 0x4824a hash a669c882 params:( PolygonID PolygonID;PolygonGroupID ReturnValue; );
	GetPolygonPerimeterEdges 0x41c20 hash b5701662 params:( PolygonID PolygonID;OutEdgeIDs OutEdgeIDs; );
	GetPolygonInternalEdges 0x4823d hash 70a4c892 params:( PolygonID PolygonID;OutEdgeIDs OutEdgeIDs; );
	GetPolygonGroupPolygons 0x48230 hash dc3bf395 params:( PolygonGroupID PolygonGroupID;OutPolygonIDs OutPolygonIDs; );
	GetPolygonAdjacentPolygons 0x41bcc hash 4839d0a2 params:( PolygonID PolygonID;OutPolygonIDs OutPolygonIDs; );
	GetNumVertexVertexInstances 0x48221 hash 6d98fdb9 params:( VertexID VertexID;None ReturnValue; );
	GetNumVertexInstanceConnectedTriangles 0x4820d hash e99de4c4 params:( VertexInstanceID VertexInstanceID;None ReturnValue; );
	GetNumVertexInstanceConnectedPolygons 0x481f9 hash 8f122616 params:( VertexInstanceID VertexInstanceID;None ReturnValue; );
	GetNumVertexConnectedTriangles 0x481e9 hash a32c1acf params:( VertexID VertexID;None ReturnValue; );
	GetNumVertexConnectedPolygons 0x481d9 hash 3f5c46c1 params:( VertexID VertexID;None ReturnValue; );
	GetNumVertexConnectedEdges 0x481cb hash 7de2d00e params:( VertexID VertexID;None ReturnValue; );
	GetNumPolygonVertices 0x481bf hash ff4c6282 params:( PolygonID PolygonID;None ReturnValue; );
	GetNumPolygonTriangles 0x481b3 hash 1e7641e6 params:( PolygonID PolygonID;None ReturnValue; );
	GetNumPolygonInternalEdges 0x481a5 hash b67e3dc2 params:( PolygonID PolygonID;None ReturnValue; );
	GetNumPolygonGroupPolygons 0x48197 hash 221568c5 params:( PolygonGroupID PolygonGroupID;None ReturnValue; );
	GetNumEdgeConnectedTriangles 0x48188 hash 37ecdf66 params:( EdgeID EdgeID;None ReturnValue; );
	GetNumEdgeConnectedPolygons 0x48179 hash b83b5478 params:( EdgeID EdgeID;None ReturnValue; );
	GetEdgeVertices 0x41bab hash e7b5945f params:( EdgeID EdgeID;OutVertexIDs OutVertexIDs; );
	GetEdgeVertex 0x41ba3 hash 308a0b8 params:( EdgeID EdgeID;None VertexNumber;VertexID ReturnValue; );
	GetEdgeConnectedTriangles 0x4816b hash 15e15e36 params:( EdgeID EdgeID;OutConnectedTriangleIDs OutConnectedTriangleIDs; );
	GetEdgeConnectedPolygons 0x41b75 hash b7333948 params:( EdgeID EdgeID;OutConnectedPolygonIDs OutConnectedPolygonIDs; );
	Empty 0x48167 hash d1d4c14 params:(  );
	DeleteVertexInstance 0x4815c hash 26db732b params:( VertexInstanceID VertexInstanceID;OrphanedVertices OrphanedVertices; );
	DeleteVertex 0x48155 hash dcf72176 params:( VertexID VertexID; );
	DeleteTriangle 0x4814d hash f125392e params:( TriangleID TriangleID;OrphanedEdges OrphanedEdges;OrphanedVertexInstances OrphanedVertexInstances;OrphanedPolygonGroupsPtr OrphanedPolygonGroupsPtr; );
	DeletePolygonGroup 0x48143 hash 9f11c74d params:( PolygonGroupID PolygonGroupID; );
	DeletePolygon 0x4813b hash c4e7aca0 params:( PolygonID PolygonID;OrphanedEdges OrphanedEdges;OrphanedVertexInstances OrphanedVertexInstances;OrphanedPolygonGroups OrphanedPolygonGroups; );
	DeleteEdge 0x48135 hash 5df6698d params:( EdgeID EdgeID;OrphanedVertices OrphanedVertices; );
	CreateVertexWithID 0x4812b hash ae6ab560 params:( VertexID VertexID; );
	CreateVertexInstanceWithID 0x4811d hash 8decebd5 params:( VertexInstanceID VertexInstanceID;VertexID VertexID; );
	CreateVertexInstance 0x48112 hash 87c8ff2c params:( VertexID VertexID;VertexInstanceID ReturnValue; );
	CreateVertex 0x4810b hash 837d3c77 params:( VertexID ReturnValue; );
	CreateTriangleWithID 0x48100 hash 38eeab58 params:( TriangleID TriangleID;PolygonGroupID PolygonGroupID;VertexInstanceIDs VertexInstanceIDs;NewEdgeIDs NewEdgeIDs; );
	CreateTriangle 0x480f8 hash 519e186f params:( PolygonGroupID PolygonGroupID;VertexInstanceIDs VertexInstanceIDs;NewEdgeIDs NewEdgeIDs;TriangleID ReturnValue; );
	CreatePolygonWithID 0x480ed hash d778702a params:( PolygonID PolygonID;PolygonGroupID PolygonGroupID;VertexInstanceIDs VertexInstanceIDs;NewEdgeIDs NewEdgeIDs; );
	CreatePolygonGroupWithID 0x480e0 hash 5bd32d37 params:( PolygonGroupID PolygonGroupID; );
	CreatePolygonGroup 0x480d6 hash 437a5f0e params:( PolygonGroupID ReturnValue; );
	CreatePolygon 0x480ce hash 3c3127c1 params:( PolygonGroupID PolygonGroupID;VertexInstanceIDs VertexInstanceIDs;NewEdgeIDs NewEdgeIDs;PolygonID ReturnValue; );
	CreateEdgeWithID 0x480c5 hash bc008e77 params:( EdgeID EdgeID;VertexID VertexID0;VertexID VertexID1; );
	CreateEdge 0x480bf hash 9a87d04e params:( VertexID VertexID0;VertexID VertexID1;EdgeID ReturnValue; );
	ComputePolygonTriangulation 0x480b0 hash ff16bd6b params:( PolygonID PolygonID; );
};


instance 1ab71452380
struct ElementID 
{
	// Fields
	int IDValue; // 0x0

};


instance 1ab71452200
struct PolygonGroupID 
{
	// Fields

};


instance 1ab71452080
struct PolygonID 
{
	// Fields

};


instance 1ab71451c00
struct VertexID 
{
	// Fields

};


instance 1ab71451900
struct VertexInstanceID 
{
	// Fields

};


instance 1ab71454780
struct EdgeID 
{
	// Fields

};


instance 1ab71453ac0
struct TriangleID 
{
	// Fields

};


