instance 1ab5e0dce80
class FontBulkData public : Object
{
	// Fields

};


instance 1ab5e0dcc40
class FontFaceInterface public : Interface
{
	// Fields

};


instance 1ab5e0dca00
class FontProviderInterface public : Interface
{
	// Fields

};


instance 1ab5e0dc7c0
class SlateTypes public : Object
{
	// Fields

};


instance 1ab5e0dc580
class SlateWidgetStyleAsset public : Object
{
	// Fields
	SlateWidgetStyleContainerBase* CustomStyle; // 0x28

};


instance 1ab5e0dc340
class SlateWidgetStyleContainerBase public : Object
{
	// Fields

};


instance 1ab5e0dc100
class SlateWidgetStyleContainerInterface public : Interface
{
	// Fields

};


instance 1ab70e9b980
struct Geometry 
{
	// Fields

};


instance 1ab70e9b800
struct SlateBrush 
{
	// Fields
	Vector2D ImageSize; // 0x8
	Margin Margin; // 0x10
	SlateColor TintColor; // 0x20
	Object* ResourceObject; // 0x48
	FName ResourceName; // 0x50
	Box2D UVRegion; // 0x58
	BYTE DrawAs; // 0x6c
	BYTE Tiling; // 0x6d
	BYTE Mirroring; // 0x6e
	BYTE ImageType; // 0x6f
	bool bIsDynamicallyLoaded; // 0x80
	bool bHasUObject; // 0x80

};


instance 1ab70e9b740
struct SlateColor 
{
	// Fields
	LinearColor SpecifiedColor; // 0x0
	BYTE ColorUseRule; // 0x10

};


instance 1ab70e9b680
struct Margin 
{
	// Fields
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc

};


instance 1ab70e9b500
struct InputEvent 
{
	// Fields

};


instance 1ab70e9b440
struct PointerEvent 
{
	// Fields

};


instance 1ab70e9b200
struct CharacterEvent 
{
	// Fields

};


instance 1ab70e9b140
struct KeyEvent 
{
	// Fields

};


instance 1ab70e9b080
struct NavigationEvent 
{
	// Fields

};


instance 1ab70e9afc0
struct AnalogInputEvent 
{
	// Fields

};


instance 1ab70e9af00
struct SlateFontInfo 
{
	// Fields
	Object* FontObject; // 0x0
	Object* FontMaterial; // 0x8
	FontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int Size; // 0x48

};


instance 1ab70e9ae40
struct FontOutlineSettings 
{
	// Fields
	int OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	Object* OutlineMaterial; // 0x8
	LinearColor OutlineColor; // 0x10

};


instance 1ab70e9ad80
struct SlateWidgetStyle 
{
	// Fields

};


instance 1ab70e9de40
struct TableRowStyle 
{
	// Fields
	SlateBrush SelectorFocusedBrush; // 0x8
	SlateBrush ActiveHoveredBrush; // 0x90
	SlateBrush ActiveBrush; // 0x118
	SlateBrush InactiveHoveredBrush; // 0x1a0
	SlateBrush InactiveBrush; // 0x228
	SlateBrush EvenRowBackgroundHoveredBrush; // 0x2b0
	SlateBrush EvenRowBackgroundBrush; // 0x338
	SlateBrush OddRowBackgroundHoveredBrush; // 0x3c0
	SlateBrush OddRowBackgroundBrush; // 0x448
	SlateColor TextColor; // 0x4d0
	SlateColor SelectedTextColor; // 0x4f8
	SlateBrush DropIndicator_Above; // 0x520
	SlateBrush DropIndicator_Onto; // 0x5a8
	SlateBrush DropIndicator_Below; // 0x630
	SlateBrush ActiveHighlightedBrush; // 0x6b8
	SlateBrush InactiveHighlightedBrush; // 0x740

};


instance 1ab70e9dd80
struct ComboBoxStyle 
{
	// Fields
	ComboButtonStyle ComboButtonStyle; // 0x8
	SlateSound PressedSlateSound; // 0x3a8
	SlateSound SelectionChangeSlateSound; // 0x3c0

};


