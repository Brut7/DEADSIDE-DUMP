instance 1ab5c9ff940
class Visual public : Object
{
	// Fields

};


instance 1ab5c9ffb80
class Widget public : Visual
{
	// Fields
	PanelSlot* Slot; // 0x28
	DelegateProperty bIsEnabledDelegate; // 0x30 property 0x1ab7134a780 hash 0xe1aec4e5
	FText ToolTipText; // 0x40
	DelegateProperty ToolTipTextDelegate; // 0x58 property 0x1ab7134a800 hash 0xe1aec4e5
	Widget* ToolTipWidget; // 0x68
	DelegateProperty ToolTipWidgetDelegate; // 0x70 property 0x1ab7134a980 hash 0xe1aec4e5
	DelegateProperty VisibilityDelegate; // 0x80 property 0x1ab7134aa00 hash 0xe1aec4e5
	WidgetTransform RenderTransform; // 0x90
	Vector2D RenderTransformPivot; // 0xac
	bool bIsVariable; // 0xb4
	bool bCreatedByConstructionScript; // 0xb4
	bool bIsEnabled; // 0xb4
	bool bOverride_Cursor; // 0xb4
	SlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8
	bool bIsVolatile; // 0xc0
	BYTE Cursor; // 0xc1
	EWidgetClipping Clipping; // 0xc2
	ESlateVisibility Visibility; // 0xc3
	float RenderOpacity; // 0xc4
	WidgetNavigation* Navigation; // 0xc8
	EFlowDirectionPreference FlowDirectionPreference; // 0xd0
	TArray NativeBindings; // 0xf8
	DelegateFunction OnReply__DelegateSignature; // 0x0 property 0x1ab7131d8a0 hash 0x8ad2d5e6
	DelegateFunction OnPointerEvent__DelegateSignature; // 0x0 property 0x1ab7131d980 hash 0x8ad2d5e6
	DelegateFunction GetWidget__DelegateSignature; // 0x0 property 0x1ab7131e320 hash 0x8ad2d5e6
	DelegateFunction GetText__DelegateSignature; // 0x0 property 0x1ab7131e5c0 hash 0x8ad2d5e6
	DelegateFunction GetSlateVisibility__DelegateSignature; // 0x0 property 0x1ab7131e6a0 hash 0x8ad2d5e6
	DelegateFunction GetSlateColor__DelegateSignature; // 0x0 property 0x1ab7131adc0 hash 0x8ad2d5e6
	DelegateFunction GetSlateBrush__DelegateSignature; // 0x0 property 0x1ab7131aea0 hash 0x8ad2d5e6
	DelegateFunction GetMouseCursor__DelegateSignature; // 0x0 property 0x1ab7131b4c0 hash 0x8ad2d5e6
	DelegateFunction GetLinearColor__DelegateSignature; // 0x0 property 0x1ab7131b5a0 hash 0x8ad2d5e6
	DelegateFunction GetInt32__DelegateSignature; // 0x0 property 0x1ab7131b760 hash 0x8ad2d5e6
	DelegateFunction GetFloat__DelegateSignature; // 0x0 property 0x1ab7131b920 hash 0x8ad2d5e6
	DelegateFunction GetCheckBoxState__DelegateSignature; // 0x0 property 0x1ab7131bbc0 hash 0x8ad2d5e6
	DelegateFunction GetBool__DelegateSignature; // 0x0 property 0x1ab7131bd80 hash 0x8ad2d5e6
	DelegateFunction GenerateWidgetForString__DelegateSignature; // 0x0 property 0x1ab7131be60 hash 0x8ad2d5e6
	DelegateFunction GenerateWidgetForObject__DelegateSignature; // 0x0 property 0x1ab7131bf40 hash 0x8ad2d5e6

	// Functions
	SetVisibility 0x3e2b4 hash a9e0aaf9 params:( UnderlyingType InVisibility; );
	SetUserFocus 0x3e869 hash e6a2ccd0 params:( PlayerController PlayerController; );
	SetToolTipText 0x3e861 hash b0dd0d01 params:( None InToolTipText; );
	SetToolTip 0x3e85b hash d525d19c params:( Widget Widget; );
	SetRenderTranslation 0x3e850 hash 921f2d80 params:( Vector2D Translation; );
	SetRenderTransformPivot 0x3e843 hash 88fb3ff params:( Vector2D Pivot; );
	SetRenderTransformAngle 0x3e836 hash 782c214 params:( None Angle; );
	SetRenderTransform 0x3e82c hash fb2f830d params:( WidgetTransform InTransform; );
	SetRenderShear 0x3e824 hash d6c983a4 params:( Vector2D Shear; );
	SetRenderScale 0x3e81c hash d6c6b619 params:( Vector2D Scale; );
	SetRenderOpacity 0x3e813 hash 8db1ee8a params:( None InOpacity; );
	SetNavigationRuleExplicit 0x3e805 hash b48597b params:( UnderlyingType Direction;Widget InWidget; );
	SetNavigationRuleCustomBoundary 0x3e7f4 hash f4e04998 params:( UnderlyingType Direction;CustomWidgetNavigationDelegate__DelegateSignature InCustomDelegate; );
	SetNavigationRuleCustom 0x3e7e7 hash 30448134 params:( UnderlyingType Direction;CustomWidgetNavigationDelegate__DelegateSignature InCustomDelegate; );
	SetNavigationRuleBase 0x3e7db hash 951492f4 params:( UnderlyingType Direction;UnderlyingType Rule; );
	SetNavigationRule 0x3e7d1 hash b3bd9199 params:( UnderlyingType Direction;UnderlyingType Rule;None WidgetToFocus; );
	SetKeyboardFocus 0x3e7c8 hash 59d2e702 params:(  );
	SetIsEnabled 0x3e7c1 hash ca12def8 params:( None bInIsEnabled; );
	SetFocus 0x3e7bc hash 878cf611 params:(  );
	SetCursor 0x3e7b6 hash 72a1026f params:( EMouseCursor InCursor; );
	SetClipping 0x3e7af hash d4eaf4e7 params:( UnderlyingType InClipping; );
	SetAllNavigationRules 0x3e7a3 hash 6a38d45 params:( UnderlyingType Rule;None WidgetToFocus; );
	ResetCursor 0x3e79c hash 4b59b0a6 params:(  );
	RemoveFromParent 0x3e793 hash d76b8bf1 params:(  );
	IsVisible 0x3e130 hash 2485bccf params:( None ReturnValue; );
	IsHovered 0x3e78d hash fd09b92e params:( None ReturnValue; );
	InvalidateLayoutAndVolatility 0x3e77d hash f34f9128 params:(  );
	HasUserFocusedDescendants 0x3e76f hash 9366ded5 params:( PlayerController PlayerController;None ReturnValue; );
	HasUserFocus 0x3e768 hash b2b06380 params:( PlayerController PlayerController;None ReturnValue; );
	HasMouseCaptureByUser 0x3e75c hash 81fc35d8 params:( None UserIndex;None PointerIndex;None ReturnValue; );
	HasMouseCapture 0x3e753 hash 9f4b8dfe params:( None ReturnValue; );
	HasKeyboardFocus 0x3e74a hash b2c55b2 params:( None ReturnValue; );
	HasFocusedDescendants 0x3e73e hash 40fb71b6 params:( None ReturnValue; );
	HasAnyUserFocus 0x3e735 hash 819dd808 params:( None ReturnValue; );
	GetVisibility 0x3e72d hash f16c38ed params:( UnderlyingType ReturnValue; );
	GetTickSpaceGeometry 0x3e722 hash 2a0e1ec8 params:( Geometry ReturnValue; );
	GetRenderTransformAngle 0x3e715 hash a4ff5108 params:( None ReturnValue; );
	GetRenderOpacity 0x3e70c hash fb3427fe params:( None ReturnValue; );
	GetParent 0x3e706 hash 19b4a0cf params:( PanelWidget ReturnValue; );
	GetPaintSpaceGeometry 0x3e6fa hash bb01a1b9 params:( Geometry ReturnValue; );
	GetOwningPlayer 0x3e6f1 hash 1590a9a4 params:( PlayerController ReturnValue; );
	GetOwningLocalPlayer 0x3e6e6 hash 52cbf6af params:( LocalPlayer ReturnValue; );
	GetIsEnabled 0x3e6df hash 7eaa7e6c params:( None ReturnValue; );
	GetGameInstance 0x3e6d6 hash 898add94 params:( GameInstance ReturnValue; );
	GetDesiredSize 0x3e6ce hash 73f67a60 params:( Vector2D ReturnValue; );
	GetClipping 0x3e6c7 hash 949275db params:( UnderlyingType ReturnValue; );
	GetCachedGeometry 0x3e6bd hash b834fda9 params:( Geometry ReturnValue; );
	ForceVolatile 0x3e6b5 hash 49c8894 params:( None bForce; );
	ForceLayoutPrepass 0x3e6ab hash 69d871d0 params:(  );
};


instance 1ab5e0bf940
class UserWidget public : Widget
{
	// Fields
	LinearColor ColorAndOpacity; // 0x110
	DelegateProperty ColorAndOpacityDelegate; // 0x120 property 0x1ab71b26000 hash 0xe1aec4e5
	SlateColor ForegroundColor; // 0x130
	DelegateProperty ForegroundColorDelegate; // 0x158 property 0x1ab71b26100 hash 0xe1aec4e5
	Margin Padding; // 0x168
	TArray ActiveSequencePlayers; // 0x178
	TArray StoppedSequencePlayers; // 0x188
	TArray NamedSlotBindings; // 0x198
	WidgetTree* WidgetTree; // 0x1a8
	int Priority; // 0x1b0
	bool bSupportsKeyboardFocus; // 0x1b4
	bool bIsFocusable; // 0x1b4
	bool bStopAction; // 0x1b4
	bool bHasScriptImplementedTick; // 0x1b4
	bool bHasScriptImplementedPaint; // 0x1b4
	bool bCookedWidgetTree; // 0x1b4
	EWidgetTickFrequency TickFrequency; // 0x1c0
	InputComponent* InputComponent; // 0x1c8
	TArray AnimationCallbacks; // 0x1d0

