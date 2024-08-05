#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityEffectOptions {
public:
    // prevent constructor by default
    ScriptEntityEffectOptions& operator=(ScriptEntityEffectOptions const&);
    ScriptEntityEffectOptions(ScriptEntityEffectOptions const&);
    ScriptEntityEffectOptions();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityEffectOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
