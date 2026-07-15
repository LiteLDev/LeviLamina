#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace StorageItemComponentTags {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::add_lvalue_reference_t<char const[]> bundleContentTag();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::add_lvalue_reference_t<char const[]> bundleContentTag();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::add_lvalue_reference_t<char const[]> bundleIDTag();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::add_lvalue_reference_t<char const[]> bundleIDTag();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::add_lvalue_reference_t<char const[]> bundleIDTag();

MCAPI ::std::add_lvalue_reference_t<char const[]> bundleWeightTag();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::add_lvalue_reference_t<char const[]> bundleWeightTag();
#endif
// NOLINTEND

} // namespace StorageItemComponentTags
