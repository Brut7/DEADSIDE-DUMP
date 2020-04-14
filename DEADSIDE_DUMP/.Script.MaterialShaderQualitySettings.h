instance 1ab5e0d9f40
class MaterialShaderQualitySettings public : Object
{
	// Fields
	MapProperty ForwardSettingMap; // 0x28 property 0x1ab71165740 hash 0xadd0fb88

};


instance 1ab5e0d9d00
class ShaderPlatformQualitySettings public : Object
{
	// Fields
	MaterialQualityOverrides QualityOverrides; // 0x28

};


instance 1ab71459ac0
struct MaterialQualityOverrides 
{
	// Fields
	bool bDiscardQualityDuringCook; // 0x0
	bool bEnableOverride; // 0x1
	bool bForceFullyRough; // 0x2
	bool bForceNonMetal; // 0x3
	bool bForceDisableLMDirectionality; // 0x4
	bool bForceLQReflections; // 0x5
	bool bDisableMaterialNormalCalculation; // 0x6
	EMobileCSMQuality MobileCSMQuality; // 0x7

};


