instance 1ab5e0f8d40
class BuildPatchManifest public : Object
{
	// Fields
	BYTE ManifestFileVersion; // 0x28
	bool bIsFileData; // 0x29
	int AppID; // 0x2c
	FString AppName; // 0x30
	FString BuildVersion; // 0x40
	FString LaunchExe; // 0x50
	FString LaunchCommand; // 0x60
	SetProperty PrereqIds; // 0x70 property 0x1ab71165560 hash 0xb0194396
	FString PrereqName; // 0xc0
	FString PrereqPath; // 0xd0
	FString PrereqArgs; // 0xe0
	TArray FileManifestList; // 0xf0
	TArray ChunkList; // 0x100
	TArray CustomFields; // 0x110

};


instance 1ab7145c280
struct FileManifestData 
{
	// Fields
	FString Filename; // 0x0
	SHAHashData FileHash; // 0x10
	TArray FileChunkParts; // 0x28
	TArray InstallTags; // 0x38
	bool bIsUnixExecutable; // 0x48
	FString SymlinkTarget; // 0x50
	bool bIsReadOnly; // 0x60
	bool bIsCompressed; // 0x61

};


instance 1ab7145c1c0
struct ChunkPartData 
{
	// Fields
	Guid Guid; // 0x0
	int Offset; // 0x10
	int Size; // 0x14

};


instance 1ab7145c100
struct SHAHashData 
{
	// Fields
	BYTE Hash; // 0x0

};


instance 1ab7145c040
struct ChunkInfoData 
{
	// Fields
	Guid Guid; // 0x0
	ULONG64 Hash; // 0x10
	SHAHashData ShaHash; // 0x18
	ULONG64 FileSize; // 0x30
	BYTE GroupNumber; // 0x38

};


instance 1ab7145bf80
struct CustomFieldData 
{
	// Fields
	FString Key; // 0x0
	FString Value; // 0x10

};