	// Functions
	UnregisterInputComponent 0x44d1d hash c742c8b0 params:(  );
	UnbindFromAnimationStarted 0x44d0f hash 90ab9110 params:( WidgetAnimation Animation;WidgetAnimationDynamicEvent__DelegateSignature Delegate; );
	UnbindFromAnimationFinished 0x44d00 hash 75b4fbe3 params:( WidgetAnimation Animation;WidgetAnimationDynamicEvent__DelegateSignature Delegate; );
	UnbindAllFromAnimationStarted 0x44cf0 hash 26c7f849 params:( WidgetAnimation Animation; );
	UnbindAllFromAnimationFinished 0x44ce0 hash cf5e4a3c params:( WidgetAnimation Animation; );
	Tick 0x1d69f hash 7c8ceb30 params:( Geometry MyGeometry;None InDeltaTime; );
	StopListeningForInputAction 0x44cd1 hash 6b5e0c4d params:( None ActionName;EInputEvent EventType; );
	StopListeningForAllInputActions 0x44cc0 hash 3cfe5659 params:(  );
	StopAnimationsAndLatentActions 0x44cb0 hash 211fab6a params:(  );
	StopAnimation 0x44ca8 hash 9ec7e36b params:( WidgetAnimation InAnimation; );
	StopAllAnimations 0x44c9e hash 11567377 params:(  );
	SetPositionInViewport 0x44c92 hash e49bb35d params:( Vector2D Position;None bRemoveDPIScale; );
	SetPlaybackSpeed 0x3e8fe hash bddc5169 params:( WidgetAnimation InAnimation;None PlaybackSpeed; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetOwningPlayer 0x44c83 hash bce9ceb0 params:( PlayerController LocalPlayerController; );
	SetNumLoopsToPlay 0x44c79 hash a412d127 params:( WidgetAnimation InAnimation;None NumLoopsToPlay; );
	SetInputActionPriority 0x44c6d hash a0459e1 params:( None NewPriority; );
	SetInputActionBlocking 0x44c61 hash 5daf3f48 params:( None bShouldBlock; );
	SetForegroundColor 0x44c57 hash f968bf8b params:( SlateColor InForegroundColor; );
	SetDesiredSizeInViewport 0x44c4a hash 5d0aa1c3 params:( Vector2D Size; );
	SetColorAndOpacity 0x44c40 hash b8bd1c3c params:( LinearColor InColorAndOpacity; );
	SetAnchorsInViewport 0x44c35 hash 764b12b6 params:( Anchors Anchors; );
	SetAlignmentInViewport 0x44c29 hash b9f31687 params:( Vector2D Alignment; );
	ReverseAnimation 0x44c20 hash af2d95a1 params:( WidgetAnimation InAnimation; );
	RemoveFromViewport 0x44c16 hash 34ceeb07 params:(  );
	RegisterInputComponent 0x44c0a hash aaf3ffad params:(  );
	PreConstruct 0x1d698 hash b57bc471 params:( None IsDesignTime; );
	PlaySound 0x44c04 hash 4ff3b344 params:( SoundBase SoundToPlay; );
	PlayAnimationTimeRange 0x44bf8 hash 42db7cd7 params:( WidgetAnimation InAnimation;None StartAtTime;None EndAtTime;None NumLoopsToPlay;EUMGSequencePlayMode PlayMode;None PlaybackSpeed;None bRestoreState;UMGSequencePlayer ReturnValue; );
	PlayAnimationReverse 0x44bed hash 4da9f357 params:( WidgetAnimation InAnimation;None PlaybackSpeed;None bRestoreState;UMGSequencePlayer ReturnValue; );
	PlayAnimationForward 0x44be2 hash c903e4f0 params:( WidgetAnimation InAnimation;None PlaybackSpeed;None bRestoreState;UMGSequencePlayer ReturnValue; );
	PlayAnimation 0x40695 hash 25d0c7b params:( WidgetAnimation InAnimation;None StartAtTime;None NumLoopsToPlay;EUMGSequencePlayMode PlayMode;None PlaybackSpeed;None bRestoreState;UMGSequencePlayer ReturnValue; );
	PauseAnimation 0x44bda hash 33690563 params:( WidgetAnimation InAnimation;None ReturnValue; );
	OnTouchStarted 0x1d690 hash 3da1783c params:( Geometry MyGeometry;PointerEvent InTouchEvent;EventReply ReturnValue; );
	OnTouchMoved 0x1d689 hash 4e23a0c0 params:( Geometry MyGeometry;PointerEvent InTouchEvent;EventReply ReturnValue; );
	OnTouchGesture 0x1d681 hash 80301584 params:( Geometry MyGeometry;PointerEvent GestureEvent;EventReply ReturnValue; );
	OnTouchForceChanged 0x1d676 hash bad62f7e params:( Geometry MyGeometry;PointerEvent InTouchEvent;EventReply ReturnValue; );
	OnTouchEnded 0x1d66f hash 4d9203c5 params:( Geometry MyGeometry;PointerEvent InTouchEvent;EventReply ReturnValue; );
	OnRemovedFromFocusPath 0x1d663 hash 21d1f9d5 params:( FocusEvent InFocusEvent; );
	OnPreviewMouseButtonDown 0x1d656 hash 6e32df41 params:( Geometry MyGeometry;PointerEvent MouseEvent;EventReply ReturnValue; );
	OnPreviewKeyDown 0x1d64d hash 41aca4a5 params:( Geometry MyGeometry;KeyEvent InKeyEvent;EventReply ReturnValue; );
	OnPaint 0x1d648 hash cb6e787e params:( PaintContext Context; );
	OnMouseWheel 0x1d641 hash fb2ed120 params:( Geometry MyGeometry;PointerEvent MouseEvent;EventReply ReturnValue; );
	OnMouseMove 0x1d63a hash 8b782e62 params:( Geometry MyGeometry;PointerEvent MouseEvent;EventReply ReturnValue; );
	OnMouseLeave 0x1d633 hash fa660f98 params:( PointerEvent MouseEvent; );
	OnMouseEnter 0x1d62c hash f9eca229 params:( Geometry MyGeometry;PointerEvent MouseEvent; );
	OnMouseCaptureLost 0x1d622 hash 2842d601 params:(  );
	OnMouseButtonUp 0x1d619 hash 7279b1ec params:( Geometry MyGeometry;PointerEvent MouseEvent;EventReply ReturnValue; );
	OnMouseButtonDown 0x1d60f hash f7a495ff params:( Geometry MyGeometry;PointerEvent MouseEvent;EventReply ReturnValue; );
	OnMouseButtonDoubleClick 0x1d602 hash 8bb33c08 params:( Geometry InMyGeometry;PointerEvent InMouseEvent;EventReply ReturnValue; );
	OnMotionDetected 0x1d5f9 hash cceccc3a params:( Geometry MyGeometry;MotionEvent InMotionEvent;EventReply ReturnValue; );
	OnKeyUp 0x1d5f4 hash cb167050 params:( Geometry MyGeometry;KeyEvent InKeyEvent;EventReply ReturnValue; );
	OnKeyDown 0x1d5ee hash ea6a7d63 params:( Geometry MyGeometry;KeyEvent InKeyEvent;EventReply ReturnValue; );
	OnKeyChar 0x1d5e8 hash ea69d069 params:( Geometry MyGeometry;CharacterEvent InCharacterEvent;EventReply ReturnValue; );
	OnInitialized 0x1d5e0 hash 97f8d78 params:(  );
	OnFocusReceived 0x1d5d7 hash 18fe3aa9 params:( Geometry MyGeometry;FocusEvent InFocusEvent;EventReply ReturnValue; );
	OnFocusLost 0x1d5d0 hash f81fed64 params:( FocusEvent InFocusEvent; );
	OnDrop 0x1d5cc hash c8145357 params:( Geometry MyGeometry;PointerEvent PointerEvent;DragDropOperation Operation;None ReturnValue; );
	OnDragOver 0x1d5c6 hash 750e66dc params:( Geometry MyGeometry;PointerEvent PointerEvent;DragDropOperation Operation;None ReturnValue; );
	OnDragLeave 0x1d5bf hash 169b964d params:( PointerEvent PointerEvent;DragDropOperation Operation; );
	OnDragEnter 0x1d5b8 hash 162228de params:( Geometry MyGeometry;PointerEvent PointerEvent;DragDropOperation Operation; );
	OnDragDetected 0x1d5b0 hash 7036ada2 params:( Geometry MyGeometry;PointerEvent PointerEvent;DragDropOperation Operation; );
	OnDragCancelled 0x1d5a7 hash 7f20cbdb params:( PointerEvent PointerEvent;DragDropOperation Operation; );
	OnAnimationStarted 0x1d59d hash ffb9d339 params:( WidgetAnimation Animation; );
	OnAnimationFinished 0x1d592 hash c68b832c params:( WidgetAnimation Animation; );
	OnAnalogValueChanged 0x1d587 hash 93b5a5fb params:( Geometry MyGeometry;AnalogInputEvent InAnalogInputEvent;EventReply ReturnValue; );
	OnAddedToFocusPath 0x1d57d hash 12b86a04 params:( FocusEvent InFocusEvent; );
	ListenForInputAction 0x44bcf hash e241ffa9 params:( None ActionName;EInputEvent EventType;None bConsume;OnInputAction__DelegateSignature Callback; );
	IsPlayingAnimation 0x44bc5 hash 96a2b4b5 params:( None ReturnValue; );
	IsListeningForInputAction 0x44bb7 hash be2ac83 params:( None ActionName;None ReturnValue; );
	IsInViewport 0x44bb0 hash 502bee38 params:( None ReturnValue; );
	IsInteractable 0x1d575 hash f6000a8f params:( None ReturnValue; );
	IsAnyAnimationPlaying 0x44ba4 hash e4c6e9bd params:( None ReturnValue; );
	IsAnimationPlayingForward 0x44b96 hash 15e0816a params:( WidgetAnimation InAnimation;None ReturnValue; );
	IsAnimationPlaying 0x44b8c hash 4fe21e35 params:( WidgetAnimation InAnimation;None ReturnValue; );
	GetOwningPlayerPawn 0x44b81 hash 5b82665a params:( Pawn ReturnValue; );
	GetIsVisible 0x44b7a hash 90e8222f params:( None ReturnValue; );
	GetAnimationCurrentTime 0x44b6d hash 4ad4f237 params:( WidgetAnimation InAnimation;None ReturnValue; );
	GetAnchorsInViewport 0x44b62 hash e474e62a params:( Anchors ReturnValue; );
	GetAlignmentInViewport 0x44b56 hash 59df96fb params:( Vector2D ReturnValue; );
	Destruct 0x1d570 hash b09eaad3 params:(  );
	Construct 0x1d56a hash 774634a params:(  );
	CancelLatentActions 0x44b4b hash a85f4224 params:(  );
	BindToAnimationStarted 0x44b3f hash c650d5dc params:( WidgetAnimation Animation;WidgetAnimationDynamicEvent__DelegateSignature Delegate; );
	BindToAnimationFinished 0x44b32 hash 6002da2f params:( WidgetAnimation Animation;WidgetAnimationDynamicEvent__DelegateSignature Delegate; );
	BindToAnimationEvent 0x44b27 hash e991e1e7 params:( WidgetAnimation Animation;WidgetAnimationDynamicEvent__DelegateSignature Delegate;UnderlyingType AnimationEvent;None UserTag; );
	AddToViewport 0x44b1f hash 85d2d071 params:( None ZOrder; );
	AddToPlayerScreen 0x44b15 hash 94bf70be params:( None ZOrder;None ReturnValue; );
};


instance 1ab5e0be980
class PanelWidget public : Widget
{
	// Fields
	TArray Slots; // 0x108

	// Functions
	RemoveChildAt 0x44de4 hash b992c4ec params:( None Index;None ReturnValue; );
	RemoveChild 0x44ddd hash b0b6ca57 params:( Widget Content;None ReturnValue; );
	HasChild 0x44dd8 hash 2a40ace5 params:( Widget Content;None ReturnValue; );
	HasAnyChildren 0x44dd0 hash 865db4b2 params:( None ReturnValue; );
	GetChildrenCount 0x44dc7 hash 8f440e57 params:( None ReturnValue; );
	GetChildIndex 0x44dbf hash deebaaa1 params:( Widget Content;None ReturnValue; );
	GetChildAt 0x44db9 hash 77488abe params:( None Index;Widget ReturnValue; );
	GetAllChildren 0x44db1 hash c7261f27 params:( ReturnValue ReturnValue; );
	ClearChildren 0x44da9 hash f6313775 params:(  );
	AddChild 0x44da4 hash 78652f92 params:( Widget Content;PanelSlot ReturnValue; );
};


instance 1ab5e0bebc0
class CanvasPanel public : PanelWidget
{
	// Fields

	// Functions
	AddChildToCanvas 0x44dec hash de9a12b1 params:( Widget Content;CanvasPanelSlot ReturnValue; );
};


instance 1ab5e114c00
class AsyncTaskDownloadImage public : BlueprintAsyncActionBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x30 property 0x1ab71b7cd80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFail; // 0x40 property 0x1ab71b7ce00 hash 0xb7a5ed1a

	// Functions
	DownloadImage 0x4681c hash 24e84040 params:( None URL;AsyncTaskDownloadImage ReturnValue; );
};


instance 1ab5e11dc00
class ContentWidget public : PanelWidget
{
	// Fields

	// Functions
	SetContent 0x46842 hash b87a5c4c params:( Widget Content;PanelSlot ReturnValue; );
	GetContentSlot 0x4683a hash 24d44c62 params:( PanelSlot ReturnValue; );
	GetContent 0x46834 hash 87fb8ec0 params:( Widget ReturnValue; );
};


instance 1ab5e11de40
class BackgroundBlur public : ContentWidget
{
	// Fields
	Margin Padding; // 0x120
	BYTE HorizontalAlignment; // 0x130
	BYTE VerticalAlignment; // 0x131
	bool bApplyAlphaToBlur; // 0x132
	float BlurStrength; // 0x134
	bool bOverrideAutoRadiusCalculation; // 0x138
	int BlurRadius; // 0x13c
	SlateBrush LowQualityFallbackBrush; // 0x140

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetLowQualityFallbackBrush 0x46870 hash c33c81e0 params:( SlateBrush InBrush; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
	SetBlurStrength 0x4685b hash 6d76a15 params:( None InStrength; );
	SetBlurRadius 0x46853 hash 1deac2ee params:( None InBlurRadius; );
	SetApplyAlphaToBlur 0x46848 hash 90be12d5 params:( None bInApplyAlphaToBlur; );
};


instance 1ab5e11d780
class PanelSlot public : Visual
{
	// Fields
	PanelWidget* Parent; // 0x28
	Widget* Content; // 0x30

};


instance 1ab5e11d9c0
class BackgroundBlurSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x38
	BYTE HorizontalAlignment; // 0x48
	BYTE VerticalAlignment; // 0x49

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e11d300
class PropertyBinding public : Object
{
	// Fields
	WeakObjectProperty SourceObject; // 0x28 property 0x1ab71b7e200 hash 0x24388009
	DynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x58

};


instance 1ab5e11d540
class BoolBinding public : PropertyBinding
{
	// Fields

	// Functions
	GetValue 0x3e870 hash 7590fc82 params:( None ReturnValue; );
};


instance 1ab5e11d0c0
class Border public : ContentWidget
{
	// Fields
	BYTE HorizontalAlignment; // 0x120
	BYTE VerticalAlignment; // 0x121
	bool bShowEffectWhenDisabled; // 0x122
	LinearColor ContentColorAndOpacity; // 0x124
	DelegateProperty ContentColorAndOpacityDelegate; // 0x134 property 0x1ab71b7f680 hash 0xe1aec4e5
	Margin Padding; // 0x144
	SlateBrush Background; // 0x158
	DelegateProperty BackgroundDelegate; // 0x1e0 property 0x1ab71b7d700 hash 0xe1aec4e5
	LinearColor BrushColor; // 0x1f0
	DelegateProperty BrushColorDelegate; // 0x200 property 0x1ab71b7d880 hash 0xe1aec4e5
	Vector2D DesiredSizeScale; // 0x210
	bool bFlipForRightToLeftFlowDirection; // 0x218
	DelegateProperty OnMouseButtonDownEvent; // 0x21c property 0x1ab71b7da00 hash 0xe1aec4e5
	DelegateProperty OnMouseButtonUpEvent; // 0x22c property 0x1ab71b7da80 hash 0xe1aec4e5
	DelegateProperty OnMouseMoveEvent; // 0x23c property 0x1ab71b7db00 hash 0xe1aec4e5
	DelegateProperty OnMouseDoubleClickEvent; // 0x24c property 0x1ab71b7db80 hash 0xe1aec4e5

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
	SetDesiredSizeScale 0x468f2 hash 2354a7b4 params:( Vector2D InScale; );
	SetContentColorAndOpacity 0x468e4 hash 2f7b7db7 params:( LinearColor InContentColorAndOpacity; );
	SetBrushFromTexture 0x468d9 hash 12bff61a params:( Texture2D Texture; );
	SetBrushFromMaterial 0x468ce hash b6a31698 params:( MaterialInterface Material; );
	SetBrushFromAsset 0x468c4 hash df340ec9 params:( SlateBrushAsset Asset; );
	SetBrushColor 0x468bc hash 57085894 params:( LinearColor InBrushColor; );
	SetBrush 0x468b7 hash 87468575 params:( SlateBrush InBrush; );
	GetDynamicMaterial 0x468ad hash b3bdd159 params:( MaterialInstanceDynamic ReturnValue; );
};


instance 1ab5e11ce80
class BorderSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x38
	BYTE HorizontalAlignment; // 0x48
	BYTE VerticalAlignment; // 0x49

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e11cc40
class BrushBinding public : PropertyBinding
{
	// Fields

	// Functions
	GetValue 0x3e870 hash 7590fc82 params:( SlateBrush ReturnValue; );
};


instance 1ab5e11ca00
class Button public : ContentWidget
{
	// Fields
	SlateWidgetStyleAsset* Style; // 0x120
	ButtonStyle WidgetStyle; // 0x128
	LinearColor ColorAndOpacity; // 0x3a0
	LinearColor BackgroundColor; // 0x3b0
	BYTE ClickMethod; // 0x3c0
	BYTE TouchMethod; // 0x3c1
	BYTE PressMethod; // 0x3c2
	bool IsFocusable; // 0x3c3
	MulticastInlineDelegateProperty OnClicked; // 0x3c8 property 0x1ab71b7eb00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnPressed; // 0x3d8 property 0x1ab71b7eb80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnReleased; // 0x3e8 property 0x1ab71b7ec00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnHovered; // 0x3f8 property 0x1ab71b7ec80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnUnHovered; // 0x408 property 0x1ab71b7ed00 hash 0xb7a5ed1a

	// Functions
	SetTouchMethod 0x46933 hash defe0eb5 params:( EButtonTouchMethod InTouchMethod; );
	SetStyle 0x4692e hash 887b4ee2 params:( ButtonStyle InStyle; );
	SetPressMethod 0x46926 hash a0c1c75f params:( EButtonPressMethod InPressMethod; );
	SetColorAndOpacity 0x44c40 hash b8bd1c3c params:( LinearColor InColorAndOpacity; );
	SetClickMethod 0x4691e hash 68cfbc38 params:( EButtonClickMethod InClickMethod; );
	SetBackgroundColor 0x46914 hash adea8370 params:( LinearColor InBackgroundColor; );
	IsPressed 0x4690e hash 6aaf2a17 params:( None ReturnValue; );
};


instance 1ab5e11c7c0
class ButtonSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x38
	BYTE HorizontalAlignment; // 0x48
	BYTE VerticalAlignment; // 0x49

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e11c580
class CanvasPanelSlot public : PanelSlot
{
	// Fields
	AnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int ZOrder; // 0x64

