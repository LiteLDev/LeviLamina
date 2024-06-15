#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypeNotCompatibleError {
public:
    // prevent constructor by default
    ScriptItemEnchantmentTypeNotCompatibleError& operator=(ScriptItemEnchantmentTypeNotCompatibleError const&);
    ScriptItemEnchantmentTypeNotCompatibleError(ScriptItemEnchantmentTypeNotCompatibleError const&);
    ScriptItemEnchantmentTypeNotCompatibleError();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptItemEnchantmentTypeNotCompatibleError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptItemEnchantmentTypeNotCompatibleError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<
        struct ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
