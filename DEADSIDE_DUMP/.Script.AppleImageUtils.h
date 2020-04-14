instance 1ab5e096280
class AppleImageUtilsBaseAsyncTaskBlueprintProxy public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnSuccess; // 0x30 property 0x1ab7182f400 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnFailure; // 0x40 property 0x1ab7182f480 hash 0xb7a5ed1a
	AppleImageUtilsImageConversionResult ConversionResult; // 0x60

	// Functions
	CreateProxyObjectForConvertToTIFF 0x4185c hash 6ab2e686 params:( Texture SourceImage;None bWantColor;None bUseGpu;None Scale;UnderlyingType Rotate;AppleImageUtilsBaseAsyncTaskBlueprintProxy ReturnValue; );
	CreateProxyObjectForConvertToPNG 0x4184b hash 50cf0de2 params:( Texture SourceImage;None bWantColor;None bUseGpu;None Scale;UnderlyingType Rotate;AppleImageUtilsBaseAsyncTaskBlueprintProxy ReturnValue; );
	CreateProxyObjectForConvertToJPEG 0x41839 hash 6aad8863 params:( Texture SourceImage;None Quality;None bWantColor;None bUseGpu;None Scale;UnderlyingType Rotate;AppleImageUtilsBaseAsyncTaskBlueprintProxy ReturnValue; );
	CreateProxyObjectForConvertToHEIF 0x41827 hash 6aac4159 params:( Texture SourceImage;None Quality;None bWantColor;None bUseGpu;None Scale;UnderlyingType Rotate;AppleImageUtilsBaseAsyncTaskBlueprintProxy ReturnValue; );
};


instance 1ab5e096040
class AppleImageInterface public : Interface
{
	// Fields

};


instance 1ab70e96c40
struct AppleImageUtilsImageConversionResult 
{
	// Fields
	FString Error; // 0x0
	TArray ImageData; // 0x10

};


