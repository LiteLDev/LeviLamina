#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptEntityHitInformation.h"
#include "mc/scripting/modules/minecraft/events/ScriptProjectileHitInfoAfterEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ProjectileHitEvent;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitEntityAfterEvent : public ::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ScriptModuleMinecraft::ScriptEntityHitInformation> mEntityHitInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptProjectileHitEntityAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);

    MCAPI ScriptProjectileHitEntityAfterEvent(
        ::ProjectileHitEvent const&           projectileHitEvent,
        ::Actor const*                        hitEntity,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptEntityHitInformation getEntityHit() const;

    MCAPI ::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&&);

    MCAPI ::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitEntityAfterEvent const&);

    MCAPI void* $ctor(
        ::ProjectileHitEvent const&           projectileHitEvent,
        ::Actor const*                        hitEntity,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
