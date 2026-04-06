#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class Level;
class Random;
class Vec3;
// clang-format on

namespace CreakingHeartParticlesUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void emitTrailParticles(::Level& level, ::CompoundTag const& data, ::Random& random);
#endif

MCNAPI void requestTrailParticles(
    ::BlockSource&    region,
    ::BlockPos const& creakingHeartPos,
    ::Vec3 const&     creakingPos,
    int               toCreakingAmount,
    int               toCreakingHeartAmount
);
// NOLINTEND

} // namespace CreakingHeartParticlesUtils
