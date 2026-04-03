#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorHurtResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::variant<bool, float>> mHurtOrDamage;
    ::ll::TypedStorage<1, 1, bool>                        mShouldAllowKnockback;
    // NOLINTEND
};
