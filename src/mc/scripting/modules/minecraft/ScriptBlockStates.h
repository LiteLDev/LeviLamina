#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockStateType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockStates {
public:
    // prevent constructor by default
    ScriptBlockStates& operator=(ScriptBlockStates const&);
    ScriptBlockStates(ScriptBlockStates const&);
    ScriptBlockStates();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptBlockStates@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockStates@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockStates> bind();

    // symbol:
    // ?get@ScriptBlockStates@ScriptModuleMinecraft@@SA?AV?$optional@V?$StrongTypedObjectHandle@VScriptBlockStateType@ScriptModuleMinecraft@@@Scripting@@@std@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI static std::optional<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockStateType>>
    get(class Scripting::WeakLifetimeScope const& scope, std::string const& name);

    // symbol:
    // ?getAll@ScriptBlockStates@ScriptModuleMinecraft@@SA?AV?$vector@V?$StrongTypedObjectHandle@VScriptBlockStateType@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptBlockStateType@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI static std::vector<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockStateType>>
    getAll(class Scripting::WeakLifetimeScope const& scope);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
