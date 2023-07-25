#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPistonActionBeforeEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTPISTONACTIONBEFOREEVENT
public:
    ScriptPistonActionBeforeEvent& operator=(ScriptPistonActionBeforeEvent const&) = delete;
    ScriptPistonActionBeforeEvent(ScriptPistonActionBeforeEvent const&)            = delete;
    ScriptPistonActionBeforeEvent()                                                = delete;
#endif

public:
    /**
     * @symbol ??4ScriptPistonActionBeforeEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPistonActionBeforeEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPistonActionBeforeEvent&&);
    /**
     * @symbol ??1ScriptPistonActionBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPistonActionBeforeEvent();
    /**
     * @symbol
     * ?bind\@ScriptPistonActionBeforeEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPistonActionBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPistonActionBeforeEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
