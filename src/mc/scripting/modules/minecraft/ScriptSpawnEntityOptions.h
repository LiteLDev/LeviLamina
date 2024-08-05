#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptSpawnEntityOptions {
public:
    // prevent constructor by default
    ScriptSpawnEntityOptions& operator=(ScriptSpawnEntityOptions const&);
    ScriptSpawnEntityOptions(ScriptSpawnEntityOptions const&);
    ScriptSpawnEntityOptions();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptSpawnEntityOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
