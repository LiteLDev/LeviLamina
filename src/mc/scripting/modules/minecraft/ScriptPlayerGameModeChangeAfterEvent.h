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
    // symbol: ??4ScriptPlayerGameModeChangeAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent&&);

    // symbol: ??4ScriptPlayerGameModeChangeAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent const&);

    // symbol:
    // ?bind@ScriptPlayerGameModeChangeAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerGameModeChangeAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerGameModeChangeAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
