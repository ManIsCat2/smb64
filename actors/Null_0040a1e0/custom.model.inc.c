#include "custom.model.inc.h"
Vtx VB_Null_geo_0040a1e0_0x40aa10[] = {
	{{{ 100, 200, 0 }, 0, { 1024, 0 }, { 0, 0, 127, 255}}},
	{{{ -100, 0, 0 }, 0, { 0, 1024 }, { 0, 0, 127, 255}}},
	{{{ 100, 0, 0 }, 0, { 1024, 1024 }, { 0, 0, 127, 255}}},
	{{{ -100, 200, 0 }, 0, { 0, 0 }, { 0, 0, 127, 255}}},
};

Light_t Light_Null_geo_0040a1e0_0x40a200 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 127, 127, 127}, 0
};

Ambient_t Light_Null_geo_0040a1e0_0x40a208 = {
	{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_Null_geo_0040a1e0_0x40aa88[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, 0),
	gsDPTileSync(),
	gsDPLoadSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
	gsSPLight(&Light_Null_geo_0040a1e0_0x40a200.col, 1),
	gsSPLight(&Light_Null_geo_0040a1e0_0x40a208.col, 2),
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(0, 2, 1, Null_geo_0040a1e0__texture_0040A210),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPVertex(VB_Null_geo_0040a1e0_0x40aa10, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsSPEndDisplayList(),
};

