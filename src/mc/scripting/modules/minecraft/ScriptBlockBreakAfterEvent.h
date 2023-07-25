#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockBreakAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKBREAKAFTEREVENT
public:
    ScriptBlockBreakAfterEvent& operator=(ScriptBlockBreakAfterEvent const&) = delete;
    ScriptBlockBreakAfterEvent(ScriptBlockBreakAfterEvent const&)            = delete;
    ScriptBlockBreakAfterEvent()                                             = delete;
#endif

public:
    /**
     * @symbol ??4ScriptBlockBreakAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptBlockBreakAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockBreakAfterEvent&&);
    /**
     * @symbol ??1ScriptBlockBreakAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptBlockBreakAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptBlockBreakAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptBlockBreakAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockBreakAfterEvent> bind();
};

}; // namespace ScriptModuleMinecraft
