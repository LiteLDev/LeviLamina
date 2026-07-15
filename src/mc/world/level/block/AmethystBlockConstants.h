#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AmethystBlockConstants {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::array<int, 16> const& RESONANCE_TONE_MAP();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::array<int, 16> const& RESONANCE_TONE_MAP();
#endif
// NOLINTEND

} // namespace AmethystBlockConstants
