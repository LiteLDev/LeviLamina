#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptDebugger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISCRIPTDEBUGGER
public:
    IScriptDebugger& operator=(IScriptDebugger const&) = delete;
    IScriptDebugger(IScriptDebugger const&)            = delete;
    IScriptDebugger()                                  = delete;
#endif

public:
};
