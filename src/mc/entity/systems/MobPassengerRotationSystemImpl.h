#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct MobBodyRotationComponent;
struct PassengerComponent;
struct VehicleComponent;
// clang-format on

namespace MobPassengerRotationSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void _tickMobView(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::PassengerComponent const&     passengerComponent,
    ::ActorRotationComponent&       mobRotation,
    ::MobBodyRotationComponent&     mobBodyRotation,
    ::ActorDataFlagComponent const& syncedActorDataComponent,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::VehicleComponent>,
        ::ActorRotationComponent const,
        ::MobBodyRotationComponent const> vehicleView
);
// NOLINTEND

} // namespace MobPassengerRotationSystemImpl
