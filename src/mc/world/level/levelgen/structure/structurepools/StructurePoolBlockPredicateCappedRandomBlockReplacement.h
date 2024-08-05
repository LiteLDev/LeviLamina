#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateCappedRandomBlockReplacement : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedRandomBlockReplacement&
    operator=(StructurePoolBlockPredicateCappedRandomBlockReplacement const&);
    StructurePoolBlockPredicateCappedRandomBlockReplacement(StructurePoolBlockPredicateCappedRandomBlockReplacement const&);
    StructurePoolBlockPredicateCappedRandomBlockReplacement();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructurePoolBlockPredicateCappedRandomBlockReplacement() = default;

    // vIndex: 1
    virtual bool test(class Block const& block, class Randomize&) const;

    // vIndex: 2
    virtual bool test(class BlockPos const& pos, class BlockPos const&, class Randomize&) const;

    // vIndex: 3
    virtual bool finalize(class BlockSource& region, class IRandom& random);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _finalize(class BlockSource& region, class IRandom& random, std::function<void(class BlockPos&)>);

    // NOLINTEND
};
