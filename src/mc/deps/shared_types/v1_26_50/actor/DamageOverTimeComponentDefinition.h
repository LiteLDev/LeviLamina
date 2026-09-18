#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_50 {

struct DamageOverTimeComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mDamagePerHurt;
    ::ll::TypedStorage<4, 4, float> mTimeBetweenHurt;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& DEFAULT_DAMAGE_PER_HURT();

    MCAPI static float const& DEFAULT_TIME_BETWEEN_HURT();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
