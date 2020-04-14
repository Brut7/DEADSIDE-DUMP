instance 1ab5e1e3c40
class MediaSource public : Object
{
	// Fields

	// Functions
	Validate 0x507be hash 833856f params:( None ReturnValue; );
	SetMediaOptionString 0x507b3 hash 1139341 params:( None Key;None Value; );
	SetMediaOptionInt64 0x507a8 hash 5c6761ff params:( None Key;None Value; );
	SetMediaOptionFloat 0x5079d hash 5c2ff040 params:( None Key;None Value; );
	SetMediaOptionBool 0x50793 hash 2c90196 params:( None Key;None Value; );
	GetURL 0x3edfb hash b4e204b8 params:( None ReturnValue; );
};


instance 1ab5e1e3e80
class BaseMediaSource public : MediaSource
{
	// Fields
	FName PlayerName; // 0x80

};


instance 1ab5e1e3a00
class FileMediaSource public : BaseMediaSource
{
	// Fields
	FString FilePath; // 0x88
	bool PrecacheFile; // 0x98

	// Functions
	SetFilePath 0x507cc hash b8e87c3e params:( None Path; );
};


instance 1ab5e1e37c0
class MediaBlueprintFunctionLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	EnumerateWebcamCaptureDevices 0x50801 hash 352c48d1 params:( OutDevices OutDevices;None Filter; );
	EnumerateVideoCaptureDevices 0x507f2 hash 2b6b1a99 params:( OutDevices OutDevices;None Filter; );
	EnumerateAudioCaptureDevices 0x507e3 hash 35ee854 params:( OutDevices OutDevices;None Filter; );
};


