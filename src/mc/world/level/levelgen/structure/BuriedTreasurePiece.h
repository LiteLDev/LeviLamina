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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BuriedTreasurePiece() = default;

    // vIndex: 2, symbol: ?getType@BuriedTreasurePiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@BuriedTreasurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isCovered@BuriedTreasurePiece@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _isCovered(class BlockSource const&, class BlockPos const&) const;

    // NOLINTEND
};
