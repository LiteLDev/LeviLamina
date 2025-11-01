#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct AirSpeedComponent;
struct CanVehicleSprintFlagComponent;
struct MovementAttributesComponent;
struct MovementSpeedComponent;
struct PlayerComponent;
struct VehicleComponent;
// clang-format on

namespace MobTravelUpdateSpeedsSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doUpdateMovementSpeed(
    ::StrictEntityContext const&                                   context,
    ::ActorDataFlagComponent const&                                actorDataFlagComponent,
    ::ActorDataControllingSeatIndexComponent const&                controllingSeatIndexComponent,
    ::VehicleComponent const&                                      vehicleComponent,
    ::AirSpeedComponent&                                           flySpeedComponent,
    ::MovementAttributesComponent const&                           movementAttributesComponent,
    ::MovementSpeedComponent&                                      movementSpeedComponent,
    ::Optional<::CanVehicleSprintFlagComponent const>              canVehicleSprintFlag,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>>   players,
    ::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const> actorDataView
);
// NOLINTEND

} // namespace MobTravelUpdateSpeedsSystemImpl
