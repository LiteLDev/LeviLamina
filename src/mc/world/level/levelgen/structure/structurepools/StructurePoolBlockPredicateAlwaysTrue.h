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
    // vIndex: 0
    virtual ~StructurePoolBlockPredicateAlwaysTrue() = default;

    // vIndex: 1
    virtual bool test(class Block const& block, class Randomize& randomize) const;

    // vIndex: 2
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // vIndex: 3
    virtual bool finalize(class BlockSource&, class IRandom&);

    MCAPI StructurePoolBlockPredicateAlwaysTrue();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI bool finalize$(class BlockSource&, class IRandom&);

    MCAPI bool test$(class Block const& block, class Randomize& randomize) const;

    MCAPI bool test$(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // NOLINTEND
};
