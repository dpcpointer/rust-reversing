#pragma once

#include <stdio.h>
#include <stdint.h>
#include <vector>
#include <iostream>

#include "../libarys/memory/memory.hpp"
#include "../libarys/hexrays/hexrays.hpp"
#include "offsets.h"
#include "../globals.h"

namespace decryption {
	uint64_t Il2cppGetHandle(int32_t ObjectHandleID);
	uint64_t decrypt_base_networkable(uint64_t base_networkable);
	uint64_t decrypt_base_networkable_list(uint64_t base_networkable);
	uint64_t decrypt_player_eyes(uint64_t player_eyes);
	uint64_t decrypt_player_inventory(uint64_t player_inventory);
}