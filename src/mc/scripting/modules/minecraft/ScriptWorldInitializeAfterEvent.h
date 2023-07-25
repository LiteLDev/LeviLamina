#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTWORLDINITIALIZEAFTEREVENT
public:
    ScriptWorldInitializeAfterEvent& operator=(ScriptWorldInitializeAfterEvent const&) = delete;
    ScriptWorldInitializeAfterEvent(ScriptWorldInitializeAfterEvent const&)            = delete;
    ScriptWorldInitializeAfterEvent()                                                  = delete;
#endif

public:
    /**
     * @symbol ??1ScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptWorldInitializeAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bind();
    /**
     * @symbol
     * ?bindV010\@ScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bindV010();
};

}; // namespace ScriptModuleMinecraft
