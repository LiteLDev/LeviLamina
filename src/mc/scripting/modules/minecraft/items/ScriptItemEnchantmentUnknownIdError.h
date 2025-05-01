#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/deps/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptItemEnchantmentUnknownIdError : public ::Scripting::Error {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemEnchantmentUnknownIdError();

    MCNAPI ~ScriptItemEnchantmentUnknownIdError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptItemEnchantmentUnknownIdError> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
