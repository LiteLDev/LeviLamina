#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateBlockMatch : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateBlockMatch& operator=(StructurePoolBlockPredicateBlockMatch const&);
    StructurePoolBlockPredicateBlockMatch(StructurePoolBlockPredicateBlockMatch const&);
    StructurePoolBlockPredicateBlockMatch();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StructurePoolBlockPredicateBlockMatch@@UEAA@XZ
    virtual ~StructurePoolBlockPredicateBlockMatch() = default;

    // vIndex: 1, symbol: ?test@StructurePoolBlockPredicateBlockMatch@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
    virtual bool test(class Block const& block, class Randomize&) const;

    // vIndex: 2, symbol: ?test@StructurePoolBlockPredicateBlockMatch@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // vIndex: 3, symbol: ?finalize@IStructurePoolBlockPredicate@@UEAA_NAEAVBlockSource@@AEAVIRandom@@@Z
    virtual bool finalize(class BlockSource&, class IRandom&);

    // symbol: ??0StructurePoolBlockPredicateBlockMatch@@QEAA@AEBVBlock@@@Z
    MCAPI explicit StructurePoolBlockPredicateBlockMatch(class Block const& block);

    // symbol:
    // ??0StructurePoolBlockPredicateBlockMatch@@QEAA@V?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@std@@@Z
    MCAPI explicit StructurePoolBlockPredicateBlockMatch(std::vector<class HashedString>);

    // NOLINTEND
};
