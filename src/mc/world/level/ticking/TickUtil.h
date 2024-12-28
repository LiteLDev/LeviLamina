#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class Pos;
class Random;
struct Bounds;
// clang-format on

namespace TickUtil {
// functions
// NOLINTBEGIN
MCAPI ::std::pair<::BlockPos, ::BlockPos> chunkBoundsToGridBounds(::Pos const& chunkMin, ::Pos const& chunkMax);

MCAPI ::Bounds getDeterministicBounds(::Bounds const& bounds);

MCAPI ::ChunkPos getRandomInBounds(::Bounds const& bounds, ::Random& random);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& TICKING_AREAS_PREFIX();
// NOLINTEND

} // namespace TickUtil
