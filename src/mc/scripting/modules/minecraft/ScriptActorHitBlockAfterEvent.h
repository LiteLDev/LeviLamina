#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitBlockAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORHITBLOCKAFTEREVENT
public:
    ScriptActorHitBlockAfterEvent& operator=(ScriptActorHitBlockAfterEvent const&) = delete;
    ScriptActorHitBlockAfterEvent(ScriptActorHitBlockAfterEvent const&)            = delete;
    ScriptActorHitBlockAfterEvent()                                                = delete;
#endif

public:
    /**
     * @symbol ??1ScriptActorHitBlockAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorHitBlockAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptActorHitBlockAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorHitBlockAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
