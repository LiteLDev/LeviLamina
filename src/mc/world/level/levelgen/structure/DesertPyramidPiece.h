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
    // vIndex: 0, symbol: __gen_??1DesertPyramidPiece@@UEAA@XZ
    virtual ~DesertPyramidPiece() = default;

    // vIndex: 2, symbol: ?getType@DesertPyramidPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@DesertPyramidPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ??0DesertPyramidPiece@@QEAA@FHH@Z
    MCAPI DesertPyramidPiece(short seaLevel, int west, int north);

    // NOLINTEND
};
