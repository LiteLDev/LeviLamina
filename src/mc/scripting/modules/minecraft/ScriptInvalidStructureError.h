#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptInvalidStructureError {
public:
    // prevent constructor by default
    ScriptInvalidStructureError& operator=(ScriptInvalidStructureError const&);
    ScriptInvalidStructureError(ScriptInvalidStructureError const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptInvalidStructureError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptInvalidStructureError();

    // symbol: ??1ScriptInvalidStructureError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptInvalidStructureError();

    // symbol:
    // ?bind@ScriptInvalidStructureError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptInvalidStructureError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptInvalidStructureError> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
