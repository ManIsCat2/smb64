#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "areas/2/custom.model.inc.h"
#include "areas/3/custom.model.inc.h"
#include "areas/4/custom.model.inc.h"
#include "areas/5/custom.model.inc.h"
#include "levels/bitfs/header.h"

extern u8 _bitfs_segment_ESegmentRomStart[]; 
extern u8 _bitfs_segment_ESegmentRomEnd[];

#include "levels/bbh/header.h"
const LevelScript level_bitfs_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
	LOAD_RAW(0x0E, _bitfs_segment_ESegmentRomStart, _bitfs_segment_ESegmentRomEnd),
	LOAD_MIO0(0xA, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(6, _group12_mio0SegmentRomStart, _group12_mio0SegmentRomEnd),
	LOAD_RAW(13, _group12_geoSegmentRomStart, _group12_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
	LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
	LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
	LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
	LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
	LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
	LOAD_MODEL_FROM_GEO(31, metal_door_geo),
	LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
	LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
	LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
	LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
	LOAD_MODEL_FROM_GEO(37, key_door_geo),
	LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// 	LOAD_MODEL_FROM_GEO(53,0x0040e660),
// 	LOAD_MODEL_FROM_GEO(55,0x00406c00),
// 	LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// 	LOAD_MODEL_FROM_GEO(136,0x0040a1e0),
// 	LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// 	LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// 	LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// 	LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// 	LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// 	LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_13),
	JUMP_LINK(local_area_bitfs_1_),
	JUMP_LINK(local_area_bitfs_2_),
	JUMP_LINK(local_area_bitfs_3_),
	JUMP_LINK(local_area_bitfs_4_),
	JUMP_LINK(local_area_bitfs_5_),
	FREE_LEVEL_POOL(),
	MARIO_POS(3,90,64,960,128),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};

const LevelScript local_area_bitfs_1_[] = {
	AREA(1, bitfs_1_geo),
	TERRAIN(bitfs_1_collision),
	SET_BACKGROUND_MUSIC(0, 17),
	TERRAIN_TYPE(TERRAIN_GRASS),
	JUMP_LINK(local_objects_bitfs_1_),
	JUMP_LINK(local_warps_bitfs_1_),
	END_AREA(),
	RETURN(),
};

const LevelScript local_objects_bitfs_1_[] = {
	OBJECT_WITH_ACTS(0, -8192, 960, 128, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(53, 8768, 980, 0, 0, 0, 0, 0x40000, bhvStarDoor, 31),
	OBJECT_WITH_ACTS(100, 9250, 676, 128, 0, 270, 0, 0x0, bhvBowser, 31),
	OBJECT_WITH_ACTS(137, -4416, 980, 128, 0, 0, 0, 0x1000000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(0, -4416, 512, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 320, 1024, 128, 0, 180, 0, 0x1000000, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, -576, 1024, 128, 0, 180, 0, 0x1000000, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, -1984, 1024, 128, 0, 180, 0, 0x1000000, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 1472, 640, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 2496, 640, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 3008, 1280, 128, 0, 180, 0, 0x1000000, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 0, 0, 0, 0, 0, 0, 0x0, bhvPenguinRaceFinishLine, 31),
	OBJECT_WITH_ACTS(122, 11645, 402, 128, 0, 0, 0, 0x1000000, bhvStar, 31),
	RETURN(),
};

const LevelScript local_warps_bitfs_1_[] = {
	WARP_NODE(10,9,1,0,0),
	WARP_NODE(240,16,5,10,0),
	WARP_NODE(241,19,1,10,0),
	RETURN(),
};

const LevelScript local_area_bitfs_2_[] = {
	AREA(2, bitfs_2_geo),
	TERRAIN(bitfs_2_collision),
	SET_BACKGROUND_MUSIC(0, 2),
	TERRAIN_TYPE(TERRAIN_GRASS),
	JUMP_LINK(local_objects_bitfs_2_),
	JUMP_LINK(local_warps_bitfs_2_),
	END_AREA(),
	RETURN(),
};

const LevelScript local_objects_bitfs_2_[] = {
	OBJECT_WITH_ACTS(0, -8074, 192, 128, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(122, 18300, 432, 128, 0, 0, 0, 0x2000000, bhvStar, 31),
	OBJECT_WITH_ACTS(137, -6208, 576, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -6080, 576, 0, 0, 0, 0, 0x1000000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -5952, 576, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -4672, 576, 0, 0, 0, 0, 0x40000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -4672, 1088, 0, 0, 0, 0, 0x70000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -4544, 1088, 0, 0, 0, 0, 0x0, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -4416, 1088, 0, 0, 0, 0, 0x0, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -4288, 1088, 0, 0, 0, 0, 0x0, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -960, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -1088, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -1216, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -1344, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -832, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -960, 1088, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(0, 0, 0, 0, 0, 0, 0, 0x0, bhvPenguinRaceFinishLine, 31),
	OBJECT_WITH_ACTS(137, -832, 1088, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -1088, 1088, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -1216, 1088, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, -1344, 1088, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 576, 576, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 704, 1088, 0, 0, 0, 0, 0x10000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 832, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 960, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 1088, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 1984, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2112, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2240, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2368, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2752, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2880, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 3008, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2240, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2368, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2494, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2624, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 2752, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 7872, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 8000, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 8128, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 8256, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 12480, 576, 0, 0, 0, 0, 0x60000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 13632, 576, 0, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 15552, 576, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 15680, 576, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 15680, 1088, 0, 0, 0, 0, 0x40000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 12864, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 12992, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 13120, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 13248, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 13376, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 13888, 1088, 0, 0, 0, 0, 0x0, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 3904, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 4032, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 3776, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 3648, 1088, 0, 0, 0, 0, 0xf0000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(104, -4641, 192, 128, 0, 0, 0, 0x10000, bhvKoopa, 31),
	OBJECT_WITH_ACTS(104, -4416, 192, 128, 0, 0, 0, 0x10000, bhvKoopa, 31),
	OBJECT_WITH_ACTS(192, -3367, 192, 128, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, -3117, 192, 128, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, -695, 192, 100, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, -486, 192, 114, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 266, 192, 107, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 538, 192, 96, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 743, 192, 170, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 2769, 192, 106, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 2985, 192, 34, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 4759, 192, 54, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 6346, 192, 150, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 7065, 192, 177, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 6346, 192, 150, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 12136, 192, 84, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(192, 12375, 192, 115, 0, 0, 0, 0x0, bhvGoomba, 31),
	OBJECT_WITH_ACTS(104, -1368, 192, 38, 0, 0, 0, 0x10000, bhvKoopa, 31),
	OBJECT_WITH_ACTS(104, 14705, 192, 96, 0, 0, 0, 0x10000, bhvKoopa, 31),
	OBJECT_WITH_ACTS(104, 11039, 672, 130, 0, 0, 0, 0x1010000, bhvKoopa, 31),
	OBJECT_WITH_ACTS(104, 13083, 672, 101, 0, 0, 0, 0x1010000, bhvKoopa, 31),
	OBJECT_WITH_ACTS(104, 13502, 672, 38, 0, 0, 0, 0x1010000, bhvKoopa, 31),
	RETURN(),
};

const LevelScript local_warps_bitfs_2_[] = {
	WARP_NODE(10,9,2,0,0),
	WARP_NODE(240,9,1,10,0),
	WARP_NODE(241,19,2,10,0),
	RETURN(),
};

const LevelScript local_area_bitfs_3_[] = {
	AREA(3, bitfs_3_geo),
	TERRAIN(bitfs_3_collision),
	SET_BACKGROUND_MUSIC(0, 17),
	TERRAIN_TYPE(TERRAIN_GRASS),
	JUMP_LINK(local_objects_bitfs_3_),
	JUMP_LINK(local_warps_bitfs_3_),
	END_AREA(),
	RETURN(),
};

const LevelScript local_objects_bitfs_3_[] = {
	OBJECT_WITH_ACTS(0, 64, 960, 128, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(100, 18200, 704, 128, 0, 270, 0, 0x0, bhvBowser, 31),
	OBJECT_WITH_ACTS(53, 17472, 704, 128, 0, 0, 0, 0x0, bhvStarDoor, 31),
	OBJECT_WITH_ACTS(137, 3008, 1336, 128, 0, 0, 0, 0x1000000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(116, 13120, 192, 128, 0, 0, 0, 0x0, bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 13376, 192, 128, 0, 0, 0, 0x0, bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 13248, 192, 128, 0, 0, 0, 0x0, bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 13120, 704, 128, 0, 0, 0, 0x0, bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 13248, 704, 128, 0, 0, 0, 0x0, bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 13376, 704, 128, 0, 0, 0, 0x0, bhvOneCoin, 31),
	OBJECT_WITH_ACTS(0, 6336, 704, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 7872, 704, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 9408, 704, 128, 0, 180, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 11840, 576, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 7232, 1216, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 10560, 1080, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 0, 0, 0, 0, 0, 0, 0x0, bhvPenguinRaceFinishLine, 31),
	OBJECT_WITH_ACTS(53, 10944, 64, 128, 0, 0, 0, 0x0, bhvCustom0x13000034, 31),
	OBJECT_WITH_ACTS(53, 10944, 1088, 128, 0, 0, 0, 0x0, bhvCustom0x13000034, 31),
	OBJECT_WITH_ACTS(53, 11584, 512, 128, 0, 0, 0, 0x1000000, bhvCustom0x13000034, 31),
	OBJECT_WITH_ACTS(53, 11584, -512, 128, 0, 0, 0, 0x1000000, bhvCustom0x13000034, 31),
	OBJECT_WITH_ACTS(122, 19560, 576, 128, 0, 0, 0, 0x2000000, bhvStar, 31),
	OBJECT_WITH_ACTS(55, 2240, 960, 97, 0, 0, 0, 0x0, bhvCustom0x130000cc, 31),
	OBJECT_WITH_ACTS(55, 3904, 960, 180, 0, 0, 0, 0x0, bhvCustom0x130000cc, 31),
	RETURN(),
};

const LevelScript local_warps_bitfs_3_[] = {
	WARP_NODE(10,9,3,0,0),
	WARP_NODE(240,24,1,10,0),
	WARP_NODE(241,19,3,10,0),
	RETURN(),
};

const LevelScript local_area_bitfs_4_[] = {
	AREA(4, bitfs_4_geo),
	TERRAIN(bitfs_4_collision),
	SET_BACKGROUND_MUSIC(0, 17),
	TERRAIN_TYPE(TERRAIN_GRASS),
	JUMP_LINK(local_objects_bitfs_4_),
	JUMP_LINK(local_warps_bitfs_4_),
	END_AREA(),
	RETURN(),
};

const LevelScript local_objects_bitfs_4_[] = {
	OBJECT_WITH_ACTS(0, 64, 960, 128, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(55, 2176, 960, 0, 0, 0, 0, 0x0, bhvCustom0x130000cc, 31),
	OBJECT_WITH_ACTS(55, 3376, 960, 0, 0, 0, 0, 0x0, bhvCustom0x130000cc, 31),
	OBJECT_WITH_ACTS(55, 11324, 960, 0, 0, 0, 0, 0x0, bhvCustom0x130000cc, 31),
	OBJECT_WITH_ACTS(55, 12480, 960, 0, 0, 0, 0, 0x0, bhvCustom0x130000cc, 31),
	OBJECT_WITH_ACTS(55, 13248, 960, 0, 0, 0, 0, 0x0, bhvCustom0x130000cc, 31),
	OBJECT_WITH_ACTS(55, 14016, 960, 0, 0, 0, 0, 0x0, bhvCustom0x130000cc, 31),
	OBJECT_WITH_ACTS(0, 2496, 448, 150, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 3776, 448, 150, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 3136, 448, 150, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 6976, 448, -27, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 8256, 448, -27, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 10304, 448, -27, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 6976, 1216, 0, 0, 180, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 10304, 1216, 0, 0, 180, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 8256, 1216, 0, 0, 180, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 0, 0, 0, 0, 0, 0, 0x0, bhvPenguinRaceFinishLine, 31),
	OBJECT_WITH_ACTS(116, 10432, 960, 134, 0, 0, 0, 0x0, bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 10560, 960, 134, 0, 0, 0, 0x0, bhvOneCoin, 31),
	OBJECT_WITH_ACTS(116, 10688, 960, 134, 0, 0, 0, 0x0, bhvOneCoin, 31),
	OBJECT_WITH_ACTS(53, 17600, 832, 73, 0, 0, 0, 0x0, bhvStarDoor, 31),
	OBJECT_WITH_ACTS(100, 17885, 576, 176, 0, 270, 0, 0x0, bhvBowser, 31),
	OBJECT_WITH_ACTS(137, 5760, 576, 128, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 5504, 576, 128, 0, 0, 0, 0x1040000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(137, 5632, 576, 128, 0, 0, 0, 0x1000000, bhvExclamationBox, 31),
	OBJECT_WITH_ACTS(122, 19694, 576, 128, 0, 0, 0, 0x3000000, bhvStar, 31),
	RETURN(),
};

const LevelScript local_warps_bitfs_4_[] = {
	WARP_NODE(10,9,4,0,0),
	WARP_NODE(240,12,1,10,0),
	WARP_NODE(241,19,4,10,0),
	RETURN(),
};

const LevelScript local_area_bitfs_5_[] = {
	AREA(5, bitfs_5_geo),
	TERRAIN(bitfs_5_collision),
	SET_BACKGROUND_MUSIC(0, 17),
	TERRAIN_TYPE(TERRAIN_GRASS),
	JUMP_LINK(local_objects_bitfs_5_),
	JUMP_LINK(local_warps_bitfs_5_),
	END_AREA(),
	RETURN(),
};

const LevelScript local_objects_bitfs_5_[] = {
	OBJECT_WITH_ACTS(0, -8064, 960, 128, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, -1216, 1088, 128, 0, 180, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, -192, 704, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 6848, 1088, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 7872, 576, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(0, 12608, 576, 128, 0, 0, 0, 0x0, bhvCustom0x13001890, 31),
	OBJECT_WITH_ACTS(100, 13873, 576, 128, 0, 270, 0, 0x0, bhvBowser, 31),
	OBJECT_WITH_ACTS(55, 12992, 1230, 78, 0, 0, 0, 0x0, bhvCustom0x130000cc, 31),
	OBJECT_WITH_ACTS(122, 15498, 420, 130, 0, 0, 0, 0x4000000, bhvStar, 31),
	OBJECT_WITH_ACTS(0, 344, 192, 128, 0, 0, 0, 0x32e0000, bhvMacroUkiki, 31),
	OBJECT_WITH_ACTS(0, 9039, 576, 168, 0, 0, 0, 0xa260000, bhvMacroUkiki, 31),
	OBJECT_WITH_ACTS(0, 0, 0, 0, 0, 0, 0, 0x0, bhvPenguinRaceFinishLine, 31),
	RETURN(),
};

const LevelScript local_warps_bitfs_5_[] = {
	WARP_NODE(10,9,5,0,0),
	WARP_NODE(240,5,2,10,0),
	WARP_NODE(241,19,5,10,0),
	RETURN(),
};

