#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptDebuggerWatchdog {
public:
    // prevent constructor by default
    IScriptDebuggerWatchdog& operator=(IScriptDebuggerWatchdog const&);
    IScriptDebuggerWatchdog(IScriptDebuggerWatchdog const&);
    IScriptDebuggerWatchdog();
};
