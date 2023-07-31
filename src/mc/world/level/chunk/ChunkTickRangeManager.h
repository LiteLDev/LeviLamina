#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkTickRangeManager {

public:
    // prevent constructor by default
    ChunkTickRangeManager& operator=(ChunkTickRangeManager const&) = delete;
    ChunkTickRangeManager(ChunkTickRangeManager const&)            = delete;
    ChunkTickRangeManager()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ChunkTickRangeManager\@\@QEAA\@II\@Z
     */
    MCAPI ChunkTickRangeManager(unsigned int, unsigned int);
    /**
     * @symbol ?getAdjustedChunkTickRange\@ChunkTickRangeManager\@\@QEAAIAEBVLevelSettings\@\@\@Z
     */
    MCAPI unsigned int getAdjustedChunkTickRange(class LevelSettings const&);
    /**
     * @symbol ?isChunkInTickRange\@ChunkTickRangeManager\@\@QEBA_NAEBVChunkPos\@\@AEBVDimension\@\@_NMHH\@Z
     */
    MCAPI bool isChunkInTickRange(class ChunkPos const&, class Dimension const&, bool, float, int, int) const;
    /**
     * @symbol ?isChunkInTickRange\@ChunkTickRangeManager\@\@QEBA_NAEBVLevelChunk\@\@V?$optional\@H\@std\@\@\@Z
     */
    MCAPI bool isChunkInTickRange(class LevelChunk const&, std::optional<int>) const;
    /**
     * @symbol ?setChunkTickRange\@ChunkTickRangeManager\@\@QEAAXI\@Z
     */
    MCAPI void setChunkTickRange(unsigned int);
    // NOLINTEND
};
