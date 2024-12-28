#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypeNotCompatibleError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptItemEnchantmentTypeNotCompatibleError& operator=(ScriptItemEnchantmentTypeNotCompatibleError const&);
    ScriptItemEnchantmentTypeNotCompatibleError(ScriptItemEnchantmentTypeNotCompatibleError const&);
    ScriptItemEnchantmentTypeNotCompatibleError();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
