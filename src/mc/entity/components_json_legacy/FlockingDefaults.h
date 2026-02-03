#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlockingDefaults {
// static variables
// NOLINTBEGIN
MCAPI float const& BLOCK_DISTANCE();

MCAPI float const& BLOCK_WEIGHT();

MCAPI float const& BREACH_INFLUENCE();

MCAPI float const& COHESION_THRESHOLD();

MCAPI float const& COHESION_WEIGHT();

MCAPI float const& GOAL_WEIGHT();

MCAPI int const& HIGH_FLOCK_LIMIT();

MCAPI float const& INFLUENCE_RADIUS();

MCAPI float const& INNER_COHESION_THRESHOLD();

MCAPI bool const& IN_WATER();

MCAPI float const& LONER_CHANCE();

MCAPI int const& LOW_FLOCK_LIMIT();

MCAPI bool const& MATCH_VARIANTS();

MCAPI float const& MAX_HEIGHT();

MCAPI float const& MIN_HEIGHT();

MCAPI float const& SEPARATION_THRESHOLD();

MCAPI float const& SEPARATION_WEIGHT();

MCAPI bool const& USE_CENTER_OF_MASS();
// NOLINTEND

} // namespace FlockingDefaults
