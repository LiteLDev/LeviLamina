#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ProjectileHitEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitInfoAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk203a55;
    ::ll::UntypedStorage<4, 12> mUnk7c1bb1;
    ::ll::UntypedStorage<4, 12> mUnk84f4c0;
    ::ll::UntypedStorage<4, 12> mUnka7e81d;
    ::ll::UntypedStorage<8, 40> mUnkefdbc2;
    ::ll::UntypedStorage<8, 32> mUnkb991b3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectileHitInfoAfterEvent& operator=(ScriptProjectileHitInfoAfterEvent const&);
    ScriptProjectileHitInfoAfterEvent(ScriptProjectileHitInfoAfterEvent const&);
    ScriptProjectileHitInfoAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptProjectileHitInfoAfterEvent(
        ::ProjectileHitEvent const&           projectileHitEvent,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ~ScriptProjectileHitInfoAfterEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ProjectileHitEvent const& projectileHitEvent, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
