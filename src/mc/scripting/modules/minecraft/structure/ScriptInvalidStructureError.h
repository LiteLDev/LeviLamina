#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptInvalidStructureError {
public:
    // prevent constructor by default
    ScriptInvalidStructureError& operator=(ScriptInvalidStructureError const&);
    ScriptInvalidStructureError(ScriptInvalidStructureError const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptInvalidStructureError();

    MCAPI ~ScriptInvalidStructureError();

    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptInvalidStructureError> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
