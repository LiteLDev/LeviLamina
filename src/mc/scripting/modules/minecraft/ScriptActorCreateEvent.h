#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorCreateEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORCREATEEVENT
public:
    ScriptActorCreateEvent& operator=(ScriptActorCreateEvent const&) = delete;
    ScriptActorCreateEvent(ScriptActorCreateEvent const&)            = delete;
    ScriptActorCreateEvent()                                         = delete;
#endif

public:
    /**
     * @symbol ??1ScriptActorCreateEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorCreateEvent();
    /**
     * @symbol
     * ?bindV010\@ScriptActorCreateEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorCreateEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorCreateEvent> bindV010();
};

}; // namespace ScriptModuleMinecraft
