#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EnchantWithLevelsFunction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTWITHLEVELSFUNCTION
public:
    EnchantWithLevelsFunction& operator=(EnchantWithLevelsFunction const&) = delete;
    EnchantWithLevelsFunction(EnchantWithLevelsFunction const&)            = delete;
    EnchantWithLevelsFunction()                                            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTWITHLEVELSFUNCTION
    /**
     * @symbol ?apply\@EnchantWithLevelsFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI void apply(class ItemStack&, class Random&, class LootTableContext&);
    /**
     * @symbol ?apply\@EnchantWithLevelsFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI void apply(class ItemInstance&, class Random&, class LootTableContext&);
    /**
     * @symbol
     * ?apply\@EnchantWithLevelsFunction\@\@UEAAHAEAVItemStack\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI int apply(class ItemStack&, class Random&, struct Trade const&, class LootTableContext&);
    /**
     * @symbol
     * ?apply\@EnchantWithLevelsFunction\@\@UEAAHAEAVItemInstance\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI int apply(class ItemInstance&, class Random&, struct Trade const&, class LootTableContext&);
#endif
};
