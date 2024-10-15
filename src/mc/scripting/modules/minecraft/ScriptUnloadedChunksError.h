#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptUnloadedChunksError {
public:
    // prevent constructor by default
    ScriptUnloadedChunksError& operator=(ScriptUnloadedChunksError const&);
    ScriptUnloadedChunksError(ScriptUnloadedChunksError const&);
    ScriptUnloadedChunksError();

public:
    // NOLINTBEGIN
    MCAPI ScriptUnloadedChunksError(uint64 unloadedChunks, uint64 totalChunks);

    MCAPI ~ScriptUnloadedChunksError();

    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptUnloadedChunksError> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(uint64 unloadedChunks, uint64 totalChunks);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
