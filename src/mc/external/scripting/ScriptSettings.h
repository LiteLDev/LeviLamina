#pragma once

#include "ll/api/base/StdInt.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/external/scripting/WatchdogSettings.h"
#include "mc/scripting/ScriptPackConfigurationManager.h"

struct ScriptSettings {
public:
    char padding[592];

public:
    // prevent constructor by default
    ScriptSettings& operator=(ScriptSettings const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptSettings@@QEAA@XZ
    MCAPI ScriptSettings();

    // symbol: ??0ScriptSettings@@QEAA@AEBU0@@Z
    MCAPI ScriptSettings(struct ScriptSettings const&);

    // symbol: ??1ScriptSettings@@QEAA@XZ
    MCAPI ~ScriptSettings();

    // NOLINTEND
};
