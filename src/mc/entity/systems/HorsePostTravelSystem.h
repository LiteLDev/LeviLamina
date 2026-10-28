#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct HorseLandedOnGroundFlagComponent;
struct JumpPendingScaleComponent;
struct MobIsJumpingFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace HorsePostTravelSystem {
// functions
// NOLINTBEGIN
MCAPI void _doJumpResetSystem(
    ::StrictEntityContext const&                                                             context,
    ::JumpPendingScaleComponent&                                                             jumpPendingScale,
    ::EntityModifier<::HorseLandedOnGroundFlagComponent, ::MobIsJumpingFlagComponent> const& modifier
);

MCAPI ::TickingSystemWithInfo createJumpResetSystem();

MCAPI ::TickingSystemWithInfo createPostTravelSystem();
// NOLINTEND

} // namespace HorsePostTravelSystem
