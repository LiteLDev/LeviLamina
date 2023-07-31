#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkPos {

public:
    // prevent constructor by default
    SubChunkPos& operator=(SubChunkPos const&) = delete;
    SubChunkPos(SubChunkPos const&)            = delete;
    SubChunkPos()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SubChunkPos\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SubChunkPos(class BlockPos const&);
    /**
     * @symbol ??BSubChunkPos\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI operator class BlockPos() const;
    /**
     * @symbol ?MAX\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MAX;
    /**
     * @symbol ?MIN\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MIN;
    /**
     * @symbol ?ONE\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ONE;
    /**
     * @symbol ?ZERO\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ZERO;
    // NOLINTEND
};
