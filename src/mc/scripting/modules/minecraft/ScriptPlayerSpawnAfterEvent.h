#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerSpawnAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerSpawnAfterEvent& operator=(ScriptPlayerSpawnAfterEvent const&);
    ScriptPlayerSpawnAfterEvent(ScriptPlayerSpawnAfterEvent const&);
    ScriptPlayerSpawnAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptPlayerSpawnAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerSpawnAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerSpawnAfterEvent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
