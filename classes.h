#pragma once

// header file for classes this will contain errors.

class BaseEntity : BaseNetworkable {
private:
    List<BaseEntity.%f804c34f4e76acb38697667dc08fe91ac2358224> _pendingFileRequests; // 0x80
	List<%351a77e179018753a7cafbf5168085d59ad47ff3> menuOptions; // 0x88
	float %8b4cdcfe02f31b4e1895acb086106fb21dc67725; // 0x90
	Action %5271648065f262c2672550ebd1f6e5199a4f8f56; // 0x98
public:
	Bounds bounds; // 0xA0
	GameObjectRef impactEffect; // 0xB8
	bool enableSaving; // 0xC0d
	bool syncPosition; // 0xC1
	Model model; // 0xC8
	BaseEntity.Flags flags; // 0xD0
	uint %fd3f7c40ff153495df25270c3ab646e090e95153; // 0xD4
	ulong %6c88d55641aa29e58b4b5286ec78199dd6ee4c7b; // 0xD8
	ItemSkin itemSkin; // 0xE0
	bool HasBrain; // 0xE8
private:
	float %d6a8e255307dcc1202eefb77dea86d2973c32abe; // 0xEC
	bool %610de0bbd97fd596d2f20062dd56bf7786ba735e; // 0xF0
	Action %c131f5e5a2f1a1c9e708ae4511677e3872d74468; // 0xF8
	ulong %2418525fca3b4298554f00eddfba27bd619f8589; // 0x100
	uint %a061b45970b49f9aad00b12db7955a7bdce8e693; // 0x108
	bool %77ab0649757a81e57ebd0466d2fb66068ac2e38a; // 0x118
protected:
	List<TriggerBase> triggers; // 0x120
private:
	%8d778223057eb870fa903a7dda20a2ada2ad9c64[] %7b2b57725244589e9730322f0ec07d133a2b6cad; // 0x128
	List<EntityComponentBase> _components; // 0x130
	float %8f77b556a2410835fbfeafb98a46f68e4b881566; // 0x138
	BaseEntity addedToParentEntity; // 0x140
protected:
	protected string _name; // 0x148
private:
	Action %c985c4da80c458ac418f9cacd984bbd7b54e6815; // 0x150
protected:
	Ragdoll ragdoll; // 0x158
private:
	List<%f3c89f6ae9ea2f32bb0021098a802b003c7d4f2e> %89c0720c5b2e96e1f4b11b2ced3d7abd265bf0b5; // 0x160
    BuildingPrivlidge %eefc2316323a16a81c4bb2cf794c659ac51643db; // 0x168
protected:
	bool %7214a794a9e0de16abe8e45a95d948939e08b82d; // 0x170
	bool %42c51104ed175b7b92e534225449fbda61a4ca62; // 0x171
	bool %05a5389ac2b7f9f37909096bd59a004006fa8909; // 0x172
	%9b206962b78a12f0ee7d4b609d780d0532b120f9 %4fb52941c299ae20b96eecbf2208aa9386965be0; // 0x178
private:
    float %6fdac4ca637f83826fe6d03add49c111319ff5ae; // 0x198
};

