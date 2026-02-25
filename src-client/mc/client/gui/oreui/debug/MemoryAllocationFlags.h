#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class MemoryAllocationFlags : uchar {
    // bitfield representation
    None                          = 0,
    CohtmlVirtualProtectionChange = 1 << 0,
    CohtmlVirtualReserve          = 1 << 2,
    CohtmlVirtualCommit           = 1 << 3,
    CohtmlVirtualDecommit         = 1 << 4,
    CohtmlVirtualRelease          = 1 << 5,
    Count                         = CohtmlVirtualProtectionChange | CohtmlVirtualRelease,
};

}
