instance 1ab5e05bec0
class LevelVariantSets public : Object
{
	// Fields
	Object* DirectorClass; // 0x28
	TArray VariantSets; // 0x30

	// Functions
	GetVariantSetByName 0x40fee hash cf53a502 params:( None VariantSetName;VariantSet ReturnValue; );
	GetVariantSet 0x40fe6 hash 5f503166 params:( None VariantSetIndex;VariantSet ReturnValue; );
	GetNumVariantSets 0x40fdc hash 79f9bdc9 params:( None ReturnValue; );
};


instance 1ab5e05bc80
class LevelVariantSetsActor public : Actor
{
	// Fields
	SoftObjectPath LevelVariantSets; // 0x218

	// Functions
	SwitchOnVariantByName 0x41027 hash fe456565 params:( None VariantSetName;None VariantName;None ReturnValue; );
	SwitchOnVariantByIndex 0x4101b hash c69e929c params:( None VariantSetIndex;None VariantIndex;None ReturnValue; );
	SetLevelVariantSets 0x41010 hash a4ec7dbd params:( LevelVariantSets InVariantSets; );
	GetLevelVariantSets 0x41005 hash 5aafb2b1 params:( None bLoad;LevelVariantSets ReturnValue; );
};


instance 1ab5e05ba40
class LevelVariantSetsFunctionDirector public : Object
{
	// Fields

};


instance 1ab5e05b800
class PropertyValue public : Object
{
	// Fields
	TArray Properties; // 0x80
	TArray PropertyIndices; // 0x90
	TArray CapturedPropSegments; // 0xa0
	FString FullDisplayString; // 0xb0
	FName PropertySetterName; // 0xc0
	MapProperty PropertySetterParameterDefaults; // 0xc8 property 0x1ab71165880 hash 0xadd0fb88
	bool bHasRecordedData; // 0x118
	Object* LeafPropertyClass; // 0x120
	TArray ValueBytes; // 0x128
	EPropertyValueCategory PropCategory; // 0x138

	// Functions
	HasRecordedData 0x41061 hash 37b7cdc3 params:( None ReturnValue; );
	GetPropertyTooltip 0x41057 hash 475766b5 params:( None ReturnValue; );
	GetFullDisplayString 0x4104c hash 36124025 params:( None ReturnValue; );
};


instance 1ab5e05b5c0
class PropertyValueTransform public : PropertyValue
{
	// Fields

};


instance 1ab5e05b380
class PropertyValueVisibility public : PropertyValue
{
	// Fields

};


instance 1ab5e05b140
class PropertyValueColor public : PropertyValue
{
	// Fields

};


instance 1ab5e05af00
class PropertyValueMaterial public : PropertyValue
{
	// Fields

};


instance 1ab5e05acc0
class PropertyValueOption public : PropertyValue
{
	// Fields

};


instance 1ab5e05aa80
class SwitchActor public : Actor
{
	// Fields
	SceneComponent* SceneComponent; // 0x230

	// Functions
	SelectOption 0x410bb hash 7df7e2de params:( None OptionIndex; );
	GetSelectedOption 0x410b1 hash 2a34c9a7 params:( None ReturnValue; );
	GetOptions 0x410ab hash 267245d1 params:( ReturnValue ReturnValue; );
};


instance 1ab5e05a840
class Variant public : Object
{
	// Fields
	FText DisplayText; // 0x28
	TArray ObjectBindings; // 0x58

	// Functions
	SwitchOn 0x410e3 hash dab65fb4 params:(  );
	SetDisplayText 0x410db hash eb3ab34c params:( None NewDisplayText; );
	GetNumActors 0x410d4 hash 3bebd561 params:( None ReturnValue; );
	GetDisplayText 0x410cc hash 2437ffc0 params:( None ReturnValue; );
	GetActor 0x410c7 hash 741633fe params:( None ActorIndex;Actor ReturnValue; );
};


instance 1ab5e05a600
class VariantObjectBinding public : Object
{
	// Fields
	SoftObjectPath ObjectPtr; // 0x28
	LazyObjectProperty LazyObjectPtr; // 0x40 property 0x1ab71824000 hash 0xbcf63421
	TArray CapturedProperties; // 0x60
	TArray FunctionCallers; // 0x70

};


instance 1ab5e05a3c0
class VariantSet public : Object
{
	// Fields
	FText DisplayText; // 0x28
	bool bExpanded; // 0x58
	TArray Variants; // 0x60

	// Functions
	SetDisplayText 0x410db hash eb3ab34c params:( None NewDisplayText; );
	GetVariantByName 0x41107 hash d2158bb6 params:( None VariantName;Variant ReturnValue; );
	GetVariant 0x41101 hash 1e28211a params:( None VariantIndex;Variant ReturnValue; );
	GetNumVariants 0x410f9 hash a88871fd params:( None ReturnValue; );
	GetDisplayText 0x410cc hash 2437ffc0 params:( None ReturnValue; );
};


instance 1ab71450640
struct FunctionCaller 
{
	// Fields
	FName FunctionName; // 0x0

};


instance 1ab71450580
struct CapturedPropSegment 
{
	// Fields
	FString PropertyName; // 0x0
	int PropertyIndex; // 0x10
	FString ComponentName; // 0x18

};