instance 1ab70e9dcc0
struct SlateSound 
{
	// Fields
	Object* ResourceObject; // 0x0

};


instance 1ab70e9dc00
struct ComboButtonStyle 
{
	// Fields
	ButtonStyle ButtonStyle; // 0x8
	SlateBrush DownArrowImage; // 0x280
	SlateBrush MenuBorderBrush; // 0x308
	Margin MenuBorderPadding; // 0x390

};


instance 1ab70e9db40
struct ButtonStyle 
{
	// Fields
	SlateBrush Normal; // 0x8
	SlateBrush Hovered; // 0x90
	SlateBrush Pressed; // 0x118
	SlateBrush Disabled; // 0x1a0
	Margin NormalPadding; // 0x228
	Margin PressedPadding; // 0x238
	SlateSound PressedSlateSound; // 0x248
	SlateSound HoveredSlateSound; // 0x260

};


instance 1ab70e9d900
struct EditableTextStyle 
{
	// Fields
	SlateFontInfo Font; // 0x8
	SlateColor ColorAndOpacity; // 0x58
	SlateBrush BackgroundImageSelected; // 0x80
	SlateBrush BackgroundImageComposing; // 0x108
	SlateBrush CaretImage; // 0x190

};


instance 1ab70e9d840
struct EditableTextBoxStyle 
{
	// Fields
	SlateBrush BackgroundImageNormal; // 0x8
	SlateBrush BackgroundImageHovered; // 0x90
	SlateBrush BackgroundImageFocused; // 0x118
	SlateBrush BackgroundImageReadOnly; // 0x1a0
	Margin Padding; // 0x228
	SlateFontInfo Font; // 0x238
	SlateColor ForegroundColor; // 0x288
	SlateColor BackgroundColor; // 0x2b0
	SlateColor ReadOnlyForegroundColor; // 0x2d8
	Margin HScrollBarPadding; // 0x300
	Margin VScrollBarPadding; // 0x310
	ScrollBarStyle ScrollBarStyle; // 0x320

};


instance 1ab70e9d780
struct ScrollBarStyle 
{
	// Fields
	SlateBrush HorizontalBackgroundImage; // 0x8
	SlateBrush VerticalBackgroundImage; // 0x90
	SlateBrush VerticalTopSlotImage; // 0x118
	SlateBrush HorizontalTopSlotImage; // 0x1a0
	SlateBrush VerticalBottomSlotImage; // 0x228
	SlateBrush HorizontalBottomSlotImage; // 0x2b0
	SlateBrush NormalThumbImage; // 0x338
	SlateBrush HoveredThumbImage; // 0x3c0
	SlateBrush DraggedThumbImage; // 0x448

};


instance 1ab70e9d600
struct TextBlockStyle 
{
	// Fields
	SlateFontInfo Font; // 0x8
	SlateColor ColorAndOpacity; // 0x58
	Vector2D ShadowOffset; // 0x80
	LinearColor ShadowColorAndOpacity; // 0x88
	SlateColor SelectedBackgroundColor; // 0x98
	LinearColor HighlightColor; // 0xc0
	SlateBrush HighlightShape; // 0xd0
	SlateBrush StrikeBrush; // 0x158
	SlateBrush UnderlineBrush; // 0x1e0

};


instance 1ab70e9d540
struct SpinBoxStyle 
{
	// Fields
	SlateBrush BackgroundBrush; // 0x8
	SlateBrush HoveredBackgroundBrush; // 0x90
	SlateBrush ActiveFillBrush; // 0x118
	SlateBrush InactiveFillBrush; // 0x1a0
	SlateBrush ArrowsImage; // 0x228
	SlateColor ForegroundColor; // 0x2b0
	Margin TextPadding; // 0x2d8

};


instance 1ab71458080
struct CompositeFont 
{
	// Fields
	Typeface DefaultTypeface; // 0x0
	CompositeFallbackFont FallbackTypeface; // 0x10
	TArray SubTypefaces; // 0x28

};


