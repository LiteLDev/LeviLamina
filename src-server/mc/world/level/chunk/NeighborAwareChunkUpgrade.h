#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class INeighborAwareChunkUpgrader;
class LevelChunk;
// clang-format on

namespace NeighborAwareChunkUpgrade {
// functions
// NOLINTBEGIN
MCNAPI void doLevelChunkNeighborAwareUpgrade(::LevelChunk& levelChunk, ::BlockSource& region, ::INeighborAwareChunkUpgrader const& neighborAwareChunkUpgrader);

MCNAPI bool verifyChunkNeedsNeighborAwareUpgrade(::LevelChunk& levelChunk, ::INeighborAwareChunkUpgrader const& neighborAwareChunkUpgrader);
// NOLINTEND

}
