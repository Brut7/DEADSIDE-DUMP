instance 1ab716e9100
struct MediaPlayerOptions 
{
	// Fields
	MediaPlayerTrackOptions Tracks; // 0x0
	Timespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29

};


instance 1ab716e9040
struct MediaPlayerTrackOptions 
{
	// Fields
	int Audio; // 0x0
	int Caption; // 0x4
	int MetaData; // 0x8
	int Script; // 0xc
	int Subtitle; // 0x10
	int Text; // 0x14
	int Video; // 0x18

};


