#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorRemovedAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORREMOVEDAFTEREVENT
public:
    ScriptActorRemovedAfterEvent& operator=(ScriptActorRemovedAfterEvent const&) = delete;
    ScriptActorRemovedAfterEvent(ScriptActorRemovedAfterEvent const&)            = delete;
    ScriptActorRemovedAfterEvent()                                               = delete;
#endif

public:
    /**
     * @symbol ??1ScriptActorRemovedAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorRemovedAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptActorRemovedAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorRemovedAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorRemovedAfterEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
