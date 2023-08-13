#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IResourceDropsStrategy.h"

// auto generated forward declare list
// clang-format off
class Block;
class ItemStack;
class Randomize;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops {

class SelfDropsStrategy : public ::IResourceDropsStrategy {

public:
    // prevent constructor by default
    SelfDropsStrategy& operator=(SelfDropsStrategy const&) = delete;
    SelfDropsStrategy(SelfDropsStrategy const&)            = delete;
    SelfDropsStrategy()                                    = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};

}; // namespace VanillaBlockDrops
