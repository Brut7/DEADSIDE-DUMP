instance 1ab5e09b380
class SFPSACBaseCollision public : BoxComponent
{
	// Fields
	BYTE Collisions; // 0x400

};


instance 1ab5e09acc0
class SFPSACBaseInventory public : ActorComponent
{
	// Fields
	SFPSBaseItem* FJacket; // 0xb0
	SFPSBaseItem* FTrous; // 0xb8
	SFPSBaseItem* FVest; // 0xc0
	SFPSBaseItem* FBackPack; // 0xc8
	SFPSWeapon* FWeapon0; // 0xd0
	SFPSWeapon* FWeapon1; // 0xd8
	SFPSWeapon* FWeapon2; // 0xe0
	SFPSBaseItem* FHelmet; // 0xe8
	SFPSBaseItem* FMask; // 0xf0
	SFPSBaseItem* FGlasses; // 0xf8
	SFPSBaseItem* FGloves; // 0x100
	SFPSBaseItem* FGadget0; // 0x108
	SFPSBaseItem* FGadget1; // 0x110
	SFPSBaseItem* FGadget2; // 0x118
	SFPSBaseItem* FGadget3; // 0x120
	TArray QuickSlots; // 0x128
	int ActiveQuickSlot; // 0x138
	int LastActiveWeaponQuickSlot; // 0x13c
	bool bHoodOnHead; // 0x140

	// Functions
	Server_TakeAllItemsFromCorpse 0x6234 hash 9073f5bb params:( SFPSBaseCharacter aCorpse; );
	Server_TakeAllItems 0x6229 hash 75cdc9db params:(  );
	Server_StackAllInInventory 0x621b hash f4b08eaf params:(  );
	Server_SplitInInventory 0x620e hash e3f0ab6c params:( SFPSBaseItem aItem;UnderlyingType aSlot;None aCount; );
	Server_SplitInGround 0x6203 hash d0e76b6d params:( SFPSBaseItem aItem;None aCount; );
	Server_SetActiveQuickSlot 0x61f5 hash 3507c9c2 params:( None aIndex;None aSkipStartAnim; );
	Server_QuickSlot_TakeOrHideItem 0x61e4 hash c1932c88 params:( SFPSBaseItem aItem;None aSkipAnim; );
	Server_MoveFromWeaponMFInventory_ToInventory_Slot 0x61ca hash 2c6def42 params:( SFPSBaseItem aItem;UnderlyingType aFromSlotType;SFPSBaseItem aToEquipItem;None aSlotIndex; );
	Server_MoveFromWeaponMFInventory_ToInventory 0x61b3 hash cf131d21 params:( SFPSBaseItem aItem;UnderlyingType aFromSlotType; );
	Server_MoveFromInventory_ToInventory 0x61a0 hash 34d984c4 params:( SFPSBaseItem aItem;UnderlyingType aFromSlotType;SFPSBaseItem aToEquipItem;None aSlotIndex; );
	Server_MoveFromEquip_ToInventory_Slot 0x618c hash 3d4efc9b params:( SFPSBaseItem aItem;UnderlyingType aFromSlotType;SFPSBaseItem aToEquipItem;None aSlotIndex; );
	Server_MoveFromEquip_ToInventory 0x617b hash f2372eda params:( SFPSBaseItem aItem;UnderlyingType aFromSlotType; );
	Server_LoadAmmoFromInventory_Slot 0x6169 hash ca2829e8 params:( SFPSBaseItem aItem;UnderlyingType aFromSlot;UnderlyingType aToSlot; );
	Server_LoadAmmoFromGround_Slot 0x6159 hash dbb68c69 params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_InventoryWeapon_Unload 0x6149 hash 7f534555 params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_HoodOnHead 0x613f hash 6bf6c0b4 params:(  );
	Server_HandheldItem_Use 0x4243e hash 824dd28e params:( SFPSHandheldItem aItem; );
	Server_GroundWeapon_Unload 0x6131 hash 9f85dc16 params:( SFPSBaseItem aItem; );
	Server_EquipWeapon_Unload 0x6123 hash 2c8f6fab params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_EquipFromInventory_Slot 0x6113 hash 289d76e2 params:( SFPSBaseItem aItem;UnderlyingType aFromSlot;UnderlyingType aToSlot; );
	Server_EquipFromInventory 0x6105 hash 67e760c1 params:( SFPSBaseItem aItem;UnderlyingType aFromSlot; );
	Server_EquipFromGround_Slot 0x60f6 hash 72e46ba3 params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_EquipFromGround 0x60ea hash 7c6118e2 params:( SFPSBaseItem aItem; );
	Server_EquipFromEquip 0x60de hash f41c5b57 params:( SFPSBaseItem aItem;UnderlyingType aFromSlot;UnderlyingType aToSlot; );
	Server_EquipFromCorpseContainer_Slot 0x60cb hash 181a01c3 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aContainer;SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_EquipFromCorpseContainer 0x60ba hash f8185b02 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aContainer;SFPSBaseItem aItem; );
	Server_EquipFromCorpse_Slot 0x60ab hash 94b66640 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_EquipFromCorpse 0x609f hash 72d7bd5f params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aItem; );
	Server_EquipFromContainer_Slot 0x608f hash 42219997 params:( SFPSBaseItem aContainer;SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_EquipFromContainer 0x6081 hash 5378be56 params:( SFPSBaseItem aContainer;SFPSBaseItem aItem; );
	Server_DropFromWeaponMFInventory 0x6070 hash a7b2e00f params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_DropFromInventory 0x6063 hash e22e1d32 params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_DropFromEquip 0x6058 hash c33c8748 params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_DropFromCorpseContainer 0x6048 hash 4df0e833 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aContainer;SFPSBaseItem aItem; );
	Server_DropFromCorpse 0x603c hash 25fd6770 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aItem; );
	Server_DropFromContainer 0x602f hash cdbf7ac7 params:( SFPSBaseItem aContainer;SFPSBaseItem aItem; );
	Server_DelFromQuickSlot 0x6022 hash e09d8f03 params:( SFPSBaseItem aItem;None aQuickSlotIndex; );
	Server_AddToWeaponMFInventoryFromCorpseContainerMFInventory_Slot 0x6001 hash 250f2df7 params:( SFPSBaseCharacter aCorpse;SFPSWeapon aWeaponContainer;SFPSBaseItem aItem;UnderlyingType aSlotType; );
	Server_AddToWeaponMFInventoryFromCorpseContainerMFInventory 0x5fe2 hash 102016b6 params:( SFPSBaseCharacter aCorpse;SFPSWeapon aWeaponContainer;SFPSBaseItem aItem; );
	Server_AddToWeaponMFInventoryFromCorpseContainer_Slot 0x5fc6 hash 30937fb6 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aContainer;SFPSBaseItem aItem;UnderlyingType aSlotType; );
	Server_AddToWeaponMFInventoryFromCorpseContainer 0x5fad hash 752b9515 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aContainer;SFPSBaseItem aItem; );
	Server_AddToWeaponMFInventoryFromCorpse_Slot 0x5f96 hash fe118ed3 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aItem;UnderlyingType aSlotType; );
	Server_AddToWeaponMFInventoryFromCorpse 0x5f81 hash 69cf7e12 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aItem; );
	Server_AddToWeaponMFInventoryFromContainer_Slot 0x5f68 hash 7dc5d4a params:( SFPSBaseItem aContainer;SFPSBaseItem aItem;UnderlyingType aSlotType; );
	Server_AddToWeaponMFInventoryFromContainer 0x5f52 hash 64baa629 params:( SFPSBaseItem aContainer;SFPSBaseItem aItem; );
	Server_AddToWeaponMFFromWeaponMF_Slot 0x5f3e hash 229d40d6 params:( SFPSBaseItem aItem;UnderlyingType aFromSlot;UnderlyingType aToSlot; );
	Server_AddToWeaponMFFromInventory_Slot 0x5f2a hash dc26b967 params:( SFPSBaseItem aItem;UnderlyingType aFromSlot;UnderlyingType aToSlot; );
	Server_AddToWeaponMFFromInventory 0x5f18 hash 9f06bc26 params:( SFPSBaseItem aItem;UnderlyingType aFromSlot; );
	Server_AddToWeaponMFFromGround_Slot 0x5f05 hash ef483448 params:( SFPSBaseItem aItem;UnderlyingType aToSlot; );
	Server_AddToWeaponMFFromGround 0x5ef5 hash 4c06a667 params:( SFPSBaseItem aItem; );
	Server_AddToQuickSlot_Slot 0x5ee7 hash 58a9d0c7 params:( SFPSBaseItem aItem;UnderlyingType aFromSlot;None aQuickSlotIndex;None bClientNotifyIfFail; );
	Server_AddToQuickSlot 0x5edb hash ae05b786 params:( SFPSBaseItem aItem;None bClientNotifyIfFail; );
	Server_AddToInventoryFromGround_Slot 0x5ec8 hash 14f40bf9 params:( SFPSBaseItem aItem;SFPSBaseItem aEquipItem;None aSlotIndex; );
	Server_AddToInventoryFromGround 0x5eb7 hash d89fab78 params:( SFPSBaseItem aItem; );
	Server_AddToInventoryFromCorpseContainerWeaponMF_Slot 0x5e9b hash ca8a5336 params:( SFPSBaseCharacter aCorpse;SFPSWeapon aWeaponContainer;SFPSBaseItem aItem;SFPSBaseItem aEquipItem;None aSlotIndex; );
	Server_AddToInventoryFromCorpseContainerWeaponMF 0x5e82 hash 89303895 params:( SFPSBaseCharacter aCorpse;SFPSWeapon aWeaponContainer;SFPSBaseItem aItem; );
	Server_AddToInventoryFromCorpseContainer_Slot 0x5e6a hash 714a62d9 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aContainer;SFPSBaseItem aItem;SFPSBaseItem aEquipItem;None aSlotIndex; );
	Server_AddToInventoryFromCorpseContainer 0x5e55 hash 5f0c3658 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aContainer;SFPSBaseItem aItem; );
	Server_AddToInventoryFromCorpse_Slot 0x5e42 hash 36c60696 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aItem;SFPSBaseItem aEquipItem;None aSlotIndex; );
	Server_AddToInventoryFromCorpse 0x5e31 hash cf164ff5 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aItem; );
	Server_AddToInventoryFromContainer_Slot 0x5e1c hash 35bc622d params:( SFPSBaseItem aContainer;SFPSBaseItem aItem;SFPSBaseItem aEquipItem;None aSlotIndex; );
	Server_AddToInventoryFromContainer 0x5e0a hash 7f58512c params:( SFPSBaseItem aContainer;SFPSBaseItem aItem; );
	OnRep_QuickSlotsChanged 0x42431 hash 811925a4 params:(  );
	OnRep_InventoryChanged 0x42425 hash 7de4c4e0 params:(  );
	Client_InventoryMulticastMsg 0x5dfb hash a520402e params:( UnderlyingType aInventoryMsg; );
	Client_InventoryGroundItemBlink 0x5dea hash 31ef6b5f params:(  );
	ClearAll 0x42420 hash bd3398c5 params:(  );
};


instance 1ab5e09aa80
class SFPSACCamera public : CameraComponent
{
	// Fields

};


instance 1ab5e09a600
class SFPSACCharSkeletalMeshComponent public : SkeletalMeshComponent
{
	// Fields

};


instance 1ab5e09a3c0
class SFPSACCraftKit public : ActorComponent
{
	// Fields
	SFPSBaseLocationCraftItem* LocationCraftItem; // 0xb0
	int CreateObjectTime; // 0xb8
	int RemoveObjectTime; // 0xbc

};


instance 1ab5e09a180
class SFPSACDoor public : ActorComponent
{
	// Fields
	float OpenCloseTime; // 0x118
	Vector DirectionVector; // 0x11c
	SFPSACDoorParams DoorParams; // 0x128
	SoundCue* DoorCreakCue; // 0x130
	SoundCue* DoorLockCue; // 0x138
	SoundCue* DoorSlamCue; // 0x140
	SoundCue* HandleCue; // 0x148

	// Functions
	OnRep_DoorStateChanged 0x4251e hash 5ec9d4c7 params:(  );
	OnCharacterEndOverlap 0x42512 hash edde171f params:( PrimitiveComponent OverlappedComponent;Actor OtherActor;PrimitiveComponent OtherComp;None OtherBodyIndex; );
	OnCharacterBeginOverlap 0x42505 hash 84b676ad params:( PrimitiveComponent OverlappedComponent;Actor OtherActor;PrimitiveComponent OtherComp;None OtherBodyIndex;None bFromSweep;HitResult SweepResult; );
};


instance 1ab5e099d00
class SFPSACGameplayEvent public : SceneComponent
{
	// Fields
	float Radius; // 0x23c

};


instance 1ab5e099f40
class SFPSACEncounter public : SFPSACGameplayEvent
{
	// Fields
	TArray Variants; // 0x248
	float ForceActivateRadius; // 0x25c
	int RespawnTimeMin; // 0x260
	int RespawnTimeMax; // 0x264
	int WaitTime; // 0x268
	int Chance; // 0x26c
	bool bExclusive; // 0x270

};


instance 1ab5e099ac0
class SFPSACFISM public : FoliageInstancedStaticMeshComponent
{
	// Fields
	KSphylElem SightCapsule; // 0x728
	float FarCover; // 0x778
	float CloseCover; // 0x77c
	float FarCoverDist; // 0x780

};


instance 1ab5e09f940
class SFPSACInventory public : SFPSACBaseInventory
{
	// Fields
	TArray CraftItems; // 0x160
	TArray Cell0; // 0x170
	TArray Cell1; // 0x180
	TArray Cell2; // 0x190

	// Functions
	Server_WeaponMFInventoryItem_Sell 0x67a3 hash 581f41c4 params:( SFPSBaseItem aItem;UnderlyingType aSlot;SFPSBaseCharacter aTrader; );
	Server_SplitInLootBox 0x6797 hash 67b74945 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;None aCount; );
	Server_SplitInCell 0x678d hash b62200de params:( SFPSBaseItem aItem;None aCount; );
	Server_MoveInLootBox 0x6782 hash a1a95190 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;None aSlotIndex; );
	Server_MoveInCell 0x6778 hash 34f0f509 params:( SFPSBaseItem aItem;None aSlotIndex; );
	Server_LoadAmmoFromLootBox_Slot 0x6767 hash 3142bca1 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;UnderlyingType aSlotType; );
	Server_LoadAmmoFromLootBox 0x6759 hash 20ab5320 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem; );
	Server_LoadAmmoFromCraft_Slot 0x6749 hash 9d9b38aa params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_LoadAmmoFromCell_Slot 0x673a hash ae3f9dba params:( SFPSBaseItem aItem;UnderlyingType aSlotType; );
	Server_LoadAmmoFromCell 0x672d hash 1287e099 params:( SFPSBaseItem aItem; );
	Server_InventoryItem_Sell 0x671f hash 5f8c4f47 params:( SFPSBaseItem aItem;UnderlyingType aSlot;SFPSBaseCharacter aTrader; );
	Server_EquipItem_Sell 0x6713 hash 2a14be9d params:( SFPSBaseItem aItem;UnderlyingType aSlot;SFPSBaseCharacter aTrader; );
	Server_EquipFromLootBox_Slot 0x6704 hash ae2c831b params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_EquipFromLootBox 0x66f7 hash 8266a55a params:( SFPSLootBox aLootBox;SFPSBaseItem aItem; );
	Server_EquipFromCraft_Slot 0x66e9 hash 168d18a4 params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_EquipFromCraft 0x66dd hash f3f86143 params:( SFPSBaseItem aItem; );
	Server_EquipFromCell_Slot 0x66cf hash 6c186674 params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_EquipFromCell 0x66c4 hash 54f7cd13 params:( SFPSBaseItem aItem; );
	Server_DropFromLootBox 0x66b8 hash 9a41918b params:( SFPSLootBox aLootBox;SFPSBaseItem aItem; );
	Server_DropFromCraft_All 0x66ab hash 8a79420c params:(  );
	Server_DropFromCraft 0x66a0 hash c3188d34 params:( SFPSBaseItem aItem; );
	Server_DropFromCell 0x6695 hash c7d9bee4 params:( SFPSBaseItem aItem; );
	Server_CraftCancel 0x668b hash 937acdf1 params:(  );
	Server_CraftBegin 0x6681 hash b6d4acf0 params:( Guid aCraftLibraryItemUID; );
	Server_CellItem_Sell 0x6676 hash 8d39bed9 params:( SFPSBaseItem aItem;SFPSBaseCharacter aTrader; );
	Server_Buy 0x6670 hash 1eb980cb params:( SFPSBaseCharacter aTrader;Class ItemClass; );
	Server_BreakUpFromInventory 0x6661 hash d09027a7 params:( SFPSBaseItem aItem;UnderlyingType aSlot; );
	Server_BreakUpFromGround 0x6654 hash 5186d988 params:( SFPSBaseItem aItem; );
	Server_BreakUpFromCorpse 0x6647 hash 47fd7e05 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aItem; );
	Server_AddToWeaponMFInventoryFromLootBox_Slot 0x662f hash 42ecbe0e params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;UnderlyingType aSlotType; );
	Server_AddToWeaponMFInventoryFromLootBox 0x661a hash 58567c6d params:( SFPSLootBox aLootBox;SFPSBaseItem aItem; );
	Server_AddToWeaponMFInventoryFromCell_Slot 0x6604 hash 7d5a4e47 params:( SFPSBaseItem aItem;UnderlyingType aSlotType; );
	Server_AddToWeaponMFInventoryFromCell 0x65f0 hash bd91c506 params:( SFPSBaseItem aItem; );
	Server_AddToWeaponMFFromCraft_Slot 0x65de hash 3197e0a9 params:( SFPSBaseItem aItem;UnderlyingType aToSlot; );
	Server_AddToWeaponMFFromCraft 0x65ce hash acafd228 params:( SFPSBaseItem aItem; );
	Server_AddToLootBoxFromMFInventory 0x65bc hash 66e4a7e3 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;UnderlyingType aSlot;None aSlotIndex; );
	Server_AddToLootBoxFromInventory 0x65ab hash d7c443d0 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;UnderlyingType aSlot;None aSlotIndex; );
	Server_AddToLootBoxFromGround 0x659b hash a7773e51 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;None aSlotIndex; );
	Server_AddToLootBoxFromEquip 0x658c hash 3b3c0ee6 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;UnderlyingType aSlot;None aSlotIndex; );
	Server_AddToLootBoxFromCraft 0x657d hash 3b1814d2 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;None aSlotIndex; );
	Server_AddToLootBoxFromContainer 0x656c hash c355a165 params:( SFPSLootBox aLootBox;SFPSBaseItem aContainer;SFPSBaseItem aItem;None aSlotIndex; );
	Server_AddToLootBoxFromCell 0x655d hash 3817cac2 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem; );
	Server_AddToInventoryFromLootBox_Slot 0x6549 hash 92302e31 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem;SFPSBaseItem aEquipItem;None aSlotIndex; );
	Server_AddToInventoryFromLootBox 0x6538 hash 66778ab0 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem; );
	Server_AddToInventoryFromCraft_Slot 0x6525 hash be5f063a params:( SFPSBaseItem aItem;SFPSBaseItem aEquipItem;None aSlotIndex; );
	Server_AddToInventoryFromCraft 0x6515 hash f6c3f919 params:( SFPSBaseItem aItem; );
	Server_AddToInventoryFromCell_Slot 0x6503 hash 97f7f94a params:( SFPSBaseItem aItem;SFPSBaseItem aEquipItem;None aSlotIndex; );
	Server_AddToInventoryFromCell 0x64f3 hash b224c229 params:( SFPSBaseItem aItem; );
	Server_AddToCellFromMFInventory 0x64e2 hash 79a2eefc params:( SFPSBaseItem aItem;UnderlyingType aSlot;None aSlotIndex; );
	Server_AddToCellFromLootBox 0x64d3 hash 4eae1b42 params:( SFPSLootBox aLootBox;SFPSBaseItem aItem; );
	Server_AddToCellFromInventory 0x64c3 hash 63e3f0a9 params:( SFPSBaseItem aItem;UnderlyingType aSlot;None aSlotIndex; );
	Server_AddToCellFromGround 0x64b5 hash b11d71ca params:( SFPSBaseItem aItem;None aSlotIndex; );
	Server_AddToCellFromEquip 0x64a7 hash 14bd373f params:( SFPSBaseItem aItem;UnderlyingType aSlot;None aSlotIndex; );
	Server_AddToCellFromCraft 0x6499 hash 14993d2b params:( SFPSBaseItem aItem;None aSlotIndex; );
	Server_AddToCellFromCorpseContainer 0x6486 hash 8bcb38ea params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aContainer;SFPSBaseItem aItem;None aSlotIndex; );
	Server_AddToCellFromCorpse 0x6478 hash a7941647 params:( SFPSBaseCharacter aCorpse;SFPSBaseItem aItem;None aSlotIndex; );
	Server_AddToCellFromContainer 0x6468 hash 4f754e3e params:( SFPSBaseItem aContainer;SFPSBaseItem aItem;None aSlotIndex; );
	Server_AddToCarFromGround 0x645a hash 28bd1900 params:( SFPSWheeledVehicle aCar;SFPSBaseCharacter aTrader;SFPSBaseItem aItem;None aSlotIndex; );
	Craft 0x42628 hash cfb9755 params:(  );
	Client_InventoryMsg_Item 0x644d hash 87390166 params:( None aActorLibraryIndex;None aCount; );
	Client_InventoryMsg 0x6442 hash f695abf8 params:( UnderlyingType aInventoryMsg; );
	Client_CraftCompleted 0x6436 hash 86c719b0 params:(  );
	Client_CraftCancel 0x642c hash 247154d9 params:(  );
	Client_CraftBegin 0x6422 hash 5e21f6d8 params:( None aCraftTime; );
};


instance 1ab5e09f700
class SFPSACItemInventory public : ActorComponent
{
	// Fields
	int FInventorySize; // 0xb0
	int BackPack_WeaponTransferCount; // 0xb4
	TArray FInventory; // 0xb8

	// Functions
	OnRep_InventoryChanged 0x42425 hash 7de4c4e0 params:(  );
};


instance 1ab5e09f4c0
class SFPSACLocality public : SceneComponent
{
	// Fields
	float Radius; // 0x204
	bool bDrawLabel; // 0x208
	SFPSMapLabel MapLabel; // 0x210
	bool bDrawSprite; // 0x230
	bool bSafeArea; // 0x231
	bool bCanBeSelectedForRespawn; // 0x232
	int RespawnPoints; // 0x234

};


instance 1ab5e09f280
class SFPSACMission public : SFPSACGameplayEvent
{
	// Fields
	TArray RewardPoints; // 0x248
	TArray RewardLootBoxes; // 0x258
	SFPSLootBox* RewardLootBoxClass; // 0x270
	TArray Variants; // 0x278
	int WaitTime; // 0x28c
	int CompletedTime; // 0x290

};


instance 1ab5e09f040
class SFPSACRoute public : SceneComponent
{
	// Fields
	TArray Waypoints; // 0x1f0

};


instance 1ab5e09ee00
class SFPSACSkeletalMeshComponent public : SkeletalMeshComponent
{
	// Fields

};


instance 1ab5e09ebc0
class SFPSACSnapComponent public : SphereComponent
{
	// Fields
	SFPSACSnaps Snaps; // 0x3f8

};


