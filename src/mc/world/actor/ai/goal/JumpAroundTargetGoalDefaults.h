#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JumpAroundTargetGoalDefaults {
// static variables
// NOLINTBEGIN
MCNAPI float const& COOLDOWN_SECONDS();

MCNAPI float const& COOLDOWN_WHEN_HURT_SECONDS();

MCNAPI ::std::vector<float> const& JUMP_ANGLES();

MCNAPI int const& LANDING_POSITION_SPREAD_DEGREES();

MCNAPI int const& LINE_OF_SIGHT_CHECK_HEIGHT();

MCNAPI int const& REQUIRED_VERTICAL_SPACE();

MCNAPI int const& SNAP_TO_SURFACE_BLOCK_RANGE();
// NOLINTEND

} // namespace JumpAroundTargetGoalDefaults
