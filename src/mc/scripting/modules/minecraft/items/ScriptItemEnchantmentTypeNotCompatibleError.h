#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypeNotCompatibleError {
public:
    // prevent constructor by default
    ScriptItemEnchantmentTypeNotCompatibleError& operator=(ScriptItemEnchantmentTypeNotCompatibleError const&);
    ScriptItemEnchantmentTypeNotCompatibleError(ScriptItemEnchantmentTypeNotCompatibleError const&);
    ScriptItemEnchantmentTypeNotCompatibleError();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ErrorBindingBuilder<
        struct ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
