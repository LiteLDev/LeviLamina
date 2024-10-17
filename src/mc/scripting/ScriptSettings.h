#pragma once

#include "ll/api/base/StdInt.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/external/scripting/runtime/watchdog/WatchdogSettings.h"
#include "mc/scripting/ScriptPackConfigurationManager.h"

struct ScriptSettings {
public:
    char padding[592];

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
