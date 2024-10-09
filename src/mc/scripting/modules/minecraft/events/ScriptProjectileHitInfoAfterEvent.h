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
    MCAPI ScriptProjectileHitInfoAfterEvent(struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent&&);

    MCAPI ScriptProjectileHitInfoAfterEvent(struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent const&);

    MCAPI ScriptProjectileHitInfoAfterEvent(
        struct ProjectileHitEvent const&          projectileHitEvent,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent const&);

    MCAPI ~ScriptProjectileHitInfoAfterEvent();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
