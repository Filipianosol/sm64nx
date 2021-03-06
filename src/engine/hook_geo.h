#pragma once
#include <ultra64.h>
#include "sm64.h"
#include <vector>
#include "xxhash64.h"

namespace sm64::hook::geo
{
	enum Id : u64
	{
		NONE = 0,
		blue_coin_switch_geo = 0x9eefd4221aeb10a5,
		test_platform_geo = 0x4731920f7795957b,
		amp_geo = 0x5809fd80c9b1df3f,
		cannon_base_geo = 0xfd6ba5c733f08bd7,
		cannon_barrel_geo = 0x56083bc984c47521,
		chuckya_geo = 0x7735342181f0bbae,
		purple_switch_geo = 0x419fd2bb7a605024,
		checkerboard_platform_geo = 0xd501cc0e05231719,
		heart_geo = 0x965d6bdccbe34b34,
		flyguy_geo = 0xff62320974ac8a80,
		shyguy_geo = 0x6c3755159126e69c,
		breakable_box_geo = 0x22e774c6b4f87675,
		breakable_box_small_geo = 0x28fa5e6ccecc5dec,
		bowling_ball_geo = 0x6a18bb138e44c949,
		bowling_ball_track_geo = 0x1022521a34c6f0e7,
		exclamation_box_geo = 0x66d41baf23278db7,
		goomba_geo = 0xf4673c090ffab834,
		black_bobomb_geo = 0x6f0a19302a8970c3,
		bobomb_buddy_geo = 0xf93bd3dd50331caf,
		metal_box_geo = 0xd6de9f71b29e62ee,
		exclamation_box_outline_geo = 0x78482563f2820d43,
		koopa_shell_geo = 0x936a70317fd1694c,
		koopa_shell2_geo = 0xffc6359836474d5f,
		koopa_shell3_geo = 0xe7d5f84ebc407180,
		mist_geo = 0x88363452e2c56d37,
		white_puff_geo = 0xb8657047c32241eb,
		explosion_geo = 0x92b746d28a66615d,
		butterfly_geo = 0x053d90fbcc4dc674,
		yellow_coin_geo = 0xf6ea79cd549d5eea,
		yellow_coin_no_shadow_geo = 0x0da4ffe05faf6efe,
		blue_coin_geo = 0x8d946e089f23b6a4,
		blue_coin_no_shadow_geo = 0xf8e6ece066547260,
		red_coin_geo = 0xd66cb35aeab104b8,
		red_coin_no_shadow_geo = 0xf62e6e9b49beee36,
		warp_pipe_geo = 0x99be68bcd8f4bab2,
		castle_door_geo = 0xa019340458ea0314,
		cabin_door_geo = 0x01df1da29373fc35,
		wooden_door_geo = 0x5a6a6563307dc077,
		wooden_door2_geo = 0x405cdecb10799f02,
		metal_door_geo = 0xb74d5022101a2af3,
		hazy_maze_door_geo = 0x05b6a00244d01de5,
		haunted_door_geo = 0x6251283ca9cb81e3,
		castle_door_0_star_geo = 0x79d2aee77c5582d6,
		castle_door_1_star_geo = 0xda3a204f88b4165e,
		castle_door_3_stars_geo = 0xb966ee58a69e42b6,
		key_door_geo = 0xb4f11ddbe3e217b6,
		bowser_key_geo = 0x865637c201ede64d,
		bowser_key_cutscene_geo = 0x8f5e25adee72bee8,
		red_flame_shadow_geo = 0x4787ee0cf6f59c1d,
		red_flame_geo = 0xec3cdf4cca21c582,
		blue_flame_geo = 0xddc49c056820755e,
		fish_shadow_geo = 0xf8e550a3628e1107,
		fish_geo = 0xf6b21e77dcf9fb93,
		leaves_geo = 0xcc3a6aede55e11e2,
		number_geo = 0xc833b37294863fcc,
		mushroom_1up_geo = 0x81105fadc4515cfe,
		star_geo = 0x9df265eeb80668be,
		dirt_animation_geo = 0xf535b071ad03dd54,
		cartoon_star_geo = 0xb7eccc3f46c0b00f,
		transparent_star_geo = 0x9926f4474e606891,
		white_particle_geo = 0xc3c9a96a5661de56,
		wooden_signpost_geo = 0x3bc055b35f026397,
		bubbly_tree_geo = 0xae91fa2e31ec215d,
		spiky_tree_geo = 0xf16410e4141b641d,
		snow_tree_geo = 0x1450b6097eee969b,
		spiky_tree1_geo = 0xba03107f95337300,
		palm_tree_geo = 0x4db665c2738a7456,
		bubble_geo = 0x2213960797e8a6f2,
		purple_marble_geo = 0xdc95456438800dcc,
		smoke_geo = 0x9b0fb0a2f99566de,
		burn_smoke_geo = 0xf31149d8afe40944,
		spot_on_ground_geo = 0xd9afe1a8e3887eb2,
		mario_TODO_geo_0000E0 = 0x59c54dc19994cd39,
		water_waves_surface_geo = 0xcb3f3acc409d03ee,
		water_waves_geo = 0x7848fd8751adbdb6,
		sparkles_geo = 0x286690b830e12ac6,
		water_splash_geo = 0x6b1d1ce79a6b1e0e,
		sparkles_animation_geo = 0x4cf00a4592822351,
		birds_geo = 0x539137a10042afa5,
		peach_geo_000098 = 0x033254fb2907d9da,
		peach_geo_000254 = 0x7a21c59d6fbab2cc,
		peach_geo = 0xe3e0e827443d69c1,
		yoshi_geo = 0xfb8ffb73dbc41b9d,
		bubba_geo = 0x3557383a37b9bbdc,
		wiggler_head_geo = 0xeed289f787ebd4d6,
		enemy_lakitu_geo = 0xc9d257ee93b214ba,
		spiny_ball_geo = 0xa924a9b22df614f9,
		spiny_geo = 0x0c014d600ece3242,
		bowser_flames_geo = 0x3fb3224d0e4dbecf,
		invisible_bowser_accessory_geo = 0xeda0c4adf790a654,
		bowser_1_yellow_sphere_geo = 0xe5f6737ecaea0bca,
		bowser_geo_0000D8 = 0xb84f29e85896e74b,
		bowser_geo_000424 = 0x13adee2b2010015b,
		bowser_geo_000770 = 0x81505c5fecd44198,
		bowser_shadow_geo = 0xfb7d77e4fbae6eb9,
		bowser_geo = 0x62f8cf466f4e8906,
		bowser2_geo = 0x14e870c593bc445c,
		bowser_bomb_geo = 0xa91c4d10aaff84a2,
		bowser_impact_smoke_geo = 0x407c408fb6eeae4f,
		skeeter_geo = 0x524de70c334f8308,
		seaweed_geo = 0x4c95fbdbc0b91650,
		water_mine_geo = 0x2b2051d3df9ce3c2,
		cyan_fish_geo = 0x9d36f00f2761b878,
		bub_geo = 0xb92b97b8328af4d0,
		water_ring_geo = 0xc18249d119307dc0,
		treasure_chest_base_geo = 0xd2240be70b75dcda,
		treasure_chest_lid_geo = 0x5491f79d75320338,
		koopa_flag_geo = 0x6ba611ad80929e42,
		wooden_post_geo = 0xf6cb44bba4ff53f1,
		koopa_without_shell_geo = 0xb2fc89b4920909d3,
		koopa_with_shell_geo = 0xa770293f67c04be4,
		piranha_plant_geo = 0xb05ffb740878f8d3,
		whomp_geo = 0x6fec3e07bd362525,
		metallic_ball_geo = 0x558da1eb62c6cb90,
		chain_chomp_geo = 0x59813f6356b89fc4,
		lakitu_geo = 0x81f697c295aade82,
		toad_geo_000114 = 0x1b38f701e4e8a51e,
		toad_geo_00027C = 0xa3a25035d0cc2f37,
		toad_geo = 0xa65850f61e075c01,
		mips_geo = 0x599eb017979092d2,
		boo_castle_geo = 0x8b941e715ba2d576,
		moneybag_geo_000000 = 0x8e396227facc22d2,
		moneybag_geo_000078 = 0x365fcf3e13c3e888,
		moneybag_geo = 0x02a90c82b62c7c62,
		mr_i_geo = 0x6d1739bafc2b1be6,
		mr_i_iris_geo = 0x9019ee5ff38fbebc,
		swoop_geo = 0x326c4efd58a3197a,
		snufit_geo = 0x89de0258c5ef5e99,
		dorrie_geo = 0x52f0b707a5013f36,
		scuttlebug_geo = 0x78d134287a7c451f,
		yellow_sphere_geo = 0x419dccb60e53a635,
		hoot_geo = 0x585ea3d715affa78,
		yoshi_egg_geo = 0x657b5935db91153e,
		thwomp_geo = 0x58af9c81b6495504,
		bullet_bill_geo = 0x387fad23210a9e52,
		heave_ho_geo = 0x0cb67111cd35c1ff,
		bully_geo = 0x7df81e6d519688f7,
		bully_boss_geo = 0x63463d453a690f80,
		blargg_geo = 0x4d08ec01f8f51a78,
		king_bobomb_geo = 0xacdf7fd55430d35e,
		water_bomb_geo = 0x68fe21e6f2255a0b,
		water_bomb_shadow_geo = 0x66f56580145e4e0c,
		clam_shell_geo = 0xa687d97032065534,
		sushi_geo = 0x6ef9714dd5877ae5,
		unagi_geo = 0xa60962a4f6ffb673,
		klepto_geo = 0x89ca9434c1047117,
		eyerok_geo_0002AC = 0x643d0e33f124d7bc,
		eyerok_left_hand_geo = 0x472e5defe7bc8c34,
		eyerok_right_hand_geo = 0x5abd5a3c43d3a966,
		pokey_head_geo = 0x3abf87a8356ca669,
		pokey_body_part_geo = 0x58ed4d8ca1e9d2a6,
		monty_mole_geo = 0x89b96d917676be5c,
		ukiki_geo = 0x7797d90b2f4e4fec,
		fwoosh_geo = 0x565f6ad9dccaaf94,
		spindrift_geo = 0xeaf0a7e61538b1d5,
		penguin_geo = 0xc38c83e92eb8c898,
		mr_blizzard_hidden_geo = 0x6799ec6dc3e5968a,
		mr_blizzard_geo = 0xc1fb80f71cfe84ba,
		springboard_top_geo = 0x92c8bda4ebbe1e23,
		springboard_spring_geo = 0xc408a31c3325e4be,
		springboard_bottom_geo = 0xe86d4b204348b6e2,
		cap_switch_geo = 0xc41c6d42e6952724,
		bookend_part_geo = 0x677935979af9090e,
		bookend_geo = 0xce43ebc835e779e0,
		haunted_chair_geo = 0xf68b1223bd78c732,
		small_key_geo = 0x8e3c4a09a0e6a63c,
		mad_piano_geo = 0x7745984c1debb261,
		boo_geo = 0x5c4985f63907f8f4,
		haunted_cage_geo = 0x1bc1a5c49b61a5d6,
		geo_bbh_0005B0 = 0x20e5a3e78dbdb606,
		geo_bbh_0005C8 = 0xda59584ea3b06781,
		geo_bbh_0005E0 = 0x922cde69db7dfb8d,
		geo_bbh_0005F8 = 0xd4a3c174f62a4b2c,
		geo_bbh_000610 = 0x91e84dab94d9d939,
		geo_bbh_000628 = 0x6bc829beb590a21c,
		geo_bbh_000640 = 0x0dcfacdc6e9ea322,
		geo_bbh_000658 = 0x28489bf04361ba73,
		geo_bbh_000670 = 0xa708ebdbd3c0a3a9,
		geo_bbh_0006B0 = 0x72f4b52128fad89f,
		geo_bbh_0006E8 = 0xb9ef722d2b413164,
		geo_bbh_000730 = 0x254bb9649b0d6d73,
		geo_bbh_000750 = 0xde99c9521db6b39a,
		geo_bbh_000768 = 0xeecf585aecd6815a,
		geo_bbh_0007B0 = 0x13f74cbc05e83039,
		geo_bbh_0007D0 = 0x98a6b4e460ea2d16,
		geo_bbh_000800 = 0xa6a43e46edd251b0,
		geo_bbh_000828 = 0x6748811d64c45c24,
		geo_bbh_000860 = 0x92ae49c78f0c62db,
		geo_bbh_000888 = 0x823c78d2d5566abb,
		geo_bbh_0008B0 = 0x37e3b5323aff56e0,
		geo_bbh_0008E8 = 0x7ccf5e1074e1e37c,
		geo_bbh_000950 = 0x3251f62a5d07a865,
		geo_bbh_0009C8 = 0xdec3ad97b25d40d8,
		geo_bbh_000A18 = 0xa6b0fee22f0b9c22,
		geo_bbh_000A60 = 0x3b0a15a5a1814492,
		geo_bbh_000AD8 = 0x322c1cc7215d9696,
		geo_bbh_000B28 = 0x351fda6b1a1ba0cb,
		geo_bbh_000B88 = 0x7a3b866e578b33f2,
		geo_bbh_000BF0 = 0x044dca2a85b5f4d5,
		geo_bbh_000C38 = 0xcb6351f30a608619,
		geo_bbh_000C88 = 0x8b73cc15d3f26204,
		geo_bbh_000CE8 = 0x7152f9c6f8b0866f,
		geo_bbh_000D20 = 0x06821cc95b517133,
		geo_bbh_000D68 = 0x147df91e11c1e30b,
		geo_bbh_000DB0 = 0x4bd27c26e9a9c93f,
		geo_bbh_000DF0 = 0xc8cab50ca9ee2d7d,
		geo_bbh_000E40 = 0x8c1cec89b220d7dc,
		geo_bbh_000E80 = 0x1fca71a23d0ff2a2,
		geo_bbh_000EB0 = 0xc7bc7a71b47fba59,
		bbh_level_geo = 0xcbfdb174cbbd7e3e,
		geo_bitdw_0003C0 = 0x1a9c2c368c9f5578,
		geo_bitdw_0003D8 = 0x4839bf99d7b2d836,
		geo_bitdw_0003F0 = 0xe84464c39ca94fbf,
		geo_bitdw_000408 = 0x8d31cb7c7129b18c,
		geo_bitdw_000420 = 0xf91367e7f3242e4e,
		geo_bitdw_000438 = 0xa40aa86026d842a8,
		geo_bitdw_000450 = 0xda93f0bc325c76b6,
		geo_bitdw_000468 = 0x7c69cbb7b8a2c323,
		geo_bitdw_000480 = 0x6277cf1d7e1bc795,
		geo_bitdw_000498 = 0x90b86a73b9729a6d,
		geo_bitdw_0004B0 = 0x698c0a0d73cf68e7,
		geo_bitdw_0004C8 = 0xee153199df4c2d37,
		geo_bitdw_0004E0 = 0xbcb28091e28fda38,
		geo_bitdw_0004F8 = 0x9a36032827b8010e,
		geo_bitdw_000510 = 0x36641b56f973e09e,
		geo_bitdw_000528 = 0xea451bff62d27c63,
		geo_bitdw_000540 = 0xe98c1b5cc6bc05c7,
		geo_bitdw_000558 = 0xea12a7a04d2b0bbd,
		geo_bitdw_000570 = 0x1b89294a989619c8,
		geo_bitdw_000588 = 0x30b93a457054aee4,
		geo_bitdw_0005A0 = 0xa50c6de8288112f9,
		geo_bitdw_0005B8 = 0xdb15b7e3599d7523,
		geo_bitdw_0005D0 = 0x97e7e65d7e80478d,
		geo_bitdw_0005E8 = 0xea7c96e649f14cd3,
		geo_bitdw_000600 = 0x7c3e345ef30482ff,
		bitdw_level_geo = 0x0631db11fcc9500d,
		bitfs_geo_0004B0 = 0xf70aef1d0e21b92f,
		bitfs_geo_0004C8 = 0xce6ecffb5d51c5a0,
		bitfs_geo_0004E0 = 0x83c209225c0dcbc8,
		bitfs_geo_0004F8 = 0x9045e169ed84a262,
		bitfs_geo_000510 = 0xf68ac9fb8a2a10f7,
		bitfs_geo_000528 = 0x5e54ad30a5a7ca68,
		bitfs_geo_000540 = 0x2ab5d7c20748a116,
		bitfs_geo_000558 = 0x9f03ecf7a8931929,
		bitfs_geo_000570 = 0x174bdeeecfc4c9ce,
		bitfs_geo_000588 = 0x470ff72f83bca498,
		bitfs_geo_0005A0 = 0xe5f4b13fcbb55ae6,
		bitfs_geo_0005B8 = 0xc58cb04979a2dcb2,
		bitfs_geo_0005D0 = 0xb92688f7a1321b9d,
		bitfs_geo_0005E8 = 0x7fd1514786d607d9,
		bitfs_geo_000600 = 0xd690bdf1df0fa2c4,
		bitfs_geo_000618 = 0xd65eeec5a13c4f38,
		bitfs_geo_000630 = 0x244bc66da85eda67,
		bitfs_geo_000648 = 0x35414a1a4b5c5a77,
		bitfs_geo_000660 = 0xa3eee44fd50a6ac0,
		bitfs_geo_000678 = 0x42b460fc30e5d877,
		bitfs_geo_000690 = 0xa8d8f65226803b68,
		bitfs_geo_0006A8 = 0x68cbc150e155192a,
		bitfs_geo_0006C0 = 0x8edc69c1bb42809e,
		bitfs_geo_0006D8 = 0xcb5d5e539d214f7d,
		bitfs_geo_0006F0 = 0xc933b02448e66f7e,
		bitfs_geo_000708 = 0xb74e44e7782a8f9a,
		bitfs_geo_000728 = 0x8d7cd37e5e85803b,
		bitfs_geo_000740 = 0x05b61790e8cd3eea,
		bitfs_geo_000758 = 0x429cc2462225ba20,
		bitfs_geo_000770 = 0x9677302a4a4cab0d,
		bitfs_geo_000788 = 0xfc66816f78fb8f68,
		bitfs_level_geo = 0x801eab0fa4c450a1,
		bits_geo_000430 = 0x714fd102561f2260,
		bits_geo_000448 = 0x98531201ce7d19ac,
		bits_geo_000460 = 0xa8bc7c2b901cd9b4,
		bits_geo_000478 = 0xc0152ed68f6146f3,
		bits_geo_000490 = 0x687a36a4871ec2a9,
		bits_geo_0004A8 = 0x44be0e0c2e59e5fb,
		bits_geo_0004C0 = 0xff51f7d946a98cbb,
		bits_geo_0004D8 = 0x2ef35406433d6537,
		bits_geo_0004F0 = 0x3521ba8a4cb5fc1b,
		bits_geo_000508 = 0xbd51fcf7ac9e403e,
		bits_geo_000520 = 0xb01c31b1adb5aa01,
		bits_geo_000538 = 0x25302badecb62ce7,
		bits_geo_000550 = 0xfa362680e6dd6928,
		bits_geo_000568 = 0x03fc59b8058e9a9c,
		bits_geo_000580 = 0x33d3d5360c4308d0,
		bits_geo_000598 = 0x3675fc580b03c4be,
		bits_geo_0005B0 = 0x698497a63f0dc05e,
		bits_geo_0005C8 = 0x6d24ea4dcedf440a,
		bits_geo_0005E0 = 0x7adff520d8705703,
		bits_geo_0005F8 = 0xeecbf79f8779d3bd,
		bits_geo_000610 = 0xd8ab447bdf288b14,
		bits_geo_000628 = 0x4a79ce7f02faf7fd,
		bits_geo_000640 = 0x9410ebbb9f286da6,
		bits_geo_000658 = 0x8de1eb42cbcc1e3a,
		bits_geo_000670 = 0xba404b12cd96f70a,
		bits_geo_000688 = 0x50646cac34cc0261,
		bits_geo_0006A0 = 0x68ffeeb91e7e386f,
		bits_geo_0006B8 = 0xe4039cb9974117c6,
		bits_geo_0006D0 = 0x1ed63777ce4a69f2,
		bits_geo_0006E8 = 0xaf5637e40d930e3c,
		bits_geo_000700 = 0x2445673f947c391d,
		bits_level_geo = 0x65cd9e53df04febb,
		bob_geo_000440 = 0x180cb5f89ad2c121,
		bob_geo_000458 = 0xce8bb074f2a5e74a,
		bob_geo_000470 = 0xb96304d7dd77e8a7,
		bob_level_geo = 0xb0a51523789fb91b,
		bowser_1_level_geo = 0xf2ad7304d503d35c,
		bowser_2_geo_000170 = 0xece9887d109b0135,
		bowser_2_level_geo = 0xe71ade71e234c069,
		bowser_3_geo_000290 = 0x1184c3a5b05d773d,
		bowser_3_geo_0002A8 = 0x784dc3bb35529fb4,
		bowser_3_geo_0002C0 = 0x6d76f31714bb768d,
		bowser_3_geo_0002D8 = 0xcc6b396b2ed4aa43,
		bowser_3_geo_0002F0 = 0x9836f3e74ca3819f,
		bowser_3_geo_000308 = 0x5ce54876f23eca25,
		bowser_3_geo_000320 = 0x9b08b9ef02ee5a6e,
		bowser_3_geo_000338 = 0x71948236c85d351b,
		bowser_3_geo_000350 = 0x5f75af6c960e859f,
		bowser_3_geo_000368 = 0x31b22062499682cd,
		bowser_3_geo_000380 = 0xe3c90c4e4501a698,
		bowser_3_level_geo = 0x66eb65b49fa3d1bc,
		castle_courtyard_geo_000200 = 0x758362ebb6fc1ac4,
		castle_courtyard_level_geo = 0x2f7e4620bc8e7f38,
		castle_grounds_geo_000660 = 0xf45e44378232ee84,
		castle_grounds_geo_0006F4 = 0x2307afae9ee6fdc3,
		castle_grounds_geo_00070C = 0x9e380b5523eb8e9d,
		castle_grounds_geo_000724 = 0x814f8d6b206011a7,
		castle_grounds_level_geo = 0xdaaf101a7b01a608,
		castle_geo_000F00 = 0x29c1236529ab4d1b,
		castle_geo_000F18 = 0x91bc52cee096bcd6,
		castle_geo_000F30 = 0x8706074e4030185e,
		castle_geo_000F70 = 0xe19970cc994a3373,
		castle_geo_000F88 = 0xca2cb2e51868a1c8,
		castle_geo_000FA8 = 0xe924a9dd5253a04c,
		castle_geo_000FD0 = 0x5bfd5551094b20b1,
		castle_geo_001000 = 0xa9df1e8493b89778,
		castle_geo_001038 = 0x539e62d70e196845,
		castle_geo_001088 = 0xb2308ff5356b1d90,
		castle_geo_0010C8 = 0x94fc9d9ea6b7bb1a,
		castle_geo_001110 = 0xc3d5e02b636d78bd,
		castle_geo_001158 = 0xdbb6bf0d90167c6e,
		castle_geo_0011A8 = 0x0e3edd120988b9c1,
		castle_geo_001200 = 0x758a7edb2992a25b,
		castle_geo_001260 = 0xa47d4699edf5f4f9,
		castle_geo_0012C8 = 0xa525dddd65c59e1d,
		castle_geo_001348 = 0x95147fc3cdbd7ae2,
		castle_geo_0013B8 = 0xb047d1098ad5d220,
		castle_geo_001400 = 0x4c25c8e05d60a6b8,
		castle_geo_001530 = 0x0bf91d9cffd0c824,
		castle_geo_001548 = 0xed6e533fb16d2654,
		castle_geo_001560 = 0x286beeeaf8fbc0fe,
		castle_geo_001578 = 0xa801907c50e58bb3,
		castle_geo_0015B8 = 0x6384bc5e592cf87f,
		castle_geo_0015F8 = 0xa7ea05e9a3400fbb,
		castle_geo_001628 = 0x33a5106736ee2fc7,
		castle_geo_001668 = 0x6b97a185d93be993,
		castle_geo_001690 = 0x643a57393945f493,
		castle_geo_0016D8 = 0x499614f06128a09a,
		castle_geo_001740 = 0xf5c2a3f3bcfdff2e,
		castle_geo_001798 = 0x0b4766826525724e,
		castle_geo_001800 = 0x9ae6fc33d5c5f9db,
		castle_geo_001858 = 0x3d40442c83d078f0,
		castle_geo_001940 = 0x0250ad1bf4440d9a,
		castle_geo_001958 = 0xf3f87d6f3ad2f13b,
		castle_geo_001980 = 0xd0627646fdf9b26f,
		castle_geo_0019C8 = 0xfb614d69af522440,
		castle_geo_0019F8 = 0x76cdf4c9e7284779,
		castle_geo_001A30 = 0x3365209556949b52,
		castle_geo_001A58 = 0x43a8f07a8dc257d1,
		castle_geo_001AB8 = 0xc2fa33546c4af872,
		castle_geo_001AF8 = 0x307f9287c5db9fd3,
		castle_geo_001B48 = 0xc3997b76bc5142ff,
		castle_geo_001BB0 = 0x5fdfbe9bb94b2d3e,
		castle_inside_level_geo = 0x6a8edda24e1af57a,
		ccm_geo_0003D0 = 0x7b20b0b13035f377,
		ccm_geo_0003F0 = 0xe8e1a7ed36ecaede,
		ccm_geo_00040C = 0xae56d2a58eafc316,
		ccm_geo_00042C = 0x4d7e38e13d3342f8,
		ccm_geo_00045C = 0x5af96757a24a66cd,
		ccm_geo_000494 = 0x23a4dcf69e2fbca9,
		ccm_geo_0004BC = 0x8ab9adb05d9e540a,
		ccm_geo_0004E4 = 0xeb40b06fa02f421d,
		ccm_level_geo = 0xe6cdc3eb6441449e,
		ccm_geo_0005E8 = 0x52ea9760922c45e8,
		cotmc_level_geo = 0xf3058e6d0ef01a5c,
		ddd_geo_000450 = 0x2b7c54f3817a5dda,
		ddd_geo_000478 = 0x3ffde26bdbbacf81,
		ddd_geo_0004A0 = 0x97c421a01e59f0f1,
		ddd_geo_0004C0 = 0xc8f497c212dae51e,
		ddd_level_geo = 0x6f2c2003ff1d92ce,
		ending_level_geo = 0xe9af66cbab9e3492,
		mario_geo = 0x31ce46078fd784a3,
		hmc_geo_000530 = 0x4e195c82251f7f99,
		hmc_geo_000548 = 0xbac2f35e7a6de324,
		hmc_geo_000570 = 0x26c14dce5aba59a3,
		hmc_geo_000588 = 0x09ad06d586549515,
		hmc_geo_0005A0 = 0xc5707086cf49b583,
		hmc_geo_0005B8 = 0xd038cded68303b4f,
		hmc_geo_0005D0 = 0x2584a8b368d08143,
		hmc_geo_0005E8 = 0x796e7c5f395d65d4,
		hmc_geo_000618 = 0xcd390ac537d3e78d,
		hmc_geo_000658 = 0x8324f5894ed3243a,
		hmc_geo_0006A8 = 0xe7dd3f36f75f9d37,
		hmc_geo_0006E0 = 0xd4d5aeb188f64a46,
		hmc_geo_000700 = 0xd73b806622ed1f86,
		hmc_geo_000748 = 0x505d4a9cb63a5cc7,
		hmc_geo_000770 = 0xf59cc26af980d0e3,
		hmc_geo_000798 = 0xbc329ca0a99aba2b,
		hmc_geo_0007F8 = 0x8e91c90a8e71f288,
		hmc_geo_000850 = 0x00bdd4edca3686ac,
		hmc_geo_0008D0 = 0xdd8917e40942abdc,
		hmc_geo_000938 = 0xa2f610c27782d582,
		hmc_geo_000998 = 0x703ed3fd7e5b22c8,
		hmc_geo_000A18 = 0xfb79d442da99b202,
		hmc_geo_000A88 = 0x4bbb976094fa8c24,
		hmc_geo_000AE8 = 0x7c5fdb0772503da4,
		hmc_geo_000B48 = 0x0f9f9b9be8551ecb,
		hmc_level_geo = 0xc1bb9ec662c29d23,
		intro_geo_0002D0 = 0x910e26823cf2bd78,
		intro_geo_00035C = 0x68062893efa8e910,
		intro_geo_0003B8 = 0xa7a6aafb4d03851e,
		intro_level_geo = 0xdec55c2e9813bcf8,
		jrb_geo_000900 = 0x795ff2d81ba8aa5a,
		jrb_geo_000918 = 0x6310bfe5f1fa9265,
		jrb_geo_000930 = 0x9058e0bdac17d993,
		jrb_geo_000948 = 0x6c20beeca202ebd9,
		jrb_geo_000960 = 0xe80f0da79a09e927,
		jrb_geo_000978 = 0xd53c1e60280d415b,
		jrb_geo_000990 = 0xcc12582fc9172ba0,
		jrb_geo_0009B0 = 0xcc3f86523cbbdcad,
		jrb_geo_0009C8 = 0x74ba1b9721439ab1,
		jrb_geo_0009E8 = 0x266c3208bf898132,
		jrb_geo_000A00 = 0x9a12066aa1042320,
		jrb_level_geo = 0xf46bd8317ba43175,
		jrb_geo_000AFC = 0x80b546d7f7580ebb,
		lll_geo_0009E0 = 0x29d24f6da6ddf517,
		lll_geo_0009F8 = 0xff9aa6ccb6a20b29,
		lll_geo_000A10 = 0x508a12226418c12f,
		lll_geo_000A28 = 0x3caa2be3837bf614,
		lll_geo_000A40 = 0xaf0b0b27d3e40f1f,
		lll_geo_000A60 = 0x0900c6b4f406e9ea,
		lll_geo_000A78 = 0x5aca506ae1b7be59,
		lll_geo_000A90 = 0x79ee7bcb7129b201,
		lll_geo_000AA8 = 0x78fd0d60db7ed39c,
		lll_geo_000AC0 = 0xaae93fcab9397118,
		lll_geo_000AD8 = 0xfc38edfc745af305,
		lll_geo_000AF0 = 0x3e39b18b9bd89998,
		lll_geo_000B08 = 0xc1d7dcfb557bfc52,
		lll_geo_000B20 = 0x6c9430f694bd8684,
		lll_geo_000B38 = 0xbe494606e363f184,
		lll_geo_000B50 = 0xcc4db1c346eb438e,
		lll_geo_000B68 = 0x2d5d613aee0d333d,
		lll_geo_000B80 = 0x5c2a84b45b027753,
		lll_geo_000B98 = 0xefd24b7263298669,
		lll_geo_000BB0 = 0x49d0b3f8aa5b58d0,
		lll_geo_000BC8 = 0xd51636be4ee7b858,
		lll_geo_000BE0 = 0x655a8f92eac228bb,
		lll_geo_000BF8 = 0xe6ad869699fe4b51,
		lll_geo_000C10 = 0xd7230e37c9a3eef0,
		lll_geo_000C30 = 0x45fc46cc2fc68a0b,
		lll_geo_000C50 = 0x637e07dd13202654,
		lll_geo_000C70 = 0x4d32faa6378d2490,
		lll_geo_000C90 = 0xe31c5fc5cfd7b98f,
		lll_geo_000CB0 = 0x8c75f811740bdd16,
		lll_geo_000CD0 = 0xc18d91f8ee377ad5,
		lll_geo_000CF0 = 0x63397e437b3088bc,
		lll_geo_000D10 = 0xba6ee9751428dc5c,
		lll_geo_000D30 = 0xf85a0e5c1d8a2126,
		lll_geo_000D50 = 0xe504ace01a5f74ae,
		lll_geo_000D70 = 0x901388e99ba851c0,
		lll_geo_000D90 = 0xf42886a4adcac79b,
		lll_geo_000DB0 = 0x2c7b0f14c43984f2,
		lll_geo_000DD0 = 0xd06e539e5f21f4e7,
		lll_geo_000DE8 = 0xcda3607096e55ac1,
		lll_level_geo = 0x9e4462a145a7e99c,
		lll_geo_000EA8 = 0xd3d989294def61a8,
		lll_volcano_level_geo = 0x28114c7cfaaef1ff,
		geo_menu_mario_save_button = 0x53480612453b012a,
		geo_menu_mario_save_button_fade = 0x91fce6f87e98ae88,
		geo_menu_mario_new_button = 0xb3e387482ff3e2d8,
		geo_menu_mario_new_button_fade = 0x89bdda43d0d46210,
		geo_menu_erase_button = 0x07050f770579ddcf,
		geo_menu_copy_button = 0xafc864a145ea2352,
		geo_menu_file_button = 0x8cefb0ab7b1cde5d,
		geo_menu_score_button = 0x7e4fdbe33ee9a80e,
		geo_menu_sound_button = 0xa2b8c44011c3ce2d,
		geo_menu_generic_button = 0x49226b4427a9610b,
		menu_file_select_strings_and_menu_cursor_level_geo = 0x193bd7c101be2f95,
		geo_menu_act_selector_strings = 0x85bc6caf668bcf88,
		pss_level_geo = 0xf9113c598409671b,
		rr_geo_000660 = 0xa52b1553ed0a3f73,
		rr_geo_000678 = 0x52c0bf1cdd70737e,
		rr_geo_000690 = 0xad41129f886fc705,
		rr_geo_0006A8 = 0x846faa2f236d5465,
		rr_geo_0006C0 = 0x5825a912d66bd58d,
		rr_geo_0006D8 = 0x604d7975b294b6fc,
		rr_geo_0006F0 = 0x653b3a7280fb4c18,
		rr_geo_000708 = 0x7b8de3d941020dca,
		rr_geo_000720 = 0xd41210366c65f1e8,
		rr_geo_000738 = 0x9021041e3fcd051e,
		rr_geo_000758 = 0xd70dff6eccf95f40,
		rr_geo_000770 = 0xf3646c56c9f15d09,
		rr_geo_000788 = 0x66361439adbded12,
		rr_geo_0007A0 = 0x2fe68a6d9a86d86f,
		rr_geo_0007B8 = 0xeed6419ffe802035,
		rr_geo_0007D0 = 0x6b66186b0e1e6b20,
		rr_geo_0007E8 = 0xcbe21b4da9b28ce8,
		rr_geo_000800 = 0x95250f31e7a4aade,
		rr_geo_000818 = 0x37d9d891dbc33204,
		rr_geo_000830 = 0x296a8faf3d3d7334,
		rr_geo_000848 = 0x3d078d46edce330a,
		rr_geo_000860 = 0xf42b6c459e05278a,
		rr_geo_000878 = 0x49e8c5f18f17fdaf,
		rr_geo_000890 = 0xec6307e0d739516b,
		rr_geo_0008A8 = 0x84334e18fd38e5cf,
		rr_geo_0008C0 = 0x4532c786a5d29053,
		rr_geo_0008F0 = 0xde2aa889ab9bbeb2,
		rr_geo_000908 = 0x782703aa58877d61,
		rr_geo_000920 = 0x3fe7e2d05d466c09,
		rr_geo_000958 = 0xfc23e67fe6678af1,
		rr_geo_000970 = 0xcb41011c8645f9f9,
		rr_geo_000988 = 0xbd7d60c8592220e6,
		rr_geo_0009A0 = 0x9a93b56a5a257f45,
		rr_geo_0009B8 = 0x5b0c6cae8ade83da,
		rr_level_geo = 0x39703bc986fd4e3d,
		sa_level_geo = 0x233a859da69fad8e,
		sl_geo_000360 = 0xb8fb9a165cdc8ceb,
		sl_geo_000378 = 0x91d3a6b2df6fe41c,
		sl_geo_000390 = 0x5ba99be30cc4acf8,
		sl_level_geo = 0x8043e2fe61adc54e,
		sl_underground_level_geo = 0x72c740f6d7f61238,
		ssl_geo_0005C0 = 0x38d986734dd0a4ce,
		ssl_geo_0005D8 = 0x8b94ebdd8a78486a,
		ssl_geo_000618 = 0xa9851eb0cfcd90cb,
		ssl_geo_000630 = 0x2e000b69e30e42fd,
		ssl_level_geo = 0x1ca6dab5ca480a9f,
		ssl_geo_000734 = 0x1b5e8b1284ae9f0a,
		ssl_geo_000764 = 0x292f7554851d08a8,
		ssl_geo_000794 = 0xc1b20105b169e47b,
		ssl_geo_0007AC = 0x3797df9ab77b1651,
		ssl_pyramid_level_geo = 0x133a8f097971cbb2,
		ssl_geo_00088C = 0x999b82b13cfe1223,
		thi_geo_0005B0 = 0x965d128a78658e14,
		thi_geo_0005C8 = 0x95ba937b9cca989f,
		thi_geo_0005F0 = 0xed26ae4e0e17c037,
		thi_level_geo_000608 = 0x7ec645c146b20380,
		thi_level_geo_0006D4 = 0x4febb72d40ca55a7,
		thi_level_geo_00079C = 0x469012a1f9dc11f0,
		totwc_geo_000160 = 0x6868cf0a41d90a9e,
		totwc_level_geo = 0xd43f09e68da8c007,
		ttc_geo_000240 = 0x50737e97ddde7ade,
		ttc_geo_000258 = 0x2b1c219fc424d106,
		ttc_geo_000270 = 0x122fa9fb47acf409,
		ttc_geo_000288 = 0xab2cffb0b84a4f33,
		ttc_geo_0002A8 = 0x9cf2a50dd31f8c88,
		ttc_geo_0002C8 = 0x8156d398c645447a,
		ttc_geo_0002E0 = 0x53517f9c94d1a545,
		ttc_geo_0002F8 = 0x8d128b33058ae9ed,
		ttc_geo_000310 = 0x6a96bebcf7e92950,
		ttc_geo_000328 = 0xee7414b932a4fe97,
		ttc_geo_000340 = 0x6d7f7f981fe66a34,
		ttc_geo_000358 = 0xaca8efb859b20e3d,
		ttc_geo_000370 = 0xb2f7ca4317bfa545,
		ttc_geo_000388 = 0x28840674287df6c0,
		ttc_geo_0003A0 = 0x8abe996b0da96364,
		ttc_level_geo = 0x2b02d8a64d538a06,
		ttm_geo_000710 = 0xb0ad010036c4a9c3,
		ttm_geo_000730 = 0xa5f2e6bd8a9489de,
		ttm_geo_000748 = 0x5aa7657095316d78,
		ttm_geo_000778 = 0x05d73d1c77069679,
		ttm_geo_0007A8 = 0x18c26f5bd14915e7,
		ttm_geo_0007D8 = 0x2ab57d36028f3969,
		ttm_geo_000808 = 0x445209e0ab55b6e5,
		ttm_geo_000830 = 0x5329ed12d540a54e,
		ttm_geo_000858 = 0x4a6ee64a172b879d,
		ttm_geo_000880 = 0x250a66bb5d333f8d,
		ttm_geo_0008A8 = 0x091d293e0ea1b83d,
		ttm_geo_0008D0 = 0x2a0504400e03b1f5,
		ttm_geo_0008F8 = 0x7691b138e6a6358f,
		ttm_geo_000920 = 0x3d25325cbabc1501,
		ttm_geo_000948 = 0x5f631145362432df,
		ttm_geo_000970 = 0x519866c29b933077,
		ttm_geo_000990 = 0x060e14344716a678,
		ttm_geo_0009C0 = 0x4c1ceffbb6bc88d3,
		ttm_geo_0009F0 = 0x2a2482871dac77a7,
		ttm_geo_000A18 = 0xcaf43e7e4b38dcdc,
		ttm_geo_000A40 = 0x72445ced78232ab8,
		ttm_level_geo = 0xee95947d16c36874,
		ttm_slide_level_geo_000B5C = 0x3ccc228a744667d3,
		ttm_slide_level_geo_000BEC = 0x75a3aca8a71e7049,
		ttm_slide_level_geo_000C84 = 0x78d3f5b316e226f6,
		ttm_geo_000D14 = 0xa831e9a614eee8ca,
		ttm_geo_000D4C = 0x9a553e8714840b61,
		ttm_geo_000D84 = 0x7a7517c03da32ca7,
		ttm_geo_000DBC = 0x115e3c565ad2c10c,
		ttm_geo_000DF4 = 0x2ff14834a166844a,
		vcutm_geo_0001F0 = 0xfaf29a3c9a8bff0a,
		vcutm_level_geo = 0xa90f466b92fb2f29,
		wdw_geo_000580 = 0x712052b3f386523a,
		wdw_geo_000598 = 0xba68b37e10fa9216,
		wdw_geo_0005C0 = 0xf74104d85a0c30b0,
		wdw_geo_0005E8 = 0x34e51efa90a4cbce,
		wdw_geo_000610 = 0x092f1a28069bbeef,
		wdw_geo_000628 = 0xf6038a119f681e1c,
		wdw_geo_000640 = 0xb0ce57da2a53ddaf,
		wdw_level_geo = 0x4aeb2a7d51d2d2b1,
		wdw_town_level_geo = 0x0837a643046849b5,
		wf_geo_0007E0 = 0xad590086c6a8ba72,
		wf_geo_000820 = 0x8f791e1b17a06e0c,
		wf_geo_000860 = 0x5ac18b7adaea59f0,
		wf_geo_000878 = 0xefc60d07a745f2bd,
		wf_geo_000890 = 0xc1d93bcf106791f0,
		wf_geo_0008A8 = 0xc5efa6446ab624cc,
		wf_geo_0008E8 = 0x107e30873c220619,
		wf_geo_000900 = 0x594063b7a91f1497,
		wf_geo_000940 = 0x4c8128d0eee6b078,
		wf_geo_000958 = 0x85fa17fddf816a0a,
		wf_geo_0009A0 = 0xccfe16bca1f00ed3,
		wf_geo_0009B8 = 0xab0235c3f8fea952,
		wf_geo_0009D0 = 0x79c22075a69fdc49,
		wf_geo_0009E8 = 0xd3081db21efed071,
		wf_geo_000A00 = 0xe61b060ffb3795f0,
		wf_geo_000A40 = 0x5731f0f6b8476c68,
		wf_geo_000A58 = 0xd5c2cb3785f26cb1,
		wf_geo_000A98 = 0xf30342cbd91d82e9,
		wf_geo_000AB0 = 0x9a91a46932e365c3,
		wf_geo_000AC8 = 0x76a983265f734332,
		wf_geo_000AE0 = 0x3bd1a488a749a339,
		wf_geo_000AF8 = 0xf1f3aa18928f91bc,
		wf_geo_000B10 = 0xb19958afd104f2a5,
		wf_geo_000B38 = 0xe0033aa44b29077c,
		wf_geo_000B60 = 0x67d192fc13867d1d,
		wf_geo_000B78 = 0x3f85329798dd287e,
		wf_geo_000B90 = 0x46c9439e4ad4e945,
		wf_geo_000BA8 = 0x88678803ef6928ff,
		wf_geo_000BC8 = 0xb0c45d88f9a1c13a,
		wf_geo_000BE0 = 0x0c2e95886e03a34c,
		wf_level_geo = 0x9f847f97979e051d,
		wmotr_level_geo = 0x3e7a29b0f031c0c7,

