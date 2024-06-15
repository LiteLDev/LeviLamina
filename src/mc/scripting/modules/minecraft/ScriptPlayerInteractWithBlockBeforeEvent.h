#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockBeforeEvent& operator=(ScriptPlayerInteractWithBlockBeforeEvent const&);
    ScriptPlayerInteractWithBlockBeforeEvent(ScriptPlayerInteractWithBlockBeforeEvent const&);
    ScriptPlayerInteractWithBlockBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerInteractWithBlockBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
