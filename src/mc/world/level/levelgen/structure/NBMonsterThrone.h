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
    // vIndex: 0
    virtual ~NBMonsterThrone() = default;

    // vIndex: 2
    virtual ::StructurePieceType getType() const;

    // vIndex: 4
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // NOLINTEND
};
