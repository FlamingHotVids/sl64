Lights1 fire_flower_f3dlite_material_005_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 fire_flower_f3dlite_material_lights = gdSPDefLights1(
	0x53, 0x7F, 0x2D,
	0xAA, 0xFF, 0x62, 0x28, 0x28, 0x28);

Lights1 fire_flower_f3dlite_material_006_lights = gdSPDefLights1(
	0x53, 0x7F, 0x2D,
	0xAA, 0xFF, 0x62, 0x28, 0x28, 0x28);

Lights1 fire_flower_f3dlite_material_007_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0xC, 0x42, 0x0, 0x28, 0x28, 0x28);

Gfx fire_flower_piranha_plant_leaf_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 fire_flower_piranha_plant_leaf_rgba16_rgba16[] = {
	#include "actors/fire_flower/piranha_plant_leaf.rgba16.inc.c"
};

Gfx fire_flower_star_eye_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 fire_flower_star_eye_rgba16_rgba16[] = {
	#include "actors/fire_flower/star_eye.rgba16.inc.c"
};

Gfx fire_flower_star_eye_rgba16_ia8_aligner[] = {gsSPEndDisplayList()};
u8 fire_flower_star_eye_rgba16_ia8[] = {
	#include "actors/fire_flower/star_eye.rgba16.ia8.inc.c"
};

