#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaBlockDrops {

class SelfDropsStrategy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABLOCKDROPS_SELFDROPSSTRATEGY
public:
    SelfDropsStrategy& operator=(SelfDropsStrategy const&) = delete;
    SelfDropsStrategy(SelfDropsStrategy const&)            = delete;
    SelfDropsStrategy()                                    = delete;
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
     * ?getResourceDrops\@SelfDropsStrategy\@VanillaBlockDrops\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    virtual std::vector<class ItemStack>
    getResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&) const;
};

}; // namespace VanillaBlockDrops
