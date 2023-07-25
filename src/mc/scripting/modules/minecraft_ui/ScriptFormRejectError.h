#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftServerUI { enum class ScriptFormRejectReason; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptFormRejectError {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFTSERVERUI_SCRIPTFORMREJECTERROR
public:
    ScriptFormRejectError& operator=(ScriptFormRejectError const&) = delete;
    ScriptFormRejectError(ScriptFormRejectError const&)            = delete;
    ScriptFormRejectError()                                        = delete;
#endif

public:
    /**
     * @symbol ??0ScriptFormRejectError\@ScriptModuleMinecraftServerUI\@\@QEAA\@W4ScriptFormRejectReason\@1\@\@Z
     */
    MCAPI ScriptFormRejectError(enum class ScriptModuleMinecraftServerUI::ScriptFormRejectReason);
    /**
     * @symbol ??1ScriptFormRejectError\@ScriptModuleMinecraftServerUI\@\@QEAA\@XZ
     */
    MCAPI ~ScriptFormRejectError();
    /**
     * @symbol
     * ?bind\@ScriptFormRejectError\@ScriptModuleMinecraftServerUI\@\@SA?AV?$ErrorBindingBuilder\@VScriptFormRejectError\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ErrorBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptFormRejectError>
    bind();
};

}; // namespace ScriptModuleMinecraftServerUI
