#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/Pos.h"

struct Bounds {
public:
    // Bounds inner types define
    enum class Option {
        Default = 0x0,
        Flatten = 0x1,
    };

    struct Iterator {
        class Pos            mPos;
        struct Bounds const* mBounds;
        int                  mIdx;
    };

    class Pos mMin;
    class Pos mMax;
    class Pos mDim;
    int       mArea;
    int       mVolume;
    int       mSide;

    Bounds() = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Bounds\@\@QEAA\@AEBVChunkPos\@\@0\@Z
     */
    MCAPI Bounds(class ChunkPos const&, class ChunkPos const&);
    /**
     * @symbol ??0Bounds\@\@QEAA\@AEBVBlockPos\@\@0HW4Option\@0\@\@Z
     */
    MCAPI Bounds(class BlockPos const&, class BlockPos const&, int, enum class Bounds::Option);
    /**
     * @symbol ??0Bounds\@\@QEAA\@AEBVBlockPos\@\@HHFF\@Z
     */
    MCAPI Bounds(class BlockPos const&, int, int, short, short);
    // NOLINTEND
};
