/**
 * @file  SubChunkPos.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

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
    inline SubChunkPos(int ix, int iy, int iz)
        : x(ix)
        , y(iy)
        , z(iz) {}
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPOS
public:
    class SubChunkPos& operator=(class SubChunkPos const &) = delete;
    SubChunkPos(class SubChunkPos const &) = delete;
    SubChunkPos() = delete;
#endif

public:
    /**
     * @hash   -353173606
     * @symbol  ??0SubChunkPos\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SubChunkPos(class BlockPos const &);
    /**
     * @hash   -871578905
     * @symbol  ??BSubChunkPos\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI operator class BlockPos() const;
    /**
     * @hash   628399179
     * @symbol  ?MAX\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MAX;
    /**
     * @hash   -389908457
     * @symbol  ?MIN\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MIN;
    /**
     * @hash   506987615
     * @symbol  ?ONE\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ONE;
    /**
     * @hash   -1647167031
     * @symbol  ?ZERO\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ZERO;

};