	// Functions
	SetZOrder 0x469a6 hash a597c4a7 params:( None InZOrder; );
	SetSize 0x469a1 hash ecdcc42c params:( Vector2D InSize; );
	SetPosition 0x40839 hash d2089706 params:( Vector2D InPosition; );
	SetOffsets 0x4699b hash 3ea5780b params:( Margin InOffset; );
	SetMinimum 0x46995 hash ac3be2cd params:( Vector2D InMinimumAnchors; );
	SetMaximum 0x4698f hash 9a4792cf params:( Vector2D InMaximumAnchors; );
	SetLayout 0x46989 hash 86394c6f params:( AnchorData InLayoutData; );
	SetAutoSize 0x46982 hash caba2ee5 params:( None InbAutoSize; );
	SetAnchors 0x4697c hash 1b63431f params:( Anchors InAnchors; );
	SetAlignment 0x46975 hash 74301db0 params:( Vector2D InAlignment; );
	GetZOrder 0x4696f hash 2fc2789b params:( None ReturnValue; );
	GetSize 0x4696a hash 5121eb20 params:( Vector2D ReturnValue; );
	GetPosition 0x405fc hash 91b017fa params:( Vector2D ReturnValue; );
	GetOffsets 0x46964 hash e26aa7f params:( Margin ReturnValue; );
	GetLayout 0x4695e hash 10640063 params:( AnchorData ReturnValue; );
	GetAutoSize 0x46957 hash 8a61afd9 params:( None ReturnValue; );
	GetAnchors 0x46951 hash eae47593 params:( Anchors ReturnValue; );
	GetAlignment 0x4694a hash 28c7bd24 params:( Vector2D ReturnValue; );
};


instance 1ab5e11c340
class CheckBox public : ContentWidget
{
	// Fields
	ECheckBoxState CheckedState; // 0x120
	DelegateProperty CheckedStateDelegate; // 0x124 property 0x1ab71b91f80 hash 0xe1aec4e5
	CheckBoxStyle WidgetStyle; // 0x138
	SlateWidgetStyleAsset* Style; // 0x6b8
	SlateBrushAsset* UncheckedImage; // 0x6c0
	SlateBrushAsset* UncheckedHoveredImage; // 0x6c8
	SlateBrushAsset* UncheckedPressedImage; // 0x6d0
	SlateBrushAsset* CheckedImage; // 0x6d8
	SlateBrushAsset* CheckedHoveredImage; // 0x6e0
	SlateBrushAsset* CheckedPressedImage; // 0x6e8
	SlateBrushAsset* UndeterminedImage; // 0x6f0
	SlateBrushAsset* UndeterminedHoveredImage; // 0x6f8
	SlateBrushAsset* UndeterminedPressedImage; // 0x700
	BYTE HorizontalAlignment; // 0x708
	Margin Padding; // 0x70c
	SlateColor BorderBackgroundColor; // 0x720
	bool IsFocusable; // 0x748
	MulticastInlineDelegateProperty OnCheckStateChanged; // 0x750 property 0x1ab71b90700 hash 0xb7a5ed1a

	// Functions
	SetIsChecked 0x469c9 hash 22685bd4 params:( None InIsChecked; );
	SetCheckedState 0x469c0 hash 8ffbe5f9 params:( UnderlyingType InCheckedState; );
	IsPressed 0x4690e hash 6aaf2a17 params:( None ReturnValue; );
	IsChecked 0x469ba hash 6a9d95e8 params:( None ReturnValue; );
	GetCheckedState 0x469b1 hash e8a2c0ed params:( UnderlyingType ReturnValue; );
};


instance 1ab5e11c100
class CheckedStateBinding public : PropertyBinding
{
	// Fields

	// Functions
	GetValue 0x3e870 hash 7590fc82 params:( UnderlyingType ReturnValue; );
};


instance 1ab5e11bec0
class CircularThrobber public : Widget
{
	// Fields
	int NumberOfPieces; // 0x108
	float Period; // 0x10c
	float Radius; // 0x110
	SlateBrushAsset* PieceImage; // 0x118
	SlateBrush Image; // 0x120
	bool bEnableRadius; // 0x1a8

	// Functions
	SetRadius 0x469f4 hash 942ca2b9 params:( None InRadius; );
	SetPeriod 0x469ee hash 8fd25ff4 params:( None InPeriod; );
	SetNumberOfPieces 0x469e4 hash e82eae48 params:( None InNumberOfPieces; );
};


instance 1ab5e11bc80
class ColorBinding public : PropertyBinding
{
	// Fields

	// Functions
	GetSlateValue 0x46a09 hash fa8329fb params:( SlateColor ReturnValue; );
	GetLinearValue 0x46a01 hash b8504a1d params:( LinearColor ReturnValue; );
};


instance 1ab5e11ba40
class ComboBox public : Widget
{
	// Fields
	TArray Items; // 0x108
	DelegateProperty OnGenerateWidgetEvent; // 0x118 property 0x1ab71b91a00 hash 0xe1aec4e5
	bool bIsFocusable; // 0x128

};


instance 1ab5e11b800
class ComboBoxString public : Widget
{
	// Fields
	TArray DefaultOptions; // 0x108
	FString SelectedOption; // 0x118
	ComboBoxStyle WidgetStyle; // 0x128
	TableRowStyle ItemStyle; // 0x500
	Margin ContentPadding; // 0xcc8
	float MaxListHeight; // 0xcd8
	bool HasDownArrow; // 0xcdc
	bool EnableGamepadNavigationMode; // 0xcdd
	SlateFontInfo Font; // 0xce0
	SlateColor ForegroundColor; // 0xd30
	bool bIsFocusable; // 0xd58
	DelegateProperty OnGenerateWidgetEvent; // 0xd5c property 0x1ab713b1000 hash 0xe1aec4e5
	MulticastInlineDelegateProperty OnSelectionChanged; // 0xd70 property 0x1ab713b1080 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnOpening; // 0xd80 property 0x1ab7134f800 hash 0xb7a5ed1a
	DelegateFunction OnSelectionChangedEvent__DelegateSignature; // 0x0 property 0x1ab713822a0 hash 0x8ad2d5e6
	DelegateFunction OnOpeningEvent__DelegateSignature; // 0x0 property 0x1ab71382380 hash 0x8ad2d5e6

	// Functions
	SetSelectedOption 0x46a72 hash c6b61b3 params:( None Option; );
	SetSelectedIndex 0x46a69 hash 45c3dc52 params:( None Index; );
	RemoveOption 0x46a62 hash e424be0c params:( None Option;None ReturnValue; );
	RefreshOptions 0x46a5a hash f170b6c0 params:(  );
	IsOpen 0x46a56 hash ba75d873 params:( None ReturnValue; );
	GetSelectedOption 0x410b1 hash 2a34c9a7 params:( None ReturnValue; );
	GetSelectedIndex 0x46a4d hash b34615c6 params:( None ReturnValue; );
	GetOptionCount 0x46a45 hash fbad0c87 params:( None ReturnValue; );
	GetOptionAtIndex 0x46a3c hash 9bb2f2b params:( None Index;None ReturnValue; );
	FindOptionIndex 0x46a33 hash c8092bf7 params:( None Option;None ReturnValue; );
	ClearSelection 0x46a2b hash 15e36332 params:(  );
	ClearOptions 0x46a24 hash 2afca6f8 params:(  );
	AddOption 0x46a1e hash a19fcaa7 params:( None Option; );
};


instance 1ab5e11b5c0
class DragDropOperation public : Object
{
	// Fields
	FString Tag; // 0x28
	Object* Payload; // 0x38
	Widget* DefaultDragVisual; // 0x40
	EDragPivot Pivot; // 0x48
	Vector2D Offset; // 0x4c
	MulticastInlineDelegateProperty OnDrop; // 0x58 property 0x1ab71b91600 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnDragCancelled; // 0x68 property 0x1ab71b91680 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnDragged; // 0x78 property 0x1ab71b91700 hash 0xb7a5ed1a

	// Functions
	Drop 0x1c7db hash 7c844cfa params:( PointerEvent PointerEvent; );
	Dragged 0x1c7d6 hash 87395fd3 params:( PointerEvent PointerEvent; );
	DragCancelled 0x1c7ce hash 7a534cde params:( PointerEvent PointerEvent; );
};


instance 1ab5e11b140
class DynamicEntryBoxBase public : Widget
{
	// Fields
	EDynamicBoxType EntryBoxType; // 0x108
	Vector2D EntrySpacing; // 0x10c
	TArray SpacingPattern; // 0x118
	SlateChildSize EntrySizeRule; // 0x128
	BYTE EntryHorizontalAlignment; // 0x130
	BYTE EntryVerticalAlignment; // 0x131
	int MaxElementSize; // 0x134
	UserWidgetPool EntryWidgetPool; // 0x148

	// Functions
	SetEntrySpacing 0x46aaa hash c0eb6c68 params:( Vector2D InEntrySpacing; );
	GetNumEntries 0x46aa2 hash 6f9b0ef params:( None ReturnValue; );
	GetAllEntries 0x46a9a hash cdce8458 params:( ReturnValue ReturnValue; );
};


instance 1ab5e11b380
class DynamicEntryBox public : DynamicEntryBoxBase
{
	// Fields
	UserWidget* EntryWidgetClass; // 0x1c8

	// Functions
	Reset 0x20859 hash e043268 params:( None bDeleteWidgets; );
	RemoveEntry 0x46ac7 hash b0de7545 params:( UserWidget EntryWidget; );
	BP_CreateEntryOfClass 0x46abb hash d272a6c7 params:( Class EntryClass;UserWidget ReturnValue; );
	BP_CreateEntry 0x46ab3 hash 4b153bfc params:( UserWidget ReturnValue; );
};


instance 1ab5e11af00
class EditableText public : Widget
{
	// Fields
	FText Text; // 0x108
	DelegateProperty TextDelegate; // 0x120 property 0x1ab713b2400 hash 0xe1aec4e5
	FText HintText; // 0x130
	DelegateProperty HintTextDelegate; // 0x148 property 0x1ab713b2480 hash 0xe1aec4e5
	EditableTextStyle WidgetStyle; // 0x158
	SlateWidgetStyleAsset* Style; // 0x370
	SlateBrushAsset* BackgroundImageSelected; // 0x378
	SlateBrushAsset* BackgroundImageComposing; // 0x380
	SlateBrushAsset* CaretImage; // 0x388
	SlateFontInfo Font; // 0x390
	SlateColor ColorAndOpacity; // 0x3e0
	bool IsReadOnly; // 0x408
	bool IsPassword; // 0x409
	float MinimumDesiredWidth; // 0x40c
	bool IsCaretMovedWhenGainFocus; // 0x410
	bool SelectAllTextWhenFocused; // 0x411
	bool RevertTextOnEscape; // 0x412
	bool ClearKeyboardFocusOnCommit; // 0x413
	bool SelectAllTextOnCommit; // 0x414
	bool AllowContextMenu; // 0x415
	BYTE KeyboardType; // 0x416
	VirtualKeyboardOptions VirtualKeyboardOptions; // 0x417
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x418
	BYTE Justification; // 0x419
	ShapedTextOptions ShapedTextOptions; // 0x41a
	MulticastInlineDelegateProperty OnTextChanged; // 0x420 property 0x1ab713b1500 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnTextCommitted; // 0x430 property 0x1ab713b1580 hash 0xb7a5ed1a
	DelegateFunction OnEditableTextCommittedEvent__DelegateSignature; // 0x0 property 0x1ab71385640 hash 0x8ad2d5e6
	DelegateFunction OnEditableTextChangedEvent__DelegateSignature; // 0x0 property 0x1ab71381d60 hash 0x8ad2d5e6

	// Functions
	SetText 0x46afa hash ecdd3f56 params:( None InText; );
	SetJustification 0x46af1 hash 6f644b8d params:( ETextJustify InJustification; );
	SetIsReadOnly 0x46ae9 hash 570edc6b params:( None InbIsReadyOnly; );
	SetIsPassword 0x46ae1 hash 75c47ea0 params:( None InbIsPassword; );
	SetHintText 0x46ada hash 972829e9 params:( None InHintText; );
	GetText 0x46ad5 hash 5122664a params:( None ReturnValue; );
};


instance 1ab5e11acc0
class EditableTextBox public : Widget
{
	// Fields
	FText Text; // 0x108
	DelegateProperty TextDelegate; // 0x120 property 0x1ab713b4c00 hash 0xe1aec4e5
	EditableTextBoxStyle WidgetStyle; // 0x130
	SlateWidgetStyleAsset* Style; // 0x920
	FText HintText; // 0x928
	DelegateProperty HintTextDelegate; // 0x940 property 0x1ab713b3700 hash 0xe1aec4e5
	SlateFontInfo Font; // 0x950
	LinearColor ForegroundColor; // 0x9a0
	LinearColor BackgroundColor; // 0x9b0
	LinearColor ReadOnlyForegroundColor; // 0x9c0
	bool IsReadOnly; // 0x9d0
	bool IsPassword; // 0x9d1
	float MinimumDesiredWidth; // 0x9d4
	Margin Padding; // 0x9d8
	bool IsCaretMovedWhenGainFocus; // 0x9e8
	bool SelectAllTextWhenFocused; // 0x9e9
	bool RevertTextOnEscape; // 0x9ea
	bool ClearKeyboardFocusOnCommit; // 0x9eb
	bool SelectAllTextOnCommit; // 0x9ec
	bool AllowContextMenu; // 0x9ed
	BYTE KeyboardType; // 0x9ee
	VirtualKeyboardOptions VirtualKeyboardOptions; // 0x9ef
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x9f0
	BYTE Justification; // 0x9f1
	ShapedTextOptions ShapedTextOptions; // 0x9f2
	MulticastInlineDelegateProperty OnTextChanged; // 0x9f8 property 0x1ab713b4180 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnTextCommitted; // 0xa08 property 0x1ab713b4200 hash 0xb7a5ed1a
	DelegateFunction OnEditableTextBoxCommittedEvent__DelegateSignature; // 0x0 property 0x1ab71384d80 hash 0x8ad2d5e6
	DelegateFunction OnEditableTextBoxChangedEvent__DelegateSignature; // 0x0 property 0x1ab71384e60 hash 0x8ad2d5e6

	// Functions
	SetText 0x46afa hash ecdd3f56 params:( None InText; );
	SetJustification 0x46af1 hash 6f644b8d params:( ETextJustify InJustification; );
	SetIsReadOnly 0x46ae9 hash 570edc6b params:( None bReadOnly; );
	SetIsPassword 0x46ae1 hash 75c47ea0 params:( None bIsPassword; );
	SetHintText 0x46ada hash 972829e9 params:( None InText; );
	SetError 0x46b13 hash 877cc1bb params:( None InError; );
	HasError 0x46b0e hash 2a6a806b params:( None ReturnValue; );
	GetText 0x46ad5 hash 5122664a params:( None ReturnValue; );
	ClearError 0x46b08 hash d8c8b296 params:(  );
};


instance 1ab5e11aa80
class ExpandableArea public : Widget
{
	// Fields
	ExpandableAreaStyle Style; // 0x110
	SlateBrush BorderBrush; // 0x230
	SlateColor BorderColor; // 0x2b8
	bool bIsExpanded; // 0x2e0
	float MaxHeight; // 0x2e4
	Margin HeaderPadding; // 0x2e8
	Margin AreaPadding; // 0x2f8
	MulticastInlineDelegateProperty OnExpansionChanged; // 0x308 property 0x1ab71b92880 hash 0xb7a5ed1a
	Widget* HeaderContent; // 0x318
	Widget* BodyContent; // 0x320

	// Functions
	SetIsExpanded_Animated 0x46b30 hash 3e1f1c38 params:( None IsExpanded; );
	SetIsExpanded 0x46b28 hash 31217b76 params:( None IsExpanded; );
	GetIsExpanded 0x46b20 hash 78ad096a params:( None ReturnValue; );
};


instance 1ab5e11a840
class FloatBinding public : PropertyBinding
{
	// Fields

	// Functions
	GetValue 0x3e870 hash 7590fc82 params:( None ReturnValue; );
};


instance 1ab5e11a600
class GridPanel public : PanelWidget
{
	// Fields
	TArray ColumnFill; // 0x120
	TArray RowFill; // 0x130

