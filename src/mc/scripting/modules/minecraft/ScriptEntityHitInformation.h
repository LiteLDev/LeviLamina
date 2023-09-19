#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityHitInformation {
public:
    // prevent constructor by default
    ScriptEntityHitInformation& operator=(ScriptEntityHitInformation const&);
    ScriptEntityHitInformation(ScriptEntityHitInformation const&);
    ScriptEntityHitInformation();

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptEntityHitInformation@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptEntityHitInformation();

    // symbol:
    // ?bind@ScriptEntityHitInformation@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptEntityHitInformation@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityHitInformation>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
