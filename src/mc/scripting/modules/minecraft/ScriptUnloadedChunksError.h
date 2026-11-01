#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptUnloadedChunksError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    ScriptUnloadedChunksError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptUnloadedChunksError(uint64 unloadedChunks, uint64 totalChunks);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 unloadedChunks, uint64 totalChunks);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
