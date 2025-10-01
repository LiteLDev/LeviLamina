#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct MobBodyRotationComponent;
struct PassengerComponent;
struct SkeletonFlagComponent;
struct VehicleComponent;
// clang-format on

namespace SkeletonPassengerRotationSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void _tickSkeletonView(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::SkeletonFlagComponent>>,
    ::PassengerComponent const&                                                                     passengerComp,
    ::MobBodyRotationComponent&                                                                     mobBodyRotation,
    ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent>, ::MobBodyRotationComponent const> vehicleView
);
// NOLINTEND

} // namespace SkeletonPassengerRotationSystemImpl
