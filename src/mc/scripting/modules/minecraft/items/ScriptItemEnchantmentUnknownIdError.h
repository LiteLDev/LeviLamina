#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentUnknownIdError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptItemEnchantmentUnknownIdError& operator=(ScriptItemEnchantmentUnknownIdError const&);
    ScriptItemEnchantmentUnknownIdError(ScriptItemEnchantmentUnknownIdError const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemEnchantmentUnknownIdError();

    MCAPI ~ScriptItemEnchantmentUnknownIdError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
