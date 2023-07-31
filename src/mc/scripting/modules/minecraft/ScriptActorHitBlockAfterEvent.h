#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHitBlockAfterEvent {

public:
    // prevent constructor by default
    ScriptActorHitBlockAfterEvent& operator=(ScriptActorHitBlockAfterEvent const&) = delete;
    ScriptActorHitBlockAfterEvent(ScriptActorHitBlockAfterEvent const&)            = delete;
    ScriptActorHitBlockAfterEvent()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptActorHitBlockAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorHitBlockAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHitBlockAfterEvent>
    bind();
    /**
     * @symbol ??1ScriptActorHitBlockAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorHitBlockAfterEvent();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