instance 1ab5e1e3580
class MediaPlayer public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnEndReached; // 0x28 property 0x1ab7204f480 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnMediaClosed; // 0x38 property 0x1ab7204f500 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnMediaOpened; // 0x48 property 0x1ab7204f580 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnMediaOpenFailed; // 0x58 property 0x1ab7204f600 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnPlaybackResumed; // 0x68 property 0x1ab7204f680 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnPlaybackSuspended; // 0x78 property 0x1ab7204f700 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnSeekCompleted; // 0x88 property 0x1ab7204f780 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnTracksChanged; // 0x98 property 0x1ab7204d700 hash 0xb7a5ed1a
	Timespan CacheAhead; // 0xa8
	Timespan CacheBehind; // 0xb0
	Timespan CacheBehindGame; // 0xb8
	bool NativeAudioOut; // 0xc0
	bool PlayOnOpen; // 0xc1
	bool Shuffle; // 0xc4
	bool Loop; // 0xc4
	MediaPlaylist* Playlist; // 0xc8
	int PlaylistIndex; // 0xd0
	Timespan TimeDelay; // 0xd8
	float HorizontalFieldOfView; // 0xe0
	float VerticalFieldOfView; // 0xe4
	Rotator ViewRotation; // 0xe8
	Guid PlayerGuid; // 0x120

	// Functions
	SupportsSeeking 0x509ec hash 33ad0d9b params:( None ReturnValue; );
	SupportsScrubbing 0x509e2 hash fa26b9b4 params:( None ReturnValue; );
	SupportsRate 0x509db hash b4da3a01 params:( None Rate;None Unthinned;None ReturnValue; );
	SetViewRotation 0x4743e hash e6c9f59c params:( Rotator Rotation;None Absolute;None ReturnValue; );
	SetViewField 0x509d4 hash 2c337530 params:( None Horizontal;None Vertical;None Absolute;None ReturnValue; );
	SetVideoTrackFrameRate 0x509c8 hash dbeabd14 params:( None TrackIndex;None FormatIndex;None FrameRate;None ReturnValue; );
	SetTrackFormat 0x509c0 hash a8b377af params:( UnderlyingType TrackType;None TrackIndex;None FormatIndex;None ReturnValue; );
	SetTimeDelay 0x509b9 hash 80e957cf params:( Timespan TimeDelay; );
	SetRate 0x509b4 hash ecdc14fd params:( None Rate;None ReturnValue; );
	SetNativeVolume 0x509ab hash 493a770 params:( None Volume;None ReturnValue; );
	SetMediaOptions 0x509a2 hash e6813a5d params:( MediaSource Options; );
	SetLooping 0x3fb91 hash 6d567709 params:( None Looping;None ReturnValue; );
	SetDesiredPlayerName 0x50997 hash fb5fe53f params:( None PlayerName; );
	SetBlockOnTime 0x5098f hash a39952a8 params:( Timespan Time; );
	SelectTrack 0x50988 hash f4a8961a params:( UnderlyingType TrackType;None TrackIndex;None ReturnValue; );
	Seek 0x50985 hash 7c8c4e0d params:( Timespan Time;None ReturnValue; );
	Rewind 0x50981 hash ce8cc18e params:( None ReturnValue; );
	Reopen 0x5097d hash ce887b2e params:( None ReturnValue; );
	Previous 0x50978 hash 8be0acc2 params:( None ReturnValue; );
	Play 0x3fb72 hash 7c8ac63b params:( None ReturnValue; );
	Pause 0xb98f hash dddda23 params:( None ReturnValue; );
	OpenUrl 0x50973 hash d19b98aa params:( None URL;None ReturnValue; );
	OpenSourceWithOptions 0x50967 hash 3fe438b0 params:( MediaSource MediaSource;MediaPlayerOptions Options;None ReturnValue; );
	OpenSourceLatent 0x5095e hash 4b8b8610 params:( Object WorldContextObject;LatentActionInfo LatentInfo;MediaSource MediaSource;MediaPlayerOptions Options;None bSuccess; );
	OpenSource 0x50958 hash 7e981728 params:( MediaSource MediaSource;None ReturnValue; );
	OpenPlaylistIndex 0x5094e hash 99e419e1 params:( MediaPlaylist InPlaylist;None Index;None ReturnValue; );
	OpenPlaylist 0x50947 hash ab22dae9 params:( MediaPlaylist InPlaylist;None ReturnValue; );
	OpenFile 0x50942 hash 5064e57 params:( None FilePath;None ReturnValue; );
	Next 0x5093f hash 7c8992a4 params:( None ReturnValue; );
	IsReady 0x5093a hash 9611656 params:( None ReturnValue; );
	IsPreparing 0x50933 hash cae41da9 params:( None ReturnValue; );
	IsPlaying 0x3e2d2 hash 5c6af535 params:( None ReturnValue; );
	IsPaused 0x413d9 hash 309c6303 params:( None ReturnValue; );
	IsLooping 0x3fb5a hash 3079e3b9 params:( None ReturnValue; );
	IsConnecting 0x5092c hash 52104aa9 params:( None ReturnValue; );
	IsClosed 0x50927 hash 130d161b params:( None ReturnValue; );
	IsBuffering 0x50920 hash 66ca76b9 params:( None ReturnValue; );
	HasError 0x46b0e hash 2a6a806b params:( None ReturnValue; );
	GetViewRotation 0x4742c hash 3f70d090 params:( Rotator ReturnValue; );
	GetVideoTrackType 0x50916 hash 796be233 params:( None TrackIndex;None FormatIndex;None ReturnValue; );
	GetVideoTrackFrameRates 0x50909 hash f6beeefb params:( None TrackIndex;None FormatIndex;FloatRange ReturnValue; );
	GetVideoTrackFrameRate 0x508fd hash 7bd73d88 params:( None TrackIndex;None FormatIndex;None ReturnValue; );
	GetVideoTrackDimensions 0x508f0 hash 98e5cd6a params:( None TrackIndex;None FormatIndex;IntPoint ReturnValue; );
	GetVideoTrackAspectRatio 0x508e3 hash 5d551d50 params:( None TrackIndex;None FormatIndex;None ReturnValue; );
	GetVerticalFieldOfView 0x47b1c hash bbbdd93 params:( None ReturnValue; );
	GetURL 0x3edfb hash b4e204b8 params:( None ReturnValue; );
	GetTrackLanguage 0x508da hash 5b17827e params:( UnderlyingType TrackType;None TrackIndex;None ReturnValue; );
	GetTrackFormat 0x508d2 hash e1b0c423 params:( UnderlyingType TrackType;None TrackIndex;None ReturnValue; );
	GetTrackDisplayName 0x508c7 hash 35e18e51 params:( UnderlyingType TrackType;None TrackIndex;None ReturnValue; );
	GetTimeDelay 0x508c0 hash 3580f743 params:( Timespan ReturnValue; );
	GetTime 0x508bb hash 512275d4 params:( Timespan ReturnValue; );
	GetSupportedRates 0x508b1 hash 3a1d7aea params:( OutRates OutRates;None Unthinned; );
	GetSelectedTrack 0x508a8 hash b40f47c3 params:( UnderlyingType TrackType;None ReturnValue; );
	GetRate 0x508a3 hash 51213bf1 params:( None ReturnValue; );
	GetPlaylistIndex 0x5089a hash fe35c3af params:( None ReturnValue; );
	GetPlaylist 0x50893 hash 81e1abf7 params:( MediaPlaylist ReturnValue; );
	GetPlayerName 0x4f9af hash 7136b973 params:( None ReturnValue; );
	GetNumTracks 0x5088c hash 6942a9bd params:( UnderlyingType TrackType;None ReturnValue; );
	GetNumTrackFormats 0x50882 hash 5cd88e26 params:( UnderlyingType TrackType;None TrackIndex;None ReturnValue; );
	GetMediaName 0x5087b hash ab9b0906 params:( None ReturnValue; );
	GetLastVideoSampleProcessedTime 0x5086a hash ac9ada09 params:( Timespan ReturnValue; );
	GetLastAudioSampleProcessedTime 0x50859 hash 5a2b74a4 params:( Timespan ReturnValue; );
	GetHorizontalFieldOfView 0x47afb hash fe9115e3 params:( None ReturnValue; );
	GetDuration 0x41182 hash 49919d4b params:( Timespan ReturnValue; );
	GetDesiredPlayerName 0x5084e hash 6989b8b3 params:( None ReturnValue; );
	GetAudioTrackType 0x50844 hash 6b0e6f0e params:( None TrackIndex;None FormatIndex;None ReturnValue; );
	GetAudioTrackSampleRate 0x50837 hash 511a67da params:( None TrackIndex;None FormatIndex;None ReturnValue; );
	GetAudioTrackChannels 0x5082b hash 2c91a318 params:( None TrackIndex;None FormatIndex;None ReturnValue; );
	Close 0x46e16 hash cf88a3b params:(  );
	CanPlayUrl 0x50825 hash fd2160a0 params:( None URL;None ReturnValue; );
	CanPlaySource 0x5081d hash 25a3635e params:( MediaSource MediaSource;None ReturnValue; );
	CanPause 0x50818 hash 82355535 params:( None ReturnValue; );
};


