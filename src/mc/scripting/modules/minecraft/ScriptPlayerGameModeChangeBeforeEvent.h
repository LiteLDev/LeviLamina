#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerGameModeChangeBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerGameModeChangeBeforeEvent& operator=(ScriptPlayerGameModeChangeBeforeEvent const&);
    ScriptPlayerGameModeChangeBeforeEvent(ScriptPlayerGameModeChangeBeforeEvent const&);
    ScriptPlayerGameModeChangeBeforeEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptPlayerGameModeChangeBeforeEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerGameModeChangeBeforeEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
