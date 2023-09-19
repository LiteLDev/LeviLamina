#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPositionInUnloadedChunkError {
public:
    // prevent constructor by default
    ScriptPositionInUnloadedChunkError& operator=(ScriptPositionInUnloadedChunkError const&);
    ScriptPositionInUnloadedChunkError(ScriptPositionInUnloadedChunkError const&);
    ScriptPositionInUnloadedChunkError();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPositionInUnloadedChunkError@ScriptModuleMinecraft@@QEAA@AEBVVec3@@@Z
    MCAPI explicit ScriptPositionInUnloadedChunkError(class Vec3 const&);

    // symbol: ??1ScriptPositionInUnloadedChunkError@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptPositionInUnloadedChunkError();

    // symbol:
    // ?bind@ScriptPositionInUnloadedChunkError@ScriptModuleMinecraft@@SA?AV?$ErrorBindingBuilder@UScriptPositionInUnloadedChunkError@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptPositionInUnloadedChunkError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
