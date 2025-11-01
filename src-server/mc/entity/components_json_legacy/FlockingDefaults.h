#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlockingDefaults {
// static variables
// NOLINTBEGIN
MCNAPI float const& BLOCK_DISTANCE();

MCNAPI float const& BLOCK_WEIGHT();

MCNAPI float const& BREACH_INFLUENCE();

MCNAPI float const& COHESION_THRESHOLD();

MCNAPI float const& COHESION_WEIGHT();

MCNAPI float const& GOAL_WEIGHT();

MCNAPI int const& HIGH_FLOCK_LIMIT();

MCNAPI float const& INFLUENCE_RADIUS();

MCNAPI float const& INNER_COHESION_THRESHOLD();

MCNAPI bool const& IN_WATER();

MCNAPI float const& LONER_CHANCE();

MCNAPI int const& LOW_FLOCK_LIMIT();

MCNAPI bool const& MATCH_VARIANTS();

MCNAPI float const& MAX_HEIGHT();

MCNAPI float const& MIN_HEIGHT();

MCNAPI float const& SEPARATION_THRESHOLD();

MCNAPI float const& SEPARATION_WEIGHT();

MCNAPI bool const& USE_CENTER_OF_MASS();
// NOLINTEND

}
