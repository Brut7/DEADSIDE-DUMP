instance 1ab5e0937c0
class AchievementBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	GetCachedAchievementProgress 0x414b3 hash b9cd0b3b params:( Object WorldContextObject;PlayerController PlayerController;None AchievementID;None bFoundID;None Progress; );
	GetCachedAchievementDescription 0x414a2 hash 3dfecaea params:( Object WorldContextObject;PlayerController PlayerController;None AchievementID;None bFoundID;None Title;None LockedDescription;None UnlockedDescription;None bHidden; );
};


instance 1ab5e093580
class AchievementQueryCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab71827d00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab71827d80 hash 0xb7a5ed1a

	// Functions
	CacheAchievements 0x414f0 hash 1e6c5175 params:( Object WorldContextObject;PlayerController PlayerController;AchievementQueryCallbackProxy ReturnValue; );
	CacheAchievementDescriptions 0x414e1 hash 7619b439 params:( Object WorldContextObject;PlayerController PlayerController;AchievementQueryCallbackProxy ReturnValue; );
};


instance 1ab5e093100
class AchievementWriteCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab71827a80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab71827b00 hash 0xb7a5ed1a

	// Functions
	WriteAchievementProgress 0x4150a hash f2b37b0e params:( Object WorldContextObject;PlayerController PlayerController;None AchievementName;None Progress;None UserTag;AchievementWriteCallbackProxy ReturnValue; );
};


instance 1ab5e092ec0
class ConnectionCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab71827800 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab71827880 hash 0xb7a5ed1a

	// Functions
	ConnectToService 0x41524 hash 96301083 params:( Object WorldContextObject;PlayerController PlayerController;ConnectionCallbackProxy ReturnValue; );
};


instance 1ab5e092c80
class CreateSessionCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab71827480 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab71827500 hash 0xb7a5ed1a

	// Functions
	CreateSession 0x4153b hash c47b17d params:( Object WorldContextObject;PlayerController PlayerController;None PublicConnections;None bUseLAN;CreateSessionCallbackProxy ReturnValue; );
};


instance 1ab5e092a40
class DestroySessionCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab71829300 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab71829380 hash 0xb7a5ed1a

	// Functions
	DestroySession 0x41552 hash 682cf3f3 params:( Object WorldContextObject;PlayerController PlayerController;DestroySessionCallbackProxy ReturnValue; );
};


instance 1ab5e092800
class EndMatchCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab71828f00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab71828f80 hash 0xb7a5ed1a

	// Functions
	EndMatch 0x41566 hash 2be42ea9 params:( Object WorldContextObject;PlayerController PlayerController;TurnBasedMatchInterface MatchActor;None MatchID;EMPMatchOutcome LocalPlayerOutcome;EMPMatchOutcome OtherPlayersOutcome;EndMatchCallbackProxy ReturnValue; );
};


instance 1ab5e0925c0
class EndTurnCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab71828c00 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab71828c80 hash 0xb7a5ed1a

	// Functions
	EndTurn 0x41576 hash cb0b15a5 params:( Object WorldContextObject;PlayerController PlayerController;None MatchID;TurnBasedMatchInterface TurnBasedMatchInterface;EndTurnCallbackProxy ReturnValue; );
};


instance 1ab5e092380
class FindSessionsCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab71828700 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab71828780 hash 0xb7a5ed1a

	// Functions
	GetServerName 0x415a9 hash 175fc27d params:( BlueprintSessionResult Result;None ReturnValue; );
	GetPingInMs 0x415a2 hash b7ed2bea params:( BlueprintSessionResult Result;None ReturnValue; );
	GetMaxPlayers 0x4159a hash 58ccb22b params:( BlueprintSessionResult Result;None ReturnValue; );
	GetCurrentPlayers 0x41590 hash bb9d3a88 params:( BlueprintSessionResult Result;None ReturnValue; );
	FindSessions 0x41589 hash b80adf3d params:( Object WorldContextObject;PlayerController PlayerController;None MaxResults;None bUseLAN;FindSessionsCallbackProxy ReturnValue; );
};