Vtx fire_flower_000_displaylist_mesh_layer_4_vtx_0[108] = {
	{{ {48, -215, 0}, 0, {1008, 543}, {120, 234, 34, 255} }},
	{{ {8, -177, 0}, 0, {1008, 2313}, {110, 52, 38, 255} }},
	{{ {9, -177, 48}, 0, {-16, 2312}, {96, 48, 188, 255} }},
	{{ {8, -178, 0}, 0, {1008, 2313}, {212, 164, 76, 255} }},
	{{ {48, -216, 0}, 0, {1008, 543}, {26, 156, 74, 255} }},
	{{ {74, -229, 0}, 0, {1008, -16}, {208, 101, 195, 255} }},
	{{ {50, -217, 48}, 0, {-16, 568}, {108, 20, 192, 255} }},
	{{ {9, -177, 48}, 0, {-16, 2312}, {178, 222, 162, 255} }},
	{{ {50, -217, 48}, 0, {-16, 568}, {202, 193, 160, 255} }},
	{{ {74, -229, 0}, 0, {1008, -16}, {253, 150, 70, 255} }},
	{{ {75, -229, 48}, 0, {-16, -16}, {95, 60, 196, 255} }},
	{{ {75, -229, 48}, 0, {-16, -16}, {173, 219, 89, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1803}, {242, 117, 48, 255} }},
	{{ {-79, -19, 23}, 0, {890, 779}, {142, 17, 54, 255} }},
	{{ {-69, -30, 74}, 0, {102, 460}, {204, 86, 77, 255} }},
	{{ {-32, -6, 38}, 0, {294, 1952}, {248, 127, 0, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1791}, {0, 106, 70, 255} }},
	{{ {-32, -6, 38}, 0, {294, 1952}, {248, 127, 0, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1803}, {242, 117, 48, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1803}, {223, 164, 81, 255} }},
	{{ {-69, -30, 74}, 0, {102, 460}, {204, 86, 77, 255} }},
	{{ {-69, -30, 74}, 0, {102, 460}, {114, 205, 233, 255} }},
	{{ {-93, -35, 91}, 0, {102, 10}, {216, 99, 69, 255} }},
	{{ {-99, -31, 37}, 0, {890, 441}, {208, 109, 45, 255} }},
	{{ {-79, -19, 23}, 0, {890, 779}, {142, 17, 54, 255} }},
	{{ {-79, -20, 23}, 0, {890, 779}, {9, 171, 94, 255} }},
	{{ {-120, -35, -6}, 0, {890, 10}, {203, 96, 64, 255} }},
	{{ {-69, -30, -29}, 0, {102, 460}, {178, 84, 201, 255} }},
	{{ {-32, -6, 0}, 0, {102, 1803}, {78, 100, 255, 255} }},
	{{ {-32, -6, 9}, 0, {294, 1952}, {246, 126, 16, 255} }},
	{{ {-32, -7, 24}, 0, {625, 2189}, {34, 122, 14, 255} }},
	{{ {15, -19, 23}, 0, {890, 779}, {215, 116, 33, 255} }},
	{{ {15, -19, 23}, 0, {890, 779}, {215, 116, 33, 255} }},
	{{ {-32, -6, 38}, 0, {294, 1952}, {248, 127, 0, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1803}, {53, 115, 5, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1791}, {0, 106, 70, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1803}, {30, 135, 22, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1791}, {187, 179, 75, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1803}, {223, 164, 81, 255} }},
	{{ {-32, -6, 38}, 0, {294, 1952}, {9, 129, 2, 255} }},
	{{ {-79, -20, 23}, 0, {890, 779}, {9, 171, 94, 255} }},
	{{ {-69, -30, 74}, 0, {102, 460}, {114, 205, 233, 255} }},
	{{ {-99, -31, 37}, 0, {890, 441}, {26, 9, 132, 255} }},
	{{ {-93, -35, 91}, 0, {102, 10}, {203, 161, 66, 255} }},
	{{ {-93, -35, 91}, 0, {102, 10}, {216, 99, 69, 255} }},
	{{ {-120, -35, 52}, 0, {890, 10}, {162, 81, 28, 255} }},
	{{ {-99, -31, 37}, 0, {890, 441}, {208, 109, 45, 255} }},
	{{ {-120, -35, 52}, 0, {890, 10}, {188, 168, 195, 255} }},
	{{ {15, -19, 23}, 0, {890, 779}, {215, 116, 33, 255} }},
	{{ {-32, -6, 9}, 0, {294, 1952}, {246, 126, 16, 255} }},
	{{ {-32, -7, 24}, 0, {625, 2189}, {34, 122, 14, 255} }},
	{{ {-32, -6, 0}, 0, {102, 1803}, {199, 74, 169, 255} }},
	{{ {5, -30, -29}, 0, {102, 460}, {254, 15, 130, 255} }},
	{{ {56, -35, -6}, 0, {890, 10}, {80, 78, 196, 255} }},
	{{ {15, -20, 23}, 0, {890, 779}, {179, 165, 43, 255} }},
	{{ {35, -31, 37}, 0, {890, 441}, {116, 53, 0, 255} }},
	{{ {5, -30, 74}, 0, {102, 460}, {40, 119, 21, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1803}, {53, 115, 5, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1803}, {30, 135, 22, 255} }},
	{{ {5, -30, 74}, 0, {102, 460}, {185, 171, 194, 255} }},
	{{ {-32, -6, 38}, 0, {294, 1952}, {9, 129, 2, 255} }},
	{{ {-32, -6, 46}, 0, {102, 1791}, {187, 179, 75, 255} }},
	{{ {-32, -7, 24}, 0, {625, 2189}, {12, 133, 30, 255} }},
	{{ {-79, -20, 23}, 0, {890, 779}, {9, 171, 94, 255} }},
	{{ {-32, -6, 9}, 0, {294, 1952}, {251, 129, 4, 255} }},
	{{ {-32, -7, 24}, 0, {625, 2189}, {12, 133, 30, 255} }},
	{{ {-79, -20, 23}, 0, {890, 779}, {9, 171, 94, 255} }},
	{{ {-32, -6, 0}, 0, {102, 1803}, {37, 141, 217, 255} }},
	{{ {-69, -30, -29}, 0, {102, 460}, {64, 176, 75, 255} }},
	{{ {-120, -35, -6}, 0, {890, 10}, {226, 134, 239, 255} }},
	{{ {-120, -35, -6}, 0, {890, 10}, {203, 96, 64, 255} }},
	{{ {-93, -35, -46}, 0, {102, 10}, {47, 168, 177, 255} }},
	{{ {-93, -35, -46}, 0, {102, 10}, {186, 82, 189, 255} }},
	{{ {-69, -30, -29}, 0, {102, 460}, {178, 84, 201, 255} }},
	{{ {-32, -6, 0}, 0, {102, 1803}, {78, 100, 255, 255} }},
	{{ {-32, -6, -1}, 0, {102, 1791}, {0, 71, 150, 255} }},
	{{ {-32, -6, 9}, 0, {294, 1952}, {246, 126, 16, 255} }},
	{{ {-32, -6, 0}, 0, {102, 1803}, {199, 74, 169, 255} }},
	{{ {-32, -6, 0}, 0, {102, 1803}, {12, 134, 221, 255} }},
	{{ {5, -30, -29}, 0, {102, 460}, {254, 15, 130, 255} }},
	{{ {5, -30, -29}, 0, {102, 460}, {254, 15, 130, 255} }},
	{{ {5, -30, -29}, 0, {102, 460}, {233, 131, 7, 255} }},
	{{ {-32, -6, 0}, 0, {102, 1803}, {12, 134, 221, 255} }},
	{{ {29, -35, -46}, 0, {102, 10}, {219, 91, 176, 255} }},
	{{ {56, -35, -6}, 0, {890, 10}, {80, 78, 196, 255} }},
	{{ {29, -35, -46}, 0, {102, 10}, {65, 159, 205, 255} }},
	{{ {56, -35, -6}, 0, {890, 10}, {30, 134, 240, 255} }},
	{{ {15, -20, 23}, 0, {890, 779}, {179, 165, 43, 255} }},
	{{ {-32, -6, 9}, 0, {294, 1952}, {251, 129, 4, 255} }},
	{{ {-32, -7, 24}, 0, {625, 2189}, {12, 133, 30, 255} }},
	{{ {-32, -6, -1}, 0, {102, 1791}, {16, 168, 165, 255} }},
	{{ {-32, -6, 0}, 0, {102, 1803}, {37, 141, 217, 255} }},
	{{ {-32, -6, -1}, 0, {102, 1791}, {0, 71, 150, 255} }},
	{{ {-93, -35, -46}, 0, {102, 10}, {186, 82, 189, 255} }},
	{{ {-69, -30, -29}, 0, {102, 460}, {64, 176, 75, 255} }},
	{{ {-93, -35, -46}, 0, {102, 10}, {47, 168, 177, 255} }},
	{{ {-120, -35, -6}, 0, {890, 10}, {226, 134, 239, 255} }},
	{{ {-93, -35, -46}, 0, {102, 10}, {47, 168, 177, 255} }},
	{{ {-69, -30, -29}, 0, {102, 460}, {64, 176, 75, 255} }},
	{{ {29, -35, 91}, 0, {102, 10}, {62, 81, 76, 255} }},
	{{ {35, -31, 37}, 0, {890, 441}, {116, 53, 0, 255} }},
	{{ {5, -30, 74}, 0, {102, 460}, {40, 119, 21, 255} }},
	{{ {56, -35, 52}, 0, {890, 10}, {78, 86, 205, 255} }},
	{{ {29, -35, 91}, 0, {102, 10}, {31, 147, 58, 255} }},
	{{ {5, -30, 74}, 0, {102, 460}, {185, 171, 194, 255} }},
	{{ {35, -31, 37}, 0, {890, 441}, {42, 136, 249, 255} }},
	{{ {15, -20, 23}, 0, {890, 779}, {179, 165, 43, 255} }},
	{{ {56, -35, 52}, 0, {890, 10}, {82, 162, 25, 255} }},
};

