#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct MobTravelComponent;
struct MovementAttributesComponent;
// clang-format on

namespace LavaTravelSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void copyLavaSpeedToMobTravel(
    ::StrictEntityContext&,
    ::MovementAttributesComponent const& attributesComponent,
    ::MobTravelComponent&                mobTravelComponent
);
// NOLINTEND

} // namespace LavaTravelSystemImpl
