#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorTypes {
public:
    // prevent constructor by default
    ScriptActorTypes& operator=(ScriptActorTypes const&);
    ScriptActorTypes(ScriptActorTypes const&);
    ScriptActorTypes();

public:
    // NOLINTBEGIN
    // symbol:
    // ?get@ScriptActorTypes@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptActorType@ScriptModuleMinecraft@@@Scripting@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorType>>
          get(std::string const&);

    // symbol:
    // ?bind@ScriptActorTypes@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VActorDefinition@@U?$default_delete@VActorDefinition@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VActorDefinition@@U?$default_delete@VActorDefinition@@@std@@@2@@std@@@2@@std@@@Z
    MCAPI static void
    bind(class Scripting::ModuleBindingBuilder&, std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?registerTypes@ScriptActorTypes@ScriptModuleMinecraft@@AEAAXAEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI void registerTypes(class Scripting::WeakLifetimeScope&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
