#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class EnchantBookForTradingFunction : public ::LootItemFunction {

public:
    // prevent constructor by default
    EnchantBookForTradingFunction& operator=(EnchantBookForTradingFunction const&) = delete;
    EnchantBookForTradingFunction(EnchantBookForTradingFunction const&)            = delete;
    EnchantBookForTradingFunction()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?apply\@EnchantBookForTradingFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /**
     * @vftbl 2
     * @symbol
     * ?apply\@EnchantBookForTradingFunction\@\@UEAAHAEAVItemStack\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual int apply(class ItemStack&, class Random&, struct Trade const&, class LootTableContext&);
    /**
     * @vftbl 3
     * @symbol
     * ?apply\@EnchantBookForTradingFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    /**
     * @vftbl 4
     * @symbol
     * ?apply\@EnchantBookForTradingFunction\@\@UEAAHAEAVItemInstance\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual int apply(class ItemInstance&, class Random&, struct Trade const&, class LootTableContext&);
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
