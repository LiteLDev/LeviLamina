#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IStructurePoolBlockPredicate {

public:
    // prevent constructor by default
    IStructurePoolBlockPredicate& operator=(IStructurePoolBlockPredicate const&) = delete;
    IStructurePoolBlockPredicate(IStructurePoolBlockPredicate const&)            = delete;
    IStructurePoolBlockPredicate()                                               = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISTRUCTUREPOOLBLOCKPREDICATE
    /**
     * @symbol ?finalize\@IStructurePoolBlockPredicate\@\@UEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    MCVAPI bool finalize(class BlockSource&, class IRandom&);
#endif
    // NOLINTEND
};
