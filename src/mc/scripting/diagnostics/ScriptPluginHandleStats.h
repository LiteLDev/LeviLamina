#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptPluginHandleStats {
public:
    // prevent constructor by default
    ScriptPluginHandleStats(ScriptPluginHandleStats const&);
    ScriptPluginHandleStats();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptPluginHandleStats& operator=(struct ScriptPluginHandleStats&&);

    MCAPI struct ScriptPluginHandleStats& operator=(struct ScriptPluginHandleStats const&);

    MCAPI ~ScriptPluginHandleStats();

    // NOLINTEND
};
