#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaBlockDrops {

class NothingDropsStrategy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABLOCKDROPS_NOTHINGDROPSSTRATEGY
public:
    NothingDropsStrategy& operator=(NothingDropsStrategy const&) = delete;
    NothingDropsStrategy(NothingDropsStrategy const&)            = delete;
    NothingDropsStrategy()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getResourceDrops\@NothingDropsStrategy\@VanillaBlockDrops\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    virtual std::vector<class ItemStack>
    getResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&) const;
};

}; // namespace VanillaBlockDrops
