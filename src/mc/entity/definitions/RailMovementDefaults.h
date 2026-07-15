#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RailMovementDefaults {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI float const& MAX_SPEED();
#endif

#ifdef LL_PLAT_S
MCAPI float const& MAX_SPEED();
#endif
// NOLINTEND

} // namespace RailMovementDefaults
