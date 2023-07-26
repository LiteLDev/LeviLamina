#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class ItemStack;
class Randomize;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops {

class SelfDropsStrategy {

public:
    // prevent constructor by default
    SelfDropsStrategy& operator=(SelfDropsStrategy const&) = delete;
    SelfDropsStrategy(SelfDropsStrategy const&)            = delete;
    SelfDropsStrategy()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getResourceDrops\@SelfDropsStrategy\@VanillaBlockDrops\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    virtual std::vector<class ItemStack>
    getResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&) const; // NOLINT
};

}; // namespace VanillaBlockDrops
