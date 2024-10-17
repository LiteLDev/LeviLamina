#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkPos : public ll::math::intN3<SubChunkPos> {
public:
    using intN3::intN3;

public:
    // NOLINTBEGIN
    MCAPI explicit SubChunkPos(class BlockPos const& bp);

    MCAPI explicit operator class BlockPos() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class BlockPos const& bp);

    MCAPI static class SubChunkPos const& MAX();

    MCAPI static class SubChunkPos const& MIN();

    MCAPI static class SubChunkPos const& ONE();

    MCAPI static class SubChunkPos const& ZERO();

    // NOLINTEND
};
