#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorSpawnAfterEvent {

public:
    // prevent constructor by default
    ScriptActorSpawnAfterEvent& operator=(ScriptActorSpawnAfterEvent const&) = delete;
    ScriptActorSpawnAfterEvent(ScriptActorSpawnAfterEvent const&)            = delete;
    ScriptActorSpawnAfterEvent()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ScriptActorSpawnAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorSpawnAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptActorSpawnAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorSpawnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorSpawnAfterEvent> bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