instance 1ab5e09e740
class SFPSACSoundSystem public : ActorComponent
{
	// Fields
	AudioComponent* BreathAudioComponent; // 0xb8
	AudioComponent* HeartAudioComponent; // 0xc0
	WeakObjectProperty CraftAudioComp; // 0xc8 property 0x1ab718e6c00 hash 0x24388009
	AudioComponent* MobTalkAudioComp; // 0xd0
	TimerHandle TimerTalkDelHandle; // 0xe8
	bool bInWater; // 0xf0
	bool bUnderwaterIsActive; // 0xf1
	bool bDebug; // 0xf2
	bool bDebugTrace; // 0xf3
	SoundCue* CharDieCue; // 0xf8
	SoundCue* CharBreathCue; // 0x100
	SoundCue* CharHeartCue; // 0x108
	SoundCue* CharacterRollCue; // 0x110
	SoundCue* CharPainShout; // 0x118
	SoundCue* NoiceCue; // 0x120
	SoundCue* CharBackMovCue; // 0x128
	SoundCue* WeaponPressedCue; // 0x130
	bool bUseCertainVoice; // 0x138
	SFPSVoiceSoundTable* VoiceSoundTable; // 0x140
	SFPSVoiceList* VoiceList; // 0x148
	int VoiceNumber; // 0x150
	float FallHeight; // 0x198
	SFPSPhysicalMaterial* CharacterPM; // 0x1a0
	SoundCue* UnderwaterStep; // 0x1b8

	// Functions
	SetStairPM 0x4270a hash 92d6e011 params:( SFPSPhysicalMaterial aPhysicalMayerial; );
	SetRandomVoice 0x42702 hash bcf604e8 params:(  );
	Say 0x426ff hash b8820f2 params:( None TalkState;None bIsTrader; );
	PlayStepSound 0x426f7 hash 8ebea0a0 params:( SoundCue StepCue;Vector CreatePosition;None fWet;None bRotate;UnderlyingType CharPose;None fSpeed;UnderlyingType Soundtype; );
	PlayOtherCharSound 0x426ed hash c595b704 params:( UnderlyingType TypeCharSound;None BoolParam;None FloatParam; );
	InitACSoundSystem 0x426e3 hash f9636a6b params:(  );
	CreateStepStairSound 0x426d8 hash 70c19621 params:( None bIsRight; );
	CreateSlideSound 0x426cf hash 43190f53 params:( HitResult HitResult; );
	CreateItemsSound 0x426c6 hash e2fff424 params:( UnderlyingType itype;SoundCue UseSound; );
	CreateBackItemSound 0x426bb hash 5dc92942 params:(  );
	AsyncTraceSound 0x426b2 hash 39c89a5b params:( None isFall; );
	ActivateUnderwaterSound 0x426a5 hash cda5fc20 params:( None bActivate; );
};


instance 1ab5e09e500
class SFPSACSpawner public : SceneComponent
{
	// Fields
	SFPSACRoute* RouteComponent; // 0x1f0
	TArray CharacterGroups; // 0x1f8
	SFPSRoute* RouteActor; // 0x208
	int RouteStartWaypoint; // 0x210
	int RouteDirection; // 0x214
	bool bRouteChaotic; // 0x218
	SFPSAIConfig* AIConfig; // 0x220
	SFPSAISenseConfig_Sight* SenseConfig_Sight; // 0x228
	SFPSAISenseConfig_Hearing* SenseConfig_Hearing; // 0x230
	SFPSAIHearingVolume* HearingVolume; // 0x238
	Vector LookAroundOrigin; // 0x240
	MulticastInlineDelegateProperty OnSpawned; // 0x250 property 0x1ab718e6a80 hash 0xb7a5ed1a

};


instance 1ab5e09e2c0
class SFPSACStair public : ActorComponent
{
	// Fields
	TArray Steps; // 0xc8
	bool bBusy; // 0xd8

	// Functions
	GetSFPSPhysicalMaterial 0x4271f hash b2761fcd params:( SFPSPhysicalMaterial ReturnValue; );
};


instance 1ab5e09e080
class SFPSActorLibrary public : Object
{
	// Fields
	TArray GroupsSortedByName; // 0x28
	TArray Groups; // 0x38

};


instance 1ab5e0a49c0
class SFPSACTrader public : ActorComponent
{
	// Fields
	SFPSTradeList* TradeList; // 0xb0
	SFPSTradeList* TradeListRef; // 0xb8

};


instance 1ab5e0a4780
class SFPSACVehicleSoundSystem public : ActorComponent
{
	// Fields
	SoundCue* EngineCue; // 0xb0
	SoundCue* SuspensCue; // 0xb8
	SoundCue* WheelBumpCue; // 0xc0
	SoundCue* ExtraStopCue; // 0xc8
	SoundCue* CrashCue; // 0xd0
	SoundCue* DoorCue; // 0xd8
	ReverbEffect* ReverbEffInCar; // 0xe0
	WheeledVehicleMovementComponent* OwnerVehicleComp; // 0xe8
	float fEngineActive; // 0xf0
	AudioComponent* EngineAudioComponent; // 0xf8
	AudioComponent* RoadTiresAudioComponent; // 0x100
	AudioComponent* SuspensAudioComponent; // 0x108
	AudioComponent* StopAudioComponent; // 0x110
	AudioComponent* CrashAudioComponent; // 0x118
	SoundCue* tPhysMatSound; // 0x120
	TArray LastSusp; // 0x128
	TArray WheelsAudioComponents; // 0x138
	float fLastRPM; // 0x1e8
	bool bIsPressed; // 0x1ec
	bool bIsImmobil; // 0x1ed
	bool bEngineAct; // 0x1ee
	float fRPMScale; // 0x1f0
	float fHeightPlay; // 0x1f4
	float fHeightAddPlay; // 0x1f8

	// Functions
	StopExtraStopSound 0x4278f hash 5952473e params:(  );
	SpawnCrashSound 0x42786 hash 979e75e8 params:( None fParam; );
	PlayExtraStopSound 0x4277c hash adb9a4e params:(  );
	PlayEngineSound 0x42773 hash 4d6e7c5a params:( None Delta; );
	OnToggleReverb 0x4276b hash a299d58a params:( None bParam; );
	OnStartStopEngine 0x42761 hash fcc04eec params:(  );
	GetAllWheelsSoundComp 0x42755 hash c5451a7e params:(  );
	CreateAndPlayDoorSound 0x42749 hash e90b2f5f params:( None bDoorLock; );
	AsyncTraceSound 0x426b2 hash 39c89a5b params:( None Distance; );
};


instance 1ab5e0a4540
class SFPSACWeaponMFInventory public : ActorComponent
{
	// Fields
	TArray AvailableMFTypes; // 0xb0
	TArray AvailableMFItems; // 0xc0
	TArray FInventory; // 0xd0

	// Functions
	OnRep_InventoryChanged 0x42425 hash 7de4c4e0 params:(  );
};


instance 1ab5e0a4300
class SFPSACWindow public : ActorComponent
{
	// Fields

	// Functions
	InitWindow 0x427ad hash 5288d51 params:( BoxComponent aOverlap;ArrowComponent aPoint0;ArrowComponent aPoint1; );
};


instance 1ab5e0a40c0
class SFPSAdminHandler public : Object
{
	// Fields
	TArray CurrentPlayerList; // 0x180
	TArray CurrentFilteredPlayerList; // 0x190
	TArray CurrentBannedList; // 0x1a8
	TArray CurrentFilteredBannedList; // 0x1b8
	TArray CurrentAdminList; // 0x1d0
	UserWidget* FormAdmin; // 0x1f0
	SFPSUserWidget_AdminPanel_Player* frmPlayer; // 0x1f8
	bool bVisible; // 0x200

	// Functions
	PageServer_SetPlayersMaxCount 0x4290f hash 5908be13 params:(  );
	PageServer_SetPassword 0x42903 hash 2d1bac77 params:(  );
	PageServer_SetCameraTypeTPS 0x428f4 hash 840e4be6 params:( None bIsChanged; );
	PageServer_SetCameraTypeFPSTPS 0x428e4 hash ba45c14f params:( None bIsChanged; );
	PageServer_SetCameraTypeFPS 0x428d5 hash 840e1058 params:( None bIsChanged; );
	PageServer_OnEdPlayersMaxCountChanged 0x428c1 hash fc818bd7 params:( None Text; );
	PageServer_OnEdPasswordChanged 0x428b1 hash 93cf8afb params:( None Text; );
	PagePlayers_OnUnban 0x428a6 hash 2f83632 params:(  );
	PagePlayers_OnSteamProfileBanned 0x42895 hash 2f0c84f1 params:(  );
	PagePlayers_OnSteamProfileAdmins 0x42884 hash 2ced0565 params:(  );
	PagePlayers_OnSteamProfile 0x42876 hash 20fdcc9 params:(  );
	PagePlayers_OnSelectedPlayer 0x42867 hash 42dffa54 params:( None aIndex; );
	PagePlayers_OnSelectedBanned 0x42858 hash 2177a60f params:( None aIndex; );
	PagePlayers_OnSelectedAdmins 0x42849 hash 1f582683 params:( None aIndex; );
	PagePlayers_OnFilterChangedPlayers 0x42837 hash a787a1ee params:( None aText; );
	PagePlayers_OnFilterChangedBanned 0x42825 hash c4a389d6 params:( None aText; );
	PagePlayers_OnDelFromAdmins 0x42816 hash edb789e3 params:(  );
	PagePlayers_OnClearFilterPlayers 0x42805 hash 7e66670b params:(  );
	PagePlayers_OnClearFilterBanned 0x427f4 hash 2fff9f53 params:(  );
	PagePlayers_OnBan 0x427ea hash 9546aa0f params:(  );
	PagePlayers_OnAddToAdmins 0x427dc hash 708a8486 params:(  );
	OnSelectServer 0x427d4 hash 9defa879 params:( None bIsChanged; );
	OnSelectPlayers 0x427cb hash 841822c2 params:( None bIsChanged; );
	OnSelectItems 0x427c3 hash fc5a4f64 params:( None bIsChanged; );
	OnRentServer 0x427bc hash 30bae732 params:(  );
	Init 0x36c hash 7c86f919 params:( UserWidget aFormAdmin; );
};


instance 1ab5e0a3e80
class SFPSAI_DBase public : BTDecorator
{
	// Fields

};


instance 1ab5e0a3580
class SFPSAI_DAttackPreChaseAfterTargetLost public : BTDecorator
{
	// Fields

};


instance 1ab5e0a3340
class SFPSAI_DCoverPanic public : BTDecorator
{
	// Fields

};


instance 1ab5e0a3100
class SFPSAI_DCoverSimple public : BTDecorator
{
	// Fields

};


instance 1ab5e0a2ec0
class SFPSAI_DRandom public : BTDecorator
{
	// Fields
	int Chance; // 0x68

};


instance 1ab5e0a2c80
class SFPSAI_DFromPeaceState public : BTDecorator
{
	// Fields

};


instance 1ab5e0a2a40
class SFPSAI_DChaseNeedUpdate public : BTDecorator
{
	// Fields

};


instance 1ab5e0a2800
class SFPSAI_SAttack public : BTService
{
	// Fields

};


instance 1ab5e0a2380
class SFPSAI_SSetRandomFocusPoint public : BTService
{
	// Fields
	float MaxAngle; // 0x70

};


instance 1ab5e0a2140
class SFPSAI_SChaseUpdate public : BTService
{
	// Fields

};


instance 1ab5e0a1f00
class SFPSAI_TRandomLookAt public : BTTaskNode
{
	// Fields
	bool bUseCharacterParams; // 0x70
	ESFPSAI_TRandomLookAtSource Source; // 0x71
	SFPSAIParamsLookAround Params; // 0x74
	bool bIgnoreLookAroundOrigin; // 0x8c

};


instance 1ab5e0a1a80
class SFPSAI_TChangeAiming public : BTTaskNode
{
	// Fields
	bool Aiming; // 0x70

};


instance 1ab5e0a1840
class SFPSAI_TClearTargetAndFocus public : BTTaskNode
{
	// Fields
	bool bClearTarget; // 0x70
	bool bClearFocus; // 0x71

};


instance 1ab5e0a1600
class SFPSAI_TLookAtTarget public : BTTaskNode
{
	// Fields
	BlackboardKeySelector Target; // 0x70

};


instance 1ab5e0a13c0
class SFPSAI_TStopFire public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a1180
class SFPSAI_TStartFire public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a0f40
class SFPSAI_TSwitchState public : BTTaskNode
{
	// Fields
	ESFPSAIState StateValue; // 0x70
	ESFPSAIStateTag Tag; // 0x71

};


instance 1ab5e0a0d00
class SFPSAI_TSwitchMoveMode public : BTTaskNode
{
	// Fields
	ESFPSAIMoveMode MoveMode; // 0x70

};


instance 1ab5e0a0ac0
class SFPSAI_TChangePose public : BTTaskNode
{
	// Fields
	ESFPSCharacterPose Pose; // 0x70

};


instance 1ab5e0a0880
class SFPSAI_TMoveToNextRoutePoint public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a0640
class SFPSAI_TSwitchToInitial public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a0400
class SFPSAI_TGenerateRandomPoint public : BTTaskNode
{
	// Fields
	bool bUseCharacterValue; // 0x70
	float WanderRadius; // 0x74
	bool bCenteredInFront; // 0x78

};


instance 1ab5e0a01c0
class SFPSAI_TSetStateTime public : BTTaskNode
{
	// Fields
	float MinTime; // 0x70
	float MaxTime; // 0x74

};


instance 1ab5e0a9400
class SFPSAI_TDebug public : BTTaskNode
{
	// Fields
	FString Text; // 0x70

};


instance 1ab5e0a91c0
class SFPSAI_TSetStateTime_Cover public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a8f80
class SFPSAI_TReload public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a8d40
class SFPSAI_TSetFocusToLastTargetLocation public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a8b00
class SFPSAI_TCoverStandOrCrouch public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a88c0
class SFPSAI_TResetTargetWasHeard public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a8680
class SFPSAI_TAttackStandOrCrouch public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a8440
class SFPSAI_TSetLastTargetLocation public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a8200
class SFPSAI_TClearLastTargetLocation public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a7fc0
class SFPSAI_TChaseSetup public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a7d80
class SFPSAI_TChaseSetupUpdate public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a7b40
class SFPSAI_TSwitchFromPeace public : BTTaskNode
{
	// Fields
	bool bForceSimpleCover; // 0x70

};


instance 1ab5e0a7900
class SFPSAI_TSwitchFromAttack public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a76c0
class SFPSAI_TGuardSetup public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a7480
class SFPSAI_TSetCurrentLocationAsHomeLocation public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a7240
class SFPSAI_TSetSightResolution public : BTTaskNode
{
	// Fields
	float Resolution; // 0x70

};


instance 1ab5e0a7000
class SFPSAI_TSwitchToAttack public : BTTaskNode
{
	// Fields

};


instance 1ab5e0a6b80
class SFPSBaseCharacter public : Character
{
	// Fields
	float Accuracy; // 0x720
	SceneComponent* WeaponBarrierCollision_Gun0; // 0x730
	SceneComponent* WeaponBarrierCollision_AR0; // 0x738
	SceneComponent* WeaponBarrierCollision_SG0; // 0x740
	SceneComponent* WeaponBarrierCollision_SG1; // 0x748
	SFPSACSkeletalMeshComponent* HeadMesh; // 0x890
	SFPSACSkeletalMeshComponent* JacketMesh; // 0x898
	SFPSACSkeletalMeshComponent* JacketMesh_Hood; // 0x8a0
	SFPSACSkeletalMeshComponent* TrousMesh; // 0x8a8
	SFPSACSkeletalMeshComponent* VestMesh; // 0x8b0
	SFPSACSkeletalMeshComponent* BackPackMesh; // 0x8b8
	SFPSACSkeletalMeshComponent* HelmetMesh; // 0x8c0
	SFPSACSkeletalMeshComponent* MaskMesh; // 0x8c8
	SFPSACSkeletalMeshComponent* GlassesMesh; // 0x8d0
	SFPSACSkeletalMeshComponent* GlovesMesh; // 0x8d8
	SFPSCharacterObstacleAnimations ObatacleAnimations; // 0x8e0
	SFPSCharacterStairAnimations StairAnimations; // 0xa30
	SFPSCharacterMovementComponent* MovementComponent; // 0xa50
	Vector MuzzleOffset; // 0xa58
	SFPSCharacterParams Params; // 0xa64
	float StopSprintAngle; // 0xa70
	SFPSCharacterCraftParams CraftParams; // 0xa74
	ESFPSCharacterDefaultMeshesType DefaultMeshType; // 0xa84
	ESFPSCharacterPantsType PantsType; // 0xa85
	ESFPSCharacterPose Pose; // 0xa86
	bool PoseChanging; // 0xa88
	SFPSCharacterCapsuleHalfHeightChangeTimes CharacterCapsuleHalfHeightChangeTimes; // 0xa8c
	bool bIsDying; // 0xaac
	SFPSCharacterDeadParams DeadParams; // 0xab0
	bool bBusy; // 0xae8
	SFPSACBaseInventory* ACInventory; // 0xaf0
	Actor* GreenArea; // 0xaf8
	ESFPSCharacterTeleportState TeleportState; // 0xb00
	USHORT ShotRandomParamsIndex; // 0xb02
	Vector JumpOverObstacleAction; // 0xb0c
	bool bCanJumpOverObstacle; // 0xb18
	ESFPSJumpOverObstacleState JumpOverObstacleState; // 0xb19
	CurveFloat* JumpDuckCurve; // 0xb20
	CurveFloat* JumpDuckCoeff; // 0xb28
	Vector JumpOverWindowAction; // 0xb30
	Actor* JumpOverWindowActor; // 0xb40
	AnimMontage* JumpOverWindowMontage; // 0xb48
	Actor* StairActor; // 0xb58
	FName StairActorName; // 0xb60
	ESFPSCharacterStairAction StairAction; // 0xb68
	float StairPositionForAnim; // 0xb6c
	Actor* Car; // 0xb80
	Actor* LastDriverCar; // 0xb88
	ESFPSPosInCar PosInCar; // 0xb90
	SFPSACSoundSystem* SoundSystem; // 0xb98
	Vector LastEyesPos; // 0xba0
	Vector LastEyesDir; // 0xbac
	SFPSCharacterSpeeds CharacterSpeeds; // 0xbc0
	ESFPSCharacterMovementType MovementType; // 0xc04
	bool IsJumping; // 0xc05
	bool IsOnStair; // 0xc06
	bool IsSprint; // 0xc07
	bool IsWalk; // 0xc08
	float Pitch; // 0xc0c
	float Speed; // 0xc10
	float SpeedScale; // 0xc14
	float SpeedZ; // 0xc18
	float Direction; // 0xc20
	bool bAiming; // 0xc48
	float TurnMomentum_Yaw; // 0xc4c
	float TurnMomentum_Pitch; // 0xc50
	float WeaponBarrier; // 0xc54
	SFPSHandheldItem* HandheldItemForUse; // 0xc60
	GenericTeamId TeamID; // 0xc68
	float TLRP_Angle; // 0xc88
	float TLRP_Speed_StartMove; // 0xc8c
	float TLRP_Speed_MaxAngle; // 0xc90
	float TLRP_Speed_Timer; // 0xc94
	float TLRP_Time; // 0xc98
	float TLRP_Delay_Max; // 0xc9c
	float TLRP_Delay_Speed; // 0xca0

	// Functions
	WeaponEnableDeviceLeft 0x42d37 hash 4d760e11 params:(  );
	WeaponChange_End 0x42d2e hash f4b5010b params:(  );
	WeaponChange_AttachWeapon 0x42d20 hash 7cf2a1d3 params:( SFPSHandheldItem aItem;None aSocketName; );
	TakeDamage 0x42d1a hash 7041c4e9 params:( None Damage;DamageEvent DamageEvent;Controller EventInstigator;Actor DamageCauser;None ReturnValue; );
	StopWalk 0x42d15 hash 1778c9a params:(  );
	StopSprint 0x42d0f hash 354b388b params:(  );
	StopJump 0x42d0a hash 170c0e7 params:(  );
	StopFire 0x42d05 hash 16e5cf1 params:(  );
	StartWalk 0x42cff hash 16b3b22 params:(  );
	StartSprint 0x42cf8 hash e4a913 params:(  );
	StartJump 0x42cf2 hash 1646f6f params:(  );
	StartFire 0x42cec hash 1620b79 params:(  );
	SetProne 0x42ce7 hash 8843c255 params:(  );
	SetCrouch 0x42ce1 hash 72691ab5 params:(  );
	ServerUseObject 0x849b hash 297ad2a0 params:( Actor aObject; );
	ServerSetWalk 0x8493 hash cc7f7377 params:( None bWalk; );
	ServerSetSprint 0x848a hash e1e84aa8 params:( None bSprint; );
	ServerSetPose 0x8482 hash cc7bd93f params:( UnderlyingType aPose; );
	ServerSetBusy 0x847a hash cc74458b params:( None aBusy; );
	Server_StopFire 0x8471 hash fc54f047 params:(  );
	Server_SteelArms_TestHit 0x8464 hash ae195faf params:( Vector aTracePoint0;Vector aTracePoint1;Vector aTracePoint2;None aFirstEvent; );
	Server_StartFire 0x845b hash 591b098f params:( None aWeaponFireAnim;Vector aLocation;Vector aDirection; );
	Server_SetStairActorName 0x844e hash 22be2a4 params:( None aName; );
	Server_SetPosInCar 0x8444 hash f9b274c6 params:( UnderlyingType aPosInCar; );
	Server_ReloadBreak 0x843a hash 13426157 params:(  );
	Server_Reload 0x8432 hash 3ae49712 params:(  );
	Server_JumpOnStair 0x8428 hash 38b40957 params:(  );
	Server_HandheldItem_StopUse 0x8419 hash 2c44f0f4 params:( SFPSHandheldItem aItem; );
	Server_HandheldItem_StartUse 0x840a hash 946f89fc params:( SFPSHandheldItem aItem; );
	Server_DeviceItem_ForceDisable 0x83fa hash 9fd1e9bc params:(  );
	Server_CheckJumpOverObstacle 0x83eb hash 2409d31e params:( None aRunJump; );
	Server_CarPassengerExit 0x83de hash c1247d73 params:(  );
	Reload 0x42cdd hash ce86d13c params:(  );
	OnRep_Pose 0x42cd7 hash 9a60031f params:(  );
	OnRep_Params 0x42cd0 hash b16f60ec params:(  );
	OnRep_OnStair 0x42cc8 hash ae8d9188 params:(  );
	OnRep_Dying 0x42cc1 hash e58c93c3 params:(  );
	OnRep_DefaultMeshType 0x42cb5 hash 54fdb65c params:(  );
	Landed 0x42cb1 hash c04065ed params:( HitResult Hit; );
	JumpOverWindow 0x42ca9 hash e435d8d5 params:( None ReturnValue; );
	JumpOverObstacleEnd 0x42c9e hash ff57f4c1 params:(  );
	JumpOverObstacle 0x42c95 hash 58ec70ea params:( None ReturnValue; );
	IsTargeting 0x42c8e hash c076e1a6 params:( None ReturnValue; );
	IsRunning 0x42c88 hash c4312c2 params:( None ReturnValue; );
	IsControlledByLocalPlayer 0x42c7a hash a472e9ca params:( None ReturnValue; );
	HandheldItem_StopTimer 0x42c6e hash 5dc2e752 params:(  );
	HandheldItem_StartTimer 0x42c61 hash da1a79a params:(  );
	HandheldItem_CompleteTimer 0x42c53 hash 26d6ea85 params:(  );
	GetWeapon 0x42c4d hash 2a47fbaf params:( SFPSWeapon ReturnValue; );
	GetSteelArms 0x42c46 hash 82c6f775 params:( SFPSSteelArms ReturnValue; );
	GetSmallArms 0x42c3f hash e9654eb1 params:( SFPSSmallArms ReturnValue; );
	GetRunningSpeedModifier 0x42c32 hash 8eb8e086 params:( None ReturnValue; );
	GetHandheldItem 0x42c29 hash 1fb64bcc params:( SFPSHandheldItem ReturnValue; );
	GetDeviceItem 0x42c21 hash 9d7b8164 params:( SFPSDeviceItem ReturnValue; );
	GetAimOffsets 0x42c19 hash 4abb46f6 params:( Rotator ReturnValue; );
	FireMode 0x42c14 hash b9924bf0 params:(  );
	ExecQuickSlot_PrevWeapon 0x42c07 hash 3291f56f params:(  );
	ExecQuickSlot_NextWeapon 0x42bfa hash 2f196951 params:(  );
	ExecQuickSlot9 0x42bf2 hash 4bd05342 params:(  );
	ExecQuickSlot8 0x42bea hash 4bd05341 params:(  );
	ExecQuickSlot7 0x42be2 hash 4bd05340 params:(  );
	ExecQuickSlot6 0x42bda hash 4bd0533f params:(  );
	ExecQuickSlot5 0x42bd2 hash 4bd0533e params:(  );
	ExecQuickSlot4 0x42bca hash 4bd0533d params:(  );
	ExecQuickSlot3 0x42bc2 hash 4bd0533c params:(  );
	ExecQuickSlot2 0x42bba hash 4bd0533b params:(  );
	ExecQuickSlot11 0x42bb1 hash c5dabaab params:(  );
	ExecQuickSlot10 0x42ba8 hash c5dabaaa params:(  );
	ExecQuickSlot1 0x42ba0 hash 4bd0533a params:(  );
	ExecQuickSlot 0x42b98 hash 481d95e9 params:( None aSlotIndex;None ReturnValue; );
	Client_WeaponChange 0x83d3 hash 571d34b3 params:( SFPSHandheldItem aNewItem;SFPSHandheldItem aOldItem;None aNewSlot;None aOldSlot;None bSkipStartAnim; );
	Client_SetStairOffForceUseBottomPoint 0x83bf hash 762101a8 params:(  );
	Client_SetDeadParams 0x83b4 hash 596c0d01 params:( SFPSCharacterDeadParams aDeadParams; );
	Client_ReloadBreak 0x83aa hash a438e83f params:( None aAmmoCountAfterBreak; );
	Client_Reload 0x83a2 hash 97892cfa params:( Class aAmmoClass;None aAmmoCount;None aFromServer; );
	Client_HandheldItem_StopUse 0x8393 hash 6385bcdc params:( SFPSHandheldItem aItem;None bExecuteFromServer; );
	Client_HandheldItem_StartUse 0x8384 hash b3c9d2e4 params:( SFPSHandheldItem aItem;None bExecuteFromServer; );
	Client_HandheldItem_ClearUsedFlag 0x8372 hash da09db5b params:(  );
	Client_DrawDebugSphere 0x8366 hash 548085bf params:( Vector aPos;None aSize;Color aColor; );
	Client_DrawDebugLine 0x835b hash 811eb900 params:( Vector aStart;Vector aEnd;Color aColor; );
	Client_CheckJumpOverObstacle 0x42b89 hash 43641c06 params:( None aRunJump;None aDebugMode;None ReturnValue; );
	ChangePosition 0x42b81 hash 8537bd40 params:( None DeltaSeconds;Vector OldLocation;Vector OldVelocity; );
	AnimEvent_ReloadEnd 0x42b76 hash 78c81379 params:(  );
	AnimEvent_OnStairEnd 0x42b6b hash cf2a8e2 params:(  );
	AnimEvent_OffStairEnd 0x42b5f hash 5f118f40 params:(  );
	AnimEvent_OffStairBegin 0x42b52 hash 6977410e params:( None aUseTopPoint; );
	AddStartJumpImpulse 0x42b47 hash b9832937 params:(  );
};


