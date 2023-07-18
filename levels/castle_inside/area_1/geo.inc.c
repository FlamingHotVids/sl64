#include "src/game/envfx_snow.h"

const GeoLayout castle_inside_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(3, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, castle_inside_dl_2_geo),
			GEO_BRANCH(1, castle_inside_dl_3_geo),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -16, -395, -2103, 0, -180, 0),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -16, 395, -2103, 90, 0, -180, castle_inside_dl__inside_castle_seg7_dl_07028FD0_Obj_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, castle_inside_dl__inside_castle_seg7_dl_07028FD0_Obj_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_inside_dl_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -16, -395, -2103, 0, -180, 0),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -16, 395, -2103, 90, 0, -180, castle_inside_dl__inside_castle_seg7_dl_07028FD0_Obj_002_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, castle_inside_dl__inside_castle_seg7_dl_07028FD0_Obj_002_mesh_layer_4),
      GEO_ASM(  0, geo_painting_update),
      GEO_ASM(PAINTING_ID(0, 1), geo_painting_draw),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_inside_dl_3_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -16, -395, -2103, 0, -180, 0),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -16, 395, -2103, 90, 0, -180, castle_inside_dl__inside_castle_seg7_dl_07028FD0_Obj_003_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, castle_inside_dl__inside_castle_seg7_dl_07028FD0_Obj_003_mesh_layer_4),
      GEO_ASM(  0, geo_painting_update),
      GEO_ASM(PAINTING_ID(2, 1), geo_painting_draw),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_inside_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(13, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_inside_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_inside_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, castle_inside_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};