#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentUnknownIdError {
public:
    // prevent constructor by default
    ScriptItemEnchantmentUnknownIdError& operator=(ScriptItemEnchantmentUnknownIdError const&);
    ScriptItemEnchantmentUnknownIdError(ScriptItemEnchantmentUnknownIdError const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemEnchantmentUnknownIdError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptItemEnchantmentUnknownIdError();

    // symbol: ??1ScriptItemEnchantmentUnknownIdError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptItemEnchantmentUnknownIdError();

    // symbol:
    // ?bind@ScriptItemEnchantmentUnknownIdError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptItemEnchantmentUnknownIdError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
