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
MCAPI void updatedMoveVelocity(
    ::StrictEntityContext const&  localMoveVelocityComponent,
    ::LocalMoveVelocityComponent& mobRotationComponent,
    ::MobRotationComponent&       mobTravelComponent,
    ::MobTravelComponent&
);
// NOLINTEND

} // namespace MobTravelIntentSystemImpl
