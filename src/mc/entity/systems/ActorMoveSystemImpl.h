#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorMoveSystemImpl {
// NOLINTBEGIN
MCAPI void updateHitboxSystem(
    class StrictEntityContext const&,
    struct StateVectorComponent const& svc,
    class HitboxComponent&             hitbox
);
// NOLINTEND

}; // namespace ActorMoveSystemImpl
