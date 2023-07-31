#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockPredicateAlwaysTrueExcept {

public:
    // prevent constructor by default
    StructurePoolBlockPredicateAlwaysTrueExcept& operator=(StructurePoolBlockPredicateAlwaysTrueExcept const&) = delete;
    StructurePoolBlockPredicateAlwaysTrueExcept(StructurePoolBlockPredicateAlwaysTrueExcept const&)            = delete;
    StructurePoolBlockPredicateAlwaysTrueExcept()                                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateAlwaysTrueExcept\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const&, class Randomize&) const;
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateAlwaysTrueExcept\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;
    /**
     * @symbol
     * ??0StructurePoolBlockPredicateAlwaysTrueExcept\@\@QEAA\@AEBV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@M\@Z
     */
    MCAPI StructurePoolBlockPredicateAlwaysTrueExcept(std::set<class Block const*> const&, float);
    // NOLINTEND
};