instance 1ab5e1e3340
class MediaPlaylist public : Object
{
	// Fields
	TArray Items; // 0x28

	// Functions
	Replace 0x4ccda hash 9fa7b5e1 params:( None Index;MediaSource Replacement;None ReturnValue; );
	RemoveAt 0x50a1f hash 8de0c9e8 params:( None Index;None ReturnValue; );
	Remove 0x50a1b hash ce876053 params:( MediaSource MediaSource;None ReturnValue; );
	Num 0x20a0b hash b880e35 params:( None ReturnValue; );
	Insert 0xb9bc hash ba2eee7a params:( MediaSource MediaSource;None Index; );
	GetRandom 0x50a15 hash 1e5cbc66 params:( None OutIndex;MediaSource ReturnValue; );
	GetPrevious 0x50a0e hash 58dbe622 params:( None InOutIndex;MediaSource ReturnValue; );
	GetNext 0x50a09 hash 511f1c04 params:( None InOutIndex;MediaSource ReturnValue; );
	Get 0x50a06 hash b87ee65 params:( None Index;MediaSource ReturnValue; );
	AddUrl 0x50a02 hash a6c836a1 params:( None URL;None ReturnValue; );
	AddFile 0x509fd hash 7fc6ab2e params:( None FilePath;None ReturnValue; );
	Add 0xba5d hash b87d4ae params:( MediaSource MediaSource;None ReturnValue; );
};


