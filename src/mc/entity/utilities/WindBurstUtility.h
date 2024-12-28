#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Vec3;
// clang-format on

namespace WindBurstUtility {
// functions
// NOLINTBEGIN
MCAPI void burst(
    ::BlockSource& region,
    ::Actor*       actor,
    ::Vec3 const&  explosionPosition,
    float          explosionRadius,
    float          knockbackScaling
);
// NOLINTEND

} // namespace WindBurstUtility
