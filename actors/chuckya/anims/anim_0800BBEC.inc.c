// 0x0800BA10
static const s16 chuckya_seg8_animvalue_0800BA10[] = {
	 0x0000,  0x0001,  0x3fff, -0x0858, -0x0656, -0x029c, -0x009a, -0x029c, 
	-0x0656, -0x0858,  0x071c, -0x0ddb,  0x784b, -0x02b5, -0x00ae, -0x7b3f, 
	-0x0379, -0x02d6, -0x01a9, -0x0107, -0x01a9, -0x02d6, -0x0379, -0x3fff, 
	-0x7fff, -0x1ca4,  0x3fff, -0x7fff, -0x1ca4,  0x06ba,  0x04df, -0x206d, 
	 0x7bf0, -0x7826,  0x6749,  0x6078,  0x3fff, -0x2079, -0x6078, -0x3fff, 
	-0x2079, -0x40f2,  0x5347, -0x3fb6,  0x4a4e,  0x49ac,  0x487e,  0x47dc, 
	 0x487e,  0x49ac,  0x4a4e,  0x0000, 
};

// 0x0800BA78
static const u16 chuckya_seg8_animindex_0800BA78[] = {
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0000, 0x0001, 0x0002, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0007, 0x002C,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x002B,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x002A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0029,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0007, 0x0010,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0007, 0x0003,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0026, 0x0001, 0x0027, 0x0001, 0x0028,
    0x0001, 0x001D, 0x0001, 0x001E, 0x0001, 0x001F,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0017, 0x0001, 0x0018, 0x0001, 0x0019,
    0x0001, 0x000A, 0x0001, 0x000B, 0x0001, 0x000C,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0023, 0x0001, 0x0024, 0x0001, 0x0025,
    0x0001, 0x0020, 0x0001, 0x0021, 0x0001, 0x0022,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x001A, 0x0001, 0x001B, 0x0001, 0x001C,
    0x0001, 0x000D, 0x0001, 0x000E, 0x0001, 0x000F,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
};

// 0x0800BBEC
static const struct Animation chuckya_seg8_anim_0800BBEC = {
	Animation::Flags::NONE,
    0,
    0,
    0,
    0x07,
    ANIMINDEX_NUMPARTS(chuckya_seg8_animindex_0800BA78),
    chuckya_seg8_animvalue_0800BA10,
    chuckya_seg8_animindex_0800BA78,
    0,
};