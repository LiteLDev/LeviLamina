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

MCAPI void forRandomOffset(uchar maxx, uchar maxz, ::Random& random, ::std::function<void(::Pos const&)> action);

MCAPI ::Bounds getDeterministicBounds(::Bounds const& bounds);

MCAPI ::Bounds getLoadedChunkNeighborBounds(::Bounds const& bounds);

MCAPI ::ChunkPos getLoadedChunkNeighborPos(::Pos const& chunkPos, bool positiveX, bool positiveZ);

MCAPI ::ChunkPos getRandomInBounds(::Bounds const& bounds, ::Random& random);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& TICKING_AREAS_PREFIX();
// NOLINTEND

} // namespace TickUtil
