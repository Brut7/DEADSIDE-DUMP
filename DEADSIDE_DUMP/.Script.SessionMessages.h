instance 1ab716e8bc0
struct SessionServiceLogUnsubscribe 
{
	// Fields

};


instance 1ab716e8b00
struct SessionServiceLogSubscribe 
{
	// Fields

};


instance 1ab716e8a40
struct SessionServiceLog 
{
	// Fields
	FName Category; // 0x0
	FString Data; // 0x8
	Guid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	BYTE Verbosity; // 0x30

};


instance 1ab716e8980
struct SessionServicePong 
{
	// Fields
	bool Authorized; // 0x0
	FString BuildDate; // 0x8
	FString DeviceName; // 0x18
	Guid InstanceId; // 0x28
	FString InstanceName; // 0x38
	FString PlatformName; // 0x48
	Guid SessionId; // 0x58
	FString SessionName; // 0x68
	FString SessionOwner; // 0x78
	bool Standalone; // 0x88

};


instance 1ab716e88c0
struct SessionServicePing 
{
	// Fields
	FString UserName; // 0x0

};


