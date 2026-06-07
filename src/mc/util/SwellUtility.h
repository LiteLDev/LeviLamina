#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExplodeComponent;
struct SwellComponent;
// clang-format on

namespace SwellUtility {
// functions
// NOLINTBEGIN
MCNAPI float calculateSwellAmount(::ExplodeComponent const& explodeComponent);

MCNAPI float calculateSwellAmount(::SwellComponent const& swellComponent, float a);
// NOLINTEND

} // namespace SwellUtility
