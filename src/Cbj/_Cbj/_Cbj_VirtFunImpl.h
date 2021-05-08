#ifndef _CBJ_VIRTFUNIMPL_H
#define _CBJ_VIRTFUNIMPL_H
#include "_Cbj_Utils.h"
#include "_Cbj_VirtFunCall.h"

#define _Cbj_VirtFunImpl(typeName, returnType, funName, args, params) \
    Fun(returnType, funName, args) { _Cbj_VirtFunCall(typeName, funName, _Cbj_Utils_stripParentheses(params)); }

#endif // _CBJ_VIRTFUNIMPL_H
