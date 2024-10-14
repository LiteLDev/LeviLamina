#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class StructureStart {
public:
    BoundingBox                                  mBoundingBox;
    int                                          mChunkX;
    int                                          mChunkZ;
    std::vector<std::unique_ptr<StructurePiece>> mPieces;

public:
    // prevent constructor by default
    StructureStart& operator=(StructureStart const&);
    StructureStart(StructureStart const&);
    StructureStart();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureStart();

    // vIndex: 1
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 2
    virtual bool isValid() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void calculateBoundingBox();

    MCAPI void moveBoundingBoxes(int yOffset);

    MCAPI void moveInsideHeights(class Random& random, short lowestAllowed, short highestAllowed);

    MCAPI void moveToBelowSeaLevel(short seaLevel, short minYPos, class Random& random, int offset);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI bool isValid$() const;

    MCAPI bool postProcess$(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
