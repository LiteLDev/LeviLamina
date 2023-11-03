#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentInstance; }
namespace ScriptModuleMinecraft { struct ScriptItemEnchantmentType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemEnchantments {
public:
    // prevent constructor by default
    ScriptItemEnchantments& operator=(ScriptItemEnchantments const&);
    ScriptItemEnchantments();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemEnchantments@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptItemEnchantments(class ScriptModuleMinecraft::ScriptItemEnchantments&&);

    // symbol: ??0ScriptItemEnchantments@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptItemEnchantments(class ScriptModuleMinecraft::ScriptItemEnchantments const&);

    // symbol:
    // ?addEnchantment@ScriptItemEnchantments@ScriptModuleMinecraft@@QEAA_NAEBUScriptItemEnchantmentInstance@2@@Z
    MCAPI bool addEnchantment(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    // symbol:
    // ?canAddEnchantment@ScriptItemEnchantments@ScriptModuleMinecraft@@QEAA_NAEBUScriptItemEnchantmentInstance@2@@Z
    MCAPI bool canAddEnchantment(struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance const&);

    // symbol:
    // ?getAllEnchantments@ScriptItemEnchantments@ScriptModuleMinecraft@@QEBA?AV?$vector@V?$StrongTypedObjectHandle@UScriptItemEnchantmentInstance@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@UScriptItemEnchantmentInstance@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@XZ
    MCAPI std::vector<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>>
    getAllEnchantments() const;

    // symbol:
    // ?getEnchantment@ScriptItemEnchantments@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@UScriptItemEnchantmentInstance@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@V?$variant@UScriptItemEnchantmentType@ScriptModuleMinecraft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<std::optional<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptItemEnchantmentInstance>>>
        getEnchantment(std::variant<struct ScriptModuleMinecraft::ScriptItemEnchantmentType, std::string>);

    // symbol:
    // ?hasEnchantment@ScriptItemEnchantments@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@V?$variant@UScriptItemEnchantmentType@ScriptModuleMinecraft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<int>
        hasEnchantment(std::variant<struct ScriptModuleMinecraft::ScriptItemEnchantmentType, std::string>) const;

    // symbol: ??4ScriptItemEnchantments@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptItemEnchantments&
    operator=(class ScriptModuleMinecraft::ScriptItemEnchantments&&);

    // symbol:
    // ?removeEnchantment@ScriptItemEnchantments@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$variant@UScriptItemEnchantmentType@ScriptModuleMinecraft@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void>
        removeEnchantment(std::variant<struct ScriptModuleMinecraft::ScriptItemEnchantmentType, std::string>);

    // symbol:
    // ?bind@ScriptItemEnchantments@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptItemEnchantments@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptItemEnchantments> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
