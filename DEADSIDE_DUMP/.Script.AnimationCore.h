instance 1ab5e0ff4c0
class AnimationDataSourceRegistry public : Object
{
	// Fields
	MapProperty DataSources; // 0x28 property 0x1ab71165380 hash 0xadd0fb88

};


instance 1ab7145f7c0
struct CCDIKChainLink 
{
	// Fields

};


instance 1ab71511840
struct Axis 
{
	// Fields
	Vector Axis; // 0x0
	bool bInLocalSpace; // 0xc

};


instance 1ab71511780
struct ConstraintData 
{
	// Fields
	ConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	Transform Offset; // 0x20
	Transform CurrentTransform; // 0x50

};


instance 1ab715116c0
struct ConstraintDescriptor 
{
	// Fields
	EConstraintType Type; // 0x0

};


instance 1ab71511600
struct ConstraintDescriptionEx 
{
	// Fields
	FilterOptionPerAxis AxesFilterOption; // 0x8

};


instance 1ab71511540
struct FilterOptionPerAxis 
{
	// Fields
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2

};


instance 1ab71511480
struct AimConstraintDescription 
{
	// Fields
	Axis LookAt_Axis; // 0x10
	Axis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	Vector LookUpTarget; // 0x34

};


instance 1ab715113c0
struct TransformConstraintDescription 
{
	// Fields
	ETransformConstraintType TransformType; // 0x10

};


instance 1ab71511300
struct TransformConstraint 
{
	// Fields
	ConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24

};


instance 1ab71511240
struct ConstraintDescription 
{
	// Fields
	bool bTranslation; // 0x0
	bool bRotation; // 0x1
	bool bScale; // 0x2
	bool bParent; // 0x3
	FilterOptionPerAxis TranslationAxes; // 0x4
	FilterOptionPerAxis RotationAxes; // 0x7
	FilterOptionPerAxis ScaleAxes; // 0xa

};


instance 1ab71511180
struct ConstraintOffset 
{
	// Fields
	Vector Translation; // 0x0
	Quat Rotation; // 0x10
	Vector Scale; // 0x20
	Transform Parent; // 0x30

};


instance 1ab715110c0
struct TransformFilter 
{
	// Fields
	FilterOptionPerAxis TranslationFilter; // 0x0
	FilterOptionPerAxis RotationFilter; // 0x3
	FilterOptionPerAxis ScaleFilter; // 0x6

};


instance 1ab71511000
struct EulerTransform 
{
	// Fields
	Vector Location; // 0x0
	Rotator Rotation; // 0xc
	Vector Scale; // 0x18

};


instance 1ab71510f40
struct FABRIKChainLink 
{
	// Fields

};


instance 1ab71510e80
struct NodeChain 
{
	// Fields
	TArray Nodes; // 0x0

};


instance 1ab71510dc0
struct NodeHierarchyWithUserData 
{
	// Fields
	NodeHierarchyData Hierarchy; // 0x8

};


instance 1ab71510d00
struct NodeHierarchyData 
{
	// Fields
	TArray Nodes; // 0x0
	TArray Transforms; // 0x10
	MapProperty NodeNameToIndexMapping; // 0x20 property 0x1ab71164520 hash 0xadd0fb88

};


instance 1ab71510c40
struct NodeObject 
{
	// Fields
	FName Name; // 0x0
	FName ParentName; // 0x8

};


