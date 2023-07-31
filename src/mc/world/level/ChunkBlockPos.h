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
    MCAPI ChunkBlockPos(unsigned char, class ChunkLocalHeight, unsigned char);
    /**
     * @symbol ??0ChunkBlockPos\@\@QEAA\@AEBVBlockPos\@\@F\@Z
     */
    MCAPI ChunkBlockPos(class BlockPos const&, short);
    /**
     * @symbol ?toPos\@ChunkBlockPos\@\@QEBA?AVPos\@\@XZ
     */
    MCAPI class Pos toPos() const;
    /**
     * @symbol ?from2D\@ChunkBlockPos\@\@SA?AV1\@EE\@Z
     */
    MCAPI static class ChunkBlockPos from2D(unsigned char, unsigned char);
    /**
     * @symbol ?fromLegacyIndex\@ChunkBlockPos\@\@SA?AV1\@G\@Z
     */
    MCAPI static class ChunkBlockPos fromLegacyIndex(unsigned short);
    // NOLINTEND
};
