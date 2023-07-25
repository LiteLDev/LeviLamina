#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptScoreboardScoreInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSCOREBOARDSCOREINFO
public:
    ScriptScoreboardScoreInfo& operator=(ScriptScoreboardScoreInfo const&) = delete;
    ScriptScoreboardScoreInfo(ScriptScoreboardScoreInfo const&)            = delete;
    ScriptScoreboardScoreInfo()                                            = delete;
#endif

public:
    /**
     * @symbol ??1ScriptScoreboardScoreInfo\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptScoreboardScoreInfo();
    /**
     * @symbol
     * ?bind\@ScriptScoreboardScoreInfo\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptScoreboardScoreInfo\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboardScoreInfo> bind();
};

}; // namespace ScriptModuleMinecraft
