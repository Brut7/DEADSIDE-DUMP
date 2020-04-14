instance 1ab5e1bebc0
class Overlays public : Object
{
	// Fields

};


instance 1ab5e1bee00
class BasicOverlays public : Overlays
{
	// Fields
	TArray Overlays; // 0x28

};


instance 1ab5e1be980
class LocalizedOverlays public : Overlays
{
	// Fields
	BasicOverlays* DefaultOverlays; // 0x28
	MapProperty LocaleToOverlaysMap; // 0x30 property 0x1ab711688a0 hash 0xadd0fb88

};


instance 1ab716e91c0
struct OverlayItem 
{
	// Fields
	Timespan StartTime; // 0x0
	Timespan EndTime; // 0x8
	FString Text; // 0x10
	Vector2D Position; // 0x20

};


