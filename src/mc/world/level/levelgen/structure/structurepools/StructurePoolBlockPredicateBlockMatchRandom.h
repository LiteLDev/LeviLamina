#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateBlockMatchRandom : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateBlockMatchRandom& operator=(StructurePoolBlockPredicateBlockMatchRandom const&);
    StructurePoolBlockPredicateBlockMatchRandom(StructurePoolBlockPredicateBlockMatchRandom const&);
    StructurePoolBlockPredicateBlockMatchRandom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~StructurePoolBlockPredicateBlockMatchRandom() = default;

    // vIndex: 1, symbol: ?test@StructurePoolBlockPredicateBlockMatchRandom@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
    virtual bool test(class Block const&, class Randomize&) const;

    // vIndex: 2, symbol: ?test@StructurePoolBlockPredicateBlockMatchRandom@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // symbol: ??0StructurePoolBlockPredicateBlockMatchRandom@@QEAA@AEBVBlock@@M@Z
    MCAPI StructurePoolBlockPredicateBlockMatchRandom(class Block const&, float);

    // NOLINTEND
};
