#include "SsuEditorUtils.h"

#include "editor/editor_node.h"

void SsuEditorUtils::_bind_methods() {
	ClassDB::bind_static_method("SsuEditorUtils", D_METHOD("set_editor_inspector_object", "object"), &SsuEditorUtils::set_editor_inspector_object);
}

SsuEditorUtils::SsuEditorUtils() {
}

void SsuEditorUtils::set_editor_inspector_object(Object *p_object) {
	EditorNode::get_singleton()->push_item(p_object);
}