instance 1ab5e0a6dc0
class SFPSAICharacter public : SFPSBaseCharacter
{
	// Fields
	BehaviorTree* BehaviorTree; // 0xce0
	int GenerateSetChance; // 0xdc0
	SFPSItemSetStruct WeaponSet0; // 0xdc8
	SFPSItemSetStruct WeaponSet1; // 0xde0
	SFPSItemSetStruct WeaponSet2; // 0xdf8
	SFPSItemSetStruct JacketSet; // 0xe10
	SFPSItemSetStruct TrousSet; // 0xe28
	SFPSItemSetStruct VestSet; // 0xe40
	SFPSItemSetStruct BackPackSet; // 0xe58
	SFPSItemSetStruct HelmetSet; // 0xe70
	SFPSItemSetStruct MaskSet; // 0xe88
	SFPSItemSetStruct GlassesSet; // 0xea0
	SFPSItemSetStruct GlovesSet; // 0xeb8
	TArray LootSets; // 0xed0
	bool bGenerateAmmoForWeapons; // 0xee0
	int GenerateMFForWeaponsChance; // 0xee4
	ESFPSLootRarity GenerateMFForWeaponsRarity; // 0xee8
	SFPSHandheldItem* Weapon0; // 0xef0
	SFPSHandheldItem* Weapon1; // 0xef8
	SFPSHandheldItem* Weapon2; // 0xf00
	SFPSWearableItem* Jacket; // 0xf08
	SFPSWearableItem* Trous; // 0xf10
	SFPSWearableItem* Vest; // 0xf18
	SFPSWearableItem* BackPack; // 0xf20
	SFPSWearableItem* Helmet; // 0xf28
	SFPSWearableItem* Mask; // 0xf30
	SFPSWearableItem* Glasses; // 0xf38
	SFPSWearableItem* Gloves; // 0xf40
	SFPSAISenseConfig_Sight* SenseConfig_Sight; // 0xf48
	SFPSAISenseConfig_Hearing* SenseConfig_Hearing; // 0xf50
	float OptimalAttackDist; // 0xf58
	float FiringTimeMin; // 0xf5c
	float FiringTimeMax; // 0xf60
	float FiringTimePauseMin; // 0xf64
	float FiringTimePauseMax; // 0xf68
	float FiringDelayAtZero; // 0xf6c
	float FiringDelayAtOptimal; // 0xf70
	float DamageMultiplier; // 0xf74

};


instance 1ab5e0a6940
class SFPSAIController public : AIController
{
	// Fields

	// Functions
	SenseUpdated 0x42ee4 hash b7285a8a params:( Actor SensedActor;AIStimulus Stimulus; );
};


instance 1ab5e0a6280
class SFPSAISenseConfig_Sight public : AISenseConfig_Sight
{
	// Fields
	float ResolutionDefault; // 0x6c
	float ResolutionDefaultNight; // 0x70
	float ResolutionAggro; // 0x74
	float ResolutionAggroNight; // 0x78

};


instance 1ab5e0a5bc0
class SFPSAISenseConfig_Hearing public : AISenseConfig_Hearing
{
	// Fields

};


instance 1ab5e0a5740
class SFPSAISense_Sight public : AISense_Sight
{
	// Fields

};


instance 1ab5e0a5080
class SFPSAIConfig public : Object
{
	// Fields
	SFPSAIParams Params; // 0x28

};


instance 1ab5e0a4e40
class SFPSAIHearingVolume public : Volume
{
	// Fields

};


instance 1ab5e0adc00
class SFPSAmbienceSpot public : Actor
{
	// Fields
	TArray BoxComponents; // 0x228
	float Chance; // 0x250
	float RainIntensivity; // 0x254
	TArray SoundCues; // 0x258
	float SepDelay; // 0x268
	bool UseAltDelay; // 0x26c
	FloatMinMax FPlayBackDelay; // 0x270
	float SoundDensity; // 0x278
	TArray AudioComponents; // 0x280
	float FChanceToPlaySmall; // 0x290

	// Functions
	TriggerExit 0x42f66 hash 3c8f2713 params:( PrimitiveComponent OverlappedComponent;Actor OtherActor;PrimitiveComponent OtherComp;None OtherBodyIndex; );
	TriggerEnter 0x42f5f hash ce6ebaf7 params:( PrimitiveComponent OverlappedComponent;Actor OtherActor;PrimitiveComponent OtherComp;None OtherBodyIndex;None bFromSweep;HitResult SweepResult; );
};


instance 1ab5e0ad9c0
class SFPSAmbientSound public : AmbientSound
{
	// Fields
	bool bAmbRegistered; // 0x220
	bool bBaseNoise; // 0x221
	bool bRainNoise; // 0x222

};


instance 1ab5e0ad300
class SFPSBaseItem public : Actor
{
	// Fields
	SFPSStaticItemParams StaticParams; // 0x238
	int Count; // 0x298
	bool bItemInCell; // 0x29c
	bool bDeleteAfterDrop; // 0x29d
	ESFPSLootRarity LootRarity; // 0x29e
	TArray Components; // 0x2a0
	Actor* OwnerLootSpawner; // 0x2b0
	MeshComponent* MeshRef; // 0x2b8
	BoxComponent* TraceRef; // 0x2c0
	TArray LootTraces; // 0x2d8

	// Functions
	Server_SetTraceEnabled 0x8522 hash c8f4601 params:( None aEnabled; );
	Server_OnUnequip 0x42f91 hash 5797235f params:( Actor ACharacter; );
	Server_OnEquip 0x42f89 hash c2c6e3fc params:( Actor ACharacter; );
	OnRep_Params 0x42cd0 hash b16f60ec params:(  );
	Client_SetTraceEnabled 0x8516 hash b1bf00e9 params:( None aEnabled; );
	Client_DrawDebugSphere 0x8366 hash 548085bf params:( Vector aPos;None aSize;Color aColor; );
};


instance 1ab5e0ad540
class SFPSAmmo public : SFPSBaseItem
{
	// Fields
	ESFPSAmmoType AmmoType; // 0x2e8
	ESFPSDamageType DamageType; // 0x2e9
	SFPSAmmoParameters Params; // 0x2ec

};


instance 1ab5e0ad0c0
class SFPSAnimEvent_FreeCameraStop public : AnimNotify
{
	// Fields

};


instance 1ab5e0acc40
class SFPSAnimEvent_InverseKinematics public : AnimNotify
{
	// Fields
	bool bKinematicsDisabled; // 0x38

};


instance 1ab5e0aca00
class SFPSAnimEvent_JumpEvent public : AnimNotify
{
	// Fields

};


instance 1ab5e0ac7c0
class SFPSAnimEvent_LootBox_EndClose public : AnimNotify
{
	// Fields

};


instance 1ab5e0ac580
class SFPSAnimEvent_LootBox_EndOpen public : AnimNotify
{
	// Fields

};


instance 1ab5e0ac340
class SFPSAnimEvent_OnEnterCar public : AnimNotify
{
	// Fields

};


instance 1ab5e0ac100
class SFPSAnimEvent_PlaySound public : AnimNotify_PlaySound
{
	// Fields
	bool bOnlyLocalPlayerPlay; // 0x58
	bool bCMobCanPlay; // 0x59
	bool bUseMaxSoundDistance; // 0x5a

};


instance 1ab5e0abc80
class SFPSAnimEvent_PoseChangingEnd public : AnimNotify
{
	// Fields

};


instance 1ab5e0aba40
class SFPSAnimEvent_ReloadEnd public : AnimNotify
{
	// Fields

};


instance 1ab5e0ab800
class SFPSAnimEvent_ReloadLoop public : AnimNotify
{
	// Fields

};


instance 1ab5e0ab5c0
class SFPSAnimEvent_StairStepSound public : AnimNotify
{
	// Fields
	bool IsRightLeg; // 0x38

};


instance 1ab5e0ab380
class SFPSAnimEvent_StepSound public : AnimNotify
{
	// Fields

};


instance 1ab5e0ab140
class SFPSAnimEvent_UseItem_FastUsage public : AnimNotify
{
	// Fields

};


instance 1ab5e0aaf00
class SFPSAnimEvent_UseItemEnd public : AnimNotify
{
	// Fields

};


instance 1ab5e0aacc0
class SFPSAnimEvent_UseItemStart public : AnimNotify
{
	// Fields

};


instance 1ab5e0aaa80
class SFPSAnimEvent_WC_AttachNew public : AnimNotify
{
	// Fields

};


instance 1ab5e0aa840
class SFPSAnimEvent_WC_AttachOldItem public : AnimNotify
{
	// Fields

};


instance 1ab5e0aa600
class SFPSAnimEvent_WC_ChangingFlag public : AnimNotify
{
	// Fields
	bool bWeaponChanging; // 0x38
	bool bForCursor; // 0x39

};


instance 1ab5e0aa3c0
class SFPSAnimEvent_Weap_DropShell public : AnimNotify
{
	// Fields

};


instance 1ab5e0aa180
class SFPSAnimEvent_Weap_HammerCockingBegin public : AnimNotify
{
	// Fields

};


instance 1ab5e0a9f40
class SFPSAnimEvent_Weap_HammerCockingEnd public : AnimNotify
{
	// Fields

};


instance 1ab5e0a9d00
class SFPSAnimEvent_Weap_MagazDetach public : AnimNotify
{
	// Fields

};


instance 1ab5e0a9ac0
class SFPSAnimEvent_Weap_MagazShow public : AnimNotify
{
	// Fields

};


instance 1ab5e0a9880
class SFPSAnimEvent_Weap_ReloadEnd public : AnimNotify
{
	// Fields

};


instance 1ab5e0a9640
class SFPSAnimEvent_Weap_ReloadingFlag public : AnimNotify
{
	// Fields
	bool bReloading; // 0x38
	bool bForCursor; // 0x39

};


instance 1ab5e0afdc0
class SFPSAnimEvent_Weap_SGReload_Ammo public : AnimNotify
{
	// Fields

};


instance 1ab5e0afb80
class SFPSAnimEvent_Weap_SGReload_Hide public : AnimNotify
{
	// Fields

};


instance 1ab5e0af940
class SFPSAnimEvent_Weap_SGReload_Left public : AnimNotify
{
	// Fields

};


instance 1ab5e0af700
class SFPSAnimEvent_Weap_SGReload_Righ public : AnimNotify
{
	// Fields

};


instance 1ab5e0af4c0
class SFPSAnimEvent_Weap_SGReload_Show public : AnimNotify
{
	// Fields

};


instance 1ab5e0af280
class SFPSAnimEvent_Weap_SGReloadLoop public : AnimNotify
{
	// Fields

};


instance 1ab5e0af040
class SFPSAnimEvent_Weap_ShotEnd public : AnimNotify
{
	// Fields

};


instance 1ab5e0aee00
class SFPSAnimEvent_Weap_SRReloadFlag public : AnimNotify
{
	// Fields
	int ActionNumber; // 0x38

};


instance 1ab5e0aebc0
class SFPSAnimEvent_Weap_SRReloadLoop public : AnimNotify
{
	// Fields

};


instance 1ab5e0ae980
class SFPSAnimEvent_Weap_Steel_Damage public : AnimNotify
{
	// Fields
	bool bFirstEvent; // 0x38

};


instance 1ab5e0ae740
class SFPSAnimEvent_WeaponChange_End public : AnimNotify
{
	// Fields

};


instance 1ab5e0ae500
class SFPSAnimInstance public : AnimInstance
{
	// Fields
	SFPSBaseCharacter* Character; // 0x268
	bool bAnimIsDying; // 0x270
	bool bAnimInverseKinematicsDisabled; // 0x271
	float AnimLegsYawDelta; // 0x274
	float AnimLegsYawDeltaSign; // 0x278
	bool AnimLegsRotating; // 0x27c
	float AnimPitch; // 0x280
	float AnimRoll; // 0x284
	float AnimSpeed; // 0x288
	float AnimSpeedZ; // 0x28c
	float AnimJumpDuck; // 0x290
	float AnimSpeedScale; // 0x294
	float AnimDirectionForward; // 0x298
	float AnimDirectionRight; // 0x29c
	float AnimAccelerationForward; // 0x2a0
	float AnimAccelerationRight; // 0x2a4
	float AnimFatigue; // 0x2a8
	float AnimWeaponInertiaYaw; // 0x2ac
	float AnimWeaponInertiaPitch; // 0x2b0
	float AnimWeaponBarrier; // 0x2b4
	float AnimWeaponRollbackForward; // 0x2b8
	float AnimWeaponRollbackRight; // 0x2bc
	ESFPSItemAnimTypes AnimWeaponAnimType; // 0x2c0
	bool AnimIsJumping; // 0x2c1
	bool AnimJumpEvent; // 0x2c2
	ESFPSCharacterPose AnimPose; // 0x2c3
	bool AnimPoseChanging; // 0x2c4
	bool AnimIsAiming; // 0x2c5
	bool AnimIsTeleporting; // 0x2c6
	bool AnimIsOnStair; // 0x2c7
	float AnimDamageImpactEffectHead; // 0x2c8
	float AnimDamageImpactEffectTop; // 0x2cc
	float AnimDamageImpactEffectBottom; // 0x2d0
	float AnimDamageImpactEffectLeft; // 0x2d4
	float AnimDamageImpactEffectRight; // 0x2d8
	float AnimStairPosition; // 0x2dc
	SFPSHandheldItem* AnimWeaponChange_NewItem; // 0x2e0
	SFPSHandheldItem* AnimWeaponChange_OldItem; // 0x2e8
	int AnimWeaponChange_NewSlot; // 0x2f0
	int AnimWeaponChange_OldSlot; // 0x2f4
	bool AnimWeaponChange_SkipStartAnim; // 0x2f8
	FName AnimWeaponChange_OldSocket; // 0x2fc
	FName AnimWeaponChange_NewSocket; // 0x304
	SFPSSmallArms* AnimReload_Weapon; // 0x310
	int AnimReload_AmmoCount; // 0x318
	int AnimReload_LoopCount; // 0x31c
	int AnimReload_LoopCounter; // 0x320
	bool AnimReload_BreakActive; // 0x324
	SFPSAmmo* AnimReload_AmmoClass; // 0x328
	AnimMontage* AnimReload_Montage; // 0x330
	WeakObjectProperty AnimHandheldItemUse_Item; // 0x338 property 0x1ab719d4780 hash 0x24388009
	AnimMontage* AnimHandheldItemUse_Montage; // 0x340
	bool AnimHandheldItemUse_Break; // 0x348
	float AnimHandheldItemUse_Time; // 0x34c
	bool AnimHandheldItemUsed; // 0x350
	bool AnimHandheldItemEnabled; // 0x351
	float CarWheelsSteerAngle; // 0x354

	// Functions
	OnStair 0x43234 hash cbaf0a85 params:( None aUseTopPoint;None aSkipStartAnim; );
	OffStair 0x4322f hash 3c598e3 params:( None aUseTopPoint; );
	AnimWeaponChange 0x43226 hash ff70b2fa params:( SFPSHandheldItem aNewItem;SFPSHandheldItem aOldItem;None aNewSlot;None aOldSlot;None aSkipAnim; );
	AnimReloadBreak 0x4321d hash e76239a6 params:( SFPSSmallArms aWeapon;None aAmmoCountAfterBreak;None ReturnValue; );
	AnimReload 0x43217 hash be094201 params:( SFPSSmallArms aWeapon;None aAmmoCount;None aAnimLoopCount;Class aAmmoClass; );
	AnimJumpOverObstacle 0x4320c hash 42925bef params:( AnimMontage aMontage; );
	AnimHandheldItemUseStop 0x431ff hash a6b050c4 params:( SFPSHandheldItem aItem; );
	AnimHandheldItemUseApply 0x431f2 hash 7b7282e4 params:(  );
	AnimHandheldItemUse 0x431e7 hash ad38f21e params:( SFPSHandheldItem aItem; );
};


instance 1ab5e0ae2c0
class SFPSBaseLocationCraftItem public : Actor
{
	// Fields
	SFPSBaseItem* CraftKit; // 0x220
	ESFPSBaseModuleType ModuleType; // 0x228
	Vector BaseCenter; // 0x22c
	float DefaultDist; // 0x238
	float DefaultAngle; // 0x23c
	float DefaultHeight; // 0x240
	bool bRequiresSnap; // 0x244
	bool bRequiresAnchors; // 0x245
	bool bRequiresBlock; // 0x246
	bool bRequiresBaseSphere; // 0x247
	TArray AnchorPoints; // 0x278
	float AnchorHeight; // 0x288
	int AnchorsAboveGround; // 0x28c
	TArray BaseSpherePoints; // 0x290

};


instance 1ab5e0ae080
class SFPSBaseLootSpawner public : Actor
{
	// Fields
	int SpawnIntervalMin; // 0x22c
	int SpawnIntervalMax; // 0x230
	int RerollChance; // 0x234
	int RadiusSquared; // 0x238

};


instance 1ab5e0b49c0
class SFPSLootSpawner public : SFPSBaseLootSpawner
{
	// Fields
	SFPSBaseItem* Item; // 0x240
	SFPSBaseItem* ItemSecondary; // 0x248
	SFPSBaseItem* ItemClass; // 0x250
	SFPSBaseItem* ItemClassSecondary; // 0x260
	SFPSItemSetStruct ItemSet; // 0x280

};


instance 1ab5e0b4780
class SFPSLootBoxSpawner public : SFPSBaseLootSpawner
{
	// Fields
	SFPSLootBox* LootBox; // 0x240
	SFPSLootBox* LootBoxClass; // 0x268
	TArray ItemsToSpawn; // 0x270

};


instance 1ab5e0b4540
class SFPSBase public : Object
{
	// Fields

};


instance 1ab5e0b4300
class SFPSBaseManager public : Object
{
	// Fields
	TArray Bases; // 0x28

};


instance 1ab5e0b40c0
class SFPSBaseMissileProjectile public : Actor
{
	// Fields
	bool bLastBounce; // 0x2a8
	MeshComponent* MeshRef; // 0x2b0
	ProjectileMovementComponent* MovementComponentRef; // 0x2b8
	SoundCue* BounceSoundCue; // 0x2c0
	ParticleSystem* BounceParticles; // 0x2c8
	ParticleSystem* BounceWaterParticles; // 0x2d0
	bool bClientIntersectionWithWater; // 0x2d8
	float ClientLastWaterColl; // 0x2dc
	SFPSBaseCharacter* Shooter; // 0x2e0
	bool bDrawClientDebugTrajectory; // 0x2e8
	float DrawClientDebugTrajectoryTimeLife; // 0x2ec

	// Functions
	OnProjectileStop 0x43298 hash 4132c519 params:( HitResult aImpactResult; );
	OnProjectileBounce 0x4328e hash 30f9910f params:( HitResult ImpactResult;Vector ImpactVelocity; );
	OnIntersectionWithWater 0x43281 hash 4f4d0c98 params:( HitResult ImpactResult; );
};


instance 1ab5e0b3e80
class SFPSBaseWeaponAnimInstance public : AnimInstance
{
	// Fields
	SFPSWeapon* Weapon; // 0x268
	ESFPSWeaponAnimInstanceType AnimInstanceType; // 0x270
	ESFPSSmallArmsStateForAnim SmallArmsStateForAnim; // 0x271
	int FireMode; // 0x274

	// Functions
	DoShot 0x432c5 hash ae85bc16 params:(  );
	DoReloadBreak 0x432bd hash b9a71654 params:(  );
	DoReload 0x432b8 hash 6457f9ef params:( None aAnimLoopCount;None aAmmoCountAfterReload; );
	DoHammerCocking 0x432af hash 62f135d0 params:(  );
};


