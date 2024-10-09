#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDieAfterEvent {
public:
    // prevent constructor by default
    ScriptActorDieAfterEvent& operator=(ScriptActorDieAfterEvent const&);
    ScriptActorDieAfterEvent(ScriptActorDieAfterEvent const&);
    ScriptActorDieAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptActorDieAfterEvent(struct ScriptModuleMinecraft::ScriptActorDieAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptActorDieAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorDieAfterEvent&&);

    MCAPI ~ScriptActorDieAfterEvent();

    MCAPI static class Scripting::ClassBindingBuilderReadOnly<struct ScriptModuleMinecraft::ScriptActorDieAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
