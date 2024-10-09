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
    MCAPI ChunkTickRangeManager(uint chunkTickRange, uint maxSimRadiusInChunks);

    MCAPI uint getAdjustedChunkTickRange(class LevelSettings const& levelSettings);

    MCAPI bool isChunkInTickRange(class LevelChunk const& lc, std::optional<int> minDistToPlayer) const;

    MCAPI bool isChunkInTickRange(
        class ChunkPos const&  chunkPos,
        class Dimension const& dimension,
        bool                   shouldServerGenerate,
        float                  serverBuildRatio,
        int                    chunkViewRadius,
        int                    numActiveUsers
    ) const;

    MCAPI void registerForLevelChunkEvents(class ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void setChunkTickRange(uint chunkTickRange);

    MCAPI ~ChunkTickRangeManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onChunkLoaded(class ChunkSource&, class LevelChunk& levelChunk, int closestPlayerDistanceSquared);

    // NOLINTEND
};
