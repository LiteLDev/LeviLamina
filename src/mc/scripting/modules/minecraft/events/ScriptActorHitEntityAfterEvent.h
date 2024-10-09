#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitEntityAfterEvent {
public:
    // prevent constructor by default
    ScriptActorHitEntityAfterEvent& operator=(ScriptActorHitEntityAfterEvent const&);
    ScriptActorHitEntityAfterEvent(ScriptActorHitEntityAfterEvent const&);
    ScriptActorHitEntityAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent&&);

    MCAPI ~ScriptActorHitEntityAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
