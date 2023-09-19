#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateAxisAlignedPosition : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateAxisAlignedPosition& operator=(StructurePoolBlockPredicateAxisAlignedPosition const&);
    StructurePoolBlockPredicateAxisAlignedPosition(StructurePoolBlockPredicateAxisAlignedPosition const&);
    StructurePoolBlockPredicateAxisAlignedPosition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?test@StructurePoolBlockPredicateAxisAlignedPosition@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
    virtual bool test(class Block const&, class Randomize&) const;

    // vIndex: 2, symbol: ?test@StructurePoolBlockPredicateAxisAlignedPosition@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // vIndex: 3, symbol: ?finalize@IStructurePoolBlockPredicate@@UEAA_NAEAVBlockSource@@AEAVIRandom@@@Z
    virtual bool finalize(class BlockSource&, class IRandom&);

    // symbol: ??0StructurePoolBlockPredicateAxisAlignedPosition@@QEAA@MMHHE@Z
    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(float, float, int, int, uchar);

    // NOLINTEND
};
