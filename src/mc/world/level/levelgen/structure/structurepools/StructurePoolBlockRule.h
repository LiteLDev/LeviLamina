#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockRule {
public:
    // prevent constructor by default
    StructurePoolBlockRule& operator=(StructurePoolBlockRule const&);
    StructurePoolBlockRule(StructurePoolBlockRule const&);
    StructurePoolBlockRule();

public:
    // NOLINTBEGIN
    MCAPI StructurePoolBlockRule(
        std::unique_ptr<class IStructurePoolBlockPredicate>&& sourceBlockPredicate,
        std::unique_ptr<class IStructurePoolBlockPredicate>&& targetBlockPredicate,
        class Block const*                                    resultBlock
    );

    MCAPI StructurePoolBlockRule(
        std::unique_ptr<class IStructurePoolBlockPredicate>&& sourceBlockPredicate,
        std::unique_ptr<class IStructurePoolBlockPredicate>&& targetBlockPredicate,
        std::unique_ptr<class IStructurePoolBlockPredicate>&& distancePredicate,
        class Block const*                                    resultBlock
    );

    MCAPI bool finalizeRule(class BlockSource& region, class IRandom& random);

    MCAPI bool processRule(
        class Block const&    sourceBlock,
        class Block const&    targetBlock,
        class Random&         random,
        class Block const*&   outputBlock,
        class BlockPos const& pos,
        class BlockPos const& refPos
    ) const;

    // NOLINTEND
};
