#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerGameModeChangeAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerGameModeChangeAfterEvent(ScriptPlayerGameModeChangeAfterEvent const&);
    ScriptPlayerGameModeChangeAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent const&);

    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