	// Functions
	SetRowFill 0x46b59 hash 3bad9f70 params:( None ColumnIndex;None Coefficient; );
	SetColumnFill 0x46b51 hash 57def466 params:( None ColumnIndex;None Coefficient; );
	AddChildToGrid 0x46b49 hash 13f5eb9b params:( Widget Content;None InRow;None InColumn;GridSlot ReturnValue; );
};


instance 1ab5e11a3c0
class GridSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x38
	BYTE HorizontalAlignment; // 0x48
	BYTE VerticalAlignment; // 0x49
	int Row; // 0x4c
	int RowSpan; // 0x50
	int Column; // 0x54
	int ColumnSpan; // 0x58
	int Layer; // 0x5c
	Vector2D Nudge; // 0x60

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetRowSpan 0x46b80 hash 3bb4dcbb params:( None InRowSpan; );
	SetRow 0x46b7c hash d0dfe369 params:( None InRow; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetNudge 0x46b77 hash 882106c4 params:( Vector2D InNudge; );
	SetLayer 0x46b72 hash 87f2374e params:( None InLayer; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
	SetColumnSpan 0x46b6a hash 57e631b1 params:( None InColumnSpan; );
	SetColumn 0x46b64 hash 72312d5f params:( None InColumn; );
};


instance 1ab5e11a180
class HorizontalBox public : PanelWidget
{
	// Fields

	// Functions
	AddChildToHorizontalBox 0x46b8e hash 1b3da588 params:( Widget Content;HorizontalBoxSlot ReturnValue; );
};


instance 1ab5e119f40
class HorizontalBoxSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x40
	SlateChildSize Size; // 0x50
	BYTE HorizontalAlignment; // 0x58
	BYTE VerticalAlignment; // 0x59

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetSize 0x469a1 hash ecdcc42c params:( SlateChildSize InSize; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e119d00
class Image public : Widget
{
	// Fields
	SlateBrush Brush; // 0x108
	DelegateProperty BrushDelegate; // 0x190 property 0x1ab71b95000 hash 0xe1aec4e5
	LinearColor ColorAndOpacity; // 0x1a0
	DelegateProperty ColorAndOpacityDelegate; // 0x1b0 property 0x1ab71b95180 hash 0xe1aec4e5
	bool bFlipForRightToLeftFlowDirection; // 0x1c0
	DelegateProperty OnMouseButtonDownEvent; // 0x1c4 property 0x1ab71b95280 hash 0xe1aec4e5

	// Functions
	SetOpacity 0x46bfc hash 5595deca params:( None InOpacity; );
	SetColorAndOpacity 0x44c40 hash b8bd1c3c params:( LinearColor InColorAndOpacity; );
	SetBrushTintColor 0x46bf2 hash b32d8393 params:( SlateColor TintColor; );
	SetBrushSize 0x46beb hash 29758a30 params:( Vector2D DesiredSize; );
	SetBrushResourceObject 0x46bdf hash d4e5e534 params:( Object ResourceObject; );
	SetBrushFromTextureDynamic 0x46bd1 hash 7bd4c1ff params:( Texture2DDynamic Texture;None bMatchSize; );
	SetBrushFromTexture 0x468d9 hash 12bff61a params:( Texture2D Texture;None bMatchSize; );
	SetBrushFromSoftTexture 0x46bc4 hash 28f30056 params:( Texture2D SoftTexture;None bMatchSize; );
	SetBrushFromSoftMaterial 0x46bb7 hash 93376854 params:( MaterialInterface SoftMaterial; );
	SetBrushFromMaterial 0x468ce hash b6a31698 params:( MaterialInterface Material; );
	SetBrushFromAtlasInterface 0x46ba9 hash 6a34996f params:( SlateTextureAtlasInterface AtlasRegion;None bMatchSize; );
	SetBrushFromAsset 0x468c4 hash df340ec9 params:( SlateBrushAsset Asset; );
	SetBrush 0x468b7 hash 87468575 params:( SlateBrush InBrush; );
	GetDynamicMaterial 0x468ad hash b3bdd159 params:( MaterialInstanceDynamic ReturnValue; );
};


instance 1ab5e119ac0
class InputKeySelector public : Widget
{
	// Fields
	ButtonStyle WidgetStyle; // 0x108
	TextBlockStyle TextStyle; // 0x380
	InputChord SelectedKey; // 0x5e8
	SlateFontInfo Font; // 0x608
	Margin Margin; // 0x658
	LinearColor ColorAndOpacity; // 0x668
	FText KeySelectionText; // 0x678
	FText NoKeySpecifiedText; // 0x690
	bool bAllowModifierKeys; // 0x6a8
	bool bAllowGamepadKeys; // 0x6a9
	TArray EscapeKeys; // 0x6b0
	MulticastInlineDelegateProperty OnKeySelected; // 0x6c0 property 0x1ab713b4300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnIsSelectingKeyChanged; // 0x6d0 property 0x1ab713b4380 hash 0xb7a5ed1a
	DelegateFunction OnKeySelected__DelegateSignature; // 0x0 property 0x1ab713844c0 hash 0x8ad2d5e6
	DelegateFunction OnIsSelectingKeyChanged__DelegateSignature; // 0x0 property 0x1ab713845a0 hash 0x8ad2d5e6

	// Functions
	SetTextBlockVisibility 0x46c52 hash 3e0dfa29 params:( UnderlyingType InVisibility; );
	SetSelectedKey 0x46c4a hash cb681d03 params:( InputChord InSelectedKey; );
	SetNoKeySpecifiedText 0x46c3e hash 4f259a88 params:( None InNoKeySpecifiedText; );
	SetKeySelectionText 0x46c33 hash a2883345 params:( None InKeySelectionText; );
	SetEscapeKeys 0x46c2b hash e667eb9e params:( InKeys InKeys; );
	SetAllowModifierKeys 0x46c20 hash f6dba77b params:( None bInAllowModifierKeys; );
	SetAllowGamepadKeys 0x46c15 hash 148d6c9b params:( None bInAllowGamepadKeys; );
	GetIsSelectingKey 0x46c0b hash edcfdae8 params:( None ReturnValue; );
};


instance 1ab5e119880
class Int32Binding public : PropertyBinding
{
	// Fields

	// Functions
	GetValue 0x3e870 hash 7590fc82 params:( None ReturnValue; );
};


instance 1ab5e119640
class InvalidationBox public : ContentWidget
{
	// Fields
	bool bCanCache; // 0x120
	bool CacheRelativeTransforms; // 0x121

	// Functions
	SetCanCache 0x46c7e hash 8e9d8117 params:( None CanCache; );
	InvalidateCache 0x46c75 hash 8310acda params:(  );
	GetCanCache 0x46c6e hash 4e45020b params:( None ReturnValue; );
};


instance 1ab5e11fdc0
class UserListEntry public : Interface
{
	// Fields

	// Functions
	BP_OnItemSelectionChanged 0x1caaa hash f7c53e12 params:( None bIsSelected; );
	BP_OnItemExpansionChanged 0x1ca9c hash afc75f81 params:( None bIsExpanded; );
	BP_OnEntryReleased 0x1ca92 hash ca9f6aca params:(  );
};


instance 1ab5e11fb80
class UserListEntryLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	IsListItemSelected 0x46cac hash f7bf3cb5 params:( UserListEntry UserListEntry;None ReturnValue; );
	IsListItemExpanded 0x46ca2 hash cbca1f55 params:( UserListEntry UserListEntry;None ReturnValue; );
	GetOwningListView 0x46c98 hash 4e05a72e params:( UserListEntry UserListEntry;ListViewBase ReturnValue; );
};


instance 1ab5e11f940
class UserObjectListEntry public : UserListEntry
{
	// Fields

	// Functions
	OnListItemObjectSet 0x1cb1c hash 3daa8610 params:( Object ListItemObject; );
};


instance 1ab5e11f700
class UserObjectListEntryLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	GetListItemObject 0x46ccf hash 3abc08c7 params:( UserObjectListEntry UserObjectListEntry;Object ReturnValue; );
};


instance 1ab5e11f280
class ListViewBase public : Widget
{
	// Fields
	UserWidget* EntryWidgetClass; // 0x108
	float WheelScrollMultiplier; // 0x110
	bool bEnableScrollAnimation; // 0x114
	bool bEnableFixedLineOffset; // 0x115
	float FixedLineScrollOffset; // 0x118
	MulticastInlineDelegateProperty BP_OnEntryGenerated; // 0x120 property 0x1ab71b94400 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty BP_OnEntryReleased; // 0x130 property 0x1ab71b94480 hash 0xb7a5ed1a
	UserWidgetPool EntryWidgetPool; // 0x140

	// Functions
	SetWheelScrollMultiplier 0x46d29 hash 57163b3c params:( None NewWheelScrollMultiplier; );
	SetScrollOffset 0x46d20 hash 862e7467 params:( None InScrollOffset; );
	SetScrollbarVisibility 0x46d14 hash 869065d params:( UnderlyingType InVisibility; );
	ScrollToTop 0x46d0d hash 84316d8a params:(  );
	ScrollToBottom 0x46d05 hash f4a94bac params:(  );
	RequestRefresh 0x46cfd hash 7b5f39fd params:(  );
	RegenerateAllEntries 0x46cf2 hash 164ecf9a params:(  );
	GetDisplayedEntryWidgets 0x46ce5 hash b6dd6ded params:( ReturnValue ReturnValue; );
};


instance 1ab5e11f4c0
class ListView public : ListViewBase
{
	// Fields
	BYTE Orientation; // 0x2d8
	BYTE SelectionMode; // 0x2d9
	EConsumeMouseWheel ConsumeMouseWheel; // 0x2da
	bool bClearSelectionOnClick; // 0x2db
	bool bIsFocusable; // 0x2dc
	float EntrySpacing; // 0x2e0
	bool bReturnFocusToSelection; // 0x2e4
	TArray ListItems; // 0x2e8
	MulticastInlineDelegateProperty BP_OnEntryInitialized; // 0x308 property 0x1ab71b95480 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty BP_OnItemClicked; // 0x318 property 0x1ab71b95500 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty BP_OnItemDoubleClicked; // 0x328 property 0x1ab71b95580 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty BP_OnItemIsHoveredChanged; // 0x338 property 0x1ab71b95600 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty BP_OnItemSelectionChanged; // 0x348 property 0x1ab71b95680 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty BP_OnItemScrolledIntoView; // 0x358 property 0x1ab71b95700 hash 0xb7a5ed1a

	// Functions
	SetSelectionMode 0x46df8 hash 95e12efc params:( ESelectionMode SelectionMode; );
	SetSelectedIndex 0x46a69 hash 45c3dc52 params:( None Index; );
	ScrollIndexIntoView 0x46ded hash ac8b8f21 params:( None Index; );
	RemoveItem 0x46de7 hash 893f5462 params:( Object Item; );
	NavigateToIndex 0x46dde hash eef7d5cf params:( None Index; );
	IsRefreshPending 0x46dd5 hash a9f66a35 params:( None ReturnValue; );
	GetNumItems 0x46dce hash 76c7c597 params:( None ReturnValue; );
	GetListItems 0x46dc7 hash 82dad523 params:( ReturnValue ReturnValue; );
	GetItemAt 0x46dc1 hash ab15149 params:( None Index;Object ReturnValue; );
	GetIndexForItem 0x46db8 hash dc3e66d3 params:( Object Item;None ReturnValue; );
	ClearListItems 0x46db0 hash d3821c0a params:(  );
	BP_SetSelectedItem 0x46da6 hash cb717f7a params:( Object Item; );
	BP_SetListItems 0x46d9d hash 1f867880 params:( InListItems InListItems; );
	BP_SetItemSelection 0x46d92 hash 7859f417 params:( Object Item;None bSelected; );
	BP_ScrollItemIntoView 0x46d86 hash 81dddc69 params:( Object Item; );
	BP_NavigateToItem 0x46d7c hash 1b365b37 params:( Object Item; );
	BP_IsItemVisible 0x46d73 hash c8c79def params:( Object Item;None ReturnValue; );
	BP_GetSelectedItems 0x46d68 hash a723a8a1 params:( Items Items;None ReturnValue; );
	BP_GetSelectedItem 0x46d5e hash 24185a6e params:( Object ReturnValue; );
	BP_GetNumItemsSelected 0x46d52 hash 84024a91 params:( None ReturnValue; );
	BP_ClearSelection 0x46d48 hash c5029e43 params:(  );
	BP_CancelScrollIntoView 0x46d3b hash ddb26aa0 params:(  );
	AddItem 0x46d36 hash 7fc87e3d params:( Object Item; );
};


instance 1ab5e11f040
class ListViewDesignerPreviewItem public : Object
{
	// Fields

};


instance 1ab5e11ee00
class MenuAnchor public : ContentWidget
{
	// Fields
	UserWidget* MenuClass; // 0x120
	DelegateProperty OnGetMenuContentEvent; // 0x128 property 0x1ab71b96a00 hash 0xe1aec4e5
	BYTE Placement; // 0x138
	bool bFitInWindow; // 0x139
	bool ShouldDeferPaintingAfterWindowContent; // 0x13a
	bool UseApplicationMenuStack; // 0x13b
	MulticastInlineDelegateProperty OnMenuOpenChanged; // 0x140 property 0x1ab71b96c80 hash 0xb7a5ed1a

	// Functions
	ToggleOpen 0x46e45 hash 1583a059 params:( None bFocusOnOpen; );
	ShouldOpenDueToClick 0x46e3a hash 66a3d36d params:( None ReturnValue; );
	SetPlacement 0x46e33 hash d5b157aa params:( EMenuPlacement InPlacement; );
	Open 0x22060 hash 7c8a4b57 params:( None bFocusMenu; );
	IsOpen 0x46a56 hash ba75d873 params:( None ReturnValue; );
	HasOpenSubMenus 0x46e2a hash 6b8a14c5 params:( None ReturnValue; );
	GetMenuPosition 0x46e21 hash d28ddcef params:( Vector2D ReturnValue; );
	FitInWindow 0x46e1a hash 1862c737 params:( None bFit; );
	Close 0x46e16 hash cf88a3b params:(  );
};


instance 1ab5e11ebc0
class MouseCursorBinding public : PropertyBinding
{
	// Fields

	// Functions
	GetValue 0x3e870 hash 7590fc82 params:( EMouseCursor ReturnValue; );
};


instance 1ab5e11e980
class MovieScene2DTransformSection public : MovieSceneSection
{
	// Fields
	MovieScene2DTransformMask TransformMask; // 0xe0
	MovieSceneFloatChannel Translation; // 0xe8
	MovieSceneFloatChannel Rotation; // 0x228
	MovieSceneFloatChannel Scale; // 0x2c8
	MovieSceneFloatChannel Shear; // 0x408

};


instance 1ab5e11e740
class MovieScene2DTransformTrack public : MovieScenePropertyTrack
{
	// Fields

};


instance 1ab5e11e500
class MovieSceneMarginSection public : MovieSceneSection
{
	// Fields
	MovieSceneFloatChannel TopCurve; // 0xe0
	MovieSceneFloatChannel LeftCurve; // 0x180
	MovieSceneFloatChannel RightCurve; // 0x220
	MovieSceneFloatChannel BottomCurve; // 0x2c0

};


instance 1ab5e11e2c0
class MovieSceneMarginTrack public : MovieScenePropertyTrack
{
	// Fields

};


instance 1ab5e11e080
class MovieSceneWidgetMaterialTrack public : MovieSceneMaterialTrack
{
	// Fields
	TArray BrushPropertyNamePath; // 0x68
	FName TrackName; // 0x78

};


instance 1ab5e124780
class TextLayoutWidget public : Widget
{
	// Fields
	ShapedTextOptions ShapedTextOptions; // 0x108
	BYTE Justification; // 0x10b
	ETextWrappingPolicy WrappingPolicy; // 0x10c
	bool AutoWrapText; // 0x10d
	float WrapTextAt; // 0x110
	Margin Margin; // 0x114
	float LineHeightPercentage; // 0x124

