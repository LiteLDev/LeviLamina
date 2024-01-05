#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class MineshaftStairs : public ::MineshaftPiece {
public:
    // prevent constructor by default
    MineshaftStairs& operator=(MineshaftStairs const&);
    MineshaftStairs(MineshaftStairs const&);
    MineshaftStairs();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MineshaftStairs@@UEAA@XZ
    virtual ~MineshaftStairs() = default;

    // vIndex: 2, symbol: ?getType@MineshaftStairs@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 3, symbol:
    // ?addChildren@MineshaftStairs@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4, symbol: ?postProcess@MineshaftStairs@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random&, class BoundingBox const& chunkBB);

    // NOLINTEND
};
