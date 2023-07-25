#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityRaycastOptions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTENTITYRAYCASTOPTIONS
public:
    ScriptEntityRaycastOptions& operator=(ScriptEntityRaycastOptions const&) = delete;
    ScriptEntityRaycastOptions(ScriptEntityRaycastOptions const&)            = delete;
    ScriptEntityRaycastOptions()                                             = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptEntityRaycastOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptEntityRaycastOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions>
    bind();
    /**
     * @symbol
     * ?bindV010\@ScriptEntityRaycastOptions\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptEntityRaycastOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions>
    bindV010();
};

}; // namespace ScriptModuleMinecraft
