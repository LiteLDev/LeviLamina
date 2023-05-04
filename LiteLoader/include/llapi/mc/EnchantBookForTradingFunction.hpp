/**
 * @file  EnchantBookForTradingFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantBookForTradingFunction.
 *
 */
class EnchantBookForTradingFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTBOOKFORTRADINGFUNCTION
public:
    class EnchantBookForTradingFunction& operator=(class EnchantBookForTradingFunction const &) = delete;
    EnchantBookForTradingFunction(class EnchantBookForTradingFunction const &) = delete;
    EnchantBookForTradingFunction() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTBOOKFORTRADINGFUNCTION
    /**
     * @symbol ?apply\@EnchantBookForTradingFunction\@\@UEAAHAEAVItemStack\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI int apply(class ItemStack &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @symbol ?apply\@EnchantBookForTradingFunction\@\@UEAAHAEAVItemInstance\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI int apply(class ItemInstance &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @symbol ?apply\@EnchantBookForTradingFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol ?apply\@EnchantBookForTradingFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI void apply(class ItemStack &, class Random &, class LootTableContext &);
#endif

//private:
    /**
     * @symbol ?_getRandomEnchantAndCalculateCost\@EnchantBookForTradingFunction\@\@AEBA?AVEnchantmentInstance\@\@AEAVItemStackBase\@\@AEAVRandom\@\@AEAH\@Z
     */
    MCAPI class EnchantmentInstance _getRandomEnchantAndCalculateCost(class ItemStackBase &, class Random &, int &) const;

private:

};
