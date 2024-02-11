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
    // vIndex: 0, symbol: __gen_??1StructurePoolBlockPredicateCappedRandomBlockReplacement@@UEAA@XZ
    virtual ~StructurePoolBlockPredicateCappedRandomBlockReplacement() = default;

    // vIndex: 1, symbol:
    // ?test@StructurePoolBlockPredicateCappedRandomBlockReplacement@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
    virtual bool test(class Block const& block, class Randomize&) const;

    // vIndex: 2, symbol:
    // ?test@StructurePoolBlockPredicateCappedRandomBlockReplacement@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
    virtual bool test(class BlockPos const& pos, class BlockPos const&, class Randomize&) const;

    // vIndex: 3, symbol:
    // ?finalize@StructurePoolBlockPredicateCappedRandomBlockReplacement@@UEAA_NAEAVBlockSource@@AEAVIRandom@@@Z
    virtual bool finalize(class BlockSource& region, class IRandom& random);

    // symbol:
    // ??0StructurePoolBlockPredicateCappedRandomBlockReplacement@@QEAA@AEBV?$map@VHashedString@@V1@U?$less@VHashedString@@@std@@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@_K@Z
    MCAPI StructurePoolBlockPredicateCappedRandomBlockReplacement(
        std::map<class HashedString, class HashedString> const&,
        uint64
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_finalize@StructurePoolBlockPredicateCappedRandomBlockReplacement@@IEAA_NAEAVBlockSource@@AEAVIRandom@@V?$function@$$A6AXAEAVBlockPos@@@Z@std@@@Z
    MCAPI bool _finalize(class BlockSource& region, class IRandom& random, std::function<void(class BlockPos&)>);

    // NOLINTEND
};
