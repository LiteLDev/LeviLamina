#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct LevitateTravelFlagComponent;
struct MobEffectsComponent;
struct MobTravelComponent;
struct PlayerFlyingTravelComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementLevitate {
// functions
// NOLINTBEGIN
MCAPI void forSystem(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI void tickApplyLevitate(
    ::entt::type_list<::Include<::MobTravelComponent>, ::Exclude<::PlayerFlyingTravelComponent>> entity,
    ::StrictEntityContext const&                                                                 mobEffects,
    ::MobEffectsComponent const&                                                                 stateVector,
    ::StateVectorComponent&                                                                      levitateModifier,
    ::EntityModifier<::LevitateTravelFlagComponent>
);
// NOLINTEND

} // namespace MobMovementLevitate
