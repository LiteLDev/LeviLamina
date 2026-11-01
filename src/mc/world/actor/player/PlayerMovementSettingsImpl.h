#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMovementSettingsImpl {
// functions
// NOLINTBEGIN
MCNAPI bool _isServerAuthBlockBreakingEnabled();

#ifdef LL_PLAT_C
MCNAPI bool _isStrictDismount();

MCNAPI bool _isStrictEntityInteractions();

MCNAPI bool _isStrictMovement();
#endif
// NOLINTEND

} // namespace PlayerMovementSettingsImpl
