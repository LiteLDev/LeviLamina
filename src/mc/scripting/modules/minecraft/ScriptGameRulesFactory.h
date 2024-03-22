#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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
    // symbol:
    // ?getHandle@ScriptGameRulesFactory@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptGameRules@ScriptModuleMinecraft@@@Scripting@@AEAVWeakLifetimeScope@4@AEAVLevel@@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptGameRules>
    getHandle(class Scripting::WeakLifetimeScope&, class Level&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
