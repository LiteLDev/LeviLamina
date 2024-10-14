#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDamageSource {
public:
    // prevent constructor by default
    ScriptActorDamageSource();

public:
    // NOLINTBEGIN
    MCAPI ScriptActorDamageSource(struct ScriptModuleMinecraft::ScriptActorDamageSource const&);

    MCAPI struct ScriptModuleMinecraft::ScriptActorDamageSource&
    operator=(struct ScriptModuleMinecraft::ScriptActorDamageSource&&);

    MCAPI struct ScriptModuleMinecraft::ScriptActorDamageSource&
    operator=(struct ScriptModuleMinecraft::ScriptActorDamageSource const&);

    MCAPI ~ScriptActorDamageSource();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptActorDamageSource> bind();

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
