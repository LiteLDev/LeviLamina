#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentLevelOutOfBoundsError {
public:
    // prevent constructor by default
    ScriptItemEnchantmentLevelOutOfBoundsError& operator=(ScriptItemEnchantmentLevelOutOfBoundsError const&);
    ScriptItemEnchantmentLevelOutOfBoundsError(ScriptItemEnchantmentLevelOutOfBoundsError const&);
    ScriptItemEnchantmentLevelOutOfBoundsError();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptItemEnchantmentLevelOutOfBoundsError@ScriptModuleMinecraft@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HH@Z
    MCAPI ScriptItemEnchantmentLevelOutOfBoundsError(std::string const&, std::string const&, int, int);

    // symbol:
    // ?bind@ScriptItemEnchantmentLevelOutOfBoundsError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptItemEnchantmentLevelOutOfBoundsError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<
        struct ScriptModuleMinecraft::ScriptItemEnchantmentLevelOutOfBoundsError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
