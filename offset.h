#pragma once

#include <stdint.h>

namespace offsets {
	namespace Globals {
		constexpr uint64_t base_networkable = 0xBDB0D38;
		constexpr uint64_t il2cpp_handle_base = 0xC057BA0;
		constexpr uint64_t TOD_Sky_TypeInfo = 0xBD5FFC0;
		constexpr uint64_t MainCamera_TypeInfo = 0xBDB0B78;
	}

	namespace BasePlayer {
		constexpr uint64_t PlayerEyes = 0x478; // %18a2afb57fab2f61fe26d0665cf1d7c43cab65c5 
		constexpr uint64_t currentTeam = 0x430; // ulong
		constexpr uint64_t PlayerInput = 0x568; // class PlayerInput
		constexpr uint64_t PlayerModel = 0x5B0; // class PlayerModel
		constexpr uint64_t weaponMoveSpeedScale = 0x630; // float
		constexpr uint64_t PlayerModifiers = 0x310; // PlayerModifiers
		constexpr uint64_t PlayerInventory = 0x3E0; // %18a2afb57fab2f61fe26d0665cf1d7c43cab65c5
		constexpr uint64_t PlayerActiveItem = 0x460; // %c844dfefe573f8314c2064536a89b664504a7b7b<%6574055d8d48554dbb5e2d9d4cc098f344307ccb> %7c0897b82b11b37fc732e434c836a0b28a5c72dc;
	}

	namespace PlayerInput {
		constexpr uint64_t PlayerViewAngels = 0x44; // Vector3
		constexpr uint64_t PlayerViewVelocity = 0xB0; // Vector3
	}

	namespace PlayerEyes {
		constexpr uint64_t PlayerRotation = 0x50; // Quan
	}
}