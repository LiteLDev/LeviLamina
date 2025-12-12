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
struct VehicleComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace SetVehicleInputIntentSystem {
// functions
// NOLINTBEGIN
MCNAPI void doSetVehicleInputIntent(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::StrictEntityContext const&                                                               context,
    ::VehicleComponent const&                                                                  vehicle,
    ::ActorDataFlagComponent const&                                                            actorDataFlag,
    ::ActorDataControllingSeatIndexComponent const&                                            controllingSeatIndex,
    ::ViewT<::StrictEntityContext, ::Include<::PassengerComponent, ::MobFlagComponent>> const& passengerView,
    ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::ShouldBeSimulatedComponent> const& playerView,
    ::EntityModifier<::VehicleInputIntentComponent>                                                   modifier
);
// NOLINTEND

} // namespace SetVehicleInputIntentSystem
