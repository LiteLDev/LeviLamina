#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct LocalMoveVelocityComponent;
struct MobRotationComponent;
struct MobTravelComponent;
// clang-format on

namespace MobTravelIntentSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void updatedMoveVelocity(
    ::StrictEntityContext const&,
    ::LocalMoveVelocityComponent& localMoveVelocityComponent,
    ::MobRotationComponent&       mobRotationComponent,
    ::MobTravelComponent&         mobTravelComponent
);
// NOLINTEND

} // namespace MobTravelIntentSystemImpl
