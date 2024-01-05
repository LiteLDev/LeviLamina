#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NetherFortressPiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NBMonsterThrone : public ::NetherFortressPiece {
public:
    // prevent constructor by default
    NBMonsterThrone& operator=(NBMonsterThrone const&);
    NBMonsterThrone(NBMonsterThrone const&);
    NBMonsterThrone();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NBMonsterThrone@@UEAA@XZ
    virtual ~NBMonsterThrone() = default;

    // vIndex: 2, symbol: ?getType@NBMonsterThrone@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // vIndex: 4, symbol: ?postProcess@NBMonsterThrone@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
