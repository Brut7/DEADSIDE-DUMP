instance 1ab5c9febc0
class VaRestJsonObject public : Object
{
	// Fields

	// Functions
	WriteToFilePath 0x3ecb2 hash d827f940 params:( None Path;None bIsRelativeToProjectDir;None ReturnValue; );
	SetStringField 0x3ecaa hash a238594c params:( None FieldName;None StringValue; );
	SetStringArrayField 0x3ec9f hash fc8cb78b params:( None FieldName;StringArray StringArray; );
	SetObjectField 0x3ec97 hash beaee84c params:( None FieldName;VaRestJsonObject JsonObject; );
	SetObjectArrayField 0x3ec8c hash e474a68b params:( None FieldName;ObjectArray ObjectArray; );
	SetNumberField 0x3ec84 hash b414f51e params:( None FieldName;None Number; );
	SetNumberArrayField 0x3ec79 hash 115d869d params:( None FieldName;NumberArray NumberArray; );
	SetIntegerField 0x3ec70 hash 6a236743 params:( None FieldName;None Number; );
	SetField 0x3ec6b hash 8789b315 params:( None FieldName;VaRestJsonValue JsonValue; );
	SetBoolField 0x3ec64 hash 84233f01 params:( None FieldName;None InValue; );
	SetBoolArrayField 0x3ec5a hash 74447660 params:( None FieldName;BoolArray BoolArray; );
	SetArrayField 0x3ec52 hash 4c7a96f4 params:( None FieldName;inArray inArray; );
	Reset 0x20859 hash e043268 params:(  );
	RemoveField 0x3ec4b hash b0ed8f37 params:( None FieldName; );
	MergeJsonObject 0x3ec42 hash 803f27a6 params:( VaRestJsonObject InJsonObject;None Overwrite; );
	HasField 0x3ec3d hash 2a7771c5 params:( None FieldName;None ReturnValue; );
	GetStringField 0x3ec35 hash db35a5c0 params:( None FieldName;None ReturnValue; );
	GetStringArrayField 0x3ec2a hash b24fec7f params:( None FieldName;ReturnValue ReturnValue; );
	GetObjectField 0x3ec22 hash f7ac34c0 params:( None FieldName;VaRestJsonObject ReturnValue; );
	GetObjectArrayField 0x3ec17 hash 9a37db7f params:( None FieldName;ReturnValue ReturnValue; );
	GetNumberField 0x3ec0f hash ed124192 params:( None FieldName;None ReturnValue; );
	GetNumberArrayField 0x3ec04 hash c720bb91 params:( None FieldName;ReturnValue ReturnValue; );
	GetIntegerField 0x3ebfb hash c2ca4237 params:( None FieldName;None ReturnValue; );
	GetFieldNames 0x3ebf3 hash aed3fb5d params:( ReturnValue ReturnValue; );
	GetField 0x3ebee hash 7473b889 params:( None FieldName;VaRestJsonValue ReturnValue; );
	GetBoolField 0x3ebe7 hash 38bade75 params:( None FieldName;None ReturnValue; );
	GetBoolArrayField 0x3ebdd hash 920dde54 params:( None FieldName;ReturnValue ReturnValue; );
	GetArrayField 0x3ebd5 hash 940624e8 params:( None FieldName;ReturnValue ReturnValue; );
	EncodeJsonToSingleString 0x3ebc8 hash 445db669 params:( None ReturnValue; );
	EncodeJson 0x3ebc2 hash 8874c0d params:( None ReturnValue; );
	DecodeJson 0x3ebbc hash ec1cc1e3 params:( None JsonString;None bUseIncrementalParser;None ReturnValue; );
	ConstructVaRestJsonObject 0x3ebae hash 959e3610 params:( Object WorldContextObject;VaRestJsonObject ReturnValue; );
};


instance 1ab5c9fe980
class VaRestJsonValue public : Object
{
	// Fields

	// Functions
	IsNull 0x3ed29 hash ba75623c params:( None ReturnValue; );
	GetTypeString 0x3ed21 hash 163caa9e params:( None ReturnValue; );
	GetType 0x3ed1c hash 5122ba47 params:( UnderlyingType ReturnValue; );
	ConstructJsonValueString 0x3ed0f hash 45c33998 params:( Object WorldContextObject;None StringValue;VaRestJsonValue ReturnValue; );
	ConstructJsonValueObject 0x3ed02 hash 3b246898 params:( Object WorldContextObject;VaRestJsonObject JsonObject;VaRestJsonValue ReturnValue; );
	ConstructJsonValueNumber 0x3ecf5 hash 3a28aa2a params:( Object WorldContextObject;None Number;VaRestJsonValue ReturnValue; );
	ConstructJsonValueBool 0x3ece9 hash 31dd262d params:( Object WorldContextObject;None InValue;VaRestJsonValue ReturnValue; );
	ConstructJsonValueArray 0x3ecdc hash 6d718440 params:( Object WorldContextObject;inArray inArray;VaRestJsonValue ReturnValue; );
	AsString 0x3ecd7 hash d6e338f0 params:( None ReturnValue; );
	AsObject 0x3ecd2 hash cc4467f0 params:( VaRestJsonObject ReturnValue; );
	AsNumber 0x3eccd hash cb48a982 params:( None ReturnValue; );
	AsBool 0x3ecc9 hash a7c56f85 params:( None ReturnValue; );
	AsArray 0x3ecc4 hash a062f898 params:( ReturnValue ReturnValue; );
};


