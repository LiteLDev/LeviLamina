#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EntitySensorDefaults {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI bool const& FIND_PLAYERS_ONLY();
#endif

#ifdef LL_PLAT_S
MCAPI bool const& FIND_PLAYERS_ONLY();
#endif

#ifdef LL_PLAT_C
MCAPI bool const& RELATIVE_RANGE();
#endif

#ifdef LL_PLAT_S
MCAPI bool const& RELATIVE_RANGE();
#endif
// NOLINTEND

} // namespace EntitySensorDefaults
