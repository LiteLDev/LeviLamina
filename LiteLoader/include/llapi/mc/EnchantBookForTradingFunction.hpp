/**
 * @file  MC/EnchantBookForTradingFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

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
     * @hash   502521253
     * @symbol ?apply@EnchantBookForTradingFunction@@UEAAHAEAVItemStack@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
     */
    MCVAPI int apply(class ItemStack &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @hash   -1075026896
     * @symbol ?apply@EnchantBookForTradingFunction@@UEAAHAEAVItemInstance@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
     */
    MCVAPI int apply(class ItemInstance &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @hash   -261616765
     * @symbol ?apply@EnchantBookForTradingFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    MCVAPI void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @hash   -208888466
     * @symbol ?apply@EnchantBookForTradingFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    MCVAPI void apply(class ItemStack &, class Random &, class LootTableContext &);
#endif
    /**
     * @hash   -40965585
     * @symbol ?deserialize@EnchantBookForTradingFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

//private:
    /**
     * @hash   1098278191
     * @symbol ?_getRandomEnchantAndCalculateCost@EnchantBookForTradingFunction@@AEBA?AVEnchantmentInstance@@AEAVItemStackBase@@AEAVRandom@@AEAH@Z
     */
    MCAPI class EnchantmentInstance _getRandomEnchantAndCalculateCost(class ItemStackBase &, class Random &, int &) const;

private:

};