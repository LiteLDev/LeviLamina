#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class DependencyLocator; }
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
    // ?disableWatchdog@ScriptDebug@ScriptModuleMinecraft@@SA?AV?$Result@X$$V@Scripting@@AEAVDependencyLocator@4@_N@Z
    MCAPI static class Scripting::Result<void> disableWatchdog(class Scripting::DependencyLocator&, bool);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
