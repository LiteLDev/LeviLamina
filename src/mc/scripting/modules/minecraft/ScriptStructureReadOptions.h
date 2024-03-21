#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptStructureReadOptions {
public:
    // prevent constructor by default
    ScriptStructureReadOptions& operator=(ScriptStructureReadOptions const&);
    ScriptStructureReadOptions(ScriptStructureReadOptions const&);
    ScriptStructureReadOptions();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptStructureReadOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptStructureReadOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptStructureReadOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
