#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/Pos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

struct Bounds : public BoundingBox {
public:
    // Bounds inner types define
    enum class Option {
        Default = 0x0,
        Flatten = 0x1,
    };

    class Pos dim;
    int32_t       area;
    int32_t       volume;
    int32_t       side;

    Bounds() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0Bounds@@QEAA@AEBVChunkPos@@0@Z
    MCAPI Bounds(class ChunkPos const&, class ChunkPos const&);

    // symbol: ??0Bounds@@QEAA@AEBVBlockPos@@0HW4Option@0@@Z
    MCAPI Bounds(class BlockPos const&, class BlockPos const&, int, ::Bounds::Option);

    // symbol: ??0Bounds@@QEAA@AEBVBlockPos@@HHFF@Z
    MCAPI Bounds(class BlockPos const&, int, int, short, short);

    // NOLINTEND
};
