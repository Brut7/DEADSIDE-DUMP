instance 1ab5e217fc0
class InputBehavior public : Object
{
	// Fields

};


instance 1ab5e218200
class AnyButtonInputBehavior public : InputBehavior
{
	// Fields
	int ButtonNumber; // 0x30

};


instance 1ab5e217b40
class InteractiveGizmoBuilder public : Object
{
	// Fields

};


instance 1ab5e217d80
class AxisAngleGizmoBuilder public : InteractiveGizmoBuilder
{
	// Fields

};


instance 1ab5e2176c0
class InteractiveGizmo public : Object
{
	// Fields
	InputBehaviorSet* InputBehaviors; // 0x30

};


instance 1ab5e217900
class AxisAngleGizmo public : InteractiveGizmo
{
	// Fields
	InterfaceProperty AxisSource; // 0x48 property 0x1ab72239100 hash 0x92a49b
	InterfaceProperty AngleSource; // 0x58 property 0x1ab72239180 hash 0x92a49b
	InterfaceProperty HitTarget; // 0x68 property 0x1ab72239200 hash 0x92a49b
	InterfaceProperty StateTarget; // 0x78 property 0x1ab72239280 hash 0x92a49b
	bool bInInteraction; // 0x88
	Vector RotationOrigin; // 0x8c
	Vector RotationAxis; // 0x98
	Vector RotationPlaneX; // 0xa4
	Vector RotationPlaneY; // 0xb0
	Vector InteractionStartPoint; // 0xbc
	Vector InteractionCurPoint; // 0xc8
	float InteractionStartAngle; // 0xd4
	float InteractionCurAngle; // 0xd8

};


instance 1ab5e217480
class AxisPositionGizmoBuilder public : InteractiveGizmoBuilder
{
	// Fields

};


instance 1ab5e217240
class AxisPositionGizmo public : InteractiveGizmo
{
	// Fields
	InterfaceProperty AxisSource; // 0x48 property 0x1ab72238c80 hash 0x92a49b
	InterfaceProperty ParameterSource; // 0x58 property 0x1ab72238d00 hash 0x92a49b
	InterfaceProperty HitTarget; // 0x68 property 0x1ab72238d80 hash 0x92a49b
	InterfaceProperty StateTarget; // 0x78 property 0x1ab72238e00 hash 0x92a49b
	bool bInInteraction; // 0x88
	Vector InteractionOrigin; // 0x8c
	Vector InteractionAxis; // 0x98
	Vector InteractionStartPoint; // 0xa4
	Vector InteractionCurPoint; // 0xb0
	float InteractionStartParameter; // 0xbc
	float InteractionCurParameter; // 0xc0

};


instance 1ab5e217000
class GizmoConstantAxisSource public : Object
{
	// Fields
	Vector Origin; // 0x30
	Vector Direction; // 0x3c

};


instance 1ab5e216dc0
class GizmoWorldAxisSource public : Object
{
	// Fields
	Vector Origin; // 0x30
	int AxisIndex; // 0x3c

};


instance 1ab5e216b80
class GizmoComponentAxisSource public : Object
{
	// Fields
	SceneComponent* Component; // 0x30
	int AxisIndex; // 0x38
	bool bLocalAxes; // 0x3c

};


instance 1ab5e216940
class ClickDragInputBehavior public : AnyButtonInputBehavior
{
	// Fields

};


instance 1ab5e2164c0
class InteractiveToolBuilder public : Object
{
	// Fields

};


instance 1ab5e216700
class ClickDragToolBuilder public : InteractiveToolBuilder
{
	// Fields

};


instance 1ab5e216040
class InteractiveTool public : Object
{
	// Fields
	InputBehaviorSet* InputBehaviors; // 0x30
	TArray ToolPropertyObjects; // 0x38

};


instance 1ab5e216280
class ClickDragTool public : InteractiveTool
{
	// Fields

};


instance 1ab5e215bc0
class InternalToolFrameworkActor public : Actor
{
	// Fields

};


instance 1ab5e215e00
class GizmoActor public : InternalToolFrameworkActor
{
	// Fields

};


instance 1ab5e215740
class GizmoBaseComponent public : PrimitiveComponent
{
	// Fields
	LinearColor Color; // 0x3d8
	float HoverSizeMultiplier; // 0x3e8
	float PixelHitDistanceThreshold; // 0x3ec

	// Functions
	UpdateWorldLocalState 0x5210c hash c613ddbc params:( None bWorldIn; );
	UpdateHoverState 0x52103 hash 38af408d params:( None bHoveringIn; );
};


