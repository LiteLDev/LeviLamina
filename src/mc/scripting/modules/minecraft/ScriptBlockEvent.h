#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBLOCKEVENT
public:
    ScriptBlockEvent(ScriptBlockEvent const&) = delete;
    ScriptBlockEvent()                        = delete;
#endif

public:
    /**
     * @symbol ??4ScriptBlockEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptBlockEvent& operator=(struct ScriptModuleMinecraft::ScriptBlockEvent&&);
    /**
     * @symbol ??4ScriptBlockEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@AEBU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptBlockEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockEvent const&);
    /**
     * @symbol ??1ScriptBlockEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptBlockEvent();
    /**
     * @symbol
     * ?bind\@ScriptBlockEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptBlockEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockEvent> bind();
};

}; // namespace ScriptModuleMinecraft
