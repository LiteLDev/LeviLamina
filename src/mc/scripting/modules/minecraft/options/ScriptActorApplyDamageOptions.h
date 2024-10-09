#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorApplyDamageOptions {
public:
    // prevent constructor by default
    ScriptActorApplyDamageOptions(ScriptActorApplyDamageOptions const&);
    ScriptActorApplyDamageOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions const&);

    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions const& other) const;

    MCAPI ~ScriptActorApplyDamageOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