instance 1ab5e215980
class GizmoArrowComponent public : GizmoBaseComponent
{
	// Fields
	Vector Direction; // 0x3f8
	float Gap; // 0x404
	float Length; // 0x408
	float Thickness; // 0x40c

};


instance 1ab5e215500
class GizmoCircleComponent public : GizmoBaseComponent
{
	// Fields
	Vector Normal; // 0x3f8
	float Radius; // 0x404
	float Thickness; // 0x408
	int NumSides; // 0x40c
	bool bViewAligned; // 0x410
	bool bOnlyAllowFrontFacingHits; // 0x411

};


instance 1ab5e2152c0
class GizmoTransformSource public : Interface
{
	// Fields

	// Functions
	SetTransform 0x5212e hash 4bd0834d params:( Transform NewTransform; );
	GetTransform 0x3f0b6 hash 6822c1 params:( Transform ReturnValue; );
};


instance 1ab5e215080
class GizmoAxisSource public : Interface
{
	// Fields

	// Functions
	HasTangentVectors 0x52155 hash 7513db58 params:( None ReturnValue; );
	GetTangentVectors 0x5214b hash b655fe9c params:( Vector TangentXOut;Vector TangentYOut; );
	GetOrigin 0x52145 hash 188e312d params:( Vector ReturnValue; );
	GetDirection 0x5213e hash 70d63d46 params:( Vector ReturnValue; );
};


instance 1ab5e214e40
class GizmoClickTarget public : Interface
{
	// Fields

	// Functions
	UpdateHoverState 0x52103 hash 38af408d params:( None bHovering; );
};


instance 1ab5e214c00
class GizmoStateTarget public : Interface
{
	// Fields

	// Functions
	EndUpdate 0x52178 hash bc19ebbf params:(  );
	BeginUpdate 0x52171 hash 8c7d5f0d params:(  );
};


instance 1ab5e21de40
class GizmoFloatParameterSource public : Interface
{
	// Fields

	// Functions
	SetParameter 0x521a0 hash c75d8932 params:( None NewValue; );
	GetParameter 0x52199 hash 7bf528a6 params:( None ReturnValue; );
	EndModify 0x52193 hash a95eae84 params:(  );
	BeginModify 0x5218c hash 79c221d2 params:(  );
};


instance 1ab5e21dc00
class GizmoVec2ParameterSource public : Interface
{
	// Fields

	// Functions
	SetParameter 0x521a0 hash c75d8932 params:( Vector2D NewValue; );
	GetParameter 0x52199 hash 7bf528a6 params:( Vector2D ReturnValue; );
	EndModify 0x52193 hash a95eae84 params:(  );
	BeginModify 0x5218c hash 79c221d2 params:(  );
};


instance 1ab5e21d9c0
class GizmoRectangleComponent public : GizmoBaseComponent
{
	// Fields
	Vector DirectionX; // 0x3f8
	Vector DirectionY; // 0x404
	float OffsetX; // 0x410
	float OffsetY; // 0x414
	float LengthX; // 0x418
	float LengthY; // 0x41c
	float Thickness; // 0x420

};


instance 1ab5e21d780
class GizmoLambdaHitTarget public : Object
{
	// Fields

};


instance 1ab5e21d540
class GizmoComponentHitTarget public : Object
{
	// Fields
	PrimitiveComponent* Component; // 0x30

};


instance 1ab5e21d300
class InputBehaviorSet public : Object
{
	// Fields
	TArray Behaviors; // 0x28

};


instance 1ab5e21d0c0
class InputBehaviorSource public : Interface
{
	// Fields

};


instance 1ab5e21ce80
class InputRouter public : Object
{
	// Fields
	bool bAutoInvalidateOnHover; // 0x28
	bool bAutoInvalidateOnCapture; // 0x29
	InputBehaviorSet* ActiveInputBehaviors; // 0x38

};


instance 1ab5e21cc40
class InteractiveGizmoManager public : Object
{
	// Fields
	TArray ActiveGizmos; // 0x30
	MapProperty GizmoBuilders; // 0x58 property 0x1ab71168580 hash 0xadd0fb88

};


instance 1ab5e21ca00
class InteractiveToolPropertySet public : Object
{
	// Fields
	Object* CachedProperties; // 0x40

};


instance 1ab5e21c7c0
class ToolContextTransactionProvider public : Interface
{
	// Fields

};


instance 1ab5e21c580
class InteractiveToolManager public : Object
{
	// Fields
	InteractiveTool* ActiveLeftTool; // 0x30
	InteractiveTool* ActiveRightTool; // 0x38
	MapProperty ToolBuilders; // 0x88 property 0x1ab711684e0 hash 0xadd0fb88

};


