#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptModalFormResponse {

public:
    // prevent constructor by default
    ScriptModalFormResponse& operator=(ScriptModalFormResponse const&) = delete;
    ScriptModalFormResponse(ScriptModalFormResponse const&)            = delete;
    ScriptModalFormResponse()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptModalFormResponse\@ScriptModuleMinecraftServerUI\@\@SA?AV?$ClassBindingBuilder\@VScriptModalFormResponse\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptModalFormResponse>
    bind();
    /**
     * @symbol ??4ScriptModalFormResponse\@ScriptModuleMinecraftServerUI\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraftServerUI::ScriptModalFormResponse&
    operator=(class ScriptModuleMinecraftServerUI::ScriptModalFormResponse&&);
    /**
     * @symbol ??1ScriptModalFormResponse\@ScriptModuleMinecraftServerUI\@\@QEAA\@XZ
     */
    MCAPI ~ScriptModalFormResponse();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
