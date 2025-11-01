#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JumpAroundTargetGoalDefaults {
// static variables
// NOLINTBEGIN
MCAPI float const& COOLDOWN_SECONDS();

MCAPI float const& COOLDOWN_WHEN_HURT_SECONDS();

MCAPI ::std::vector<float> const& JUMP_ANGLES();

MCAPI int const& LANDING_POSITION_SPREAD_DEGREES();

MCAPI int const& LINE_OF_SIGHT_CHECK_HEIGHT();

MCAPI int const& REQUIRED_VERTICAL_SPACE();

MCAPI int const& SNAP_TO_SURFACE_BLOCK_RANGE();
// NOLINTEND

}