instance 1ab5e0b3c40
class SFPSBaseWeaponMF public : SFPSBaseItem
{
	// Fields
	SFPSWeaponMFParams MFParams; // 0x2e8
	SFPSBaseItem* OwnerWeapon; // 0x2f0
	SoundCue* DeviceSoundCue; // 0x2f8

};


instance 1ab5e0b3a00
class SFPSCameraShake public : CameraShake
{
	// Fields
	float FirstPersonScale; // 0x158
	float ThirdPersonScale; // 0x15c

};


instance 1ab5e0b3580
class SFPSCharacter public : SFPSBaseCharacter
{
	// Fields
	char Roll_Desired; // 0xd50
	SFPSACCamera* Camera; // 0xd60
	ESFPSServerCameraType ServerCameraType; // 0xd68
	float DegradeFood; // 0xd6c
	float DegradeWater; // 0xd7c
	float ZeroFoodDamage; // 0xd8c
	float ZeroWaterDamage; // 0xd90
	int HealthLow; // 0xd94
	int HealthCritical; // 0xd98
	int FoodWaterLow; // 0xd9c
	int FoodWaterCritical; // 0xda0
	SFPSLoginData LoginData; // 0xda8
	Guid DeadMarkerGUID; // 0xdd0
	bool bDLC0Exist; // 0xde1
	SFPSCameraShake* DamageShake; // 0xde8
	bool bCharacterForCreateNew; // 0xdf0
	TArray Achievements; // 0xdf8
	SFPSLootBox* LootBoxActor; // 0xe10
	int ReputationPoints; // 0xe20
	Vector BaseCenter; // 0xe2c
	TArray FreeStashes; // 0xe38
	BYTE FreeBaseStashes; // 0xe48
	BYTE FreeBaseItems; // 0xe49
	TArray Squad; // 0xe58
	float Camera_RollAmount; // 0xe68
	float Camera_ForwardOffset; // 0xe6c
	Vector Camera_OriginOffset; // 0xe70
	float Camera_SideOffset; // 0xe7c
	float Camera_Distance; // 0xe80
	CurveFloat* FPIronSightOn; // 0xe88
	CurveFloat* FPIronSightOff; // 0xe90
	CurveFloat* TPIronSightOn; // 0xe98
	CurveFloat* TPIronSightOff; // 0xea0

	// Functions
	tmpExecCustomServerFunction 0x4348c hash 60c11253 params:(  );
	tmpExecCustomClientFunction 0x4347d hash 51f8653b params:(  );
	tmpCustomServerFunction 0x8b38 hash d71050ce params:(  );
	ShowChatLast 0x43476 hash 51275f9a params:(  );
	ServerUnPossesAfterDead 0x8b2b hash ad3eafbc params:(  );
	ServerSetAiming 0x8b22 hash b76a05dd params:( None aAiming; );
	ServerCraft_DeleteObject_Completed 0x43464 hash 958c33f1 params:(  );
	ServerCraft_DeleteObject 0x8b15 hash 4c1c0975 params:( Actor AActor; );
	ServerCraft_CreateObject_Completed 0x43452 hash e80cc432 params:(  );
	ServerCraft_CreateObject_Cancel 0x8b04 hash c4e93e9b params:(  );
	ServerCraft_CreateObject 0x8af7 hash f2a22476 params:( SFPSBaseItem aBoxKit;Vector aPosition;Rotator aRotator; );
	ServerCraft_CraftEditorOpen 0x8ae8 hash ef6bfdf4 params:( None aOpen; );
	Server_Vivox_GetToken_Login 0x8ad9 hash 8d3b3a4f params:(  );
	Server_Vivox_GetToken_Join 0x8acb hash 51d9e946 params:( None aChannelProperties; );
	Server_UpdateTacticalMarkerZ 0x8abc hash 1550163f params:( Guid aMarkerUID;Vector aMarkerPos; );
	Server_Suicide 0x8ab4 hash 9878481 params:(  );
	Server_SquadLeave 0x8aaa hash 52a512e6 params:(  );
	Server_SquadInviteConfirm 0x8a9c hash 4f95a876 params:( UnderlyingType aCharLoginType;None aCharIdOrLogin; );
	Server_SquadInvite 0x8a92 hash a0f62148 params:( SFPSCharacter aInviteCharacter; );
	Server_SetGameLeave 0x8a87 hash 9d25d9ee params:( None aLeave; );
	Server_ServerInfo 0x8a7d hash 6d86ea7e params:(  );
	Server_LootBoxUpdateLastOpenTime 0x8a6c hash 897e07ba params:( SFPSLootBox aLootBox; );
	Server_LootBoxSetOpenAnim 0x8a5e hash 26802925 params:( SFPSLootBox aLootBox;None aOpen; );
	Server_KickMe 0x8a56 hash 2ad3d9af params:(  );
	Server_ChatMsg 0x8a4e hash 1b08c182 params:( None aText;UnderlyingType aChannelType; );
	Server_AdminPanel_PageServer_SetPlayersMaxCount 0x8a35 hash e8b83f21 params:( None aNewMaxCount; );
	Server_AdminPanel_PageServer_SetPassword 0x8a20 hash ef246145 params:( None aNewPassword; );
	Server_AdminPanel_PageServer_SetCameraType 0x8a0a hash 4946ea9d params:( UnderlyingType aCameraType; );
	Server_AdminPanel_PageServer 0x89fb hash bf999727 params:(  );
	Server_AdminPanel_PagePlayers_Unban 0x89e8 hash fdd6c143 params:( SFPSLoginData aLoginData; );
	Server_AdminPanel_PagePlayers_DelFromAdmins 0x89d1 hash 343495f4 params:( SFPSLoginData aLoginData; );
	Server_AdminPanel_PagePlayers_Ban 0x89bf hash 9a353ce0 params:( SFPSLoginData aLoginData; );
	Server_AdminPanel_PagePlayers_AddToAdmins 0x89a9 hash 95835857 params:( SFPSLoginData aLoginData; );
	Server_AdminPanel_PagePlayers 0x8999 hash daffe730 params:(  );
	Server_AdminPanel_PageItems 0x898a hash a80a2052 params:(  );
	Roll_SetServer 0x8982 hash 7f96cb20 params:( None aDesiredRoll; );
	QuickSlotShowHide 0x43448 hash 26cd541f params:(  );
	OnRep_ServerCameraType 0x4343c hash 9ed3b2ca params:(  );
	OnRep_BaseCenter 0x43433 hash 2fad1a24 params:(  );
	OnRep_Achievements 0x43429 hash b67efbc4 params:(  );
	MakeDamageEffects 0x8978 hash 9ce24122 params:( None aActualHP;UnderlyingType aWeaponType;UnderlyingType aAmmoType;Vector aImpactPoint;Vector aImpactNormal;None aBoneName; );
	Input_VivoxCommonChannelDeactivate 0x43417 hash d3db888c params:(  );
	Input_VivoxCommonChannelActivate 0x43406 hash be3b25c3 params:(  );
	Input_ToggleCameraMode 0x433fa hash 6cfa0c84 params:(  );
	Input_ToggleAiming 0x433f0 hash ac0259ab params:(  );
	Input_SquadConfirm 0x433e6 hash d3cae940 params:(  );
	Input_ShowMap 0x433de hash adb16893 params:(  );
	Input_ShowInventory 0x433d3 hash 39b4d503 params:(  );
	Input_ShowChatSquad 0x433c8 hash c5cb73d3 params:(  );
	Input_ShowChatLocal 0x433bd hash c54b6300 params:(  );
	Input_ShowChatGlobal 0x433b2 hash 62de4626 params:(  );
	Input_ShowAdminPanel 0x433a7 hash a623c6ce params:(  );
	Input_ScopeZoomPrev 0x4339c hash 6d77e6b0 params:(  );
	Input_ScopeZoomNext 0x43391 hash 6d769912 params:(  );
	Input_ScopeModeChange 0x43385 hash c8d29d39 params:(  );
	Input_Roll_Stop 0x4337c hash e1a4f0d2 params:(  );
	Input_Roll_StartRight 0x43370 hash dd73598 params:(  );
	Input_Roll_StartLeft 0x43365 hash 1f6fc545 params:(  );
	Input_OnEsc 0x4335e hash 64bc404c params:(  );
	Input_OnEnter 0x43356 hash 84cb1b2f params:(  );
	Input_MoveRight 0x4334d hash 8bc99889 params:( None Value; );
	Input_MoveForward 0x43343 hash 17a4ff00 params:( None Value; );
	Input_IronSightOn 0x43339 hash 7226968 params:(  );
	Input_IronSightOff 0x4332f hash eb6f95c6 params:(  );
	Input_HoodOnHead 0x43326 hash 274ab72d params:(  );
	Input_FreeCameraStop 0x4331b hash f4c86125 params:(  );
	Input_FreeCameraStart 0x4330f hash 8dd44aed params:(  );
	Input_AutoRun 0x43307 hash 62c26282 params:(  );
	Input_AddYaw 0x43300 hash daf7ad4e params:( None Value; );
	Input_AddPitch 0x432f8 hash 76f9bfb5 params:( None Value; );
	dbg_ClearSteamAchievements 0x432ea hash cf21308e params:(  );
	ClientShootingRangeTargetAddDamage 0x8966 hash ffc2b16b params:( Actor aShootingRangeTarget;Vector aImpactPoint; );
	ClientRespawnAfterDead 0x895a hash 5b9e0f24 params:( None aFromServer; );
	ClientCraft_CreateObject 0x894d hash a2ac395e params:( None aSuccessfully; );
	Client_Vivox_GetToken_Login 0x893e hash c47c0637 params:( None aToken; );
	Client_Vivox_GetToken_Join 0x8930 hash 2cbcd82e params:( None aToken;Guid aChannelID; );
	Client_UpdateTacticalMarkerZ 0x8921 hash 34aa5f27 params:( Guid aMarkerUID;Vector aMarkerPos; );
	Client_UpdateSquad 0x8917 hash 8b611b44 params:( SFPSSquadInfo aSquadInfo; );
	Client_SystemMSG 0x890e hash 8003edaf params:( UnderlyingType aMSG;UnderlyingType aMGSType;None aCustomText; );
	Client_SquadInvite 0x8904 hash 31eca830 params:( SFPSLoginData aLoginData; );
	Client_SetDeadMarker 0x88f9 hash 526cbc9f params:( Vector aMarkerPos;Guid aMarkerID;None aClear; );
	Client_SetCameraType 0x88ee hash 32bf479a params:( UnderlyingType aServerCameraType; );
	Client_ServerInfo 0x88e4 hash 14d43466 params:( None aServerId;None aRegion;None aServerTime;None aPlayerCount;None aMaxPlayerCount;None aOfficial; );
	Client_DelFromSquad 0x88d9 hash 375c3f0a params:( SFPSSquadInfo aSquadInfo;None aForceClear; );
	Client_ChatMsg_PlayerKilled 0x88ca hash 4f9d14cb params:( None aKillerLogin;None aDeadLogin;None aWeaponIndex; );
	Client_ChatMsg 0x88c2 hash c40146a params:( None aText;UnderlyingType aChannelType; );
	Client_AdminPanel_PageServer 0x88b3 hash def3e00f params:( SFPSServerAdminParams aParams; );
	Client_AdminPanel_PagePlayers 0x88a3 hash e5a34d18 params:( SFPSServerAdminParams aParams; );
	Client_AdminPanel_PageItems 0x8894 hash df4aec3a params:(  );
	Client_AdminPanel_NoRight 0x8886 hash 6ade9396 params:(  );
	Client_AddToSquad 0x887c hash 47fc840d params:( SFPSSquadInfo aSquadInfo;None aInfoMsgType; );
	Client_AchievementProgressNotify 0x886b hash 2a96b73a params:( None aAchievementName;None aCurrentValue;None aMaxValue; );
	CheatCode_SpawnItem 0x8860 hash 544100fc params:( None aClassName; );
	CheatCode_SetTime 0x8856 hash 731659bf params:( None aTime; );
	CheatCode_SetGameplayTimeScale 0x8846 hash a27f5337 params:( None TimeScale; );
	CheatCode_ServerTeleport 0x8839 hash c2ce4b0a params:( Vector aCoords; );
	CheatCode_ServerSpeed 0x882d hash b49ac9ac params:(  );
	CheatCode_ServerShowPatrols 0x881e hash 62425da1 params:(  );
	CheatCode_ServerShowMission 0x880f hash 8deb471e params:(  );
	CheatCode_ServerShowBots 0x8802 hash c5a72634 params:(  );
	CheatCode_ServerSetDayLength 0x87f3 hash 837ce0a7 params:( None DayLength; );
	CheatCode_Message 0x87e9 hash a537b1a9 params:( None Message; );
	CheatCode_GodMode 0x87df hash ed89d0a3 params:(  );
	CheatCode_ClientShowPatrols 0x87d0 hash 98fa789 params:( aData aData; );
	CheatCode_ClientShowMission 0x87c1 hash 35389106 params:( SFPSDebug_GameplayManager_Mission Data; );
	CheatCode_ClientShowBots 0x87b4 hash b6de791c params:( aArray aArray; );
};


instance 1ab5e0b3340
class SFPSCharacterMovementComponent public : CharacterMovementComponent
{
	// Fields

};


instance 1ab5e0b2ec0
class SFPSChatHandler public : Object
{
	// Fields
	UserWidget* FormChat; // 0x70

	// Functions
	OnSetChatType 0x43637 hash 9709a450 params:( UnderlyingType aChannelType; );
	OnSend 0x43633 hash c81c558c params:(  );
	OnChatSelectSquad 0x43629 hash 1f8cef80 params:( None bIsChanged; );
	OnChatSelectLocal 0x4361f hash 1f0cdead params:( None bIsChanged; );
	OnChatSelectGlobal 0x43615 hash f4cf3773 params:( None bIsChanged; );
	OnChatPin 0x4360f hash 87ff91a9 params:( None bIsChanged; );
	OnChatEnter 0x43608 hash 85667740 params:( None InText;ETextCommit InTextAction; );
	OnChatChanged 0x43600 hash cf9ad66c params:( None Text; );
	Init 0x36c hash 7c86f919 params:( UserWidget aFormChat; );
	Hide 0x435fd hash 7c8656bf params:(  );
};


instance 1ab5e0b2c80
class SFPSCommonGameState public : GameState
{
	// Fields
	float Debug_ServerDeltaT; // 0x278
	CurveFloat* TimeDilationCurve; // 0x280
	float TimeOfDay; // 0x288
	float TimeOfDayUndilated; // 0x28c
	float TimeOfDayReplicated; // 0x290
	float DayLengthInSeconds; // 0x29c
	float GameplayDayStart; // 0x2a0
	float GameplayDayEnd; // 0x2a4
	TArray MissionInfos; // 0x2b0

	// Functions
	RecaptureSkyLight 0x436ef hash 6cc3be5f params:( SkyLightComponent aSkyLightComponent; );
	OnRep_TimeOfDayUpdated 0x436e3 hash 98630ab1 params:(  );
	OnRep_MissionInfosUpdated 0x436d5 hash 8eaa0930 params:(  );
	ClientMissionMessage 0x8be9 hash 92878e8b params:( None aID;UnderlyingType aType; );
};


instance 1ab5e0b2380
class SFPSCraftEditor public : Object
{
	// Fields

};


instance 1ab5e0b2140
class SFPSCraftLibrary public : Object
{
	// Fields
	TArray Items; // 0x28

};


instance 1ab5e0b1f00
class SFPSCreatePlayerHandler public : Object
{
	// Fields
	HUD* CreatePlayerHUD; // 0x88
	UserWidget* FormCreatePlayer; // 0x90

	// Functions
	OnShow 0x43771 hash c81c6283 params:(  );
	OnSelectSkinEuro03 0x43767 hash a0ab1835 params:( None bIsChecked; );
	OnSelectSkinEuro02 0x4375d hash a0ab1834 params:( None bIsChecked; );
	OnSelectSkinEuro01 0x43753 hash a0ab1833 params:( None bIsChecked; );
	OnSelectSkinEast01 0x43749 hash 9f41cfc5 params:( None bIsChecked; );
	OnSelectSkinArab02 0x4373f hash 9716a26f params:( None bIsChecked; );
	OnSelectSkinArab01 0x43735 hash 9716a26e params:( None bIsChecked; );
	OnSelectSkinAfro01 0x4372b hash 96470620 params:( None bIsChecked; );
	OnSelectSkin 0x43724 hash ffe90ad7 params:( UnderlyingType aSkinType; );
	OnCreate 0x4371f hash 1c1bb036 params:(  );
	OnBackToMenu 0x43718 hash 4575552b params:(  );
	Init 0x36c hash 7c86f919 params:( UserWidget aFormCreatePlayer; );
};


instance 1ab5e0b1cc0
class SFPSShell public : Actor
{
	// Fields
	SFPSBaseCharacter* Creator; // 0x230
	ESFPSShellType ShellType; // 0x238
	SoundCue* HitCue; // 0x240

	// Functions
	OnHit 0x4377b hash dd221e7 params:( Actor SelfActor;Actor OtherActor;Vector NormalImpulse;HitResult Hit; );
};


instance 1ab5e0b1a80
class SFPSShellManager public : Object
{
	// Fields
	TArray ShellList_SG0; // 0x28
	TArray ShellList_AR0; // 0x38
	TArray ShellList_Gun0; // 0x48
	TArray ShellList_SR0; // 0x58
	SFPSShell* Shell_SG0; // 0x78
	SFPSShell* Shell_AR0; // 0x80
	SFPSShell* Shell_Gun0; // 0x88
	SFPSShell* Shell_SR0; // 0x90

};


instance 1ab5e0b1840
class SFPSDebrisHandler public : Object
{
	// Fields
	SFPSShellManager* ShellManager; // 0x28

	// Functions
	ShellDrop 0x43792 hash 13a45952 params:( SFPSSmallArms aWeapon; );
};


instance 1ab5e0b13c0
class SFPSHandheldItem public : SFPSBaseItem
{
	// Fields
	WeakObjectProperty ItemAudioComponent; // 0x2e8 property 0x1ab71a10b80 hash 0x24388009
	bool IsHeld; // 0x300
	bool bUsed; // 0x301
	FName HoldSocketName; // 0x304
	ESFPSItemAnimTypes AnimType; // 0x30c
	float TimeOfUse; // 0x310
	bool bUsedLoopedAnimation; // 0x314
	ESFPSHandheldItemAttachHand AttachHand; // 0x315
	AnimMontage* HideAnimLeft; // 0x318
	AnimMontage* ShowAnimLeft; // 0x320
	AnimMontage* HideAnimRight; // 0x328
	AnimMontage* ShowAnimRight; // 0x330
	AnimMontage* HideAnimHolster; // 0x338
	AnimMontage* ShowAnimHolster; // 0x340
	AnimMontage* ShowAnimHolster_HammerCocking; // 0x348
	AnimMontage* UseAnim; // 0x350
	AnimMontage* UseAnimRun; // 0x358
	AnimMontage* UseAnimCrouch; // 0x360
	AnimMontage* HideAnimLeftProne; // 0x368
	AnimMontage* ShowAnimLeftProne; // 0x370
	AnimMontage* HideAnimRightProne; // 0x378
	AnimMontage* ShowAnimRightProne; // 0x380
	AnimMontage* HideAnimHolsterProne; // 0x388
	AnimMontage* ShowAnimHolsterProne; // 0x390
	AnimMontage* ShowAnimHolsterProne_HammerCocking; // 0x398
	AnimMontage* UseAnimProne; // 0x3a0
	float TurnMomentum_Spring; // 0x3a8
	float TurnMomentum_Damping; // 0x3ac
	SFPSBaseMissileProjectile* MissileProjectile; // 0x3b0
	SoundCue* UseItemCue; // 0x3b8
	SoundCue* MovementCue; // 0x3c0

	// Functions
	StopItemSound 0x437b1 hash 974d93a3 params:( None bStopRightNow; );
	Server_TakeOrHide 0x901e hash d9e2bcdb params:( Character ACharacter;None aSkipAnim; );
	PlayItemSound 0x437a9 hash fae2bcb3 params:( None bIsLocalPlayer; );
	Client_OnUnequip 0x9015 hash 73eed047 params:(  );
	Client_OnEquip 0x900d hash b3fe36e4 params:( Actor Character;None bSetItemVisible; );
};


instance 1ab5e0b1600
class SFPSDeviceItem public : SFPSHandheldItem
{
	// Fields
	bool bDeviceEnabled; // 0x3e8
	float GrenadeAdditionalPitch; // 0x3ec
	float GrenadeAdditionalYaw; // 0x3f0
	bool bDisableOnSprint; // 0x3f4
	StaticMesh* DeviceEnabledMesh; // 0x3f8
	StaticMesh* DeviceDisabledMesh; // 0x400
	float CooldownTime; // 0x408
	float ActivationRange; // 0x40c
	ParticleSystem* ParticlesSwitchToEnabled; // 0x410
	ParticleSystem* ParticlesSwitchToDisabled; // 0x418
	Transform CustomTransform; // 0x420
	CurveFloat* LightIntensity; // 0x450

	// Functions
	OnRep_DeviceEnabled 0x437b9 hash eadaa6a3 params:(  );
};


instance 1ab5e0b1180
class SFPSFontHandler public : Object
{
	// Fields

};


instance 1ab5e0b0f40
class SFPSGameInstance public : GameInstance
{
	// Fields
	DelegateProperty VaRestCallback0; // 0x2b0 property 0x1ab71a13180 hash 0xe1aec4e5
	DelegateProperty VaRestCallback1; // 0x2c0 property 0x1ab71a11100 hash 0xe1aec4e5
	DelegateProperty VaRestCallback2; // 0x2d0 property 0x1ab71a11180 hash 0xe1aec4e5
	DelegateProperty VaRestCallback3; // 0x2e0 property 0x1ab71a11200 hash 0xe1aec4e5
	DelegateProperty VaRestCallback4; // 0x2f0 property 0x1ab71a11280 hash 0xe1aec4e5
	Actor* RespawnActor; // 0x3e8
	Actor* RespawnActorClass; // 0x3f0
	UserWidget* FormMainMenu; // 0x4e0
	UserWidget* FormLoadingScreen; // 0x4e8
	OnlineBeaconHost* OBH; // 0x540
	SFPSOBCharacterCreationHostObj* CCH; // 0x548
	SFPSInventoryHandler* InventoryHandler; // 0x550
	SFPSMessageHandler* MessageHandler; // 0x558
	SFPSFontHandler* FontHandler; // 0x560
	SFPSUseObjectHandler* UseObjectHandler; // 0x568
	SFPSSplitHandler* SplitHandler; // 0x570
	SFPSMainInterfaceHandler* MainInterfaceHandler; // 0x578
	SFPSSettingsHandler* SettingsHandler; // 0x580
	SFPSLockBreakingHandler* LockBreakingHandler; // 0x588
	SFPSDebrisHandler* DebrisHandler; // 0x590
	SFPSMapHandler* MapHandler; // 0x598
	SFPSCraftEditor* CraftEditor; // 0x5a0
	SFPSSoundHandler* SoundHandler; // 0x5a8
	SFPSServerListHandler* ServerListHandler; // 0x5b0
	SFPSChatHandler* ChatHandler; // 0x5b8
	SFPSCreatePlayerHandler* CreatePlayerHandler; // 0x5c0
	SFPSAdminHandler* AdminHandler; // 0x5c8
	bool b_dbg_BallisticsTracesEnabled; // 0x5d0
	bool b_dbg_CraftDebugEnabled; // 0x5d1
	MaterialParameterCollection* ParametersCollection; // 0x5d8
	Actor* BaseSphere; // 0x5e0
	TArray Localities; // 0x708
	TArray LocalitiesForRandomRespawn; // 0x718
	SFPSUISoundTable* UISounds; // 0x728

