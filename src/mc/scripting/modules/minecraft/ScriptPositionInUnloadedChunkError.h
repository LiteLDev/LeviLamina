#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPositionInUnloadedChunkError {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPOSITIONINUNLOADEDCHUNKERROR
public:
    ScriptPositionInUnloadedChunkError& operator=(ScriptPositionInUnloadedChunkError const&) = delete;
    ScriptPositionInUnloadedChunkError(ScriptPositionInUnloadedChunkError const&)            = delete;
    ScriptPositionInUnloadedChunkError()                                                     = delete;
#endif

public:
    /**
     * @symbol ??0ScriptPositionInUnloadedChunkError\@ScriptModuleMinecraft\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI ScriptPositionInUnloadedChunkError(class Vec3 const&);
    /**
     * @symbol ??1ScriptPositionInUnloadedChunkError\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPositionInUnloadedChunkError();
    /**
     * @symbol
     * ?bind\@ScriptPositionInUnloadedChunkError\@ScriptModuleMinecraft\@\@SA?AV?$ErrorBindingBuilder\@UScriptPositionInUnloadedChunkError\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptPositionInUnloadedChunkError>
    bind();
};

}; // namespace ScriptModuleMinecraft
