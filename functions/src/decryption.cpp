#include "../decryption.h"

uint64_t decryption::Il2cppGetHandle(int32_t ObjectHandleID) {
	uint64_t index = ObjectHandleID >> 3;
	uint64_t offset = (ObjectHandleID & 7) - 1;
	uint64_t baseAddr = globals::game_assembly + offsets::Globals::il2cpp_handle_base + offset * 0x28;
	uint32_t limit = m.read<uint32_t>(baseAddr + 0x10);

	if (index >= limit) return 0;

	uintptr_t objAddr = m.read<uintptr_t>(baseAddr);
	if (!objAddr) return 0;

#define TEST_BIT(value, bit) (((value) & (1 << (bit))) != 0)

	uint32_t bitMask = m.read<uint32_t>(objAddr + ((index >> 5) << 2));
	if (!TEST_BIT(bitMask, index & 0x1f)) return 0;

	uintptr_t ObjectArray = m.read<uintptr_t>(baseAddr + 0x8) + (index << 3);
	return m.read<uint8_t>(baseAddr + 0x14) > 1 ? m.read<uintptr_t>(ObjectArray)
		: ~m.read<uint32_t>(ObjectArray);
}

uint64_t decryption::decrypt_base_networkable(uint64_t base_networkable) {
	signed __int64* v3; // rbx
	int v5; // eax
	bool v6; // zf
	signed __int64 v7; // rcx
	signed __int64 v22; // [rsp+20h] [rbp-28h] BYREF
	__int64* a2;
	__int64 a3;

	a2 = &v22;
	v22 = m.read<uint64_t>(base_networkable + 24);
	LODWORD(a3) = 2;
	do
	{
		v5 = *(DWORD*)a2;
		a2 = (signed __int64*)((char*)a2 + 4);
		*((DWORD*)a2 - 1) = (2 * (((v5 - 36061522) ^ 0x73999BB1) + 726187055)) | ((((v5 - 36061522) ^ 0x73999BB1u)
			+ 726187055) >> 31);
		v6 = (DWORD)a3 == 1;
		a3 = (unsigned int)(a3 - 1);
	} while (!v6);
	return Il2cppGetHandle(v22);
}

uint64_t decryption::decrypt_base_networkable_list(uint64_t base_networkable) {
	__int64 a2;
	__int64 v3; // rbx
	signed __int64* v5; // rcx
	int v6; // eax
	bool v7; // zf
	signed __int64 v8; // rcx
	signed __int64 v23; // [rsp+40h] [rbp+8h] BYREF

	v5 = &v23;
	v23 = m.read<uint64_t>(base_networkable + 24);
	LODWORD(a2) = 2;
	do
	{
		v6 = *(_DWORD*)v5;
		v5 = (signed __int64*)((char*)v5 + 4);
		*((_DWORD*)v5 - 1) = (((v6 - 784061614) ^ 0xA406ACCA) + 907435896) ^ 0xB6679C03;
		v7 = (_DWORD)a2 == 1;
		a2 = (unsigned int)(a2 - 1);
	} while (!v7);
	return Il2cppGetHandle(v23);
}

uint64_t decryption::decrypt_player_eyes(uint64_t player_eyes) {
	signed __int64* a2;
	__int64 a3;
	signed __int64* v3; // rbx
	int v5; // eax
	unsigned int v6; // eax
	bool v7; // zf
	signed __int64 v8; // rcx
	signed __int64 v23; // [rsp+20h] [rbp-28h] BYREF

	a2 = &v23;
	v23 = m.read<uint64_t>(player_eyes + 24);
	LODWORD(a3) = 2;
	do
	{
		v5 = *(_DWORD*)a2;
		a2 = (signed __int64*)((char*)a2 + 4);
		v6 = (((v5 - 1900067576) << 8) | ((unsigned int)(v5 - 1900067576) >> 24)) ^ 0x23E2D133;
		*((_DWORD*)a2 - 1) = (v6 << 21) | (v6 >> 11);
		v7 = (_DWORD)a3 == 1;
		a3 = (unsigned int)(a3 - 1);
	} while (!v7);
	v8 = v23;

	return decryption::Il2cppGetHandle(v23);
}

uint64_t decryption::decrypt_player_inventory(uint64_t player_inventory) {
	__int64 a2;
	signed __int64* a3;
	__int64 v3; // rbx
	int v5; // r9d
	unsigned int v6; // edx
	unsigned int v7; // eax
	signed __int64 v8; // rcx
	signed __int64 v24; // [rsp+20h] [rbp-28h] BYREF
	a3 = &v24;
	v24 = m.read<uint64_t>(player_inventory + 24);
	v5 = 2;
	do
	{
		v6 = *(_DWORD*)a3;
		v7 = *(_DWORD*)a3;
		a3 = (signed __int64*)((char*)a3 + 4);
		a2 = (((v7 << 12) | (v6 >> 20)) - 2036272215) ^ 0xB392FC62;
		*((_DWORD*)a3 - 1) = (2 * a2) | ((unsigned __int64)(unsigned int)a2 >> 31);
		--v5;
	} while (v5);
	v8 = v24;

	return decryption::Il2cppGetHandle(v24);
}

__int64 decryption::decrypt_player_held_item(long long* value) {
	int* v1; // rax
	int v2; // r8d
	unsigned int v3; // edx
	int v4; // ecx
	long long v6; // [rsp+0h] [rbp-18h] BYREF

	v1 = (int*)&v6;
	v2 = 2;
	v6 = *a1;
	do
	{
		v3 = *v1;
		v4 = *v1++;
		*(v1 - 1) = ((((v4 << 25) | (v3 >> 7)) ^ 0x506DB171) + 878459239) ^ 0x87DEA084;
		--v2;
	} while (v2);
	return v6;
}
