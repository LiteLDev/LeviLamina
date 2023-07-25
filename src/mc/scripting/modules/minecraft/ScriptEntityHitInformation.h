#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityHitInformation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTENTITYHITINFORMATION
public:
    ScriptEntityHitInformation& operator=(ScriptEntityHitInformation const&) = delete;
    ScriptEntityHitInformation(ScriptEntityHitInformation const&)            = delete;
    ScriptEntityHitInformation()                                             = delete;
#endif

public:
    /**
     * @symbol ??1ScriptEntityHitInformation\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptEntityHitInformation();
    /**
     * @symbol
     * ?bind\@ScriptEntityHitInformation\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@UScriptEntityHitInformation\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityHitInformation>
    bind();
};

}; // namespace ScriptModuleMinecraft
