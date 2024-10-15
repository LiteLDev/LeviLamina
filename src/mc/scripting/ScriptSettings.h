#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptSettings {
public:
    // prevent constructor by default
    ScriptSettings& operator=(ScriptSettings const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptSettings();

    MCAPI ScriptSettings(struct ScriptSettings const&);

    MCAPI ~ScriptSettings();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(struct ScriptSettings const&);

    MCAPI void dtor$();

    // NOLINTEND
};
