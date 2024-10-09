#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerGameModeChangeBeforeEvent {
public:
    // prevent constructor by default
    ScriptPlayerGameModeChangeBeforeEvent& operator=(ScriptPlayerGameModeChangeBeforeEvent const&);
    ScriptPlayerGameModeChangeBeforeEvent(ScriptPlayerGameModeChangeBeforeEvent const&);
    ScriptPlayerGameModeChangeBeforeEvent();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeBeforeEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
