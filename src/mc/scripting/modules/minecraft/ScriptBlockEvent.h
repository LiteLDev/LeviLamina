#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockEvent {

public:
    // prevent constructor by default
    ScriptBlockEvent(ScriptBlockEvent const&) = delete;
    ScriptBlockEvent()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptBlockEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptBlockEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockEvent> bind();
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
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
