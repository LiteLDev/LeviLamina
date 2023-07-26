#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkPos {

public:
    // prevent constructor by default
    ChunkPos& operator=(ChunkPos const&) = delete;
    ChunkPos(ChunkPos const&)            = delete;
    ChunkPos()                           = delete;

public:
    /**
     * @symbol ??0ChunkPos\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI ChunkPos(class Vec3 const&); // NOLINT
    /**
     * @symbol ??0ChunkPos\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ChunkPos(class BlockPos const&); // NOLINT
    /**
     * @symbol ?isWithinBounds\@ChunkPos\@\@QEBA_NAEBV1\@0\@Z
     */
    MCAPI bool isWithinBounds(class ChunkPos const&, class ChunkPos const&) const; // NOLINT
    /**
     * @symbol ?toBlockSpaceVec3\@ChunkPos\@\@QEBA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 toBlockSpaceVec3(float) const; // NOLINT
    /**
     * @symbol ?INVALID\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const INVALID; // NOLINT
    /**
     * @symbol ?MAX\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const MAX; // NOLINT
    /**
     * @symbol ?MIN\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const MIN; // NOLINT
    /**
     * @symbol ?ONE\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const ONE; // NOLINT
};
