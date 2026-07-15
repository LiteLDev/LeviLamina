#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraPresetsInternals {
// static variables
// NOLINTBEGIN
MCNAPI ::std::vector<::std::string>& ALLOWED_MC_EASE_TARGET();

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::std::string> const& VANILLA_CAMERAS();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::vector<::std::string> const& VANILLA_CAMERAS();
#endif
// NOLINTEND

} // namespace CameraPresetsInternals
