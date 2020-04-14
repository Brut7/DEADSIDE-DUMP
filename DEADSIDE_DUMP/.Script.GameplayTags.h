instance 1ab5e12c7c0
class BlueprintGameplayTagLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	RemoveGameplayTag 0x47f5d hash 7245d07f params:( GameplayTagContainer TagContainer;GameplayTag Tag;None ReturnValue; );
	NotEqual_TagTag 0x47f54 hash 13fa2645 params:( GameplayTag A;None B;None ReturnValue; );
	NotEqual_TagContainerTagContainer 0x47f42 hash 1b0e840b params:( GameplayTagContainer A;None B;None ReturnValue; );
	NotEqual_GameplayTagContainer 0x47f32 hash 4254385c params:( GameplayTagContainer A;GameplayTagContainer B;None ReturnValue; );
	NotEqual_GameplayTag 0x47f27 hash 203cdd79 params:( GameplayTag A;GameplayTag B;None ReturnValue; );
	MatchesTag 0x47f21 hash 5c98fa46 params:( GameplayTag TagOne;GameplayTag TagTwo;None bExactMatch;None ReturnValue; );
	MatchesAnyTags 0x47f19 hash 2aeae61 params:( GameplayTag TagOne;GameplayTagContainer OtherContainer;None bExactMatch;None ReturnValue; );
	MakeLiteralGameplayTagContainer 0x47f08 hash 87e8a65f params:( GameplayTagContainer Value;GameplayTagContainer ReturnValue; );
	MakeLiteralGameplayTag 0x47efc hash 9b08241c params:( GameplayTag Value;GameplayTag ReturnValue; );
	MakeGameplayTagQuery 0x47ef1 hash 3a449105 params:( GameplayTagQuery TagQuery;GameplayTagQuery ReturnValue; );
	MakeGameplayTagContainerFromTag 0x47ee0 hash eb6c1902 params:( GameplayTag SingleTag;GameplayTagContainer ReturnValue; );
	MakeGameplayTagContainerFromArray 0x47ece hash 75881e25 params:( GameplayTags GameplayTags;GameplayTagContainer ReturnValue; );
	IsTagQueryEmpty 0x47ec5 hash 270deaa2 params:( GameplayTagQuery TagQuery;None ReturnValue; );
	IsGameplayTagValid 0x47ebb hash f1de2d1d params:( GameplayTag GameplayTag;None ReturnValue; );
	HasTag 0x3edff hash b6ee3cbd params:( GameplayTagContainer TagContainer;GameplayTag Tag;None bExactMatch;None ReturnValue; );
	HasAnyTags 0x47eb5 hash 323e5458 params:( GameplayTagContainer TagContainer;GameplayTagContainer OtherContainer;None bExactMatch;None ReturnValue; );
	HasAllTags 0x47eaf hash 2ca8c489 params:( GameplayTagContainer TagContainer;GameplayTagContainer OtherContainer;None bExactMatch;None ReturnValue; );
	HasAllMatchingGameplayTags 0x47ea1 hash 160b7724 params:( GameplayTagAssetInterface TagContainerInterface;GameplayTagContainer OtherContainer;None ReturnValue; );
	GetTagName 0x47e9b hash 835dcba2 params:( GameplayTag GameplayTag;None ReturnValue; );
	GetNumGameplayTagsInContainer 0x47e8b hash 7e17790e params:( GameplayTagContainer TagContainer;None ReturnValue; );
	GetDebugStringFromGameplayTagContainer 0x47e77 hash 157a0e06 params:( GameplayTagContainer TagContainer;None ReturnValue; );
	GetDebugStringFromGameplayTag 0x47e67 hash 1724dbe3 params:( GameplayTag GameplayTag;None ReturnValue; );
	GetAllActorsOfClassMatchingTagQuery 0x47e54 hash 5a58a1b2 params:( Object WorldContextObject;Class ActorClass;GameplayTagQuery GameplayTagQuery;OutActors OutActors; );
	EqualEqual_GameplayTagContainer 0x47e43 hash 4abe3603 params:( GameplayTagContainer A;GameplayTagContainer B;None ReturnValue; );
	EqualEqual_GameplayTag 0x47e37 hash 76016b40 params:( GameplayTag A;GameplayTag B;None ReturnValue; );
	DoesTagAssetInterfaceHaveTag 0x47e28 hash b532669d params:( GameplayTagAssetInterface TagContainerInterface;GameplayTag Tag;None ReturnValue; );
	DoesContainerMatchTagQuery 0x47e1a hash eb3b1f72 params:( GameplayTagContainer TagContainer;GameplayTagQuery TagQuery;None ReturnValue; );
	BreakGameplayTagContainer 0x47e0c hash 7a98279 params:( GameplayTagContainer GameplayTagContainer;GameplayTags GameplayTags; );
	AppendGameplayTagContainers 0x47dfd hash 1f60717f params:( GameplayTagContainer InOutTagContainer;GameplayTagContainer InTagContainer; );
	AddGameplayTag 0x47df5 hash 3c17f5fa params:( GameplayTagContainer TagContainer;GameplayTag Tag; );
};


instance 1ab5e12c580
class GameplayTagAssetInterface public : Interface
{
	// Fields

