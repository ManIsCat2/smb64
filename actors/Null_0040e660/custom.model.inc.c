#include "custom.model.inc.h"
Vtx VB_Null_geo_0040e660_0x40e290[] = {
	{{{ 196, 69, 130 }, 0, { 32411, 520 }, { 0, 127, 0, 255}}},
	{{{ -196, 69, -130 }, 0, { 31627, 0 }, { 0, 127, 0, 255}}},
	{{{ -196, 69, 130 }, 0, { 31627, 520 }, { 0, 127, 0, 255}}},
	{{{ 196, 69, -130 }, 0, { 32411, 0 }, { 0, 127, 0, 255}}},
	{{{ 196, 0, -130 }, 0, { -32411, 0 }, { 0, 129, 0, 255}}},
	{{{ -196, 0, 130 }, 0, { -31627, 520 }, { 0, 129, 0, 255}}},
	{{{ -196, 0, -130 }, 0, { -31627, 0 }, { 0, 129, 0, 255}}},
	{{{ 196, 0, 130 }, 0, { -32411, 520 }, { 0, 129, 0, 255}}},
};

Vtx VB_Null_geo_0040e660_0x40e310[] = {
	{{{ 196, 0, -130 }, 0, { -20, -4350 }, { 127, 0, 0, 255}}},
	{{{ 196, 69, 130 }, 0, { -1061, -4628 }, { 127, 0, 0, 255}}},
	{{{ 196, 0, 130 }, 0, { -1061, -4350 }, { 127, 0, 0, 255}}},
	{{{ 196, 69, -130 }, 0, { -20, -4628 }, { 127, 0, 0, 255}}},
	{{{ 196, 0, -130 }, 0, { -1588, -4350 }, { 0, 0, 129, 255}}},
	{{{ -196, 69, -130 }, 0, { -20, -4628 }, { 0, 0, 129, 255}}},
	{{{ 196, 69, -130 }, 0, { -1588, -4628 }, { 0, 0, 129, 255}}},
	{{{ -196, 0, -130 }, 0, { -20, -4350 }, { 0, 0, 129, 255}}},
	{{{ -196, 0, 130 }, 0, { 1021, -4350 }, { 129, 0, 0, 255}}},
	{{{ -196, 69, -130 }, 0, { -20, -4628 }, { 129, 0, 0, 255}}},
	{{{ -196, 0, -130 }, 0, { -20, -4350 }, { 129, 0, 0, 255}}},
};

Vtx VB_Null_geo_0040e660_0x40e3c0[] = {
	{{{ -196, 69, -130 }, 0, { -20, -4628 }, { 129, 0, 0, 255}}},
	{{{ -196, 0, 130 }, 0, { 1021, -4350 }, { 129, 0, 0, 255}}},
	{{{ -196, 69, 130 }, 0, { 1021, -4628 }, { 129, 0, 0, 255}}},
	{{{ -196, 0, 130 }, 0, { 30978, -4350 }, { 0, 0, 127, 255}}},
	{{{ 196, 69, 130 }, 0, { 32546, -4628 }, { 0, 0, 127, 255}}},
	{{{ -196, 69, 130 }, 0, { 30978, -4628 }, { 0, 0, 127, 255}}},
	{{{ 196, 0, 130 }, 0, { 32546, -4350 }, { 0, 0, 127, 255}}},
};

Light_t Light_Null_geo_0040e660_0x40e000 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 127, 127, 127}, 0
};

Ambient_t Light_Null_geo_0040e660_0x40e008 = {
	{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_Null_geo_0040e660_0x40e430[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPLoadSync(),
	gsDPSetTextureImage(0, 2, 1, Null_geo_0040e660__texture_0040E010),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsDPPipeSync(),
	gsDPSetTile(0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPLight(&Light_Null_geo_0040e660_0x40e000.col, 1),
	gsSPLight(&Light_Null_geo_0040e660_0x40e008.col, 2),
	gsSPVertex(VB_Null_geo_0040e660_0x40e290, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

Gfx DL_Null_geo_0040e660_0x40e4e0[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPLoadSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
	gsSPLight(&Light_Null_geo_0040e660_0x40e000.col, 1),
	gsSPLight(&Light_Null_geo_0040e660_0x40e008.col, 2),
	gsDPSetTextureImage(0, 2, 1, Null_geo_0040e660__texture_0040E210),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 63, 1024),
	gsDPPipeSync(),
	gsDPSetTile(0, 2, 2, 0, 0, 0, 0, 3, 0, 0, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPVertex(VB_Null_geo_0040e660_0x40e310, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSPVertex(VB_Null_geo_0040e660_0x40e3c0, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP1Triangle(4, 3, 6, 0),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

