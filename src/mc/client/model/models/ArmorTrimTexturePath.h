#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ArmorTrimTexturePath {
// static variables
// NOLINTBEGIN
MCAPI ::std::string const& PALETTE_LOCATION_ROOT();

MCAPI ::std::string const& TRIM_ICON_LOCATION_ROOT();

#ifdef LL_PLAT_C
MCAPI ::std::string const& TRIM_LOCATION_ROOT();

MCAPI ::std::string const& TRIM_SUBSTR();
#endif
// NOLINTEND

} // namespace ArmorTrimTexturePath
