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
    // vIndex: 0, symbol: ??1StructureStart@@UEAA@XZ
    virtual ~StructureStart();

    // vIndex: 1, symbol: ?postProcess@StructureStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 2, symbol: ?isValid@StructureStart@@UEBA_NXZ
    virtual bool isValid() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?calculateBoundingBox@StructureStart@@IEAAXXZ
    MCAPI void calculateBoundingBox();

    // symbol: ?moveBoundingBoxes@StructureStart@@IEAAXH@Z
    MCAPI void moveBoundingBoxes(int yOffset);

    // symbol: ?moveInsideHeights@StructureStart@@IEAAXAEAVRandom@@FF@Z
    MCAPI void moveInsideHeights(class Random& random, short lowestAllowed, short highestAllowed);

    // symbol: ?moveToBelowSeaLevel@StructureStart@@IEAAXFFAEAVRandom@@H@Z
    MCAPI void moveToBelowSeaLevel(short seaLevel, short, class Random& random, int offset);

    // NOLINTEND
};
