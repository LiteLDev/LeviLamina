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
    // vIndex: 0
    virtual ~StructurePoolBlockPredicateBlockMatch() = default;

    // vIndex: 1
    virtual bool test(class Block const& block, class Randomize&) const;

    // vIndex: 2
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // vIndex: 3
    virtual bool finalize(class BlockSource&, class IRandom&);

    MCAPI explicit StructurePoolBlockPredicateBlockMatch(class Block const& block);

    MCAPI explicit StructurePoolBlockPredicateBlockMatch(std::vector<class HashedString> blockMatchings);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::vector<class HashedString> blockMatchings);

    MCAPI void* ctor$(class Block const& block);

    MCAPI bool finalize$(class BlockSource&, class IRandom&);

    MCAPI bool test$(class Block const& block, class Randomize&) const;

    MCAPI bool test$(class BlockPos const&, class BlockPos const&, class Randomize&) const;

    // NOLINTEND
};
