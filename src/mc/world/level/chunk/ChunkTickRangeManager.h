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
    // symbol: ??0ChunkTickRangeManager@@QEAA@II@Z
    MCAPI ChunkTickRangeManager(uint, uint);

    // symbol: ?getAdjustedChunkTickRange@ChunkTickRangeManager@@QEAAIAEBVLevelSettings@@@Z
    MCAPI uint getAdjustedChunkTickRange(class LevelSettings const& levelSettings);

    // symbol: ?isChunkInTickRange@ChunkTickRangeManager@@QEBA_NAEBVLevelChunk@@V?$optional@H@std@@@Z
    MCAPI bool isChunkInTickRange(class LevelChunk const& lc, std::optional<int>) const;

    // symbol: ?isChunkInTickRange@ChunkTickRangeManager@@QEBA_NAEBVChunkPos@@AEBVDimension@@_NMHH@Z
    MCAPI bool
    isChunkInTickRange(class ChunkPos const& chunkPos, class Dimension const& dimension, bool, float, int, int) const;

    // symbol: ?setChunkTickRange@ChunkTickRangeManager@@QEAAXI@Z
    MCAPI void setChunkTickRange(uint);

    // NOLINTEND
};
