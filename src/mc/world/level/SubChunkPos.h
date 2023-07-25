#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkPos {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPOS
public:
    SubChunkPos& operator=(SubChunkPos const&) = delete;
    SubChunkPos(SubChunkPos const&)            = delete;
    SubChunkPos()                              = delete;
#endif

public:
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
};
