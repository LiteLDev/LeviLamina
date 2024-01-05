#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"
#include "mc/scripting/modules/minecraft_ui/ScriptFormRejectReason.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptFormRejectError {
public:
    // prevent constructor by default
    ScriptFormRejectError& operator=(ScriptFormRejectError const&);
    ScriptFormRejectError(ScriptFormRejectError const&);
    ScriptFormRejectError();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptFormRejectError@ScriptModuleMinecraftServerUI@@QEAA@W4ScriptFormRejectReason@1@@Z
    MCAPI explicit ScriptFormRejectError(::ScriptModuleMinecraftServerUI::ScriptFormRejectReason reason);

    // symbol: ??1ScriptFormRejectError@ScriptModuleMinecraftServerUI@@QEAA@XZ
    MCAPI ~ScriptFormRejectError();

    // symbol:
    // ?bind@ScriptFormRejectError@ScriptModuleMinecraftServerUI@@SA?AV?$ErrorBindingBuilder@VScriptFormRejectError@ScriptModuleMinecraftServerUI@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptFormRejectError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
