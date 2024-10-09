#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityRaycastOptions {
public:
    // prevent constructor by default
    ScriptEntityRaycastOptions& operator=(ScriptEntityRaycastOptions const&);
    ScriptEntityRaycastOptions(ScriptEntityRaycastOptions const&);
    ScriptEntityRaycastOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptEntityRaycastOptions&
    operator=(struct ScriptModuleMinecraft::ScriptEntityRaycastOptions&&);

    MCAPI ~ScriptEntityRaycastOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions>
    bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
