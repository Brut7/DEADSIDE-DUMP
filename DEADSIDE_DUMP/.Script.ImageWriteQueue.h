instance 1ab5e0da180
class ImageWriteBlueprintLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	ExportToDisk 0x45151 hash 36e9c415 params:( Texture Texture;None Filename;ImageWriteOptions Options; );
};


instance 1ab71459b80
struct ImageWriteOptions 
{
	// Fields
	EDesiredImageFormat Format; // 0x0
	DelegateProperty OnComplete; // 0x4 property 0x1ab7147c800 hash 0xe1aec4e5
	int CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19

};


