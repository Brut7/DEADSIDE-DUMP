instance 1ab5e09d780
class EditableMeshAdapter public : Object
{
	// Fields

};


instance 1ab5e09d9c0
class EditableGeometryCollectionAdapter public : EditableMeshAdapter
{
	// Fields
	GeometryCollection* GeometryCollection; // 0x28
	GeometryCollection* OriginalGeometryCollection; // 0x30
	int GeometryCollectionLODIndex; // 0x38

};


instance 1ab5e09d540
class EditableMesh public : Object
{
	// Fields
	TArray Adapters; // 0x3b8
	int TextureCoordinateCount; // 0x3d0
	int PendingCompactCounter; // 0x51c
	int SubdivisionCount; // 0x520

	// Functions
	WeldVertices 0x41fb4 hash 9d2e55b6 params:( VertexIDs VertexIDs;VertexID OutNewVertexID; );
	TryToRemoveVertex 0x41faa hash b97d6b53 params:( VertexID VertexID;None bOutWasVertexRemoved;EdgeID OutNewEdgeID; );
	TryToRemovePolygonEdge 0x41f9e hash b485d2 params:( EdgeID EdgeID;None bOutWasEdgeRemoved;PolygonID OutNewPolygonID; );
	TriangulatePolygons 0x41f93 hash 9505bde0 params:( PolygonIDs PolygonIDs;OutNewTrianglePolygons OutNewTrianglePolygons; );
	TessellatePolygons 0x41f89 hash 51bc25d6 params:( PolygonIDs PolygonIDs;UnderlyingType TriangleTessellationMode;OutNewPolygonIDs OutNewPolygonIDs; );
	StartModification 0x41f7f hash 5e293b29 params:( UnderlyingType MeshModificationType;UnderlyingType MeshTopologyChange; );
	SplitPolygons 0x41f77 hash 80e16f8c params:( PolygonsToSplit PolygonsToSplit;OutNewEdgeIDs OutNewEdgeIDs; );
	SplitPolygonalMesh 0x41f6d hash 46827833 params:( Plane InPlane;PolygonIDs1 PolygonIDs1;PolygonIDs2 PolygonIDs2;BoundaryIDs BoundaryIDs; );
	SplitEdge 0x41f67 hash 8a1c4386 params:( EdgeID EdgeID;Splits Splits;OutNewVertexIDs OutNewVertexIDs; );
	SetVerticesCornerSharpness 0x41f59 hash 951b5b56 params:( VertexIDs VertexIDs;VerticesNewCornerSharpness VerticesNewCornerSharpness; );
	SetVerticesAttributes 0x41f4d hash 4c0129d params:( AttributesForVertices AttributesForVertices; );
	SetVertexInstancesAttributes 0x41f3e hash b2ecbe1e params:( AttributesForVertexInstances AttributesForVertexInstances; );
	SetTextureCoordinateCount 0x41f30 hash 28cf5553 params:( None NumTexCoords; );
	SetSubdivisionCount 0x41f25 hash 1e49a2a9 params:( None NewSubdivisionCount; );
	SetPolygonsVertexAttributes 0x41f16 hash 4f766031 params:( VertexAttributesForPolygons VertexAttributesForPolygons; );
	SetEdgesHardnessAutomatically 0x41f06 hash 82a61c8a params:( EdgeIDs EdgeIDs;None MaxDotProductForSoftEdge; );
	SetEdgesHardness 0x41efd hash bdecca71 params:( EdgeIDs EdgeIDs;EdgesNewIsHard EdgesNewIsHard; );
	SetEdgesCreaseSharpness 0x41ef0 hash dcf8c4e3 params:( EdgeIDs EdgeIDs;EdgesNewCreaseSharpness EdgesNewCreaseSharpness; );
	SetEdgesAttributes 0x41ee6 hash 778fa800 params:( AttributesForEdges AttributesForEdges; );
	SetAllowUndo 0x41edf hash 6e5df166 params:( None bInAllowUndo; );
	SetAllowSpatialDatabase 0x41ed2 hash ce2f8113 params:( None bInAllowSpatialDatabase; );
	SetAllowCompact 0x41ec9 hash cafe3577 params:( None bInAllowCompact; );
	SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane 0x41eaa hash 130c3f14 params:( Plane InPlane;OutPolygons OutPolygons; );
	SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment 0x41e88 hash c881163f params:( Vector LineSegmentStart;Vector LineSegmentEnd;OutPolygons OutPolygons; );
	SearchSpatialDatabaseForPolygonsInVolume 0x41e73 hash cf0dd82f params:( Planes Planes;OutPolygons OutPolygons; );
	RevertInstance 0x41e6b hash a146cd72 params:( EditableMesh ReturnValue; );
	Revert 0x41e67 hash ce8c24bd params:(  );
	RebuildRenderMesh 0x41e5d hash fee55579 params:(  );
	QuadrangulateMesh 0x41e53 hash 8198b1a0 params:( OutNewPolygonIDs OutNewPolygonIDs; );
	PropagateInstanceChanges 0x41e46 hash f02fa456 params:(  );
	MoveVertices 0x41e3f hash 8631e0c1 params:( VerticesToMove VerticesToMove; );
	MakeVertexID 0x41e38 hash ea9dece params:( None VertexIndex;VertexID ReturnValue; );
	MakePolygonID 0x41e30 hash a179a1d8 params:( None PolygonIndex;PolygonID ReturnValue; );
	MakePolygonGroupID 0x41e26 hash d4f40aa5 params:( None PolygonGroupIndex;PolygonGroupID ReturnValue; );
	MakeEdgeID 0x41e20 hash 568001e5 params:( None EdgeIndex;EdgeID ReturnValue; );
	IsValidVertex 0x41e18 hash 4ecd660f params:( VertexID VertexID;None ReturnValue; );
	IsValidPolygonGroup 0x41e0d hash 13195aa6 params:( PolygonGroupID PolygonGroupID;None ReturnValue; );
	IsValidPolygon 0x41e05 hash 71868459 params:( PolygonID PolygonID;None ReturnValue; );
	IsValidEdge 0x41dfe hash e010b3e6 params:( EdgeID EdgeID;None ReturnValue; );
	IsUndoAllowed 0x41df6 hash 9139c73f params:( None ReturnValue; );
	IsSpatialDatabaseAllowed 0x41de9 hash e3a4d5ac params:( None ReturnValue; );
	IsPreviewingSubdivisions 0x41ddc hash 2921e0a3 params:( None ReturnValue; );
	IsOrphanedVertex 0x41dd3 hash 78822e10 params:( VertexID VertexID;None ReturnValue; );
	IsCompactAllowed 0x41dca hash df88d090 params:( None ReturnValue; );
	IsCommittedAsInstance 0x41dbe hash 822fc5d0 params:( None ReturnValue; );
	IsCommitted 0x41db7 hash 7d315887 params:( None ReturnValue; );
	IsBeingModified 0x41dae hash 3bbadd67 params:( None ReturnValue; );
	InvalidVertexID 0x41da5 hash fb5f3f77 params:( VertexID ReturnValue; );
	InvalidPolygonID 0x41d9c hash 24db17a1 params:( PolygonID ReturnValue; );
	InvalidPolygonGroupID 0x41d90 hash 5d63860e params:( PolygonGroupID ReturnValue; );
	InvalidEdgeID 0x41d88 hash dde3244e params:( EdgeID ReturnValue; );
	InsetPolygons 0x41d80 hash 9aa30603 params:( PolygonIDs PolygonIDs;None InsetFixedDistance;None InsetProgressTowardCenter;UnderlyingType Mode;OutNewCenterPolygonIDs OutNewCenterPolygonIDs;OutNewSidePolygonIDs OutNewSidePolygonIDs; );
	InsertEdgeLoop 0x41d78 hash f39b7be9 params:( EdgeID EdgeID;Splits Splits;OutNewEdgeIDs OutNewEdgeIDs; );
	InitializeAdapters 0x41d6e hash efd5682b params:(  );
	GetVertexPairEdge 0x41d64 hash a07a7464 params:( VertexID VertexID;VertexID NextVertexID;None bOutEdgeWindingIsReversed;EdgeID ReturnValue; );
	GetVertexInstanceVertex 0x41d57 hash 838aed16 params:( VertexInstanceID VertexInstanceID;VertexID ReturnValue; );
	GetVertexInstanceCount 0x41d4b hash d41e8721 params:( None ReturnValue; );
	GetVertexInstanceConnectedPolygons 0x41d39 hash db8a4ee6 params:( VertexInstanceID VertexInstanceID;OutConnectedPolygonIDs OutConnectedPolygonIDs; );
	GetVertexInstanceConnectedPolygonCount 0x41d25 hash 211d981c params:( VertexInstanceID VertexInstanceID;None ReturnValue; );
	GetVertexInstanceConnectedPolygon 0x41d13 hash 2d70cc13 params:( VertexInstanceID VertexInstanceID;None ConnectedPolygonNumber;PolygonID ReturnValue; );
	GetVertexCount 0x41d0b hash c82a3f4c params:( None ReturnValue; );
	GetVertexConnectedPolygons 0x41cfd hash dbe09f91 params:( VertexID VertexID;OutConnectedPolygonIDs OutConnectedPolygonIDs; );
	GetVertexConnectedEdges 0x41cf0 hash 38095ade params:( VertexID VertexID;OutConnectedEdgeIDs OutConnectedEdgeIDs; );
	GetVertexConnectedEdgeCount 0x41ce1 hash 7db1e014 params:( VertexID VertexID;None ReturnValue; );
	GetVertexConnectedEdge 0x41cd5 hash 3fc2390b params:( VertexID VertexID;None ConnectedEdgeNumber;EdgeID ReturnValue; );
	GetVertexAdjacentVertices 0x41cc7 hash 879c7362 params:( VertexID VertexID;OutAdjacentVertexIDs OutAdjacentVertexIDs; );
	GetTextureCoordinateCount 0x41cb9 hash 17ab7147 params:( None ReturnValue; );
	GetSubdivisionLimitData 0x41cac hash 53399e6d params:( SubdivisionLimitData ReturnValue; );
	GetSubdivisionCount 0x41ca1 hash d40cd79d params:( None ReturnValue; );
	GetPolygonTriangulatedTriangleCount 0x41c8e hash 80185c90 params:( PolygonID PolygonID;None ReturnValue; );
	GetPolygonTriangulatedTriangle 0x41c7e hash d34df807 params:( PolygonID PolygonID;None PolygonTriangleNumber;TriangleID ReturnValue; );
	GetPolygonPerimeterVertices 0x41c6f hash 23c3d81f params:( PolygonID PolygonID;OutPolygonPerimeterVertexIDs OutPolygonPerimeterVertexIDs; );
	GetPolygonPerimeterVertexInstances 0x41c5d hash a0982e40 params:( PolygonID PolygonID;OutPolygonPerimeterVertexInstanceIDs OutPolygonPerimeterVertexInstanceIDs; );
	GetPolygonPerimeterVertexInstance 0x41c4b hash 5a33282d params:( PolygonID PolygonID;None PolygonVertexNumber;VertexInstanceID ReturnValue; );
	GetPolygonPerimeterVertexCount 0x41c3b hash a211c7a1 params:( PolygonID PolygonID;None ReturnValue; );
	GetPolygonPerimeterVertex 0x41c2d hash 8b32f478 params:( PolygonID PolygonID;None PolygonVertexNumber;VertexID ReturnValue; );
	GetPolygonPerimeterEdges 0x41c20 hash b5701662 params:( PolygonID PolygonID;OutPolygonPerimeterEdgeIDs OutPolygonPerimeterEdgeIDs; );
	GetPolygonPerimeterEdgeCount 0x41c11 hash 7f52bd98 params:( PolygonID PolygonID;None ReturnValue; );
	GetPolygonPerimeterEdge 0x41c04 hash fdbd940f params:( PolygonID PolygonID;None PerimeterEdgeNumber;None bOutEdgeWindingIsReversedForPolygon;EdgeID ReturnValue; );
	GetPolygonInGroup 0x41bfa hash 3c79c851 params:( PolygonGroupID PolygonGroupID;None PolygonNumber;PolygonID ReturnValue; );
	GetPolygonGroupCount 0x41bef hash 1d93a143 params:( None ReturnValue; );
	GetPolygonCountInGroup 0x41be3 hash df47147a params:( PolygonGroupID PolygonGroupID;None ReturnValue; );
	GetPolygonCount 0x41bda hash 9071d256 params:( None ReturnValue; );
	GetPolygonAdjacentPolygons 0x41bcc hash 4839d0a2 params:( PolygonID PolygonID;OutAdjacentPolygons OutAdjacentPolygons; );
	GetGroupForPolygon 0x41bc2 hash 976cdca1 params:( PolygonID PolygonID;PolygonGroupID ReturnValue; );
	GetFirstValidPolygonGroup 0x41bb4 hash 2dda44d2 params:( PolygonGroupID ReturnValue; );
	GetEdgeVertices 0x41bab hash e7b5945f params:( EdgeID EdgeID;VertexID OutEdgeVertexID0;VertexID OutEdgeVertexID1; );
	GetEdgeVertex 0x41ba3 hash 308a0b8 params:( EdgeID EdgeID;None EdgeVertexNumber;VertexID ReturnValue; );
	GetEdgeThatConnectsVertices 0x41b94 hash 6a5d738d params:( VertexID VertexID0;VertexID VertexID1;EdgeID ReturnValue; );
	GetEdgeLoopElements 0x41b89 hash 207988f1 params:( EdgeID EdgeID;EdgeLoopIDs EdgeLoopIDs; );
	GetEdgeCount 0x41b82 hash f7034e83 params:( None ReturnValue; );
	GetEdgeConnectedPolygons 0x41b75 hash b7333948 params:( EdgeID EdgeID;OutConnectedPolygonIDs OutConnectedPolygonIDs; );
	GetEdgeConnectedPolygonCount 0x41b66 hash 2218e37e params:( EdgeID EdgeID;None ReturnValue; );
	GetEdgeConnectedPolygon 0x41b59 hash 2494f235 params:( EdgeID EdgeID;None ConnectedPolygonNumber;PolygonID ReturnValue; );
	GeneratePolygonTangentsAndNormals 0x41b47 hash 1654f3cb params:( PolygonIDs PolygonIDs; );
	FlipPolygons 0x41b40 hash d6d9b42b params:( PolygonIDs PolygonIDs; );
	FindPolygonPerimeterVertexNumberForVertex 0x41b2a hash bf93c5a7 params:( PolygonID PolygonID;VertexID VertexID;None ReturnValue; );
	FindPolygonPerimeterEdgeNumberForVertices 0x41b14 hash bd0fed45 params:( PolygonID PolygonID;VertexID EdgeVertexID0;VertexID EdgeVertexID1;None ReturnValue; );
	FindPolygonLoop 0x41b0b hash 6a36e88 params:( EdgeID EdgeID;OutEdgeLoopEdgeIDs OutEdgeLoopEdgeIDs;OutFlippedEdgeIDs OutFlippedEdgeIDs;OutReversedEdgeIDPathToTake OutReversedEdgeIDPathToTake;OutPolygonIDsToSplit OutPolygonIDsToSplit; );
	ExtrudePolygons 0x41b02 hash db50c441 params:( Polygons Polygons;None ExtrudeDistance;None bKeepNeighborsTogether;OutNewExtrudedFrontPolygons OutNewExtrudedFrontPolygons; );
	ExtendVertices 0x41afa hash 11743e12 params:( VertexIDs VertexIDs;None bOnlyExtendClosestEdge;Vector ReferencePosition;OutNewExtendedVertexIDs OutNewExtendedVertexIDs; );
	ExtendEdges 0x41af3 hash c29a0935 params:( EdgeIDs EdgeIDs;None bWeldNeighbors;OutNewExtendedEdgeIDs OutNewExtendedEdgeIDs; );
	EndModification 0x41aea hash 9c981df2 params:( None bFromUndo; );
	DeleteVertexInstances 0x41ade hash 249d8fe params:( VertexInstanceIDsToDelete VertexInstanceIDsToDelete;None bDeleteOrphanedVertices; );
	DeleteVertexAndConnectedEdgesAndPolygons 0x41ac9 hash 45fcd932 params:( VertexID VertexID;None bDeleteOrphanedEdges;None bDeleteOrphanedVertices;None bDeleteOrphanedVertexInstances;None bDeleteEmptyPolygonGroups; );
	DeletePolygons 0x41ac1 hash 61dd4113 params:( PolygonIDsToDelete PolygonIDsToDelete;None bDeleteOrphanedEdges;None bDeleteOrphanedVertices;None bDeleteOrphanedVertexInstances;None bDeleteEmptyPolygonGroups; );
	DeletePolygonGroups 0x41ab6 hash 814ab160 params:( PolygonGroupIDs PolygonGroupIDs; );
	DeleteOrphanVertices 0x41aab hash 98e22b85 params:( VertexIDsToDelete VertexIDsToDelete; );
	DeleteEdges 0x41aa4 hash 1cc39ba0 params:( EdgeIDsToDelete EdgeIDsToDelete;None bDeleteOrphanedVertices; );
	DeleteEdgeAndConnectedPolygons 0x41a94 hash b7d3c96e params:( EdgeID EdgeID;None bDeleteOrphanedEdges;None bDeleteOrphanedVertices;None bDeleteOrphanedVertexInstances;None bDeleteEmptyPolygonGroups; );
	CreateVertices 0x41a8c hash 57c01bde params:( VerticesToCreate VerticesToCreate;OutNewVertexIDs OutNewVertexIDs; );
	CreateVertexInstances 0x41a80 hash 80e8e51f params:( VertexInstancesToCreate VertexInstancesToCreate;OutNewVertexInstanceIDs OutNewVertexInstanceIDs; );
	CreatePolygons 0x41a78 hash c2562054 params:( PolygonsToCreate PolygonsToCreate;OutNewPolygonIDs OutNewPolygonIDs;OutNewEdgeIDs OutNewEdgeIDs; );
	CreatePolygonGroups 0x41a6d hash b2c64141 params:( PolygonGroupsToCreate PolygonGroupsToCreate;OutNewPolygonGroupIDs OutNewPolygonGroupIDs; );
	CreateMissingPolygonPerimeterEdges 0x41a5b hash b3df7010 params:( PolygonID PolygonID;OutNewEdgeIDs OutNewEdgeIDs; );
	CreateEmptyVertexRange 0x41a4f hash 6f4926b3 params:( None NumVerticesToCreate;OutNewVertexIDs OutNewVertexIDs; );
	CreateEdges 0x41a48 hash eb81da81 params:( EdgesToCreate EdgesToCreate;OutNewEdgeIDs OutNewEdgeIDs; );
	ComputePolygonsSharedEdges 0x41a3a hash de63351c params:( PolygonIDs PolygonIDs;OutSharedEdgeIDs OutSharedEdgeIDs; );
	ComputePolygonPlane 0x41a2f hash b796a7da params:( PolygonID PolygonID;Plane ReturnValue; );
	ComputePolygonNormal 0x41a24 hash a600e973 params:( PolygonID PolygonID;Vector ReturnValue; );
	ComputePolygonCenter 0x41a19 hash 8ba1224b params:( PolygonID PolygonID;Vector ReturnValue; );
	ComputeBoundingBoxAndSphere 0x41a0a hash c5a2e7bb params:( BoxSphereBounds ReturnValue; );
	ComputeBoundingBox 0x41a00 hash 4a8d3881 params:( Box ReturnValue; );
	CommitInstance 0x419f8 hash 90321383 params:( PrimitiveComponent ComponentToInstanceTo;EditableMesh ReturnValue; );
	Commit 0x419f4 hash ac3ee9ce params:(  );
	ChangePolygonsVertexInstances 0x419e4 hash caa17c4c params:( VertexInstancesForPolygons VertexInstancesForPolygons; );
	BevelPolygons 0x419dc hash a2ae12ce params:( PolygonIDs PolygonIDs;None BevelFixedDistance;None BevelProgressTowardCenter;OutNewCenterPolygonIDs OutNewCenterPolygonIDs;OutNewSidePolygonIDs OutNewSidePolygonIDs; );
	AssignPolygonsToPolygonGroups 0x419cc hash 527ffdd0 params:( PolygonGroupForPolygons PolygonGroupForPolygons;None bDeleteOrphanedPolygonGroups; );
	AnyChangesToUndo 0x419c3 hash 632d2a3f params:( None ReturnValue; );
};


