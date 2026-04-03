#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct TraceLevelMask {
public:
    // TraceLevelMask inner types define
    enum class TraceLevelMaskEnum : int {
        L1 = 65536,
        L2 = 131072,
        L3 = 262144,
    };
};

} // namespace renoir
