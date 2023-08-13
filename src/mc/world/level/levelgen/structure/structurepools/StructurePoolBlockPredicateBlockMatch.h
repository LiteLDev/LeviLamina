#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateBlockMatch : public ::IStructurePoolBlockPredicate {

public:
    // prevent constructor by default
    StructurePoolBlockPredicateBlockMatch& operator=(StructurePoolBlockPredicateBlockMatch const&) = delete;
    StructurePoolBlockPredicateBlockMatch(StructurePoolBlockPredicateBlockMatch const&)            = delete;
    StructurePoolBlockPredicateBlockMatch()                                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateBlockMatch\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const&, class Randomize&) const;
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateBlockMatch\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;
    /**
     * @vftbl 3
     * @symbol ?finalize\@IStructurePoolBlockPredicate\@\@UEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    virtual bool finalize(class BlockSource&, class IRandom&);
    /**
     * @symbol
     * ??0StructurePoolBlockPredicateBlockMatch\@\@QEAA\@V?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI StructurePoolBlockPredicateBlockMatch(std::vector<class HashedString>);
    /**
     * @symbol ??0StructurePoolBlockPredicateBlockMatch\@\@QEAA\@AEBVBlock\@\@\@Z
     */
    MCAPI StructurePoolBlockPredicateBlockMatch(class Block const&);
    // NOLINTEND
};
