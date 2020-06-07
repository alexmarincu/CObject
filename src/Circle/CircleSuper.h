#ifndef CIRCLESUPER_H
#define CIRCLESUPER_H

#include "../Primitives.h"
#include "../Shape/ShapeSuper.h"
#include "Circle.h"

CLASS_EXTENSION_MEMBERS(Circle, Shape)
_UInt32 radius;
END;

CLASS_EXTENSION_VIRTUAL_METHODS(Circle, Shape)
END;
#endif // CIRCLESUPER_H
