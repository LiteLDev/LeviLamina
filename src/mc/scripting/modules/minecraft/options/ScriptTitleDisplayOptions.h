#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTitleDisplayOptions {
public:
    // prevent constructor by default
    ScriptTitleDisplayOptions();

public:
    // NOLINTBEGIN
    MCAPI ScriptTitleDisplayOptions(struct ScriptModuleMinecraft::ScriptTitleDisplayOptions&&);

    MCAPI ScriptTitleDisplayOptions(struct ScriptModuleMinecraft::ScriptTitleDisplayOptions const&);

    MCAPI struct ScriptModuleMinecraft::ScriptTitleDisplayOptions&
    operator=(struct ScriptModuleMinecraft::ScriptTitleDisplayOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptTitleDisplayOptions&
    operator=(struct ScriptModuleMinecraft::ScriptTitleDisplayOptions const&);

    MCAPI ~ScriptTitleDisplayOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptTitleDisplayOptions>
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
