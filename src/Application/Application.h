#ifndef APPLICATION_H
#define APPLICATION_H
#include "../Cbject/Cbject.h"
#include "../Circle/Circle.h"
#include "../ColoredCircle/ColoredCircle.h"
#include "../Rectangle/Rectangle.h"
#include "../Shape/Shape.h"

#define class Application
#define superClass Cbject

    #define ApplicationMembe \
    Circle * circle, \
    Rectangle * rectangle, \
    Rectangle * heapRectangle, \
    ColoredCircle * coloredCircle
InitParams();
DeclareSingleton(ApplicationMembe);





Function(void, start, ());

#undef superClass
#undef class
#endif // APPLICATION_H
