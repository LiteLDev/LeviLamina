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
    ScriptBlockTypes();

public:
    // NOLINTBEGIN
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

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateAllBlockHandles@ScriptBlockTypes@ScriptModuleMinecraft@@AEAAXAEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI void _generateAllBlockHandles(class Scripting::WeakLifetimeScope& scope);

    // symbol:
    // ?_registerBlockTypeAlias@ScriptBlockTypes@ScriptModuleMinecraft@@AEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI void
        _registerBlockTypeAlias(std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
