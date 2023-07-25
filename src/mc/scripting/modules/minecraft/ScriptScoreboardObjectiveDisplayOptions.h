#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjectiveDisplayOptions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSCOREBOARDOBJECTIVEDISPLAYOPTIONS
public:
    ScriptScoreboardObjectiveDisplayOptions& operator=(ScriptScoreboardObjectiveDisplayOptions const&) = delete;
    ScriptScoreboardObjectiveDisplayOptions(ScriptScoreboardObjectiveDisplayOptions const&)            = delete;
    ScriptScoreboardObjectiveDisplayOptions()                                                          = delete;
#endif

public:
    /**
     * @symbol ??1ScriptScoreboardObjectiveDisplayOptions\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptScoreboardObjectiveDisplayOptions();
    /**
     * @symbol
     * ?bind\@ScriptScoreboardObjectiveDisplayOptions\@ScriptModuleMinecraft\@\@SA?AV?$InterfaceBindingBuilder\@VScriptScoreboardObjectiveDisplayOptions\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::InterfaceBindingBuilder<
        class ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
    bind();
};

}; // namespace ScriptModuleMinecraft
