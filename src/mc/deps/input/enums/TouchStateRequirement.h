#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TouchStateRequirement {
// inner types
#ifdef LL_PLAT_C
enum : int {
    Pressed       = 1,
    Triggered     = 2,
    DoublePressed = 4,
};

#endif
} // namespace TouchStateRequirement
