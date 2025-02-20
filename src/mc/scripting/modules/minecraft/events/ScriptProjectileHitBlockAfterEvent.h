#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptProjectileHitInfoAfterEvent.h"

// auto generated forward declare list
// clang-format off
struct ProjectileHitEvent;
namespace ScriptModuleMinecraft { struct ScriptBlockHitInformation; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkf2c13c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitBlockAfterEvent& operator=(ScriptProjectileHitBlockAfterEvent const&);
    ScriptProjectileHitBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptProjectileHitBlockAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);

    MCAPI ScriptProjectileHitBlockAfterEvent(
        ::ProjectileHitEvent const&           projectileHitEvent,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ::ScriptModuleMinecraft::ScriptBlockHitInformation getBlockHit() const;

    MCAPI ::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent const&);

    MCAPI void* $ctor(::ProjectileHitEvent const& projectileHitEvent, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
