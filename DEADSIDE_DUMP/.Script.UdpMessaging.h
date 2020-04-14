instance 1ab5e05e080
class UdpMessagingSettings public : Object
{
	// Fields
	bool EnableTransport; // 0x28
	bool bAutoRepair; // 0x29
	FString UnicastEndpoint; // 0x30
	FString MulticastEndpoint; // 0x40
	BYTE MulticastTimeToLive; // 0x50
	TArray StaticEndpoints; // 0x58
	bool EnableTunnel; // 0x68
	FString TunnelUnicastEndpoint; // 0x70
	FString TunnelMulticastEndpoint; // 0x80
	TArray RemoteTunnelEndpoints; // 0x90

};


instance 1ab71452f80
struct UdpMockMessage 
{
	// Fields
	TArray Data; // 0x0

};


