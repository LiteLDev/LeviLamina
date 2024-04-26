#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptDebuggerSettings {
public:
    // prevent constructor by default
    ScriptDebuggerSettings& operator=(ScriptDebuggerSettings const&);
    ScriptDebuggerSettings();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptDebuggerSettings@@QEAA@AEBU0@@Z
    MCAPI ScriptDebuggerSettings(struct ScriptDebuggerSettings const&);

    // symbol: ??1ScriptDebuggerSettings@@QEAA@XZ
    MCAPI ~ScriptDebuggerSettings();

    // NOLINTEND
};
