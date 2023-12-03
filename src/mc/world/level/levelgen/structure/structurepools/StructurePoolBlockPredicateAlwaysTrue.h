#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateAlwaysTrue : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateAlwaysTrue& operator=(StructurePoolBlockPredicateAlwaysTrue const&);
    StructurePoolBlockPredicateAlwaysTrue(StructurePoolBlockPredicateAlwaysTrue const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StructurePoolBlockPredicateAlwaysTrue@@UEAA@XZ
    virtual ~StructurePoolBlockPredicateAlwaysTrue() = default;

    // symbol: ?test@StructurePoolBlockPredicateAlwaysTrue@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
    MCVAPI bool test(class Block const&, class Randomize&) const;

    // symbol: ?test@StructurePoolBlockPredicateAlwaysTrue@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
    MCVAPI bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // symbol: ??0StructurePoolBlockPredicateAlwaysTrue@@QEAA@XZ
    MCAPI StructurePoolBlockPredicateAlwaysTrue();

    // NOLINTEND
};
