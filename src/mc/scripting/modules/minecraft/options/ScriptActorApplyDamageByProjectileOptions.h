#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorApplyDamageByProjectileOptions {
public:
    // prevent constructor by default
    ScriptActorApplyDamageByProjectileOptions& operator=(ScriptActorApplyDamageByProjectileOptions const&);
    ScriptActorApplyDamageByProjectileOptions(ScriptActorApplyDamageByProjectileOptions const&);
    ScriptActorApplyDamageByProjectileOptions();

public:
    // NOLINTBEGIN
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const& other) const;

    MCAPI ~ScriptActorApplyDamageByProjectileOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<
        struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
