#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateAlwaysTrueExcept : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateAlwaysTrueExcept& operator=(StructurePoolBlockPredicateAlwaysTrueExcept const&);
    StructurePoolBlockPredicateAlwaysTrueExcept(StructurePoolBlockPredicateAlwaysTrueExcept const&);
    StructurePoolBlockPredicateAlwaysTrueExcept();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StructurePoolBlockPredicateAlwaysTrueExcept@@UEAA@XZ
    virtual ~StructurePoolBlockPredicateAlwaysTrueExcept() = default;

    // vIndex: 1, symbol: ?test@StructurePoolBlockPredicateAlwaysTrueExcept@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
    virtual bool test(class Block const&, class Randomize&) const;

    // vIndex: 2, symbol: ?test@StructurePoolBlockPredicateAlwaysTrueExcept@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // symbol:
    // ??0StructurePoolBlockPredicateAlwaysTrueExcept@@QEAA@AEBV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@M@Z
    MCAPI StructurePoolBlockPredicateAlwaysTrueExcept(std::set<class Block const*> const&, float);

    // NOLINTEND
};
