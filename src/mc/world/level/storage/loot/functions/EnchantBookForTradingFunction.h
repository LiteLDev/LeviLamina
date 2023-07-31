#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EnchantBookForTradingFunction {

public:
    // prevent constructor by default
    EnchantBookForTradingFunction& operator=(EnchantBookForTradingFunction const&) = delete;
    EnchantBookForTradingFunction(EnchantBookForTradingFunction const&)            = delete;
    EnchantBookForTradingFunction()                                                = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTBOOKFORTRADINGFUNCTION
    /**
     * @symbol
     * ?apply\@EnchantBookForTradingFunction\@\@UEAAHAEAVItemStack\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI int apply(class ItemStack&, class Random&, struct Trade const&, class LootTableContext&);
    /**
     * @symbol
     * ?apply\@EnchantBookForTradingFunction\@\@UEAAHAEAVItemInstance\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI int apply(class ItemInstance&, class Random&, struct Trade const&, class LootTableContext&);
    /**
     * @symbol
     * ?apply\@EnchantBookForTradingFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI void apply(class ItemInstance&, class Random&, class LootTableContext&);
    /**
     * @symbol ?apply\@EnchantBookForTradingFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI void apply(class ItemStack&, class Random&, class LootTableContext&);
#endif
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_getRandomEnchantAndCalculateCost\@EnchantBookForTradingFunction\@\@AEBA?AVEnchantmentInstance\@\@AEAVItemStackBase\@\@AEAVRandom\@\@AEAH\@Z
     */
    MCAPI class EnchantmentInstance _getRandomEnchantAndCalculateCost(class ItemStackBase&, class Random&, int&) const;
    // NOLINTEND
};
