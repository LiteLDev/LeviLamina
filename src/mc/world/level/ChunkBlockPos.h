#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkBlockPos {
public:
    // prevent constructor by default
    ChunkBlockPos& operator=(ChunkBlockPos const&);
    ChunkBlockPos(ChunkBlockPos const&);
    ChunkBlockPos();

public:
    // NOLINTBEGIN
    // symbol: ??0ChunkBlockPos@@QEAA@AEBVBlockPos@@F@Z
    MCAPI ChunkBlockPos(class BlockPos const& pos, short minDimensionHeight);

    // symbol: ??0ChunkBlockPos@@QEAA@EVChunkLocalHeight@@E@Z
    MCAPI ChunkBlockPos(uchar _x, class ChunkLocalHeight _y, uchar _z);

    // symbol: ?toPos@ChunkBlockPos@@QEBA?AVPos@@XZ
    MCAPI class Pos toPos() const;

    // symbol: ?from2D@ChunkBlockPos@@SA?AV1@EE@Z
    MCAPI static class ChunkBlockPos from2D(uchar x, uchar z);

    // symbol: ?fromLegacyIndex@ChunkBlockPos@@SA?AV1@G@Z
    MCAPI static class ChunkBlockPos fromLegacyIndex(ushort idx);

    // NOLINTEND
};
