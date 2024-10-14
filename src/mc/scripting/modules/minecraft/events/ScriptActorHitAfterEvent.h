#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitAfterEvent {
public:
    // prevent constructor by default
    ScriptActorHitAfterEvent& operator=(ScriptActorHitAfterEvent const&);
    ScriptActorHitAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptActorHitAfterEvent(struct ScriptModuleMinecraft::ScriptActorHitAfterEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptActorHitAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHitAfterEvent&&);

    MCAPI ~ScriptActorHitAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptActorHitAfterEvent>
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