instance 1ab5e1e3100
class MediaSoundComponent public : SynthComponent
{
	// Fields
	EMediaSoundChannels Channels; // 0x620
	bool DynamicRateAdjustment; // 0x624
	float RateAdjustmentFactor; // 0x628
	FloatRange RateAdjustmentRange; // 0x62c
	MediaPlayer* MediaPlayer; // 0x640

	// Functions
	SetSpectralAnalysisSettings 0x50a7c hash 360b5784 params:( InFrequenciesToAnalyze InFrequenciesToAnalyze;UnderlyingType InFFTSize; );
	SetMediaPlayer 0x50a74 hash caef42de params:( MediaPlayer NewMediaPlayer; );
	SetEnvelopeFollowingsettings 0x50a65 hash 16627d71 params:( None AttackTimeMsec;None ReleaseTimeMsec; );
	SetEnableSpectralAnalysis 0x50a57 hash c578981a params:( None bInSpectralAnalysisEnabled; );
	SetEnableEnvelopeFollowing 0x50a49 hash c985d5c7 params:( None bInEnvelopeFollowing; );
	GetSpectralData 0x50a40 hash 546e6b3d params:( ReturnValue ReturnValue; );
	GetMediaPlayer 0x50a38 hash 3ec8f52 params:( MediaPlayer ReturnValue; );
	GetEnvelopeValue 0x50a2f hash 1751c4e0 params:( None ReturnValue; );
	BP_GetAttenuationSettingsToApply 0x40c21 hash 707247c params:( SoundAttenuationSettings OutAttenuationSettings;None ReturnValue; );
};


instance 1ab5e1e2ec0
class MediaTexture public : Texture
{
	// Fields
	BYTE AddressX; // 0xd0
	BYTE AddressY; // 0xd1
	bool AutoClear; // 0xd2
	LinearColor ClearColor; // 0xd4
	MediaPlayer* MediaPlayer; // 0xe8

	// Functions
	SetMediaPlayer 0x50a74 hash caef42de params:( MediaPlayer NewMediaPlayer; );
	GetWidth 0x50aa0 hash 75a755e5 params:( None ReturnValue; );
	GetMediaPlayer 0x50a38 hash 3ec8f52 params:( MediaPlayer ReturnValue; );
	GetHeight 0x50a9a hash 74ed61e params:( None ReturnValue; );
	GetAspectRatio 0x50a92 hash ad0d96e4 params:( None ReturnValue; );
};


instance 1ab5e1e2c80
class PlatformMediaSource public : MediaSource
{
	// Fields
	MediaSource* MediaSource; // 0x80

};


instance 1ab5e1e2a40
class StreamMediaSource public : BaseMediaSource
{
	// Fields
	FString StreamUrl; // 0x88

};


instance 1ab5e1e2800
class TimeSynchronizableMediaSource public : BaseMediaSource
{
	// Fields
	bool bUseTimeSynchronization; // 0x88
	int FrameDelay; // 0x8c
	double TimeDelay; // 0x90

};


instance 1ab716e8800
struct MediaCaptureDevice 
{
	// Fields
	FText DisplayName; // 0x0
	FString URL; // 0x18

};


instance 1ab716e8740
struct MediaSoundComponentSpectralData 
{
	// Fields
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4

};


