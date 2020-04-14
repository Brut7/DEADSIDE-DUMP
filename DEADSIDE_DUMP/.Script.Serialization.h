instance 1ab716e6640
struct StructSerializerTestStruct 
{
	// Fields
	StructSerializerNumericTestStruct Numerics; // 0x0
	StructSerializerBooleanTestStruct Booleans; // 0x30
	StructSerializerObjectTestStruct Objects; // 0x38
	StructSerializerBuiltinTestStruct Builtins; // 0xe0
	StructSerializerArrayTestStruct Arrays; // 0x170
	StructSerializerMapTestStruct Maps; // 0x1c0
	StructSerializerSetTestStruct Sets; // 0x300

};


instance 1ab716e6580
struct StructSerializerSetTestStruct 
{
	// Fields
	SetProperty StrSet; // 0x0 property 0x1ab71166320 hash 0xb0194396
	SetProperty IntSet; // 0x50 property 0x1ab711663c0 hash 0xb0194396
	SetProperty NameSet; // 0xa0 property 0x1ab71166460 hash 0xb0194396
	SetProperty StructSet; // 0xf0 property 0x1ab71166500 hash 0xb0194396

};


instance 1ab716e64c0
struct StructSerializerBuiltinTestStruct 
{
	// Fields
	Guid Guid; // 0x0
	FName Name; // 0x10
	FString String; // 0x18
	FText Text; // 0x28
	Vector Vector; // 0x40
	Vector4 Vector4; // 0x50
	Rotator Rotator; // 0x60
	Quat Quat; // 0x70
	Color Color; // 0x80

};


instance 1ab716e6400
struct StructSerializerMapTestStruct 
{
	// Fields
	MapProperty IntToStr; // 0x0 property 0x1ab711660a0 hash 0xadd0fb88
	MapProperty StrToStr; // 0x50 property 0x1ab71166140 hash 0xadd0fb88
	MapProperty StrToVec; // 0xa0 property 0x1ab711661e0 hash 0xadd0fb88
	MapProperty StrToStruct; // 0xf0 property 0x1ab71166280 hash 0xadd0fb88

};


instance 1ab716e6340
struct StructSerializerArrayTestStruct 
{
	// Fields
	TArray Int32Array; // 0x0
	int StaticSingleElement; // 0x10
	int StaticInt32Array; // 0x14
	float StaticFloatArray; // 0x20
	TArray VectorArray; // 0x30
	TArray StructArray; // 0x40

};


instance 1ab716e9400
struct StructSerializerObjectTestStruct 
{
	// Fields
	Object* Class; // 0x0
	MetaData* SubClass; // 0x8
	MetaData* SoftClass; // 0x10
	Object* Object; // 0x38
	WeakObjectProperty WeakObject; // 0x40 property 0x1ab71716400 hash 0x24388009
	MetaData* SoftObject; // 0x48
	SoftClassPath ClassPath; // 0x70
	SoftObjectPath ObjectPath; // 0x88

};


instance 1ab716e9340
struct StructSerializerBooleanTestStruct 
{
	// Fields
	bool BoolFalse; // 0x0
	bool BoolTrue; // 0x1
	bool Bitfield0; // 0x2
	bool Bitfield1; // 0x2
	bool Bitfield2Set; // 0x2
	bool Bitfield3; // 0x2
	bool Bitfield4Set; // 0x2
	bool Bitfield5Set; // 0x2
	bool Bitfield6; // 0x2
	bool Bitfield7Set; // 0x2

};


instance 1ab716e9280
struct StructSerializerNumericTestStruct 
{
	// Fields
	char Int8; // 0x0
	SHORT Int16; // 0x2
	int Int32; // 0x4
	ULONG64 Int64; // 0x8
	BYTE UInt8; // 0x10
	USHORT UInt16; // 0x12
	int UInt32; // 0x14
	ULONG64 UInt64; // 0x18
	float Float; // 0x20
	double Double; // 0x28

};


