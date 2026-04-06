#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace FlyTriggerSystem {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCAPI ::TickingSystemWithInfo createActionSystem();
#endif

MCAPI ::TickingSystemWithInfo createIntentSystem();

MCAPI ::TickingSystemWithInfo createRemovePermissionFlyFlagSystem();
// NOLINTEND

} // namespace FlyTriggerSystem
