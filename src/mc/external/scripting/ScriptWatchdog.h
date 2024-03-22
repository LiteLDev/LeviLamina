#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IWatchdog; }
namespace Scripting { class WeakLifetimeScope; }
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
    // ??0ScriptWatchdog@@QEAA@AEAVIWatchdog@Scripting@@AEAVServerLevel@@PEAVScriptPluginManager@@VWeakLifetimeScope@2@PEAVServerInstance@@@Z
    MCAPI
    ScriptWatchdog(class Scripting::IWatchdog&, class ServerLevel&, class ScriptPluginManager*, class Scripting::WeakLifetimeScope, class ServerInstance*);

    // symbol: ?disableWatchdog@ScriptWatchdog@@QEAAX_N@Z
    MCAPI void disableWatchdog(bool);

    // symbol: ?sendTelemetry@ScriptWatchdog@@QEAAXXZ
    MCAPI void sendTelemetry();

    // NOLINTEND
};
