#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ScriptEngine; }
// clang-format on

class ScriptTickListener {
public:
    // prevent constructor by default
    ScriptTickListener& operator=(ScriptTickListener const&);
    ScriptTickListener(ScriptTickListener const&);
    ScriptTickListener();

public:
    // NOLINTBEGIN
    // symbol: ?onLevelRemovedPlayer@ScriptTickListener@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onLevelRemovedPlayer(class Level&, class Player& player);

    // symbol: ?onLevelTickEnd@ScriptTickListener@@UEAAXXZ
    MCVAPI void onLevelTickEnd();

    // symbol: ?onRunAsyncJobs@ScriptTickListener@@UEAAXXZ
    MCVAPI void onRunAsyncJobs();

    // symbol:
    // ??0ScriptTickListener@@QEAA@AEAVScriptEngine@Scripting@@AEAVScriptAsyncJobCoordinator@@AEAVScriptFormPromiseTracker@@@Z
    MCAPI
    ScriptTickListener(class Scripting::ScriptEngine&, class ScriptAsyncJobCoordinator&, class ScriptFormPromiseTracker&);

    // NOLINTEND
};
