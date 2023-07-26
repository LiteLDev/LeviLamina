#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockPredicateTrueIfFound {

public:
    // prevent constructor by default
    StructurePoolBlockPredicateTrueIfFound& operator=(StructurePoolBlockPredicateTrueIfFound const&) = delete;
    StructurePoolBlockPredicateTrueIfFound(StructurePoolBlockPredicateTrueIfFound const&)            = delete;
    StructurePoolBlockPredicateTrueIfFound()                                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateTrueIfFound\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const&, class Randomize&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateTrueIfFound\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const; // NOLINT
    /**
     * @symbol
     * ??0StructurePoolBlockPredicateTrueIfFound\@\@QEAA\@AEBV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@M\@Z
     */
    MCAPI StructurePoolBlockPredicateTrueIfFound(
        class std::set<
            class Block const*,
            struct std::less<class Block const*>,
            class std::allocator<class Block const*>> const&,
        float
    ); // NOLINT
};
