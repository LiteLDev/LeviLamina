#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class SpawnConditions;
// clang-format on

namespace SlimeSpawnRules {
// functions
// NOLINTBEGIN
MCAPI bool checkSpawnRulesCallback(::SpawnConditions const& conditions, ::BlockSource& region);

MCAPI bool isSlimeChunk(::ChunkPos const& chunkPos);
// NOLINTEND

} // namespace SlimeSpawnRules
