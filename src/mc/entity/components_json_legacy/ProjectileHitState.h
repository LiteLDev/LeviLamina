#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProjectileHitState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDelayedHandlingNeeded;
    ::ll::TypedStorage<1, 1, bool> mDamageOrEffectsApplied;
    ::ll::TypedStorage<1, 1, bool> mIsTargetInvulnerable;
    ::ll::TypedStorage<1, 1, bool> mDestroyOnHit;
    ::ll::TypedStorage<1, 1, bool> mDestroyOnHitRequiresDamage;
    // NOLINTEND
};