instance 1ab5e092140
class FindTurnBasedMatchCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab7182a480 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab7182a500 hash 0xb7a5ed1a

	// Functions
	FindTurnBasedMatch 0x415c2 hash 29a077db params:( Object WorldContextObject;PlayerController PlayerController;TurnBasedMatchInterface MatchActor;None MinPlayers;None MaxPlayers;None PlayerGroup;None ShowExistingMatches;FindTurnBasedMatchCallbackProxy ReturnValue; );
};


instance 1ab5e091f00
class InAppPurchaseCallbackProxy public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab7182a200 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab7182a280 hash 0xb7a5ed1a

	// Functions
	CreateProxyObjectForInAppPurchase 0x415da hash bf30514c params:( PlayerController PlayerController;InAppPurchaseProductRequest ProductRequest;InAppPurchaseCallbackProxy ReturnValue; );
};


instance 1ab5e091cc0
class InAppPurchaseQueryCallbackProxy public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab71829f80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab7182a000 hash 0xb7a5ed1a

	// Functions
	CreateProxyObjectForInAppPurchaseQuery 0x415fd hash 664ea6c2 params:( PlayerController PlayerController;ProductIdentifiers ProductIdentifiers;InAppPurchaseQueryCallbackProxy ReturnValue; );
};


instance 1ab5e091a80
class InAppPurchaseRestoreCallbackProxy public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab71829c80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab71829d00 hash 0xb7a5ed1a

	// Functions
	CreateProxyObjectForInAppPurchaseRestore 0x41623 hash 5d396650 params:( ConsumableProductFlags ConsumableProductFlags;PlayerController PlayerController;InAppPurchaseRestoreCallbackProxy ReturnValue; );
};


instance 1ab5e091840
class IpConnection public : NetConnection
{
	// Fields
	float SocketErrorDisconnectDelay; // 0x1a10

};


instance 1ab5e091180
class IpNetDriver public : NetDriver
{
	// Fields
	bool LogPortUnreach; // 0x708
	bool AllowPlayerPortUnreach; // 0x708
	int MaxPortCountToTry; // 0x70c
	int ServerDesiredSocketReceiveBufferBytes; // 0x71c
	int ServerDesiredSocketSendBufferBytes; // 0x720
	int ClientDesiredSocketReceiveBufferBytes; // 0x724
	int ClientDesiredSocketSendBufferBytes; // 0x728
	double MaxSecondsInReceive; // 0x730
	int NbPacketsBetweenReceiveTimeTest; // 0x738

};


instance 1ab5e090d00
class JoinSessionCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab7182a800 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab7182a880 hash 0xb7a5ed1a

	// Functions
	JoinSession 0x41665 hash 6d3b8519 params:( Object WorldContextObject;PlayerController PlayerController;BlueprintSessionResult SearchResult;JoinSessionCallbackProxy ReturnValue; );
};


instance 1ab5e090ac0
class LeaderboardBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	WriteLeaderboardInteger 0x4167b hash cf9965b3 params:( PlayerController PlayerController;None StatName;None StatValue;None ReturnValue; );
};


instance 1ab5e090880
class LeaderboardFlushCallbackProxy public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab7182c600 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab7182a580 hash 0xb7a5ed1a

	// Functions
	CreateProxyObjectForFlush 0x41698 hash 745cdc3b params:( PlayerController PlayerController;None SessionName;LeaderboardFlushCallbackProxy ReturnValue; );
};


instance 1ab5e090640
class LeaderboardQueryCallbackProxy public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab7182c400 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab7182c480 hash 0xb7a5ed1a

	// Functions
	CreateProxyObjectForIntQuery 0x416b6 hash 39a6227a params:( PlayerController PlayerController;None StatName;LeaderboardQueryCallbackProxy ReturnValue; );
};


instance 1ab5e090400
class LogoutCallbackProxy public : BlueprintAsyncActionBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x30 property 0x1ab7182c180 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x40 property 0x1ab7182c200 hash 0xb7a5ed1a

	// Functions
	Logout 0x416dd hash c13a173f params:( Object WorldContextObject;PlayerController PlayerController;LogoutCallbackProxy ReturnValue; );
};


instance 1ab5e099400
class OnlineBeacon public : Actor
{
	// Fields
	float BeaconConnectionInitialTimeout; // 0x220
	float BeaconConnectionTimeout; // 0x224
	NetDriver* NetDriver; // 0x228

};


