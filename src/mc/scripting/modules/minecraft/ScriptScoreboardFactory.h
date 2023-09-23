#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardFactory {
public:
    // prevent constructor by default
    ScriptScoreboardFactory& operator=(ScriptScoreboardFactory const&);
    ScriptScoreboardFactory(ScriptScoreboardFactory const&);
    ScriptScoreboardFactory();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getHandle@ScriptScoreboardFactory@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptScoreboard@ScriptModuleMinecraft@@@Scripting@@AEAVWeakLifetimeScope@4@AEAVLevel@@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboard>
    getHandle(class Scripting::WeakLifetimeScope&, class Level&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
