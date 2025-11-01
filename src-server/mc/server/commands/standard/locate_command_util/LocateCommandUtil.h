#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class Dimension;
// clang-format on

namespace LocateCommandUtil {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::BlockPos> locateNearbyBiomeByPredicate(
    ::BlockPos                                   position,
    ::Dimension*                                 dimension,
    ::std::function<bool(::Biome const&)> const& predicate
);
// NOLINTEND

} // namespace LocateCommandUtil