	// Functions
	SetJustification 0x46af1 hash 6f644b8d params:( ETextJustify InJustification; );
};


instance 1ab5e1249c0
class MultiLineEditableText public : TextLayoutWidget
{
	// Fields
	FText Text; // 0x128
	FText HintText; // 0x140
	DelegateProperty HintTextDelegate; // 0x158 property 0x1ab713b6980 hash 0xe1aec4e5
	TextBlockStyle WidgetStyle; // 0x168
	bool bIsReadOnly; // 0x3d0
	SlateFontInfo Font; // 0x3d8
	bool SelectAllTextWhenFocused; // 0x428
	bool ClearTextSelectionOnFocusLoss; // 0x429
	bool RevertTextOnEscape; // 0x42a
	bool ClearKeyboardFocusOnCommit; // 0x42b
	bool AllowContextMenu; // 0x42c
	VirtualKeyboardOptions VirtualKeyboardOptions; // 0x42d
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x42e
	MulticastInlineDelegateProperty OnTextChanged; // 0x430 property 0x1ab713b6f80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnTextCommitted; // 0x440 property 0x1ab713b7000 hash 0xb7a5ed1a
	DelegateFunction OnMultiLineEditableTextCommittedEvent__DelegateSignature; // 0x0 property 0x1ab71386d00 hash 0x8ad2d5e6
	DelegateFunction OnMultiLineEditableTextChangedEvent__DelegateSignature; // 0x0 property 0x1ab71386de0 hash 0x8ad2d5e6

	// Functions
	SetWidgetStyle 0x46eb7 hash be5da346 params:( TextBlockStyle InWidgetStyle; );
	SetText 0x46afa hash ecdd3f56 params:( None InText; );
	SetIsReadOnly 0x46ae9 hash 570edc6b params:( None bReadOnly; );
	SetHintText 0x46ada hash 972829e9 params:( None InHintText; );
	GetText 0x46ad5 hash 5122664a params:( None ReturnValue; );
	GetHintText 0x46eb0 hash 56cfaadd params:( None ReturnValue; );
};


instance 1ab5e124540
class MultiLineEditableTextBox public : TextLayoutWidget
{
	// Fields
	FText Text; // 0x128
	FText HintText; // 0x140
	DelegateProperty HintTextDelegate; // 0x158 property 0x1ab713b8200 hash 0xe1aec4e5
	EditableTextBoxStyle WidgetStyle; // 0x168
	TextBlockStyle TextStyle; // 0x958
	bool bIsReadOnly; // 0xbc0
	bool AllowContextMenu; // 0xbc1
	VirtualKeyboardOptions VirtualKeyboardOptions; // 0xbc2
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xbc3
	SlateWidgetStyleAsset* Style; // 0xbc8
	SlateFontInfo Font; // 0xbd0
	LinearColor ForegroundColor; // 0xc20
	LinearColor BackgroundColor; // 0xc30
	LinearColor ReadOnlyForegroundColor; // 0xc40
	MulticastInlineDelegateProperty OnTextChanged; // 0xc50 property 0x1ab713b6780 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnTextCommitted; // 0xc60 property 0x1ab713b6800 hash 0xb7a5ed1a
	DelegateFunction OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature; // 0x0 property 0x1ab71386600 hash 0x8ad2d5e6
	DelegateFunction OnMultiLineEditableTextBoxChangedEvent__DelegateSignature; // 0x0 property 0x1ab713866e0 hash 0x8ad2d5e6

	// Functions
	SetTextStyle 0x46ecc hash 42b7e3e7 params:( TextBlockStyle InTextStyle; );
	SetText 0x46afa hash ecdd3f56 params:( None InText; );
	SetIsReadOnly 0x46ae9 hash 570edc6b params:( None bReadOnly; );
	SetHintText 0x46ada hash 972829e9 params:( None InHintText; );
	SetError 0x46b13 hash 877cc1bb params:( None InError; );
	GetText 0x46ad5 hash 5122664a params:( None ReturnValue; );
	GetHintText 0x46eb0 hash 56cfaadd params:( None ReturnValue; );
};


instance 1ab5e124300
class NamedSlot public : ContentWidget
{
	// Fields

};


instance 1ab5e1240c0
class NamedSlotInterface public : Interface
{
	// Fields

};


instance 1ab5e123e80
class NativeWidgetHost public : Widget
{
	// Fields

};


instance 1ab5e123c40
class Overlay public : PanelWidget
{
	// Fields

	// Functions
	AddChildToOverlay 0x46eec hash 7deeb5f7 params:( Widget Content;OverlaySlot ReturnValue; );
};


instance 1ab5e123a00
class OverlaySlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x40
	BYTE HorizontalAlignment; // 0x50
	BYTE VerticalAlignment; // 0x51

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e1237c0
class ProgressBar public : Widget
{
	// Fields
	ProgressBarStyle WidgetStyle; // 0x108
	SlateWidgetStyleAsset* Style; // 0x2a8
	SlateBrushAsset* BackgroundImage; // 0x2b0
	SlateBrushAsset* FillImage; // 0x2b8
	SlateBrushAsset* MarqueeImage; // 0x2c0
	float Percent; // 0x2c8
	BYTE BarFillType; // 0x2cc
	bool bIsMarquee; // 0x2cd
	Vector2D BorderPadding; // 0x2d0
	DelegateProperty PercentDelegate; // 0x2d8 property 0x1ab71b97e80 hash 0xe1aec4e5
	LinearColor FillColorAndOpacity; // 0x2e8
	DelegateProperty FillColorAndOpacityDelegate; // 0x2f8 property 0x1ab71b97f80 hash 0xe1aec4e5

	// Functions
	SetPercent 0x46f17 hash 8a1aeb62 params:( None InPercent; );
	SetIsMarquee 0x46f10 hash 14cdb55d params:( None InbIsMarquee; );
	SetFillColorAndOpacity 0x46f04 hash c6cea563 params:( LinearColor InColor; );
};


instance 1ab5e123580
class RetainerBox public : ContentWidget
{
	// Fields
	bool RenderOnInvalidation; // 0x120
	bool RenderOnPhase; // 0x121
	int Phase; // 0x124
	int PhaseCount; // 0x128
	MaterialInterface* EffectMaterial; // 0x130
	FName TextureParameter; // 0x138

	// Functions
	SetTextureParameter 0x46f4a hash a5c4cf43 params:( None TextureParameter; );
	SetRenderingPhase 0x46f40 hash b55129c0 params:( None RenderPhase;None TotalPhases; );
	SetEffectMaterial 0x46f36 hash 40ff1fed params:( MaterialInterface EffectMaterial; );
	RequestRender 0x46f2e hash 9ee8026e params:(  );
	GetEffectMaterial 0x46f24 hash 5ec887e1 params:( MaterialInstanceDynamic ReturnValue; );
};


instance 1ab5e123340
class RichTextBlock public : TextLayoutWidget
{
	// Fields
	FText Text; // 0x128
	DataTable* TextStyleSet; // 0x140
	TArray DecoratorClasses; // 0x148
	bool bOverrideDefaultStyle; // 0x158
	TextBlockStyle DefaultTextStyleOverride; // 0x160
	float MinDesiredWidth; // 0x3c8
	TArray InstanceDecorators; // 0x638

	// Functions
	SetTextStyleSet 0x46fd5 hash d8511d13 params:( DataTable NewTextStyleSet; );
	SetText 0x46afa hash ecdd3f56 params:( None InText; );
	SetMinDesiredWidth 0x46fcb hash 463b9415 params:( None InMinDesiredWidth; );
	SetDefaultTextStyle 0x46fc0 hash 6bad4b6c params:( TextBlockStyle InDefaultTextStyle; );
	SetDefaultStrikeBrush 0x46fb4 hash f24980ec params:( SlateBrush InStrikeBrush; );
	SetDefaultShadowOffset 0x46fa8 hash a81090c3 params:( Vector2D InShadowOffset; );
	SetDefaultShadowColorAndOpacity 0x46f97 hash 626ca8c7 params:( LinearColor InShadowColorAndOpacity; );
	SetDefaultFont 0x46f8f hash e6f61bad params:( SlateFontInfo InFontInfo; );
	SetDefaultColorAndOpacity 0x46f81 hash b1e55381 params:( SlateColor InColorAndOpacity; );
	SetAutoWrapText 0x46f78 hash 14ca72e9 params:( None InAutoTextWrap; );
	GetText 0x46ad5 hash 5122664a params:( None ReturnValue; );
	GetDecoratorByClass 0x46f6d hash 8f3edb59 params:( Class DecoratorClass;RichTextBlockDecorator ReturnValue; );
	ClearAllDefaultStyleOverrides 0x46f5d hash bb86a68e params:(  );
};


instance 1ab5e123100
class RichTextBlockDecorator public : Object
{
	// Fields

};


instance 1ab5e122ec0
class RichTextBlockImageDecorator public : RichTextBlockDecorator
{
	// Fields
	DataTable* ImageSet; // 0x28

};


instance 1ab5e122c80
class SafeZone public : ContentWidget
{
	// Fields
	bool PadLeft; // 0x120
	bool PadRight; // 0x121
	bool PadTop; // 0x122
	bool PadBottom; // 0x123

	// Functions
	SetSidesToPad 0x46ffe hash b82973c1 params:( None InPadLeft;None InPadRight;None InPadTop;None InPadBottom; );
};


instance 1ab5e122a40
class SafeZoneSlot public : PanelSlot
{
	// Fields
	bool bIsTitleSafe; // 0x38
	Margin SafeAreaScale; // 0x3c
	BYTE HAlign; // 0x4c
	BYTE VAlign; // 0x4d
	Margin Padding; // 0x50

};


instance 1ab5e122800
class ScaleBox public : ContentWidget
{
	// Fields
	BYTE Stretch; // 0x120
	BYTE StretchDirection; // 0x121
	float UserSpecifiedScale; // 0x124
	bool IgnoreInheritedScale; // 0x128

	// Functions
	SetUserSpecifiedScale 0x47030 hash fa619264 params:( None InUserSpecifiedScale; );
	SetStretchDirection 0x47025 hash 204afb2f params:( EStretchDirection InStretchDirection; );
	SetStretch 0x4701f hash 94085a2e params:( EStretch InStretch; );
	SetIgnoreInheritedScale 0x47012 hash b6ac8979 params:( None bInIgnoreInheritedScale; );
};


instance 1ab5e1225c0
class ScaleBoxSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x38
	BYTE HorizontalAlignment; // 0x48
	BYTE VerticalAlignment; // 0x49

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e122380
class ScrollBar public : Widget
{
	// Fields
	ScrollBarStyle WidgetStyle; // 0x108
	SlateWidgetStyleAsset* Style; // 0x5d8
	bool bAlwaysShowScrollbar; // 0x5e0
	bool bAlwaysShowScrollbarTrack; // 0x5e1
	BYTE Orientation; // 0x5e2
	Vector2D Thickness; // 0x5e4
	Margin Padding; // 0x5ec

	// Functions
	SetState 0x47049 hash 887ae9d2 params:( None InOffsetFraction;None InThumbSizeFraction; );
};


instance 1ab5e122140
class ScrollBox public : PanelWidget
{
	// Fields
	ScrollBoxStyle WidgetStyle; // 0x120
	ScrollBarStyle WidgetBarStyle; // 0x348
	SlateWidgetStyleAsset* Style; // 0x818
	SlateWidgetStyleAsset* BarStyle; // 0x820
	BYTE Orientation; // 0x828
	ESlateVisibility ScrollBarVisibility; // 0x829
	EConsumeMouseWheel ConsumeMouseWheel; // 0x82a
	Vector2D ScrollbarThickness; // 0x82c
	Margin ScrollbarPadding; // 0x834
	bool AlwaysShowScrollbar; // 0x844
	bool AlwaysShowScrollbarTrack; // 0x845
	bool AllowOverscroll; // 0x846
	bool bAnimateWheelScrolling; // 0x847
	EDescendantScrollDestination NavigationDestination; // 0x848
	float NavigationScrollPadding; // 0x84c
	bool bAllowRightClickDragScrolling; // 0x850
	float WheelScrollMultiplier; // 0x854
	MulticastInlineDelegateProperty OnUserScrolled; // 0x858 property 0x1ab71b99900 hash 0xb7a5ed1a

	// Functions
	SetWheelScrollMultiplier 0x46d29 hash 57163b3c params:( None NewWheelScrollMultiplier; );
	SetScrollOffset 0x46d20 hash 862e7467 params:( None NewScrollOffset; );
	SetScrollbarVisibility 0x46d14 hash 869065d params:( UnderlyingType NewScrollBarVisibility; );
	SetScrollbarThickness 0x470d3 hash ce534d21 params:( Vector2D NewScrollbarThickness; );
	SetScrollbarPadding 0x470c8 hash b08d050c params:( Margin NewScrollbarPadding; );
	SetOrientation 0x470c0 hash db8ad4dd params:( EOrientation NewOrientation; );
	SetConsumeMouseWheel 0x470b5 hash f48de749 params:( UnderlyingType NewConsumeMouseWheel; );
	SetAnimateWheelScrolling 0x470a8 hash a9acd152 params:( None bShouldAnimateWheelScrolling; );
	SetAlwaysShowScrollbar 0x4709c hash c6737387 params:( None NewAlwaysShowScrollbar; );
	SetAllowOverscroll 0x47092 hash b158b63b params:( None NewAllowOverscroll; );
	ScrollWidgetIntoView 0x47087 hash 577fad6d params:( Widget WidgetToFind;None AnimateScroll;UnderlyingType ScrollDestination; );
	ScrollToStart 0x4707f hash 56336cc5 params:(  );
	ScrollToEnd 0x44d49 hash 84312d8e params:(  );
	GetViewOffsetFraction 0x47073 hash f44a1abd params:( None ReturnValue; );
	GetScrollOffsetOfEnd 0x47068 hash 8d92d2c7 params:( None ReturnValue; );
	GetScrollOffset 0x4705f hash ded54f5b params:( None ReturnValue; );
	EndInertialScrolling 0x47054 hash 531a6fc1 params:(  );
};


instance 1ab5e121f00
class ScrollBoxSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x38
	BYTE HorizontalAlignment; // 0x48
	BYTE VerticalAlignment; // 0x49

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e121cc0
class SizeBox public : ContentWidget
{
	// Fields
	float WidthOverride; // 0x130
	float HeightOverride; // 0x134
	float MinDesiredWidth; // 0x138
	float MinDesiredHeight; // 0x13c
	float MaxDesiredWidth; // 0x140
	float MaxDesiredHeight; // 0x144
	float MinAspectRatio; // 0x148
	float MaxAspectRatio; // 0x14c
	bool bOverride_WidthOverride; // 0x150
	bool bOverride_HeightOverride; // 0x150
	bool bOverride_MinDesiredWidth; // 0x150
	bool bOverride_MinDesiredHeight; // 0x150
	bool bOverride_MaxDesiredWidth; // 0x150
	bool bOverride_MaxDesiredHeight; // 0x150
	bool bOverride_MinAspectRatio; // 0x150
	bool bOverride_MaxAspectRatio; // 0x150

