#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class BuriedTreasurePiece : public ::StructurePiece {
public:
    // prevent constructor by default
    BuriedTreasurePiece& operator=(BuriedTreasurePiece const&);
    BuriedTreasurePiece(BuriedTreasurePiece const&);
    BuriedTreasurePiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BuriedTreasurePiece() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isCovered(class BlockSource const& region, class BlockPos const& blockPos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
