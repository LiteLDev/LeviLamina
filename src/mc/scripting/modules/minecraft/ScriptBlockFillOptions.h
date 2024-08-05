#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockFillOptions {
public:
    // prevent constructor by default
    ScriptBlockFillOptions(ScriptBlockFillOptions const&);
    ScriptBlockFillOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptBlockFillOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBlockFillOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptBlockFillOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBlockFillOptions const&);

    MCAPI ~ScriptBlockFillOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockFillOptions> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
