instance 1ab5e09b800
class KismetProceduralMeshLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SliceProceduralMesh 0x42353 hash 47f45313 params:( ProceduralMeshComponent InProcMesh;Vector PlanePosition;Vector PlaneNormal;None bCreateOtherHalf;ProceduralMeshComponent OutOtherHalfProcMesh;UnderlyingType CapOption;MaterialInterface CapMaterial; );
	GetSectionFromStaticMesh 0x42346 hash 81a321a3 params:( StaticMesh InMesh;None LODIndex;None SectionIndex;Vertices Vertices;Triangles Triangles;Normals Normals;UVs UVs;Tangents Tangents; );
	GetSectionFromProceduralMesh 0x42337 hash 8b418f6c params:( ProceduralMeshComponent InProcMesh;None SectionIndex;Vertices Vertices;Triangles Triangles;Normals Normals;UVs UVs;Tangents Tangents; );
	GenerateBoxMesh 0x4232e hash 7ae2ebe6 params:( Vector BoxRadius;Vertices Vertices;Triangles Triangles;Normals Normals;UVs UVs;Tangents Tangents; );
	CreateGridMeshWelded 0x42323 hash b4dafcc1 params:( None NumX;None NumY;Triangles Triangles;Vertices Vertices;UVs UVs;None GridSpacing; );
	CreateGridMeshTriangles 0x42316 hash fdcdf7f5 params:( None NumX;None NumY;None bWinding;Triangles Triangles; );
	CreateGridMeshSplit 0x4230b hash 52cc0b98 params:( None NumX;None NumY;Triangles Triangles;Vertices Vertices;UVs UVs;UV1s UV1s;None GridSpacing; );
	CopyProceduralMeshFromStaticMeshComponent 0x422f5 hash cc95775a params:( StaticMeshComponent StaticMeshComponent;None LODIndex;ProceduralMeshComponent ProcMeshComponent;None bCreateCollision; );
	ConvertQuadToTriangles 0x422e9 hash ee3800fd params:( Triangles Triangles;None Vert0;None Vert1;None Vert2;None Vert3; );
	CalculateTangentsForMesh 0x422dc hash c2b7418b params:( Vertices Vertices;Triangles Triangles;UVs UVs;Normals Normals;Tangents Tangents; );
};


instance 1ab5e09b5c0
class ProceduralMeshComponent public : MeshComponent
{
	// Fields
	bool bUseComplexAsSimpleCollision; // 0x408
	bool bUseAsyncCooking; // 0x409
	BodySetup* ProcMeshBodySetup; // 0x410
	TArray ProcMeshSections; // 0x418
	TArray CollisionConvexElems; // 0x428
	BoxSphereBounds LocalBounds; // 0x438
	TArray AsyncBodySetupQueue; // 0x458

	// Functions
	UpdateMeshSection_LinearColor 0x423cf hash f6a80023 params:( None SectionIndex;Vertices Vertices;Normals Normals;UV0 UV0;UV1 UV1;UV2 UV2;UV3 UV3;VertexColors VertexColors;Tangents Tangents; );
	UpdateMeshSection 0x423c5 hash fed37a4a params:( None SectionIndex;Vertices Vertices;Normals Normals;UV0 UV0;VertexColors VertexColors;Tangents Tangents; );
	SetMeshSectionVisible 0x423b9 hash 1cff9001 params:( None SectionIndex;None bNewVisibility; );
	IsMeshSectionVisible 0x423ae hash 16f7aeb1 params:( None SectionIndex;None ReturnValue; );
	GetNumSections 0x423a6 hash f579f8fd params:( None ReturnValue; );
	CreateMeshSection_LinearColor 0x42396 hash 1628714 params:( None SectionIndex;Vertices Vertices;Triangles Triangles;Normals Normals;UV0 UV0;UV1 UV1;UV2 UV2;UV3 UV3;VertexColors VertexColors;Tangents Tangents;None bCreateCollision; );
	CreateMeshSection 0x4238c hash 67334fbb params:( None SectionIndex;Vertices Vertices;Triangles Triangles;Normals Normals;UV0 UV0;VertexColors VertexColors;Tangents Tangents;None bCreateCollision; );
	ClearMeshSection 0x42383 hash fd3e44ae params:( None SectionIndex; );
	ClearCollisionConvexMeshes 0x42375 hash 2aeaa730 params:(  );
	ClearAllMeshSections 0x4236a hash 4fce3ba params:(  );
	AddCollisionConvexMesh 0x4235e hash a460d7ba params:( ConvexVerts ConvexVerts; );
};


instance 1ab71455800
struct ProcMeshSection 
{
	// Fields
	TArray ProcVertexBuffer; // 0x0
	TArray ProcIndexBuffer; // 0x10
	Box SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d

};


instance 1ab71455740
struct ProcMeshVertex 
{
	// Fields
	Vector Position; // 0x0
	Vector Normal; // 0xc
	ProcMeshTangent Tangent; // 0x18
	Color Color; // 0x28
	Vector2D UV0; // 0x2c
	Vector2D UV1; // 0x34
	Vector2D UV2; // 0x3c
	Vector2D UV3; // 0x44

};


instance 1ab71455680
struct ProcMeshTangent 
{
	// Fields
	Vector TangentX; // 0x0
	bool bFlipTangentY; // 0xc

};


