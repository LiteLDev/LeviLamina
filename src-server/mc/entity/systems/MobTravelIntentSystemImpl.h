#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct LocalMoveVelocityComponent;
struct MobRotationComponent;
struct MobTravelComponent;
// clang-format on

namespace MobTravelIntentSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void tickSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::LocalMoveVelocityComponent,
        ::MobRotationComponent,
        ::MobTravelComponent> view
);

MCNAPI void updatedMoveVelocity(
    ::StrictEntityContext const&,
    ::LocalMoveVelocityComponent& localMoveVelocityComponent,
    ::MobRotationComponent&       mobRotationComponent,
    ::MobTravelComponent&         mobTravelComponent
);
// NOLINTEND

} // namespace MobTravelIntentSystemImpl
