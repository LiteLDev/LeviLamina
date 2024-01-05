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
    // vIndex: 0, symbol: __gen_??1MineshaftCrossing@@UEAA@XZ
    virtual ~MineshaftCrossing() = default;

    // vIndex: 2, symbol: ?getType@MineshaftCrossing@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 3, symbol:
    // ?addChildren@MineshaftCrossing@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4, symbol: ?postProcess@MineshaftCrossing@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random&, class BoundingBox const& chunkBB);

    // symbol: ?_placeSupportPillar@MineshaftCrossing@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHH@Z
    MCAPI void
    _placeSupportPillar(class BlockSource& region, class BoundingBox const& chunkBB, int x, int y0, int z, int y1);

    // NOLINTEND
};