instance 1ab5e09d300
class EditableMeshFactory public : Object
{
	// Fields

	// Functions
	MakeEditableMesh 0x41fc6 hash 16b0b38a params:( PrimitiveComponent PrimitiveComponent;None LODIndex;EditableMesh ReturnValue; );
};


instance 1ab5e09d0c0
class EditableStaticMeshAdapter public : EditableMeshAdapter
{
	// Fields
	StaticMesh* StaticMesh; // 0x28
	StaticMesh* OriginalStaticMesh; // 0x30
	int StaticMeshLODIndex; // 0x38

};


instance 1ab71452500
struct AdaptorPolygon2Group 
{
	// Fields
	int RenderingSectionIndex; // 0x0
	int MaterialIndex; // 0x4
	int MaxTriangles; // 0x8

};


instance 1ab71452440
struct AdaptorPolygon 
{
	// Fields
	PolygonGroupID PolygonGroupID; // 0x0
	TArray TriangulatedPolygonTriangleIndices; // 0x8

};


instance 1ab714522c0
struct AdaptorTriangleID 
{
	// Fields

};


instance 1ab71452140
struct PolygonGroupForPolygon 
{
	// Fields
	PolygonID PolygonID; // 0x0
	PolygonGroupID PolygonGroupID; // 0x4

};


