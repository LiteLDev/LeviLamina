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
    // symbol:
    // ??0StructurePoolBlockRule@@QEAA@$$QEAV?$unique_ptr@VIStructurePoolBlockPredicate@@U?$default_delete@VIStructurePoolBlockPredicate@@@std@@@std@@0PEBVBlock@@@Z
    MCAPI StructurePoolBlockRule(
        std::unique_ptr<class IStructurePoolBlockPredicate>&& sourceBlockPredicate,
        std::unique_ptr<class IStructurePoolBlockPredicate>&& targetBlockPredicate,
        class Block const*                                    resultBlock
    );

    // symbol:
    // ??0StructurePoolBlockRule@@QEAA@$$QEAV?$unique_ptr@VIStructurePoolBlockPredicate@@U?$default_delete@VIStructurePoolBlockPredicate@@@std@@@std@@00PEBVBlock@@@Z
    MCAPI StructurePoolBlockRule(
        std::unique_ptr<class IStructurePoolBlockPredicate>&& sourceBlockPredicate,
        std::unique_ptr<class IStructurePoolBlockPredicate>&& targetBlockPredicate,
        std::unique_ptr<class IStructurePoolBlockPredicate>&&,
        class Block const* resultBlock
    );

    // symbol: ?finalizeRule@StructurePoolBlockRule@@QEAA_NAEAVBlockSource@@AEAVIRandom@@@Z
    MCAPI bool finalizeRule(class BlockSource& region, class IRandom& random);

    // symbol: ?processRule@StructurePoolBlockRule@@QEBA_NAEBVBlock@@0AEAVRandom@@AEAPEBV2@AEBVBlockPos@@3@Z
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
