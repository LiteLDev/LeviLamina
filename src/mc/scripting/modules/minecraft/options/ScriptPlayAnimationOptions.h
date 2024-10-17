#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayAnimationOptions {
public:
    // prevent constructor by default
    ScriptPlayAnimationOptions();

public:
    // NOLINTBEGIN
    MCAPI ScriptPlayAnimationOptions(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCAPI ScriptPlayAnimationOptions(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCAPI ~ScriptPlayAnimationOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayAnimationOptions>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
