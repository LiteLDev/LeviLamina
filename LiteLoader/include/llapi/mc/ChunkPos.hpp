/**
 * @file  ChunkPos.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkPos.
 *
 */
class ChunkPos {

#define AFTER_EXTRA
// Add Member There
public:
    int       x, z;
    long long hash() {
        return *((long long*)this);
    }
    ChunkPos(int ix, int iz)
        : x(ix)
        , z(iz){};
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKPOS
public:
    class ChunkPos& operator=(class ChunkPos const &) = delete;
    ChunkPos(class ChunkPos const &) = delete;
    ChunkPos() = delete;
#endif

public:
    /**
     * @hash   1402461226
     * @symbol  ??0ChunkPos\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI ChunkPos(class Vec3 const &);
    /**
     * @hash   969423290
     * @symbol  ??0ChunkPos\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ChunkPos(class BlockPos const &);
    /**
     * @hash   -713436317
     * @symbol  ?isWithinBounds\@ChunkPos\@\@QEBA_NAEBV1\@0\@Z
     */
    MCAPI bool isWithinBounds(class ChunkPos const &, class ChunkPos const &) const;
    /**
     * @hash   1735636741
     * @symbol  ?toBlockSpaceVec3\@ChunkPos\@\@QEBA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 toBlockSpaceVec3(float) const;
    /**
     * @hash   -1364462007
     * @symbol  ?INVALID\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const INVALID;
    /**
     * @hash   1349047033
     * @symbol  ?MAX\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const MAX;
    /**
     * @hash   488818609
     * @symbol  ?MIN\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const MIN;
    /**
     * @hash   2037351489
     * @symbol  ?ONE\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const ONE;

};