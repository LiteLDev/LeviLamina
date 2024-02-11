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
    // vIndex: 0, symbol: __gen_??1JunglePyramidPiece@@UEAA@XZ
    virtual ~JunglePyramidPiece() = default;

    // vIndex: 2, symbol: ?getType@JunglePyramidPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@JunglePyramidPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ??0JunglePyramidPiece@@QEAA@FHH@Z
    MCAPI JunglePyramidPiece(short seaLevel, int west, int north);

    // NOLINTEND
};
