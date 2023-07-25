#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptButtonPushAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBUTTONPUSHAFTEREVENT
public:
    ScriptButtonPushAfterEvent& operator=(ScriptButtonPushAfterEvent const&) = delete;
    ScriptButtonPushAfterEvent(ScriptButtonPushAfterEvent const&)            = delete;
    ScriptButtonPushAfterEvent()                                             = delete;
#endif

public:
    /**
     * @symbol ??4ScriptButtonPushAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent&&);
    /**
     * @symbol ??1ScriptButtonPushAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptButtonPushAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptButtonPushAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptButtonPushAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent> bind();
};

}; // namespace ScriptModuleMinecraft
