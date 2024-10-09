#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLocationInUnloadedChunkError {
public:
    // prevent constructor by default
    ScriptLocationInUnloadedChunkError& operator=(ScriptLocationInUnloadedChunkError const&);
    ScriptLocationInUnloadedChunkError(ScriptLocationInUnloadedChunkError const&);
    ScriptLocationInUnloadedChunkError();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptLocationInUnloadedChunkError(class Vec3 const& pos);

    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
