#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockPredicateBlockMatch {

public:
    // prevent constructor by default
    StructurePoolBlockPredicateBlockMatch& operator=(StructurePoolBlockPredicateBlockMatch const&) = delete;
    StructurePoolBlockPredicateBlockMatch(StructurePoolBlockPredicateBlockMatch const&)            = delete;
    StructurePoolBlockPredicateBlockMatch()                                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateBlockMatch\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const&, class Randomize&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateBlockMatch\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const; // NOLINT
    /**
     * @symbol
     * ??0StructurePoolBlockPredicateBlockMatch\@\@QEAA\@V?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI StructurePoolBlockPredicateBlockMatch(std::vector<class HashedString>); // NOLINT
    /**
     * @symbol ??0StructurePoolBlockPredicateBlockMatch\@\@QEAA\@AEBVBlock\@\@\@Z
     */
    MCAPI StructurePoolBlockPredicateBlockMatch(class Block const&); // NOLINT
};
