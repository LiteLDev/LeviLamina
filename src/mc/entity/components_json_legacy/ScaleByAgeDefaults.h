#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScaleByAgeDefaults {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI float const& END_SCALE();
#endif

#ifdef LL_PLAT_S
MCAPI float const& END_SCALE();
#endif

#ifdef LL_PLAT_C
MCAPI float const& START_SCALE();
#endif

#ifdef LL_PLAT_S
MCAPI float const& START_SCALE();
#endif
// NOLINTEND

} // namespace ScaleByAgeDefaults
