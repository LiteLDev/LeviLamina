/**
 * @file  ChunkBlockPos.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "VectorBase.hpp"

class ChunkLocalHeight {
public:
    short mVal;
    ChunkLocalHeight(short v) : mVal(v){};
    ChunkLocalHeight() : mVal(0){};
};

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkBlockPos.
 *
 */
class ChunkBlockPos {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLOCKPOS
public:
    char x;
    char z;
    ChunkLocalHeight y;
    ChunkBlockPos() : x(0), y(0), z(0){};

    ChunkBlockPos(char x, short y, char z) : x(x), y(y), z(z){};

    inline unsigned short toLegacyIndex() {
        return (y.mVal & 0xF) + 16 * (z + 16 * x);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLOCKPOS
public:
    class ChunkBlockPos& operator=(class ChunkBlockPos const &) = delete;
    ChunkBlockPos(class ChunkBlockPos const &) = delete;
    ChunkBlockPos() = delete;
#endif

public:
    /**
     * @symbol  ??0ChunkBlockPos\@\@QEAA\@EVChunkLocalHeight\@\@E\@Z
     */
    MCAPI ChunkBlockPos(unsigned char, class ChunkLocalHeight, unsigned char);
    /**
     * @symbol  ??0ChunkBlockPos\@\@QEAA\@AEBVBlockPos\@\@F\@Z
     */
    MCAPI ChunkBlockPos(class BlockPos const &, short);
    /**
     * @symbol  ?toPos\@ChunkBlockPos\@\@QEBA?AVPos\@\@XZ
     */
    MCAPI class Pos toPos() const;
    /**
     * @symbol  ?from2D\@ChunkBlockPos\@\@SA?AV1\@EE\@Z
     */
    MCAPI static class ChunkBlockPos from2D(unsigned char, unsigned char);
    /**
     * @symbol  ?fromLegacyIndex\@ChunkBlockPos\@\@SA?AV1\@G\@Z
     */
    MCAPI static class ChunkBlockPos fromLegacyIndex(unsigned short);

};