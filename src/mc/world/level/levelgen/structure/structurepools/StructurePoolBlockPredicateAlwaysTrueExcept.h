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
    // vIndex: 0
    virtual ~StructurePoolBlockPredicateAlwaysTrueExcept() = default;

    // vIndex: 1
    virtual bool test(class Block const& block, class Randomize& randomize) const;

    // vIndex: 2
    virtual bool test(class BlockPos const& pos, class BlockPos const& refPos, class Randomize& randomize) const;

    // vIndex: 3
    virtual bool finalize(class BlockSource&, class IRandom&);

    MCAPI StructurePoolBlockPredicateAlwaysTrueExcept(std::set<class Block const*> const&, float probability);

    // NOLINTEND
};
