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
MCNAPI void forLiquidDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCNAPI void forNormalDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCNAPI void tickApplyWaterDrag(::entt::type_list<::Include<::WaterTravelFlagComponent>>, ::Optional<::OnGroundFlagComponent const> onGroundFlag, ::Optional<::WaterMovementComponent const> waterMovement, ::ActorDataFlagComponent const& actorDataFlagComponent, ::SwimSpeedMultiplierComponent const& swimSpeedMultiplierComponent, ::WaterWalkSpeedEnchantComponent const& waterWalkSpeedEnchantComponent, ::StateVectorComponent& stateVectorComponent);
// NOLINTEND

}
