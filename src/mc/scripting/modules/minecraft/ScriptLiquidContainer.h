#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptLiquidContainer {
public:
    // prevent constructor by default
    ScriptLiquidContainer& operator=(ScriptLiquidContainer const&);
    ScriptLiquidContainer(ScriptLiquidContainer const&);
    ScriptLiquidContainer();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptLiquidContainer@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptLiquidContainer@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptLiquidContainer> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
