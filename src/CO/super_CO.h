#ifndef SUPER_CO_H
#define SUPER_CO_H

#include "CO.h"
typedef struct COClass
{
    UInt8 (*objectSize)(CO const * const _this);
} COClass;

struct CO
{
    COClass const * _class;
};

UInt8 super_CO_objectSize(CO const * const _this);
#endif // SUPER_CO_H