instance 1ab5e21c340
class ToolFrameworkComponent public : Interface
{
	// Fields

};


instance 1ab5e21c100
class InteractiveToolsContext public : Object
{
	// Fields
	InputRouter* InputRouter; // 0x28
	InteractiveToolManager* ToolManager; // 0x30
	InteractiveGizmoManager* GizmoManager; // 0x38

};


instance 1ab5e21bec0
class KeyAsModifierInputBehavior public : InputBehavior
{
	// Fields

};


instance 1ab5e21bc80
class MeshSurfacePointToolBuilder public : InteractiveToolBuilder
{
	// Fields

};


instance 1ab5e21b800
class SingleSelectionTool public : InteractiveTool
{
	// Fields

};


instance 1ab5e21ba40
class MeshSurfacePointTool public : SingleSelectionTool
{
	// Fields

};


instance 1ab5e21b5c0
class MeshSurfacePointToolMouseBehavior public : AnyButtonInputBehavior
{
	// Fields

};


instance 1ab5e21b380
class MouseHoverBehavior public : InputBehavior
{
	// Fields

};


instance 1ab5e21b140
class MultiClickSequenceInputBehavior public : AnyButtonInputBehavior
{
	// Fields

};


instance 1ab5e21af00
class MultiSelectionTool public : InteractiveTool
{
	// Fields

};


instance 1ab5e21acc0
class GizmoBaseFloatParameterSource public : Object
{
	// Fields

};


instance 1ab5e21aa80
class GizmoLocalFloatParameterSource public : GizmoBaseFloatParameterSource
{
	// Fields
	float Value; // 0x48
	GizmoFloatParameterChange LastChange; // 0x4c

};


instance 1ab5e21a840
class GizmoBaseVec2ParameterSource public : Object
{
	// Fields

};


instance 1ab5e21a600
class GizmoLocalVec2ParameterSource public : GizmoBaseVec2ParameterSource
{
	// Fields
	Vector2D Value; // 0x48
	GizmoVec2ParameterChange LastChange; // 0x50

};


instance 1ab5e21a3c0
class GizmoAxisTranslationParameterSource public : GizmoBaseFloatParameterSource
{
	// Fields
	InterfaceProperty AxisSource; // 0x48 property 0x1ab7223b480 hash 0x92a49b
	InterfaceProperty TransformSource; // 0x58 property 0x1ab7223b500 hash 0x92a49b
	float Parameter; // 0x68
	GizmoFloatParameterChange LastChange; // 0x6c
	Vector CurTranslationAxis; // 0x74
	Vector CurTranslationOrigin; // 0x80
	Transform InitialTransform; // 0x90

};


instance 1ab5e21a180
class GizmoPlaneTranslationParameterSource public : GizmoBaseVec2ParameterSource
{
	// Fields
	InterfaceProperty AxisSource; // 0x48 property 0x1ab7223b000 hash 0x92a49b
	InterfaceProperty TransformSource; // 0x58 property 0x1ab7223b080 hash 0x92a49b
	Vector2D Parameter; // 0x68
	GizmoVec2ParameterChange LastChange; // 0x70
	Vector CurTranslationOrigin; // 0x80
	Vector CurTranslationNormal; // 0x8c
	Vector CurTranslationAxisX; // 0x98
	Vector CurTranslationAxisY; // 0xa4
	Transform InitialTransform; // 0xb0

};


instance 1ab5e219f40
class GizmoAxisRotationParameterSource public : GizmoBaseFloatParameterSource
{
	// Fields
	InterfaceProperty AxisSource; // 0x48 property 0x1ab7223ad00 hash 0x92a49b
	InterfaceProperty TransformSource; // 0x58 property 0x1ab7223ad80 hash 0x92a49b
	float Angle; // 0x68
	GizmoFloatParameterChange LastChange; // 0x6c
	Vector CurRotationAxis; // 0x74
	Vector CurRotationOrigin; // 0x80
	Transform InitialTransform; // 0x90

};


instance 1ab5e219d00
class PlanePositionGizmoBuilder public : InteractiveGizmoBuilder
{
	// Fields

};


