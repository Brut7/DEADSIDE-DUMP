instance 1ab5e213c40
class FieldSystemActor public : Actor
{
	// Fields
	FieldSystemComponent* FieldSystemComponent; // 0x218

};


instance 1ab5e213a00
class FieldSystem public : Object
{
	// Fields

};


instance 1ab5e2137c0
class FieldSystemComponent public : PrimitiveComponent
{
	// Fields
	FieldSystem* FieldSystem; // 0x3d8
	TArray SupportedSolvers; // 0x3f0

	// Functions
	ResetFieldSystem 0x51d3e hash cb56e311 params:(  );
	ApplyUniformVectorFalloffForce 0x51d2e hash 265c3e67 params:( None Enabled;Vector Position;Vector Direction;None Radius;None Magnitude; );
	ApplyStrainField 0x51d25 hash e05f6360 params:( None Enabled;Vector Position;None Radius;None Magnitude;None Iterations; );
	ApplyStayDynamicField 0x51d19 hash 6794cad5 params:( None Enabled;Vector Position;None Radius; );
	ApplyRadialVectorFalloffForce 0x51d09 hash 7527e414 params:( None Enabled;Vector Position;None Radius;None Magnitude; );
	ApplyRadialForce 0x51d00 hash a501aac7 params:( None Enabled;Vector Position;None Magnitude; );
	ApplyPhysicsField 0x51cf6 hash 7de365b2 params:( None Enabled;EFieldPhysicsType Target;FieldSystemMetaData MetaData;FieldNodeBase Field; );
	ApplyLinearForce 0x51ced hash 8efdfe95 params:( None Enabled;Vector Direction;None Magnitude; );
	AddFieldCommand 0x51ce4 hash 80cea3f1 params:( None Enabled;EFieldPhysicsType Target;FieldSystemMetaData MetaData;FieldNodeBase Field; );
};


instance 1ab5e213580
class FieldSystemMetaData public : ActorComponent
{
	// Fields

};


instance 1ab5e213340
class FieldSystemMetaDataIteration public : FieldSystemMetaData
{
	// Fields
	int Iterations; // 0xb0

	// Functions
	SetMetaDataIteration 0x51d61 hash 37734761 params:( None Iterations;FieldSystemMetaDataIteration ReturnValue; );
};


instance 1ab5e213100
class FieldSystemMetaDataProcessingResolution public : FieldSystemMetaData
{
	// Fields
	BYTE ResolutionType; // 0xb0

	// Functions
	SetMetaDataaProcessingResolutionType 0x51d81 hash c31e39c6 params:( EFieldResolutionType ResolutionType;FieldSystemMetaDataProcessingResolution ReturnValue; );
};


instance 1ab5e212ec0
class FieldNodeBase public : ActorComponent
{
	// Fields

};


instance 1ab5e212c80
class FieldNodeInt public : FieldNodeBase
{
	// Fields

};


instance 1ab5e212a40
class FieldNodeFloat public : FieldNodeBase
{
	// Fields

};


instance 1ab5e212800
class FieldNodeVector public : FieldNodeBase
{
	// Fields

};


instance 1ab5e2125c0
class UniformInteger public : FieldNodeInt
{
	// Fields
	int Magnitude; // 0xb0

	// Functions
	SetUniformInteger 0x51dbc hash 1385fbdf params:( None Magnitude;UniformInteger ReturnValue; );
};


instance 1ab5e212380
class RadialIntMask public : FieldNodeInt
{
	// Fields
	float Radius; // 0xb0
	Vector Position; // 0xb4
	int InteriorValue; // 0xc0
	int ExteriorValue; // 0xc4
	BYTE SetMaskCondition; // 0xc8

	// Functions
	SetRadialIntMask 0x51dce hash 7bc15a15 params:( None Radius;Vector Position;None InteriorValue;None ExteriorValue;ESetMaskConditionType SetMaskConditionIn;RadialIntMask ReturnValue; );
};


instance 1ab5e212140
class UniformScalar public : FieldNodeFloat
{
	// Fields
	float Magnitude; // 0xb0

	// Functions
	SetUniformScalar 0x51ddf hash f04ffc67 params:( None Magnitude;UniformScalar ReturnValue; );
};


instance 1ab5e211f00
class RadialFalloff public : FieldNodeFloat
{
	// Fields
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Radius; // 0xc0
	Vector Position; // 0xc4
	BYTE Falloff; // 0xd0

