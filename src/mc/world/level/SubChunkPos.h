#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkPos {

public:
    // prevent constructor by default
    SubChunkPos& operator=(SubChunkPos const&) = delete;
    SubChunkPos(SubChunkPos const&)            = delete;
    SubChunkPos()                              = delete;

public:
    /**
     * @symbol ??0SubChunkPos\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SubChunkPos(class BlockPos const&); // NOLINT
    /**
     * @symbol ??BSubChunkPos\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI operator class BlockPos() const; // NOLINT
    /**
     * @symbol ?MAX\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MAX; // NOLINT
    /**
     * @symbol ?MIN\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MIN; // NOLINT
    /**
     * @symbol ?ONE\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ONE; // NOLINT
    /**
     * @symbol ?ZERO\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ZERO; // NOLINT
};
