instance 1ab5e0dbec0
class ButtonWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	ButtonStyle ButtonStyle; // 0x30

};


instance 1ab5e0dbc80
class CheckBoxWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	CheckBoxStyle CheckBoxStyle; // 0x30

};


instance 1ab5e0dba40
class ComboBoxWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	ComboBoxStyle ComboBoxStyle; // 0x30

};


instance 1ab5e0db800
class ComboButtonWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	ComboButtonStyle ComboButtonStyle; // 0x30

};


instance 1ab5e0db5c0
class EditableTextBoxWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	EditableTextBoxStyle EditableTextBoxStyle; // 0x30

};


instance 1ab5e0db380
class EditableTextWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	EditableTextStyle EditableTextStyle; // 0x30

};


instance 1ab5e0db140
class ProgressWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	ProgressBarStyle ProgressBarStyle; // 0x30

};


instance 1ab5e0daf00
class ScrollBarWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	ScrollBarStyle ScrollBarStyle; // 0x30

};


instance 1ab5e0dacc0
class ScrollBoxWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	ScrollBoxStyle ScrollBoxStyle; // 0x30

};


instance 1ab5e0daa80
class SlateSettings public : Object
{
	// Fields
	bool bExplicitCanvasChildZOrder; // 0x28

};


instance 1ab5e0da840
class SpinBoxWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	SpinBoxStyle SpinBoxStyle; // 0x30

};


instance 1ab5e0da600
class TextBlockWidgetStyle public : SlateWidgetStyleContainerBase
{
	// Fields
	TextBlockStyle TextBlockStyle; // 0x30

};


instance 1ab5e0da3c0
class ToolMenuBase public : Object
{
	// Fields

};


instance 1ab70e9d9c0
struct VirtualKeyboardOptions 
{
	// Fields
	bool bEnableAutocorrect; // 0x0

};


instance 1ab70e9d6c0
struct InputChord 
{
	// Fields
	Key Key; // 0x0
	bool bShift; // 0x18
	bool bCtrl; // 0x18
	bool bAlt; // 0x18
	bool bCmd; // 0x18

};


instance 1ab71459f40
struct Anchors 
{
	// Fields
	Vector2D Minimum; // 0x0
	Vector2D Maximum; // 0x8

};


instance 1ab71459e80
struct CustomizedToolMenu 
{
	// Fields
	FName Name; // 0x0
	MapProperty Entries; // 0x8 property 0x1ab71164ca0 hash 0xadd0fb88
	MapProperty Sections; // 0x58 property 0x1ab71164de0 hash 0xadd0fb88
	MapProperty EntryOrder; // 0xa8 property 0x1ab71164d40 hash 0xadd0fb88
	TArray SectionOrder; // 0xf8

};


instance 1ab71459dc0
struct CustomizedToolMenuNameArray 
{
	// Fields
	TArray Names; // 0x0

};


instance 1ab71459d00
struct CustomizedToolMenuSection 
{
	// Fields
	ECustomizedToolMenuVisibility Visibility; // 0x0

};


instance 1ab71459c40
struct CustomizedToolMenuEntry 
{
	// Fields
	ECustomizedToolMenuVisibility Visibility; // 0x0

};


