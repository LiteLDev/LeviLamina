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
    // vIndex: 0, symbol: __gen_??1StructurePoolBlockPredicateAxisAlignedPosition@@UEAA@XZ
    virtual ~StructurePoolBlockPredicateAxisAlignedPosition() = default;

    // vIndex: 1, symbol: ?test@StructurePoolBlockPredicateAxisAlignedPosition@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
    virtual bool test(class Block const& block, class Randomize& randomize) const;

    // vIndex: 2, symbol: ?test@StructurePoolBlockPredicateAxisAlignedPosition@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
    virtual bool test(class BlockPos const& pos, class BlockPos const& refPos, class Randomize& randomize) const;

    // symbol: ??0StructurePoolBlockPredicateAxisAlignedPosition@@QEAA@MMHHE@Z
    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(float, float, int, int, uchar axis);

    // NOLINTEND
};
