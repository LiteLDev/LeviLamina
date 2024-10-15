#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkPos {
public:
    // prevent constructor by default
    SubChunkPos& operator=(SubChunkPos const&);
    SubChunkPos(SubChunkPos const&);
    SubChunkPos();

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