class BasePlayer : BaseCombatEntity {
private:
	%2d2ab65b1e601d413b8d3d33d91433c6dedf7f7f<PlayerEyes> eyesValue; // 0x250
	GestureConfig %cbcbfced8c1b32a9b034e4cd71d98545f7931174; // 0x258
	Action<BasePlayer> %e8979fc4aa5df32cc9576e15161a1bcd9c1b4aca; // 0x260
	Collider %32919e141478e897b5cb6c021f5ac555704e0c3f; // 0x268
	string %bf73197d2de984df49447c97b79c07cd3153a468; // 0x270
	%2d2ab65b1e601d413b8d3d33d91433c6dedf7f7f<CapsuleCollider> %af4cc03d13d3858378392549ec1ca7cbf9cadac7; // 0x278
	Action<BasePlayer> %8fcfcefe24a8b043a9866d7b849691a9b2ad2052; // 0x280
	BaseEntity %0fa89bb1058d3a69990845e7c1cc151230bdbd3c; // 0x288
public:
	%3b08a7eba183679dec6d616c301d133dd728eaf0 %12bdcb351c1e1b7e1e11b2493fadd6b189ab4e2d; // 0x290
private:
	Action<BasePlayer> %d0aae20ead226a61cf87eec2d9d71734fce3c6c9; // 0x298
public:
	PlayerModel %8c86991264b3911c717aae63c7b3a976216ba654; // 0x2A0
	BaseCollision collision; // 0x2A8
	BaseMovement movement; // 0x2B0
private:
	Action<BasePlayer> %6bd2fceb15eb5edd9bda620723f8c9cb5bcf9c9f; // 0x2B8
	Dictionary<string, %aa78c0e78c4df24389f9a8755a2b4c25e3a40dd1> %ea2cea42304e5ee8f4437cf015952de90d266fb7; // 0x2C0
	Rigidbody %c279b0b607d42f8cc70033614d853ee38bf69b82; // 0x2C8
	BaseEntity %9f40b1f20a14fe3edd0bdd1872b2053a98be66da; // 0x2D0
	int %78cae8812b21f07bedb4c67f62b254247fa55c1e; // 0x2D8
public:
	long %5bc280886843ad357db61b434f8aaef4968ec044; // 0x2E0
private:
    Action<BasePlayer> %95e542988867b4b9c52ea2d3c1df86081e97a672; // 0x2E8
public:
	bool %c237821a904967be95b413b9891058c1099852b4; // 0x2F0
	bool %e81dcc4aa129b16637d87b240cc2477b4c402fba; // 0x2F1
	%52a06ca6a99a17b72cf783b98442d8ed98c61713 %7b8dd8c912452f66fdcfc1ff1c5c29da7e1a22c3; // 0x2F8
private:
    Action %353ad7a01768987bd950e588e902eed5faf874d4; // 0x300
public:
    List<%91d55a94f495f4634cf7cf7bf26fb1550df630a4> %0cd8b55b9592f58c381d71a0a015905ada5d6c6d; // 0x308
	PlayerModifiers modifiers; // 0x310
private:
    %b151a033a0d3ebd54ada8e7919e1344c0f5095ed %6adac9bdba56143c003e271a70a3d3c8e3a3ee66; // 0x318
public:
    int %a2beaca27f835dbd3099b5c55eb011f5c8091c24; // 0x320
	int %fa3ca85966d4c07b15e889a8af40f2ed87c8d986; // 0x324
public:	
    uint %caa4e91157b12dc54c1c28d873004879450b2056; // 0x328
	Collider %e892e42000380f4c5825479f514463c563bd031d; // 0x330
public:
    %91d55a94f495f4634cf7cf7bf26fb1550df630a4 %6fa7da4fb9d23261f95f6eb3b7ef25ab68997049; // 0x338
	PlayerInput input; // 0x340
private:
    BaseEntity %3a8b3147be875a53b3ad771894901f21e0e59171; // 0x348
	Vector3 %63194293388530b65074af0b43844aa19c568efd; // 0x350
	float %3dddd1b701c9d412d34b3fa241e0b748f26d2d1b; // 0x35C
	bool %2cc56b60849daae3b2755c805e2154b7ad221b94; // 0x360
	bool %5788c0b4fa1d97268b0b54d839d8a59fe92367cc; // 0x361
	bool %0aa1aa6efbfde531b253534bfbcdfeaa5cf2b3b5; // 0x362
	bool %d526ad36edd6fc0b7f689042e3234a50b7aaea10; // 0x363
	bool %1efcd65b7a7f633ba810210d0e1864ad93bc2098; // 0x364
	bool %7f0fd69e419d25c7fe3b857c441825334b9c593d; // 0x365
	uint %a283d0138d2b85ae800e46f7e11b63d3b7ee75ff; // 0x368
	%aa78c0e78c4df24389f9a8755a2b4c25e3a40dd1 %6e605b4ee09457b658b8ea44edff9aa5de0c2eb8; // 0x36C
public:
    BasePlayer.CameraMode %0bb23bbeb4e72e78ece93b982a31c48f612e1268; // 0x370
	BasePlayer.CameraMode currentViewMode; // 0x374
private:
    Vector3 %83ee99c635832edc9292d76014be724d5198dd50; // 0x378
    Vector3 %8a3ea07ceea3c1fc33c8b8072252d90801e582e8; // 0x384
    bool %ca86969e41ba4e56ebf08f926821b287bdce6131; // 0x390
public:	
    ViewModel GestureViewModel; // 0x398
	PlayerMetabolism metabolism; // 0x3A0
private:
    float %ea77edb8a2dbc634650e1d4466b317331d1e3cf4; // 0x3A8
	%aa78c0e78c4df24389f9a8755a2b4c25e3a40dd1 %3112b46d451bbf1d7381f71e78cd61c2b58c651e; // 0x3AC
	%7eb8e6fa89fdd4988ea1b4d6cb3d4e5e837034b0 %ffa1be925089725de080e0372e99777b3cd574fc; // 0x3B0
	float %f76e3e921cd82987ad668667b8759f8e52523453; // 0x3B4
	float %d284938deb38c7d0d4a1d5c3bd98c732d749ade6; // 0x3B8
	float %8d6c69fb551a73585ded51fbf3523b8eedfa236c; // 0x3BC
	GameObject _lookingAt; // 0x3C0
	int %feab4e2c3cda3152368df7c9948ea15889ffcd49; // 0x3C8
	int %c2ffc3e6da2bf28fe9da4d2f12ebe37a47fb6e0c; // 0x3CC
	Vector3 %c511ae4a01eee75baf911a549fc54799d8543a46; // 0x3D0
	PhoneController activeTelephone; // 0x3E0
	Action<BasePlayer> %85ffdcf372b63d837d44d737e50b5ebd48bb812b; // 0x3E8
	bool %61e8c48d5de4f6816927569c2880eb7530bbf321; // 0x3F0
	Action<BasePlayer> %56b20bf9a2dd4911afc1dc68d6869459f387323e; // 0x3F8
	Action %988315555eb71fe7b41225e1d20307b872106184; // 0x400
	%001cb85b9be666270b9d18546306436b6cd18de9 %968a57f4b0709e40dde1a2276e95a9fa9bd64f84; // 0x408
	%aa78c0e78c4df24389f9a8755a2b4c25e3a40dd1 %017a8071ac387e5eef90711f9fd678f494318e1f; // 0x40C
	Action<BasePlayer> %6e9725cb516d1299ec9cef9988a98c0953bbd78c; // 0x410
	WaterBody %9d2b0f7815ad205c486515efb6eb38aec0f97f73; // 0x418
	float %b70c3e3dee27ece849af50e50ed1a7f59c9266f3; // 0x420
	int %dbe7c2eea3194f282f2e93ad8abfdc597a410473; // 0x424
public:	
    float %03843ab63614592132e0e067861109dabfc55ba2; // 0x428
	ulong currentTeam; // 0x430
private:
    Action<BasePlayer> %0e2e8aa2e4738d501f4b0f2a5d3872eb7b3d2a4a; // 0x438
public:
    string %a604c9a8335c35ceab71c3501ad44d5f13230039; // 0x440
private:
    float %3ed13d83e630f8c34f2428cf9f177cb4247130ea; // 0x448
	ulong %772547ff04293680bef255ffeac203f5556de828; // 0x450
	int %71252a75ed5f26e11cbb1a40decf1e843d6e52ce; // 0x458
	encryptedValue<%fd67cb5245fc6ad8204adfe371ab7547b99a908f> clActiveItem; // 0x460
public:
    PlayerVoiceRecorder %230c6d812e6ffb980f0dfc96512dc38a3c0f4878; // 0x470
private:
    Action<BasePlayer> %fa6bafe11d9da03a4cea54d92a891ef82daa293c; // 0x478
	bool %6f82101cc530bc8d39ffb7f6298ab2243a75588a; // 0x480
public:
    List<BaseMission.%94afbcf1a7adf255009813a34801dac42207a419> missions; // 0x488
private:
    int %239f7338e81803fe8edf77bc2344616a9db3bfb6; // 0x490
	Queue<string> %21571faf9579f1b46accc1a8b275f50493d354dc; // 0x498
	%8d778223057eb870fa903a7dda20a2ada2ad9c64 %c5ffb4ba6cc95f3eb5f5f0f8aaa3b9b9700d012b; // 0x4A0
	float %d109442166bd9dd1bd4e90f8432413ff01604e87; // 0x4B0
	bool %5fbd20bac3188d6eef601ce68a5abb2fa5f4630e; // 0x4B4
public:
    BaseEntity PetEntity; // 0x4B8
private:
    float %bd792d4a046452ef159c7ee670f1c020f5e85644; // 0x4C0
public:	
    uint %72636a5e198a42d2ca455afdb87369ec74f84524; // 0x4C4
	%e415c2039a975698207ac5eff5d621dc0c83f32a %757d53bab44cec9b901ff8e29af334bb1ddef2a9; // 0x4C8
private:	
    Action<BasePlayer> %1abd5078b0de2504c9785f43ba7845b1a8d709b8; // 0x4D0
	bool %829f2c643ac8f6dca41b9b22d42c6e4eab31c724; // 0x4D8
	%aa78c0e78c4df24389f9a8755a2b4c25e3a40dd1 %e1eecca409a11e27d06f72731c01575441eb8791; // 0x4DC
	float %4136adbfed00ce7d52a0bdc82b565b33f052a1dd; // 0x4E0
	
