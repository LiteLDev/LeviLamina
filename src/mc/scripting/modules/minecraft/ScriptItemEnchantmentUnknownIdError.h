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
    MCAPI ScriptItemEnchantmentUnknownIdError();

    MCAPI ~ScriptItemEnchantmentUnknownIdError();

    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
