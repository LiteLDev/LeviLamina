#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VibrationSelectorConsts {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::string const& CANDIDATE_VIBRATION_CONTEXT_TAG();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const& CANDIDATE_VIBRATION_CONTEXT_TAG();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const& FIRST_CANDIDATE_TICK_TAG();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const& FIRST_CANDIDATE_TICK_TAG();
#endif
// NOLINTEND

} // namespace VibrationSelectorConsts
