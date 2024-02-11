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
    // symbol:
    // ?bind@ScriptBlockPistonState@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PistonState@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::PistonState> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
