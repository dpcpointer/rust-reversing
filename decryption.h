uint64_t Il2cppGetHandle(int32_t ObjectHandleID) {
    uint64_t index = ObjectHandleID >> 3;
    uint64_t offset = (ObjectHandleID & 7) - 1;
    uint64_t baseAddr = globals::game_assembly + offsets::globals::il2cpp_handle_base + offset * 0x28;
    uint32_t limit = m.read<uint32_t>(baseAddr + 0x10);

    if (index >= limit) return 0;

    uintptr_t objAddr = m.read<uintptr_t>(baseAddr);
    if (!objAddr) return 0;

    uint32_t bitMask = m.read<uint32_t>(objAddr + ((index >> 5) << 2));
    if (!(bitMask & (1 << (index & 0x1f)))) return 0;

    uintptr_t ObjectArray = m.read<uintptr_t>(baseAddr + 0x8) + (index << 3);
    return m.read<uint8_t>(baseAddr + 0x14) > 1 ? m.read<uintptr_t>(ObjectArray) : ~m.read<uint32_t>(ObjectArray);
}

__int64 decrypt_base_networkable(__int64 base_networkable) {
    signed __int64* rdx; 
    int r8d;
    int eax; 
    signed __int64 rcx; 
    signed __int64 v27; 

    if (m.read<unsigned char>(base_networkable + 20)) {
        rdx = &v27;
        v27 = m.read<unsigned long long>(base_networkable + 24);
        r8d = 2;
        do
        {
            eax = *(unsigned long*)rdx;
            rdx = (signed __int64*)((char*)rdx + 4);
            *((unsigned long*)rdx - 1) = (((eax ^ 0x25C7AB14) << 17) | ((eax ^ 0x25C7AB14u) >> 15)) - 1562074767;
            --r8d;
        } while (r8d);
        rcx = v27;
    }
    else {
        rcx = 0LL;
    }

	return Il2cppGetHandle(rcx);
}

__int64 decrypt_base_networkable_list(__int64 base_networkable_list) {
    signed __int64* rdx;
    int r8d; 
    int eax; 
    signed __int64 rcx; 
    signed __int64 v27; 

    if (m.read<unsigned char>(base_networkable_list + 20)) {
        rdx = &v27;
        v27 = m.read<unsigned long long>(base_networkable_list + 24);
        r8d = 2;
        do
        {
            eax = *(unsigned long*)rdx;
            rdx = (signed __int64*)((char*)rdx + 4);
            *((unsigned long*)rdx - 1) = (((eax - 838054465) << 23) | ((unsigned int)(eax - 838054465) >> 9)) - 1457702490;
            --r8d;
        } while (r8d);
        rcx = v27;
    }
    else {
        rcx = 0LL;
    }
    
	return Il2cppGetHandle(rcx);
}

__int64 decrypt_player_eyes(__int64 player_eyes) {

  
}

__int64 decrypt_player_inventory(__int64 player_inventory) {
	signed __int64* v4; // rcx
	int v5; // edx
	int v6; // eax
	signed __int64 v7; // rcx
	signed __int64 v22; // [rsp+40h] [rbp+8h] BYREF

	if (m.read<unsigned char>(player_inventory + 20))
	{
		v4 = &v22;
		v22 = m.read<unsigned long long>(player_inventory + 24);
		v5 = 2;
		do
		{
			v6 = *(unsigned long*)v4;
			v4 = (signed __int64*)((char*)v4 + 4);
			*((unsigned long*)v4 - 1) = ((v6 - 1624646688) ^ 0x2064D92A) + 984859616;
			--v5;
		} while (v5);
		v7 = v22;
	}
	else
	{
		v7 = 0LL;
	}

	return Il2cppGetHandle(v7);
}

__int64 decrypt_cl_active_item(uint64_t cl_active_item_address) {
	uint64_t rsp = cl_active_item_address;
	uint64_t* rdx = &rsp;
	uint32_t r8d = 0x2;
	uint32_t eax, ecx, edx;

	do {
		ecx = *(uint32_t*)(rdx);
		eax = *(uint32_t*)(rdx);
		rdx = (uint64_t*)((uint8_t*)rdx + 0x4);
		ecx = ecx >> 0x16;
		eax = eax << 0xA;
		ecx = ecx | eax;
		ecx = ecx ^ 0xE4FE1663;
		ecx = ecx + 0x5F65A2C;
		*((uint32_t*)rdx - 1) = ecx;
		--r8d;
	} while (r8d);
	return rsp;
}
