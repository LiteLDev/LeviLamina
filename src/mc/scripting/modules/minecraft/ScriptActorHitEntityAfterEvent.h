#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitEntityAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORHITENTITYAFTEREVENT
public:
    ScriptActorHitEntityAfterEvent& operator=(ScriptActorHitEntityAfterEvent const&) = delete;
    ScriptActorHitEntityAfterEvent(ScriptActorHitEntityAfterEvent const&)            = delete;
    ScriptActorHitEntityAfterEvent()                                                 = delete;
#endif

public:
    /**
     * @symbol ??4ScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent&&);
    /**
     * @symbol ??1ScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorHitEntityAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
