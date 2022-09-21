/**
 * @file  MC/VanillaItemTiers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1864814713
     * @symbol ?DIAMOND@VanillaItemTiers@@2VTier@Item@@B
     */
    MCAPI static class Item::Tier const DIAMOND;
    /**
     * @hash   1526220359
     * @symbol ?GOLD@VanillaItemTiers@@2VTier@Item@@B
     */
    MCAPI static class Item::Tier const GOLD;
    /**
     * @hash   770305255
     * @symbol ?IRON@VanillaItemTiers@@2VTier@Item@@B
     */
    MCAPI static class Item::Tier const IRON;
    /**
     * @hash   -742660667
     * @symbol ?NETHERITE@VanillaItemTiers@@2VTier@Item@@B
     */
    MCAPI static class Item::Tier const NETHERITE;
    /**
     * @hash   470352363
     * @symbol ?STONE@VanillaItemTiers@@2VTier@Item@@B
     */
    MCAPI static class Item::Tier const STONE;
    /**
     * @hash   1343203521
     * @symbol ?WOOD@VanillaItemTiers@@2VTier@Item@@B
     */
    MCAPI static class Item::Tier const WOOD;
    /**
     * @hash   -1546546088
     * @symbol ?getTierItems@VanillaItemTiers@@SA?BV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVTier@Item@@AEBVBaseGameVersion@@@Z
     */
    MCAPI static std::vector<class ItemStack> const getTierItems(class Item::Tier const &, class BaseGameVersion const &);

};