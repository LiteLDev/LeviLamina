#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
struct ActorTickedComponent;
struct OnGroundFlagComponent;
struct PassengerComponent;
struct WingFlapDataComponent;
struct WingFlapVerticalDragComponent;
// clang-format on

namespace UpdateWingFlapValueSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void tick(
    ::entt::type_list<::Include<::ActorTickedComponent, ::WingFlapVerticalDragComponent>> onGroundComponent,
    ::Optional<::OnGroundFlagComponent const>                                             passengerComponent,
    ::Optional<::PassengerComponent const>                                                wingFlapDataComponent,
    ::WingFlapDataComponent&
);
// NOLINTEND

} // namespace UpdateWingFlapValueSystemImpl
