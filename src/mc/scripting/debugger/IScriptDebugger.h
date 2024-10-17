#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptDebugger {
public:
    // prevent constructor by default
    IScriptDebugger& operator=(IScriptDebugger const&);
    IScriptDebugger(IScriptDebugger const&);
    IScriptDebugger();
};