	// Functions
	SetWidthOverride 0x47183 hash 9b8c23f1 params:( None InWidthOverride; );
	SetMinDesiredWidth 0x46fcb hash 463b9415 params:( None InMinDesiredWidth; );
	SetMinDesiredHeight 0x47178 hash ea6ada4e params:( None InMinDesiredHeight; );
	SetMinAspectRatio 0x4716e hash fd263fd4 params:( None InMinAspectRatio; );
	SetMaxDesiredWidth 0x47164 hash 85f02617 params:( None InMaxDesiredWidth; );
	SetMaxDesiredHeight 0x47159 hash 20b1ac90 params:( None InMaxDesiredHeight; );
	SetMaxAspectRatio 0x4714f hash 6baf9996 params:( None InMaxAspectRatio; );
	SetHeightOverride 0x47145 hash 5c219eaa params:( None InHeightOverride; );
	ClearWidthOverride 0x4713b hash 583cbfcc params:(  );
	ClearMinDesiredWidth 0x47130 hash f18292b0 params:(  );
	ClearMinDesiredHeight 0x47124 hash fe91ac49 params:(  );
	ClearMinAspectRatio 0x47119 hash 4fea570f params:(  );
	ClearMaxDesiredWidth 0x4710e hash 313724b2 params:(  );
	ClearMaxDesiredHeight 0x47102 hash 34d87e8b params:(  );
	ClearMaxAspectRatio 0x470f7 hash be73b0d1 params:(  );
	ClearHeightOverride 0x470ec hash aee5b5e5 params:(  );
};


instance 1ab5e121a80
class SizeBoxSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x38
	BYTE HorizontalAlignment; // 0x58
	BYTE VerticalAlignment; // 0x59

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e121840
class SlateBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	TransformVectorLocalToAbsolute 0x47242 hash 615f9601 params:( Geometry Geometry;Vector2D LocalVector;Vector2D ReturnValue; );
	TransformVectorAbsoluteToLocal 0x47232 hash c1db8641 params:( Geometry Geometry;Vector2D AbsoluteVector;Vector2D ReturnValue; );
	TransformScalarLocalToAbsolute 0x47222 hash fb9a1024 params:( Geometry Geometry;None LocalScalar;None ReturnValue; );
	TransformScalarAbsoluteToLocal 0x47212 hash 5c160064 params:( Geometry Geometry;None AbsoluteScalar;None ReturnValue; );
	ScreenToWidgetLocal 0x47207 hash f5489ab7 params:( Object WorldContextObject;Geometry Geometry;Vector2D ScreenPosition;Vector2D LocalCoordinate; );
	ScreenToWidgetAbsolute 0x471fb hash bbe75a0b params:( Object WorldContextObject;Vector2D ScreenPosition;Vector2D AbsoluteCoordinate; );
	ScreenToViewport 0x471f2 hash e30725a8 params:( Object WorldContextObject;Vector2D ScreenPosition;Vector2D ViewportPosition; );
	LocalToViewport 0x471e9 hash feb514d3 params:( Object WorldContextObject;Geometry Geometry;Vector2D LocalCoordinate;Vector2D PixelPosition;Vector2D ViewportPosition; );
	LocalToAbsolute 0x471e0 hash a28c5212 params:( Geometry Geometry;Vector2D LocalCoordinate;Vector2D ReturnValue; );
	IsUnderLocation 0x471d7 hash 2b60fe18 params:( Geometry Geometry;Vector2D AbsoluteCoordinate;None ReturnValue; );
	GetLocalTopLeft 0x471ce hash 40ef6b8e params:( Geometry Geometry;Vector2D ReturnValue; );
	GetLocalSize 0x471c7 hash 12d7562b params:( Geometry Geometry;Vector2D ReturnValue; );
	GetAbsoluteSize 0x471be hash f764f0df params:( Geometry Geometry;Vector2D ReturnValue; );
	EqualEqual_SlateBrush 0x471b2 hash c676b271 params:( SlateBrush A;SlateBrush B;None ReturnValue; );
	AbsoluteToViewport 0x471a8 hash 1d576287 params:( Object WorldContextObject;Vector2D AbsoluteDesktopCoordinate;Vector2D PixelPosition;Vector2D ViewportPosition; );
	AbsoluteToLocal 0x4719f hash 3084252 params:( Geometry Geometry;Vector2D AbsoluteCoordinate;Vector2D ReturnValue; );
};


instance 1ab5e121600
class SlateVectorArtData public : Object
{
	// Fields
	TArray VertexData; // 0x28
	TArray IndexData; // 0x38
	MaterialInterface* Material; // 0x48
	Vector2D ExtentMin; // 0x50
	Vector2D ExtentMax; // 0x58

};


instance 1ab5e1213c0
class SlateAccessibleWidgetData public : Object
{
	// Fields
	bool bCanChildrenBeAccessible; // 0x28
	ESlateAccessibleBehavior AccessibleBehavior; // 0x29
	ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a
	FText AccessibleText; // 0x30
	DelegateProperty AccessibleTextDelegate; // 0x48 property 0x1ab71348180 hash 0xe1aec4e5
	FText AccessibleSummaryText; // 0x58
	DelegateProperty AccessibleSummaryTextDelegate; // 0x70 property 0x1ab71348200 hash 0xe1aec4e5

};


instance 1ab5e121180
class Slider public : Widget
{
	// Fields
	float Value; // 0x108
	DelegateProperty ValueDelegate; // 0x10c property 0x1ab71b9e480 hash 0xe1aec4e5
	float MinValue; // 0x11c
	float MaxValue; // 0x120
	SliderStyle WidgetStyle; // 0x128
	BYTE Orientation; // 0x468
	LinearColor SliderBarColor; // 0x46c
	LinearColor SliderHandleColor; // 0x47c
	bool IndentHandle; // 0x48c
	bool Locked; // 0x48d
	bool MouseUsesStep; // 0x48e
	bool RequiresControllerLock; // 0x48f
	float StepSize; // 0x490
	bool IsFocusable; // 0x494
	MulticastInlineDelegateProperty OnMouseCaptureBegin; // 0x498 property 0x1ab71b9c900 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnMouseCaptureEnd; // 0x4a8 property 0x1ab71b9c980 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnControllerCaptureBegin; // 0x4b8 property 0x1ab71b9ca00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnControllerCaptureEnd; // 0x4c8 property 0x1ab71b9ca80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnValueChanged; // 0x4d8 property 0x1ab71b9cb00 hash 0xb7a5ed1a

	// Functions
	SetValue 0x3e896 hash 88a6f70e params:( None InValue; );
	SetStepSize 0x3e88f hash f775a108 params:( None InValue; );
	SetSliderHandleColor 0x3e884 hash 476de7ff params:( LinearColor InValue; );
	SetSliderBarColor 0x47286 hash 596ed448 params:( LinearColor InValue; );
	SetMinValue 0x4727f hash 3259b172 params:( None InValue; );
	SetMaxValue 0x47278 hash e1db61b4 params:( None InValue; );
	SetLocked 0x3e87e hash 872a8003 params:( None InValue; );
	SetIndentHandle 0x3e875 hash c1e35b7f params:( None InValue; );
	GetValue 0x3e870 hash 7590fc82 params:( None ReturnValue; );
	GetNormalizedValue 0x4726e hash 68ac5d57 params:( None ReturnValue; );
};


instance 1ab5e120f40
class Spacer public : Widget
{
	// Fields
	Vector2D Size; // 0x108

	// Functions
	SetSize 0x469a1 hash ecdcc42c params:( Vector2D InSize; );
};


instance 1ab5e120d00
class SpinBox public : Widget
{
	// Fields
	float Value; // 0x108
	DelegateProperty ValueDelegate; // 0x10c property 0x1ab713b7480 hash 0xe1aec4e5
	SpinBoxStyle WidgetStyle; // 0x120
	SlateWidgetStyleAsset* Style; // 0x408
	float Delta; // 0x410
	float SliderExponent; // 0x414
	SlateFontInfo Font; // 0x418
	BYTE Justification; // 0x468
	float MinDesiredWidth; // 0x46c
	bool ClearKeyboardFocusOnCommit; // 0x470
	bool SelectAllTextOnCommit; // 0x471
	SlateColor ForegroundColor; // 0x478
	MulticastInlineDelegateProperty OnValueChanged; // 0x4a0 property 0x1ab713b7c00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnValueCommitted; // 0x4b0 property 0x1ab713b7c80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnBeginSliderMovement; // 0x4c0 property 0x1ab713b7d00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnEndSliderMovement; // 0x4d0 property 0x1ab713b7d80 hash 0xb7a5ed1a
	bool bOverride_MinValue; // 0x4e0
	bool bOverride_MaxValue; // 0x4e0
	bool bOverride_MinSliderValue; // 0x4e0
	bool bOverride_MaxSliderValue; // 0x4e0
	float MinValue; // 0x4e4
	float MaxValue; // 0x4e8
	float MinSliderValue; // 0x4ec
	float MaxSliderValue; // 0x4f0
	DelegateFunction OnSpinBoxValueCommittedEvent__DelegateSignature; // 0x0 property 0x1ab71388ba0 hash 0x8ad2d5e6
	DelegateFunction OnSpinBoxValueChangedEvent__DelegateSignature; // 0x0 property 0x1ab71388c80 hash 0x8ad2d5e6
	DelegateFunction OnSpinBoxBeginSliderMovement__DelegateSignature; // 0x0 property 0x1ab71388d60 hash 0x8ad2d5e6

	// Functions
	SetValue 0x3e896 hash 88a6f70e params:( None NewValue; );
	SetMinValue 0x4727f hash 3259b172 params:( None NewValue; );
	SetMinSliderValue 0x472eb hash bb4a8455 params:( None NewValue; );
	SetMaxValue 0x47278 hash e1db61b4 params:( None NewValue; );
	SetMaxSliderValue 0x472e1 hash 29d3de17 params:( None NewValue; );
	SetForegroundColor 0x44c57 hash f968bf8b params:( SlateColor InForegroundColor; );
	GetValue 0x3e870 hash 7590fc82 params:( None ReturnValue; );
	GetMinValue 0x472da hash f2013266 params:( None ReturnValue; );
	GetMinSliderValue 0x472d0 hash d913ec49 params:( None ReturnValue; );
	GetMaxValue 0x472c9 hash a182e2a8 params:( None ReturnValue; );
	GetMaxSliderValue 0x472bf hash 479d460b params:( None ReturnValue; );
	ClearMinValue 0x472b7 hash 87d7b86d params:(  );
	ClearMinSliderValue 0x472ac hash e0e9b90 params:(  );
	ClearMaxValue 0x472a4 hash 375968af params:(  );
	ClearMaxSliderValue 0x47299 hash 7c97f552 params:(  );
};


instance 1ab5e120ac0
class TextBinding public : PropertyBinding
{
	// Fields

	// Functions
	GetTextValue 0x47304 hash f77b2b87 params:( None ReturnValue; );
	GetStringValue 0x472fc hash dc52e9b9 params:( None ReturnValue; );
};


instance 1ab5e120880
class TextBlock public : TextLayoutWidget
{
	// Fields
	FText Text; // 0x128
	DelegateProperty TextDelegate; // 0x140 property 0x1ab71b9d980 hash 0xe1aec4e5
	SlateColor ColorAndOpacity; // 0x150
	DelegateProperty ColorAndOpacityDelegate; // 0x178 property 0x1ab71b9da80 hash 0xe1aec4e5
	SlateFontInfo Font; // 0x188
	SlateBrush StrikeBrush; // 0x1d8
	Vector2D ShadowOffset; // 0x260
	LinearColor ShadowColorAndOpacity; // 0x268
	DelegateProperty ShadowColorAndOpacityDelegate; // 0x278 property 0x1ab71b9dd80 hash 0xe1aec4e5
	float MinDesiredWidth; // 0x288
	bool bWrapWithInvalidationPanel; // 0x28c
	bool bAutoWrapText; // 0x28d
	bool bSimpleTextMode; // 0x28e

	// Functions
	SetText 0x46afa hash ecdd3f56 params:( None InText; );
	SetStrikeBrush 0x47346 hash b65c2427 params:( SlateBrush InStrikeBrush; );
	SetShadowOffset 0x4733d hash ee779b5e params:( Vector2D InShadowOffset; );
	SetShadowColorAndOpacity 0x47330 hash a8c4d1c2 params:( LinearColor InShadowColorAndOpacity; );
	SetOpacity 0x46bfc hash 5595deca params:( None InOpacity; );
	SetMinDesiredWidth 0x46fcb hash 463b9415 params:( None InMinDesiredWidth; );
	SetFont 0x4732b hash ecd5bb48 params:( SlateFontInfo InFontInfo; );
	SetColorAndOpacity 0x44c40 hash b8bd1c3c params:( SlateColor InColorAndOpacity; );
	SetAutoWrapText 0x46f78 hash 14ca72e9 params:( None InAutoTextWrap; );
	GetText 0x46ad5 hash 5122664a params:( None ReturnValue; );
	GetDynamicOutlineMaterial 0x4731d hash 77bd77d9 params:( MaterialInstanceDynamic ReturnValue; );
	GetDynamicFontMaterial 0x47311 hash 64bc66b0 params:( MaterialInstanceDynamic ReturnValue; );
};


instance 1ab5e120640
class Throbber public : Widget
{
	// Fields
	int NumberOfPieces; // 0x108
	bool bAnimateHorizontally; // 0x10c
	bool bAnimateVertically; // 0x10d
	bool bAnimateOpacity; // 0x10e
	SlateBrushAsset* PieceImage; // 0x110
	SlateBrush Image; // 0x118

	// Functions
	SetNumberOfPieces 0x469e4 hash e82eae48 params:( None InNumberOfPieces; );
	SetAnimateVertically 0x47369 hash 7bdacd4f params:( None bInAnimateVertically; );
	SetAnimateOpacity 0x4735f hash 378f9929 params:( None bInAnimateOpacity; );
	SetAnimateHorizontally 0x47353 hash cfb21a5f params:( None bInAnimateHorizontally; );
};


instance 1ab5e120400
class TileView public : ListView
{
	// Fields
	float EntryHeight; // 0x368
	float EntryWidth; // 0x36c
	EListItemAlignment TileAlignment; // 0x370
	bool bWrapHorizontalNavigation; // 0x371

	// Functions
	SetEntryWidth 0x47381 hash 81086763 params:( None NewWidth; );
	SetEntryHeight 0x47379 hash 7ed2175c params:( None NewHeight; );
};


instance 1ab5e1201c0
class TreeView public : ListView
{
	// Fields
	DelegateProperty BP_OnGetItemChildren; // 0x378 property 0x1ab71b9f300 hash 0xe1aec4e5
	MulticastInlineDelegateProperty BP_OnItemExpansionChanged; // 0x388 property 0x1ab71b9f380 hash 0xb7a5ed1a

	// Functions
	SetItemExpansion 0x4739b hash d9ef2115 params:( Object Item;None bExpandItem; );
	ExpandAll 0x47395 hash ae4042fe params:(  );
	CollapseAll 0x4738e hash 9bf3f331 params:(  );
};


instance 1ab5e129400
class UMGSequencePlayer public : Object
{
	// Fields
	WidgetAnimation* Animation; // 0x408

	// Functions
	SetUserTag 0x473b4 hash 2ac3050c params:( None InUserTag; );
	GetUserTag 0x473ae hash fa443780 params:( None ReturnValue; );
};


instance 1ab5e1291c0
class UniformGridPanel public : PanelWidget
{
	// Fields
	Margin SlotPadding; // 0x120
	float MinDesiredSlotWidth; // 0x130
	float MinDesiredSlotHeight; // 0x134

	// Functions
	SetSlotPadding 0x473e8 hash 3a0cc30a params:( Margin InSlotPadding; );
	SetMinDesiredSlotWidth 0x473dc hash a3fd9977 params:( None InMinDesiredSlotWidth; );
	SetMinDesiredSlotHeight 0x473cf hash 6d8bf0 params:( None InMinDesiredSlotHeight; );
	AddChildToUniformGrid 0x473c3 hash 6e507e1b params:( Widget Content;None InRow;None InColumn;UniformGridSlot ReturnValue; );
};


instance 1ab5e128f80
class UniformGridSlot public : PanelSlot
{
	// Fields
	BYTE HorizontalAlignment; // 0x38
	BYTE VerticalAlignment; // 0x39
	int Row; // 0x3c
	int Column; // 0x40

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetRow 0x46b7c hash d0dfe369 params:( None InRow; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
	SetColumn 0x46b64 hash 72312d5f params:( None InColumn; );
};


instance 1ab5e128d40
class VerticalBox public : PanelWidget
{
	// Fields

