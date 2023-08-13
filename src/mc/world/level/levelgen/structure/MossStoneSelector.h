#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockSelector.h"

class MossStoneSelector : public ::BlockSelector {

public:
    // prevent constructor by default
    MossStoneSelector& operator=(MossStoneSelector const&) = delete;
    MossStoneSelector(MossStoneSelector const&)            = delete;
    MossStoneSelector()                                    = delete;

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
    virtual class Block const& next(class Random&, int, int, int, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOSSSTONESELECTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MossStoneSelector();
#endif
    // NOLINTEND
};
