#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockPredicateBlockMatchRandom {

public:
    // prevent constructor by default
    StructurePoolBlockPredicateBlockMatchRandom& operator=(StructurePoolBlockPredicateBlockMatchRandom const&) = delete;
    StructurePoolBlockPredicateBlockMatchRandom(StructurePoolBlockPredicateBlockMatchRandom const&)            = delete;
    StructurePoolBlockPredicateBlockMatchRandom()                                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateBlockMatchRandom\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const&, class Randomize&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateBlockMatchRandom\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const; // NOLINT
    /**
     * @symbol ??0StructurePoolBlockPredicateBlockMatchRandom\@\@QEAA\@AEBVBlock\@\@M\@Z
     */
    MCAPI StructurePoolBlockPredicateBlockMatchRandom(class Block const&, float); // NOLINT
};
