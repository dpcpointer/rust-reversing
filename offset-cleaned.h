#pragma once

#include <stdint.h>

#define OFFSET constexpr uint64_t

namespace Offsets {
    namespace Globals {
        OFFSET BaseNetworkable = 0xBDB0D38;
        OFFSET IL2CPPHandleBase = 0xC057BA0;
        OFFSET TODSkyTypeInfo = 0xBD5FFC0;
        OFFSET MainCameraTypeInfo = 0xBDB0B78;
    }

    namespace BaseEntity {
        OFFSET Bounds = 0xA0;                  // Bounds
        OFFSET EnabledSaving = 0xC0;           // bool
        OFFSET Flags = 0xD0;                   // BaseEntity::Flags
        OFFSET HasBrain = 0xE8;                // bool
        OFFSET ImpactEffect = 0xB8;            // GameObjectRef
        OFFSET Model = 0xC8;                   // Model
        OFFSET SyncPosition = 0xC1;            // bool
        OFFSET ItemSkin = 0x160;               // ItemSkin
    }

    namespace BaseCombatEntity {
        OFFSET StartHealth = 0x1D0;            // float
        OFFSET SpawnDeployableCorpseOnDeath = 0x1B0; // bool
        OFFSET SkeletonProperties = 0x1C0;     // SkeletonProperties
        OFFSET ShowHealthInfo = 0x230;         // bool
        OFFSET SendsMeleeHitNotification = 0x239; // bool
        OFFSET SendsHitNotification = 0x238;   // bool
        OFFSET Repair = 0x200;                 // BaseCombatEntity::Repair
        OFFSET Pickup = 0x1D8;                 // BaseCombatEntity::Pickup
        OFFSET MarkAttackerHostile = 0x23A;    // bool
        OFFSET LifeState = 0x234;              // BaseCombatEntity::LifeState
        OFFSET Faction = 0x244;                // BaseCombatEntity::Faction
        OFFSET DeployableCorpsePrefab = 0x1B8; // GameObjectRef
        OFFSET BaseProtection = 0x1C8;         // ProtectionProperties
        OFFSET Health = 0x240;                 // float
        OFFSET MaxHealth = 0x23C;              // float
        OFFSET DeathTime = 0x248;              // float
        OFFSET LastNotifyTime = 0x568;         // int
    }

    namespace BasePlayer {
        OFFSET CameraMode = 0x370;             // BasePlayer::CameraMode
        OFFSET PlayerFlags = 0x558;            // BasePlayer::PlayerFlags
        OFFSET PlayerEyes = 0x478;             // PlayerEyes
        OFFSET CurrentTeam = 0x430;            // uint64_t
        OFFSET PlayerInput = 0x568;            // PlayerInput
        OFFSET PlayerModel = 0x5B0;            // PlayerModel
        OFFSET WeaponMoveSpeedScale = 0x630;   // float
        OFFSET PlayerModifiers = 0x310;        // PlayerModifiers
        OFFSET PlayerInventory = 0x3E0;        // PlayerInventory
        OFFSET PlayerHeldItem = 0x460;         // Item
    }

    namespace PlayerInput {
        OFFSET PlayerViewAngles = 0x44;        // Vector3
        OFFSET PlayerViewVelocity = 0xB0;      // Vector3
    }

    namespace PlayerEyes {
        OFFSET BodyRotation = 0x50;            // Quaternion
    }

    namespace PlayerInventory {
        OFFSET LastSet = 0x78;                 // List<ItemIcon>
        OFFSET OnRadioactivityChanged = 0x60;   // Action<float, bool>
        OFFSET ContainerBelt = 0x28;           // ItemContainer
        OFFSET ContainsRadioactiveItems = 0x54; // bool
        OFFSET Crafting = 0x40;                // ItemCrafter
        OFFSET InventoryRadioactivity = 0x50;   // float
        OFFSET Loot = 0x48;                    // PlayerLoot
    }

    namespace Item {
        OFFSET UID = 0xC8;                     // uint64_t
    }

    namespace ItemContainer {
        OFFSET ItemList = 0x38;                // List<Item>
        OFFSET SlotAmount = 0x60;              // int
        OFFSET BlockedItems = 0x68;            // HashSet<ItemDefinition>
        OFFSET Temperature = 0x2C;             // float
        OFFSET Parent = 0x70;                  // Item
        OFFSET OnlyAllowedItems = 0x58;        // ItemDefinition[]
        OFFSET Flags = 0x28;                   // ItemContainer::Flag
        OFFSET AvailableSlots = 0x50;          // List<ItemSlot>
        OFFSET AllowedContents = 0x30;         // ItemContainer::ContentsType
    }
}