	// Functions
	HasMatchingGameplayTag 0x47f8e hash 19b775f8 params:( GameplayTag TagToCheck;None ReturnValue; );
	HasAnyMatchingGameplayTags 0x47f80 hash 190cc4f3 params:( GameplayTagContainer TagContainer;None ReturnValue; );
	HasAllMatchingGameplayTags 0x47ea1 hash 160b7724 params:( GameplayTagContainer TagContainer;None ReturnValue; );
	GetOwnedGameplayTags 0x47f75 hash ff8e86c1 params:( GameplayTagContainer TagContainer; );
};


instance 1ab5e12c340
class EditableGameplayTagQuery public : Object
{
	// Fields
	FString UserDescription; // 0x28
	EditableGameplayTagQueryExpression* RootExpression; // 0x48
	GameplayTagQuery TagQueryExportText_Helper; // 0x50

};


instance 1ab5e12c100
class EditableGameplayTagQueryExpression public : Object
{
	// Fields

};


instance 1ab5e12bec0
class EditableGameplayTagQueryExpression_AnyTagsMatch public : EditableGameplayTagQueryExpression
{
	// Fields
	GameplayTagContainer Tags; // 0x28

};


instance 1ab5e12bc80
class EditableGameplayTagQueryExpression_AllTagsMatch public : EditableGameplayTagQueryExpression
{
	// Fields
	GameplayTagContainer Tags; // 0x28

};


instance 1ab5e12ba40
class EditableGameplayTagQueryExpression_NoTagsMatch public : EditableGameplayTagQueryExpression
{
	// Fields
	GameplayTagContainer Tags; // 0x28

};


instance 1ab5e12b800
class EditableGameplayTagQueryExpression_AnyExprMatch public : EditableGameplayTagQueryExpression
{
	// Fields
	TArray Expressions; // 0x28

};


instance 1ab5e12b5c0
class EditableGameplayTagQueryExpression_AllExprMatch public : EditableGameplayTagQueryExpression
{
	// Fields
	TArray Expressions; // 0x28

};


instance 1ab5e12b380
class EditableGameplayTagQueryExpression_NoExprMatch public : EditableGameplayTagQueryExpression
{
	// Fields
	TArray Expressions; // 0x28

};


instance 1ab5e12b140
class GameplayTagsManager public : Object
{
	// Fields
	TArray TagSources; // 0xc0
	TArray GameplayTagTables; // 0x1b0

};


instance 1ab5e12af00
class GameplayTagsList public : Object
{
	// Fields
	FString ConfigFileName; // 0x28
	TArray GameplayTagList; // 0x38

};


instance 1ab5e12acc0
class RestrictedGameplayTagsList public : Object
{
	// Fields
	FString ConfigFileName; // 0x28
	TArray RestrictedGameplayTagList; // 0x38

};


instance 1ab5e12aa80
class GameplayTagsSettings public : GameplayTagsList
{
	// Fields
	bool ImportTagsFromConfig; // 0x48
	bool WarnOnInvalidTags; // 0x49
	bool FastReplication; // 0x4a
	FString InvalidTagCharacters; // 0x50
	TArray CategoryRemapping; // 0x60
	TArray GameplayTagTableList; // 0x70
	TArray GameplayTagRedirects; // 0x80
	TArray CommonlyReplicatedTags; // 0x90
	int NumBitsForContainerSize; // 0xa0
	int NetIndexFirstBitSegment; // 0xa4
	TArray RestrictedConfigFiles; // 0xa8

};


instance 1ab5e12a840
class GameplayTagsDeveloperSettings public : Object
{
	// Fields
	FString DeveloperConfigName; // 0x28

};


instance 1ab71519e80
struct GameplayTagQuery 
{
	// Fields
	int TokenStreamVersion; // 0x0
	TArray TagDictionary; // 0x8
	TArray QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38

};


instance 1ab71519dc0
struct GameplayTag 
{
	// Fields
	FName TagName; // 0x0

};


instance 1ab71519d00
struct GameplayTagCreationWidgetHelper 
{
	// Fields

};


instance 1ab71519c40
struct GameplayTagReferenceHelper 
{
	// Fields

};


instance 1ab71519b80
struct GameplayTagContainer 
{
	// Fields
	TArray GameplayTags; // 0x0
	TArray ParentTags; // 0x10

};


instance 1ab71519ac0
struct GameplayTagNode 
{
	// Fields

};


instance 1ab71519a00
struct GameplayTagSource 
{
	// Fields
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	GameplayTagsList* SourceTagList; // 0x10
	RestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18

};


instance 1ab71519940
struct GameplayTagTableRow 
{
	// Fields
	FName Tag; // 0x8
	FString DevComment; // 0x10

};


instance 1ab71519880
struct RestrictedGameplayTagTableRow 
{
	// Fields
	bool bAllowNonRestrictedChildren; // 0x20

};


instance 1ab715197c0
struct RestrictedConfigInfo 
{
	// Fields
	FString RestrictedConfigName; // 0x0
	TArray Owners; // 0x10

};


instance 1ab71519700
struct GameplayTagCategoryRemap 
{
	// Fields
	FString BaseCategory; // 0x0
	TArray RemapCategories; // 0x10

};


instance 1ab71519640
struct GameplayTagRedirect 
{
	// Fields
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8

};


