#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStopUseOnAfterEvent {

public:
    // prevent constructor by default
    ScriptItemStopUseOnAfterEvent& operator=(ScriptItemStopUseOnAfterEvent const&) = delete;
    ScriptItemStopUseOnAfterEvent()                                                = delete;

public:
    /**
     * @symbol ??0ScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBU01\@\@Z
     */
    MCAPI ScriptItemStopUseOnAfterEvent(struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent const&); // NOLINT
    /**
     * @symbol ??4ScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptItemStopUseOnAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptItemStopUseOnAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
