#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorSpawnAfterEvent {
public:
    // prevent constructor by default
    ScriptActorSpawnAfterEvent& operator=(ScriptActorSpawnAfterEvent const&);
    ScriptActorSpawnAfterEvent(ScriptActorSpawnAfterEvent const&);
    ScriptActorSpawnAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorSpawnAfterEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
