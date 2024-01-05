#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SHStairsDown : public ::StrongholdPiece {
public:
    // prevent constructor by default
    SHStairsDown& operator=(SHStairsDown const&);
    SHStairsDown(SHStairsDown const&);
    SHStairsDown();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SHStairsDown@@UEAA@XZ
    virtual ~SHStairsDown() = default;

    // vIndex: 2, symbol: ?getType@SHStairsDown@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 3, symbol:
    // ?addChildren@SHStairsDown@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4, symbol: ?postProcess@SHStairsDown@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
