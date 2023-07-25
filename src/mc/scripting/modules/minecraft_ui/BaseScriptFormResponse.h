#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftServerUI {

class BaseScriptFormResponse {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFTSERVERUI_BASESCRIPTFORMRESPONSE
public:
    BaseScriptFormResponse& operator=(BaseScriptFormResponse const&) = delete;
    BaseScriptFormResponse(BaseScriptFormResponse const&)            = delete;
    BaseScriptFormResponse()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@BaseScriptFormResponse\@ScriptModuleMinecraftServerUI\@\@SA?AV?$ClassBindingBuilder\@VBaseScriptFormResponse\@ScriptModuleMinecraftServerUI\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::BaseScriptFormResponse>
    bind();
};

}; // namespace ScriptModuleMinecraftServerUI
