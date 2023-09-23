#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptEntityHitInformation; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitEntityAfterEvent {
public:
    // prevent constructor by default
    ScriptProjectileHitEntityAfterEvent& operator=(ScriptProjectileHitEntityAfterEvent const&);
    ScriptProjectileHitEntityAfterEvent(ScriptProjectileHitEntityAfterEvent const&);
    ScriptProjectileHitEntityAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getEntityHit@ScriptProjectileHitEntityAfterEvent@ScriptModuleMinecraft@@QEBA?AUScriptEntityHitInformation@2@XZ
    MCAPI struct ScriptModuleMinecraft::ScriptEntityHitInformation getEntityHit() const;

    // symbol: ??1ScriptProjectileHitEntityAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptProjectileHitEntityAfterEvent();

    // symbol:
    // ?bind@ScriptProjectileHitEntityAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptProjectileHitEntityAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
