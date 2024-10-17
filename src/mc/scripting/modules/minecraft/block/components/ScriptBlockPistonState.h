#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/level/block/actor/PistonState.h"

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
