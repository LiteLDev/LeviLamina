#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
