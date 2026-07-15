#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SchedulerDefaults {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI float const& MAX_DELAY_SECS();
#endif

#ifdef LL_PLAT_S
MCAPI float const& MAX_DELAY_SECS();
#endif

#ifdef LL_PLAT_C
MCAPI float const& MIN_DELAY_SECS();
#endif

#ifdef LL_PLAT_S
MCAPI float const& MIN_DELAY_SECS();
#endif
// NOLINTEND

} // namespace SchedulerDefaults
