#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityHitInformation {
public:
    // prevent constructor by default
    ScriptEntityHitInformation(ScriptEntityHitInformation const&);
    ScriptEntityHitInformation();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptEntityHitInformation&
    operator=(struct ScriptModuleMinecraft::ScriptEntityHitInformation&&);

    MCAPI struct ScriptModuleMinecraft::ScriptEntityHitInformation&
    operator=(struct ScriptModuleMinecraft::ScriptEntityHitInformation const&);

    MCAPI ~ScriptEntityHitInformation();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityHitInformation>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
