#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class EnchantmentInstance;
class ItemEnchants;
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentLevelOutOfBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentTypeNotCompatibleError; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentUnknownIdError; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentInstance {
public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptItemEnchantmentInstance();

    // symbol: ??0ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptItemEnchantmentInstance(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance&&);

    // symbol: ??0ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemEnchantmentInstance(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    // symbol:
    // ??0ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEAA@AEAVWeakLifetimeScope@Scripting@@AEBVEnchantmentInstance@@@Z
    MCAPI ScriptItemEnchantmentInstance(class Scripting::WeakLifetimeScope&, class EnchantmentInstance const&);

    // symbol: ??4ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance&
    operator=(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance&&);

    // symbol: ??4ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance&
    operator=(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    // symbol:
    // ?tryResolveInstance@ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEBA?AV?$variant@VEnchantmentInstance@@UScriptItemEnchantmentLevelOutOfBoundsError@ScriptModuleMinecraft@@UScriptItemEnchantmentUnknownIdError@3@UScriptItemEnchantmentTypeNotCompatibleError@3@@std@@AEAVItemEnchants@@@Z
    MCAPI std::variant<
        class EnchantmentInstance,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError,
        struct ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError>
    tryResolveInstance(class ItemEnchants&) const;

    // symbol: ??1ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptItemEnchantmentInstance();

    // symbol:
    // ?bind@ScriptItemEnchantmentInstance@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptItemEnchantmentInstance@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
