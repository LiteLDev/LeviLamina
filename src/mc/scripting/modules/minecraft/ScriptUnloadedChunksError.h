#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptUnloadedChunksError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptUnloadedChunksError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptUnloadedChunksError(uint64 unloadedChunks, uint64 totalChunks);

    MCNAPI ~ScriptUnloadedChunksError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 unloadedChunks, uint64 totalChunks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