	// Functions
	ShowMainMenu 0x43955 hash 831f55e0 params:(  );
	Server_OnSetServerStat_VaRestCallback 0x43941 hash 4ac49658 params:( VaRestRequestJSON aRequest; );
	Server_OnServerAdminGetName_VaRestCallback 0x4392b hash b5cc80fa params:( VaRestRequestJSON aRequest; );
	Server_OnGetRegion_VaRestCallback 0x43919 hash 557e57d params:( VaRestRequestJSON aRequest; );
	Server_OnGetGlobalIP_VaRestCallback 0x43906 hash 69bcf0c3 params:( VaRestRequestJSON aRequest; );
	OnUnHovered_Settings 0x438fb hash ed1266e2 params:(  );
	OnUnHovered_JoinServer_Steam 0x438ec hash dac1fb31 params:(  );
	OnUnHovered_Exit 0x438e3 hash 5fd6830b params:(  );
	OnUnHovered_Continue_Steam 0x438d5 hash 7552caef params:(  );
	OnSettingsShow 0x438cd hash 7ccfaaf4 params:(  );
	OnQuitGame_Ok 0x438c5 hash 17828f18 params:(  );
	OnQuitGame_Cancel 0x438bb hash 96f82c4 params:(  );
	OnQuitGame 0x438b5 hash 6ee4b4bf params:(  );
	OnNetworkFailure 0x438ac hash 8b2fbab4 params:( ENetworkFailure aNetworkFailure;None aIsServer; );
	OnLoginCancel 0x438a4 hash c7f6f221 params:(  );
	OnJoinServer_Steam_AdminPassword 0x43893 hash 30f2b3bd params:(  );
	OnJoinServer_Steam 0x43889 hash 84b2222 params:(  );
	OnJoinServer_LoginPassword 0x4387b hash b60d6954 params:(  );
	OnJoinLastServer_Steam 0x4386f hash 66f861d6 params:(  );
	OnHovered_Settings 0x43865 hash 137834ff params:(  );
	OnHovered_JoinServer_Steam 0x43857 hash eb2e964e params:(  );
	OnHovered_Exit 0x4384f hash 5dd7caa8 params:(  );
	OnHovered_Continue_Steam 0x43842 hash 28b3facc params:(  );
	OnEndLoadingWorld 0x43838 hash d585ce3f params:( World InLoadedWorld; );
	InitControls 0x43831 hash 4b5d0a0d params:( UserWidget aFormMainMenu;UserWidget aFormLoading; );
	EndLoadingScreen 0x43828 hash 48c2367a params:( World InLoadedWorld; );
	dbg_ToggleCraftDebug 0x4381d hash 6ca76eca params:(  );
	dbg_ToggleBallisticsTraces 0x4380f hash 6e66001f params:(  );
	Client_OnGetServerList_VaRestCallback 0x437fb hash 14d90c94 params:( VaRestRequestJSON aRequest; );
	BeginLoadingScreen 0x437f1 hash fa752608 params:( None MapName; );
};


instance 1ab5e0b0ac0
class SFPSGameMode public : GameMode
{
	// Fields
	SFPSCharacter* RespawnCharacter; // 0x330
	TArray UnresolvedDeadMarkers; // 0x338
	SFPSBaseManager* BaseManager; // 0x348
	SFPSSaver* Saver; // 0x350
	TArray SquadList; // 0x358
	SFPSGameplayManager* GameplayManager; // 0x388
	IntPoint MissionRespawnTimes; // 0x390

	// Functions
	ServerRespawnAfterDead 0x8ecd hash b66e543c params:( World aWorld;PlayerController AController;Guid aClientDeadMarkerUID; );
	PlayerKick 0x43a07 hash 788623b4 params:( PlayerController AController;None ReturnValue; );
	DumpBases 0x43a01 hash adeff709 params:(  );
};


instance 1ab5e0b0400
class SFPSGameplayArea public : Actor
{
	// Fields
	TArray Encounters; // 0x218
	TArray Missions; // 0x228
	SceneComponent* Root; // 0x248
	TArray ActiveMissions; // 0x250
	TArray ReadyMissions; // 0x260
	TArray ActiveEncounters; // 0x270
	int MaxActiveEncounters; // 0x280
	int ActivationDelay; // 0x284

};


instance 1ab5e0b01c0
class SFPSGameplayManager public : Object
{
	// Fields
	TArray Patrols; // 0x28
	TArray GameplayAreas; // 0x38
	TArray LootSpawners; // 0x50

};


instance 1ab5e0b9400
class SFPSGameViewportClient public : GameViewportClient
{
	// Fields

};


instance 1ab5e0b8b00
class SFPSGreenArea public : Actor
{
	// Fields
	TArray OverlapCharacters; // 0x218
	TArray Storages; // 0x228
	int CharacterCellNumber; // 0x238
	bool IsServerArea; // 0x23c
	SphereComponent* Sphere; // 0x240

	// Functions
	OnCharacterEndOverlap 0x42512 hash edde171f params:( PrimitiveComponent OverlappedComponent;Actor OtherActor;PrimitiveComponent OtherComp;None OtherBodyIndex; );
	OnCharacterBeginOverlap 0x42505 hash 84b676ad params:( PrimitiveComponent OverlappedComponent;Actor OtherActor;PrimitiveComponent OtherComp;None OtherBodyIndex;None bFromSweep;HitResult SweepResult; );
};


instance 1ab5e0b88c0
class SFPSGreenAreaStorage public : Actor
{
	// Fields

};


instance 1ab5e0b8680
class SFPSHUD public : HUD
{
	// Fields
	MaterialParameterCollection* ParametersCollection; // 0x4b8
	float DamageSplashTime; // 0x4c0

	// Functions
	UpdateHUD 0x43b38 hash f8ab0d09 params:(  );
	NDAAccept 0x43b32 hash 5be3c288 params:(  );
	Init 0x36c hash 7c86f919 params:( UserWidget aFormHUD;UserWidget aFormNDA; );
};


instance 1ab5e0b8200
class SFPSInventoryHandler public : Object
{
	// Fields
	TArray FPopupMenuIcons; // 0x3f0
	UserWidget* FormInventory; // 0x530
	SFPSUserWidget_GroundItem* FormGroundItem; // 0x538
	SFPSUserWidget_PopupMenuItem* FormPopupMenuItem; // 0x540
	SFPSUserWidget_CraftRolloutMan* FormCraftGroup; // 0x548
	SFPSUserWidget_CraftRollout* FormCraftItem; // 0x550
	SFPSUserWidget_TraderItem* FormTradeItem; // 0x558

	// Functions
	UpdatePopupMenu 0x43d1b hash ed64c751 params:( Vector2D aViewPortPopopMenuPosition;Vector2D aViewPortMousePosition; );
	UpdateHintPosition_GroundItemSlot 0x43d09 hash 7f45686f params:( SFPSUserWidget_GroundItem aSelectedSpriteView;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition;Vector2D aViewPortSize;None aViewPortScale; );
	UpdateHintPosition_EquipItemSlot 0x43cf8 hash 2b7c0464 params:( SFPSUserWidget_EquipItem aSelectedSpriteView;Vector2D aViewPortMousePosition;Vector2D aViewPortSize;None aViewPortScale; );
	UpdateDraggingItemPosition 0x43cea hash 4cef160f params:( Vector2D aViewPortMousePosition; );
	Trade_Buy 0x43ce4 hash 7bb03a64 params:( Class ItemClass; );
	TakeAllItems 0x43cdd hash dc17b85 params:(  );
	SetInventoryItemFilterLeft 0x43ccf hash 53a311f params:( None aFilter; );
	PopupMenu_Hide 0x43cc7 hash 87dd5047 params:(  );
	PopupMenu_Click 0x43cbe hash 832e9933 params:( Vector2D aViewPortPopopMenuPosition;Vector2D aViewPortMousePosition; );
	OnSetRightPanelType 0x43cb3 hash ae25ef5e params:( UnderlyingType aType; );
	OnSetLeftPanelType 0x43ca9 hash f559e32b params:( UnderlyingType aType; );
	OnPopupMenuPopup_GroundItemSlot 0x43c98 hash 76d8edfe params:( SFPSUserWidget_GroundItem aSpriteView;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition; );
	OnPopupMenuPopup_GroundContainerSlot 0x43c85 hash d2d40052 params:( SFPSUserWidget_GroundItem aSpriteView;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition; );
	OnPopupMenuPopup_EquipItemSlot 0x43c75 hash b6dd9413 params:( SFPSUserWidget_EquipItem aSpriteView;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition; );
	OnPopupMenuPopup_CraftItemSlot 0x43c65 hash a3a6c5ff params:( SFPSUserWidget_GroundItem aSpriteView;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition; );
	OnPopupMenuPopup_CorpseItemSlot 0x43c54 hash 1c76bf7b params:( SFPSUserWidget_GroundItem aSpriteView;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition; );
	OnPopupMenuPopup_CorpseContainerSlot 0x43c41 hash 2c5147ef params:( SFPSUserWidget_GroundItem aSpriteView;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition; );
	OnOpenCloseRolloutManager 0x43c33 hash 28786636 params:( SFPSUserWidget_CraftRolloutMan aRolloutMan; );
	OnMouseRelease_GroundItemSlot 0x43c23 hash 4056ebab params:( SFPSUserWidget_GroundItem aSpriteView;None aButtonIndex;Vector2D aViewPortMousePosition;Vector2D aViewPortSize;None aViewPortScale; );
	OnMouseRelease_GroundContainerSlot 0x43c11 hash cf24921f params:( SFPSUserWidget_GroundItem aSpriteView;None aButtonIndex;Vector2D aViewPortMousePosition;Vector2D aViewPortSize;None aViewPortScale; );
	OnMouseRelease_EquipItemSlot 0x43c02 hash a8c1020 params:( SFPSUserWidget_EquipItem aSpriteView;Vector2D aViewPortMousePosition;Vector2D aViewPortSize;None aViewPortScale; );
	OnMouseRelease_CraftItemSlot 0x43bf3 hash f755420c params:( SFPSUserWidget_GroundItem aSpriteView;None aButtonIndex;Vector2D aViewPortMousePosition;Vector2D aViewPortSize;None aViewPortScale; );
	OnMouseRelease_CorpseItemSlot 0x43be3 hash e5f4bd28 params:( SFPSUserWidget_GroundItem aSpriteView;None aButtonIndex;Vector2D aViewPortMousePosition;Vector2D aViewPortSize;None aViewPortScale; );
	OnMouseRelease_CorpseContainerSlot 0x43bd1 hash 28a1d9bc params:( SFPSUserWidget_GroundItem aSpriteView;None aButtonIndex;Vector2D aViewPortMousePosition;Vector2D aViewPortSize;None aViewPortScale; );
	OnMouseLeave_GroundItemSlot 0x43bc2 hash 2ac18257 params:( SFPSUserWidget_GroundItem aSpriteView; );
	OnMouseLeave_EquipItemSlot 0x43bb4 hash 1968814c params:( SFPSUserWidget_EquipItem aSpriteView; );
	OnMouseEnter_GroundItemSlot 0x43ba5 hash 573c48c8 params:( SFPSUserWidget_GroundItem aSpriteView;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition; );
	OnMouseEnter_EquipItemSlot 0x43b97 hash 37bbd9d params:( SFPSUserWidget_EquipItem aSpriteView; );
	OnMouseDblClick_GroundItemSlot 0x43b87 hash 997a1262 params:( SFPSUserWidget_GroundItem aSpriteView;None aButtonIndex;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition; );
	OnMouseClick_GroundItemSlot 0x43b78 hash a71ddaf0 params:( SFPSUserWidget_GroundItem aSpriteView;None aButtonIndex;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition; );
	OnMouseClick_EquipItemSlot 0x43b6a hash e6dfaac5 params:( SFPSUserWidget_EquipItem aSpriteView;Vector2D aViewPortSpriteViewPosition; );
	Init 0x36c hash 7c86f919 params:( UserWidget aFormInventory; );
	EquipOrAddToInventoryItemFromGround 0x43b57 hash c9eb93b6 params:( SFPSBaseItem aItem; );
	Craft_Cancel 0x43b50 hash bf46e09a params:(  );
	Craft_Begin 0x43b49 hash a8a48e79 params:( Guid aCraftLibraryItemUID; );
};


instance 1ab5e0b7fc0
class SFPSAICharacterSet public : Object
{
	// Fields
	TArray Characters; // 0x28

};


instance 1ab5e0b7d80
class SFPSAICharacterSets public : Object
{
	// Fields
	TArray Elements; // 0x28

};


instance 1ab5e0b7b40
class SFPSItemSet public : Object
{
	// Fields
	TArray Elements; // 0x28
	DataTable* DataTable; // 0x38

};


instance 1ab5e0b7900
class SFPSItemSetStructSet public : Object
{
	// Fields
	TArray ItemSetStructs; // 0x28

};


instance 1ab5e0b76c0
class SFPSLocality public : Actor
{
	// Fields
	SFPSACLocality* LocalityComponent; // 0x218

};


instance 1ab5e0b7480
class SFPSLockBreakingHandler public : Object
{
	// Fields
	UserWidget* FormLockBreaking; // 0x48

	// Functions
	Show 0x43d5f hash 7c8c5c26 params:(  );
	Init 0x36c hash 7c86f919 params:( UserWidget aFormLockBreaking;Class aLockBlueprint; );
	Hide 0x435fd hash 7c8656bf params:(  );
};


instance 1ab5e0b7240
class SFPSLootBox public : SFPSBaseLocationCraftItem
{
	// Fields
	bool bIsOpen; // 0x2b0
	SFPSACItemInventory* Inventory; // 0x2c0
	AnimMontage* OpenAnim; // 0x2c8
	AnimMontage* CloseAnim; // 0x2d0
	ESFPSLootBoxState State; // 0x2d8
	bool bAcceptsItemsFromCharacters; // 0x2d9
	bool bClientBusy; // 0x2da
	SoundCue* ContainerCue; // 0x2e0
	SoundCue* LockCue; // 0x2e8
	TArray LootTraces; // 0x300

	// Functions
	PlayContSound 0x43d80 hash 67cf2d78 params:(  );
	OnRep_State 0x43d79 hash e6992429 params:(  );
	OnRep_IsOpen 0x43d72 hash a24e0b16 params:(  );
	AvailableForOpen 0x43d69 hash 486d1a3f params:( Actor ACharacter;None aDebugMode;None ReturnValue; );
};


instance 1ab5e0b7000
class SFPSLootBoxAnimInstance public : AnimInstance
{
	// Fields
	SFPSLootBox* LootBox; // 0x268
	bool bOpen; // 0x270

};


instance 1ab5e0b6dc0
class SFPSLootLibrary public : Object
{
	// Fields
	TArray LootSpawners; // 0x28
	TArray BoxSpawners; // 0x38
	TArray Missions; // 0x48
	TArray Mobs; // 0x58

};


instance 1ab5e0b6b80
class SFPSMainInterfaceHandler public : Object
{
	// Fields
	SFPSHUD* HUD; // 0xc8
	UserWidget* FormHUD; // 0xd0
	UserWidget* FormNDA; // 0xd8
	UserWidget* FormInGameMenu; // 0xe0

	// Functions
	Suicide_Ok 0x43e2b hash 69f89ec4 params:(  );
	Suicide 0x43e26 hash 117103eb params:(  );
	ShowSettings 0x43e1f hash 5ab81817 params:(  );
	ShowInGameMenu 0x43e17 hash a39330ec params:(  );
	SetDefColorAllLabels 0x43e0c hash 3e2cacb params:(  );
	QuitGame_Ok 0x43e05 hash f0af35b params:(  );
	QuitGame 0x43e00 hash 682ec7e2 params:(  );
	LeaveServer_Ok 0x43df8 hash ed783a42 params:(  );
	LeaveServer 0x43df1 hash 4c542029 params:(  );
	Init 0x36c hash 7c86f919 params:( UserWidget aFormInGameMenu;UserWidget aFormHUD;UserWidget aFormNDA; );
	HideInGameMenu 0x43de9 hash ec35fec5 params:(  );
	Dlg_Cancel 0x43de3 hash afb839e1 params:(  );
	BtnSuicideOnHovered 0x43dd8 hash 48419679 params:(  );
	BtnSettingsOnHovered 0x43dcd hash 339c4f64 params:(  );
	BtnResumeOnHovered 0x43dc3 hash c742c164 params:(  );
	BtnQuitGameOnHovered 0x43db8 hash adc680d0 params:(  );
	BtnLeaveServerOnHovered 0x43dab hash 7e32ba77 params:(  );
};


instance 1ab5e0b6940
class SFPSMissionMarker public : Object
{
	// Fields

};


instance 1ab5e0b6700
class SFPSLootStashMarker public : Object
{
	// Fields

};


instance 1ab5e0b64c0
class SFPSTacticalMarker public : Object
{
	// Fields

};


instance 1ab5e0b6280
class SFPSGreenAreaMarker public : Object
{
	// Fields

};


instance 1ab5e0b6040
class SFPSBaseMarker public : Object
{
	// Fields

};


instance 1ab5e0b5e00
class SFPSLocationMarker public : Object
{
	// Fields

};


instance 1ab5e0b5bc0
class SFPSSquadMarker public : Object
{
	// Fields

};


instance 1ab5e0b5980
class SFPSMapHandler public : Object
{
	// Fields
	bool bVisible; // 0x238
	UserWidget* FormMap; // 0x240
	SFPSUserWidget_MapElement* MapElement_Player; // 0x248
	SFPSUserWidget_MapElement* MapElement_Mission; // 0x250
	SFPSUserWidget_MapElement* MapElement_TacticalMarker; // 0x258
	SFPSUserWidget_MapElement* MapElement_DeadMarker; // 0x260
	SFPSUserWidget_MapElement* MapElement_LootStash; // 0x268
	SFPSUserWidget_MapElement* MapElement_GreenArea; // 0x270
	SFPSUserWidget_MapElement* MapElement_Base; // 0x278
	SFPSUserWidget_MapElement* MapElement_Location; // 0x280
	SFPSUserWidget_MapElement* MapElement_SquadMarker; // 0x288
	TArray TacticalMarkers; // 0x290
	SFPSTacticalMarker* DeadMarker; // 0x2a0
	TArray LootStashMarkers; // 0x2a8
	TArray MissionMarkers; // 0x2b8
	TArray GreeenAreaMarkers; // 0x2c8
	TArray BaseMarkers; // 0x2d8
	TArray LocalitiesMarkers; // 0x2e8
	TArray SquadMarkers; // 0x2f8

	// Functions
	UpdateSelectRespawnLocality 0x43ef5 hash 5d75d729 params:( Vector2D aMousePos;Vector2D aViewPortSize;None aViewPortScale; );
	UpdateHintPosition 0x43eeb hash bd2788b0 params:( SFPSUserWidget_MapElement aSelectedMapElement;Vector2D aViewPortSpriteViewPosition;Vector2D aViewPortMousePosition; );
	OnSquadLeave 0x43ee4 hash 8fb0ea2d params:(  );
	OnSelectRespawnType 0x43ed9 hash ed851b84 params:( None aRandom; );
	OnSelectLocationNotAvailable 0x43eca hash 2e37aaed params:(  );
	OnRespawn 0x43ec4 hash 4ed78c2 params:(  );
	OnMouseLeaveMapElement 0x43eb8 hash c972b8c0 params:( SFPSUserWidget_MapElement aSelectedMapElement; );
	OnMouseEnterMapElement 0x43eac hash d15a7491 params:( SFPSUserWidget_MapElement aSelectedMapElement; );
	OnMouseClickMapElement 0x43ea0 hash a3c60db9 params:( SFPSUserWidget_MapElement aSelectedMapElement; );
	MouseUp 0x43e9b hash 36767cd3 params:( Vector2D aMousePos; );
	MouseDown 0x43e95 hash adffb6a6 params:( Vector2D aMousePos; );
	LeaveServer_Ok 0x43df8 hash ed783a42 params:(  );
	LeaveServer 0x43df1 hash 4c542029 params:(  );
	Init 0x36c hash 7c86f919 params:( UserWidget aFormMap; );
	Dlg_Cancel 0x43de3 hash afb839e1 params:(  );
	CheckZoom 0x43e8f hash b6d8c6a8 params:( Vector2D aMousePos;None aWheelUp;Vector2D aViewPortSize;None aViewPortScale; );
	CheckMouseMove 0x43e87 hash 1c019ec3 params:( Vector2D aMousePos;Vector2D aViewPortSize;None aViewPortScale; );
	CharacterCenter 0x43e7e hash 47fe2a93 params:(  );
};


instance 1ab5e0b5740
class SFPSMessageHandler public : Object
{
	// Fields
	UserWidget* MessageForm; // 0x28
	UserWidget* MessageItemForm; // 0x70
	UserWidget* FormDlg_Timer; // 0xd0
	UserWidget* FormDlg_TimerInf; // 0x100
	UserWidget* FormDead; // 0x120
	UserWidget* SectorActivityForm; // 0x160
	UserWidget* FormDlg_OkCancel; // 0x200
	UserWidget* FormDlg_Ok; // 0x220
	UserWidget* FormDlg_InputBox; // 0x230

	// Functions
	OnInputBoxEnter 0x43f2b hash 7cbeab19 params:( None InText;ETextCommit InTextAction; );
	MessageDlg_Ok_Hide 0x43f21 hash e0188493 params:(  );
	Init 0x36c hash 7c86f919 params:( UserWidget aInputBoxForm;UserWidget aItemMessageForm;UserWidget aFormSectorActivity;UserWidget aFormDead;MaterialInstanceDynamic aFormDlg_Timer_Progress;UserWidget aFormDlg_Timer;UserWidget aFormDlg_OkCancel;UserWidget aMessageForm;MaterialInstanceDynamic aFormDlg_TimerInf_Progress;UserWidget aFormDlg_TimerInf;UserWidget aFormDlg_Ok; );
	AddSectorActivityMessage 0x43f14 hash 33c62170 params:( None aText;UnderlyingType aType;None aStringTag;UnderlyingType aLoginTypeTag; );
	AddMessage 0x43f0e hash 21ef0e53 params:( None aMSG;None aError; );
};


instance 1ab5e0b5500
class SFPSOBCharacterCreationClient public : OnlineBeaconClient
{
	// Fields
	DelegateProperty SteamAuthCallback; // 0x2c0 property 0x1ab71a1f100 hash 0xe1aec4e5

	// Functions
	SteamAuthCallbackFunc_Create_DLC0 0x43f73 hash 8b6b37df params:( VaRestRequestJSON aRequest; );
	SteamAuthCallbackFunc_Create 0x43f64 hash 1a5a83fd params:( VaRestRequestJSON aRequest; );
	SteamAuthCallbackFunc_Check_DLC0 0x43f53 hash 399df29 params:( VaRestRequestJSON aRequest; );
	SteamAuthCallbackFunc_Check 0x43f44 hash c6f507 params:( VaRestRequestJSON aRequest; );
	Server_PlayerExist 0x960c hash b2d73775 params:( UnderlyingType aLoginType;None aLogin;None aPassword;None aSteamId;None aAdminPassword; );
	Server_PlayerCreate 0x9601 hash 8a4c41c params:( UnderlyingType aLoginType;None aLogin;None aPassword;None aSteamId;UnderlyingType aSkin; );
	Server_Ping 0x95fa hash f5f11369 params:( None aServerName; );
	Client_SteamError 0x95f0 hash a7d18c47 params:(  );
	Client_Pong 0x95e9 hash ad2728d7 params:( None aServerName; );
	Client_PlayerLogin 0x95df hash 444770a9 params:( None aHash; );
	Client_PlayerCreate 0x95d4 hash b86c2804 params:( None aDLC0Exist; );
	Client_PlayerBanned 0x95c9 hash b4e88398 params:(  );
	Client_PlayerAlredyLogged 0x95bb hash 2405a2c3 params:(  );
	Client_MaxPlayers 0x95b1 hash 5643ab89 params:(  );
	Client_IncorrectLoginOrPassword 0x95a0 hash 33892779 params:(  );
	Client_EnterPassword_Steam 0x9592 hash f291a5ad params:(  );
};


