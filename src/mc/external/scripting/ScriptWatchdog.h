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
    MCAPI ScriptWatchdog(
        class Scripting::IWatchdog&,
        class ServerLevel&,
        class ScriptPluginManager*,
        class Scripting::WeakLifetimeScope
    );

    MCAPI void disableTimingWarnings(struct Scripting::ContextId, bool);

    // NOLINTEND
};
