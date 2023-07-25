#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MossStoneSelector {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOSSSTONESELECTOR
public:
    MossStoneSelector& operator=(MossStoneSelector const&) = delete;
    MossStoneSelector(MossStoneSelector const&)            = delete;
    MossStoneSelector()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?next\@MossStoneSelector\@\@UEBAAEBVBlock\@\@AEAVRandom\@\@HHH_N\@Z
     */
    virtual class Block const& next(class Random&, int, int, int, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOSSSTONESELECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MossStoneSelector();
#endif
};
