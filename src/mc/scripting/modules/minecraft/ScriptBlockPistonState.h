#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PistonState.h"
#include "mc/external/scripting/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptBlockPistonState {
public:
    // prevent constructor by default
    ScriptBlockPistonState& operator=(ScriptBlockPistonState const&);
    ScriptBlockPistonState(ScriptBlockPistonState const&);
    ScriptBlockPistonState();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::PistonState> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
