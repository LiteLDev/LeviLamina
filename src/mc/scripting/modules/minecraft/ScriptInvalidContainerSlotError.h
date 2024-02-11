#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptInvalidContainerSlotError {
public:
    // prevent constructor by default
    ScriptInvalidContainerSlotError& operator=(ScriptInvalidContainerSlotError const&);
    ScriptInvalidContainerSlotError(ScriptInvalidContainerSlotError const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptInvalidContainerSlotError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptInvalidContainerSlotError();

    // symbol: ??1ScriptInvalidContainerSlotError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptInvalidContainerSlotError();

    // symbol:
    // ?bind@ScriptInvalidContainerSlotError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptInvalidContainerSlotError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
