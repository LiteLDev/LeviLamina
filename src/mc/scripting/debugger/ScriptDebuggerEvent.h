#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptDebuggerEvent {
public:
    // prevent constructor by default
    ScriptDebuggerEvent(ScriptDebuggerEvent const&);
    ScriptDebuggerEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptDebuggerEvent& operator=(struct ScriptDebuggerEvent&&);

    MCAPI struct ScriptDebuggerEvent& operator=(struct ScriptDebuggerEvent const&);

    MCAPI ~ScriptDebuggerEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
