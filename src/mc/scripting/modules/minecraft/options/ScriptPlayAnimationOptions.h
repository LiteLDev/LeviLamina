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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
