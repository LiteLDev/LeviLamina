#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTargetBlockHitAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTTARGETBLOCKHITAFTEREVENT
public:
    ScriptTargetBlockHitAfterEvent& operator=(ScriptTargetBlockHitAfterEvent const&) = delete;
    ScriptTargetBlockHitAfterEvent()                                                 = delete;
#endif

public:
    /**
     * @symbol ??0ScriptTargetBlockHitAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptTargetBlockHitAfterEvent(struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent const&);
    /**
     * @symbol ??4ScriptTargetBlockHitAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent&&);
    /**
     * @symbol ??1ScriptTargetBlockHitAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptTargetBlockHitAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptTargetBlockHitAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptTargetBlockHitAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptTargetBlockHitAfterEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