instance 1ab71451fc0
struct PolygonGroupToCreate 
{
	// Fields
	MeshElementAttributeList PolygonGroupAttributes; // 0x0
	PolygonGroupID OriginalPolygonGroupID; // 0x10

};


instance 1ab71451f00
struct MeshElementAttributeList 
{
	// Fields
	TArray Attributes; // 0x0

};


instance 1ab71451e40
struct MeshElementAttributeData 
{
	// Fields
	FName AttributeName; // 0x0
	int AttributeIndex; // 0x8
	MeshElementAttributeValue AttributeValue; // 0x10

};


instance 1ab71451d80
struct MeshElementAttributeValue 
{
	// Fields

};


instance 1ab71451cc0
struct VertexToMove 
{
	// Fields
	VertexID VertexID; // 0x0
	Vector NewVertexPosition; // 0x4

};


instance 1ab71451b40
struct ChangeVertexInstancesForPolygon 
{
	// Fields
	PolygonID PolygonID; // 0x0
	TArray PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray VertexIndicesAndInstanceIDsForEachHole; // 0x18

};


instance 1ab71451a80
struct VertexInstancesForPolygonHole 
{
	// Fields
	TArray VertexIndicesAndInstanceIDs; // 0x0

};


instance 1ab714519c0
struct VertexIndexAndInstanceID 
{
	// Fields
	int ContourIndex; // 0x0
	VertexInstanceID VertexInstanceID; // 0x4

};


