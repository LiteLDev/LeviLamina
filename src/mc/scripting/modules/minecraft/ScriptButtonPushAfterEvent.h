#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptButtonPushAfterEvent {

public:
    // prevent constructor by default
    ScriptButtonPushAfterEvent& operator=(ScriptButtonPushAfterEvent const&) = delete;
    ScriptButtonPushAfterEvent(ScriptButtonPushAfterEvent const&)            = delete;
    ScriptButtonPushAfterEvent()                                             = delete;

public:
    /**
     * @symbol ??4ScriptButtonPushAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptButtonPushAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptButtonPushAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptButtonPushAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptButtonPushAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptButtonPushAfterEvent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