instance 1ab5e0b52c0
class SFPSOBCharacterCreationHostObj public : OnlineBeaconHostObject
{
	// Fields

};


instance 1ab5e0b5080
class SFPSPatrolPoint public : Object
{
	// Fields

};


instance 1ab5e0b4e40
class SFPSPatrol public : Actor
{
	// Fields
	TArray PatrolPoints; // 0x228
	SFPSAICharacterSets* CharacterSets; // 0x238
	SFPSAIConfig* AIConfig; // 0x240
	SFPSACRoute* Route; // 0x248
	int MaxPatrolPoints; // 0x250
	float TimeDeviation; // 0x254
	float DeadTimeMin; // 0x258
	float DeadTimeMax; // 0x25c

};


instance 1ab5e0b4c00
class SFPSPhysicalMaterial public : PhysicalMaterial
{
	// Fields
	float EnergyDrain; // 0x80
	bool bDropWoodLogs; // 0x84
	SFPSBaseItem* WoodLogsRef; // 0x88
	int WoodLogsCount; // 0x90
	int NeedAttackCountForWoodLogsDrop; // 0x94
	SFPSPhysMatSoundTable* PhysMaterialProp; // 0x98

};


instance 1ab5e0bdc00
class SFPSPlayerController public : PlayerController
{
	// Fields
	DelegateProperty SteamDLCExistCallback; // 0x56c property 0x1ab71a37100 hash 0xe1aec4e5

	// Functions
	SteamDLCExistFunc 0x44255 hash b8847f2b params:( VaRestRequestJSON aRequest; );
	ServerRespawnAfterDead 0x8ecd hash b66e543c params:( SFPSLocality aLocality;Guid aClientDeadMarkerUID; );
	ServerKickMe 0x9762 hash 872d5e90 params:(  );
	RespawnAfterDead 0x4424c hash 3b4cf8c5 params:(  );
};


instance 1ab5e0bd780
class SFPSProjectile public : Actor
{
	// Fields
	float Ballistics_AirDensity; // 0x2e0
	bool bDrawTrajectory; // 0x2e4
	int DrawTrajectoryLifeTime; // 0x2e8
	bool bAddDebugInfoToLog; // 0x2ec

};


instance 1ab5e0bd540
class SFPSProjectileGrenade public : SFPSBaseMissileProjectile
{
	// Fields
	float DelayTimer; // 0x37c
	float Damage; // 0x380
	float AbsoluteDamageRadius; // 0x384
	float DecreasingDamageRadius; // 0x388
	ParticleSystem* ExplosionParticles; // 0x390
	ParticleSystem* ExplosionWaterParticles; // 0x398
	SoundCue* ExplosionSoundCue; // 0x3a0
	bool bDrawDebugInfo; // 0x3a8
	bool bAddDebugInfoToLog; // 0x3a9

};


instance 1ab5e0bd300
class SFPSRecoveryItem public : SFPSHandheldItem
{
	// Fields
	float RecoverHealth; // 0x3c8
	float RecoverFood; // 0x3cc
	float RecoverWater; // 0x3d0

};


instance 1ab5e0bd0c0
class SFPSRepTestActor public : Actor
{
	// Fields
	int GenInterval; // 0x230
	int CodeRepValue; // 0x234

};


instance 1ab5e0bce80
class SFPSRoute public : Actor
{
	// Fields
	SFPSACRoute* Root; // 0x218

};


instance 1ab5e0bcc40
class SFPSSaver public : Object
{
	// Fields
	TArray CharacterCacheList; // 0x38
	TArray CharactersForSave; // 0x48

};


instance 1ab5e0bca00
class SFPSServerListHandler public : Object
{
	// Fields
	DelegateProperty VaRestCallback0; // 0x228 property 0x1ab71a38200 hash 0xe1aec4e5
	DelegateProperty VaRestCallback1; // 0x238 property 0x1ab71a38280 hash 0xe1aec4e5
	DelegateProperty VaRestCallback2; // 0x248 property 0x1ab71a38300 hash 0xe1aec4e5
	DelegateProperty VaRestCallback3; // 0x258 property 0x1ab71a38380 hash 0xe1aec4e5
	DelegateProperty VaRestCallback4; // 0x268 property 0x1ab71a38400 hash 0xe1aec4e5
	UserWidget* FormServerList; // 0x3e0
	SFPSUserWidget_ServerListItem* frmServerListItem; // 0x3e8
	TArray ServerList; // 0x3f0

	// Functions
	VaRestCallbackFunc 0x44413 hash a336ed53 params:( VaRestRequestJSON aRequest; );
	SortByRegionUnhovered 0x44407 hash 33070b3c params:(  );
	SortByRegionHovered 0x443fc hash 920f4a19 params:(  );
	SortByRegion 0x443f5 hash b1b9076c params:(  );
	SortByPlayerCountUnhovered 0x443e7 hash 7208038e params:(  );
	SortByPlayerCountHovered 0x443da hash 6d7205eb params:(  );
	SortByPlayerCount 0x443d0 hash 24af4b7e params:(  );
	SortByPingUnhovered 0x443c5 hash 1f369d26 params:(  );
	SortByPingHovered 0x443bb hash aa7d5983 params:(  );
	SortByPing 0x443b5 hash c073fa16 params:(  );
	SortByNameUnhovered 0x443aa hash 6b6bc799 params:(  );
	SortByNameHovered 0x443a0 hash 326f4b36 params:(  );
	SortByName 0x4439a hash c072bf29 params:(  );
	SortByLastTimeUnhovered 0x4438d hash fb1c4cdb params:(  );
	SortByLastTimeHovered 0x44381 hash 1e5997f8 params:(  );
	SortByLastTime 0x44379 hash 635ac22b params:(  );
	SortByFavoritesUnhovered 0x4436c hash 7f2b9eab params:(  );
	SortByFavoritesHovered 0x44360 hash 83ca35c8 params:(  );
	SortByFavorites 0x44357 hash f12c49fb params:(  );
	ShowAdvancedInfo 0x4434e hash 5ffc7928 params:(  );
	ShowAdvancedFilter 0x44344 hash 49a8dbc2 params:(  );
	OnSetFavorite 0x4433c hash 71a9842e params:( None aIndex;None aChecked; );
	OnServerDblClick 0x44333 hash 2813dd31 params:( None aIndex; );
	OnSelectServer 0x427d4 hash 9defa879 params:( None aIndex; );
	OnSelectPassword 0x4432a hash e1f5f955 params:( None aChecked; );
	OnSelectOfficial 0x44321 hash 57843bbf params:( None aChecked; );
	OnSelectCommunity 0x44317 hash 45fbc9c7 params:( None aChecked; );
	OnSelectCameraTypeTPS 0x4430b hash 9f115384 params:( None aChecked; );
	OnSelectCameraTypeFPSTPS 0x442fe hash 9e960c2d params:( None aChecked; );
	OnSelectCameraTypeFPS 0x442f2 hash 9f1117f6 params:( None aChecked; );
	OnRentServer 0x427bc hash 30bae732 params:(  );
	OnRefresh 0x442ec hash 4036371 params:(  );
	OnJoinByIP 0x442e6 hash 2acb8686 params:(  );
	OnJoin 0x442e2 hash c8179012 params:(  );
	OnFilterChanged 0x442d9 hash 9b161c32 params:( None aText; );
	OnClearFilter 0x442d1 hash fc05b6ef params:(  );
	Init 0x36c hash 7c86f919 params:( UserWidget aFormServerList; );
	Hide 0x435fd hash 7c8656bf params:(  );
	AdvancedInfoOnUnHovered 0x442c4 hash f4285394 params:(  );
	AdvancedInfoOnHovered 0x442b8 hash 8755ac91 params:(  );
	AdvancedFilterOnUnHovered 0x442aa hash 5c631dae params:(  );
	AdvancedFilterOnHovered 0x4429d hash 7e43282b params:(  );
};


instance 1ab5e0bc7c0
class SFPSServerStatThreadManager public : Object
{
	// Fields

};


instance 1ab5e0bc580
class SFPSSettingsHandler public : Object
{
	// Fields
	UserWidget* FormSettings; // 0x6c0
	SFPSUserWidget_SettingsHotKey* FormHotKey; // 0x6c8

	// Functions
	ShowVideoSettings 0x448de hash 5f76ecce params:(  );
	ShowSoundSettings 0x448d4 hash 953c4900 params:(  );
	ShowMouseSettings 0x448ca hash 41b356a0 params:(  );
	ShowGameSettings 0x448c1 hash 7660af11 params:(  );
	ShowControlSettings 0x448b6 hash a9a7ddb8 params:(  );
	Show 0x43d5f hash 7c8c5c26 params:(  );
	SetSoundClassVolume 0x448ab hash 58d88e28 params:( None ClassName;None fVolume;None bMute; );
	SetMediumVideoSettings 0x4489f hash 514d39ba params:(  );
	SetLowVideoSettings 0x44894 hash f99e05ab params:(  );
	SetHotKey 0x4488e hash 7ddea7e5 params:( InputKeySelector aKeySelector;InputChord aInputChord; );
	SetHighVideoSettings 0x44883 hash 90c88019 params:(  );
	SetEpicVideoSettings 0x44878 hash 4bfc9e9a params:(  );
	SetDefault_VideoSettings 0x4486b hash 60e31b7d params:(  );
	SetDefault_SoundSettings 0x4485e hash 96a877af params:(  );
	SetDefault_MouseSettings 0x44851 hash 431f854f params:(  );
	SetDefault_GameSettings 0x44844 hash 309a43e0 params:(  );
	SetDefault_ControlSettings 0x44836 hash b6da7427 params:(  );
	SetCheckBoxState 0x4482d hash e53cf9f9 params:( CheckBox aCheckBox;TextBlock aTextBlock;None aCheckState; );
	OnVideoVSyncOn 0x44825 hash 35124d69 params:( None bIsChanged; );
	OnVideoVSyncOff 0x4481c hash d75bf9e7 params:( None bIsChanged; );
	OnVideoFOVChanged 0x44812 hash dd92e34e params:( None aValue; );
	OnVideo_Textures_Medium 0x44805 hash e7bdbdbc params:( None bIsChanged; );
	OnVideo_Textures_Low 0x447fa hash bfd2ae4d params:( None bIsChanged; );
	OnVideo_Textures_High 0x447ee hash ba262b3b params:( None bIsChanged; );
	OnVideo_Textures_Epic 0x447e2 hash ba24a41c params:( None bIsChanged; );
	OnVideo_Shadows_Medium 0x447d6 hash e468a931 params:( None bIsChanged; );
	OnVideo_Shadows_Low 0x447cb hash f4df45e2 params:( None bIsChanged; );
	OnVideo_Shadows_High 0x447c0 hash 90c5b570 params:( None bIsChanged; );
	OnVideo_Shadows_Epic 0x447b5 hash 90c42e51 params:( None bIsChanged; );
	OnVideo_PostProcessing_Medium 0x447a5 hash 5c34a0bb params:( None bIsChanged; );
	OnVideo_PostProcessing_Low 0x44797 hash 371159ac params:( None bIsChanged; );
	OnVideo_PostProcessing_High 0x44788 hash 193a427a params:( None bIsChanged; );
	OnVideo_PostProcessing_Epic 0x44779 hash 1938bb5b params:( None bIsChanged; );
	OnVideo_Foliage_Medium 0x4476d hash 570ee7cf params:( None bIsChanged; );
	OnVideo_Foliage_Low 0x44762 hash 8e16d940 params:( None bIsChanged; );
	OnVideo_Foliage_High 0x44757 hash 50efb48e params:( None bIsChanged; );
	OnVideo_Foliage_Epic 0x4474c hash 50ee2d6f params:( None bIsChanged; );
	OnVideo_Effects_Medium 0x44740 hash f450d6f8 params:( None bIsChanged; );
	OnVideo_Effects_Low 0x44735 hash 31adf109 params:( None bIsChanged; );
	OnVideo_Effects_High 0x4472a hash 6769c577 params:( None bIsChanged; );
	OnVideo_Effects_Epic 0x4471f hash 67683e58 params:( None bIsChanged; );
	OnVideo_Distance_Medium 0x44712 hash c371a4c3 params:( None bIsChanged; );
	OnVideo_Distance_Low 0x44707 hash 3259ab4 params:( None bIsChanged; );
	OnVideo_Distance_High 0x446fb hash 67d6a482 params:( None bIsChanged; );
	OnVideo_Distance_Epic 0x446ef hash 67d51d63 params:( None bIsChanged; );
	OnVideo_AntiAliasing_Medium 0x446e0 hash ecfa474c params:( None bIsChanged; );
	OnVideo_AntiAliasing_Low 0x446d3 hash 227121dd params:( None bIsChanged; );
	OnVideo_AntiAliasing_High 0x446c5 hash 709310cb params:( None bIsChanged; );
	OnVideo_AntiAliasing_Epic 0x446b7 hash 709189ac params:( None bIsChanged; );
	OnSoundMusicChanged 0x446ac hash d387fbf6 params:( None aValue; );
	OnSoundMenuChanged 0x446a2 hash dc5c234a params:( None aValue; );
	OnSoundEffectsChanged 0x44696 hash 22010df5 params:( None aValue; );
	OnSoundCommonChanged 0x4468b hash 940f3de params:( None aValue; );
	OnSound_MusicOn 0x44682 hash 849dd9e8 params:( None bIsChanged; );
	OnSound_MusicOff 0x44679 hash 18591646 params:( None bIsChanged; );
	OnSound_MenuOn 0x44671 hash 9e077cdc params:( None bIsChanged; );
	OnSound_MenuOff 0x44668 hash 5ef717ba params:( None bIsChanged; );
	OnSound_EffectsOn 0x4465e hash b5c7a447 params:( None bIsChanged; );
	OnSound_EffectsOff 0x44654 hash 6ebc2c85 params:( None bIsChanged; );
	OnSound_CommonOn 0x4464b hash 239dcb0 params:( None bIsChanged; );
	OnSound_CommonOff 0x44641 hash 4975720e params:( None bIsChanged; );
	OnSetLoc_Ru 0x4463a hash 649dd312 params:( None bIsChecked; );
	OnSetLoc_Fr 0x44633 hash 649dd183 params:( None bIsChecked; );
	OnSetLoc_Es_LatAm 0x44629 hash 99ec90b1 params:( None bIsChecked; );
	OnSetLoc_En 0x44622 hash 649dd15e params:( None bIsChecked; );
	OnSetLoc_De 0x4461b hash 649dd134 params:( None bIsChecked; );
	OnSetCameraPositionRight 0x4460e hash 953e23ea params:( None bIsChecked; );
	OnSetCameraPositionLeft 0x44601 hash 9fa93157 params:( None bIsChecked; );
	OnSetCameraPositionAuto 0x445f4 hash 9fa36f05 params:( None bIsChecked; );
	OnMouseSensitivityChanged_TP 0x445e5 hash 36112d03 params:( None aValue; );
	OnMouseSensitivityChanged_FP 0x445d6 hash 36112b35 params:( None aValue; );
	OnMouseSensitivityChanged_Aiming 0x445c5 hash dac5e9b4 params:( None aValue; );
	OnMouseInvertOn 0x445bc hash d10b7a60 params:( None bIsChanged; );
	OnMouseInvertOff 0x445b3 hash f27ac5be params:( None bIsChanged; );
	OnChat_ShowPopupMessagesOn 0x445a5 hash 98901e8b params:( None bIsChecked; );
	OnChat_ShowPopupMessagesOff 0x44596 hash aa93ef49 params:( None bIsChecked; );
	OnChat_CloseAfterSendingOn 0x44588 hash cb8c660e params:( None bIsChecked; );
	OnChat_CloseAfterSendingOff 0x44579 hash 3d19272c params:( None bIsChecked; );
	OnBtnVideoUnhovered 0x4456e hash 16f4c26d params:(  );
	OnBtnVideoHovered 0x44564 hash e413810a params:(  );
	OnBtnVideoDefaultUnhovered 0x44556 hash 1dacb472 params:(  );
	OnBtnVideoDefaultHovered 0x44549 hash 1dad2dcf params:(  );
	OnBtnSoundUnhovered 0x4453e hash 565a4df params:(  );
	OnBtnSoundHovered 0x44534 hash a7a51efc params:(  );
	OnBtnSoundDefaultUnhovered 0x44526 hash c15c22a4 params:(  );
	OnBtnSoundDefaultHovered 0x44519 hash c9e76781 params:(  );
	OnBtnOkUnhovered 0x44510 hash 4bdc2430 params:(  );
	OnBtnOkHovered 0x44508 hash 9d21960d params:(  );
	OnBtnMouseUnhovered 0x444fd hash 40be667f params:(  );
	OnBtnMouseHovered 0x444f3 hash b4a0f89c params:(  );
	OnBtnMouseDefaultUnhovered 0x444e5 hash 1456d044 params:(  );
	OnBtnMouseDefaultHovered 0x444d8 hash 851a2d21 params:(  );
	OnBtnGameUnhovered 0x444ce hash fbbc9910 params:(  );
	OnBtnGameHovered 0x444c5 hash f69f52ed params:(  );
	OnBtnGameDefaultUnhovered 0x444b7 hash 727255b5 params:(  );
	OnBtnGameDefaultHovered 0x444aa hash c303a252 params:(  );
	OnBtnControlUnhovered 0x4449e hash f09bb897 params:(  );
	OnBtnControlHovered 0x44493 hash b052e4b4 params:(  );
	OnBtnControlDefaultUnhovered 0x44484 hash e5efd75c params:(  );
	OnBtnControlDefaultHovered 0x44476 hash 26168e39 params:(  );
	OnBtnCancelUnhovered 0x4446b hash dbc69d5c params:(  );
	OnBtnCancelHovered 0x44461 hash b83d439 params:(  );
	OnBtnApplyUnhovered 0x44456 hash 7fa44b5c params:(  );
	OnBtnApplyHovered 0x4444c hash 201e0239 params:(  );
	Init 0x36c hash 7c86f919 params:( UserWidget aFormSettings;aResolutions aResolutions;GameInstance aInstance; );
	Hide 0x435fd hash 7c8656bf params:(  );
	ChangeHotKeyState 0x44442 hash 3030ccc0 params:( InputKeySelector aKeySelector; );
	ApplyAndHide 0x4443b hash 46954b98 params:(  );
	Apply 0x44437 hash cd68e2b params:(  );
};


instance 1ab5e0bc340
class SFPSShootingRangeTarget public : Actor
{
	// Fields
	MeshComponent* MeshRef; // 0x218
	TextRenderComponent* lbInfo; // 0x220
	StaticMeshComponent* Target; // 0x228
	StaticMeshComponent* DamageClient; // 0x230
	StaticMeshComponent* DamageServer; // 0x238
	StaticMeshComponent* ClearTrigger; // 0x2e0

};


instance 1ab5e0bc100
class SFPSSingleton public : Object
{
	// Fields
	SFPSCraftLibrary* CraftLibrary; // 0x28
	SFPSActorLibrary* ActorLibrary; // 0x30
	SFPSServerStatThreadManager* ServerStatThreadManager; // 0x38
	TArray GreenAreas; // 0x40
	SFPSCraftLibrary* CraftLibraryBP; // 0x50
	SFPSActorLibrary* ActorLibraryBP; // 0x58
	SFPSCharacterDefaultBodyMeshes CharacterDefaultBodyMeshes; // 0x60
	TArray CharacterDefaultMeshes; // 0x80
	SFPSMaterialPair UnderwearMaterials; // 0x90
	TArray ShotRandomParams; // 0xb0
	SFPSMissionStaticParamsList MissionStaticParams; // 0xc0
	SFPSItemSetStruct CharacterDefaultTrousers; // 0xd0
	float FatigueRecover; // 0xe8
	float FatigueRun; // 0xec
	float FatigueSprint; // 0xf0
	float FatigueShotRecover; // 0xf4
	SFPSSmallArmsFatigue FatigueWeaponTypes; // 0xf8

};


instance 1ab5e0bbc80
class SFPSWeapon public : SFPSHandheldItem
{
	// Fields
	TArray FireModes; // 0x3f8
	int FireModeCutoff_ShotCount; // 0x408
	ESFPSWeaponFireMode CurrentFireMode; // 0x40c
	int CurrentFireAnim; // 0x410
	bool bUseBindDeviceLeft; // 0x428
	bool bBindDeviceLeftEnabled; // 0x429
	SoundCue* BindDeviceLeftSoundCue; // 0x430
	bool IsFiring; // 0x438
	float AttackRate; // 0x43c
	float LengthForWeaponBarrier; // 0x440
	SFPSCameraShake* FireShake; // 0x448
	ESFPSWeaponAnimInstanceType AnimationInstanceType; // 0x450
	SoundCue* FireCue; // 0x458
	SoundCue* EmptyClipCue; // 0x460
	SoundCue* SwitchModeCue; // 0x468
	SoundCue* WeaponUpCue; // 0x470
	SoundCue* WeaponDownCue; // 0x478
	SoundCue* WeaponSightCue; // 0x480

	// Functions
	WeapPlayFireEffects 0x4492c hash 5dab71ae params:(  );
	TimeBetweenAttacks 0x44922 hash ce9af8a9 params:( None ReturnValue; );
	Server_SyncMuzzle 0xac1c hash e7fb757f params:( Vector aLocation;Vector aDirection; );
	Server_SwitchFireMode 0xac10 hash 6615c818 params:(  );
	Server_SetBindDeviceLeftEnabled 0xabff hash 50120b2a params:( None bNewEnabled; );
	OnRep_FireMode 0x4491a hash f841b353 params:(  );
	OnRep_BindDeviceLeftEnabled 0x4490b hash f691942b params:(  );
	Client_DoFire 0xabf7 hash 7780fb7c params:( None aWeaponFireAnim; );
};