instance 1ab714549c0
struct VertexAttributesForPolygon 
{
	// Fields
	PolygonID PolygonID; // 0x0
	TArray PerimeterVertexAttributeLists; // 0x8
	TArray VertexAttributeListsForEachHole; // 0x18

};


instance 1ab71454900
struct VertexAttributesForPolygonHole 
{
	// Fields
	TArray VertexAttributeList; // 0x0

};


instance 1ab71454840
struct AttributesForEdge 
{
	// Fields
	EdgeID EdgeID; // 0x0
	MeshElementAttributeList EdgeAttributes; // 0x8

};


instance 1ab714546c0
struct AttributesForVertexInstance 
{
	// Fields
	VertexInstanceID VertexInstanceID; // 0x0
	MeshElementAttributeList VertexInstanceAttributes; // 0x8

};


instance 1ab71454600
struct AttributesForVertex 
{
	// Fields
	VertexID VertexID; // 0x0
	MeshElementAttributeList VertexAttributes; // 0x8

};


instance 1ab71454540
struct PolygonToSplit 
{
	// Fields
	PolygonID PolygonID; // 0x0
	TArray VertexPairsToSplitAt; // 0x8

};


instance 1ab71454480
struct VertexPair 
{
	// Fields
	VertexID VertexID0; // 0x0
	VertexID VertexID1; // 0x4

};


