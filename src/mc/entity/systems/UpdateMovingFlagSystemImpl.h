#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ControlledByLocalInstanceComponent;
struct PassengerComponent;
struct SetMovingFlagRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace UpdateMovingFlagSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doTickMovingFlagSystem(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::StrictEntityContext const&                                                    context,
    ::StateVectorComponent const&                                                   stateVectorComponent,
    ::Optional<::PassengerComponent const>                                          passengerComponent,
    ::ViewT<::StrictEntityContext, ::Include<::ControlledByLocalInstanceComponent>> vehicleView,
    ::EntityModifier<::SetMovingFlagRequestComponent>                               modifier
);
// NOLINTEND

} // namespace UpdateMovingFlagSystemImpl
