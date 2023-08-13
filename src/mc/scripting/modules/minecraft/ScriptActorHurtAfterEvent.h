#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHurtAfterEvent {

public:
    // prevent constructor by default
    ScriptActorHurtAfterEvent& operator=(ScriptActorHurtAfterEvent const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptActorHurtAfterEvent(struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&);
    /**
     * @symbol ??0ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptActorHurtAfterEvent(struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);
    /**
     * @symbol ??0ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ScriptActorHurtAfterEvent();
    /**
     * @symbol ??4ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&);
    /**
     * @symbol ??1ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorHurtAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>
    bindV010();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