instance 1ab714543c0
struct PolygonToCreate 
{
	// Fields
	PolygonGroupID PolygonGroupID; // 0x0
	TArray PerimeterVertices; // 0x8
	PolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c

};


instance 1ab71454300
struct VertexAndAttributes 
{
	// Fields
	VertexInstanceID VertexInstanceID; // 0x0
	VertexID VertexID; // 0x4
	MeshElementAttributeList PolygonVertexAttributes; // 0x8

};


instance 1ab71454240
struct EdgeToCreate 
{
	// Fields
	VertexID VertexID0; // 0x0
	VertexID VertexID1; // 0x4
	MeshElementAttributeList EdgeAttributes; // 0x8
	EdgeID OriginalEdgeID; // 0x18

};


instance 1ab71454180
struct VertexInstanceToCreate 
{
	// Fields
	VertexID VertexID; // 0x0
	MeshElementAttributeList VertexInstanceAttributes; // 0x8
	VertexInstanceID OriginalVertexInstanceID; // 0x18

};


instance 1ab714540c0
struct VertexToCreate 
{
	// Fields
	MeshElementAttributeList VertexAttributes; // 0x0
	VertexID OriginalVertexID; // 0x10

};


instance 1ab71454000
struct SubdivisionLimitData 
{
	// Fields
	TArray VertexPositions; // 0x0
	TArray Sections; // 0x10
	TArray SubdividedWireEdges; // 0x20

};


