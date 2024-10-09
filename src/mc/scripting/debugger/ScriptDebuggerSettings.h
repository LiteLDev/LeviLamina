#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptDebuggerSettings {
public:
    // prevent constructor by default
    ScriptDebuggerSettings& operator=(ScriptDebuggerSettings const&);
    ScriptDebuggerSettings();

public:
    // NOLINTBEGIN
    MCAPI ScriptDebuggerSettings(struct ScriptDebuggerSettings const&);

    MCAPI ~ScriptDebuggerSettings();

    // NOLINTEND
};
