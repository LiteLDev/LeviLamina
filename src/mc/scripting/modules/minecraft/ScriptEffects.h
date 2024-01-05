#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptEffectType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEffects {
public:
    // prevent constructor by default
    ScriptEffects& operator=(ScriptEffects const&);
    ScriptEffects(ScriptEffects const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptEffects@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptEffects();

    // symbol: ?_generateAllEffectsHandles@ScriptEffects@ScriptModuleMinecraft@@QEAAXAEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI void _generateAllEffectsHandles(class Scripting::WeakLifetimeScope&);

    // symbol:
    // ?get@ScriptEffects@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptEffectType@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>>
          get(class Scripting::WeakLifetimeScope& scope, std::string const& effectName);

    // symbol: ?bind@ScriptEffects@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // symbol: ?bindV010@ScriptEffects@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bindV010(class Scripting::ModuleBindingBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
