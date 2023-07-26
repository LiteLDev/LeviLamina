#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptActionFormResponse {

public:
    // prevent constructor by default
    ScriptActionFormResponse& operator=(ScriptActionFormResponse const&) = delete;
    ScriptActionFormResponse(ScriptActionFormResponse const&)            = delete;
    ScriptActionFormResponse()                                           = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptActionFormResponse\@ScriptModuleMinecraftServerUI\@\@SA?AV?$ClassBindingBuilder\@VScriptActionFormResponse\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptActionFormResponse>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraftServerUI
