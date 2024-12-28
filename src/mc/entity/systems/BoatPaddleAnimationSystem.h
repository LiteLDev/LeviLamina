#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorRemovedFlagComponent;
struct BoatFlagComponent;
struct BoatPaddleComponent;
struct RuntimeIDComponent;
struct SendPacketsComponent;
struct ShouldBeSimulatedComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

namespace BoatPaddleAnimationSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void sendAnimationPackets(
    ::entt::type_list<
        ::Include<::ActorMovementTickNeededComponent, ::BoatFlagComponent, ::ShouldBeSimulatedComponent>,
        ::Exclude<::ActorRemovedFlagComponent>>,
    ::StrictEntityContext const&                                      entity,
    ::BoatPaddleComponent const&                                      boatPaddleComponent,
    ::Optional<::VehicleInputIntentComponent const> const&            vehicleInputIntentComponent,
    ::EntityModifier<::SendPacketsComponent>                          modifier,
    ::ViewT<::StrictEntityContext, ::RuntimeIDComponent const> const& idView
);
// NOLINTEND

} // namespace BoatPaddleAnimationSystem
