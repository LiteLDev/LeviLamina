#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Seasons {

public:
    // prevent constructor by default
    Seasons& operator=(Seasons const&) = delete;
    Seasons(Seasons const&)            = delete;
    Seasons()                          = delete;

public:
    /**
     * @symbol ??0Seasons\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI Seasons(class Dimension&); // NOLINT
    /**
     * @symbol ?postProcess\@Seasons\@\@QEAAXAEAVLevelChunk\@\@AEAVBlockSource\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void postProcess(class LevelChunk&, class BlockSource&, class ChunkPos const&); // NOLINT
    /**
     * @symbol ?tick\@Seasons\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol ??1Seasons\@\@QEAA\@XZ
     */
    MCAPI ~Seasons(); // NOLINT
};
