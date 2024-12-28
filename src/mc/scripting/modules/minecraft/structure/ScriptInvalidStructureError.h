#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptInvalidStructureError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptInvalidStructureError& operator=(ScriptInvalidStructureError const&);
    ScriptInvalidStructureError(ScriptInvalidStructureError const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptInvalidStructureError();

    MCAPI ~ScriptInvalidStructureError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptInvalidStructureError> bind();
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
