#pragma once

#include <stdint.h>

namespace offsets {
	typedef const uint64_t offset;

	namespace Globals {
		offset base_networkable = 0xBEAA898;
		offset il2cpp_handle_base = 0xC1A9DC0;
		offset TOD_Sky_TypeInfo = 0xBF5AAD0;
		offset MainCamera_TypeInfo = 0xBEB2470;

		offset networkable_chain_1 = 0xB8;
		offset networkable_chain_2 = 0x20LL;
		offset networkable_chain_3 = 0x10;
	}

	namespace BaseEntity {


	}

	namespace BaseCombatEntity {

	}

	namespace BasePlayer {
		offset inventoryValue = 0x578;               // PlayerInventory
		offset movement = 0x580;                     // BaseMovement
		offset currentTeam = 0x430; 	             // ulong
		offset weaponMoveSpeedScale = 0x630;         // float
		offset playerFlags = 0x558;                  // BasePlayer.Flags
		offset eyesValue = 0x568;                    // PlayerEyes
		offset input = 0x4F8;                        // PlayerInput
		offset cachedProtection = 0x5C0;             // ProtectionProperties
		offset blueprints = 0x620;                   // PlayerBlueprints
		offset metabolism = 0x2C8;                   // PlayerMetabolism
		offset modifiers = 0x410;                    // PlayerModifiers
		offset disabledHeldEntity = 0x478;           // HeldEntity
		offset activeTelephone = 0x2A0;              // PhoneController
		offset collision = 0x4D0;                    // BaseCollision
		offset _lookingAt = 0x2D0;                   // GameObject
		offset currentViewMode = 0x374;              // BasePlayer.CameraMode
		offset _displayName = 0x598;                 // string
		offset petEntity = 0x4B8;                    // BaseEntity
		offset gestureViewModel = 0x398;             // ViewModel
		offset fallDamageEffect = 0x548;             // GameObjectRef
		offset equippingBlocked = 0x644;             // bool
		offset eggVision = 0x648;                    // float
		offset drownEffect = 0x550;                  // GameObjectRef
		offset collision = 0x4D0;                    // BaseCollision
		offset clothingWaterSpeedBonus = 0x63C;      // float
		offset clothingMoveSpeedReduction = 0x638;   // float
		offset clothingBlocksAiming = 0x634;         // bool
		offset clothingAccuracyBonus = 0x640;        // float
	}

	namespace PlayerInput {
		
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