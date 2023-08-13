#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockSelector {

public:
    // prevent constructor by default
    BlockSelector& operator=(BlockSelector const&) = delete;
    BlockSelector(BlockSelector const&)            = delete;
    BlockSelector()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?next\@MossStoneSelector\@\@UEBAAEBVBlock\@\@AEAVRandom\@\@HHH_N\@Z
     */
    virtual class Block const& next(class Random&, int, int, int, bool) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSELECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockSelector();
#endif
    // NOLINTEND
};
