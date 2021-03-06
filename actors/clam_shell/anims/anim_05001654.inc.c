// 0x050015D0
static const s16 clam_shell_seg5_animvalue_050015D0[] = {
	 0x0000,  0x3fff,  0x0e08,  0x1135,  0x1458,  0x1118,  0x0dba,  0x1055, 
	 0x1326,  0x10ae,  0x0e3e,  0x1121,  0x13f2,  0x116a,  0x0e81,  0x0faa, 
	 0x1127,  0x0fdc,  0x0e5c,  0x0e11,  0x0e00,  0x0e0d,  0x0e19,  0x0e08, 
	 0x22e4,  0x4d59,  0x6ec3,  0x7a37,  0x7c9f,  0x7e13,  0x7d78,  0x7e13, 
	-0x7fff, -0x7fff, -0x7fff,  0x0000, 
};

// 0x05001618
static const u16 clam_shell_seg5_animindex_05001618[] = {
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0022,
    0x0001, 0x0020, 0x0001, 0x0021, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x001E, 0x0002,
};

// 0x05001654
static const struct Animation clam_shell_seg5_anim_05001654 = {
    1,
    0,
    0,
    0,
    0x1E,
    ANIMINDEX_NUMPARTS(clam_shell_seg5_animindex_05001618),
    clam_shell_seg5_animvalue_050015D0,
    clam_shell_seg5_animindex_05001618,
    0,
};
