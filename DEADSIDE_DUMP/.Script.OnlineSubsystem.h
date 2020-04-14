instance 1ab5e093e80
class NamedInterfaces public : Object
{
	// Fields
	TArray NamedInterfaces; // 0x28
	TArray NamedInterfaceDefs; // 0x38

};


instance 1ab5e093c40
class TurnBasedMatchInterface public : Interface
{
	// Fields

	// Functions
	OnMatchReceivedTurn 0x3e68 hash 2adf677f params:( None Match;None bDidBecomeActive; );
	OnMatchEnded 0x3e61 hash e63808ef params:( None Match; );
};


instance 1ab70e96dc0
struct InAppPurchaseProductInfo 
{
	// Fields
	FString Identifier; // 0x0
	FString TransactionIdentifier; // 0x10
	FString DisplayName; // 0x20
	FString DisplayDescription; // 0x30
	FString DisplayPrice; // 0x40
	float RawPrice; // 0x50
	FString CurrencyCode; // 0x58
	FString CurrencySymbol; // 0x68
	FString DecimalSeparator; // 0x78
	FString GroupingSeparator; // 0x88
	FString ReceiptData; // 0x98

};


instance 1ab70e96e80
struct InAppPurchaseRestoreInfo 
{
	// Fields
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20

};


instance 1ab71452c80
struct NamedInterfaceDef 
{
	// Fields
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8

};


instance 1ab71452bc0
struct NamedInterface 
{
	// Fields
	FName InterfaceName; // 0x0
	Object* InterfaceObject; // 0x8

};


instance 1ab71452b00
struct InAppPurchaseProductRequest 
{
	// Fields
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10

};


