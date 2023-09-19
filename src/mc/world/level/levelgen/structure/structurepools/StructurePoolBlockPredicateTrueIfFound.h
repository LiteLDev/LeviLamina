#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateTrueIfFound : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateTrueIfFound& operator=(StructurePoolBlockPredicateTrueIfFound const&);
    StructurePoolBlockPredicateTrueIfFound(StructurePoolBlockPredicateTrueIfFound const&);
    StructurePoolBlockPredicateTrueIfFound();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?test@StructurePoolBlockPredicateTrueIfFound@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
    virtual bool test(class Block const&, class Randomize&) const;

    // vIndex: 2, symbol: ?test@StructurePoolBlockPredicateTrueIfFound@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // vIndex: 3, symbol: ?finalize@IStructurePoolBlockPredicate@@UEAA_NAEAVBlockSource@@AEAVIRandom@@@Z
    virtual bool finalize(class BlockSource&, class IRandom&);

    // symbol:
    // ??0StructurePoolBlockPredicateTrueIfFound@@QEAA@AEBV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@M@Z
    MCAPI StructurePoolBlockPredicateTrueIfFound(std::set<class Block const*> const&, float);

    // NOLINTEND
};
