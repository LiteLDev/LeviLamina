#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDebugUtilities { struct ScriptRuntimeStats; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDebugUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleDebugUtilities::ScriptRuntimeStats
    collectRuntimeStats(::Scripting::DependencyLocator& locator);

    MCAPI static ::Scripting::Result<void> disableWatchdogTimingWarnings(
        ::Scripting::WeakLifetimeScope& scope,
        ::Scripting::DependencyLocator& locator,
        bool                            disable
    );
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
