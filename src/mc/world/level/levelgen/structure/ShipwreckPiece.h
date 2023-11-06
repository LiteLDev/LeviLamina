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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ShipwreckPiece();

    // vIndex: 2, symbol: ?getType@ShipwreckPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@ShipwreckPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateTargetPos@ShipwreckPiece@@CA?AVBlockPos@@AEAVBlockSource@@V2@W4Rotation@@1@Z
    MCAPI static class BlockPos _calculateTargetPos(class BlockSource&, class BlockPos, ::Rotation, class BlockPos);

    // symbol: ?_calculateTargetPosLegacy@ShipwreckPiece@@CA?AVBlockPos@@AEAVBlockSource@@V2@W4Rotation@@1@Z
    MCAPI static class BlockPos
    _calculateTargetPosLegacy(class BlockSource&, class BlockPos, ::Rotation, class BlockPos);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?STRUCTURE_SHIPWRECK_TYPES@ShipwreckPiece@@0QBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STRUCTURE_SHIPWRECK_TYPES[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $STRUCTURE_SHIPWRECK_TYPES() { return STRUCTURE_SHIPWRECK_TYPES; }

    // NOLINTEND
};
