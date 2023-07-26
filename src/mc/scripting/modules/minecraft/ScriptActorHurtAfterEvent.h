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
    /**
     * @symbol ??0ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptActorHurtAfterEvent(struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent const&); // NOLINT
    /**
     * @symbol ??0ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ScriptActorHurtAfterEvent(); // NOLINT
    /**
     * @symbol ??0ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptActorHurtAfterEvent(struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&); // NOLINT
    /**
     * @symbol ??4ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorHurtAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>
    bind(); // NOLINT
    /**
     * @symbol
     * ?bindV010\@ScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorHurtAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorHurtAfterEvent>
    bindV010(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