Gfx fire_flower_000_displaylist_mesh_layer_4_tri_0[] = {
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_4_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSP1Triangle(0, 2, 6, 0),
	gsSP1Triangle(6, 2, 7, 0),
	gsSP1Triangle(1, 7, 2, 0),
	gsSP1Triangle(1, 3, 7, 0),
	gsSP1Triangle(4, 7, 3, 0),
	gsSP1Triangle(4, 8, 7, 0),
	gsSP1Triangle(9, 8, 4, 0),
	gsSP1Triangle(5, 9, 4, 0),
	gsSP1Triangle(10, 9, 5, 0),
	gsSP1Triangle(5, 6, 10, 0),
	gsSP1Triangle(10, 6, 8, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(9, 11, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 13, 12, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_4_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(4, 8, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(8, 12, 11, 0),
	gsSP1Triangle(12, 8, 13, 0),
	gsSP1Triangle(13, 8, 14, 0),
	gsSP1Triangle(8, 1, 14, 0),
	gsSP1Triangle(1, 15, 14, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_4_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 11, 9, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(13, 14, 10, 0),
	gsSP1Triangle(14, 8, 10, 0),
	gsSP1Triangle(13, 10, 15, 0),
	gsSP1Triangle(10, 11, 15, 0),
	gsSP1Triangle(13, 15, 11, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_4_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSP1Triangle(7, 6, 0, 0),
	gsSP1Triangle(8, 7, 0, 0),
	gsSP1Triangle(0, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(6, 11, 10, 0),
	gsSP1Triangle(6, 10, 12, 0),
	gsSP1Triangle(13, 12, 10, 0),
	gsSP1Triangle(12, 14, 6, 0),
	gsSP1Triangle(15, 14, 12, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_4_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(5, 4, 2, 0),
	gsSP1Triangle(6, 5, 2, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(8, 9, 4, 0),
	gsSP1Triangle(9, 3, 4, 0),
	gsSP1Triangle(9, 10, 3, 0),
	gsSP1Triangle(11, 3, 10, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_4_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(6, 7, 1, 0),
	gsSP1Triangle(2, 1, 7, 0),
	gsSP1Triangle(7, 8, 2, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(8, 10, 2, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 2, 10, 0),
	gsSP1Triangle(3, 5, 1, 0),
	gsSP1Triangle(6, 1, 5, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_4_vtx_0 + 96, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 6, 4, 0),
	gsSP1Triangle(6, 3, 7, 0),
	gsSP1Triangle(3, 8, 7, 0),
	gsSP1Triangle(3, 5, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(4, 9, 10, 0),
	gsSP1Triangle(6, 9, 4, 0),
	gsSP1Triangle(6, 11, 9, 0),
	gsSP1Triangle(6, 7, 11, 0),
	gsSP1Triangle(7, 9, 11, 0),
	gsSPEndDisplayList(),
};

Vtx fire_flower_000_displaylist_mesh_layer_1_vtx_0[12] = {
	{{ {-36, -80, 23}, 0, {1282, -436}, {76, 178, 66, 255} }},
	{{ {-34, -5, 26}, 0, {1282, -436}, {95, 78, 223, 255} }},
	{{ {-36, -5, 23}, 0, {1282, -436}, {76, 78, 66, 255} }},
	{{ {-34, -80, 26}, 0, {1282, -436}, {95, 178, 223, 255} }},
	{{ {-30, -80, 26}, 0, {1282, -436}, {19, 178, 157, 255} }},
	{{ {-30, -80, 19}, 0, {1282, -436}, {161, 178, 33, 255} }},
	{{ {-34, -80, 19}, 0, {1282, -436}, {237, 178, 99, 255} }},
	{{ {-34, -5, 19}, 0, {1282, -436}, {237, 78, 99, 255} }},
	{{ {-28, -5, 23}, 0, {1282, -436}, {180, 78, 190, 255} }},
	{{ {-30, -5, 26}, 0, {1282, -436}, {19, 78, 157, 255} }},
	{{ {-28, -80, 23}, 0, {1282, -436}, {180, 178, 190, 255} }},
	{{ {-30, -5, 19}, 0, {1282, -436}, {161, 78, 33, 255} }},
};

Gfx fire_flower_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(0, 6, 5, 0),
	gsSP1Triangle(6, 0, 2, 0),
	gsSP1Triangle(6, 2, 7, 0),
	gsSP1Triangle(7, 2, 8, 0),
	gsSP1Triangle(2, 1, 8, 0),
	gsSP1Triangle(1, 9, 8, 0),
	gsSP1Triangle(3, 9, 1, 0),
	gsSP1Triangle(3, 4, 9, 0),
	gsSP1Triangle(4, 8, 9, 0),
	gsSP1Triangle(4, 10, 8, 0),
	gsSP1Triangle(5, 10, 4, 0),
	gsSP1Triangle(10, 5, 11, 0),
	gsSP1Triangle(5, 7, 11, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 11, 7, 0),
	gsSP1Triangle(10, 11, 8, 0),
	gsSPEndDisplayList(),
};

Vtx fire_flower_000_displaylist_mesh_layer_1_vtx_1[183] = {
	{{ {0, -132, 92}, 0, {427, 1119}, {0, 0, 127, 255} }},
	{{ {0, -173, 82}, 0, {427, 1119}, {0, 186, 106, 255} }},
	{{ {35, -173, 74}, 0, {427, 1119}, {47, 187, 96, 255} }},
	{{ {41, -132, 82}, 0, {427, 1119}, {59, 1, 113, 255} }},
	{{ {61, -173, 51}, 0, {427, 1119}, {90, 190, 61, 255} }},
	{{ {25, -192, 46}, 0, {427, 1119}, {24, 144, 55, 255} }},
	{{ {43, -192, 35}, 0, {427, 1119}, {51, 145, 36, 255} }},
	{{ {0, -205, 20}, 0, {427, 1119}, {1, 129, 0, 255} }},
	{{ {50, -192, 20}, 0, {427, 1119}, {65, 147, 0, 255} }},
	{{ {43, -192, 5}, 0, {427, 1119}, {51, 145, 220, 255} }},
	{{ {25, -192, -6}, 0, {427, 1119}, {24, 143, 202, 255} }},
	{{ {61, -173, -11}, 0, {427, 1119}, {90, 190, 196, 255} }},
	{{ {35, -173, -34}, 0, {427, 1119}, {47, 186, 161, 255} }},
	{{ {41, -132, -42}, 0, {427, 1119}, {59, 0, 143, 255} }},
	{{ {0, -132, -52}, 0, {427, 1119}, {0, 0, 129, 255} }},
	{{ {0, -173, -42}, 0, {427, 1119}, {0, 185, 150, 255} }},
	{{ {35, -93, -34}, 0, {427, 1119}, {49, 69, 161, 255} }},
	{{ {41, -132, -42}, 0, {427, 1119}, {59, 0, 143, 255} }},
	{{ {0, -132, -52}, 0, {427, 1119}, {0, 0, 129, 255} }},
	{{ {61, -93, -11}, 0, {427, 1119}, {89, 71, 199, 255} }},
	{{ {35, -74, 2}, 0, {427, 1119}, {43, 116, 228, 255} }},
	{{ {20, -74, -11}, 0, {427, 1119}, {24, 116, 209, 255} }},
	{{ {0, -67, 20}, 0, {427, 1119}, {0, 127, 0, 255} }},
	{{ {41, -74, 20}, 0, {427, 1119}, {50, 117, 0, 255} }},
	{{ {35, -74, 38}, 0, {427, 1119}, {43, 117, 27, 255} }},
	{{ {20, -74, 51}, 0, {427, 1119}, {24, 116, 47, 255} }},
	{{ {35, -93, 74}, 0, {427, 1119}, {49, 69, 95, 255} }},
	{{ {61, -93, 51}, 0, {427, 1119}, {89, 71, 56, 255} }},
	{{ {41, -132, 82}, 0, {427, 1119}, {59, 1, 113, 255} }},
	{{ {0, -132, 92}, 0, {427, 1119}, {0, 0, 127, 255} }},
	{{ {0, -93, 82}, 0, {427, 1119}, {0, 69, 107, 255} }},
	{{ {70, -132, 56}, 0, {427, 1119}, {107, 1, 68, 255} }},
	{{ {41, -132, 82}, 0, {427, 1119}, {59, 1, 113, 255} }},
	{{ {61, -173, 51}, 0, {427, 1119}, {90, 190, 61, 255} }},
	{{ {70, -132, 56}, 0, {427, 1119}, {107, 1, 68, 255} }},
	{{ {70, -173, 20}, 0, {427, 1119}, {110, 192, 0, 255} }},
	{{ {43, -192, 35}, 0, {427, 1119}, {51, 145, 36, 255} }},
	{{ {50, -192, 20}, 0, {427, 1119}, {65, 147, 0, 255} }},
	{{ {43, -192, 5}, 0, {427, 1119}, {51, 145, 220, 255} }},
	{{ {61, -173, -11}, 0, {427, 1119}, {90, 190, 196, 255} }},
	{{ {70, -132, -16}, 0, {427, 1119}, {107, 0, 188, 255} }},
	{{ {41, -132, -42}, 0, {427, 1119}, {59, 0, 143, 255} }},
	{{ {61, -93, -11}, 0, {427, 1119}, {89, 71, 199, 255} }},
	{{ {70, -93, 20}, 0, {427, 1119}, {105, 72, 0, 255} }},
	{{ {41, -74, 20}, 0, {427, 1119}, {50, 117, 0, 255} }},
	{{ {35, -74, 2}, 0, {427, 1119}, {43, 116, 228, 255} }},
	{{ {61, -93, 51}, 0, {427, 1119}, {89, 71, 56, 255} }},
	{{ {35, -74, 38}, 0, {427, 1119}, {43, 117, 27, 255} }},
	{{ {70, -93, 20}, 0, {427, 1119}, {105, 72, 0, 255} }},
	{{ {70, -132, 56}, 0, {427, 1119}, {107, 1, 68, 255} }},
	{{ {81, -132, 20}, 0, {427, 1119}, {127, 0, 0, 255} }},
	{{ {70, -173, 20}, 0, {427, 1119}, {110, 192, 0, 255} }},
	{{ {70, -132, -16}, 0, {427, 1119}, {107, 0, 188, 255} }},
	{{ {35, -93, -34}, 0, {427, 1119}, {49, 69, 161, 255} }},
	{{ {0, -132, -52}, 0, {427, 1119}, {0, 0, 129, 255} }},
	{{ {0, -93, -42}, 0, {427, 1119}, {0, 68, 149, 255} }},
	{{ {20, -74, 51}, 0, {355, 2555}, {24, 116, 47, 255} }},
	{{ {0, -93, 82}, 0, {-618, 2123}, {0, 69, 107, 255} }},
	{{ {35, -93, 74}, 0, {-357, 2123}, {49, 69, 95, 255} }},
	{{ {0, -74, 56}, 0, {205, 2555}, {0, 116, 53, 255} }},
	{{ {0, -67, 20}, 0, {1328, 2713}, {0, 127, 0, 255} }},
	{{ {-20, -74, 51}, 0, {355, 2555}, {232, 116, 47, 255} }},
	{{ {-35, -74, 38}, 0, {766, 2555}, {213, 116, 28, 255} }},
	{{ {-40, -74, 20}, 0, {1328, 2555}, {206, 117, 0, 255} }},
	{{ {0, -67, 20}, 0, {1328, 2713}, {0, 127, 0, 255} }},
	{{ {-35, -74, 2}, 0, {766, 2555}, {213, 116, 228, 255} }},
	{{ {-40, -74, 20}, 0, {1328, 2555}, {206, 117, 0, 255} }},
	{{ {-20, -74, -11}, 0, {355, 2555}, {232, 116, 209, 255} }},
	{{ {0, -74, -16}, 0, {205, 2555}, {0, 115, 202, 255} }},
	{{ {20, -74, -11}, 0, {355, 2555}, {24, 116, 209, 255} }},
	{{ {0, -93, -42}, 0, {-618, 2123}, {0, 68, 149, 255} }},
	{{ {35, -93, -34}, 0, {-357, 2123}, {49, 69, 161, 255} }},
	{{ {-35, -93, -34}, 0, {-357, 2123}, {206, 69, 162, 255} }},
	{{ {0, -132, -52}, 0, {-918, 1248}, {0, 0, 129, 255} }},
	{{ {-40, -132, -42}, 0, {-618, 1248}, {195, 254, 144, 255} }},
	{{ {-28, -173, -34}, 0, {-357, 318}, {212, 186, 159, 255} }},
	{{ {0, -173, -42}, 0, {-618, 318}, {0, 185, 150, 255} }},
	{{ {0, -192, -10}, 0, {205, -113}, {0, 144, 196, 255} }},
	{{ {35, -173, -34}, 0, {-357, 318}, {47, 186, 161, 255} }},
	{{ {25, -192, -6}, 0, {355, -113}, {24, 143, 202, 255} }},
	{{ {25, -192, -6}, 0, {355, -113}, {24, 143, 202, 255} }},
	{{ {0, -205, 20}, 0, {1328, -271}, {1, 129, 0, 255} }},
	{{ {0, -192, -10}, 0, {205, -113}, {0, 144, 196, 255} }},
	{{ {-35, -192, -6}, 0, {355, -113}, {220, 149, 197, 255} }},
	{{ {-48, -192, 5}, 0, {766, -113}, {194, 153, 214, 255} }},
	{{ {-55, -192, 20}, 0, {1328, -113}, {179, 155, 0, 255} }},
	{{ {-48, -192, 35}, 0, {766, -113}, {194, 154, 43, 255} }},
	{{ {-35, -192, 46}, 0, {355, -113}, {220, 149, 59, 255} }},
	{{ {0, -192, 50}, 0, {205, -113}, {0, 144, 60, 255} }},
	{{ {25, -192, 46}, 0, {355, -113}, {24, 144, 55, 255} }},
	{{ {35, -173, 74}, 0, {-357, 318}, {47, 187, 96, 255} }},
	{{ {0, -173, 82}, 0, {-618, 318}, {0, 186, 106, 255} }},
	{{ {-28, -173, 74}, 0, {-357, 318}, {212, 187, 97, 255} }},
	{{ {0, -132, 92}, 0, {-918, 1248}, {0, 0, 127, 255} }},
	{{ {-40, -132, 82}, 0, {-618, 1248}, {195, 254, 112, 255} }},
	{{ {-35, -93, 74}, 0, {-357, 2123}, {206, 69, 94, 255} }},
	{{ {-35, -93, 74}, 0, {-357, 2123}, {206, 69, 94, 255} }},
	{{ {0, -132, 92}, 0, {-918, 1248}, {0, 0, 127, 255} }},
	{{ {0, -93, 82}, 0, {-618, 2123}, {0, 69, 107, 255} }},
	{{ {-20, -74, 51}, 0, {355, 2555}, {232, 116, 47, 255} }},
	{{ {0, -74, 56}, 0, {205, 2555}, {0, 116, 53, 255} }},
	{{ {-35, -74, 38}, 0, {766, 2555}, {213, 116, 28, 255} }},
	{{ {-61, -93, 48}, 0, {440, 2137}, {166, 72, 54, 255} }},
	{{ {-40, -74, 20}, 0, {1328, 2555}, {206, 117, 0, 255} }},
	{{ {-70, -93, 20}, 0, {1328, 2123}, {151, 72, 0, 255} }},
	{{ {-61, -93, -9}, 0, {440, 2137}, {166, 72, 202, 255} }},
	{{ {-35, -74, 2}, 0, {766, 2555}, {213, 116, 228, 255} }},
	{{ {-35, -93, -34}, 0, {-357, 2123}, {206, 69, 162, 255} }},
	{{ {-20, -74, -11}, 0, {355, 2555}, {232, 116, 209, 255} }},
	{{ {-70, -132, -16}, 0, {205, 1248}, {150, 253, 186, 255} }},
	{{ {-40, -132, -42}, 0, {-618, 1248}, {195, 254, 144, 255} }},
	{{ {-54, -173, -11}, 0, {355, 318}, {167, 196, 187, 255} }},
	{{ {-40, -132, -42}, 0, {-618, 1248}, {195, 254, 144, 255} }},
	{{ {-28, -173, -34}, 0, {-357, 318}, {212, 186, 159, 255} }},
	{{ {-54, -173, -11}, 0, {355, 318}, {167, 196, 187, 255} }},
	{{ {-35, -192, -6}, 0, {329, -113}, {220, 149, 197, 255} }},
	{{ {-48, -192, 5}, 0, {740, -113}, {194, 153, 214, 255} }},
	{{ {-70, -173, 20}, 0, {1328, 318}, {142, 199, 0, 255} }},
	{{ {-55, -192, 20}, 0, {1302, -113}, {179, 155, 0, 255} }},
	{{ {-48, -192, 35}, 0, {740, -113}, {194, 154, 43, 255} }},
	{{ {-54, -173, 51}, 0, {355, 318}, {167, 197, 69, 255} }},
	{{ {-35, -192, 46}, 0, {329, -113}, {220, 149, 59, 255} }},
	{{ {-28, -173, 74}, 0, {-357, 318}, {212, 187, 97, 255} }},
	{{ {-40, -132, 82}, 0, {-618, 1248}, {195, 254, 112, 255} }},
	{{ {-70, -132, 56}, 0, {205, 1248}, {150, 253, 70, 255} }},
	{{ {-35, -93, 74}, 0, {-357, 2123}, {206, 69, 94, 255} }},
	{{ {-61, -93, 48}, 0, {440, 2137}, {166, 72, 54, 255} }},
	{{ {-81, -132, 20}, 0, {1328, 1248}, {129, 253, 0, 255} }},
	{{ {-61, -93, 48}, 0, {440, 2137}, {166, 72, 54, 255} }},
	{{ {-70, -93, 20}, 0, {1328, 2123}, {151, 72, 0, 255} }},
	{{ {-81, -132, 20}, 0, {1328, 1248}, {129, 253, 0, 255} }},
	{{ {-61, -93, -9}, 0, {440, 2137}, {166, 72, 202, 255} }},
	{{ {-70, -132, -16}, 0, {205, 1248}, {150, 253, 186, 255} }},
	{{ {-70, -173, 20}, 0, {1328, 318}, {142, 199, 0, 255} }},
	{{ {-54, -173, -11}, 0, {355, 318}, {167, 196, 187, 255} }},
	{{ {-70, -132, 56}, 0, {205, 1248}, {150, 253, 70, 255} }},
	{{ {-54, -173, 51}, 0, {355, 318}, {167, 197, 69, 255} }},
	{{ {-28, -173, 74}, 0, {-357, 318}, {212, 187, 97, 255} }},
	{{ {-35, -192, 46}, 0, {355, -113}, {220, 149, 59, 255} }},
	{{ {0, -192, 50}, 0, {205, -113}, {0, 144, 60, 255} }},
	{{ {0, -192, -10}, 0, {205, -113}, {0, 144, 196, 255} }},
	{{ {-35, -192, -6}, 0, {355, -113}, {220, 149, 197, 255} }},
	{{ {-28, -173, -34}, 0, {-357, 318}, {212, 186, 159, 255} }},
	{{ {-134, -138, 37}, 0, {2996, 2383}, {155, 61, 209, 255} }},
	{{ {-132, -117, 61}, 0, {2996, 2383}, {177, 5, 100, 255} }},
	{{ {-132, -117, 45}, 0, {2996, 2383}, {154, 4, 180, 255} }},
	{{ {-134, -151, 49}, 0, {2996, 2383}, {172, 194, 73, 255} }},
	{{ {-137, -162, 18}, 0, {2996, 2383}, {167, 165, 0, 255} }},
	{{ {-136, -145, 18}, 0, {2996, 2383}, {157, 80, 0, 255} }},
	{{ {-134, -138, -1}, 0, {2996, 2383}, {155, 62, 47, 255} }},
	{{ {-134, -151, -12}, 0, {2996, 2383}, {172, 194, 184, 255} }},
	{{ {-132, -117, -25}, 0, {2996, 2383}, {177, 4, 156, 255} }},
	{{ {-132, -118, -8}, 0, {2996, 2383}, {154, 5, 76, 255} }},
	{{ {-132, -97, -1}, 0, {2996, 2383}, {149, 203, 44, 255} }},
	{{ {-131, -84, -13}, 0, {2996, 2383}, {184, 79, 188, 255} }},
	{{ {-132, -77, 18}, 0, {2996, 2383}, {178, 100, 0, 255} }},
	{{ {-133, -93, 18}, 0, {2996, 2383}, {156, 177, 0, 255} }},
	{{ {-132, -97, 37}, 0, {2996, 2383}, {149, 203, 213, 255} }},
	{{ {-131, -84, 49}, 0, {2996, 2383}, {184, 80, 68, 255} }},
	{{ {-132, -117, 61}, 0, {2996, 2383}, {177, 5, 100, 255} }},
	{{ {-41, -93, 49}, 0, {2996, 2383}, {45, 89, 79, 255} }},
	{{ {-131, -84, 49}, 0, {2996, 2383}, {184, 80, 68, 255} }},
	{{ {-44, -126, 61}, 0, {2996, 2383}, {49, 237, 116, 255} }},
	{{ {-72, -157, 49}, 0, {2996, 2383}, {13, 157, 79, 255} }},
	{{ {-134, -151, 49}, 0, {2996, 2383}, {172, 194, 73, 255} }},
	{{ {-137, -162, 18}, 0, {2996, 2383}, {167, 165, 0, 255} }},
	{{ {-41, -160, 18}, 0, {2996, 2383}, {54, 141, 0, 255} }},
	{{ {-72, -157, -12}, 0, {2996, 2383}, {13, 157, 177, 255} }},
	{{ {-134, -151, -12}, 0, {2996, 2383}, {172, 194, 184, 255} }},
	{{ {-132, -117, -25}, 0, {2996, 2383}, {177, 4, 156, 255} }},
	{{ {-44, -127, -25}, 0, {2996, 2383}, {49, 236, 140, 255} }},
	{{ {-41, -93, -13}, 0, {2996, 2383}, {45, 88, 177, 255} }},
	{{ {-131, -84, -13}, 0, {2996, 2383}, {184, 79, 188, 255} }},
	{{ {-132, -77, 18}, 0, {2996, 2383}, {178, 100, 0, 255} }},
	{{ {-10, -97, 18}, 0, {2996, 2383}, {99, 80, 0, 255} }},
	{{ {-44, -126, 61}, 0, {2996, 2383}, {49, 237, 116, 255} }},
	{{ {0, -131, 18}, 0, {2996, 2383}, {122, 220, 0, 255} }},
	{{ {-10, -97, 18}, 0, {2996, 2383}, {99, 80, 0, 255} }},
	{{ {-41, -160, 18}, 0, {2996, 2383}, {54, 141, 0, 255} }},
	{{ {-72, -157, 49}, 0, {2996, 2383}, {13, 157, 79, 255} }},
	{{ {-44, -127, -25}, 0, {2996, 2383}, {49, 236, 140, 255} }},
	{{ {-72, -157, -12}, 0, {2996, 2383}, {13, 157, 177, 255} }},
	{{ {-41, -93, -13}, 0, {2996, 2383}, {45, 88, 177, 255} }},
};

Gfx fire_flower_000_displaylist_mesh_layer_1_tri_1[] = {
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(9, 7, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(10, 14, 13, 0),
	gsSP1Triangle(11, 12, 15, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(3, 6, 7, 0),
	gsSP1Triangle(3, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(12, 14, 11, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSP1Triangle(11, 14, 2, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(0, 2, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 11, 8, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(6, 3, 4, 0),
	gsSP1Triangle(6, 8, 3, 0),
	gsSP1Triangle(9, 8, 6, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(4, 1, 5, 0),
	gsSP1Triangle(6, 5, 1, 0),
	gsSP1Triangle(7, 6, 1, 0),
	gsSP1Triangle(8, 7, 1, 0),
	gsSP1Triangle(9, 8, 1, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 11, 8, 0),
	gsSP1Triangle(12, 8, 11, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 96, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 0, 3, 0),
	gsSP1Triangle(5, 6, 0, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(9, 7, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 13, 9, 0),
	gsSP1Triangle(11, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 112, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(11, 12, 8, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 128, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(7, 2, 5, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 143, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 11, 8, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSP1Triangle(14, 1, 15, 0),
	gsSP1Triangle(14, 2, 1, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 159, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(8, 6, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSP1Triangle(14, 1, 15, 0),
	gsSP1Triangle(14, 2, 1, 0),
	gsSP1Triangle(3, 15, 1, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_1 + 175, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(3, 5, 1, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(2, 1, 5, 0),
	gsSP1Triangle(2, 5, 7, 0),
	gsSPEndDisplayList(),
};

Vtx fire_flower_000_displaylist_mesh_layer_1_vtx_2[25] = {
	{{ {-132, -117, 45}, 0, {2996, 2383}, {154, 4, 180, 255} }},
	{{ {-132, -97, 37}, 0, {2996, 2383}, {149, 203, 213, 255} }},
	{{ {-93, -98, 37}, 0, {2996, 2383}, {175, 184, 189, 255} }},
	{{ {-132, -118, -8}, 0, {2996, 2383}, {154, 5, 76, 255} }},
	{{ {-93, -98, -1}, 0, {2996, 2383}, {175, 185, 68, 255} }},
	{{ {-132, -97, -1}, 0, {2996, 2383}, {149, 203, 44, 255} }},
	{{ {-94, -93, 18}, 0, {2996, 2383}, {171, 161, 0, 255} }},
	{{ {-93, -118, -8}, 0, {2996, 2383}, {174, 3, 97, 255} }},
	{{ {-97, -146, 18}, 0, {2996, 2383}, {181, 103, 0, 255} }},
	{{ {-95, -139, -1}, 0, {2996, 2383}, {178, 71, 71, 255} }},
	{{ {-93, -98, -1}, 0, {2996, 2383}, {175, 184, 67, 255} }},
	{{ {-134, -138, -1}, 0, {2996, 2383}, {155, 62, 47, 255} }},
	{{ {-136, -145, 18}, 0, {2996, 2383}, {157, 80, 0, 255} }},
	{{ {-134, -138, 37}, 0, {2996, 2383}, {155, 61, 209, 255} }},
	{{ {-95, -139, 37}, 0, {2996, 2383}, {178, 71, 185, 255} }},
	{{ {-93, -118, 45}, 0, {2996, 2383}, {174, 3, 159, 255} }},
	{{ {-132, -117, 45}, 0, {2996, 2383}, {154, 4, 180, 255} }},
	{{ {-93, -98, 37}, 0, {2996, 2383}, {175, 185, 189, 255} }},
	{{ {-93, -118, 45}, 0, {2996, 2383}, {174, 3, 159, 255} }},
	{{ {-94, -93, 18}, 0, {2996, 2383}, {171, 161, 0, 255} }},
	{{ {-132, -97, 37}, 0, {2996, 2383}, {149, 203, 213, 255} }},
	{{ {-133, -93, 18}, 0, {2996, 2383}, {156, 177, 0, 255} }},
	{{ {-132, -97, -1}, 0, {2996, 2383}, {149, 203, 44, 255} }},
	{{ {-97, -146, 18}, 0, {2996, 2383}, {181, 103, 0, 255} }},
	{{ {-95, -139, 37}, 0, {2996, 2383}, {178, 71, 185, 255} }},
};

Gfx fire_flower_000_displaylist_mesh_layer_1_tri_2[] = {
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(6, 4, 7, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(3, 9, 7, 0),
	gsSP1Triangle(3, 7, 10, 0),
	gsSP1Triangle(3, 11, 9, 0),
	gsSP1Triangle(11, 8, 9, 0),
	gsSP1Triangle(11, 12, 8, 0),
	gsSP1Triangle(13, 8, 12, 0),
	gsSP1Triangle(13, 14, 8, 0),
	gsSP1Triangle(0, 14, 13, 0),
	gsSP1Triangle(0, 15, 14, 0),
	gsSPVertex(fire_flower_000_displaylist_mesh_layer_1_vtx_2 + 16, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(4, 3, 1, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(2, 3, 7, 0),
	gsSP1Triangle(7, 8, 2, 0),
	gsSPEndDisplayList(),
};


Gfx mat_fire_flower_f3dlite_material_005[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(fire_flower_f3dlite_material_005_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, fire_flower_piranha_plant_leaf_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_fire_flower_f3dlite_material_005[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_fire_flower_f3dlite_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(fire_flower_f3dlite_material_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, fire_flower_star_eye_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_fire_flower_f3dlite_material_006[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(fire_flower_f3dlite_material_006_lights),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, fire_flower_star_eye_rgba16_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_fire_flower_f3dlite_material_007[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(fire_flower_f3dlite_material_007_lights),
	gsSPEndDisplayList(),
};

Gfx fire_flower_000_displaylist_mesh_layer_4[] = {
	gsSPDisplayList(mat_fire_flower_f3dlite_material_005),
	gsSPDisplayList(fire_flower_000_displaylist_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_fire_flower_f3dlite_material_005),
	gsSPEndDisplayList(),
};

Gfx fire_flower_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_fire_flower_f3dlite_material),
	gsSPDisplayList(fire_flower_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_fire_flower_f3dlite_material_006),
	gsSPDisplayList(fire_flower_000_displaylist_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_fire_flower_f3dlite_material_007),
	gsSPDisplayList(fire_flower_000_displaylist_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx fire_flower_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

