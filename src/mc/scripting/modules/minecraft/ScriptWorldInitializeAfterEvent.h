#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeAfterEvent {

public:
    // prevent constructor by default
    ScriptWorldInitializeAfterEvent& operator=(ScriptWorldInitializeAfterEvent const&) = delete;
    ScriptWorldInitializeAfterEvent(ScriptWorldInitializeAfterEvent const&)            = delete;
    ScriptWorldInitializeAfterEvent()                                                  = delete;

public:
    /**
     * @symbol ??1ScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptWorldInitializeAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bind(); // NOLINT
    /**
     * @symbol
     * ?bindV010\@ScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptWorldInitializeAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptWorldInitializeAfterEvent>
    bindV010(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
