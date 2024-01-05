#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkPos : public ll::math::intN3<SubChunkPos> {
public:
    using intN3::intN3;

public:
    // NOLINTBEGIN
    // symbol: ??0SubChunkPos@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SubChunkPos(class BlockPos const& bp);

    // symbol: ??BSubChunkPos@@QEBA?AVBlockPos@@XZ
    MCAPI explicit operator class BlockPos() const;

    // symbol: ?MAX@SubChunkPos@@2V1@B
    MCAPI static class SubChunkPos const MAX;

    // symbol: ?MIN@SubChunkPos@@2V1@B
    MCAPI static class SubChunkPos const MIN;

    // symbol: ?ONE@SubChunkPos@@2V1@B
    MCAPI static class SubChunkPos const ONE;

    // symbol: ?ZERO@SubChunkPos@@2V1@B
    MCAPI static class SubChunkPos const ZERO;

    // NOLINTEND
};
