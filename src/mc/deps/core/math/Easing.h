#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

namespace Easing {
// functions
// NOLINTBEGIN
MCNAPI auto getEasingFunction(::EasingType easingType) -> float (*)(float, float, float);

#ifdef LL_PLAT_C
MCNAPI ::EasingType getEasingTypeFromString(::std::string const& easingName);
#endif
// NOLINTEND

} // namespace Easing
