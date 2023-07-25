#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORHITAFTEREVENT
public:
    ScriptActorHitAfterEvent& operator=(ScriptActorHitAfterEvent const&) = delete;
    ScriptActorHitAfterEvent()                                           = delete;
#endif

public:
    /**
     * @symbol ??0ScriptActorHitAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptActorHitAfterEvent(struct ScriptModuleMinecraft::ScriptActorHitAfterEvent const&);
    /**
     * @symbol ??0ScriptActorHitAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptActorHitAfterEvent(struct ScriptModuleMinecraft::ScriptActorHitAfterEvent&&);
    /**
     * @symbol ??4ScriptActorHitAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorHitAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHitAfterEvent&&);
    /**
     * @symbol ??1ScriptActorHitAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorHitAfterEvent();
    /**
     * @symbol
     * ?bindV010\@ScriptActorHitAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorHitAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHitAfterEvent>
    bindV010();
};

}; // namespace ScriptModuleMinecraft
