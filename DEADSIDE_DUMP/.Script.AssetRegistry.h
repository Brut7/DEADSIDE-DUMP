instance 1ab5e12ce80
class AssetRegistryImpl public : Object
{
	// Fields

};


instance 1ab5e12cc40
class AssetRegistryHelpers public : Object
{
	// Fields

	// Functions
	ToSoftObjectPath 0x47d24 hash 12672ba8 params:( AssetData InAssetData;SoftObjectPath ReturnValue; );
	SetFilterTagsAndValues 0x47d18 hash 4f2a13c9 params:( ARFilter InFilter;InTagsAndValues InTagsAndValues;ARFilter ReturnValue; );
	IsValid 0x47d13 hash 9a77631 params:( AssetData InAssetData;None ReturnValue; );
	IsUAsset 0x47d0e hash 3a020556 params:( AssetData InAssetData;None ReturnValue; );
	IsRedirector 0x47d07 hash 64cafeb4 params:( AssetData InAssetData;None ReturnValue; );
	IsAssetLoaded 0x47cff hash de4c13ca params:( AssetData InAssetData;None ReturnValue; );
	GetTagValue 0x47cf8 hash efa8021e params:( AssetData InAssetData;None InTagName;None OutTagValue;None ReturnValue; );
	GetFullName 0x47cf1 hash 14c86819 params:( AssetData InAssetData;None ReturnValue; );
	GetExportTextName 0x47ce7 hash 33c674d params:( AssetData InAssetData;None ReturnValue; );
	GetClass 0x47ce2 hash 743f041b params:( AssetData InAssetData;Class ReturnValue; );
	GetAssetRegistry 0x47cd9 hash d63a439e params:( AssetRegistry ReturnValue; );
	GetAsset 0x47cd4 hash 741ef485 params:( AssetData InAssetData;Object ReturnValue; );
	CreateAssetData 0x47ccb hash d7dacf73 params:( Object InAsset;None bAllowBlueprintClass;AssetData ReturnValue; );
};


instance 1ab5e12ca00
class AssetRegistry public : Interface
{
	// Fields

	// Functions
	UseFilterToExcludeAssets 0x47dd9 hash 67e2a358 params:( AssetDataList AssetDataList;ARFilter Filter; );
	SearchAllAssets 0x47dd0 hash 591d0227 params:( None bSynchronousSearch; );
	ScanPathsSynchronous 0x47dc5 hash 37554ef5 params:( InPaths InPaths;None bForceRescan; );
	ScanModifiedAssetFiles 0x47db9 hash b446d59e params:( InFilePaths InFilePaths; );
	ScanFilesSynchronous 0x47dae hash f5e58a8 params:( InFilePaths InFilePaths;None bForceRescan; );
	RunAssetsThroughFilter 0x47da2 hash 5a5dac74 params:( AssetDataList AssetDataList;ARFilter Filter; );
	PrioritizeSearchPath 0x47d97 hash 46d0f619 params:( None PathToPrioritize; );
	K2_GetReferencers 0x47d8d hash 8efab935 params:( None PackageName;AssetRegistryDependencyOptions ReferenceOptions;OutReferencers OutReferencers;None ReturnValue; );
	K2_GetDependencies 0x47d83 hash d7323f08 params:( None PackageName;AssetRegistryDependencyOptions DependencyOptions;OutDependencies OutDependencies;None ReturnValue; );
	IsLoadingAssets 0x47d7a hash 905e72d2 params:( None ReturnValue; );
	HasAssets 0x47d74 hash 6e786654 params:( None PackagePath;None bRecursive;None ReturnValue; );
	GetSubPaths 0x47d6d hash fadcae8f params:( None InBasePath;OutPathList OutPathList;None bInRecurse; );
	GetAssetsByPath 0x47d64 hash 9a90f060 params:( None PackagePath;OutAssetData OutAssetData;None bRecursive;None bIncludeOnlyOnDiskAssets;None ReturnValue; );
	GetAssetsByPackageName 0x47d58 hash 93b93b60 params:( None PackageName;OutAssetData OutAssetData;None bIncludeOnlyOnDiskAssets;None ReturnValue; );
	GetAssetsByClass 0x47d4f hash ebc97709 params:( None ClassName;OutAssetData OutAssetData;None bSearchSubClasses;None ReturnValue; );
	GetAssets 0x47d49 hash f7fd8598 params:( ARFilter Filter;OutAssetData OutAssetData;None ReturnValue; );
	GetAssetByObjectPath 0x47d3e hash 24e26a4 params:( None ObjectPath;None bIncludeOnlyOnDiskAssets;AssetData ReturnValue; );
	GetAllCachedPaths 0x47d34 hash f1100c16 params:( OutPathList OutPathList; );
	GetAllAssets 0x47d2d hash b7703111 params:( OutAssetData OutAssetData;None bIncludeOnlyOnDiskAssets;None ReturnValue; );
};


instance 1ab7151a840
struct ARFilter 
{
	// Fields
	TArray PackageNames; // 0x0
	TArray PackagePaths; // 0x10
	TArray ObjectPaths; // 0x20
	TArray ClassNames; // 0x30
	SetProperty RecursiveClassesExclusionSet; // 0x90 property 0x1ab711643e0 hash 0xb0194396
	bool bRecursivePaths; // 0xe0
	bool bRecursiveClasses; // 0xe1
	bool bIncludeOnlyOnDiskAssets; // 0xe2

};


instance 1ab7151a780
struct AssetBundleData 
{
	// Fields
	TArray Bundles; // 0x0

};


instance 1ab7151a6c0
struct AssetBundleEntry 
{
	// Fields
	PrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray BundleAssets; // 0x18

};


instance 1ab7151a600
struct AssetData 
{
	// Fields
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20

};


instance 1ab7151a540
struct TagAndValue 
{
	// Fields
	FName Tag; // 0x0
	FString Value; // 0x8

};


instance 1ab7151a480
struct AssetRegistryDependencyOptions 
{
	// Fields
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4

};


