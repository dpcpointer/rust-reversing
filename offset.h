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
		constexpr uint64_t PlayerEyes = 0x478; 
		constexpr uint64_t currentTeam = 0x430; // ulong
		constexpr uint64_t PlayerInput = 0x568; // class PlayerInput
		constexpr uint64_t PlayerModel = 0x5B0; // class PlayerModel
		constexpr uint64_t weaponMoveSpeedScale = 0x630; // float
		constexpr uint64_t PlayerModifiers = 0x310; // PlayerModifiers
		constexpr uint64_t PlayerInventory = 0x3E0; // %18a2afb57fab2f61fe26d0665cf1d7c43cab65c5
	}
}