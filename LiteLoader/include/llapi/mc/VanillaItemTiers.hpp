/**
 * @file  VanillaItemTiers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Item.hpp"

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
     * @hash   -1560193879
     * @symbol  ?DIAMOND\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const DIAMOND;
    /**
     * @hash   -1898788233
     * @symbol  ?GOLD\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const GOLD;
    /**
     * @hash   1640263959
     * @symbol  ?IRON\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const IRON;
    /**
     * @hash   127298037
     * @symbol  ?NETHERITE\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const NETHERITE;
    /**
     * @hash   1340311067
     * @symbol  ?STONE\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const STONE;
    /**
     * @hash   -2081805071
     * @symbol  ?WOOD\@VanillaItemTiers\@\@2VTier\@Item\@\@B
     */
    MCAPI static class Item::Tier const WOOD;
    /**
     * @hash   -819215160
     * @symbol  ?getTierItems\@VanillaItemTiers\@\@SA?BV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVTier\@Item\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static std::vector<class ItemStack> const getTierItems(class Item::Tier const &, class BaseGameVersion const &);

};