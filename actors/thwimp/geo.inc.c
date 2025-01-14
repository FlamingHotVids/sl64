#include "src/game/envfx_snow.h"

const GeoLayout thwimp_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 300),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, thwimp_000_displaylist_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, thwimp_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
