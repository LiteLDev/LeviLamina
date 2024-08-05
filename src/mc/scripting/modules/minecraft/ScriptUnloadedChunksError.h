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
    MCAPI ScriptUnloadedChunksError(uint64, uint64);

    MCAPI ~ScriptUnloadedChunksError();

    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptUnloadedChunksError> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
