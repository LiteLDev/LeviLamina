#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptServerMessageAfterEvent {
public:
    // prevent constructor by default
    ScriptServerMessageAfterEvent& operator=(ScriptServerMessageAfterEvent const&);
    ScriptServerMessageAfterEvent(ScriptServerMessageAfterEvent const&);
    ScriptServerMessageAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptServerMessageAfterEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptServerMessageAfterEvent(struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent&&);

    // symbol: ??1ScriptServerMessageAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptServerMessageAfterEvent();

    // symbol:
    // ?bind@ScriptServerMessageAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptServerMessageAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptServerMessageAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
