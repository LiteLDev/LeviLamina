#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ArmorTrimTexturePath {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::string const& ARMOR_ICON_LOCATION_ROOT();
#endif

MCNAPI ::std::string const& PALETTE_LOCATION_ROOT();

MCNAPI ::std::string const& TRIM_ICON_LOCATION_ROOT();

#ifdef LL_PLAT_C
MCNAPI ::std::string const& TRIM_LOCATION_ROOT();
#endif

MCNAPI ::std::string const& TRIM_SUBSTR();
// NOLINTEND

} // namespace ArmorTrimTexturePath
