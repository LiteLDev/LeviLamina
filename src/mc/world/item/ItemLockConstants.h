#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemLockConstants {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::add_lvalue_reference_t<char const[]> TAG_ITEM_LOCK();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::add_lvalue_reference_t<char const[]> TAG_ITEM_LOCK();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::add_lvalue_reference_t<char const[]> TAG_KEEP_ON_DEATH();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::add_lvalue_reference_t<char const[]> TAG_KEEP_ON_DEATH();
#endif
// NOLINTEND

} // namespace ItemLockConstants
