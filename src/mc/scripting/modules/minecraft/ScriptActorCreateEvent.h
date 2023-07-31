#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorCreateEvent {

public:
    // prevent constructor by default
    ScriptActorCreateEvent& operator=(ScriptActorCreateEvent const&) = delete;
    ScriptActorCreateEvent(ScriptActorCreateEvent const&)            = delete;
    ScriptActorCreateEvent()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bindV010\@ScriptActorCreateEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorCreateEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorCreateEvent> bindV010();
    /**
     * @symbol ??1ScriptActorCreateEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorCreateEvent();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
