enum PlayerFlags {
		Unused1 = 1,
		Unused2 = 2,
		IsAdmin = 4,
		ReceivingSnapshot = 8,
		Sleeping = 16,
		Spectating = 32,
		Wounded = 64,
		IsDeveloper = 128,
		Connected = 256,
		ThirdPersonViewmode = 1024,
		EyesViewmode = 2048,
		ChatMute = 4096,
		NoSprint = 8192,
		Aiming = 16384,
		DisplaySash = 32768,
		Relaxed = 65536,
		SafeZone = 131072,
		ServerFall = 262144,
		Incapacitated = 524288,
		Workbench1 = 1048576,
		Workbench2 = 2097152,
		Workbench3 = 4194304,
		VoiceRangeBoost = 8388608,
		ModifyClan = 16777216,
		LoadingAfterTransfer = 33554432,
		NoRespawnZone = 67108864,
		IsInTutorial = 134217728,
		IsRestrained = 268435456,
		CreativeMode = 536870912,
		WaitingForGestureInteraction = 1073741824,
		Ragdolling = -2147483648
};

enum CameraMode {
		FirstPerson,
		ThirdPerson,
		Eyes,
		FirstPersonWithArms,
		DeathCamClassic,
		Last = 3
};

enum LifeState {
	Alive = 0,
	Dead = 1
};

enum Faction {
	Default,
	Player,
	Bandit,
	Scientist,
	Horror
};

enum AmmoTypes {
	PISTOL_9MM = 1,
	RIFLE_556MM = 2,
	SHOTGUN_12GUAGE = 4,
	BOW_ARROW = 8,
	HANDMADE_SHELL = 16,
	ROCKET = 32,
	NAILS = 64,
	AMMO_40MM = 128,
	SNOWBALL = 256,
	SPEARGUN_BOLT = 512,
	TORPEDO = 1024,
	MLRS_ROCKET = 2048,
	MISSILE_SEEKING = 4096,
	CATAPULT_BOULDER = 8192,
	BALLISTA_ARROW = 16384,
	DART = 32768,
};
