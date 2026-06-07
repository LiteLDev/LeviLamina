#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct MobFlagComponent;
struct PassengerComponent;
struct PlayerComponent;
struct ShouldBeSimulatedComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace SetVehicleInputIntentSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void doSetVehicleInputIntent(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>                           context,
    ::StrictEntityContext const&                                                               vehicle,
    ::VehicleComponent const&                                                                  actorDataFlag,
    ::ActorDataFlagComponent const&                                                            controllingSeatIndex,
    ::ActorDataControllingSeatIndexComponent const&                                            passengerView,
    ::ViewT<::StrictEntityContext, ::Include<::PassengerComponent, ::MobFlagComponent>> const& playerView,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::ShouldBeSimulatedComponent> const& modifier,
    ::EntityModifier<::VehicleInputIntentComponent>
);
// NOLINTEND

} // namespace SetVehicleInputIntentSystem
