#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptScoreboardScoreInfo {
public:
    // prevent constructor by default
    ScriptScoreboardScoreInfo& operator=(ScriptScoreboardScoreInfo const&);
    ScriptScoreboardScoreInfo(ScriptScoreboardScoreInfo const&);
    ScriptScoreboardScoreInfo();

public:
    // NOLINTBEGIN
    MCAPI ~ScriptScoreboardScoreInfo();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptScoreboardScoreInfo> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
