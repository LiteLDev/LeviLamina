#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
struct ActorDataFlagComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
struct SwimSpeedMultiplierComponent;
struct TickingSystemWithInfo;
struct WaterMovementComponent;
struct WaterTravelFlagComponent;
struct WaterWalkSpeedEnchantComponent;
// clang-format on

namespace MobMovementDrag {
// functions
// NOLINTBEGIN
MCAPI void forLiquidDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI void forNormalDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI void forWingFlapDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI void tickApplyWaterDrag(
    ::entt::type_list<::Include<::WaterTravelFlagComponent>> onGroundFlagComponent,
    ::Optional<::OnGroundFlagComponent const>                waterMovementComponent,
    ::Optional<::WaterMovementComponent const>               actorDataFlagComponent,
    ::ActorDataFlagComponent const&                          swimSpeedMultiplierComponent,
    ::SwimSpeedMultiplierComponent const&                    waterWalkSpeedEnchantComponent,
    ::WaterWalkSpeedEnchantComponent const&                  stateVectorComponent,
    ::StateVectorComponent&
);
// NOLINTEND

} // namespace MobMovementDrag
