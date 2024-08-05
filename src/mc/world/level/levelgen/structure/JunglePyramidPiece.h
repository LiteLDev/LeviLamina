#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ScatteredFeaturePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class JunglePyramidPiece : public ::ScatteredFeaturePiece {
public:
    // prevent constructor by default
    JunglePyramidPiece& operator=(JunglePyramidPiece const&);
    JunglePyramidPiece(JunglePyramidPiece const&);
    JunglePyramidPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JunglePyramidPiece() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
