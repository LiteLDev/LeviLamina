#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AngerLevelComponentInternal {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::string const& NUISANCE_LIST_KEY();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const& NUISANCE_LIST_KEY();
#endif
// NOLINTEND

} // namespace AngerLevelComponentInternal
