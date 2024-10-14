#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class MineshaftCrossing : public ::MineshaftPiece {
public:
    // prevent constructor by default
    MineshaftCrossing& operator=(MineshaftCrossing const&);
    MineshaftCrossing(MineshaftCrossing const&);
    MineshaftCrossing();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MineshaftCrossing() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 3
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random&, class BoundingBox const& chunkBB);

    MCAPI void
    _placeSupportPillar(class BlockSource& region, class BoundingBox const& chunkBB, int x, int y0, int z, int y1);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void addChildren$(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    MCAPI ::StructurePieceType getType$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random&, class BoundingBox const& chunkBB);

    // NOLINTEND
};
