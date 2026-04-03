#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorHurtResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::variant<bool, float>> mHurtOrDamage;
    ::ll::TypedStorage<1, 1, bool>                        mShouldAllowKnockback;
    // NOLINTEND

    //TODO: check
    operator bool() const {
        if (std::holds_alternative<bool>(*mHurtOrDamage)) {
            return std::get<bool>(*mHurtOrDamage);
        }
        return std::get<float>(*mHurtOrDamage) > 0;
    }
};
