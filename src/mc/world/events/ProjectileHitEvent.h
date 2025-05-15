#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct ProjectileHitEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>            mProjectile;
    ::ll::TypedStorage<8, 112, ::HitResult const> mHitResult;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileHitEvent& operator=(ProjectileHitEvent const&);
    ProjectileHitEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProjectileHitEvent(::ProjectileHitEvent const&);

    MCAPI ~ProjectileHitEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ProjectileHitEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
