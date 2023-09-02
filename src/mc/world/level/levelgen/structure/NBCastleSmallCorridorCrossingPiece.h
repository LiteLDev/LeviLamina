#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NBCastleSmallCorridorCrossingPiece : public ::NetherFortressPiece {
public:
    // prevent constructor by default
    NBCastleSmallCorridorCrossingPiece& operator=(NBCastleSmallCorridorCrossingPiece const&) = delete;
    NBCastleSmallCorridorCrossingPiece(NBCastleSmallCorridorCrossingPiece const&)            = delete;
    NBCastleSmallCorridorCrossingPiece()                                                     = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getType@NBCastleSmallCorridorCrossingPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 3, symbol:
    // ?addChildren@NBCastleSmallCorridorCrossingPiece@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

    // vIndex: 4, symbol:
    // ?postProcess@NBCastleSmallCorridorCrossingPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND
};
