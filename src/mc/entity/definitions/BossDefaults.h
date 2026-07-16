#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BossDefaults {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI int const& HUD_RANGE();
#endif

#ifdef LL_PLAT_S
MCAPI int const& HUD_RANGE();
#endif

#ifdef LL_PLAT_C
MCAPI bool const& SHOULD_DARKEN_SKY();
#endif

#ifdef LL_PLAT_S
MCAPI bool const& SHOULD_DARKEN_SKY();
#endif
// NOLINTEND

} // namespace BossDefaults
