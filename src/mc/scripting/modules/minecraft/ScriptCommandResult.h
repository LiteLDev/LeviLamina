#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCommandResult {
public:
    // prevent constructor by default
    ScriptCommandResult& operator=(ScriptCommandResult const&);
    ScriptCommandResult(ScriptCommandResult const&);
    ScriptCommandResult();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptCommandResult> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
