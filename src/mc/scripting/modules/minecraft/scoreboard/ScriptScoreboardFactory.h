#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

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
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboard>
    getHandle(class Scripting::WeakLifetimeScope& scope, class Level& level);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
