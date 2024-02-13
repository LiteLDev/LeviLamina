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

    // vIndex: 1, symbol: ?test@StructurePoolBlockPredicateAlwaysTrue@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
    virtual bool test(class Block const& block, class Randomize& randomize) const;

    // vIndex: 2, symbol: ?test@StructurePoolBlockPredicateAlwaysTrue@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // vIndex: 3, symbol: ?finalize@IStructurePoolBlockPredicate@@UEAA_NAEAVBlockSource@@AEAVIRandom@@@Z
    virtual bool finalize(class BlockSource&, class IRandom&);

    // symbol: ??0StructurePoolBlockPredicateAlwaysTrue@@QEAA@XZ
    MCAPI StructurePoolBlockPredicateAlwaysTrue();

    // NOLINTEND
};
