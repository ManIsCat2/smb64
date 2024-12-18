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
#include "levels/castle_grounds/header.h"
extern u8 _castle_grounds_segment_ESegmentRomStart[]; 
extern u8 _castle_grounds_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_castle_grounds_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _castle_grounds_segment_ESegmentRomStart, _castle_grounds_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
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
// LOAD_MODEL_FROM_GEO(53,0x0040e660),
// LOAD_MODEL_FROM_GEO(56,0x00408000),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_GEO(136,0x0040a1e0),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_castle_grounds_1_),
JUMP_LINK(local_area_castle_grounds_2_),
JUMP_LINK(local_area_castle_grounds_3_),
JUMP_LINK(local_area_castle_grounds_4_),
JUMP_LINK(local_area_castle_grounds_5_),
FREE_LEVEL_POOL(),
MARIO_POS(1,90,-13135,120,128),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_castle_grounds_1_[] = {
AREA(1,Geo_castle_grounds_1_0x1403ce0),
TERRAIN(col_castle_grounds_1_0xe00be40),
SET_BACKGROUND_MUSIC(0,2),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_1_),
JUMP_LINK(local_warps_castle_grounds_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_1_[] = {
OBJECT_WITH_ACTS(0,-13135,120,128,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,-11224,576,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-10712,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-10584,576,128,0,0,0,0x1000000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-10456,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-10328,576,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-10200,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-10456,1088,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(192,-10462,192,128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-6892,192,128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-7892,192,128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-6492,192,128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,-5080,732,128,0,0,0,0x1070000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,128,0,128,0,0,0,0x0, bhvPenguinRaceFinishLine,31),
OBJECT_WITH_ACTS(137,-3416,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3288,576,128,0,0,0,0x1000000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3160,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1624,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3032,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2904,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2776,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2648,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2520,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2392,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2264,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2136,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1496,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1368,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1240,1088,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1240,576,128,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-472,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-344,576,128,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,296,576,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,808,576,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1318,576,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,806,1088,128,0,0,0,0x1000000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2086,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2342,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2470,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2598,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3366,1088,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3248,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3622,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3494,1088,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3366,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3494,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,8232,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,8360,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,8488,576,128,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,8616,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,12847,576,128,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,128,0,128,0,0,0,0x0, Bhv_Custom_0x13000020,31),
OBJECT_WITH_ACTS(192,-3168,192,117,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-2872,192,172,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-1121,192,118,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-909,192,106,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2629,192,110,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2843,192,70,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,3169,192,129,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,3351,192,115,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(104,398,192,123,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(195,-12831,192,100,0,0,0,0x10000, bhvBobombBuddy,31),
OBJECT_WITH_ACTS(0,7661,448,106,0,90,0,0xb0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,-5914,704,94,0,0,0,0xb0000, bhvFadingWarp,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_1_[] = {
WARP_NODE(10,9,1,0,0),
WARP_NODE(11,23,1,10,0),
WARP_NODE(240,16,2,10,0),
WARP_NODE(241,16,1,10,0),
RETURN()
};
const LevelScript local_area_castle_grounds_2_[] = {
AREA(2,Geo_castle_grounds_2_0x1403ec0),
TERRAIN(col_castle_grounds_2_0xe0047a0),
SET_BACKGROUND_MUSIC(0,12),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_2_),
JUMP_LINK(local_warps_castle_grounds_2_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_2_[] = {
OBJECT_WITH_ACTS(0,-7894,192,128,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(137,-8120,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-8120,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-8120,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-8120,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-8120,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-8120,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-8120,960,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-8120,1088,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-8120,1216,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,6672,448,102,0,90,0,0xb0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,5128,576,98,0,0,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(137,-3136,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3136,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3136,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-3008,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2880,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2880,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2880,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2752,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2624,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2496,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2496,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2496,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2368,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2240,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2240,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-2240,832,128,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1472,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1344,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1216,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1088,576,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1216,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1088,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1344,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1344,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1344,960,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1088,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1472,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1472,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1472,960,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1216,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-696,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-568,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-440,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-312,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-184,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-56,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-184,704,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-184,832,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-184,960,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-184,1088,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-56,704,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-56,832,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,712,704,128,0,0,0,0x1000000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-56,960,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-56,1088,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-56,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-568,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-440,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-312,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-184,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-696,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-696,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-568,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-440,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-312,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-56,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-184,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,456,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,584,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,712,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,456,704,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,456,832,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,456,960,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,456,1088,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,328,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,584,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,712,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,456,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,328,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,584,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,712,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,456,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1224,704,127,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1224,832,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1224,960,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1224,1088,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1992,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1224,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1096,704,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1096,832,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1096,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1096,960,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1096,1088,127,0,0,0,0xf0001, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1608,576,127,0,0,0,0xf0001, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1736,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1864,576,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1736,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1864,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1992,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1608,1216,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1736,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1608,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1864,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1992,1344,127,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,12880,726,128,0,0,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-6336,704,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6464,704,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6592,704,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6720,704,128,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6848,704,128,0,0,0,0x1000000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2816,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2688,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2944,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3200,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3328,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3072,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3200,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3328,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3072,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2944,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2688,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2816,832,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,7616,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,7616,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,7616,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,7488,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,7488,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,7488,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,10688,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,10560,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,10432,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,10816,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,10944,704,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,11072,704,128,0,0,0,0x1000000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12480,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12864,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12608,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12736,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12992,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13120,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13248,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12352,320,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12480,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12864,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12608,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12736,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12992,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13248,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12352,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13120,192,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12480,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12864,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12608,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12736,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12992,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12352,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13248,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13120,448,128,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(192,-6425,192,128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-6276,192,142,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-4476,192,119,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,0,192,128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-329,192,105,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,1088,1212,116,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,1529,192,144,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,1604,810,119,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,4185,192,92,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,4439,192,106,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,4709,192,139,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,6122,192,148,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,8996,448,126,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,8890,320,124,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(104,-2663,192,127,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,-1378,192,109,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,-2878,192,133,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,10734,192,124,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(137,-4416,832,128,0,0,0,0x1060000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvPenguinRaceFinishLine,31),
OBJECT_WITH_ACTS(116,-3008,704,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-2368,704,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-2880,1088,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-2496,1088,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-2624,1088,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-2752,1088,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-320,832,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-448,832,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-576,832,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-704,832,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2688,1088,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2816,1088,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2944,1088,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3072,1088,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3200,1088,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3328,1088,128,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x1000000, Bhv_Custom_0x13000020,31),
OBJECT_WITH_ACTS(53,9920,-1024,128,0,0,0,0x0, Bhv_Custom_0x13000034,31),
OBJECT_WITH_ACTS(53,9920,320,128,0,0,0,0x0, Bhv_Custom_0x13000034,31),
OBJECT_WITH_ACTS(53,9920,2048,128,0,0,0,0x0, Bhv_Custom_0x13000034,31),
OBJECT_WITH_ACTS(53,11840,-1024,128,0,0,0,0x1000000, Bhv_Custom_0x13000034,31),
OBJECT_WITH_ACTS(53,11840,320,128,0,0,0,0x1000000, Bhv_Custom_0x13000034,31),
OBJECT_WITH_ACTS(53,11840,2048,128,0,0,0,0x1000000, Bhv_Custom_0x13000034,31),
OBJECT_WITH_ACTS(100,5120,576,128,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,5888,704,128,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,6656,448,128,0,0,0,0x0, bhvPiranhaPlant,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_2_[] = {
WARP_NODE(10,9,2,0,0),
WARP_NODE(11,23,2,10,0),
WARP_NODE(240,16,3,10,0),
WARP_NODE(241,16,2,10,0),
RETURN()
};
const LevelScript local_area_castle_grounds_3_[] = {
AREA(3,Geo_castle_grounds_3_0x14040a0),
TERRAIN(col_castle_grounds_3_0xe009c00),
SET_BACKGROUND_MUSIC(0,2),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_3_),
JUMP_LINK(local_warps_castle_grounds_3_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_3_[] = {
OBJECT_WITH_ACTS(0,249,260,-192,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(116,3640,1280,-189,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3768,1280,-189,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,3512,1280,-189,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(104,3855,1291,-239,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(116,4275,388,-193,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,5038,1536,-193,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,4910,1536,-193,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,6455,1088,-193,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,6573,1088,-193,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,7774,1283,-188,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,7902,1283,-188,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,8028,1283,-188,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,8156,1283,-188,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,11008,1163,-195,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,11136,1163,-195,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,11904,1291,-195,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,12032,1291,-195,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,12416,1291,-195,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,12544,1291,-195,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,14552,257,-191,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,14680,257,-191,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,14808,257,-191,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,15461,1019,-238,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,15589,1019,-238,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(192,5329,1413,-194,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,5765,1413,-198,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,9995,1163,-193,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,7680,576,-194,0,0,0,0x1000000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(104,13718,1033,-193,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,17302,259,-192,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,14648,1156,-192,0,270,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(104,9521,946,-192,0,270,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(122,20491,424,-192,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(53,7396,512,-192,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(53,11211,896,-192,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(53,11847,896,-192,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(53,16411,1198,-192,0,0,0,0x0, bhvStarDoor,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvPenguinRaceFinishLine,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, Bhv_Custom_0x13000020,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_3_[] = {
WARP_NODE(10,9,3,0,0),
WARP_NODE(240,19,1,10,0),
WARP_NODE(241,16,3,10,0),
RETURN()
};
const LevelScript local_area_castle_grounds_4_[] = {
AREA(4,Geo_castle_grounds_4_0x1404280),
TERRAIN(col_castle_grounds_4_0xe006420),
SET_BACKGROUND_MUSIC(0,17),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_4_),
JUMP_LINK(local_warps_castle_grounds_4_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_4_[] = {
OBJECT_WITH_ACTS(0,-8192,960,128,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvPenguinRaceFinishLine,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_4_[] = {
WARP_NODE(10,9,4,0,0),
WARP_NODE(240,6,1,50,0),
WARP_NODE(241,6,1,100,0),
RETURN()
};
const LevelScript local_area_castle_grounds_5_[] = {
AREA(5,Geo_castle_grounds_5_0x1404460),
TERRAIN(col_castle_grounds_5_0xe00d6f0),
SET_BACKGROUND_MUSIC(0,2),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_castle_grounds_5_),
JUMP_LINK(local_warps_castle_grounds_5_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_castle_grounds_5_[] = {
OBJECT_WITH_ACTS(0,-8074,192,128,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,18300,432,128,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(137,-6208,576,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-6080,576,0,0,0,0,0x1000000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-5952,576,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4672,576,0,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4672,1088,0,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4544,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4416,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-4288,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-960,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1088,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1216,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1344,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-832,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-960,1088,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-832,1088,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1088,1088,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1216,1088,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-1344,1088,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,576,576,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,704,1088,0,0,0,0,0x10000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,832,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,960,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1088,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,1984,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2112,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2240,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2368,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2752,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2880,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3008,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2240,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2368,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2494,1088,0,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2624,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,2752,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,7872,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,8000,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,8128,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,8256,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12480,576,0,0,0,0,0x60000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13632,576,0,0,0,0,0x1040000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,15552,576,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,15680,576,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,15680,1088,0,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12864,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,12992,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13120,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13248,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13376,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,13888,1088,0,0,0,0,0x0, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3904,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,4032,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3776,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,3648,1088,0,0,0,0,0xf0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(104,-4641,192,128,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,-4416,192,128,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(192,-3367,192,128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-3117,192,128,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-695,192,100,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-486,192,114,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,266,192,107,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,538,192,96,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,743,192,170,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2769,192,106,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,2985,192,34,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,4759,192,54,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,6346,192,150,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,7065,192,177,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,6346,192,150,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,12136,192,84,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,12375,192,115,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(104,-1368,192,38,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,14705,192,96,0,0,0,0x10000, bhvKoopa,31),
OBJECT_WITH_ACTS(104,11039,672,130,0,270,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(104,13083,672,101,0,270,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(104,13502,672,38,0,270,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(100,-2176,704,128,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,1408,704,128,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,5120,704,128,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,6656,448,128,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,7552,704,128,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,8064,576,128,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,8576,832,128,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvPenguinRaceFinishLine,31),
OBJECT_WITH_ACTS(100,14464,704,128,0,0,0,0x0, bhvPiranhaPlant,31),
//OBJECT_WITH_ACTS(56,15936,192,128,0,0,0,0x0,0x130000e8,31),
OBJECT_WITH_ACTS(0,3000,2010,128,0,90,0,0xb0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,2494,2430,128,0,0,0,0xb0000, bhvWarp,31),
RETURN()
};
const LevelScript local_warps_castle_grounds_5_[] = {
WARP_NODE(10,9,5,0,0),
WARP_NODE(11,23,3,10,0),
WARP_NODE(240,9,1,10,0),
WARP_NODE(241,16,5,10,0),
RETURN()
};