	// Functions
	AddChildToVerticalBox 0x47400 hash e1a74138 params:( Widget Content;VerticalBoxSlot ReturnValue; );
};


instance 1ab5e128b00
class VerticalBoxSlot public : PanelSlot
{
	// Fields
	SlateChildSize Size; // 0x38
	Margin Padding; // 0x40
	BYTE HorizontalAlignment; // 0x58
	BYTE VerticalAlignment; // 0x59

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetSize 0x469a1 hash ecdcc42c params:( SlateChildSize InSize; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e1288c0
class Viewport public : ContentWidget
{
	// Fields
	LinearColor BackgroundColor; // 0x120

	// Functions
	Spawn 0x47447 hash e1c08ce params:( Class ActorClass;Actor ReturnValue; );
	SetViewRotation 0x4743e hash e6c9f59c params:( Rotator Rotation; );
	SetViewLocation 0x47435 hash 359745a5 params:( Vector Location; );
	GetViewRotation 0x4742c hash 3f70d090 params:( Rotator ReturnValue; );
	GetViewportWorld 0x47423 hash 64743bad params:( World ReturnValue; );
	GetViewLocation 0x4741a hash 8e3e2099 params:( Vector ReturnValue; );
};


instance 1ab5e128680
class VisibilityBinding public : PropertyBinding
{
	// Fields

	// Functions
	GetValue 0x3e870 hash 7590fc82 params:( UnderlyingType ReturnValue; );
};


instance 1ab5e128440
class WidgetAnimation public : MovieSceneSequence
{
	// Fields
	MovieScene* MovieScene; // 0x348
	TArray AnimationBindings; // 0x350
	bool bLegacyFinishOnStop; // 0x360
	FString DisplayLabel; // 0x368

	// Functions
	UnbindFromAnimationStarted 0x44d0f hash 90ab9110 params:( UserWidget Widget;WidgetAnimationDynamicEvent__DelegateSignature Delegate; );
	UnbindFromAnimationFinished 0x44d00 hash 75b4fbe3 params:( UserWidget Widget;WidgetAnimationDynamicEvent__DelegateSignature Delegate; );
	UnbindAllFromAnimationStarted 0x44cf0 hash 26c7f849 params:( UserWidget Widget; );
	UnbindAllFromAnimationFinished 0x44ce0 hash cf5e4a3c params:( UserWidget Widget; );
	GetStartTime 0x413ca hash 6dcc1d82 params:( None ReturnValue; );
	GetEndTime 0x41393 hash 1ed46f4b params:( None ReturnValue; );
	BindToAnimationStarted 0x44b3f hash c650d5dc params:( UserWidget Widget;WidgetAnimationDynamicEvent__DelegateSignature Delegate; );
	BindToAnimationFinished 0x44b32 hash 6002da2f params:( UserWidget Widget;WidgetAnimationDynamicEvent__DelegateSignature Delegate; );
};


instance 1ab5e128200
class WidgetAnimationDelegateBinding public : DynamicBlueprintBinding
{
	// Fields
	TArray WidgetAnimationDelegateBindings; // 0x28

};


instance 1ab5e127d80
class WidgetAnimationPlayCallbackProxy public : Object
{
	// Fields
	MulticastInlineDelegateProperty Finished; // 0x28 property 0x1ab71be0780 hash 0xb7a5ed1a

	// Functions
	CreatePlayAnimationTimeRangeProxyObject 0x4749c hash 89bffc4 params:( UMGSequencePlayer Result;UserWidget Widget;WidgetAnimation InAnimation;None StartAtTime;None EndAtTime;None NumLoopsToPlay;EUMGSequencePlayMode PlayMode;None PlaybackSpeed;WidgetAnimationPlayCallbackProxy ReturnValue; );
	CreatePlayAnimationProxyObject 0x4748c hash f6ac7a68 params:( UMGSequencePlayer Result;UserWidget Widget;WidgetAnimation InAnimation;None StartAtTime;None NumLoopsToPlay;EUMGSequencePlayMode PlayMode;None PlaybackSpeed;WidgetAnimationPlayCallbackProxy ReturnValue; );
};


instance 1ab5e127b40
class WidgetBinding public : PropertyBinding
{
	// Fields

	// Functions
	GetValue 0x3e870 hash 7590fc82 params:( Widget ReturnValue; );
};


instance 1ab5e127900
class WidgetBlueprintGeneratedClass public : BlueprintGeneratedClass
{
	// Fields
	WidgetTree* WidgetTree; // 0x300
	bool bAllowTemplate; // 0x308
	bool bAllowDynamicCreation; // 0x308
	bool bValidTemplate; // 0x308
	bool bTemplateInitialized; // 0x308
	bool bCookedTemplate; // 0x308
	bool bClassRequiresNativeTick; // 0x308
	TArray Bindings; // 0x310
	TArray Animations; // 0x320
	TArray NamedSlots; // 0x330
	UserWidget* TemplateAsset; // 0x340
	UserWidget* Template; // 0x368

};


instance 1ab5e127480
class WidgetBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields
	DelegateFunction OnGameWindowCloseButtonClickedDelegate__DelegateSignature; // 0x0 property 0x1ab71380860 hash 0x8ad2d5e6

	// Functions
	UnlockMouse 0x47714 hash 48d5045a params:( EventReply Reply;EventReply ReturnValue; );
	Unhandled 0x4770e hash 53a3d238 params:( EventReply ReturnValue; );
	SetWindowTitleBarState 0x47702 hash 49b596c1 params:( Widget TitleBarContent;UnderlyingType Mode;None bTitleBarDragEnabled;None bWindowButtonsVisible;None bTitleBarVisible; );
	SetWindowTitleBarOnCloseClickedDelegate 0x476ed hash 233ae19d params:( OnGameWindowCloseButtonClickedDelegate__DelegateSignature Delegate; );
	SetWindowTitleBarCloseButtonActive 0x476db hash 7d08b6ae params:( None bActive; );
	SetUserFocus 0x3e869 hash e6a2ccd0 params:( EventReply Reply;Widget FocusWidget;None bInAllUsers;EventReply ReturnValue; );
	SetMousePosition 0x476d2 hash 12a2bc6f params:( EventReply Reply;Vector2D NewMousePosition;EventReply ReturnValue; );
	SetInputMode_UIOnlyEx 0x476c6 hash 4c39e3a2 params:( PlayerController PlayerController;Widget InWidgetToFocus;UnderlyingType InMouseLockMode; );
	SetInputMode_UIOnly 0x476bb hash f9048505 params:( PlayerController Target;Widget InWidgetToFocus;None bLockMouseToViewport; );
	SetInputMode_GameOnly 0x476af hash dd5dc701 params:( PlayerController PlayerController; );
	SetInputMode_GameAndUIEx 0x476a2 hash f30a5f0d params:( PlayerController PlayerController;Widget InWidgetToFocus;UnderlyingType InMouseLockMode;None bHideCursorDuringCapture; );
	SetInputMode_GameAndUI 0x47696 hash 881929b0 params:( PlayerController Target;Widget InWidgetToFocus;None bLockMouseToViewport;None bHideCursorDuringCapture; );
	SetHardwareCursor 0x4768c hash bfc8e13d params:( Object WorldContextObject;EMouseCursor CursorShape;None CursorName;Vector2D HotSpot;None ReturnValue; );
	SetFocusToGameViewport 0x47680 hash d143e78e params:(  );
	SetColorVisionDeficiencyType 0x47671 hash 7844347d params:( UnderlyingType Type;None Severity;None CorrectDeficiency;None ShowCorrectionWithDeficiency; );
	SetBrushResourceToTexture 0x47663 hash e3717f1 params:( SlateBrush Brush;Texture2D Texture; );
	SetBrushResourceToMaterial 0x47655 hash 20fe734f params:( SlateBrush Brush;MaterialInterface Material; );
	RestorePreviousWindowTitleBarState 0x47643 hash b6ddaad6 params:(  );
	ReleaseMouseCapture 0x47638 hash 5896faa3 params:( EventReply Reply;EventReply ReturnValue; );
	ReleaseJoystickCapture 0x4762c hash 40f517ca params:( EventReply Reply;None bInAllJoysticks;EventReply ReturnValue; );
	NoResourceBrush 0x47623 hash 96eaa94e params:( SlateBrush ReturnValue; );
	MakeBrushFromTexture 0x47618 hash 9276ac2c params:( Texture2D Texture;None Width;None Height;SlateBrush ReturnValue; );
	MakeBrushFromMaterial 0x4760c hash 2d308eea params:( MaterialInterface Material;None Width;None Height;SlateBrush ReturnValue; );
	MakeBrushFromAsset 0x47602 hash 2342185b params:( SlateBrushAsset BrushAsset;SlateBrush ReturnValue; );
	LockMouse 0x475fc hash bba71c37 params:( EventReply Reply;Widget CapturingWidget;EventReply ReturnValue; );
	IsDragDropping 0x475f4 hash 7769cee2 params:( None ReturnValue; );
	Handled 0x475ef hash 94644ed5 params:( EventReply ReturnValue; );
	GetSafeZonePadding 0x475e5 hash 1095f437 params:( Object WorldContextObject;Vector4 SafePadding;Vector2D SafePaddingScale;Vector4 SpillOverPadding; );
	GetKeyEventFromAnalogInputEvent 0x475d4 hash 60407568 params:( AnalogInputEvent Event;KeyEvent ReturnValue; );
	GetInputEventFromPointerEvent 0x475c4 hash 1b04bb0e params:( PointerEvent Event;InputEvent ReturnValue; );
	GetInputEventFromNavigationEvent 0x475b3 hash a5b6343d params:( NavigationEvent Event;InputEvent ReturnValue; );
	GetInputEventFromKeyEvent 0x475a5 hash 49141776 params:( KeyEvent Event;InputEvent ReturnValue; );
	GetInputEventFromCharacterEvent 0x47594 hash 85918a7a params:( CharacterEvent Event;InputEvent ReturnValue; );
	GetDynamicMaterial 0x468ad hash b3bdd159 params:( SlateBrush Brush;MaterialInstanceDynamic ReturnValue; );
	GetDragDroppingContent 0x47588 hash a16ec61 params:( DragDropOperation ReturnValue; );
	GetBrushResourceAsTexture2D 0x47579 hash b8f8988c params:( SlateBrush Brush;Texture2D ReturnValue; );
	GetBrushResourceAsMaterial 0x4756b hash 70870c54 params:( SlateBrush Brush;MaterialInterface ReturnValue; );
	GetBrushResource 0x47562 hash de8986d1 params:( SlateBrush Brush;Object ReturnValue; );
	GetAllWidgetsWithInterface 0x47554 hash 8ee776e2 params:( Object WorldContextObject;FoundWidgets FoundWidgets;Class Interface;None TopLevelOnly; );
	GetAllWidgetsOfClass 0x47549 hash ed2b0820 params:( Object WorldContextObject;FoundWidgets FoundWidgets;Class WidgetClass;None TopLevelOnly; );
	EndDragDrop 0x47542 hash d2c3b0f params:( EventReply Reply;EventReply ReturnValue; );
	DrawTextFormatted 0x47538 hash 9c83c31e params:( PaintContext Context;None Text;Vector2D Position;Font Font;None FontSize;None FontTypeFace;LinearColor Tint; );
	DrawText 0x43aac hash 6f7c7a18 params:( PaintContext Context;None inString;Vector2D Position;LinearColor Tint; );
	DrawLines 0x47532 hash 5e7cfe8e params:( PaintContext Context;Points Points;LinearColor Tint;None bAntiAlias;None Thickness; );
	DrawLine 0x43a86 hash 6f7826bb params:( PaintContext Context;Vector2D PositionA;Vector2D PositionB;LinearColor Tint;None bAntiAlias;None Thickness; );
	DrawBox 0x4752d hash 874189dc params:( PaintContext Context;Vector2D Position;Vector2D Size;SlateBrushAsset Brush;LinearColor Tint; );
	DismissAllMenus 0x47524 hash 1452c7e2 params:(  );
	DetectDragIfPressed 0x47519 hash f8f66361 params:( PointerEvent PointerEvent;Widget WidgetDetectingDrag;Key DragKey;EventReply ReturnValue; );
	DetectDrag 0x47513 hash 996c7bdc params:( EventReply Reply;Widget WidgetDetectingDrag;Key DragKey;EventReply ReturnValue; );
	CreateDragDropOperation 0x47506 hash 6d9464fd params:( Class OperationClass;DragDropOperation ReturnValue; );
	Create 0x47502 hash ac709e99 params:( Object WorldContextObject;Class WidgetType;PlayerController OwningPlayer;UserWidget ReturnValue; );
	ClearUserFocus 0x474fa hash ebe1b32b params:( EventReply Reply;None bInAllUsers;EventReply ReturnValue; );
	CaptureMouse 0x474f3 hash 70463382 params:( EventReply Reply;Widget CapturingWidget;EventReply ReturnValue; );
	CaptureJoystick 0x474ea hash 335dc5a9 params:( EventReply Reply;Widget CapturingWidget;None bInAllJoysticks;EventReply ReturnValue; );
	CancelDragDrop 0x474e2 hash ebede71e params:(  );
};


instance 1ab5e127240
class WidgetComponent public : MeshComponent
{
	// Fields
	EWidgetSpace Space; // 0x400
	EWidgetTimingPolicy TimingPolicy; // 0x401
	UserWidget* WidgetClass; // 0x408
	IntPoint DrawSize; // 0x410
	bool bManuallyRedraw; // 0x418
	bool bRedrawRequested; // 0x419
	float RedrawTime; // 0x41c
	IntPoint CurrentDrawSize; // 0x428
	bool bDrawAtDesiredSize; // 0x430
	Vector2D Pivot; // 0x434
	bool bReceiveHardwareInput; // 0x43c
	bool bWindowFocusable; // 0x43d
	EWindowVisibility WindowVisibility; // 0x43e
	bool bApplyGammaCorrection; // 0x43f
	LocalPlayer* OwnerPlayer; // 0x440
	LinearColor BackgroundColor; // 0x448
	LinearColor TintColorAndOpacity; // 0x458
	float OpacityFromTexture; // 0x468
	EWidgetBlendMode BlendMode; // 0x46c
	bool bIsTwoSided; // 0x46d
	bool TickWhenOffscreen; // 0x46e
	UserWidget* Widget; // 0x470
	BodySetup* BodySetup; // 0x498
	MaterialInterface* TranslucentMaterial; // 0x4a0
	MaterialInterface* TranslucentMaterial_OneSided; // 0x4a8
	MaterialInterface* OpaqueMaterial; // 0x4b0
	MaterialInterface* OpaqueMaterial_OneSided; // 0x4b8
	MaterialInterface* MaskedMaterial; // 0x4c0
	MaterialInterface* MaskedMaterial_OneSided; // 0x4c8
	TextureRenderTarget2D* RenderTarget; // 0x4d0
	MaterialInstanceDynamic* MaterialInstance; // 0x4d8
	bool bAddedToScreen; // 0x4e0
	bool bEditTimeUsable; // 0x4e1
	FName SharedLayerName; // 0x4e4
	int LayerZOrder; // 0x4ec
	EWidgetGeometryMode GeometryMode; // 0x4f0
	float CylinderArcAngle; // 0x4f4

