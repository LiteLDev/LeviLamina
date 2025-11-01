#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct ProjectileHitEvent;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitInfoAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
                                      mDimension;
    ::ll::TypedStorage<4, 12, ::Vec3> mLocation;
    ::ll::TypedStorage<4, 12, ::Vec3> mHitVector;
    ::ll::TypedStorage<4, 12, ::Vec3> mSurfaceHitNormal;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
                                                                                                          mSource;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mProjectile;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitInfoAfterEvent& operator=(ScriptProjectileHitInfoAfterEvent const&);
    ScriptProjectileHitInfoAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptProjectileHitInfoAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent&&);

    MCAPI ScriptProjectileHitInfoAfterEvent(::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent const&);

    MCAPI ScriptProjectileHitInfoAfterEvent(
        ::ProjectileHitEvent const&           projectileHitEvent,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ~ScriptProjectileHitInfoAfterEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptProjectileHitInfoAfterEvent const&);

    MCAPI void* $ctor(::ProjectileHitEvent const& projectileHitEvent, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
