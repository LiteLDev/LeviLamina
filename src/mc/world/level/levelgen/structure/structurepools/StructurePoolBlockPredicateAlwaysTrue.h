#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockPredicateAlwaysTrue {

public:
    // prevent constructor by default
    StructurePoolBlockPredicateAlwaysTrue& operator=(StructurePoolBlockPredicateAlwaysTrue const&) = delete;
    StructurePoolBlockPredicateAlwaysTrue(StructurePoolBlockPredicateAlwaysTrue const&)            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLBLOCKPREDICATEALWAYSTRUE
    /**
     * @symbol ?test\@StructurePoolBlockPredicateAlwaysTrue\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    MCVAPI bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;
    /**
     * @symbol ?test\@StructurePoolBlockPredicateAlwaysTrue\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    MCVAPI bool test(class Block const&, class Randomize&) const;
#endif
    /**
     * @symbol ??0StructurePoolBlockPredicateAlwaysTrue\@\@QEAA\@XZ
     */
    MCAPI StructurePoolBlockPredicateAlwaysTrue();
    // NOLINTEND
};
