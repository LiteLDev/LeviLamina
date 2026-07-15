#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SlotDropChancesComponentInternal {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::string const& DROP_CHANCE_TAG_KEY();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const& DROP_CHANCE_TAG_KEY();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const& SLOT_TAG_KEY();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const& SLOT_TAG_KEY();
#endif

MCAPI ::std::string const& TAG_KEY();
// NOLINTEND

} // namespace SlotDropChancesComponentInternal
