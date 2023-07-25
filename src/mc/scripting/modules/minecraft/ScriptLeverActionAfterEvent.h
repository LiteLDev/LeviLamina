#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptLeverActionAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTLEVERACTIONAFTEREVENT
public:
    ScriptLeverActionAfterEvent& operator=(ScriptLeverActionAfterEvent const&) = delete;
    ScriptLeverActionAfterEvent(ScriptLeverActionAfterEvent const&)            = delete;
    ScriptLeverActionAfterEvent()                                              = delete;
#endif

public:
    /**
     * @symbol ??4ScriptLeverActionAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent&&);
    /**
     * @symbol ??1ScriptLeverActionAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptLeverActionAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptLeverActionAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptLeverActionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent> bind();
};

}; // namespace ScriptModuleMinecraft
