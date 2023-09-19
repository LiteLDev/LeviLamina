#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptingInitializeEvent {
public:
    // prevent constructor by default
    ScriptingInitializeEvent& operator=(ScriptingInitializeEvent const&);
    ScriptingInitializeEvent(ScriptingInitializeEvent const&);
    ScriptingInitializeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptingInitializeEvent@@QEAA@XZ
    MCAPI ~ScriptingInitializeEvent();

    // NOLINTEND
};
