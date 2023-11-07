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

class ItemDropsStrategy : public ::IResourceDropsStrategy {
public:
    // prevent constructor by default
    ItemDropsStrategy& operator=(ItemDropsStrategy const&);
    ItemDropsStrategy(ItemDropsStrategy const&);
    ItemDropsStrategy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemDropsStrategy@@@UEAA@XZ
    virtual ~ItemDropsStrategy();

    // vIndex: 1, symbol:
    // ?getResourceDrops@ItemDropsStrategy@VanillaBlockDrops@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    virtual std::vector<class ItemStack>
    getResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&) const;

    // NOLINTEND
};

}; // namespace VanillaBlockDrops
