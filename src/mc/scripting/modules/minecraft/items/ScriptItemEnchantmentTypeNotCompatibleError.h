#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/deps/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentTypeNotCompatibleError : public ::Scripting::Error {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptItemEnchantmentTypeNotCompatibleError(::std::string const& typeName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptItemEnchantmentTypeNotCompatibleError>
    bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& typeName);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