instance 1ab71453f40
struct SubdividedWireEdge 
{
	// Fields
	int EdgeVertex0PositionIndex; // 0x0
	int EdgeVertex1PositionIndex; // 0x4

};


instance 1ab71453e80
struct SubdivisionLimitSection 
{
	// Fields
	TArray SubdividedQuads; // 0x0

};


instance 1ab71453dc0
struct SubdividedQuad 
{
	// Fields
	SubdividedQuadVertex QuadVertex0; // 0x0
	SubdividedQuadVertex QuadVertex1; // 0x34
	SubdividedQuadVertex QuadVertex2; // 0x68
	SubdividedQuadVertex QuadVertex3; // 0x9c

};


instance 1ab71453d00
struct SubdividedQuadVertex 
{
	// Fields
	int VertexPositionIndex; // 0x0
	Vector2D TextureCoordinate0; // 0x4
	Vector2D TextureCoordinate1; // 0xc
	Color VertexColor; // 0x14
	Vector VertexNormal; // 0x18
	Vector VertexTangent; // 0x24
	float VertexBinormalSign; // 0x30

};


instance 1ab71453c40
struct RenderingPolygonGroup 
{
	// Fields
	int RenderingSectionIndex; // 0x0
	int MaterialIndex; // 0x4
	int MaxTriangles; // 0x8

};


instance 1ab71453b80
struct RenderingPolygon 
{
	// Fields
	PolygonGroupID PolygonGroupID; // 0x0
	TArray TriangulatedPolygonTriangleIndices; // 0x8

};


