#pragma once

#include <stdint.h>

#define offset constexpr uint64_t

namespace offsets {
	namespace Globals {
		offset base_networkable = 0xBDB0D38;
		offset il2cpp_handle_base = 0xC057BA0;
		offset TOD_Sky_TypeInfo = 0xBD5FFC0;
		offset MainCamera_TypeInfo = 0xBDB0B78;
	}

	namespace BaseEntity {
		 offset bounds = 0xA0; // Bounds
		 offset enabledSaving = 0xC0; // bool
		 offset flags = 0xD0; // BaseEntity.Flags
		 offset hasBrain = 0xE8; // bool
		 offset impactEffect = 0xB8; // GameObjectRef
		 offset model = 0xC8; // Model
		 offset syncPosition = 0xC1; // bool
		 offset itemSkin = 0x160; // ItemSkin
	}

	namespace BaseCombatEntity {
		offset startHealth = 0x1D0; // float
		offset spawnDeployableCorpseOnDeath = 0x1B0; // bool
		offset skeletonProperties = 0x1C0; // SkeletonProperties
		offset showHealthInfo = 0x230; // bool
		offset sendsMeleeHitNotifcation = 0x239; // bool
		offset sendsHitNotifcation = 0x238; // bool
		offset repair = 0x200; // BaseCombatEntity.Repair
		offset pickup = 0x1D8; // BaseCombatEntity.Pickup
		offset markAttackerHostile = 0x23A; // bool
		offset lifestate = 0x234; // BaseCombatEntry.LifeState
		offset faction = 0x244; // BaseCombatEntity.Faction
		offset deployableCorpsePrefab = 0x1B8; // GameObjectRef
		offset baseProtection = 0x1C8; // ProtectionProperties
		offset _health = 0x240; // float
		offset _maxHealth = 0x23C; // float
		offset deathTime = 0x248; // float
		offset lastNotifyTime = 0x568; // int
	}

	namespace BasePlayer {
		offset cameraMode = 0x370; // %5ca96fcd6e118b04dc180adc9b9dfc97739dab19 or BasePlayer.CameraMode for type
		offset playerFlags = 0x558; // BasePlayer.PlayerFlags
		offset playerEyes = 0x478; // %18a2afb57fab2f61fe26d0665cf1d7c43cab65c5 
		offset currentTeam = 0x430; // ulong
		offset playerInput = 0x568; // class PlayerInput
		offset playerModel = 0x5B0; // class PlayerModel
		offset weaponMoveSpeedScale = 0x630; // float
		offset playerModifiers = 0x310; // PlayerModifiers
		offset playerInventory = 0x3E0; // %18a2afb57fab2f61fe26d0665cf1d7c43cab65c5
		offset playerHeldItem = 0x460; // %c844dfefe573f8314c2064536a89b664504a7b7b<%6574055d8d48554dbb5e2d9d4cc098f344307ccb> %7c0897b82b11b37fc732e434c836a0b28a5c72dc;
	}

	namespace PlayerInput {
		offset playerViewAngels = 0x44; // Vector3
		offset playerViewVelocity = 0xB0; // Vector3
	}

	namespace PlayerEyes {
		offset bodyRotation = 0x50; // Quan
	}

	namespace PlayerInventory {
		offset lastSet = 0x78; // List<ItemIcon>
		offset onRadioactivityChanged = 0x60; // Action<float, bool>
		offset containerBelt = 0x28; // ItemContainer %44eda7dfea194ee2358926c0b35205e038c1da97
		offset containsRadioactiveItems = 0x54; // bool
		offset crafting = 0x40; // ItemCrafter
		offset inventoryRadioactivity = 0x50; // float
		offset loot = 0x48; // PlayerLoot
	}

	namespace Item {
		constexpr uint64_t UID = 0xc8; // uint64_t %6574055d8d48554dbb5e2d9d4cc098f344307ccb %64b462a00d0ab00e6041c1d673010a7e9fdec97e;
	}
	
	namespace ItemContainer {
		offset itemList = 0x38; //  List<%c7d469fbb24ad5c85146bc620c0c73e36df50f27> or List<Item>
		offset slotAmt = 0x60; // int	
		offset blockedItems = 0x68; // HashSet<ItemDefinition>
		offset temperature = 0x2C; // float
		offset parent = 0x70; // Item
		offset onlyAllowedItems = 0x58; // ItemDefintion[]
		offset flags = 0x28; // ItemContainer.Flag
		offset availableSlots = 0x50; // List<ItemSlot>
		offset allowedContents = 0x30; // ItemContainer.ContentsType
	}
}