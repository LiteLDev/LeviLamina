#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorHurtResult {
public:
    // ActorHurtResult inner types define
    enum class Type : int {
        NotHurt         = 0,
        EffectsOnly     = 1,
        DamageProcessed = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorHurtResult::Type> mType;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>  mDamageAmount;
    ::ll::TypedStorage<1, 1, bool>                    mShouldAllowKnockback;
    // NOLINTEND
};
