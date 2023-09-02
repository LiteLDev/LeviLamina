#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NBMonsterThrone : public ::NetherFortressPiece {
public:
    // prevent constructor by default
    NBMonsterThrone& operator=(NBMonsterThrone const&) = delete;
    NBMonsterThrone(NBMonsterThrone const&)            = delete;
    NBMonsterThrone()                                  = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getType@NBMonsterThrone@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@NBMonsterThrone@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // NOLINTEND
};
