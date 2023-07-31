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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateAxisAlignedPosition\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const&, class Randomize&) const;
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateAxisAlignedPosition\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;
    /**
     * @symbol ??0StructurePoolBlockPredicateAxisAlignedPosition\@\@QEAA\@MMHHE\@Z
     */
    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(float, float, int, int, unsigned char);
    // NOLINTEND
};
