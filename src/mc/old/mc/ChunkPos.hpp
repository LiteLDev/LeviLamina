/**
 * @file  ChunkPos.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "VectorBase.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkPos.
 *
 */
class ChunkPos {

#define AFTER_EXTRA
    // Add Member There
public:
    int x, z;
    ChunkPos() = default;
    ChunkPos(int ix, int iz) : x(ix), z(iz){};

    constexpr int& operator[](size_t index) {
        switch (index) {
            case 1:
                return z;
            default:
                return x;
        }
    }

    constexpr int operator[](size_t index) const {
        switch (index) {
            case 1:
                return z;
            default:
                return x;
        }
    }

#define DISABLE_CONSTRUCTOR_PREVENTION_CHUNKPOS

    FAKE_CRTP(ChunkPos, int, 2);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKPOS
public:
    class ChunkPos& operator=(class ChunkPos const &) = delete;
    ChunkPos(class ChunkPos const &) = delete;
    ChunkPos() = delete;
#endif

public:
    /**
     * @symbol  ??0ChunkPos\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI ChunkPos(class Vec3 const &);
    /**
     * @symbol  ??0ChunkPos\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ChunkPos(class BlockPos const &);
    /**
     * @symbol  ?isWithinBounds\@ChunkPos\@\@QEBA_NAEBV1\@0\@Z
     */
    MCAPI bool isWithinBounds(class ChunkPos const &, class ChunkPos const &) const;
    /**
     * @symbol  ?toBlockSpaceVec3\@ChunkPos\@\@QEBA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 toBlockSpaceVec3(float) const;
    /**
     * @symbol  ?INVALID\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const INVALID;
    /**
     * @symbol  ?MAX\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const MAX;
    /**
     * @symbol  ?MIN\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const MIN;
    /**
     * @symbol  ?ONE\@ChunkPos\@\@2V1\@B
     */
    MCAPI static class ChunkPos const ONE;

};