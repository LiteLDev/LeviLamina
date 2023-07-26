#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockPredicateAxisAlignedPosition {

public:
    // prevent constructor by default
    StructurePoolBlockPredicateAxisAlignedPosition&
    operator=(StructurePoolBlockPredicateAxisAlignedPosition const&)                                      = delete;
    StructurePoolBlockPredicateAxisAlignedPosition(StructurePoolBlockPredicateAxisAlignedPosition const&) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition()                                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateAxisAlignedPosition\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const&, class Randomize&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateAxisAlignedPosition\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const; // NOLINT
    /**
     * @symbol ??0StructurePoolBlockPredicateAxisAlignedPosition\@\@QEAA\@MMHHE\@Z
     */
    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(float, float, int, int, unsigned char); // NOLINT
};
