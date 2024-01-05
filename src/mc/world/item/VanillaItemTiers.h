#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class VanillaItemTiers {
public:
    // prevent constructor by default
    VanillaItemTiers& operator=(VanillaItemTiers const&);
    VanillaItemTiers(VanillaItemTiers const&);
    VanillaItemTiers();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getTierItems@VanillaItemTiers@@SA?BV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVTier@Item@@AEBVBaseGameVersion@@@Z
    MCAPI static std::vector<class ItemStack> const
    getTierItems(class Item::Tier const& tier, class BaseGameVersion const& baseGameVersion);

    // symbol: ?DIAMOND@VanillaItemTiers@@2VTier@Item@@B
    MCAPI static class Item::Tier const DIAMOND;

    // symbol: ?GOLD@VanillaItemTiers@@2VTier@Item@@B
    MCAPI static class Item::Tier const GOLD;

    // symbol: ?IRON@VanillaItemTiers@@2VTier@Item@@B
    MCAPI static class Item::Tier const IRON;

    // symbol: ?NETHERITE@VanillaItemTiers@@2VTier@Item@@B
    MCAPI static class Item::Tier const NETHERITE;

    // symbol: ?STONE@VanillaItemTiers@@2VTier@Item@@B
    MCAPI static class Item::Tier const STONE;

    // symbol: ?WOOD@VanillaItemTiers@@2VTier@Item@@B
    MCAPI static class Item::Tier const WOOD;

    // NOLINTEND
};
