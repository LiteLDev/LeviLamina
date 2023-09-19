#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjectiveDisplayOptions {
public:
    // prevent constructor by default
    ScriptScoreboardObjectiveDisplayOptions& operator=(ScriptScoreboardObjectiveDisplayOptions const&);
    ScriptScoreboardObjectiveDisplayOptions(ScriptScoreboardObjectiveDisplayOptions const&);
    ScriptScoreboardObjectiveDisplayOptions();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptScoreboardObjectiveDisplayOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptScoreboardObjectiveDisplayOptions();

    // symbol:
    // ?bind@ScriptScoreboardObjectiveDisplayOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptScoreboardObjectiveDisplayOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<
        class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
