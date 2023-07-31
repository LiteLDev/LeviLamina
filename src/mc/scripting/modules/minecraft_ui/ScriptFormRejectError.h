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

public:
    // prevent constructor by default
    ScriptFormRejectError& operator=(ScriptFormRejectError const&) = delete;
    ScriptFormRejectError(ScriptFormRejectError const&)            = delete;
    ScriptFormRejectError()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptFormRejectError\@ScriptModuleMinecraftServerUI\@\@QEAA\@W4ScriptFormRejectReason\@1\@\@Z
     */
    MCAPI ScriptFormRejectError(enum class ScriptModuleMinecraftServerUI::ScriptFormRejectReason);
    /**
     * @symbol
     * ?bind\@ScriptFormRejectError\@ScriptModuleMinecraftServerUI\@\@SA?AV?$ErrorBindingBuilder\@VScriptFormRejectError\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ErrorBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptFormRejectError>
    bind();
    /**
     * @symbol ??1ScriptFormRejectError\@ScriptModuleMinecraftServerUI\@\@QEAA\@XZ
     */
    MCAPI ~ScriptFormRejectError();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
