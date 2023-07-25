#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCommandError {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTCOMMANDERROR
public:
    ScriptCommandError& operator=(ScriptCommandError const&) = delete;
    ScriptCommandError(ScriptCommandError const&)            = delete;
    ScriptCommandError()                                     = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptCommandError\@ScriptModuleMinecraft\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUMCRESULT\@\@\@Z
     */
    MCAPI ScriptCommandError(std::string, struct MCRESULT const&);
    /**
     * @symbol ??1ScriptCommandError\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptCommandError();
    /**
     * @symbol
     * ?bind\@ScriptCommandError\@ScriptModuleMinecraft\@\@SA?AV?$ErrorBindingBuilder\@UScriptCommandError\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptCommandError> bind();
};

}; // namespace ScriptModuleMinecraft
