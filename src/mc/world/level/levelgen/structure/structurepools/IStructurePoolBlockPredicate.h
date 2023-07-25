#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IStructurePoolBlockPredicate {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISTRUCTUREPOOLBLOCKPREDICATE
public:
    IStructurePoolBlockPredicate& operator=(IStructurePoolBlockPredicate const&) = delete;
    IStructurePoolBlockPredicate(IStructurePoolBlockPredicate const&)            = delete;
    IStructurePoolBlockPredicate()                                               = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISTRUCTUREPOOLBLOCKPREDICATE
    /**
     * @symbol ?finalize\@IStructurePoolBlockPredicate\@\@UEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    MCVAPI bool finalize(class BlockSource&, class IRandom&);
#endif
};
