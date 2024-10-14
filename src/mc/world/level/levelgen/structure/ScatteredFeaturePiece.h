#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class ScatteredFeaturePiece : public ::StructurePiece {
public:
    // prevent constructor by default
    ScatteredFeaturePiece& operator=(ScatteredFeaturePiece const&);
    ScatteredFeaturePiece(ScatteredFeaturePiece const&);
    ScatteredFeaturePiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScatteredFeaturePiece();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI ScatteredFeaturePiece(int west, int floor, int north, int width, int height, int depth);

    MCAPI bool updateAverageGroundHeight(class BlockSource& region, class BoundingBox const& chunkBB, int offset);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
