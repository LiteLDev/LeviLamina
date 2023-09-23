#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptDimensionLocation {
public:
    // prevent constructor by default
    ScriptDimensionLocation& operator=(ScriptDimensionLocation const&);
    ScriptDimensionLocation(ScriptDimensionLocation const&);
    ScriptDimensionLocation();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptDimensionLocation@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptDimensionLocation();

    // symbol:
    // ?bind@ScriptDimensionLocation@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptDimensionLocation@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptDimensionLocation> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
