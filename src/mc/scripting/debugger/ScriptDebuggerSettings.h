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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
