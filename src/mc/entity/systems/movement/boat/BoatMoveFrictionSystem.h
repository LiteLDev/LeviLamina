#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class BuoyancyComponent;
class IConstBlockSource;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct BoatMovementComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
// clang-format on

namespace BoatMoveFrictionSystem {
// functions
// NOLINTBEGIN
MCAPI void boatMoveFriction(
    ::StrictEntityContext const&              synchedActorDataComponent,
    ::ActorDataFlagComponent const&           boatMovementComponent,
    ::BoatMovementComponent&                  stateVectorComponent,
    ::StateVectorComponent&                   buoyancyComponent,
    ::Optional<::BuoyancyComponent const>     isOnGround,
    ::Optional<::OnGroundFlagComponent const> region,
    ::IConstBlockSource const&
);
// NOLINTEND

} // namespace BoatMoveFrictionSystem
