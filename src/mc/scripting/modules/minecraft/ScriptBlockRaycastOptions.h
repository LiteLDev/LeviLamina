#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockRaycastOptions {
public:
    // prevent constructor by default
    ScriptBlockRaycastOptions& operator=(ScriptBlockRaycastOptions const&);
    ScriptBlockRaycastOptions(ScriptBlockRaycastOptions const&);
    ScriptBlockRaycastOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptBlockRaycastOptions&
    operator=(struct ScriptModuleMinecraft::ScriptBlockRaycastOptions&&);

    MCAPI ~ScriptBlockRaycastOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions>
    bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
