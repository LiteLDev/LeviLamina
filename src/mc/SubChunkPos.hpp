/**
 * @file  SubChunkPos.hpp
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
 * @brief MC class SubChunkPos.
 *
 */
class SubChunkPos {

#define AFTER_EXTRA
    // Add Member There
public:
    int x;
    int y;
    int z;
    SubChunkPos() = default;

    inline SubChunkPos(int ix, int iy, int iz) : x(ix), y(iy), z(iz) {}

    constexpr int& operator[](size_t index) {
        switch (index) {
            case 1:
                return y;
            case 2:
                return z;
            default:
                return x;
        }
    }

    constexpr int operator[](size_t index) const {
        switch (index) {
            case 1:
                return y;
            case 2:
                return z;
            default:
                return x;
        }
    }

#define DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPOS

    FAKE_CRTP(SubChunkPos, int, 3);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPOS
public:
    class SubChunkPos& operator=(class SubChunkPos const &) = delete;
    SubChunkPos(class SubChunkPos const &) = delete;
    SubChunkPos() = delete;
#endif

public:
    /**
     * @symbol  ??0SubChunkPos\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SubChunkPos(class BlockPos const &);
    /**
     * @symbol  ??BSubChunkPos\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI operator class BlockPos() const;
    /**
     * @symbol  ?MAX\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MAX;
    /**
     * @symbol  ?MIN\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MIN;
    /**
     * @symbol  ?ONE\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ONE;
    /**
     * @symbol  ?ZERO\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ZERO;

};