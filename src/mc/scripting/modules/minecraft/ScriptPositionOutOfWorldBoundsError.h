#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPositionOutOfWorldBoundsError {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPOSITIONOUTOFWORLDBOUNDSERROR
public:
    ScriptPositionOutOfWorldBoundsError& operator=(ScriptPositionOutOfWorldBoundsError const&) = delete;
    ScriptPositionOutOfWorldBoundsError(ScriptPositionOutOfWorldBoundsError const&)            = delete;
    ScriptPositionOutOfWorldBoundsError()                                                      = delete;
#endif

public:
    /**
     * @symbol ??0ScriptPositionOutOfWorldBoundsError\@ScriptModuleMinecraft\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI ScriptPositionOutOfWorldBoundsError(class Vec3 const&);
    /**
     * @symbol
     * ??0ScriptPositionOutOfWorldBoundsError\@ScriptModuleMinecraft\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI ScriptPositionOutOfWorldBoundsError(std::string const&, class Vec3 const&);
    /**
     * @symbol ??1ScriptPositionOutOfWorldBoundsError\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPositionOutOfWorldBoundsError();
    /**
     * @symbol
     * ?bind\@ScriptPositionOutOfWorldBoundsError\@ScriptModuleMinecraft\@\@SA?AV?$ErrorBindingBuilder\@UScriptPositionOutOfWorldBoundsError\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptPositionOutOfWorldBoundsError>
    bind();
};

}; // namespace ScriptModuleMinecraft
