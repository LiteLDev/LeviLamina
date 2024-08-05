#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptPluginStats {
public:
    // prevent constructor by default
    ScriptPluginStats(ScriptPluginStats const&);
    ScriptPluginStats();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptPluginStats& operator=(struct ScriptPluginStats&&);

    MCAPI struct ScriptPluginStats& operator=(struct ScriptPluginStats const&);

    MCAPI ~ScriptPluginStats();

    // NOLINTEND
};
