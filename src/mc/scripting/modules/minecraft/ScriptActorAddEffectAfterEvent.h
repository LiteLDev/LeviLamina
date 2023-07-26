#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectAfterEvent {

public:
    // prevent constructor by default
    ScriptActorAddEffectAfterEvent& operator=(ScriptActorAddEffectAfterEvent const&) = delete;
    ScriptActorAddEffectAfterEvent(ScriptActorAddEffectAfterEvent const&)            = delete;
    ScriptActorAddEffectAfterEvent()                                                 = delete;

public:
    /**
     * @symbol ??4ScriptActorAddEffectAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptActorAddEffectAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorAddEffectAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptActorAddEffectAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorAddEffectAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
