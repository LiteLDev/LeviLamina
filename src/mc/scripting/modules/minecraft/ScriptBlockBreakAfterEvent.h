#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockBreakAfterEvent {

public:
    // prevent constructor by default
    ScriptBlockBreakAfterEvent& operator=(ScriptBlockBreakAfterEvent const&) = delete;
    ScriptBlockBreakAfterEvent(ScriptBlockBreakAfterEvent const&)            = delete;
    ScriptBlockBreakAfterEvent()                                             = delete;

public:
    /**
     * @symbol ??4ScriptBlockBreakAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptBlockBreakAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockBreakAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptBlockBreakAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptBlockBreakAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptBlockBreakAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptBlockBreakAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockBreakAfterEvent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
