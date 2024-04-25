#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class ShipwreckPiece : public ::StructurePiece {
public:
    // prevent constructor by default
    ShipwreckPiece& operator=(ShipwreckPiece const&);
    ShipwreckPiece(ShipwreckPiece const&);
    ShipwreckPiece();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShipwreckPiece@@UEAA@XZ
    virtual ~ShipwreckPiece() = default;

    // vIndex: 2, symbol: ?getType@ShipwreckPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@ShipwreckPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateTargetPos@ShipwreckPiece@@CA?AVBlockPos@@AEAVBlockSource@@V2@W4Rotation@@1@Z
    MCAPI static class BlockPos
    _calculateTargetPos(class BlockSource& region, class BlockPos origin, ::Rotation rot, class BlockPos size);

    // symbol: ?_calculateTargetPosLegacy@ShipwreckPiece@@CA?AVBlockPos@@AEAVBlockSource@@V2@W4Rotation@@1@Z
    MCAPI static class BlockPos
    _calculateTargetPosLegacy(class BlockSource& region, class BlockPos origin, ::Rotation rot, class BlockPos size);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?STRUCTURE_SHIPWRECK_TYPES@ShipwreckPiece@@0QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STRUCTURE_SHIPWRECK_TYPES[];

    // NOLINTEND
};
