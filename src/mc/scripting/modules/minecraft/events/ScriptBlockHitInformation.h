#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockHitInformation {
public:
    // prevent constructor by default
    ScriptBlockHitInformation(ScriptBlockHitInformation const&);
    ScriptBlockHitInformation();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptBlockHitInformation&
    operator=(struct ScriptModuleMinecraft::ScriptBlockHitInformation&&);

    MCAPI struct ScriptModuleMinecraft::ScriptBlockHitInformation&
    operator=(struct ScriptModuleMinecraft::ScriptBlockHitInformation const&);

    MCAPI ~ScriptBlockHitInformation();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockHitInformation>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
