#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"

namespace ScriptModuleMinecraft {

struct ScriptLocationInUnloadedChunkError : public ::Scripting::Error {
public:
    // prevent constructor by default
    ScriptLocationInUnloadedChunkError& operator=(ScriptLocationInUnloadedChunkError const&);
    ScriptLocationInUnloadedChunkError(ScriptLocationInUnloadedChunkError const&);
    ScriptLocationInUnloadedChunkError();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
