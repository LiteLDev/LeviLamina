#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptBlockCustomComponentData {
public:
    // prevent constructor by default
    ScriptBlockCustomComponentData& operator=(ScriptBlockCustomComponentData const&);
    ScriptBlockCustomComponentData(ScriptBlockCustomComponentData const&);
    ScriptBlockCustomComponentData();

public:
    // NOLINTBEGIN
    MCAPI ~ScriptBlockCustomComponentData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
