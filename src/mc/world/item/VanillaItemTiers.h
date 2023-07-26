#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class VanillaItemTiers {

public:
    // prevent constructor by default
    VanillaItemTiers& operator=(VanillaItemTiers const&) = delete;
    VanillaItemTiers(VanillaItemTiers const&)            = delete;
    VanillaItemTiers()                                   = delete;

public:
    /**
     * @symbol
     * ?getTierItems\@VanillaItemTiers\@\@SA?BV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVTier\@Item\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static std::vector<class ItemStack> const
    getTierItems(class Item::Tier const&, class BaseGameVersion const&); // NOLINT
    /**
     * @symbol ?DIAMOND\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const DIAMOND; // NOLINT
    /**
     * @symbol ?GOLD\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const GOLD; // NOLINT
    /**
     * @symbol ?IRON\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const IRON; // NOLINT
    /**
     * @symbol ?NETHERITE\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const NETHERITE; // NOLINT
    /**
     * @symbol ?STONE\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const STONE; // NOLINT
    /**
     * @symbol ?WOOD\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const WOOD; // NOLINT
};
