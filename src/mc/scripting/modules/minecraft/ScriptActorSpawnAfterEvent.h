#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorSpawnAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORSPAWNAFTEREVENT
public:
    ScriptActorSpawnAfterEvent& operator=(ScriptActorSpawnAfterEvent const&) = delete;
    ScriptActorSpawnAfterEvent(ScriptActorSpawnAfterEvent const&)            = delete;
    ScriptActorSpawnAfterEvent()                                             = delete;
#endif

public:
    /**
     * @symbol ??1ScriptActorSpawnAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorSpawnAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptActorSpawnAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorSpawnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorSpawnAfterEvent> bind();
};

}; // namespace ScriptModuleMinecraft