instance 1ab71457fc0
struct CompositeFallbackFont 
{
	// Fields
	Typeface Typeface; // 0x0
	float ScalingFactor; // 0x10

};


instance 1ab71457f00
struct Typeface 
{
	// Fields
	TArray Fonts; // 0x0

};


instance 1ab71457e40
struct TypefaceEntry 
{
	// Fields
	FName Name; // 0x0
	FontData Font; // 0x8

};


instance 1ab71457d80
struct FontData 
{
	// Fields
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int SubFaceIndex; // 0x14
	Object* FontFaceAsset; // 0x18

};


instance 1ab71457cc0
struct CompositeSubFont 
{
	// Fields
	TArray CharacterRanges; // 0x18
	FString Cultures; // 0x28

};


instance 1ab71457c00
struct MotionEvent 
{
	// Fields

};


instance 1ab7145acc0
struct CaptureLostEvent 
{
	// Fields

};


instance 1ab7145ac00
struct FocusEvent 
{
	// Fields

};


instance 1ab7145ab40
struct WindowStyle 
{
	// Fields
	ButtonStyle MinimizeButtonStyle; // 0x8
	ButtonStyle MaximizeButtonStyle; // 0x280
	ButtonStyle RestoreButtonStyle; // 0x4f8
	ButtonStyle CloseButtonStyle; // 0x770
	TextBlockStyle TitleTextStyle; // 0x9e8
	SlateBrush ActiveTitleBrush; // 0xc50
	SlateBrush InactiveTitleBrush; // 0xcd8
	SlateBrush FlashTitleBrush; // 0xd60
	SlateColor BackgroundColor; // 0xde8
	SlateBrush OutlineBrush; // 0xe10
	SlateColor OutlineColor; // 0xe98
	SlateBrush BorderBrush; // 0xec0
	SlateBrush BackgroundBrush; // 0xf48
	SlateBrush ChildBackgroundBrush; // 0xfd0

};


instance 1ab7145aa80
struct ScrollBorderStyle 
{
	// Fields
	SlateBrush TopShadowBrush; // 0x8
	SlateBrush BottomShadowBrush; // 0x90

};


instance 1ab7145a9c0
struct ScrollBoxStyle 
{
	// Fields
	SlateBrush TopShadowBrush; // 0x8
	SlateBrush BottomShadowBrush; // 0x90
	SlateBrush LeftShadowBrush; // 0x118
	SlateBrush RightShadowBrush; // 0x1a0

};


instance 1ab7145a900
struct DockTabStyle 
{
	// Fields
	ButtonStyle CloseButtonStyle; // 0x8
	SlateBrush NormalBrush; // 0x280
	SlateBrush ActiveBrush; // 0x308
	SlateBrush ColorOverlayTabBrush; // 0x390
	SlateBrush ColorOverlayIconBrush; // 0x418
	SlateBrush ForegroundBrush; // 0x4a0
	SlateBrush HoveredBrush; // 0x528
	SlateBrush ContentAreaBrush; // 0x5b0
	SlateBrush TabWellBrush; // 0x638
	Margin TabPadding; // 0x6c0
	float OverlapWidth; // 0x6d0
	SlateColor FlashColor; // 0x6d8

};


instance 1ab7145a840
struct HeaderRowStyle 
{
	// Fields
	TableColumnHeaderStyle ColumnStyle; // 0x8
	TableColumnHeaderStyle LastColumnStyle; // 0x4d8
	SplitterStyle ColumnSplitterStyle; // 0x9a8
	SlateBrush BackgroundBrush; // 0xac0
	SlateColor ForegroundColor; // 0xb48

};


instance 1ab7145a780
struct SplitterStyle 
{
	// Fields
	SlateBrush HandleNormalBrush; // 0x8
	SlateBrush HandleHighlightBrush; // 0x90

};


