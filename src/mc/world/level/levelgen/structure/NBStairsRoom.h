#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NBStairsRoom : public ::NetherFortressPiece {
public:
    // prevent constructor by default
    NBStairsRoom& operator=(NBStairsRoom const&);
    NBStairsRoom(NBStairsRoom const&);
    NBStairsRoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NBStairsRoom@@UEAA@XZ
    virtual ~NBStairsRoom() = default;

    // vIndex: 2, symbol: ?getType@NBStairsRoom@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 3, symbol:
    // ?addChildren@NBStairsRoom@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    virtual void addChildren(
        class StructurePiece&                               startPiece,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random
    );

    // vIndex: 4, symbol: ?postProcess@NBStairsRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
