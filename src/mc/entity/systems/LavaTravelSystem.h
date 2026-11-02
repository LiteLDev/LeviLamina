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
MCNAPI void copyLavaSpeedToMobTravel(
    ::StrictEntityContext&,
    ::MovementAttributesComponent const& attributesComponent,
    ::MobTravelComponent&                mobTravelComponent
);

MCNAPI ::TickingSystemWithInfo createLavaTravelSystem();
// NOLINTEND

} // namespace LavaTravelSystem
