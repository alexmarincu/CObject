#ifndef CIRCLESUPER_H
#define CIRCLESUPER_H
#include "../Shape/ShapeSuper.h"
#include "Circle.h"

#undef Class
#define Class Circle
#undef SuperClass
#define SuperClass Shape

class_members(
    UInt32 radius);

#endif // CIRCLESUPER_H
