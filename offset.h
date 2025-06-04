#pragma once

#include <stdint.h>

namespace offsets {
	namespace Globals {
		constexpr uint64_t base_networkable = 0xBDB0D38;
		constexpr uint64_t il2cpp_handle_base = 0xC057BA0;
		constexpr uint64_t TOD_Sky_TypeInfo = 0xBD5FFC0;
		constexpr uint64_t MainCamera_TypeInfo = 0xBDB0B78;
	}

	namespace BaseCombatEntity {
		constexpr uint64_t startHealth = 0x1D0; // float
		constexpr uint64_t spawnDeployableCorpseOnDeath = 0x1B0; // bool
		constexpr uint64_t skeletonProperties = 0x1C0; // SkeletonProperties
		constexpr uint64_t showHealthInfo = 0x230; // bool
		constexpr uint64_t sendsMeleeHitNotifcation = 0x239; // bool
		constexpr uint64_t sendsHitNotifcation = 0x238; // bool
		constexpr uint64_t repair = 0x200; // BaseCombatEntity.Repair
		constexpr uint64_t pickup = 0x1D8; // BaseCombatEntity.Pickup
		constexpr uint64_t markAttackerHostile = 0x23A; // bool
		constexpr uint64_t lifestate = 0x234; // BaseCombatEntry.LifeState
		constexpr uint64_t faction = 0x244; // BaseCombatEntity.Faction
		constexpr uint64_t deployableCorpsePrefab = 0x1B8; // GameObjectRef
		constexpr uint64_t baseProtection = 0x1C8; // ProtectionProperties
		constexpr uint64_t _health = 0x240; // float
		constexpr uint64_t _maxHealth = 0x23C; // float
		constexpr uint64_t deathTime = 0x248; // float
		constexpr uint64_t lastNotifyTime = 0x568; // int
	}

	namespace BasePlayer {
		constexpr uint64_t cameraMode = 0x370; // %5ca96fcd6e118b04dc180adc9b9dfc97739dab19 or BasePlayer.CameraMode for type
		constexpr uint64_t playerFlags = 0x558; // BasePlayer.PlayerFlags
		constexpr uint64_t playerEyes = 0x478; // %18a2afb57fab2f61fe26d0665cf1d7c43cab65c5 
		constexpr uint64_t currentTeam = 0x430; // ulong
		constexpr uint64_t playerInput = 0x568; // class PlayerInput
		constexpr uint64_t playerModel = 0x5B0; // class PlayerModel
		constexpr uint64_t weaponMoveSpeedScale = 0x630; // float
		constexpr uint64_t playerModifiers = 0x310; // PlayerModifiers
		constexpr uint64_t playerInventory = 0x3E0; // %18a2afb57fab2f61fe26d0665cf1d7c43cab65c5
		constexpr uint64_t playerHeldItem = 0x460; // %c844dfefe573f8314c2064536a89b664504a7b7b<%6574055d8d48554dbb5e2d9d4cc098f344307ccb> %7c0897b82b11b37fc732e434c836a0b28a5c72dc;
	}

	namespace PlayerInput {
		constexpr uint64_t playerViewAngels = 0x44; // Vector3
		constexpr uint64_t playerViewVelocity = 0xB0; // Vector3
	}

	namespace PlayerEyes {
		constexpr uint64_t playerRotation = 0x50; // Quan
	}

	namespace PlayerInventory{
		constexpr uint64_t lastSet = 0x78; // List<ItemIcon>
		constexpr uint64_t onRadioactivityChanged = 0x60; // Action<float, bool>
		constexpr uint64_t containerBelt = 0x28; // ItemContainer %44eda7dfea194ee2358926c0b35205e038c1da97
		constexpr uint64_t containsRadioactiveItems = 0x54; // bool
		constexpr uint64_t crafting = 0x40; // ItemCrafter
		constexpr uint64_t inventoryRadioactivity = 0x50; // float
		constexpr uint64_t loot = 0x48; // PlayerLoot
	}

	namespace
}