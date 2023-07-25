#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkPos {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKPOS
public:
    ChunkPos& operator=(ChunkPos const&) = delete;
    ChunkPos(ChunkPos const&)            = delete;
    ChunkPos()                           = delete;
#endif

public:
    /**
     * @symbol ??0ChunkPos\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI ChunkPos(class Vec3 const&);
    /**
     * @symbol ??0ChunkPos\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ChunkPos(class BlockPos const&);
    /**
     * @symbol ?isWithinBounds\@ChunkPos\@\@QEBA_NAEBV1\@0\@Z
     */
    MCAPI bool isWithinBounds(class ChunkPos const&, class ChunkPos const&) const;
    /**
     * @symbol ?toBlockSpaceVec3\@ChunkPos\@\@QEBA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 toBlockSpaceVec3(float) const;
    /**
     * @symbol ?INVALID\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const INVALID;
    /**
     * @symbol ?MAX\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const MAX;
    /**
     * @symbol ?MIN\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const MIN;
    /**
     * @symbol ?ONE\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const ONE;
};
