#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorCreateEvent {
public:
    // prevent constructor by default
    ScriptActorCreateEvent& operator=(ScriptActorCreateEvent const&);
    ScriptActorCreateEvent(ScriptActorCreateEvent const&);
    ScriptActorCreateEvent();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorCreateEvent> bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
