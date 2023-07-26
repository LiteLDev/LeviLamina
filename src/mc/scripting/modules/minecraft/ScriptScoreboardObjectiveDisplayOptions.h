#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjectiveDisplayOptions {

public:
    // prevent constructor by default
    ScriptScoreboardObjectiveDisplayOptions& operator=(ScriptScoreboardObjectiveDisplayOptions const&) = delete;
    ScriptScoreboardObjectiveDisplayOptions(ScriptScoreboardObjectiveDisplayOptions const&)            = delete;
    ScriptScoreboardObjectiveDisplayOptions()                                                          = delete;

public:
    /**
     * @symbol ??1ScriptScoreboardObjectiveDisplayOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptScoreboardObjectiveDisplayOptions(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptScoreboardObjectiveDisplayOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@VScriptScoreboardObjectiveDisplayOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<
        class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