instance 1ab5e0991c0
class OnlineBeaconClient public : OnlineBeacon
{
	// Fields
	OnlineBeaconHostObject* BeaconOwner; // 0x248
	NetConnection* BeaconConnection; // 0x250
	EBeaconConnectionState ConnectionState; // 0x258

	// Functions
	ClientOnConnected 0x4503 hash 9b295254 params:(  );
};


instance 1ab5e098f80
class OnlineBeaconHost public : OnlineBeacon
{
	// Fields
	int ListenPort; // 0x248
	TArray ClientActors; // 0x250

};


instance 1ab5e098d40
class OnlineBeaconHostObject public : Actor
{
	// Fields
	FString BeaconTypeName; // 0x218
	OnlineBeaconClient* ClientBeaconActorClass; // 0x228
	TArray ClientActors; // 0x230

};


instance 1ab5e098b00
class OnlineEngineInterfaceImpl public : OnlineEngineInterface
{
	// Fields
	FName VoiceSubsystemNameOverride; // 0x28

};


instance 1ab5e098680
class OnlinePIESettings public : DeveloperSettings
{
	// Fields
	bool bOnlinePIEEnabled; // 0x38
	TArray Logins; // 0x40

};


instance 1ab5e098200
class OnlineSessionClient public : OnlineSession
{
	// Fields
	bool bIsFromInvite; // 0x188
	bool bHandlingDisconnect; // 0x189

};


instance 1ab5e097d80
class PartyBeaconClient public : OnlineBeaconClient
{
	// Fields
	FString DestSessionId; // 0x2d8
	PartyReservation PendingReservation; // 0x2e8
	EClientRequestType RequestType; // 0x338
	bool bPendingReservationSent; // 0x339
	bool bCancelReservation; // 0x33a

	// Functions
	ServerUpdateReservationRequest 0x4771 hash 34da1bba params:( None SessionId;PartyReservation ReservationUpdate; );
	ServerReservationRequest 0x4764 hash 7edc9437 params:( None SessionId;PartyReservation Reservation; );
	ServerRemoveMemberFromReservationRequest 0x474f hash 7496c4f1 params:( None SessionId;PartyReservation ReservationUpdate; );
	ServerCancelReservationRequest 0x473f hash e9cd65fd params:( UniqueNetIdRepl PartyLeader; );
	ClientSendReservationUpdates 0x4730 hash 7499e56 params:( None NumRemainingReservations; );
	ClientSendReservationFull 0x4722 hash a2022853 params:(  );
	ClientReservationResponse 0x4714 hash 10110a85 params:( EPartyReservationResult ReservationResponse; );
	ClientCancelReservationResponse 0x4703 hash 68e3e30b params:( EPartyReservationResult ReservationResponse; );
};


instance 1ab5e097b40
class PartyBeaconHost public : OnlineBeaconHostObject
{
	// Fields
	PartyBeaconState* State; // 0x240
	bool bLogoutOnSessionTimeout; // 0x2a8
	float SessionTimeoutSecs; // 0x2ac
	float TravelSessionTimeoutSecs; // 0x2b0

};


instance 1ab5e097900
class PartyBeaconState public : Object
{
	// Fields
	FName SessionName; // 0x28
	int NumConsumedReservations; // 0x30
	int MaxReservations; // 0x34
	int NumTeams; // 0x38
	int NumPlayersPerTeam; // 0x3c
	FName TeamAssignmentMethod; // 0x40
	int ReservedHostTeamNum; // 0x48
	int ForceTeamNum; // 0x4c
	bool bRestrictCrossConsole; // 0x50
	bool bEnableRemovalRequests; // 0x51
	TArray Reservations; // 0x58

};


instance 1ab5e0976c0
class QuitMatchCallbackProxy public : OnlineBlueprintCallProxyBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x28 property 0x1ab7182cf80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x38 property 0x1ab7182d000 hash 0xb7a5ed1a

	// Functions
	QuitMatch 0x41770 hash 6e747515 params:( Object WorldContextObject;PlayerController PlayerController;None MatchID;EMPMatchOutcome Outcome;None TurnTimeoutInSeconds;QuitMatchCallbackProxy ReturnValue; );
};


