#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkTickRangeManager {
public:
    // prevent constructor by default
    ChunkTickRangeManager& operator=(ChunkTickRangeManager const&);
    ChunkTickRangeManager(ChunkTickRangeManager const&);
    ChunkTickRangeManager();

public:
    // NOLINTBEGIN
    MCAPI ChunkTickRangeManager(uint, uint);

    MCAPI uint getAdjustedChunkTickRange(class LevelSettings const& levelSettings);

    MCAPI bool isChunkInTickRange(class LevelChunk const& lc, std::optional<int>) const;

    MCAPI bool
    isChunkInTickRange(class ChunkPos const& chunkPos, class Dimension const& dimension, bool, float, int, int) const;

    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector&);

    MCAPI void setChunkTickRange(uint);

    MCAPI ~ChunkTickRangeManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onChunkLoaded(class ChunkSource&, class LevelChunk&, int);

    // NOLINTEND
};
