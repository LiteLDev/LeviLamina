#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerSpawnAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerSpawnAfterEvent& operator=(ScriptPlayerSpawnAfterEvent const&);
    ScriptPlayerSpawnAfterEvent(ScriptPlayerSpawnAfterEvent const&);
    ScriptPlayerSpawnAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
