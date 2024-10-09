#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LavaTravelSystemImpl {
// NOLINTBEGIN
MCAPI void copyLavaSpeedToMobTravel(
    class StrictEntityContext&,
    struct MovementAttributesComponent const& attributesComponent,
    struct MobTravelComponent&                mobTravelComponent
);
// NOLINTEND

}; // namespace LavaTravelSystemImpl
