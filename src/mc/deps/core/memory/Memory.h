#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Memory {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::add_lvalue_reference_t<char const* const[]> MemoryCategoryStrings();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::add_lvalue_reference_t<char const* const[]> MemoryCategoryStrings();
#endif
// NOLINTEND

} // namespace Memory
