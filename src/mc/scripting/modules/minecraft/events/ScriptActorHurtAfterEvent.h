#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHurtAfterEvent {
public:
    // prevent constructor by default
    ScriptActorHurtAfterEvent& operator=(ScriptActorHurtAfterEvent const&);
    ScriptActorHurtAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptActorHurtAfterEvent(struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);

    MCAPI ScriptActorHurtAfterEvent(struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);

    MCAPI ~ScriptActorHurtAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>
    bind();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>
    bindV010();

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
