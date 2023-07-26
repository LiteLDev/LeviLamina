#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitEntityAfterEvent {

public:
    // prevent constructor by default
    ScriptActorHitEntityAfterEvent& operator=(ScriptActorHitEntityAfterEvent const&) = delete;
    ScriptActorHitEntityAfterEvent(ScriptActorHitEntityAfterEvent const&)            = delete;
    ScriptActorHitEntityAfterEvent()                                                 = delete;

public:
    /**
     * @symbol ??4ScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorHitEntityAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorHitEntityAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHitEntityAfterEvent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
