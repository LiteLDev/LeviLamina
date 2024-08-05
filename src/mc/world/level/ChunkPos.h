#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkPos {
public:
    // prevent constructor by default
    ChunkPos& operator=(ChunkPos const&);
    ChunkPos(ChunkPos const&);
    ChunkPos();

public:
    // NOLINTBEGIN
    MCAPI explicit ChunkPos(class BlockPos const& pos);

    MCAPI explicit ChunkPos(class Vec3 const& pos);

    MCAPI bool isWithinBounds(class ChunkPos const& min, class ChunkPos const& max) const;

    MCAPI class Vec3 toBlockSpaceVec3(float y) const;

    MCAPI static class ChunkPos const INVALID;

    MCAPI static class ChunkPos const MAX;

    MCAPI static class ChunkPos const MIN;

    MCAPI static class ChunkPos const ONE;

    // NOLINTEND
};
