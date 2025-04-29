#ifndef SSU_H
#define SSU_H

#include "core/object/ref_counted.h"

class Ssu : public RefCounted {
	GDCLASS(Ssu, RefCounted)

protected:
	static void _bind_methods();

	int Test = 0 ;

public:
	Ssu();
};
#endif // SSU_H
