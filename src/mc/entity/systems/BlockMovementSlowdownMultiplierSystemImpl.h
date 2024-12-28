#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct StateVectorComponent;
// clang-format on

namespace BlockMovementSlowdownMultiplierSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void applySlowdownOnMoveSingleEntity(
    ::StrictEntityContext const& context,
    ::ViewT<
        ::StrictEntityContext,
        ::BlockMovementSlowdownMultiplierComponent,
        ::MoveRequestComponent,
        ::StateVectorComponent> view
);

MCAPI void immunePlayerSingleEntity(
    ::StrictEntityContext const& context,
    ::ViewT<
        ::StrictEntityContext,
        ::BlockMovementSlowdownMultiplierComponent,
        ::Include<::BlockMovementSlowdownAppliedComponent>,
        ::MovementAbilitiesComponent const>                   view,
    ::EntityModifier<::BlockMovementSlowdownAppliedComponent> modifier
);
// NOLINTEND

} // namespace BlockMovementSlowdownMultiplierSystemImpl
