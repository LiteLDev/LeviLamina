#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptProjectileShootOptions {
public:
    // prevent constructor by default
    ScriptProjectileShootOptions& operator=(ScriptProjectileShootOptions const&);
    ScriptProjectileShootOptions(ScriptProjectileShootOptions const&);
    ScriptProjectileShootOptions();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptProjectileShootOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptProjectileShootOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptProjectileShootOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