    public PlayerVoiceSpeaker %f2a1f240be841312bba47d69844e5ca7d246517f; // 0x4E8
	
    private bool %446ea9ee2838ba3d4a17e2285444d2df1b933c90; // 0x4F0
	private float %6d92e9253192e11208880b465c065695c2a3ab56; // 0x4F4
	
    protected string _displayName; // 0x4F8
	
    private bool %88301b708ae42e95e3adfeaff9c8334970b9b874; // 0x500
	private int %f6a0445c3e38f94d926299e6b7e0215fcb700b1f; // 0x504
	private %aa78c0e78c4df24389f9a8755a2b4c25e3a40dd1 %b68786576eff97af0b9ea9a1f8228f4ec85ed875; // 0x508
	private float %edd1cc09d6c2ea6e86389901b39767eebfef62b6; // 0x50C
	private float %3985e4a380f0cdb0f72bc146c419710e0b406f84; // 0x510
	private encryptedValue<float> %44e04c881a9319dcca79fa967e555017ecfaf6a8; // 0x514
	private %1e935c2103fc3cdfa9d5ad2ad5da3d3a4c442a88 %a34cfceaaa6aeb7e2c0300b3864a22bef13fd4bf; // 0x520
	private Action<BasePlayer> %54af99c0050e6b94a7cbcdd93b79e00c91a07d22; // 0x528
	private BasePlayer.TutorialItemAllowance %e28c2a3fef6393895ff3cf6bc201cb57da3e0d8d; // 0x530
	private float %9233eb70260cc0f4449d2d5ca63d5727dbeae288; // 0x534
	private float %b877b10fe189500e10adbc67f2992218359ae8d1; // 0x538
	private float %e39e379af3a0fe0c4b569a27c28aa6f668b1445c; // 0x53C
	private bool %32373e308909b4f5b1c4461c0b0ae604449638d0; // 0x540
	