instance 1ab5e0bbec0
class SFPSSmallArms public : SFPSWeapon
{
	// Fields
	bool bRollback; // 0x4ac
	Transform SocketMuzzle; // 0x4b0
	Transform SocketCartridge; // 0x4e0
	Transform SocketDeviceBottom; // 0x510
	Transform SocketDeviceLeft; // 0x540
	FName SocketDeviceLeftOverride; // 0x570
	Transform SocketSight; // 0x580
	Transform SocketCamera; // 0x5b0
	SFPSAmmo* AmmoClass; // 0x600
	SFPSAmmo* LastAmmoClass; // 0x608
	ESFPSAmmoType LastAmmoType; // 0x610
	ESFPSShellType ShellType; // 0x611
	bool bAddShellImpulse; // 0x612
	ESFPSWeaponFatigueType FatigueType; // 0x613
	SFPSAmmoParameters AmmoParams; // 0x614
	float StartVelocity; // 0x628
	StaticMeshComponent* SightOpenRef; // 0x630
	StaticMeshComponent* SightCloseRef; // 0x638
	StaticMeshComponent* DeviceLeftMountRef; // 0x640
	int AmmoCount; // 0x648
	int MaxAmmo; // 0x64c
	float DamageMult; // 0x650
	bool bUseLastRoundStopper; // 0x654
	bool bIgnoreLastRoundStopperIfExistOnlyOneAmmo; // 0x655
	bool bLastRoundStopper; // 0x656
	bool bHammerCocked; // 0x657
	bool bReloadByOneAmmo; // 0x658
	AnimMontage* CharacterReloadAnim; // 0x660
	AnimMontage* CharacterReloadAnimWithLastRoundStopper; // 0x668
	AnimMontage* CharacterReloadAnimOnlyMagazine; // 0x670
	AnimMontage* CharacterReloadAnimOneAmmo; // 0x678
	AnimMontage* CharacterReloadAnimWithLastRoundStopperOneAmmo; // 0x680
	AnimMontage* CharacterReloadAnimProne; // 0x688
	AnimMontage* CharacterReloadAnimWithLastRoundStopperProne; // 0x690
	AnimMontage* CharacterReloadAnimOnlyMagazineProne; // 0x698
	AnimMontage* CharacterReloadAnimOneAmmoProne; // 0x6a0
	AnimMontage* CharacterReloadAnimWithLastRoundStopperOneAmmoProne; // 0x6a8
	AnimMontage* ReloadAnim; // 0x6b0
	AnimMontage* ReloadAnimWithLastRoundStopper; // 0x6b8
	AnimMontage* ReloadAnimOnlyMagazine; // 0x6c0
	AnimMontage* ReloadAnimOneAmmo; // 0x6c8
	AnimMontage* ReloadAnimWithLastRoundStopperOneAmmo; // 0x6d0
	AnimMontage* ReloadAnimProne; // 0x6d8
	AnimMontage* ReloadAnimWithLastRoundStopperProne; // 0x6e0
	AnimMontage* ReloadAnimOnlyMagazineProne; // 0x6e8
	AnimMontage* ReloadAnimOneAmmoProne; // 0x6f0
	AnimMontage* ReloadAnimWithLastRoundStopperOneAmmoProne; // 0x6f8
	AnimMontage* CharacterShotAnim; // 0x700
	AnimMontage* ShotAnim; // 0x708
	AnimMontage* ShotAnimForLastRoundStopper; // 0x710
	AnimMontage* HammerCockingAnim; // 0x718
	ParticleSystem* ShotParticle; // 0x720
	float FireShiftVertical; // 0x728
	float FireShiftHorizontal; // 0x72c
	float RollbackB; // 0x730
	float RollbackLR; // 0x734
	float RollbackLRMax; // 0x738
	CurveFloat* RollbackCurve; // 0x740
	SFPSProjectile* ProjectileClass; // 0x748
	float SpreadAngle; // 0x750
	bool DropShellArterShot; // 0x754

	// Functions
	Server_LoadAmmo 0x9a50 hash e420e205 params:( SFPSAmmo aAmmo; );
	OnRep_AmmoCount 0x4494d hash ccf79b params:(  );
	HasAmmo 0x44948 hash 94ab9d6b params:( None ReturnValue; );
	Client_MakeActive_CompleteTimer 0x44937 hash 30569b56 params:(  );
};


instance 1ab5e0bba40
class SFPSSoundBoxCopm public : BoxComponent
{
	// Fields
	int NumSound; // 0x400
	float ChancePlay; // 0x404
	int MaxSCount; // 0x408

};


instance 1ab5e0bb800
class SFPSUISoundTable public : Object
{
	// Fields
	SoundBase* UI_ClickWave; // 0x28
	SoundBase* UI_UnClickWave; // 0x30
	SoundBase* UI_HoverWave; // 0x38
	SoundBase* UI_ErrorWave; // 0x40
	SoundCue* BtnPressCue; // 0x48
	SoundCue* BtnHoverCue; // 0x50
	SoundCue* ImpossibleCue; // 0x58
	SoundCue* ItemPickUpCue; // 0x60
	SoundCue* ItemMovementCue; // 0x68
	SoundCue* ItemPutCue; // 0x70
	SoundCue* ItemSplitCue; // 0x78
	SoundCue* ItemGroupCue; // 0x80
	SoundCue* AmmoLoadCue; // 0x88
	SoundCue* ItemSellCue; // 0x90
	SoundCue* ItemBuyCue; // 0x98
	SoundCue* ChatSendCue; // 0xa0
	SoundCue* ChatCloseCue; // 0xa8
	SoundCue* MapUseCue; // 0xb0
	SoundCue* MapPinCue; // 0xb8
	SoundCue* Msg_IncomingCue; // 0xc0
	SoundCue* VoipRadioCue; // 0xc8
	SoundCue* SquadInvCue; // 0xd0
	SoundCue* SquadNewMemberCue; // 0xd8
	SoundCue* CraftBeginCue; // 0xe0
	SoundCue* CraftCancelCue; // 0xe8
	SoundCue* CraftCompleteCue; // 0xf0
	SoundCue* CraftItemStartCue; // 0xf8
	SoundCue* CraftItemSetCue; // 0x100
	SoundCue* CraftItemGetCue; // 0x108
	SoundCue* EncRadioAlarmCue; // 0x110
	SoundAttenuation* LocalAttenuationSettings; // 0x118
	SoundMix* UnderwaterSoundMix; // 0x120

	// Functions
	PlayUISound 0x44968 hash 5a97a802 params:( UnderlyingType itype;SoundCue UseSound;None bParam; );
};


instance 1ab5e0bb5c0
class SFPSVoiceSoundTable public : Object
{
	// Fields
	TArray VoiceSoundBases; // 0x28
	float fSayDelay; // 0x38
	float fPartingDelay; // 0x3c
	float ChanceToSay; // 0x40

};


instance 1ab5e0bb380
class SFPSVoiceList public : Object
{
	// Fields
	TArray VoiceList; // 0x28

};


instance 1ab5e0bb140
class SFPSPhysMatSoundTable public : Object
{
	// Fields
	SoundCue* StepCue; // 0x28
	SoundCue* StepCueAdd; // 0x30
	bool bWaterPM; // 0x38
	SoundCue* CarTiresCue; // 0x40
	SoundCue* AXHit; // 0x48
	SoundCue* CrowbarHit; // 0x50
	SoundCue* GunHit; // 0x58
	SoundCue* HandHit; // 0x60
	SoundCue* KnifeHit; // 0x68
	SoundCue* BatHit; // 0x70
	SoundCue* ButtHit; // 0x78
	bool bPlayHitAdd; // 0x80
	bool bPlayHitAddOnMove; // 0x81
	SoundCue* AddHit; // 0x88
	SoundCue* ExplHit; // 0x90
	ParticleSystem* HitParticle; // 0x98
	ParticleSystem* HitSteelArmParticle; // 0xa0
	ParticleSystem* HitArmorParticle; // 0xa8
	ParticleSystem* HitArmorSteelArmParticle; // 0xb0
	ParticleSystem* HitChrFallParticle; // 0xb8
	bool bAlwaysPlayHitChrStepParticle; // 0xc0
	ParticleSystem* HitChrStepParticle; // 0xc8
	SoundCue* SlideCue; // 0xd0
	SoundCue* BodyFall; // 0xd8

};


instance 1ab5e0baf00
class SFPSSoundHandler public : Object
{
	// Fields
	SFPSAmbientSoundManager* AmbientSoundManager; // 0x28

	// Functions
	WeatherAmbUpdate 0x449af hash 786b3188 params:( None DeltaTime; );
	UnRegisterAmbSound 0x449a5 hash cf8a3c26 params:( SFPSAmbientSound AmbientSound;None ReturnValue; );
	SetRoom 0x449a0 hash ecdc4fee params:( None fVolume; );
	RegisterAmbSound 0x44997 hash 7b5f583 params:( SFPSAmbientSound AmbientSound;None ReturnValue; );
};


instance 1ab5e0bacc0
class SFPSAmbientSoundManager public : Object
{
	// Fields
	TArray ASList_BaseAmbSounds; // 0x28
	TArray ASList_AmbSounds; // 0x38
	float WindScale; // 0x4c
	float WindSpeed; // 0x58

	// Functions
	WeatherUpdate 0x449c5 hash b19582b8 params:( None DeltaTime; );
	UnRegisterAmbSound 0x449a5 hash cf8a3c26 params:( SFPSAmbientSound AmbientSound;None ReturnValue; );
	SetRoom 0x449a0 hash ecdc4fee params:( None fVolume; );
	RegisterAmbSound 0x44997 hash 7b5f583 params:( SFPSAmbientSound AmbientSound;None ReturnValue; );
};


instance 1ab5e0baa80
class SFPSSoundTrigger public : Actor
{
	// Fields
	float InRoomValue; // 0x220
	SFPSGameInstance* FGameInstance; // 0x228

	// Functions
	TriggerExit 0x42f66 hash 3c8f2713 params:( PrimitiveComponent OverlappedComponent;Actor OtherActor;PrimitiveComponent OtherComp;None OtherBodyIndex; );
	TriggerEnter 0x42f5f hash ce6ebaf7 params:( PrimitiveComponent OverlappedComponent;Actor OtherActor;PrimitiveComponent OtherComp;None OtherBodyIndex;None bFromSweep;HitResult SweepResult; );
};


instance 1ab5e0ba840
class SFPSSplitHandler public : Object
{
	// Fields
	UserWidget* FSplitForm; // 0x28

	// Functions
	OnUp 0x44a9e hash 7c8a40c7 params:(  );
	OnSplit_LootBoxItem_OnEdTextSet 0x44a8d hash e1ae8619 params:( None Text;ETextCommit CommitMethod; );
	OnSplit_LootBoxItem_Ok 0x44a81 hash e007343c params:(  );
	OnSplit_LootBoxItem_Cancel 0x44a73 hash 204a19e8 params:(  );
	OnSplit_InventoryItem_OnEdTextSet 0x44a61 hash 472cb600 params:( None Text;ETextCommit CommitMethod; );
	OnSplit_InventoryItem_Ok 0x44a54 hash f9dc6c43 params:(  );
	OnSplit_InventoryItem_Cancel 0x44a45 hash 1279fd6f params:(  );
	OnSplit_GroundItem_OnEdTextSet 0x44a35 hash 6f8a2261 params:( None Text;ETextCommit CommitMethod; );
	OnSplit_GroundItem_Ok 0x44a29 hash 67019f84 params:(  );
	OnSplit_GroundItem_Cancel 0x44a1b hash 2998e930 params:(  );
	OnSplit_CellItem_OnEdTextSet 0x44a0c hash 5b760212 params:( None Text;ETextCommit CommitMethod; );
	OnSplit_CellItem_Ok 0x44a01 hash b23fcc15 params:(  );
	OnSplit_CellItem_Cancel 0x449f4 hash a4cf641 params:(  );
	OnMin 0x449f0 hash dd23726 params:(  );
	OnMax 0x449ec hash dd23628 params:(  );
	OnEdTextChanged 0x449e3 hash 1766cd9a params:( None Text; );
	OnDown 0x449df hash c814479a params:(  );
	Init 0x36c hash 7c86f919 params:( UserWidget aSplitForm; );
};


instance 1ab5e0ba600
class SFPSSteelArms public : SFPSWeapon
{
	// Fields
	SceneComponent* DamagePoint0Ref; // 0x4a0
	SceneComponent* DamagePoint1Ref; // 0x4a8
	SceneComponent* DamagePoint2Ref; // 0x4b0
	AnimMontage* CharacterShotAnimLeftStand; // 0x590
	AnimMontage* CharacterShotAnimRightStand; // 0x598
	AnimMontage* CharacterShotAnimLeftRun; // 0x5a0
	AnimMontage* CharacterShotAnimRightRun; // 0x5a8
	SFPSCameraShake* DamageShake; // 0x5b0
	float BaseDamage; // 0x5b8
	bool bAddDebugInfoToLog; // 0x5bc

};


instance 1ab5e0ba3c0
class SFPSTradeList public : Object
{
	// Fields
	SFPSTradeGroupList SellList; // 0x28
	SFPSTradeGroupList BuyList; // 0x38

};


instance 1ab5e0ba180
class SFPSArrayContainer public : Object
{
	// Fields
	TArray arr; // 0x28

};


instance 1ab5e0b9f40
class SFPSDamageType_Projectile public : DamageType
{
	// Fields

};


instance 1ab5e0b9ac0
class SFPSDamageType_Fall public : DamageType
{
	// Fields

};


instance 1ab5e0b9880
class SFPSDamageType_SteelArms public : DamageType
{
	// Fields

};


instance 1ab5e0b9640
class SFPSDamageType_Grenade public : DamageType
{
	// Fields

};


instance 1ab5e0bfdc0
class SFPSUseObjectHandler public : Object
{
	// Fields
	UserWidget* FUseObjectForm; // 0x28

	// Functions
	Init 0x36c hash 7c86f919 params:( UserWidget aUseObjectForm; );
};


instance 1ab5e0bfb80
class SFPSUserWidget_AdminPanel_Player public : UserWidget
{
	// Fields
	DelegateProperty OnSelectEvent; // 0x270 property 0x1ab71b25f00 hash 0xe1aec4e5

	// Functions
	OnUnHovered 0x44d36 hash b3096552 params:(  );
	OnHovered 0x44d30 hash 1aab36cf params:(  );
	OnClicked 0x44d2a hash 91dc1811 params:(  );
};


instance 1ab5e0bf700
class SFPSUserWidget_ChatBox public : UserWidget
{
	// Fields
	SlateFontInfo Font; // 0x268

	// Functions
	ScrollToEnd 0x44d49 hash 84312d8e params:(  );
};


instance 1ab5e0bf4c0
class SFPSUserWidget_CraftRollout public : UserWidget
{
	// Fields
	DelegateProperty OnBeginCraftEvent; // 0x2b0 property 0x1ab71b25e00 hash 0xe1aec4e5

	// Functions
	OnbtnCraftClick 0x44d5f hash 82aaad1c params:(  );
};


instance 1ab5e0bf280
class SFPSUserWidget_CraftRolloutItem public : UserWidget
{
	// Fields

};


instance 1ab5e0bf040
class SFPSUserWidget_CraftRolloutMan public : UserWidget
{
	// Fields

};


instance 1ab5e0bee00
class SFPSUserWidget_EquipItem public : CanvasPanel
{
	// Fields
	SFPSBaseItem* FTagObject; // 0x130
	ESFPSItemSlotType FItemSlotType; // 0x138
	Object* SpriteView; // 0x140

};


instance 1ab5e0be740
class SFPSUserWidget_GroundItem public : UserWidget
{
	// Fields
	ESFPSGroundScrollBoxType ScrollBoxType; // 0x230
	SFPSBaseItem* FTagObject0; // 0x238
	SFPSBaseItem* FTagObject1; // 0x240
	SFPSBaseItem* FTagObject2; // 0x248
	float DblClickTimer; // 0x250

};


instance 1ab5e0be500
class SFPSUserWidget_HUDChatBox public : UserWidget
{
	// Fields
	int LabelsCount; // 0x2a4
	SlateFontInfo Font; // 0x2a8

};


instance 1ab5e0be2c0
class SFPSUserWidget_HUDPlayer public : UserWidget
{
	// Fields

};


instance 1ab5e0be080
class SFPSUserWidget_MapElement public : UserWidget
{
	// Fields

};


instance 1ab5e0d49c0
class SFPSUserWidget_PopupMenuItem public : UserWidget
{
	// Fields

};


instance 1ab5e0d4780
class SFPSUserWidget_QuickSlot public : UserWidget
{
	// Fields
	bool bAvailable; // 0x288

};


instance 1ab5e0d4540
class SFPSUserWidget_QuickSlotHUD public : UserWidget
{
	// Fields

};


instance 1ab5e0d4300
class SFPSUserWidget_ServerListItem public : UserWidget
{
	// Fields
	DelegateProperty OnSelectEvent; // 0x2c0 property 0x1ab71b26e80 hash 0xe1aec4e5
	DelegateProperty OnDblClickedEvent; // 0x2d0 property 0x1ab71b26f00 hash 0xe1aec4e5
	DelegateProperty OnAddFavoriteEvent; // 0x2e0 property 0x1ab71b26f80 hash 0xe1aec4e5

	// Functions
	OnUnHovered 0x44d36 hash b3096552 params:(  );
	OnHovered 0x44d30 hash 1aab36cf params:(  );
	OnFavorite 0x44e67 hash 62941ce2 params:( None aChecked; );
	OnClicked 0x44d2a hash 91dc1811 params:(  );
};


instance 1ab5e0d40c0
class SFPSUserWidget_SettingsHotKey public : UserWidget
{
	// Fields

};


instance 1ab5e0d3e80
class SFPSUserWidget_SpriteViewInv public : UserWidget
{
	// Fields

};


instance 1ab5e0d3c40
class SFPSUserWidget_TraderItem public : UserWidget
{
	// Fields
	SFPSBaseItem* ItemClass; // 0x230
	DelegateProperty OnBuyEvent; // 0x278 property 0x1ab71b26e00 hash 0xe1aec4e5

	// Functions
	OnBuyClick 0x44e9a hash b8f97fb8 params:(  );
};


instance 1ab5e0d3a00
class SFPSVehicleMovementComponent public : WheeledVehicleMovementComponent
{
	// Fields

};


instance 1ab5e0d37c0
class SFPSVehicleMovementComponent4W public : WheeledVehicleMovementComponent4W
{
	// Fields

};


instance 1ab5e0d3580
class SFPSWeaponAnimInstance_AR public : SFPSBaseWeaponAnimInstance
{
	// Fields
	StaticMeshComponent* EmptyMagazine; // 0x280
	StaticMeshComponent* FullMagazine; // 0x288

};


instance 1ab5e0d3340
class SFPSWeaponAnimInstance_Gun public : SFPSBaseWeaponAnimInstance
{
	// Fields
	StaticMeshComponent* EmptyMagazine; // 0x280
	StaticMeshComponent* FullMagazine; // 0x288

};


instance 1ab5e0d3100
class SFPSWeaponAnimInstance_SG public : SFPSBaseWeaponAnimInstance
{
	// Fields
	StaticMeshComponent* Shell; // 0x288
	StaticMeshComponent* LeftShellFull; // 0x290
	StaticMeshComponent* LeftShellEmpty; // 0x298
	StaticMeshComponent* RightShellFull; // 0x2a0
	StaticMeshComponent* RightShellEmpty; // 0x2a8

};


instance 1ab5e0d2ec0
class SFPSWeaponAnimInstance_SR public : SFPSBaseWeaponAnimInstance
{
	// Fields
	StaticMeshComponent* Shell_BarrelFull; // 0x288
	StaticMeshComponent* Shell_BarrelEmpty; // 0x290
	StaticMeshComponent* Shell_Magazine; // 0x298
	StaticMeshComponent* EmptyMagazine; // 0x2a0
	StaticMeshComponent* FullMagazine; // 0x2a8

};


instance 1ab5e0d2c80
class SFPSWeaponMF_AdditionalCartridge public : SFPSBaseWeaponMF
{
	// Fields
	int AmmoCount; // 0x308
	ESFPSWeaponMFAdditionalCartrigeType CartridgeType; // 0x30c

};


instance 1ab5e0d2a40
class SFPSWeaponMF_HandguardDeviceLeft public : SFPSBaseWeaponMF
{
	// Fields
	bool bHasSpotLight; // 0x318
	bool bUsedSpecialMount; // 0x319
	bool bDeviceEnabled; // 0x31a

	// Functions
	Server_SetDeviceEnabled 0xad97 hash 9e6f8ea2 params:( None bNewEnabled; );
	OnRep_DeviceEnabled 0x437b9 hash eadaa6a3 params:(  );
};


instance 1ab5e0d2800
class SFPSWeaponMF_MuzzleAttachment public : SFPSBaseWeaponMF
{
	// Fields
	ParticleSystem* ShotParticle; // 0x308
	float Length; // 0x310

};


instance 1ab5e0d25c0
class SFPSWeaponMF_Sight public : SFPSBaseWeaponMF
{
	// Fields
	Vector CameraOrigin; // 0x328
	Vector CameraOriginSecondary; // 0x334
	Transform CollimatorTransform; // 0x340
	TArray Zooms; // 0x370

};


instance 1ab5e0d2380
class SFPSWearableItem public : SFPSBaseItem
{
	// Fields
	SFPSWearableItem* LinkedSetItem; // 0x2e8
	SkeletalMesh* ItemMesh; // 0x2f0
	TArray MaterialsOverride; // 0x2f8
	SkeletalMesh* HoodMesh_Shown; // 0x308
	TArray HoodMesh_Shown_MaterialsOverride; // 0x310
	SkeletalMesh* HoodMesh_Hidden; // 0x320
	TArray HoodMesh_Hidden_MaterialsOverride; // 0x328
	TArray ProtectedBones; // 0x338
	float Resists; // 0x348
	bool bUseHood; // 0x360
	bool bHoodShownBlocker; // 0x361
	bool bHoodHiddenBlocker; // 0x362

};


instance 1ab5e0d2140
class SFPSWeatherMan public : Actor
{
	// Fields
	float Wind_ForceMin; // 0x224
	float Wind_ForceMax; // 0x228
	float Wind_SpeedMax; // 0x22c
	float Wind_TimeActiveMin; // 0x230
	float Wind_TimeActiveMax; // 0x234
	float Wind_TimeInactiveMin; // 0x238
	float Wind_TimeInactiveMax; // 0x23c
	float Wind_DragConst; // 0x240
	float Wind_DragLinear; // 0x244
	float Wind_DragSq; // 0x248
	MaterialParameterCollection* ParametersCollection; // 0x278

};


instance 1ab5e0d1f00
class SFPSWheeledVehicle public : WheeledVehicle
{
	// Fields
	SFPSVehicleMovementComponent4W* SFPSMovementComponent; // 0x380
	SFPSBaseCharacter* LastDriver; // 0x388
	SFPSBaseCharacter* Passengers; // 0x390
	int InventorySize; // 0x3b0
	TArray Inventory; // 0x3b8
	SFPSACVehicleSoundSystem* SFPSACVehicleSoundSystem; // 0x3c8
	AudioComponent* EngineSoundComponent; // 0x3d0
	AudioComponent* WheelSoundComponent; // 0x3d8
	AudioComponent* StopSoundComponent; // 0x3e0
	AudioComponent* BumpSoundComponent; // 0x3e8
	AudioComponent* CrashSoundComponent; // 0x3f0
	AudioComponent* WheelFL_SC; // 0x3f8
	AudioComponent* WheelFR_SC; // 0x400
	AudioComponent* WheelRL_SC; // 0x408
	AudioComponent* WheelRR_SC; // 0x410

	// Functions
	TurnAtRate 0x44f89 hash aedd190f params:( None Value; );
	ServerExit 0xaf09 hash 1eac2316 params:( SFPSBaseCharacter aChar; );
	ServerEnter 0xaf02 hash f42b375a params:( SFPSBaseCharacter aChar; );
	OnRep_Passengers 0x44f80 hash edde89a3 params:(  );
	OnRep_InventoryChanged 0x42425 hash 7de4c4e0 params:(  );
	MoveRight 0x44f7a hash d90e0f1a params:( None Value; );
	MoveForward 0x44f73 hash c7e15dd1 params:( None Value; );
	LookUpAtRate 0x44f6c hash e4048ec0 params:( None Value; );
	IsControlledByLocalPlayer 0x42c7a hash a472e9ca params:( None ReturnValue; );
	HandbrakeStop 0x44f64 hash 26932f8b params:(  );
	HandbrakeStart 0x44f5c hash f8f8e613 params:(  );
	DriverExit 0x44f56 hash 7e0ee34b params:(  );
	ClientExit 0xaefc hash b79e41fe params:( SFPSBaseCharacter aChar;Vector aNewPos;Quat aNewQuat; );
	ClientEnter 0xaef5 hash ab613342 params:( SFPSBaseCharacter aChar;UnderlyingType aPosInCar; );
	BumpHitOverlap 0x44f4e hash 9d475cd7 params:( PrimitiveComponent HitComponent;Actor OtherActor;PrimitiveComponent OtherComponent;Vector NormalImpulse;HitResult Hit; );
};