	// Functions
	SetWindowVisibility 0x47844 hash 93984731 params:( UnderlyingType InVisibility; );
	SetWindowFocusable 0x4783a hash e91b6bbd params:( None bInWindowFocusable; );
	SetWidgetSpace 0x47832 hash be5b0a81 params:( UnderlyingType NewSpace; );
	SetWidget 0x4782c hash a0672755 params:( UserWidget Widget; );
	SetTwoSided 0x47825 hash dff8f434 params:( None bWantTwoSided; );
	SetTintColorAndOpacity 0x47819 hash fa1d2ffb params:( LinearColor NewTintColorAndOpacity; );
	SetTickWhenOffscreen 0x4780e hash a2947289 params:( None bWantTickWhenOffscreen; );
	SetRedrawTime 0x47806 hash a3505065 params:( None InRedrawTime; );
	SetPivot 0x47801 hash 883ef0e3 params:( Vector2D InPivot; );
	SetOwnerPlayer 0x477f9 hash 16da0109 params:( LocalPlayer LocalPlayer; );
	SetManuallyRedraw 0x477ef hash 43aadf39 params:( None bUseManualRedraw; );
	SetGeometryMode 0x477e6 hash 955a95c2 params:( UnderlyingType InGeometryMode; );
	SetDrawSize 0x477df hash 7ccfb75a params:( Vector2D Size; );
	SetDrawAtDesiredSize 0x477d4 hash 288cc6cf params:( None bInDrawAtDesiredSize; );
	SetCylinderArcAngle 0x477c9 hash b7df8528 params:( None InCylinderArcAngle; );
	SetBackgroundColor 0x46914 hash adea8370 params:( LinearColor NewBackgroundColor; );
	RequestRedraw 0x477c1 hash 9ee2c1b3 params:(  );
	GetWindowVisiblility 0x477b6 hash 7b95a751 params:( UnderlyingType ReturnValue; );
	GetWindowFocusable 0x477ac hash c011d231 params:( None ReturnValue; );
	GetWidgetSpace 0x477a4 hash f75856f5 params:( UnderlyingType ReturnValue; );
	GetUserWidgetObject 0x47799 hash 77b977ff params:( UserWidget ReturnValue; );
	GetTwoSided 0x47792 hash 9fa07528 params:( None ReturnValue; );
	GetTickWhenOffscreen 0x47787 hash 10be45fd params:( None ReturnValue; );
	GetRenderTarget 0x4777e hash a7e896c params:( TextureRenderTarget2D ReturnValue; );
	GetRedrawTime 0x47776 hash eadbde59 params:( None ReturnValue; );
	GetPivot 0x47771 hash 7528f657 params:( Vector2D ReturnValue; );
	GetOwnerPlayer 0x47769 hash 4fd74d7d params:( LocalPlayer ReturnValue; );
	GetMaterialInstance 0x4775e hash 201dc289 params:( MaterialInstanceDynamic ReturnValue; );
	GetManuallyRedraw 0x47754 hash 6174472d params:( None ReturnValue; );
	GetGeometryMode 0x4774b hash ee0170b6 params:( UnderlyingType ReturnValue; );
	GetDrawSize 0x47744 hash 3c77384e params:( Vector2D ReturnValue; );
	GetDrawAtDesiredSize 0x47739 hash 96b69a43 params:( None ReturnValue; );
	GetCylinderArcAngle 0x4772e hash 6da2ba1c params:( None ReturnValue; );
	GetCurrentDrawSize 0x47724 hash e9ddc8b1 params:( Vector2D ReturnValue; );
};


instance 1ab5e127000
class WidgetInteractionComponent public : SceneComponent
{
	// Fields
	MulticastInlineDelegateProperty OnHoveredWidgetChanged; // 0x1f0 property 0x1ab71be4680 hash 0xb7a5ed1a
	int VirtualUserIndex; // 0x210
	float PointerIndex; // 0x214
	BYTE TraceChannel; // 0x218
	float InteractionDistance; // 0x21c
	EWidgetInteractionSource InteractionSource; // 0x220
	bool bEnableHitTesting; // 0x221
	bool bShowDebug; // 0x222
	LinearColor DebugColor; // 0x224
	HitResult CustomHitResult; // 0x2b0
	Vector2D LocalHitLocation; // 0x338
	Vector2D LastLocalHitLocation; // 0x340
	WidgetComponent* HoveredWidgetComponent; // 0x348
	HitResult LastHitResult; // 0x350
	bool bIsHoveredWidgetInteractable; // 0x3d8
	bool bIsHoveredWidgetFocusable; // 0x3d9
	bool bIsHoveredWidgetHitTestVisible; // 0x3da

	// Functions
	SetFocus 0x3e7bc hash 878cf611 params:( Widget FocusWidget; );
	SetCustomHitResult 0x478da hash 8ba51eb0 params:( HitResult HitResult; );
	SendKeyChar 0x478d3 hash 99707216 params:( None Characters;None bRepeat;None ReturnValue; );
	ScrollWheel 0x478cc hash 84642769 params:( None ScrollDelta; );
	ReleasePointerKey 0x478c2 hash 18227750 params:( Key Key; );
	ReleaseKey 0x478bc hash 6b46ce0f params:( Key Key;None ReturnValue; );
	PressPointerKey 0x478b3 hash e4aef9c params:( Key Key; );
	PressKey 0x478ae hash 8baf43db params:( Key Key;None bRepeat;None ReturnValue; );
	PressAndReleaseKey 0x478a4 hash 70040b6f params:( Key Key;None ReturnValue; );
	IsOverInteractableWidget 0x47897 hash 17768bcf params:( None ReturnValue; );
	IsOverHitTestVisibleWidget 0x47889 hash 5554e994 params:( None ReturnValue; );
	IsOverFocusableWidget 0x4787d hash 2fbe8275 params:( None ReturnValue; );
	GetLastHitResult 0x47874 hash 90bd2bdd params:( HitResult ReturnValue; );
	GetHoveredWidgetComponent 0x47866 hash 8a703da9 params:( WidgetComponent ReturnValue; );
	Get2DHitLocation 0x4785d hash 4ae8bbb9 params:( Vector2D ReturnValue; );
};


instance 1ab5e126dc0
class WidgetLayoutLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	SlotAsWrapBoxSlot 0x479dc hash 87180020 params:( Widget Widget;WrapBoxSlot ReturnValue; );
	SlotAsWidgetSwitcherSlot 0x479cf hash 79b5aa4a params:( Widget Widget;WidgetSwitcherSlot ReturnValue; );
	SlotAsVerticalBoxSlot 0x479c3 hash d4380680 params:( Widget Widget;VerticalBoxSlot ReturnValue; );
	SlotAsUniformGridSlot 0x479b7 hash db2afce3 params:( Widget Widget;UniformGridSlot ReturnValue; );
	SlotAsSizeBoxSlot 0x479ad hash 8698f461 params:( Widget Widget;SizeBoxSlot ReturnValue; );
	SlotAsScrollBoxSlot 0x479a2 hash c56dc635 params:( Widget Widget;ScrollBoxSlot ReturnValue; );
	SlotAsScaleBoxSlot 0x47998 hash b67ef32e params:( Widget Widget;ScaleBoxSlot ReturnValue; );
	SlotAsSafeBoxSlot 0x4798e hash 4c8b9745 params:( Widget Widget;SafeZoneSlot ReturnValue; );
	SlotAsOverlaySlot 0x47984 hash 9749dfbf params:( Widget Widget;OverlaySlot ReturnValue; );
	SlotAsHorizontalBoxSlot 0x47977 hash 7b199450 params:( Widget Widget;HorizontalBoxSlot ReturnValue; );
	SlotAsGridSlot 0x4796f hash 8a4d9923 params:( Widget Widget;GridSlot ReturnValue; );
	SlotAsCanvasSlot 0x47966 hash afa38cb9 params:( Widget Widget;CanvasPanelSlot ReturnValue; );
	SlotAsBorderSlot 0x4795d hash 5b18c19b params:( Widget Widget;BorderSlot ReturnValue; );
	RemoveAllWidgets 0x47954 hash e08692e3 params:( Object WorldContextObject; );
	ProjectWorldLocationToWidgetPosition 0x47941 hash 53ad6e39 params:( PlayerController PlayerController;Vector WorldLocation;Vector2D ScreenPosition;None ReturnValue; );
	GetViewportWidgetGeometry 0x47933 hash 69760375 params:( Object WorldContextObject;Geometry ReturnValue; );
	GetViewportSize 0x4411e hash ebc32c20 params:( Object WorldContextObject;Vector2D ReturnValue; );
	GetViewportScale 0x4792a hash 6424fccd params:( Object WorldContextObject;None ReturnValue; );
	GetPlayerScreenWidgetGeometry 0x4791a hash 508a8082 params:( PlayerController PlayerController;Geometry ReturnValue; );
	GetMousePositionScaledByDPI 0x4790b hash dacad427 params:( PlayerController Player;None LocationX;None LocationY;None ReturnValue; );
	GetMousePositionOnViewport 0x478fd hash 298d7140 params:( Object WorldContextObject;Vector2D ReturnValue; );
	GetMousePositionOnPlatform 0x478ef hash 7d60c265 params:( Vector2D ReturnValue; );
};


instance 1ab5e126b80
class WidgetNavigation public : Object
{
	// Fields
	WidgetNavigationData Up; // 0x28
	WidgetNavigationData Down; // 0x4c
	WidgetNavigationData Left; // 0x70
	WidgetNavigationData Right; // 0x94
	WidgetNavigationData Next; // 0xb8
	WidgetNavigationData Previous; // 0xdc

};


instance 1ab5e126940
class WidgetSwitcher public : PanelWidget
{
	// Fields
	int ActiveWidgetIndex; // 0x120

	// Functions
	SetActiveWidgetIndex 0x47a25 hash acc24209 params:( None Index; );
	SetActiveWidget 0x47a1c hash 94d54a11 params:( Widget Widget; );
	GetWidgetAtIndex 0x47a13 hash ccda0a76 params:( None Index;Widget ReturnValue; );
	GetNumWidgets 0x47a0b hash 63c08c0c params:( None ReturnValue; );
	GetActiveWidgetIndex 0x47a00 hash 1aec157d params:( None ReturnValue; );
	GetActiveWidget 0x479f7 hash ed7c2505 params:( Widget ReturnValue; );
};


instance 1ab5e126700
class WidgetSwitcherSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x40
	BYTE HorizontalAlignment; // 0x50
	BYTE VerticalAlignment; // 0x51

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e1264c0
class WidgetTree public : Object
{
	// Fields
	Widget* RootWidget; // 0x28

};


instance 1ab5e126280
class WindowTitleBarArea public : ContentWidget
{
	// Fields
	bool bWindowButtonsEnabled; // 0x120
	bool bDoubleClickTogglesFullscreen; // 0x121

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e126040
class WindowTitleBarAreaSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x38
	BYTE HorizontalAlignment; // 0x48
	BYTE VerticalAlignment; // 0x49

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
};


instance 1ab5e125e00
class WrapBox public : PanelWidget
{
	// Fields
	Vector2D InnerSlotPadding; // 0x120
	float WrapWidth; // 0x128
	bool bExplicitWrapWidth; // 0x12c

	// Functions
	SetInnerSlotPadding 0x47a65 hash b335fc06 params:( Vector2D InPadding; );
	AddChildToWrapBox 0x47a5b hash dc21cdd8 params:( Widget Content;WrapBoxSlot ReturnValue; );
};


instance 1ab5e125bc0
class WrapBoxSlot public : PanelSlot
{
	// Fields
	Margin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	BYTE HorizontalAlignment; // 0x50
	BYTE VerticalAlignment; // 0x51

	// Functions
	SetVerticalAlignment 0x4687e hash b6bce3aa params:( EVerticalAlignment InVerticalAlignment; );
	SetPadding 0x44c8c hash 7fc98f28 params:( Margin InPadding; );
	SetHorizontalAlignment 0x46864 hash 29851afa params:( EHorizontalAlignment InHorizontalAlignment; );
	SetFillSpanWhenLessThan 0x47a81 hash d39a3c7e params:( None InFillSpanWhenLessThan; );
	SetFillEmptySpace 0x47a77 hash 9aeaf6d3 params:( None InbFillEmptySpace; );
};


instance 1ab70e9b5c0
struct EventReply 
{
	// Fields

};


instance 1ab70e9b380
struct WidgetTransform 
{
	// Fields
	Vector2D Translation; // 0x0
	Vector2D Scale; // 0x8
	Vector2D Shear; // 0x10
	float Angle; // 0x18

};


instance 1ab70e9b2c0
struct PaintContext 
{
	// Fields

};


instance 1ab70e9da80
struct ShapedTextOptions 
{
	// Fields
	bool bOverride_TextShapingMethod; // 0x0
	bool bOverride_TextFlowDirection; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2

};


instance 1ab71519040
struct AnchorData 
{
	// Fields
	Margin Offsets; // 0x0
	Anchors Anchors; // 0x10
	Vector2D Alignment; // 0x20

};


instance 1ab71518f80
struct DynamicPropertyPath 
{
	// Fields

};


instance 1ab71518ec0
struct MovieScene2DTransformMask 
{
	// Fields
	int Mask; // 0x0

};


instance 1ab71518e00
struct MovieScene2DTransformSectionTemplate 
{
	// Fields
	MovieSceneFloatChannel Translation; // 0x48
	MovieSceneFloatChannel Rotation; // 0x188
	MovieSceneFloatChannel Scale; // 0x228
	MovieSceneFloatChannel Shear; // 0x368
	EMovieSceneBlendType BlendType; // 0x4a8
	MovieScene2DTransformMask Mask; // 0x4ac

};


instance 1ab71518d40
struct MovieSceneMarginSectionTemplate 
{
	// Fields
	MovieSceneFloatChannel TopCurve; // 0x48
	MovieSceneFloatChannel LeftCurve; // 0xe8
	MovieSceneFloatChannel RightCurve; // 0x188
	MovieSceneFloatChannel BottomCurve; // 0x228
	EMovieSceneBlendType BlendType; // 0x2c8

};


instance 1ab71518c80
struct MovieSceneWidgetMaterialSectionTemplate 
{
	// Fields
	TArray BrushPropertyNamePath; // 0x60

};


instance 1ab71518bc0
struct RichTextStyleRow 
{
	// Fields
	TextBlockStyle TextStyle; // 0x8

};


instance 1ab71518b00
struct RichImageRow 
{
	// Fields
	SlateBrush Brush; // 0x8

};


instance 1ab71518a40
struct SlateMeshVertex 
{
	// Fields
	Vector2D Position; // 0x0
	Color Color; // 0x8
	Vector2D UV0; // 0xc
	Vector2D UV1; // 0x14
	Vector2D UV2; // 0x1c
	Vector2D UV3; // 0x24
	Vector2D UV4; // 0x2c
	Vector2D UV5; // 0x34

};


instance 1ab71518980
struct SlateChildSize 
{
	// Fields
	float Value; // 0x0
	BYTE SizeRule; // 0x4

};


instance 1ab715188c0
struct NamedSlotBinding 
{
	// Fields
	FName Name; // 0x0
	Widget* Content; // 0x8

};


instance 1ab71518800
struct AnimationEventBinding 
{
	// Fields
	WidgetAnimation* Animation; // 0x0
	DelegateProperty Delegate; // 0x8 property 0x1ab7152d500 hash 0xe1aec4e5
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c

};


instance 1ab71518740
struct UserWidgetPool 
{
	// Fields
	TArray ActiveWidgets; // 0x0
	TArray InactiveWidgets; // 0x10

};


instance 1ab71518680
struct WidgetAnimationBinding 
{
	// Fields
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	Guid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20

};


instance 1ab715185c0
struct BlueprintWidgetAnimationDelegateBinding 
{
	// Fields
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14

};


instance 1ab71518500
struct DelegateRuntimeBinding 
{
	// Fields
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	DynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48

};


instance 1ab71518200
struct WidgetComponentInstanceData 
{
	// Fields

};


instance 1ab71518140
struct WidgetNavigationData 
{
	// Fields
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	WeakObjectProperty Widget; // 0xc property 0x1ab7152c780 hash 0x24388009
	DelegateProperty CustomDelegate; // 0x14 property 0x1ab7152c800 hash 0xe1aec4e5

};


