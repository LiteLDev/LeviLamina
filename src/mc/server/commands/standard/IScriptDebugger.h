#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptDebugger {

public:
    // prevent constructor by default
    IScriptDebugger& operator=(IScriptDebugger const&) = delete;
    IScriptDebugger(IScriptDebugger const&)            = delete;
    IScriptDebugger()                                  = delete;
};