instance 1ab5e219ac0
class PlanePositionGizmo public : InteractiveGizmo
{
	// Fields
	InterfaceProperty AxisSource; // 0x48 property 0x1ab7223a680 hash 0x92a49b
	InterfaceProperty ParameterSource; // 0x58 property 0x1ab7223a700 hash 0x92a49b
	InterfaceProperty HitTarget; // 0x68 property 0x1ab7223a780 hash 0x92a49b
	InterfaceProperty StateTarget; // 0x78 property 0x1ab7223a800 hash 0x92a49b
	bool bInInteraction; // 0x88
	Vector InteractionOrigin; // 0x8c
	Vector InteractionNormal; // 0x98
	Vector InteractionAxisX; // 0xa4
	Vector InteractionAxisY; // 0xb0
	Vector InteractionStartPoint; // 0xbc
	Vector InteractionCurPoint; // 0xc8
	Vector2D InteractionStartParameter; // 0xd4
	Vector2D InteractionCurParameter; // 0xdc

};


instance 1ab5e219880
class SelectionSet public : Object
{
	// Fields

};


instance 1ab5e219640
class MeshSelectionSet public : SelectionSet
{
	// Fields
	TArray Vertices; // 0x40
	TArray Edges; // 0x50
	TArray Faces; // 0x60
	TArray Groups; // 0x70

};


instance 1ab5e21fdc0
class SingleClickInputBehavior public : AnyButtonInputBehavior
{
	// Fields
	bool HitTestOnRelease; // 0x80

};


instance 1ab5e21fb80
class SingleClickToolBuilder public : InteractiveToolBuilder
{
	// Fields

};


instance 1ab5e21f940
class SingleClickTool public : InteractiveTool
{
	// Fields

};


instance 1ab5e21f700
class GizmoNilStateTarget public : Object
{
	// Fields

};


instance 1ab5e21f4c0
class GizmoLambdaStateTarget public : Object
{
	// Fields

};


instance 1ab5e21f280
class GizmoObjectModifyStateTarget public : Object
{
	// Fields

};


instance 1ab5e21f040
class GizmoTransformChangeStateTarget public : Object
{
	// Fields
	InterfaceProperty TransactionManager; // 0x50 property 0x1ab7223c480 hash 0x92a49b

};


instance 1ab5e21ee00
class TransformGizmoActor public : GizmoActor
{
	// Fields
	PrimitiveComponent* TranslateX; // 0x218
	PrimitiveComponent* TranslateY; // 0x220
	PrimitiveComponent* TranslateZ; // 0x228
	PrimitiveComponent* TranslateYZ; // 0x230
	PrimitiveComponent* TranslateXZ; // 0x238
	PrimitiveComponent* TranslateXY; // 0x240
	PrimitiveComponent* RotateX; // 0x248
	PrimitiveComponent* RotateY; // 0x250
	PrimitiveComponent* RotateZ; // 0x258

};


instance 1ab5e21ebc0
class TransformGizmoBuilder public : InteractiveGizmoBuilder
{
	// Fields

};


instance 1ab5e21e980
class TransformGizmo public : InteractiveGizmo
{
	// Fields
	TransformProxy* ActiveTarget; // 0x38
	TArray ActiveComponents; // 0xd0
	TArray ActiveGizmos; // 0xe0
	GizmoComponentAxisSource* AxisXSource; // 0x100
	GizmoComponentAxisSource* AxisYSource; // 0x108
	GizmoComponentAxisSource* AxisZSource; // 0x110
	GizmoTransformChangeStateTarget* StateTarget; // 0x118

};


instance 1ab5e21e740
class TransformProxy public : Object
{
	// Fields
	bool bRotatePerObject; // 0x40
	bool bSetPivotMode; // 0x41
	Transform SharedTransform; // 0x60
	Transform InitialSharedTransform; // 0x90

};


instance 1ab5e21e500
class GizmoBaseTransformSource public : Object
{
	// Fields

};


instance 1ab5e21e2c0
class GizmoComponentWorldTransformSource public : GizmoBaseTransformSource
{
	// Fields
	SceneComponent* Component; // 0x48
	bool bModifyComponentOnTransform; // 0x50

};


instance 1ab5e21e080
class GizmoTransformProxyTransformSource public : GizmoBaseTransformSource
{
	// Fields
	TransformProxy* Proxy; // 0x48

};


instance 1ab716ec1c0
struct BehaviorInfo 
{
	// Fields
	InputBehavior* Behavior; // 0x0

};


instance 1ab716ec100
struct InputRayHit 
{
	// Fields

};


instance 1ab716ec040
struct ActiveGizmo 
{
	// Fields

};


instance 1ab716ebf80
struct GizmoFloatParameterChange 
{
	// Fields
	float InitialValue; // 0x0
	float CurrentValue; // 0x4

};


instance 1ab716ebec0
struct GizmoVec2ParameterChange 
{
	// Fields
	Vector2D InitialValue; // 0x0
	Vector2D CurrentValue; // 0x8

};


