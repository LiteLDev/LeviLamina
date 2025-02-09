#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HitResult;
// clang-format on

struct ProjectileHitEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>            mProjectile;
    ::ll::TypedStorage<8, 112, ::HitResult const> mHitResult;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ProjectileHitEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
