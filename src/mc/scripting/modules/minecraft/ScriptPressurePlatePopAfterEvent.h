#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePopAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPRESSUREPLATEPOPAFTEREVENT
public:
    ScriptPressurePlatePopAfterEvent& operator=(ScriptPressurePlatePopAfterEvent const&) = delete;
    ScriptPressurePlatePopAfterEvent(ScriptPressurePlatePopAfterEvent const&)            = delete;
    ScriptPressurePlatePopAfterEvent()                                                   = delete;
#endif

public:
    /**
     * @symbol ??4ScriptPressurePlatePopAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent&&);
    /**
     * @symbol ??1ScriptPressurePlatePopAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPressurePlatePopAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptPressurePlatePopAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPressurePlatePopAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
