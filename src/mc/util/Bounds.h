#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/Pos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

struct Bounds : public BoundingBox {
public:
    // Bounds inner types define
    enum class Option : int {
        Default = 0x0,
        Flatten = 0x1,
    };

    class Pos mDim;
    int       mArea;
    int       mVolume;
    int       mSide;

public:
    // NOLINTBEGIN
    MCAPI Bounds(class ChunkPos const&, class ChunkPos const&);

    MCAPI Bounds(class BlockPos const&, class BlockPos const&, int, ::Bounds::Option);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class BlockPos const&, class BlockPos const&, int, ::Bounds::Option);

    MCAPI void* ctor$(class ChunkPos const&, class ChunkPos const&);

    // NOLINTEND
};
