#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class DesertPyramidPiece : public ::ScatteredFeaturePiece {
public:
    // prevent constructor by default
    DesertPyramidPiece& operator=(DesertPyramidPiece const&);
    DesertPyramidPiece(DesertPyramidPiece const&);
    DesertPyramidPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DesertPyramidPiece() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
