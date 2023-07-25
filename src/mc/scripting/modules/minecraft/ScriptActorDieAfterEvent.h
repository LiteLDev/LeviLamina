#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDieAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORDIEAFTEREVENT
public:
    ScriptActorDieAfterEvent& operator=(ScriptActorDieAfterEvent const&) = delete;
    ScriptActorDieAfterEvent(ScriptActorDieAfterEvent const&)            = delete;
    ScriptActorDieAfterEvent()                                           = delete;
#endif

public:
    /**
     * @symbol ??4ScriptActorDieAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorDieAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorDieAfterEvent&&);
    /**
     * @symbol ??1ScriptActorDieAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorDieAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptActorDieAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorDieAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorDieAfterEvent> bind();
};

}; // namespace ScriptModuleMinecraft
