#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockTypes {
public:
    // prevent constructor by default
    ScriptBlockTypes& operator=(ScriptBlockTypes const&);
    ScriptBlockTypes(ScriptBlockTypes const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockTypes@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptBlockTypes();

    // symbol:
    // ?get@ScriptBlockTypes@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>>
          get(class Scripting::WeakLifetimeScope& scope, std::string const& blockName);

    // symbol:
    // ?getAllBlockTypes@ScriptBlockTypes@ScriptModuleMinecraft@@QEAA?AV?$vector@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@AEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>>
          getAllBlockTypes(class Scripting::WeakLifetimeScope& scope);

    // symbol:
    // ?get_V010@ScriptBlockTypes@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>>
          get_V010(class Scripting::WeakLifetimeScope&, std::string const&);

    // symbol:
    // ?bind@ScriptBlockTypes@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockTypes@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockTypes> bind();

    // symbol:
    // ?bind_V010@ScriptBlockTypes@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockTypes@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockTypes> bind_V010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
