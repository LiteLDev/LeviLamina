#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LegacyTradeableDefaults {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI bool const& CONVERT_TRADES_ECONOMY();
#endif

#ifdef LL_PLAT_S
MCAPI bool const& CONVERT_TRADES_ECONOMY();
#endif

#ifdef LL_PLAT_C
MCAPI bool const& NEW_SCREEN();
#endif

#ifdef LL_PLAT_S
MCAPI bool const& NEW_SCREEN();
#endif

#ifdef LL_PLAT_C
MCAPI bool const& PERSISTENT_TRADES();
#endif

#ifdef LL_PLAT_S
MCAPI bool const& PERSISTENT_TRADES();
#endif
// NOLINTEND

} // namespace LegacyTradeableDefaults