	// Functions
	SetRadialFalloff 0x51df0 hash 76000938 params:( None Magnitude;None MinRange;None MaxRange;None Default;None Radius;Vector Position;EFieldFalloffType Falloff;RadialFalloff ReturnValue; );
};


instance 1ab5e211cc0
class PlaneFalloff public : FieldNodeFloat
{
	// Fields
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Distance; // 0xc0
	Vector Position; // 0xc4
	Vector Normal; // 0xd0
	BYTE Falloff; // 0xdc

	// Functions
	SetPlaneFalloff 0x51e00 hash 31e1783b params:( None Magnitude;None MinRange;None MaxRange;None Default;None Distance;Vector Position;Vector Normal;EFieldFalloffType Falloff;PlaneFalloff ReturnValue; );
};


instance 1ab5e211a80
class BoxFalloff public : FieldNodeFloat
{
	// Fields
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	Transform Transform; // 0xc0
	BYTE Falloff; // 0xf0

	// Functions
	SetBoxFalloff 0x51e0f hash 28ec0cf4 params:( None Magnitude;None MinRange;None MaxRange;None Default;Transform Transform;EFieldFalloffType Falloff;BoxFalloff ReturnValue; );
};


instance 1ab5e211840
class NoiseField public : FieldNodeFloat
{
	// Fields
	float MinRange; // 0xb0
	float MaxRange; // 0xb4
	Transform Transform; // 0xc0

	// Functions
	SetNoiseField 0x51e1d hash 102f3fb3 params:( None MinRange;None MaxRange;Transform Transform;NoiseField ReturnValue; );
};


instance 1ab5e211600
class UniformVector public : FieldNodeVector
{
	// Fields
	float Magnitude; // 0xb0
	Vector Direction; // 0xb4

	// Functions
	SetUniformVector 0x51e2d hash f774e3e4 params:( None Magnitude;Vector Direction;UniformVector ReturnValue; );
};


instance 1ab5e2113c0
class RadialVector public : FieldNodeVector
{
	// Fields
	float Magnitude; // 0xb0
	Vector Position; // 0xb4

	// Functions
	SetRadialVector 0x51e3d hash 406f5551 params:( None Magnitude;Vector Position;RadialVector ReturnValue; );
};


instance 1ab5e211180
class RandomVector public : FieldNodeVector
{
	// Fields
	float Magnitude; // 0xb0

	// Functions
	SetRandomVector 0x51e4d hash 5afeaca5 params:( None Magnitude;RandomVector ReturnValue; );
};


instance 1ab5e210f40
class OperatorField public : FieldNodeBase
{
	// Fields
	float Magnitude; // 0xb0
	FieldNodeBase* RightField; // 0xb8
	FieldNodeBase* LeftField; // 0xc0
	BYTE Operation; // 0xc8

	// Functions
	SetOperatorField 0x51e5e hash eaf9d761 params:( None Magnitude;FieldNodeBase RightField;FieldNodeBase LeftField;EFieldOperationType Operation;OperatorField ReturnValue; );
};


instance 1ab5e210d00
class ToIntegerField public : FieldNodeInt
{
	// Fields
	FieldNodeFloat* FloatField; // 0xb0

	// Functions
	SetToIntegerField 0x51e6f hash 45ebef46 params:( FieldNodeFloat FloatField;ToIntegerField ReturnValue; );
};


instance 1ab5e210ac0
class ToFloatField public : FieldNodeFloat
{
	// Fields
	FieldNodeInt* IntField; // 0xb0

	// Functions
	SetToFloatField 0x51e80 hash b246280e params:( FieldNodeInt IntegerField;ToFloatField ReturnValue; );
};


instance 1ab5e210880
class CullingField public : FieldNodeBase
{
	// Fields
	FieldNodeBase* Culling; // 0xb0
	FieldNodeBase* Field; // 0xb8
	BYTE Operation; // 0xc0

	// Functions
	SetCullingField 0x51e90 hash 6cb1c763 params:( FieldNodeBase Culling;FieldNodeBase Field;EFieldCullingOperationType Operation;CullingField ReturnValue; );
};


instance 1ab5e210640
class ReturnResultsTerminal public : FieldNodeBase
{
	// Fields

	// Functions
	SetReturnResultsTerminal 0x51ea5 hash 92e1b6ff params:( ReturnResultsTerminal ReturnValue; );
};


