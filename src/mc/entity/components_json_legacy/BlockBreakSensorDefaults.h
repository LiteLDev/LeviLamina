#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockBreakSensorDefaults {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI float const& SENSOR_RADIUS();
#endif

#ifdef LL_PLAT_S
MCAPI float const& SENSOR_RADIUS();
#endif
// NOLINTEND

} // namespace BlockBreakSensorDefaults
