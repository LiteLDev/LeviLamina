#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypes {
public:
    // prevent constructor by default
    ScriptItemEnchantmentTypes& operator=(ScriptItemEnchantmentTypes const&);
    ScriptItemEnchantmentTypes(ScriptItemEnchantmentTypes const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemEnchantmentTypes@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptItemEnchantmentTypes();

    // symbol:
    // ?get@ScriptItemEnchantmentTypes@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@UScriptItemEnchantmentType@ScriptModuleMinecraft@@@Scripting@@@std@@AEAVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI
    std::optional<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemEnchantmentType>>
    get(class Scripting::WeakLifetimeScope&, std::string const&);

    // symbol:
    // ?bind@ScriptItemEnchantmentTypes@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptItemEnchantmentTypes@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentTypes> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_generateAllEnchantmentTypeHandles@ScriptItemEnchantmentTypes@ScriptModuleMinecraft@@AEAAXAEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI void _generateAllEnchantmentTypeHandles(class Scripting::WeakLifetimeScope&);

    // symbol:
    // ?_generateRemainingEnchantmentTypeHandles@ScriptItemEnchantmentTypes@ScriptModuleMinecraft@@AEAAXAEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI void _generateRemainingEnchantmentTypeHandles(class Scripting::WeakLifetimeScope&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
