#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
struct ProjectileHitEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitInfoAfterEvent {
public:
    // prevent constructor by default
    ScriptProjectileHitInfoAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptProjectileHitInfoAfterEvent@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptProjectileHitInfoAfterEvent(struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent&&);

    // symbol: ??0ScriptProjectileHitInfoAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptProjectileHitInfoAfterEvent(struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent const&);

    // symbol:
    // ??0ScriptProjectileHitInfoAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUProjectileHitEvent@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptProjectileHitInfoAfterEvent(struct ProjectileHitEvent const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptProjectileHitInfoAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent&&);

    // symbol: ??4ScriptProjectileHitInfoAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent const&);

    // symbol: ??1ScriptProjectileHitInfoAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptProjectileHitInfoAfterEvent();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
