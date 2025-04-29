#ifndef SSU_EDITOR_UTILS_H
#define SSU_EDITOR_UTILS_H

#include "core/object/class_db.h"
#include "core/object/object.h"

class SsuEditorUtils : public Object {
public:
	GDCLASS(SsuEditorUtils, Object)

protected:
	static void _bind_methods();

public:
	SsuEditorUtils();

	static void set_editor_inspector_object(Object *p_object);
};

#endif
