#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitBlockAfterEvent {
public:
    // prevent constructor by default
    ScriptActorHitBlockAfterEvent& operator=(ScriptActorHitBlockAfterEvent const&);
    ScriptActorHitBlockAfterEvent(ScriptActorHitBlockAfterEvent const&);
    ScriptActorHitBlockAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent&&);

    MCAPI ~ScriptActorHitBlockAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
