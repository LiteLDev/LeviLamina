#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorApplyDamageByProjectileOptions {
public:
    // prevent constructor by default
    ScriptActorApplyDamageByProjectileOptions(ScriptActorApplyDamageByProjectileOptions const&);
    ScriptActorApplyDamageByProjectileOptions();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptActorApplyDamageByProjectileOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions&&);

    // symbol: ??4ScriptActorApplyDamageByProjectileOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions&
    operator=(struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const&);

    // symbol: ??8ScriptActorApplyDamageByProjectileOptions@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const& other) const;

    // symbol: ??1ScriptActorApplyDamageByProjectileOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorApplyDamageByProjectileOptions();

    // symbol:
    // ?bind@ScriptActorApplyDamageByProjectileOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptActorApplyDamageByProjectileOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<
        struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
