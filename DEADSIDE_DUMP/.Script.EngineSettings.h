instance 1ab5e0d9ac0
class ConsoleSettings public : Object
{
	// Fields
	int MaxScrollbackSize; // 0x28
	TArray ManualAutoCompleteList; // 0x30
	TArray AutoCompleteMapPaths; // 0x40
	float BackgroundOpacityPercentage; // 0x50
	bool bOrderTopToBottom; // 0x54
	bool bDisplayHelpInAutoComplete; // 0x55
	Color InputColor; // 0x58
	Color HistoryColor; // 0x5c
	Color AutoCompleteCommandColor; // 0x60
	Color AutoCompleteCVarColor; // 0x64
	Color AutoCompleteFadedColor; // 0x68

};


instance 1ab5e0d9880
class GameMapsSettings public : Object
{
	// Fields
	FString LocalMapOptions; // 0x28
	SoftObjectPath TransitionMap; // 0x38
	bool bUseSplitscreen; // 0x50
	BYTE TwoPlayerSplitscreenLayout; // 0x51
	BYTE ThreePlayerSplitscreenLayout; // 0x52
	EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x53
	bool bOffsetPlayerGamepadIds; // 0x54
	SoftClassPath GameInstanceClass; // 0x58
	SoftObjectPath GameDefaultMap; // 0x70
	SoftObjectPath ServerDefaultMap; // 0x88
	SoftClassPath GlobalDefaultGameMode; // 0xa0
	SoftClassPath GlobalDefaultServerGameMode; // 0xb8
	TArray GameModeMapPrefixes; // 0xd0
	TArray GameModeClassAliases; // 0xe0

	// Functions
	SetSkipAssigningGamepadToPlayer1 0x45196 hash b4c056bb params:( None bSkipFirstPlayer; );
	GetSkipAssigningGamepadToPlayer1 0x45185 hash f44ef82f params:( None ReturnValue; );
	GetGameMapsSettings 0x4517a hash ee307501 params:( GameMapsSettings ReturnValue; );
};


instance 1ab5e0d9640
class GameNetworkManagerSettings public : Object
{
	// Fields
	int MinDynamicBandwidth; // 0x28
	int MaxDynamicBandwidth; // 0x2c
	int TotalNetBandwidth; // 0x30
	int BadPingThreshold; // 0x34
	bool bIsStandbyCheckingEnabled; // 0x38
	float StandbyRxCheatTime; // 0x3c
	float StandbyTxCheatTime; // 0x40
	float PercentMissingForRxStandby; // 0x44
	float PercentMissingForTxStandby; // 0x48
	float PercentForBadPing; // 0x4c
	float JoinInProgressStandbyWaitTime; // 0x50

};


instance 1ab5e0dfdc0
class GameSessionSettings public : Object
{
	// Fields
	int MaxSpectators; // 0x28
	int MaxPlayers; // 0x2c
	bool bRequiresPushToTalk; // 0x30

};


instance 1ab5e0dfb80
class GeneralEngineSettings public : Object
{
	// Fields

};


instance 1ab5e0df940
class GeneralProjectSettings public : Object
{
	// Fields
	FString CompanyName; // 0x28
	FString CompanyDistinguishedName; // 0x38
	FString CopyrightNotice; // 0x48
	FString Description; // 0x58
	FString Homepage; // 0x68
	FString LicensingTerms; // 0x78
	FString PrivacyPolicy; // 0x88
	Guid ProjectID; // 0x98
	FString ProjectName; // 0xa8
	FString ProjectVersion; // 0xb8
	FString SupportContact; // 0xc8
	FText ProjectDisplayedTitle; // 0xd8
	FText ProjectDebugTitleInfo; // 0xf0
	bool bShouldWindowPreserveAspectRatio; // 0x108
	bool bUseBorderlessWindow; // 0x109
	bool bStartInVR; // 0x10a
	bool bStartInAR; // 0x10b
	bool bSupportAR; // 0x10c
	bool bAllowWindowResize; // 0x10d
	bool bAllowClose; // 0x10e
	bool bAllowMaximize; // 0x10f
	bool bAllowMinimize; // 0x110

};


instance 1ab5e0df700
class HudSettings public : Object
{
	// Fields
	bool bShowHUD; // 0x28
	TArray DebugDisplay; // 0x30

};


instance 1ab71459940
struct AutoCompleteCommand 
{
	// Fields
	FString Command; // 0x0
	FString Desc; // 0x10

};


instance 1ab71459880
struct GameModeName 
{
	// Fields
	FString Name; // 0x0
	SoftClassPath GameMode; // 0x10

};