instance 1ab7145a6c0
struct TableColumnHeaderStyle 
{
	// Fields
	SlateBrush SortPrimaryAscendingImage; // 0x8
	SlateBrush SortPrimaryDescendingImage; // 0x90
	SlateBrush SortSecondaryAscendingImage; // 0x118
	SlateBrush SortSecondaryDescendingImage; // 0x1a0
	SlateBrush NormalBrush; // 0x228
	SlateBrush HoveredBrush; // 0x2b0
	SlateBrush MenuDropdownImage; // 0x338
	SlateBrush MenuDropdownNormalBorderBrush; // 0x3c0
	SlateBrush MenuDropdownHoveredBorderBrush; // 0x448

};


instance 1ab7145a600
struct InlineTextImageStyle 
{
	// Fields
	SlateBrush Image; // 0x8
	SHORT Baseline; // 0x90

};


instance 1ab7145a540
struct VolumeControlStyle 
{
	// Fields
	SliderStyle SliderStyle; // 0x8
	SlateBrush HighVolumeImage; // 0x348
	SlateBrush MidVolumeImage; // 0x3d0
	SlateBrush LowVolumeImage; // 0x458
	SlateBrush NoVolumeImage; // 0x4e0
	SlateBrush MutedImage; // 0x568

};


instance 1ab7145a480
struct SliderStyle 
{
	// Fields
	SlateBrush NormalBarImage; // 0x8
	SlateBrush HoveredBarImage; // 0x90
	SlateBrush DisabledBarImage; // 0x118
	SlateBrush NormalThumbImage; // 0x1a0
	SlateBrush HoveredThumbImage; // 0x228
	SlateBrush DisabledThumbImage; // 0x2b0
	float BarThickness; // 0x338

};


instance 1ab7145a3c0
struct SearchBoxStyle 
{
	// Fields
	EditableTextBoxStyle TextBoxStyle; // 0x8
	SlateFontInfo ActiveFontInfo; // 0x7f8
	SlateBrush UpArrowImage; // 0x848
	SlateBrush DownArrowImage; // 0x8d0
	SlateBrush GlassImage; // 0x958
	SlateBrush ClearImage; // 0x9e0
	Margin ImagePadding; // 0xa68
	bool bLeftAlignButtons; // 0xa78

};


instance 1ab7145a300
struct ExpandableAreaStyle 
{
	// Fields
	SlateBrush CollapsedImage; // 0x8
	SlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118

};


instance 1ab7145a240
struct ProgressBarStyle 
{
	// Fields
	SlateBrush BackgroundImage; // 0x8
	SlateBrush FillImage; // 0x90
	SlateBrush MarqueeImage; // 0x118

};


instance 1ab7145a180
struct InlineEditableTextBlockStyle 
{
	// Fields
	EditableTextBoxStyle EditableTextBoxStyle; // 0x8
	TextBlockStyle TextStyle; // 0x7f8

};


instance 1ab7145a0c0
struct HyperlinkStyle 
{
	// Fields
	ButtonStyle UnderlineStyle; // 0x8
	TextBlockStyle TextStyle; // 0x280
	Margin Padding; // 0x4e8

};


instance 1ab7145a000
struct CheckBoxStyle 
{
	// Fields
	BYTE CheckBoxType; // 0x8
	SlateBrush UncheckedImage; // 0x10
	SlateBrush UncheckedHoveredImage; // 0x98
	SlateBrush UncheckedPressedImage; // 0x120
	SlateBrush CheckedImage; // 0x1a8
	SlateBrush CheckedHoveredImage; // 0x230
	SlateBrush CheckedPressedImage; // 0x2b8
	SlateBrush UndeterminedImage; // 0x340
	SlateBrush UndeterminedHoveredImage; // 0x3c8
	SlateBrush UndeterminedPressedImage; // 0x450
	Margin Padding; // 0x4d8
	SlateColor ForegroundColor; // 0x4e8
	SlateColor BorderBackgroundColor; // 0x510
	SlateSound CheckedSlateSound; // 0x538
	SlateSound UncheckedSlateSound; // 0x550
	SlateSound HoveredSlateSound; // 0x568

};


