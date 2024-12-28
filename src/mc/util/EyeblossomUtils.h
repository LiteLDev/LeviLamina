#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class Vec3;
// clang-format on

namespace EyeblossomUtils {
// functions
// NOLINTBEGIN
MCAPI void emitEyeblossomSoundsAndRequestParticles(
    ::BlockSource& region,
    ::Vec3 const&  pos,
    ::Block const& changedTo,
    bool           longSound
);

MCAPI ::Block const* tryGetEyeblossomForTimeOfDay(::BlockSource& region);
// NOLINTEND

} // namespace EyeblossomUtils
