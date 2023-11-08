#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/IResourceDropsStrategy.h"

// auto generated forward declare list
// clang-format off
class Block;
class IResourceDropsStrategy;
class ItemStack;
class Randomize;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops {

class SelfDropsStrategy : public ::IResourceDropsStrategy {
public:
    // prevent constructor by default
    SelfDropsStrategy& operator=(SelfDropsStrategy const&);
    SelfDropsStrategy(SelfDropsStrategy const&);
    SelfDropsStrategy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SelfDropsStrategy@VanillaBlockDrops@@UEAA@XZ
    virtual ~SelfDropsStrategy() = default;

    // vIndex: 1, symbol:
    // ?getResourceDrops@SelfDropsStrategy@VanillaBlockDrops@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    virtual std::vector<class ItemStack>
    getResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&) const;

    // NOLINTEND
};

}; // namespace VanillaBlockDrops
