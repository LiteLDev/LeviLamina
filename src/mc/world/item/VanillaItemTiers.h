#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class VanillaItemTiers {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAITEMTIERS
public:
    VanillaItemTiers& operator=(VanillaItemTiers const&) = delete;
    VanillaItemTiers(VanillaItemTiers const&)            = delete;
    VanillaItemTiers()                                   = delete;
#endif

public:
    /**
     * @symbol ?DIAMOND\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const DIAMOND;
    /**
     * @symbol ?GOLD\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const GOLD;
    /**
     * @symbol ?IRON\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const IRON;
    /**
     * @symbol ?NETHERITE\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const NETHERITE;
    /**
     * @symbol ?STONE\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const STONE;
    /**
     * @symbol ?WOOD\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const WOOD;
    /**
     * @symbol
     * ?getTierItems\@VanillaItemTiers\@\@SA?BV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVTier\@Item\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static std::vector<class ItemStack> const getTierItems(class Item::Tier const&, class BaseGameVersion const&);
};
