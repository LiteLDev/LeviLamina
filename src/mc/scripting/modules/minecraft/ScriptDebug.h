#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDebug {
public:
    // prevent constructor by default
    ScriptDebug& operator=(ScriptDebug const&);
    ScriptDebug(ScriptDebug const&);
    ScriptDebug();

public:
    // NOLINTBEGIN
    // symbol:
    // ?disableWatchdogTimingWarnings@ScriptDebug@ScriptModuleMinecraft@@SA?AV?$Result@X$$V@Scripting@@AEAVWeakLifetimeScope@4@AEAVDependencyLocator@4@_N@Z
    MCAPI static class Scripting::Result<void>
    disableWatchdogTimingWarnings(class Scripting::WeakLifetimeScope&, class Scripting::DependencyLocator&, bool);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
