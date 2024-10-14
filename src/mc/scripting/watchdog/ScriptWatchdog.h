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
        class Scripting::IWatchdog&        watchdog,
        class ServerLevel&                 level,
        class ScriptPluginManager*         pluginManager,
        class Scripting::WeakLifetimeScope defaultScope
    );

    MCAPI void disableTimingWarnings(struct Scripting::ContextId contextId, bool disabled);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
