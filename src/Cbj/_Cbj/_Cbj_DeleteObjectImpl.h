#ifndef _CBJ_DELETEOBJECTIMPL_H
#define _CBJ_DELETEOBJECTIMPL_H
#include "_Cbj_DeleteObjectFunPrototype.h"

#define _Cbj_DeleteObjectImpl(typeName)     \
    _Cbj_DeleteObjectFunPrototype(typeName) \
    {                                       \
        typeName##_terminate(me);           \
        free(me);                           \
    }

#endif // _CBJ_DELETEOBJECTIMPL_H
