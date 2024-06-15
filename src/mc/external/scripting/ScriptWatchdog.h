#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IWatchdog; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptWatchdog {
public:
    // prevent constructor by default
    ScriptWatchdog& operator=(ScriptWatchdog const&);
    ScriptWatchdog(ScriptWatchdog const&);
    ScriptWatchdog();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptWatchdog@@QEAA@AEAVIWatchdog@Scripting@@AEAVServerLevel@@PEAVScriptPluginManager@@VWeakLifetimeScope@2@@Z
    MCAPI ScriptWatchdog(
        class Scripting::IWatchdog&,
        class ServerLevel&,
        class ScriptPluginManager*,
        class Scripting::WeakLifetimeScope
    );

    // symbol: ?disableTimingWarnings@ScriptWatchdog@@QEAAXUContextId@Scripting@@_N@Z
    MCAPI void disableTimingWarnings(struct Scripting::ContextId, bool);

    // NOLINTEND
};
