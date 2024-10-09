#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BrushableBlockActor.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateCappedRandomBlockReplacement.h"

class StructurePoolBlockPredicateCappedArcheologyBlockReplacement
: public ::StructurePoolBlockPredicateCappedRandomBlockReplacement {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement&
    operator=(StructurePoolBlockPredicateCappedArcheologyBlockReplacement const&);
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement(StructurePoolBlockPredicateCappedArcheologyBlockReplacement const&);
    StructurePoolBlockPredicateCappedArcheologyBlockReplacement();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructurePoolBlockPredicateCappedArcheologyBlockReplacement() = default;

    // vIndex: 3
    virtual bool finalize(class BlockSource& region, class IRandom& random);

    MCAPI StructurePoolBlockPredicateCappedArcheologyBlockReplacement(
        std::map<class HashedString, class HashedString> const& blockMappings,
        uint64                                                  maximumAmount,
        ::BrushableBlockActor::Placement                        placement
    );

    // NOLINTEND
};
