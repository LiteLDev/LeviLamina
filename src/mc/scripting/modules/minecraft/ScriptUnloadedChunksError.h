#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptUnloadedChunksError {
public:
    // prevent constructor by default
    ScriptUnloadedChunksError& operator=(ScriptUnloadedChunksError const&);
    ScriptUnloadedChunksError(ScriptUnloadedChunksError const&);
    ScriptUnloadedChunksError();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptUnloadedChunksError@ScriptModuleMinecraft@@QEAA@_K0@Z
    MCAPI ScriptUnloadedChunksError(uint64, uint64);

    // symbol: ??1ScriptUnloadedChunksError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptUnloadedChunksError();

    // symbol:
    // ?bind@ScriptUnloadedChunksError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptUnloadedChunksError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptUnloadedChunksError> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
