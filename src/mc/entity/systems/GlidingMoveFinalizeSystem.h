#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct GlidingCollisionDamageComponent;
struct GlidingTravelFlagComponent;
struct HorizontalCollisionFlagComponent;
struct MobFlagComponent;
struct MoveRequestComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace GlidingMoveFinalizeSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickCollisionDamageCalculate(
    ::entt::type_list<::Include<::GlidingTravelFlagComponent, ::HorizontalCollisionFlagComponent, ::MobFlagComponent>>,
    ::StrictEntityContext const&                         entity,
    ::MoveRequestComponent const&                        moveRequest,
    ::StateVectorComponent const&                        stateVectorComponent,
    ::EntityModifier<::GlidingCollisionDamageComponent>& modifier
);

MCAPI ::TickingSystemWithInfo createCollisionDamageCalculateSystem();

MCAPI ::TickingSystemWithInfo createCollisionDamageHurtSystem();
// NOLINTEND

} // namespace GlidingMoveFinalizeSystem
