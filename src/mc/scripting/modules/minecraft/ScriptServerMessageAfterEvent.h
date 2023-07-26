#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptServerMessageAfterEvent {

public:
    // prevent constructor by default
    ScriptServerMessageAfterEvent& operator=(ScriptServerMessageAfterEvent const&) = delete;
    ScriptServerMessageAfterEvent(ScriptServerMessageAfterEvent const&)            = delete;
    ScriptServerMessageAfterEvent()                                                = delete;

public:
    /**
     * @symbol ??0ScriptServerMessageAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptServerMessageAfterEvent(struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent&&); // NOLINT
    /**
     * @symbol ??4ScriptServerMessageAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptServerMessageAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptServerMessageAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptServerMessageAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptServerMessageAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
