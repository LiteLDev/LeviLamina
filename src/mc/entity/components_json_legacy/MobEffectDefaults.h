#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobEffectDefaults {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::string const& COOLDOWN_DELTA_KEY();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const& COOLDOWN_DELTA_KEY();
#endif
// NOLINTEND

} // namespace MobEffectDefaults
