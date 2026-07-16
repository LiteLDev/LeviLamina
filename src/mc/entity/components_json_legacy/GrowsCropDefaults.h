#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GrowsCropDefaults {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI float const& CHANCE();
#endif

#ifdef LL_PLAT_S
MCAPI float const& CHANCE();
#endif

#ifdef LL_PLAT_C
MCAPI int const& CHARGES();
#endif

#ifdef LL_PLAT_S
MCAPI int const& CHARGES();
#endif
// NOLINTEND

} // namespace GrowsCropDefaults
