#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptDebuggerEvent {
public:
    // prevent constructor by default
    ScriptDebuggerEvent(ScriptDebuggerEvent const&);
    ScriptDebuggerEvent();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptDebuggerEvent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ScriptDebuggerEvent& operator=(struct ScriptDebuggerEvent&&);

    // symbol: ??4ScriptDebuggerEvent@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ScriptDebuggerEvent& operator=(struct ScriptDebuggerEvent const&);

    // symbol: ??1ScriptDebuggerEvent@@QEAA@XZ
    MCAPI ~ScriptDebuggerEvent();

    // NOLINTEND
};
