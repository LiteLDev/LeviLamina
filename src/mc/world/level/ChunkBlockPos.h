#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkBlockPos {

public:
    // prevent constructor by default
    ChunkBlockPos& operator=(ChunkBlockPos const&) = delete;
    ChunkBlockPos(ChunkBlockPos const&)            = delete;
    ChunkBlockPos()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ChunkBlockPos\@\@QEAA\@EVChunkLocalHeight\@\@E\@Z
     */
    MCAPI ChunkBlockPos(uint8_t, class ChunkLocalHeight, uint8_t);
    /**
     * @symbol ??0ChunkBlockPos\@\@QEAA\@AEBVBlockPos\@\@F\@Z
     */
    MCAPI ChunkBlockPos(class BlockPos const&, int16_t);
    /**
     * @symbol ?toPos\@ChunkBlockPos\@\@QEBA?AVPos\@\@XZ
     */
    MCAPI class Pos toPos() const;
    /**
     * @symbol ?from2D\@ChunkBlockPos\@\@SA?AV1\@EE\@Z
     */
    MCAPI static class ChunkBlockPos from2D(uint8_t, uint8_t);
    /**
     * @symbol ?fromLegacyIndex\@ChunkBlockPos\@\@SA?AV1\@G\@Z
     */
    MCAPI static class ChunkBlockPos fromLegacyIndex(uint16_t);
    // NOLINTEND
};
