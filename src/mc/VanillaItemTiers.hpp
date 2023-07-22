/**
 * @file  VanillaItemTiers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaItemTiers.
 *
 */
class VanillaItemTiers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAITEMTIERS
public:
    class VanillaItemTiers& operator=(class VanillaItemTiers const &) = delete;
    VanillaItemTiers(class VanillaItemTiers const &) = delete;
    VanillaItemTiers() = delete;
#endif

public:
    /**
     * @symbol  ?DIAMOND\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const DIAMOND;
    /**
     * @symbol  ?GOLD\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const GOLD;
    /**
     * @symbol  ?IRON\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const IRON;
    /**
     * @symbol  ?NETHERITE\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const NETHERITE;
    /**
     * @symbol  ?STONE\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const STONE;
    /**
     * @symbol  ?WOOD\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const WOOD;
    /**
     * @symbol  ?getTierItems\@VanillaItemTiers\@\@SA?BV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVTier\@Item\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static std::vector<class ItemStack> const getTierItems(class Item::Tier const &, class BaseGameVersion const &);

};