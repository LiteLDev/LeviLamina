#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMovementSettingsImpl {
// functions
// NOLINTBEGIN
MCAPI bool _isServerAuthBlockBreakingEnabled();

#ifdef LL_PLAT_C
MCAPI bool _isStrictDismount();

MCAPI bool _isStrictEntityInteractions();

MCAPI bool _isStrictMovement();
#endif
// NOLINTEND

} // namespace PlayerMovementSettingsImpl
