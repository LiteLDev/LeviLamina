#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTACTORADDEFFECTAFTEREVENT
public:
    ScriptActorAddEffectAfterEvent& operator=(ScriptActorAddEffectAfterEvent const&) = delete;
    ScriptActorAddEffectAfterEvent(ScriptActorAddEffectAfterEvent const&)            = delete;
    ScriptActorAddEffectAfterEvent()                                                 = delete;
#endif

public:
    /**
     * @symbol ??4ScriptActorAddEffectAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent&&);
    /**
     * @symbol ??1ScriptActorAddEffectAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptActorAddEffectAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptActorAddEffectAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptActorAddEffectAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
