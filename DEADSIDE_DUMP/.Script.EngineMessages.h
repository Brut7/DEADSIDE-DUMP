instance 1ab7151a3c0
struct EngineServiceNotification 
{
	// Fields
	FString Text; // 0x0
	double TimeSeconds; // 0x10

};


instance 1ab7151a300
struct EngineServiceTerminate 
{
	// Fields
	FString UserName; // 0x0

};


instance 1ab7151a240
struct EngineServiceExecuteCommand 
{
	// Fields
	FString Command; // 0x0
	FString UserName; // 0x10

};


instance 1ab7151a180
struct EngineServiceAuthGrant 
{
	// Fields
	FString UserName; // 0x0
	FString UserToGrant; // 0x10

};


instance 1ab7151a0c0
struct EngineServiceAuthDeny 
{
	// Fields
	FString UserName; // 0x0
	FString UserToDeny; // 0x10

};


instance 1ab7151a000
struct EngineServicePong 
{
	// Fields
	FString CurrentLevel; // 0x0
	int EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	Guid InstanceId; // 0x18
	FString InstanceType; // 0x28
	Guid SessionId; // 0x38
	float WorldTimeSeconds; // 0x48

};


instance 1ab71519f40
struct EngineServicePing 
{
	// Fields

};


