#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace LavaTravelSystem {
// functions
// NOLINTBEGIN
MCAPI void copyLavaSpeedToMobTravel(
    ::StrictEntityContext&               attributesComponent,
    ::MovementAttributesComponent const& mobTravelComponent,
    ::MobTravelComponent&
);

MCAPI ::TickingSystemWithInfo createLavaTravelSystem();
// NOLINTEND

} // namespace LavaTravelSystem
