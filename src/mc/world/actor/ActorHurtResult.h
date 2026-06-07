#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorHurtResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::variant<bool, float>> mHurtOrDamage;
    ::ll::TypedStorage<1, 1, bool>                        mShouldAllowKnockback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ActorHurtResult& setHurt(bool wasHurt);

    MCAPI ::ActorHurtResult& setShouldAllowKnockback(bool shouldDoKnockback);

    MCFOLD bool shouldAllowKnockback() const;

    MCAPI bool wasHurt() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ActorHurtResult createDamaged(float damage);

    MCAPI static ::ActorHurtResult createHurt();

    MCAPI static ::ActorHurtResult createNotHurt();
    // NOLINTEND
};
