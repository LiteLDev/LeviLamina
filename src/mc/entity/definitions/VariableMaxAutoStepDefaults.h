#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VariableMaxAutoStepDefaults {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI float const& BASE_VALUE();
#endif

#ifdef LL_PLAT_S
MCAPI float const& BASE_VALUE();
#endif

#ifdef LL_PLAT_C
MCAPI float const& CONTROLLED_VALUE();
#endif

#ifdef LL_PLAT_S
MCAPI float const& CONTROLLED_VALUE();
#endif

#ifdef LL_PLAT_C
MCAPI float const& JUMP_PREVENTED_VALUE();
#endif

#ifdef LL_PLAT_S
MCAPI float const& JUMP_PREVENTED_VALUE();
#endif
// NOLINTEND

} // namespace VariableMaxAutoStepDefaults
