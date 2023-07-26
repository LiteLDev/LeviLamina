#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPressurePlatePopAfterEvent {

public:
    // prevent constructor by default
    ScriptPressurePlatePopAfterEvent& operator=(ScriptPressurePlatePopAfterEvent const&) = delete;
    ScriptPressurePlatePopAfterEvent(ScriptPressurePlatePopAfterEvent const&)            = delete;
    ScriptPressurePlatePopAfterEvent()                                                   = delete;

public:
    /**
     * @symbol ??4ScriptPressurePlatePopAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptPressurePlatePopAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptPressurePlatePopAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptPressurePlatePopAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptPressurePlatePopAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPressurePlatePopAfterEvent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
