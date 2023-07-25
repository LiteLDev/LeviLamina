#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCommandResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTCOMMANDRESULT
public:
    ScriptCommandResult& operator=(ScriptCommandResult const&) = delete;
    ScriptCommandResult(ScriptCommandResult const&)            = delete;
    ScriptCommandResult()                                      = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptCommandResult\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptCommandResult\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptCommandResult> bind();
};

}; // namespace ScriptModuleMinecraft
