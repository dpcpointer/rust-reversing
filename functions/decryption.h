#pragma once

#include <stdio.h>
#include <stdint.h>
#include <vector>
#include <iostream>

namespace decryption {
	uint64_t Il2cppGetHandle(int32_t ObjectHandleID);
	uint64_t decrypt_base_networkable(uint64_t base_networkable);
	uint64_t decrypt_base_networkable_list(uint64_t base_networkable);
	uint64_t decrypt_player_eyes(uint64_t player_eyes);
	uint64_t decrypt_player_inventory(uint64_t player_inventory);
	__int64  decrypt_player_held_item(long long a1);
}