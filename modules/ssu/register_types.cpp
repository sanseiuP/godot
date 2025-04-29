#include "register_types.h"

#include "ssu.h"
#include "core/object/class_db.h"
#include "editor/SsuEditorUtils.h"

void initialize_ssu_module(ModuleInitializationLevel p_level) {
	if (p_level == MODULE_INITIALIZATION_LEVEL_SCENE) {
		ClassDB::register_class<Ssu>();
	}
#if TOOLS_ENABLED
	if (p_level == MODULE_INITIALIZATION_LEVEL_EDITOR) {
		ClassDB::register_class<SsuEditorUtils>();
	}
#endif
}

void uninitialize_ssu_module(ModuleInitializationLevel p_level) {
}
