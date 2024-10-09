#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobTravelIntentSystemImpl {
// NOLINTBEGIN
MCAPI void updatedMoveVelocity(
    class StrictEntityContext const&,
    struct LocalMoveVelocityComponent& localMoveVelocityComponent,
    struct MobRotationComponent&       mobRotationComponent,
    struct MobTravelComponent&         mobTravelComponent
);
// NOLINTEND

}; // namespace MobTravelIntentSystemImpl
