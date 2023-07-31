#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Seasons {

public:
    // prevent constructor by default
    Seasons& operator=(Seasons const&) = delete;
    Seasons(Seasons const&)            = delete;
    Seasons()                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Seasons\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI Seasons(class Dimension&);
    /**
     * @symbol ?postProcess\@Seasons\@\@QEAAXAEAVLevelChunk\@\@AEAVBlockSource\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void postProcess(class LevelChunk&, class BlockSource&, class ChunkPos const&);
    /**
     * @symbol ?tick\@Seasons\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol ??1Seasons\@\@QEAA\@XZ
     */
    MCAPI ~Seasons();
    // NOLINTEND
};