    public GameObjectRef fallDamageEffect; // 0x548
	public GameObjectRef drownEffect; // 0x550
	public BasePlayer.PlayerFlags playerFlags; // 0x558
	
    private Collider %0394c42bed4a0487c3802626f2c19c20e0b6acec; // 0x560
	
    public %97725e00036e341228ccf19480dec0cee3186792 %26f4543c09678b6e96607bc5d4fc1763c35f8870; // 0x568
	
    private ProtectionProperties cachedProtection; // 0x570
	private %2d2ab65b1e601d413b8d3d33d91433c6dedf7f7f<PlayerInventory> PlayerInventory; // 0x578
	
    public %47125bd2fda808d5f5a98d165bd0037ca3f606fa<ulong> %0603014f920e47388ce1060b2d0762e0a1af1bac; // 0x580
	
    private HeldEntity disabledHeldEntity; // 0x588
	private Action %6ecf3fdcbd995f670edb564b868bbd13d601c581; // 0x590
	private Stopwatch %23a24c4eb389a2a34236e27874dadebcb997f4bd; // 0x598
	
    public encryptedValue<ulong> %7509eee59a9e2a613ff718e0a1d4991b1e182f33; // 0x5A0
	
    private %c833a8a94e56a9061da61aecd0af64757de6dc99 %fc98d1f97d3df90876de56009d8f4043bb9ed24b; // 0x5B0
	
    public int %416c3d16ea017e451ea50fdbaab89902782d933e; // 0x5B8
	public int %dd503cd9959fec46521848051ecac8625e8f2b54; // 0x5BC
	
    private Action<BasePlayer> %8c8f2ebc995cf17b412dd14a3a1fc375a540852f; // 0x5C0
	
    public PlayerBlueprints blueprints; // 0x5C8
	
    private BasePlayer.CapsuleColliderInfo %9d75fa82971428aeb9fedbc311735c55914740fa; // 0x5D0
	private BasePlayer.CapsuleColliderInfo %7ec64086a95d3e69b7f1734625d40ad95f63d2af; // 0x5E4
	private BasePlayer.CapsuleColliderInfo %40f3038a89958987220f154b1eab8cdae9d72392; // 0x5F8
	private BasePlayer.CapsuleColliderInfo %bc6e438ed5a28863eda17d7bbaa681cacee6f5c2; // 0x60C
	private Action<BasePlayer> %94f3f8d96021b79863a9421e3d395c80e5fdc85f; // 0x620
	private float %34b82094f55c9bddcb8420d5918a8b223933088f; // 0x628
	private float %4254376c8bcad178c6b1514c403b7f21428e2e98; // 0x62C
	
    public float weaponMoveSpeedScale; // 0x630
	public bool clothingBlocksAiming; // 0x634
	public float clothingMoveSpeedReduction; // 0x638
	public float clothingWaterSpeedBonus; // 0x63C
	public float clothingAccuracyBonus; // 0x640
	public bool equippingBlocked; // 0x644
	public float eggVision; // 0x648
	public List<%91d55a94f495f4634cf7cf7bf26fb1550df630a4> %d0c77767273bcca3ef23a54188412df67843606b; // 0x650
	public BaseEntity designingAIEntity; // 0x658
};