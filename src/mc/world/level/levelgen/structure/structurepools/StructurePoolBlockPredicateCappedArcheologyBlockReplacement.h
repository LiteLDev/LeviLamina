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
    // vIndex: 0, symbol: __gen_??1StructurePoolBlockPredicateCappedArcheologyBlockReplacement@@UEAA@XZ
    virtual ~StructurePoolBlockPredicateCappedArcheologyBlockReplacement() = default;

    // vIndex: 3, symbol:
    // ?finalize@StructurePoolBlockPredicateCappedArcheologyBlockReplacement@@UEAA_NAEAVBlockSource@@AEAVIRandom@@@Z
    virtual bool finalize(class BlockSource& region, class IRandom& random);

    // symbol:
    // ??0StructurePoolBlockPredicateCappedArcheologyBlockReplacement@@QEAA@AEBV?$map@VHashedString@@V1@U?$less@VHashedString@@@std@@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@_KW4Placement@BrushableBlockActor@@@Z
    MCAPI StructurePoolBlockPredicateCappedArcheologyBlockReplacement(
        std::map<class HashedString, class HashedString> const&,
        uint64,
        ::BrushableBlockActor::Placement placement
    );

    // NOLINTEND
};
