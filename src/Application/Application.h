#ifndef APPLICATION_H
#define APPLICATION_H
#include "../Cbject/Cbject.h"
#include "../Circle/Circle.h"
#include "../ColoredCircle/ColoredCircle.h"
#include "../Rectangle/Rectangle.h"
#include "../Shape/Shape.h"

#define klass Application
#define superKlass Cbject

Singleton(
    InitParams(0),
    Members(_,
        Circle * circle,
        Rectangle * rectangle,
        Rectangle * heapRectangle,
        ColoredCircle * coloredCircle));

Function(void, start, (0));

#undef superKlass
#undef klass
#endif // APPLICATION_H
