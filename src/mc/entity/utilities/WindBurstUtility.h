#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WindBurstUtility {
// NOLINTBEGIN
MCAPI void burst(
    struct WindBurstComponent const& component,
    class BlockSource&               region,
    class Actor*                     actor,
    class Vec3 const&                explosionPosition
);
// NOLINTEND

}; // namespace WindBurstUtility