instance 1ab5e097480
class ShowLoginUICallbackProxy public : BlueprintAsyncActionBase
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x30 property 0x1ab7182cc80 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x40 property 0x1ab7182cd80 hash 0xb7a5ed1a

	// Functions
	ShowExternalLoginUI 0x41783 hash 7f75e300 params:( Object WorldContextObject;PlayerController InPlayerController;ShowLoginUICallbackProxy ReturnValue; );
};


instance 1ab5e097240
class SpectatorBeaconClient public : OnlineBeaconClient
{
	// Fields
	FString DestSessionId; // 0x2d8
	SpectatorReservation PendingReservation; // 0x2e8
	ESpectatorClientRequestType RequestType; // 0x360
	bool bPendingReservationSent; // 0x361
	bool bCancelReservation; // 0x362

	// Functions
	ServerReservationRequest 0x4764 hash 7edc9437 params:( None SessionId;SpectatorReservation Reservation; );
	ServerCancelReservationRequest 0x473f hash e9cd65fd params:( UniqueNetIdRepl Spectator; );
	ClientSendReservationUpdates 0x4730 hash 7499e56 params:( None NumRemainingReservations; );
	ClientSendReservationFull 0x4722 hash a2022853 params:(  );
	ClientReservationResponse 0x4714 hash 10110a85 params:( ESpectatorReservationResult ReservationResponse; );
	ClientCancelReservationResponse 0x4703 hash 68e3e30b params:( ESpectatorReservationResult ReservationResponse; );
};


instance 1ab5e097000
class SpectatorBeaconHost public : OnlineBeaconHostObject
{
	// Fields
	SpectatorBeaconState* State; // 0x240
	bool bLogoutOnSessionTimeout; // 0x2a8
	float SessionTimeoutSecs; // 0x2ac
	float TravelSessionTimeoutSecs; // 0x2b0

};


instance 1ab5e096dc0
class SpectatorBeaconState public : Object
{
	// Fields
	FName SessionName; // 0x28
	int NumConsumedReservations; // 0x30
	int MaxReservations; // 0x34
	bool bRestrictCrossConsole; // 0x38
	TArray Reservations; // 0x40

};


instance 1ab5e096b80
class TestBeaconClient public : OnlineBeaconClient
{
	// Fields

	// Functions
	ServerPong 0x4a37 hash 1eb20590 params:(  );
	ClientPing 0x4a31 hash b7a40af2 params:(  );
};


instance 1ab5e096940
class TestBeaconHost public : OnlineBeaconHostObject
{
	// Fields

};


instance 1ab5e096700
class TurnBasedBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	RegisterTurnBasedMatchInterfaceObject 0x417ea hash 769a05c7 params:( Object WorldContextObject;PlayerController PlayerController;Object Object; );
	GetPlayerDisplayName 0x417df hash 1de38649 params:( Object WorldContextObject;PlayerController PlayerController;None MatchID;None PlayerIndex;None PlayerDisplayName; );
	GetMyPlayerIndex 0x417d6 hash 52dcc50 params:( Object WorldContextObject;PlayerController PlayerController;None MatchID;None PlayerIndex; );
	GetIsMyTurn 0x417cf hash f8386050 params:( Object WorldContextObject;PlayerController PlayerController;None MatchID;None bIsMyTurn; );
};


instance 1ab5e0964c0
class VoipListenerSynthComponent public : SynthComponent
{
	// Fields

	// Functions
	IsIdling 0x4180c hash 20797758 params:( None ReturnValue; );
};


instance 1ab70e96d00
struct BlueprintSessionResult 
{
	// Fields

};


instance 1ab71452a40
struct PlayerReservation 
{
	// Fields
	UniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c

};


instance 1ab714528c0
struct PIELoginSettingsInternal 
{
	// Fields
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray TokenBytes; // 0x30

};


instance 1ab71452800
struct PartyReservation 
{
	// Fields
	int TeamNum; // 0x0
	UniqueNetIdRepl PartyLeader; // 0x8
	TArray PartyMembers; // 0x30
	TArray RemovedPartyMembers; // 0x40

};


instance 1ab71452740
struct SpectatorReservation 
{
	// Fields
	UniqueNetIdRepl SpectatorId; // 0x0
	PlayerReservation Spectator; // 0x28

};


