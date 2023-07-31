#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveAfterEvent {

public:
    // prevent constructor by default
    ScriptPlayerLeaveAfterEvent& operator=(ScriptPlayerLeaveAfterEvent const&) = delete;
    ScriptPlayerLeaveAfterEvent(ScriptPlayerLeaveAfterEvent const&)            = delete;
    ScriptPlayerLeaveAfterEvent()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??4ScriptPlayerLeaveAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent&&);
    /**
     * @symbol ??1ScriptPlayerLeaveAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPlayerLeaveAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptPlayerLeaveAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPlayerLeaveAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptPlayerLeaveAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPlayerLeaveAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerLeaveAfterEvent>
    bindV010();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
