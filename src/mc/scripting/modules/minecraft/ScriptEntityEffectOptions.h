#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityEffectOptions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTENTITYEFFECTOPTIONS
public:
    ScriptEntityEffectOptions& operator=(ScriptEntityEffectOptions const&) = delete;
    ScriptEntityEffectOptions(ScriptEntityEffectOptions const&)            = delete;
    ScriptEntityEffectOptions()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptEntityEffectOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptEntityEffectOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityEffectOptions>
    bind();
};

}; // namespace ScriptModuleMinecraft
