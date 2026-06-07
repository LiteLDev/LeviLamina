#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ScreenContext;
// clang-format on

namespace ScreenContextHelper {
// functions
// NOLINTBEGIN
MCAPI ::ScreenContext makeScreenContext(::IClientInstance& client, float a);

MCAPI ::ScreenContext makeScreenContextAlphaOverride(::ScreenContext& screenContext, float a);
// NOLINTEND

} // namespace ScreenContextHelper
