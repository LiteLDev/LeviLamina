/**
 * @file  EnchantWithLevelsFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantWithLevelsFunction.
 *
 */
class EnchantWithLevelsFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTWITHLEVELSFUNCTION
public:
    class EnchantWithLevelsFunction& operator=(class EnchantWithLevelsFunction const &) = delete;
    EnchantWithLevelsFunction(class EnchantWithLevelsFunction const &) = delete;
    EnchantWithLevelsFunction() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTWITHLEVELSFUNCTION
    /**
     * @symbol ?apply\@EnchantWithLevelsFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @symbol ?apply\@EnchantWithLevelsFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol ?apply\@EnchantWithLevelsFunction\@\@UEAAHAEAVItemStack\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI int apply(class ItemStack &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @symbol ?apply\@EnchantWithLevelsFunction\@\@UEAAHAEAVItemInstance\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    MCVAPI int apply(class ItemInstance &, class Random &, struct Trade const &, class LootTableContext &);
#endif

};