instance 1ab5c9fe740
class VaRestLibrary public : BlueprintFunctionLibrary
{
	// Fields

	// Functions
	PercentEncode 0x3ed63 hash 81c93ac4 params:( None Source;None ReturnValue; );
	LoadJsonFromFile 0x3ed5a hash 67454693 params:( Object WorldContextObject;None Path;None bIsRelativeToContentDir;VaRestJsonObject ReturnValue; );
	CallURL 0x3ed55 hash 1360ecb4 params:( Object WorldContextObject;None URL;UnderlyingType Verb;UnderlyingType ContentType;VaRestJsonObject VaRestJson;VaRestCallDelegate__DelegateSignature Callback; );
	Base64EncodeData 0x3ed4c hash ece8d692 params:( Data Data;None Dest;None ReturnValue; );
	Base64Encode 0x3ed45 hash 670334d8 params:( None Source;None ReturnValue; );
	Base64DecodeData 0x3ed3c hash d07e4c68 params:( None Source;Dest Dest;None ReturnValue; );
	Base64Decode 0x3ed35 hash 640b2fae params:( None Source;None Dest;None ReturnValue; );
};


instance 1ab5c9fe500
class VaRestRequestController public : Object
{
	// Fields

	// Functions
	Initialize 0x1747f hash 2e93a277 params:(  );
};


instance 1ab5c9fe2c0
class VaRestRequestJSON public : Object
{
	// Fields
	MulticastInlineDelegateProperty OnRequestComplete; // 0x28 property 0x1ab71737580 hash 0xb7a5ed1a
	MulticastInlineDelegateProperty OnRequestFail; // 0x38 property 0x1ab71737600 hash 0xb7a5ed1a
	int ResponseSize; // 0x88
	FString ResponseContent; // 0x90
	bool bIsValidJsonResponse; // 0xa0
	VaRestJsonObject* RequestJsonObj; // 0xb0
	VaRestJsonObject* ResponseJsonObj; // 0xe8

	// Functions
	SetVerb 0x3ee7a hash ecde5740 params:( UnderlyingType Verb; );
	SetURL 0x3ee76 hash d0dfec44 params:( None URL; );
	SetStringRequestContent 0x3ee69 hash 9c390aac params:( None Content; );
	SetResponseObject 0x3ee5f hash 8ff3a2b7 params:( VaRestJsonObject JsonObject; );
	SetRequestObject 0x3ee56 hash 2203ed71 params:( VaRestJsonObject JsonObject; );
	SetHeader 0x3ee50 hash 7d1fb1fa params:( None HeaderName;None HeaderValue; );
	SetCustomVerb 0x3ee48 hash 403d1e5b params:( None Verb; );
	SetContentType 0x3ee40 hash ebd7c3ae params:( UnderlyingType ContentType; );
	SetBinaryRequestContent 0x3ee33 hash d0ef47fa params:( Content Content; );
	SetBinaryContentType 0x3ee28 hash 9ee68733 params:( None ContentType; );
	ResetResponseData 0x3ee1e hash acd065d1 params:(  );
	ResetRequestData 0x3ee15 hash 56d5a72b params:(  );
	ResetData 0x3ee0f hash 4e1c22 params:(  );
	RemoveTag 0x3ee09 hash 49fa55af params:( None Tag;None ReturnValue; );
	ProcessURL 0x3ee03 hash 81b0e5b7 params:( None URL; );
	HasTag 0x3edff hash b6ee3cbd params:( None Tag;None ReturnValue; );
	GetURL 0x3edfb hash b4e204b8 params:( None ReturnValue; );
	GetStatus 0x3edf5 hash 2202da89 params:( UnderlyingType ReturnValue; );
	GetResponseObject 0x3edeb hash adbd0aab params:( VaRestJsonObject ReturnValue; );
	GetResponseHeader 0x3ede1 hash 9d9a445d params:( None HeaderName;None ReturnValue; );
	GetResponseContentAsString 0x3edd3 hash 1bccc8fa params:( None bCacheResponseContent;None ReturnValue; );
	GetResponseCode 0x3edca hash e3b0b26f params:( None ReturnValue; );
	GetRequestObject 0x3edc1 hash 8f8626e5 params:( VaRestJsonObject ReturnValue; );
	GetAllResponseHeaders 0x3edb5 hash 88847409 params:( ReturnValue ReturnValue; );
	ExecuteProcessRequest 0x3eda9 hash 2652e560 params:(  );
	ConstructVaRestRequestExt 0x3ed9b hash 7f09f8d9 params:( Object WorldContextObject;UnderlyingType Verb;UnderlyingType ContentType;VaRestRequestJSON ReturnValue; );
	ConstructVaRestRequest 0x3ed8f hash fe893c68 params:( Object WorldContextObject;VaRestRequestJSON ReturnValue; );
	Cancel 0x3ed8b hash ab41f40b params:(  );
	ApplyURL 0x3ed86 hash 330cd6be params:( None URL;VaRestJsonObject Result;Object WorldContextObject;LatentActionInfo LatentInfo; );
	AddTag 0x3ed82 hash a6c8302a params:( None Tag; );
};


instance 1ab5c9fe080
class VaRestSettings public : Object
{
	// Fields
	bool bExtendedLog; // 0x28

};


instance 1ab70e9e080
struct VaRestCallResponse 
{
	// Fields
	VaRestRequestJSON* Request; // 0x0
	Object* WorldContextObject; // 0x8
	DelegateProperty Callback; // 0x10 property 0x1ab7142b300 hash 0xe1aec4e5

};