		// FIXED
		castle_geo_001518 = 0xce8bcf22ecbdf605,
		marios_winged_metal_cap_geo = 0xca6a48b6ccf94757,
		marios_metal_cap_geo = 0xa923e5c672572fd7,
		marios_wing_cap_geo = 0x749b7c016c6cf0ad,
		marios_cap_geo = 0xaf216843670a0ecf,
		manta_seg5_geo_05008D14 = 0x424e4906070074fd,
		tornado_seg5_geo_05014630 = 0xb8e392123fe67db7,
		wiggler_body_geo = 0xd00f05c72f5c83c8,
		chilly_chief_geo = 0x33597bb2dbd9dc0b,
		chilly_chief_big_geo = 0xd0e2b498f4e85d3e,
		rr_geo_0008D8 = 0x03f74d63f8e245cd,
		rr_geo_000940 = 0xff19b6171f6b2a3e,
	};

	class Layout
	{
	public:
		Layout(const u8* layout, XXHash64* s);
		u64 fingerprint();

		void branch_and_link();
		void end();
		void branch();
		void ret();
		void open_node();
		void close_node();
		void assign_as_view();
		void update_node_flags();
		void node_root();
		void node_ortho_projection();
		void node_perspective();
		void node_start();
		void node_master_list();
		void node_level_of_detail();
		void node_switch_case();
		void node_camera();
		void node_translation_rotation();
		void node_translation();
		void node_rotation();
		void node_animated_part();
		void node_billboard();
		void node_display_list();
		void node_shadow();
		void node_object_parent();
		void node_generated();
		void node_background();
		void nop();
		void copy_view();
		void node_held_obj();
		void node_scale();
		void nop2();
		void nop3();
		void node_culling_radius();

	protected:
		template<class T> T add(const T& n)
		{
			state->add(&n, sizeof(n));
			return n;
		}

		const u8 *ip;
		XXHash64* state;
	};

	void reg(const GeoLayout* layout, u64 hash);
	u64 fingerprint(const GeoLayout* layout);
	u64 fingerprint(const GeoLayout* layout, XXHash64* state);
	const GeoLayout* apply(const GeoLayout* func, const Id id);
	GeoLayout* mount(GeoLayout* func, u64 size);
}