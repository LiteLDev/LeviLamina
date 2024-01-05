#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MineshaftPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class MineshaftCorridor : public ::MineshaftPiece {
public:
    // prevent constructor by default
    MineshaftCorridor& operator=(MineshaftCorridor const&);
    MineshaftCorridor(MineshaftCorridor const&);
    MineshaftCorridor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MineshaftCorridor@@UEAA@XZ
    virtual ~MineshaftCorridor() = default;

    // vIndex: 2, symbol: ?getType@MineshaftCorridor@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 3, symbol:
    // ?addChildren@MineshaftCorridor@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4, symbol: ?postProcess@MineshaftCorridor@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // vIndex: 5, symbol: ?postProcessMobsAt@MineshaftCorridor@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ?_placeCobWeb@MineshaftCorridor@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@AEAVRandom@@MHHH@Z
    MCAPI void _placeCobWeb(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        class Random&            random,
        float                    p,
        int                      x0,
        int                      y1,
        int                      z
    );

    // symbol: ?_placeSupport@MineshaftCorridor@@QEAAXAEAVBlockSource@@AEBVBoundingBox@@HHHHHAEAVRandom@@@Z
    MCAPI void _placeSupport(
        class BlockSource&       region,
        class BoundingBox const& chunkBB,
        int                      x0,
        int                      y0,
        int                      z,
        int                      y1,
        int                      x1,
        class Random&            random
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fillPillarDownOrChainUp@MineshaftCorridor@@AEAAXAEAVBlockSource@@HHHAEBVBoundingBox@@@Z
    MCAPI void
    _fillPillarDownOrChainUp(class BlockSource& region, int x, int y, int z, class BoundingBox const& chunkBB);

    // symbol: ?_placeDoubleLowerOrUpperSupport@MineshaftCorridor@@AEAAXAEAVBlockSource@@AEBVBoundingBox@@HHH@Z
    MCAPI void
    _placeDoubleLowerOrUpperSupport(class BlockSource& region, class BoundingBox const& chunkBB, int x, int y, int z);

    // NOLINTEND
};
