#ifndef _CBJ_DEFAULTGETIMPL_H
#define _CBJ_DEFAULTGETIMPL_H

#define _Cbj_DefaultGetImpl(typeName, type, propName) \
    Get(type, propName) { return me->p.propName; }

#endif // _CBJ_DEFAULTGETIMPL_H
