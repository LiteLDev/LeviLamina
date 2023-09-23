#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

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
    // symbol: ??0ScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@QEAA@AEBVVec3@@@Z
    MCAPI explicit ScriptLocationInUnloadedChunkError(class Vec3 const&);

    // symbol:
    // ?bind@ScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
