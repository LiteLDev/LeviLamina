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
    // symbol: ??0Bounds@@QEAA@AEBVChunkPos@@0@Z
    MCAPI Bounds(class ChunkPos const&, class ChunkPos const&);

    // symbol: ??0Bounds@@QEAA@AEBVBlockPos@@0HW4Option@0@@Z
    MCAPI
    Bounds(class BlockPos const& minBlock, class BlockPos const& maxBlock, int side, ::Bounds::Option buildOption);

    // NOLINTEND
};
