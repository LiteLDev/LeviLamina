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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
