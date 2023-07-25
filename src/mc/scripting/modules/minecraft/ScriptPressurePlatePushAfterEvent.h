#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePushAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPRESSUREPLATEPUSHAFTEREVENT
public:
    ScriptPressurePlatePushAfterEvent& operator=(ScriptPressurePlatePushAfterEvent const&) = delete;
    ScriptPressurePlatePushAfterEvent(ScriptPressurePlatePushAfterEvent const&)            = delete;
    ScriptPressurePlatePushAfterEvent()                                                    = delete;
#endif

public:
    /**
     * @symbol ??4ScriptPressurePlatePushAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent&&);
    /**
     * @symbol ??1ScriptPressurePlatePushAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPressurePlatePushAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptPressurePlatePushAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPressurePlatePushAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPressurePlatePushAfterEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
