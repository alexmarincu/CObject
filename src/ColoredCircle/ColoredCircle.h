#ifndef COLOREDCIRCLE_H
#define COLOREDCIRCLE_H
#include "../Circle/Circle.h"
#include "Color.h"

#define class ColoredCircle
#define superClass Circle

Class((Color color),
      (Color color));

Setters(
    (uint32, radius),
    (Color, color));

Getters(
    (uint32, radius),
    (Color, color));

#undef class
#undef superClass
#endif // COLOREDCIRCLE_H
