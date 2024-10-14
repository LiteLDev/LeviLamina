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
    MCAPI ChunkBlockPos(class BlockPos const& pos, short minDimensionHeight);

    MCAPI ChunkBlockPos(uchar _x, class ChunkLocalHeight _y, uchar _z);

    MCAPI class Pos toPos() const;

    MCAPI static class ChunkBlockPos from2D(uchar x, uchar z);

    MCAPI static class ChunkBlockPos fromLegacyIndex(ushort idx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
