#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StoreLocalMovementVelocitySystemUtils {
// NOLINTBEGIN
MCAPI void storeLocalMovementVelocity(
    struct MobTravelComponent const&          mobTravel,
    struct CurrentLocalMoveVelocityComponent& velocity
);
// NOLINTEND

}; // namespace StoreLocalMovementVelocitySystemUtils
