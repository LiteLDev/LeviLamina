#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTeleportOptions {
public:
    // prevent constructor by default
    ScriptTeleportOptions(ScriptTeleportOptions const&);
    ScriptTeleportOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptTeleportOptions&
    operator=(struct ScriptModuleMinecraft::ScriptTeleportOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptTeleportOptions&
    operator=(struct ScriptModuleMinecraft::ScriptTeleportOptions const&);

    MCAPI ~ScriptTeleportOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptTeleportOptions> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
