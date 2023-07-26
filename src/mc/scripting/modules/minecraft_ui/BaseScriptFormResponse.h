#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftServerUI {

class BaseScriptFormResponse {

public:
    // prevent constructor by default
    BaseScriptFormResponse& operator=(BaseScriptFormResponse const&) = delete;
    BaseScriptFormResponse(BaseScriptFormResponse const&)            = delete;
    BaseScriptFormResponse()                                         = delete;

public:
    /**
     * @symbol
     * ?bind\@BaseScriptFormResponse\@ScriptModuleMinecraftServerUI\@\@SA?AV?$ClassBindingBuilder\@VBaseScriptFormResponse\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::BaseScriptFormResponse>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraftServerUI
