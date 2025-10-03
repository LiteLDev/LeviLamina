#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct BlockMovementSlowdownMultiplierComponent;
struct MoveRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace BlockMovementSlowdownMultiplierSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void applySlowdownOnMoveSingleEntity(
    ::StrictEntityContext const& context,
    ::ViewT<
        ::StrictEntityContext,
        ::BlockMovementSlowdownMultiplierComponent,
        ::MoveRequestComponent,
        ::StateVectorComponent> view
);
// NOLINTEND

} // namespace BlockMovementSlowdownMultiplierSystemImpl