instance 1ab5e0d1cc0
class SFPSWheeledVehicleAnimInstance public : VehicleAnimInstance
{
	// Fields
	SFPSWheeledVehicle* Car; // 0x978
	float WheelsSteerAngle; // 0x980

};


instance 1ab714555c0
struct SFPSACDoorParams 
{
	// Fields
	ESFPSDoorState DoorState; // 0x0
	bool bDirection; // 0x1

};


instance 1ab71455500
struct SFPSEncounterVariant 
{
	// Fields
	int MinCount; // 0x0
	int MaxCount; // 0x4

};


instance 1ab71455440
struct SFPSMissionVariant 
{
	// Fields
	ESFPSMissionDifficulty Difficulty; // 0x0
	BYTE MissionTextID; // 0x1
	int MinCount; // 0x4
	int MaxCount; // 0x8
	SFPSItemSetStructSet* RewardSet; // 0x10

};


instance 1ab71455380
struct SFPSMissionStaticParamsList 
{
	// Fields
	TArray Missions; // 0x0

};


instance 1ab714552c0
struct SFPSMissionStaticParams 
{
	// Fields
	FText MissionName; // 0x0
	FText MissionMessage; // 0x18

};


instance 1ab71455200
struct SFPSMissionInfo 
{
	// Fields
	BYTE ID; // 0x0
	Vector2D Position; // 0x4
	ESFPSMissionDifficulty Difficulty; // 0xc

};


instance 1ab71455140
struct SFPSACSpawnerCharacterGroup 
{
	// Fields
	SFPSAICharacterSet* CharacterSet; // 0x0
	bool bOptional; // 0x8

};


instance 1ab71455080
struct SFPSActorLibraryGroupForSortedByName 
{
	// Fields
	TArray Items; // 0x0

};


instance 1ab71454fc0
struct SFPSActorLibraryItem 
{
	// Fields
	Actor* Actor; // 0x0
	FName Name; // 0x8
	int Index; // 0x10
	int BaseCost; // 0x14

};


instance 1ab71454f00
struct SFPSActorLibraryGroup 
{
	// Fields
	FText Caption; // 0x0
	TArray Items; // 0x18

};


instance 1ab71454e40
struct SFPSAIParams 
{
	// Fields
	SFPSAIParamsLookAround LookAround; // 0x0
	SFPSAIParamsLookAround AggroLookAround; // 0x18
	SFPSAIParamsStatePatrol Patrol; // 0x30
	SFPSAIParamsStateGuard Guard; // 0x34
	SFPSAIParamsStateCover Cover; // 0x3c
	SFPSAIParamsStateAttack Attack; // 0x58
	SFPSAIParamsStateSearch Search; // 0x84
	SFPSAIParamsSwitchFromPeace SwitchFromPeace; // 0x8c

};


instance 1ab71454d80
struct SFPSAIParamsSwitchFromPeace 
{
	// Fields
	float AlarmRadius; // 0x0
	bool bForceSimpleCover; // 0x4
	bool b1SecCoverTime; // 0x5
	float MaxChaseDist; // 0x8
	float WeightChanceCover; // 0xc
	float WeightChanceSearch; // 0x10
	float WeightChanceChase; // 0x14
	bool bNoChaseIfTargetBehind; // 0x18

};


instance 1ab71454cc0
struct SFPSAIParamsStateSearch 
{
	// Fields
	float MinTime; // 0x0
	float MaxTime; // 0x4

};


instance 1ab71454c00
struct SFPSAIParamsStateAttack 
{
	// Fields
	int StandUpChance; // 0x0
	bool bRandomMovement; // 0x4
	bool bWalkWhenRandomMoving; // 0x5
	float RandomMoveTimeMin; // 0x8
	float RandomMoveTimeMax; // 0xc
	float CustomMoveRadius; // 0x10
	bool bPreChaseAfterTargetLost; // 0x14
	int ChaseChance; // 0x18
	float ChaseMaxDistance; // 0x1c
	float ChaseTimeMin; // 0x20
	float ChaseTimeMax; // 0x24
	float MaxHomeDist; // 0x28

};


instance 1ab71454b40
struct SFPSAIParamsStateCover 
{
	// Fields
	float MinTime; // 0x0
	float MaxTime; // 0x4
	float StandWeight; // 0x8
	float SitWeight; // 0xc
	float PanicStandWeight; // 0x10
	float PanicSitWeight; // 0x14
	float PanicRadius; // 0x18

};


instance 1ab71454a80
struct SFPSAIParamsStateGuard 
{
	// Fields
	bool bAiming; // 0x0
	int CrouchChance; // 0x4

};


instance 1ab71457b40
struct SFPSAIParamsStatePatrol 
{
	// Fields
	float WaypointOffset; // 0x0

};


instance 1ab71457a80
struct SFPSAIParamsLookAround 
{
	// Fields
	float WaitMin; // 0x0
	float WaitMax; // 0x4
	int LookAtMin; // 0x8
	int LookAtMax; // 0xc
	float AngleMin; // 0x10
	float AngleMax; // 0x14

};


instance 1ab714579c0
struct FloatMinMax 
{
	// Fields
	float MinValue; // 0x0
	float MaxValue; // 0x4

};


instance 1ab71457900
struct SoundCues 
{
	// Fields
	SoundCue* SoundCue; // 0x0

};


instance 1ab71457840
struct SFPSCharacterDeadParams 
{
	// Fields
	Vector DamagePoint; // 0x0
	Vector DamageNormal; // 0xc
	ESFPSItemSubType WeaponType; // 0x18
	FName WeaponClassName; // 0x1c
	ESFPSAmmoType AmmoType; // 0x24
	Vector StartPoint; // 0x28
	ESFPSBone Bone; // 0x34

};


instance 1ab71457780
struct SFPSCharacterStairAnimations 
{
	// Fields
	AnimMontage* OnStair_Down; // 0x0
	AnimMontage* OnStair_Up; // 0x8
	AnimMontage* OffStair_Down; // 0x10
	AnimMontage* OffStair_Up; // 0x18

};


instance 1ab714576c0
struct SFPSCharacterObstacleAnimations 
{
	// Fields
	AnimMontage* Over10; // 0x0
	AnimMontage* Over30; // 0x8
	AnimMontage* Over50; // 0x10
	AnimMontage* Over70; // 0x18
	AnimMontage* Over90; // 0x20
	AnimMontage* Over110; // 0x28
	AnimMontage* Over130; // 0x30
	AnimMontage* Over150; // 0x38
	AnimMontage* Over170; // 0x40
	AnimMontage* Over190; // 0x48
	AnimMontage* Over210; // 0x50
	AnimMontage* Over230; // 0x58
	AnimMontage* Over250; // 0x60
	AnimMontage* Over270; // 0x68
	AnimMontage* On10; // 0x70
	AnimMontage* On30; // 0x78
	AnimMontage* On50; // 0x80
	AnimMontage* On70; // 0x88
	AnimMontage* On90; // 0x90
	AnimMontage* On110; // 0x98
	AnimMontage* On130; // 0xa0
	AnimMontage* On150; // 0xa8
	AnimMontage* On170; // 0xb0
	AnimMontage* On190; // 0xb8
	AnimMontage* On210; // 0xc0
	AnimMontage* On230; // 0xc8
	AnimMontage* On250; // 0xd0
	AnimMontage* On270; // 0xd8
	AnimMontage* OverWindow10; // 0xe0
	AnimMontage* OverWindow30; // 0xe8
	AnimMontage* OverWindow50; // 0xf0
	AnimMontage* OverWindow70; // 0xf8
	AnimMontage* OverWindow90; // 0x100
	AnimMontage* OverWindow110; // 0x108
	AnimMontage* OverWindow130; // 0x110
	AnimMontage* OverWindow150; // 0x118
	AnimMontage* OverWindow170; // 0x120
	AnimMontage* OverWindow190; // 0x128
	AnimMontage* OverWindow210; // 0x130
	AnimMontage* OverWindow230; // 0x138
	AnimMontage* OverWindow250; // 0x140
	AnimMontage* OverWindow270; // 0x148

};


instance 1ab71457600
struct SFPSCharacterParams 
{
	// Fields
	float Health; // 0x0
	float Food; // 0x4
	float Water; // 0x8

};


instance 1ab71457540
struct SFPSBaseItemComponent 
{
	// Fields
	int ComponentActorLibraryIndex; // 0x0
	int Count; // 0x4

};


instance 1ab71457480
struct SFPSStaticItemParams 
{
	// Fields
	FText ItemName; // 0x0
	FText ItemDesc; // 0x18
	PaperSprite* Image_63x60; // 0x30
	PaperSprite* Image_80x60; // 0x38
	PaperSprite* Image_100x100; // 0x40
	PaperSprite* Image_338x121; // 0x48
	ESFPSItemType ItemType; // 0x50
	ESFPSItemSubType ItemSubType; // 0x51
	int MaxCount; // 0x54
	bool bUseInQuickSlot; // 0x58

};


instance 1ab714573c0
struct SFPSLootBoxSpawnerItem 
{
	// Fields

};


instance 1ab71457300
struct SFPSCraftGroup 
{
	// Fields
	FText Caption; // 0x0
	PaperSprite* Icon; // 0x18
	TArray Items; // 0x20

};


instance 1ab71457240
struct SFPSCraftItem 
{
	// Fields
	Guid UID; // 0x0
	int CraftItemActorLibraryIndex; // 0x10
	int CraftItemCount; // 0x14
	int CraftTime; // 0x18
	TArray Components; // 0x20

};


instance 1ab71457180
struct SFPSCraftComponent 
{
	// Fields
	int ComponentActorLibraryIndex; // 0x0
	ESFPSComponentType ComponentType; // 0x4
	int Count; // 0x8
	bool bConsumable; // 0xc

};


instance 1ab714570c0
struct SFPSDebug_GameplayManager_Mission 
{
	// Fields
	ESFPSMissionState State; // 0x0
	TArray Monsters; // 0x8

};


instance 1ab71457000
struct SFPSDebug_GameplayManager_Patrol 
{
	// Fields
	TArray Waypoints; // 0x0
	TArray PatrolPoints; // 0x10

};


instance 1ab71456f40
struct SFPSDebug_GameplayManager_PatrolPoint 
{
	// Fields
	Vector Position; // 0x0
	int CurrentWaypoint; // 0xc
	int NextWaypoint; // 0x10
	TArray SpawnedMonsters; // 0x18

};


instance 1ab71456e80
struct SFPSItemSetStruct 
{
	// Fields
	SFPSItemSet* ItemSet; // 0x0
	int Chance; // 0x8
	int MinRolls; // 0xc
	int MaxRolls; // 0x10

};


instance 1ab71456dc0
struct SFPSItemSetElement 
{
	// Fields
	SFPSBaseItem* Item; // 0x8
	int MinCount; // 0x10
	int MaxCount; // 0x14
	int ChanceWeight; // 0x18
	float NormalizedChance; // 0x1c

};


instance 1ab71456d00
struct SFPSAICharacterSetsElement 
{
	// Fields
	SFPSAICharacterSet* Item; // 0x0
	int ChanceWeight; // 0x8
	float NormalizedChance; // 0xc
	int MinCount; // 0x10
	int MaxCount; // 0x14

};


instance 1ab71456c40
struct SFPSLootList 
{
	// Fields
	FText Caption; // 0x0
	Guid UID; // 0x18
	TArray Items; // 0x28

};


instance 1ab71456b80
struct SFPSLootItem 
{
	// Fields
	float Chance; // 0x0
	SFPSBaseItem* ItemRef; // 0x8
	int MinCount; // 0x10
	int MaxCount; // 0x14
	SFPSBaseItem* DependedItemRef; // 0x18
	int DependedMinCount; // 0x20
	int DependedMaxCount; // 0x24

};


instance 1ab71456ac0
struct SFPSSectorActivityMsg 
{
	// Fields
	FText Text; // 0x0
	ESFPSSectorActivityMessageType Type; // 0x18
	FString StringTag; // 0x20
	ESFPSLoginType LoginTypeTag; // 0x30

};


instance 1ab71456a00
struct SFPSSaverCharacterSaveCache 
{
	// Fields
	FString JsonString; // 0x0
	ESFPSLoginType LoginType; // 0x10
	FString LoginOrId; // 0x18

};


instance 1ab71456940
struct SFPSSaverItemParams 
{
	// Fields
	FString Filename; // 0x0
	FString JsonString; // 0x10

};


instance 1ab71456880
struct SFPSSmallArmsFatigue 
{
	// Fields
	float Min; // 0x0
	float Max; // 0x4
	float IncreaseMul; // 0x8
	float IncreaseShot; // 0xc

};


instance 1ab714567c0
struct SoundVBasses 
{
	// Fields
	SoundBase* SoundBase; // 0x0
	int iCountSentences; // 0x8
	float fSayLength; // 0xc

};


instance 1ab71456700
struct SFPSTradeGroupList 
{
	// Fields
	TArray Groups; // 0x0

};


instance 1ab71456640
struct SFPSTradeGroup 
{
	// Fields
	FText Caption; // 0x0
	PaperSprite* Icon; // 0x18
	DataTable* DataTable; // 0x20
	float Multiplier; // 0x28

};


instance 1ab71456580
struct SFPSTradeItem 
{
	// Fields
	SFPSBaseItem* ItemClass; // 0x8
	int Price; // 0x10
	int ReputationPointsPrice; // 0x14

};


instance 1ab714564c0
struct SFPSServerAdminParams 
{
	// Fields
	bool bValid; // 0x0
	FString ServerId; // 0x8
	FString ServerRegion; // 0x18
	FString ServerAdminID; // 0x28
	FString ServerAdminName; // 0x38
	int ServerPlayersCount; // 0x48
	int ServerPlayersMaxCountGPortal; // 0x4c
	int ServerPlayersMaxCountAdmin; // 0x50
	FString ServerPassword; // 0x58
	bool bServerPasswordValid; // 0x68
	ESFPSServerCameraType ServerCameraType; // 0x69
	bool bServerCameraTypeValid; // 0x6a
	TArray Players; // 0x70
	TArray Banned; // 0x80
	TArray Admins; // 0x90

};


instance 1ab71456400
struct SFPSLoginData 
{
	// Fields
	FString Login; // 0x0
	ESFPSLoginType LoginType; // 0x10
	FString SteamId; // 0x18

};


instance 1ab71456340
struct SFPSAchievement 
{
	// Fields
	ESFPSAchievementType Type; // 0x0
	int MaxValue; // 0x4
	int ClientProgressNotifyValue; // 0x8
	bool bClientFirstProgressNotify; // 0xc
	TArray NeedItemList; // 0x10
	int CurValue; // 0x20
	TArray CurItems; // 0x28
	bool bClientCompleted; // 0x38

};


instance 1ab71459400
struct SFPSAchievementItem 
{
	// Fields
	int ActorLibraryIndex; // 0x0

};


instance 1ab71459340
struct SFPSServerSquadRecord 
{
	// Fields

};


instance 1ab71459280
struct SFPSServerSaveParams 
{
	// Fields

};


instance 1ab714591c0
struct SFPSSquadInfo 
{
	// Fields
	SFPSLoginData LoginData; // 0x0
	Vector Position; // 0x28
	WeakObjectProperty ServerCharacterPtr; // 0x34 property 0x1ab71477480 hash 0x24388009

};


instance 1ab71459100
struct SFPSUnresolvedDeadMarkerInfo 
{
	// Fields
	SFPSLoginData LoginData; // 0x0
	Guid MarkerUID; // 0x28

};


instance 1ab71459040
struct SFPSLastEquipInfo 
{
	// Fields
	int Skin; // 0x0
	int Pants; // 0x4
	FName Jacket; // 0x8
	int JacketIndex; // 0x10
	FName Trous; // 0x14
	int TrousIndex; // 0x1c
	FName Vest; // 0x20
	int VestIndex; // 0x28
	FName BackPack; // 0x2c
	int BackPackIndex; // 0x34
	FName Helmet; // 0x38
	int HelmetIndex; // 0x40
	FName Mask; // 0x44
	int MaskIndex; // 0x4c
	FName Glasses; // 0x50
	int GlassesIndex; // 0x58
	FName Gloves; // 0x5c
	int GlovesIndex; // 0x64
	FName Weapon0; // 0x68
	int Weapon0Index; // 0x70
	FName Weapon1; // 0x74
	int Weapon1Index; // 0x7c
	FName Weapon2; // 0x80
	int Weapon2Index; // 0x88
	FName Weapon0MF0; // 0x8c
	int Weapon0MF0Index; // 0x94
	FName Weapon0MF1; // 0x98
	int Weapon0MF1Index; // 0xa0
	FName Weapon0MF2; // 0xa4
	int Weapon0MF2Index; // 0xac
	FName Weapon0MF3; // 0xb0
	int Weapon0MF3Index; // 0xb8
	FName Weapon0MF4; // 0xbc
	int Weapon0MF4Index; // 0xc4
	FName Weapon1MF0; // 0xc8
	int Weapon1MF0Index; // 0xd0
	FName Weapon1MF1; // 0xd4
	int Weapon1MF1Index; // 0xdc
	FName Weapon1MF2; // 0xe0
	int Weapon1MF2Index; // 0xe8
	FName Weapon1MF3; // 0xec
	int Weapon1MF3Index; // 0xf4
	FName Weapon1MF4; // 0xf8
	int Weapon1MF4Index; // 0x100
	FName Weapon2MF0; // 0x104
	int Weapon2MF0Index; // 0x10c
	FName Weapon2MF1; // 0x110
	int Weapon2MF1Index; // 0x118
	FName Weapon2MF2; // 0x11c
	int Weapon2MF2Index; // 0x124
	FName Weapon2MF3; // 0x128
	int Weapon2MF3Index; // 0x130
	FName Weapon2MF4; // 0x134
	int Weapon2MF4Index; // 0x13c
	int ActiveWeapon; // 0x140
	bool HoodOnHead; // 0x144

};


instance 1ab71458f80
struct SFPSServerInfoTime 
{
	// Fields
	FString ServerName; // 0x0
	ULONG64 LastTime; // 0x10

};


instance 1ab71458ec0
struct SFPSServerInfo 
{
	// Fields
	FString Name; // 0x0
	int Ping; // 0x10
	int PlayersCount; // 0x14
	int PlayersMaxCount; // 0x18
	FString Region; // 0x20
	bool Official; // 0x30
	bool bFavorite; // 0x31
	ULONG64 LastTime; // 0x38
	FString URL; // 0x40
	int Index; // 0x50
	bool bValid; // 0x54
	bool bNeedUpdate; // 0x55
	bool bPassword; // 0x56
	ESFPSServerCameraType CameraType; // 0x57

};


instance 1ab71458e00
struct SFPSMapLabel 
{
	// Fields
	FText Caption; // 0x0
	int FontSize; // 0x18
	ESFPSAlignment Alignment; // 0x1c

};


instance 1ab71458d40
struct SFPSShotRandomParams 
{
	// Fields
	float SpreadAngle_X; // 0x0
	float SpreadAngle_Y; // 0x4
	float RollbackLR; // 0x8

};


instance 1ab71458c80
struct SFPSMaterialPair 
{
	// Fields
	MaterialInterface* Material; // 0x0
	MaterialInterface* MaterialLow; // 0x8

};


instance 1ab71458bc0
struct SFPSCharacterDefaultMeshes 
{
	// Fields
	ESFPSCharacterDefaultMeshesType Type; // 0x0
	SkeletalMesh* HeadMesh; // 0x8
	MaterialInterface* BodyMaterial; // 0x10
	MaterialInterface* BodyMaterialLow; // 0x18

};


instance 1ab71458b00
struct SFPSCharacterDefaultBodyMeshes 
{
	// Fields
	SkeletalMesh* BodyMesh; // 0x0
	SkeletalMesh* LegsMesh; // 0x8
	SkeletalMesh* TorsoMesh; // 0x10
	SkeletalMesh* NoneMesh; // 0x18

};


instance 1ab71458a40
struct SFPSTextMsg 
{
	// Fields
	FText Text; // 0x0
	bool ErrorMsg; // 0x18

};


instance 1ab71458980
struct SFPSCharacterCraftParams 
{
	// Fields
	int Count; // 0x0
	FName ActorName; // 0x4
	int ActorIndex; // 0xc

};


instance 1ab714588c0
struct SFPSAmmoParameters 
{
	// Fields
	float Damage; // 0x0
	float Mass; // 0x4
	float BallicticCoeff; // 0x8
	int Count; // 0xc
	float SpreadAngleCoeff; // 0x10

};


instance 1ab71458800
struct SFPSWeaponMFParams 
{
	// Fields
	ESFPSWeaponMFType MFType; // 0x0

};


instance 1ab71458740
struct SFPSCharacterCapsuleHalfHeightChangeTimes 
{
	// Fields
	float StandToCrouch; // 0x0
	float StandToProne; // 0x4
	float CrouchToStand; // 0x8
	float CrouchToProne; // 0xc
	float ProneToStand; // 0x10
	float ProneToCrouch; // 0x14
	float Any_ToCar; // 0x18
	float Car_ToAny; // 0x1c

};


instance 1ab71458680
struct SFPSCharacterSpeeds 
{
	// Fields
	float Stand_Motionless_WithoutWeapon; // 0x0
	float Stand_Walk_WithoutWeapon; // 0x4
	float Stand_Run_WithoutWeapon; // 0x8
	float Stand_Sprint_WithoutWeapon; // 0xc
	float Stand_Motionless_Weapon; // 0x10
	float Stand_Walk_Weapon; // 0x14
	float Stand_Run_Weapon; // 0x18
	float Stand_Sprint_Weapon; // 0x1c
	float Stand_Motionless_WeaponAiming; // 0x20
	float Stand_Walk_WeaponAiming; // 0x24
	float Stand_Run_WeaponAiming; // 0x28
	float Crouch_Motionless; // 0x2c
	float Crouch_Run; // 0x30
	float Prone_Motionless; // 0x34
	float Prone_Run; // 0x38
	float Flying_Car; // 0x3c
	float Flying_Stair; // 0x40

};


instance 1ab714585c0
struct SFPSTraceParams 
{
	// Fields
	Actor* TraceActor; // 0x0
	Vector TracePoint; // 0x8
	PrimitiveComponent* TraceComponent; // 0x18
	ESFPSUseObjectType ActorType; // 0x20

};


instance 1ab71458500
struct SFPSQuickSlotRecord 
{
	// Fields
	ESFPSItemSlotType SlotType; // 0x0
	Actor* Item; // 0x8

};


instance 1ab71458440
struct SFPSQuickSlotParams 
{
	// Fields
	ESFPSItemSlotType SlotType; // 0x0
	int SlotIndex; // 0x4

};


instance 1ab71458380
struct SFPSACSnaps 
{
	// Fields
	BYTE Snaps; // 0x0

};


instance 1ab714582c0
struct SFPSHUDChatBoxLabel 
{
	// Fields
	TextBlock* Label; // 0x0

};


instance 1ab71458200
struct SFPSHUDChatBoxString 
{
	// Fields

};


instance 1ab71458140
struct SFPSWeaponMF_Sight_WeaponSettings 
{
	// Fields
	Vector CameraOrigin; // 0x0
	Vector CameraOriginSecondary; // 0xc

};


