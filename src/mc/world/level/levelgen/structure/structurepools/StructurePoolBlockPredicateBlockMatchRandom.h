#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateBlockMatchRandom : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateBlockMatchRandom& operator=(StructurePoolBlockPredicateBlockMatchRandom const&);
    StructurePoolBlockPredicateBlockMatchRandom(StructurePoolBlockPredicateBlockMatchRandom const&);
    StructurePoolBlockPredicateBlockMatchRandom();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructurePoolBlockPredicateBlockMatchRandom() = default;

    // vIndex: 1
    virtual bool test(class Block const& block, class Randomize& randomize) const;

    // vIndex: 2
    virtual bool test(class BlockPos const& pos, class BlockPos const& refPos, class Randomize& randomize) const;

    // vIndex: 3
    virtual bool finalize(class BlockSource&, class IRandom&);

    MCAPI StructurePoolBlockPredicateBlockMatchRandom(class Block const& block, float probability);

    // NOLINTEND
};
