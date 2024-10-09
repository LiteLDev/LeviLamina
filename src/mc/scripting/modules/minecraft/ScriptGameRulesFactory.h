#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { class ScriptGameRules; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptGameRulesFactory {
public:
    // prevent constructor by default
    ScriptGameRulesFactory& operator=(ScriptGameRulesFactory const&);
    ScriptGameRulesFactory(ScriptGameRulesFactory const&);
    ScriptGameRulesFactory();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptGameRules>
    getHandle(class Scripting::WeakLifetimeScope& scope, class Level& level);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
