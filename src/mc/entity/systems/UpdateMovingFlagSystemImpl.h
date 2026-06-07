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
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>                context,
    ::StrictEntityContext const&                                                    stateVectorComponent,
    ::StateVectorComponent const&                                                   passengerComponent,
    ::Optional<::PassengerComponent const>                                          vehicleView,
    ::ViewT<::StrictEntityContext, ::Include<::ControlledByLocalInstanceComponent>> modifier,
    ::EntityModifier<::SetMovingFlagRequestComponent>
);
// NOLINTEND

} // namespace UpdateMovingFlagSystemImpl
