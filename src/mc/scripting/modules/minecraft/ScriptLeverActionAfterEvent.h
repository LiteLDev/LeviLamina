#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptLeverActionAfterEvent {

public:
    // prevent constructor by default
    ScriptLeverActionAfterEvent& operator=(ScriptLeverActionAfterEvent const&) = delete;
    ScriptLeverActionAfterEvent(ScriptLeverActionAfterEvent const&)            = delete;
    ScriptLeverActionAfterEvent()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptLeverActionAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptLeverActionAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent> bind();
    /**
     * @symbol ??4ScriptLeverActionAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptLeverActionAfterEvent&&);
    /**
     * @symbol ??1ScriptLeverActionAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptLeverActionAfterEvent();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
