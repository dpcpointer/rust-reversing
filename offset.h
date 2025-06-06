#pragma once

#include <stdint.h>

namespace offsets {
	typedef const uint64_t offset;

	namespace globals {
		offset base_networkable = 0xBDF9E28;
		offset il2cpp_handle_base = 0xC0F6BA0;
		offset TOD_Sky_TypeInfo = 0xBEAE110;
		offset MainCamera_TypeInfo = 0xBDF7198;

		offset networkable_chain_1 = 0xB8;
		offset networkable_chain_2 = 0x28LL;
		offset networkable_chain_3 = 0x10;
		offset object_directory = 0x20;

		offset camera_chain_1 = 0xB8;
		offset camera_chain_2 = 0x28LL;
		offset camera_chain_3 = 0x10;
	}

	namespace BaseEntity {
		offset _pendingFileRequests = 0x80;         // BaseEntity.PendingFileRequest
		offset menuOptions = 0x88;                  // List<Option>
		offset bounds = 0xA0;                       // Bounds
		offset impactEffect = 0xB8;                 // GameObjectRef
		offset enableSaving = 0xC0d;                // bool
		offset syncPosition = 0xC1;                 // bool
		offset model = 0xC8;                        // Model
		offset flags = 0xD0;						// flags
		offset itemSkin = 0xE0;						// ItemSkin
		offset triggers = 0x120;					// List<TriggerBase>
		offset _components = 0x130;					// List<EntityComponentBase>
		offset addedToParentEntity = 0x140;			// BaseEntity
		offset _name = 0x148;						// string
		offset ragdoll = 0x158;						// Ragdoll
	}

	namespace BaseCombatEntity {
		offset spawnDeployableCorpseOnDeath = 0x1B0; // bool
		offset deployableCorpsePrefab = 0x1B8;       // GameObjectRef
		offset skeletonProperties = 0x1C0;           // SkeletonProperties
		offset baseProtection = 0x1C8;               // ProtectionProperties
		offset startHealth = 0x1D0;                  // float
		offset _health = 0x23C;   					 // float
		offset _maxHealth = 0x240;					 // float
		offset pickup = 0x1D8;                       // BaseCombatEntity.Pickup
		offset repair = 0x200;                       // BaseCombatEntity.Repair
		offset showHealthInfo = 0x230;               // bool
		offset lifestate = 0x234;                    // BaseCombatEntity.LifeState
		offset sendsHitNotification = 0x238;		 // bool
		offset sendsMeleeHitNotification = 0x239;	 // bool
		offset markAttackerHostile = 0x23A;			 // bool
		offset faction = 0x244;						 // BaseCombatEntity.Faction
	}

	namespace BasePlayer {
		offset inventoryValue = 0x578;               // PlayerInventory
		offset movement = 0x2B0;                     // BaseMovement
		offset currentTeam = 0x430; 	             // ulong
		offset weaponMoveSpeedScale = 0x630;         // float
		offset playerFlags = 0x558;                  // BasePlayer.Flags
		offset eyesValue = 0x250;                    // PlayerEyes
		offset input = 0x340;                        // PlayerInput
		offset cachedProtection = 0x570;             // ProtectionProperties
		offset blueprints = 0x5C8;                   // PlayerBlueprints
		offset metabolism = 0x3A0;                   // PlayerMetabolism
		offset modifiers = 0x310;                    // PlayerModifiers
		offset disabledHeldEntity = 0x588;           // HeldEntity
		offset activeTelephone = 0x3E0;              // PhoneController
		offset collision = 0x2A8;                    // BaseCollision
		offset _lookingAt = 0x3C0;                   // GameObject
		offset currentViewMode = 0x374;              // BasePlayer.CameraMode
		offset _displayName = 0x4F8;                 // string
		offset petEntity = 0x4B8;                    // BaseEntity
		offset gestureViewModel = 0x398;             // ViewModel
		offset fallDamageEffect = 0x548;             // GameObjectRef
		offset equippingBlocked = 0x644;             // bool
		offset eggVision = 0x648;                    // float
		offset drownEffect = 0x550;                  // GameObjectRef
		offset clothingWaterSpeedBonus = 0x63C;      // float
		offset clothingMoveSpeedReduction = 0x638;   // float
		offset clothingBlocksAiming = 0x634;         // bool
		offset clothingAccuracyBonus = 0x640;        // float
		offset clActiveItem = 0x460;                 // float
	}

	namespace PlayerInput {
		offset hadInputBuffer = 0x30;				 // bool
		offset bodyRotation = 0x34;					 // Quaternion
		offset bodyAngels = 0x44;					 // Vector3
		offset bodyAnglesOverride = 0x50;			 // Vector3
		offset bodyAnglesOverrideLerpSpeed = 0x60;   // float
		offset headRotation = 0x64;					 // Quaternion
		offset headAngles = 0x74;					 // Vector3
		offset viewDelta = 0x90;					 // Vector2
		offset headLerp = 0x98; 					 // float
		offset mouseWheelUp = 0x98;					 // int
		offset mouseWheelDn = 0xA0;					 // int
		offset autorun = 0xA4;						 // <autorun>k__BackingField
		offset toggleDuck = 0xA5;				     // <toggleDuck>k__BackingField
		offset toggleAds = 0xA6;				     // bool
		offset pendingMouseDelta = 0xB0;			 // Vector3
		offset offsetAngles = 0xBC;					 // Vector3
		offset ignoredButtons = 0xC8;				 // int
		offset hasKeyFocus = 0xCC;					 // bool
	}

	namespace PlayerEyes {
	
	}

	namespace PlayerInventory {

	}

	namespace Item {
		
	}
	
	namespace ItemContainer {
	
	}
}