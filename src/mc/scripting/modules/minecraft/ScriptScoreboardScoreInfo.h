#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptScoreboardScoreInfo {

public:
    // prevent constructor by default
    ScriptScoreboardScoreInfo& operator=(ScriptScoreboardScoreInfo const&) = delete;
    ScriptScoreboardScoreInfo(ScriptScoreboardScoreInfo const&)            = delete;
    ScriptScoreboardScoreInfo()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ScriptScoreboardScoreInfo\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptScoreboardScoreInfo();
    /**
     * @symbol
     * ?bind\@ScriptScoreboardScoreInfo\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptScoreboardScoreInfo\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboardScoreInfo> bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
