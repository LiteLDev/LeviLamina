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
    // vIndex: 0, symbol: ??1ScatteredFeaturePiece@@UEAA@XZ
    virtual ~ScatteredFeaturePiece();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0ScatteredFeaturePiece@@IEAA@HHHHHH@Z
    MCAPI ScatteredFeaturePiece(int west, int floor, int north, int width, int height, int depth);

    // symbol: ?updateAverageGroundHeight@ScatteredFeaturePiece@@IEAA_NAEAVBlockSource@@AEBVBoundingBox@@H@Z
    MCAPI bool updateAverageGroundHeight(class BlockSource& region, class BoundingBox const& chunkBB, int offset);

    // NOLINTEND
};
