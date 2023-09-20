/**
 * @file  EnchantBookForTradingFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantBookForTradingFunction.
 *
 */
class EnchantBookForTradingFunction : public LootItemFunction {

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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?apply\@EnchantBookForTradingFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl 2
     * @symbol ?apply\@EnchantBookForTradingFunction\@\@UEAAHAEAVItemStack\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual int apply(class ItemStack &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @vftbl 3
     * @symbol ?apply\@EnchantBookForTradingFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @vftbl 4
     * @symbol ?apply\@EnchantBookForTradingFunction\@\@UEAAHAEAVItemInstance\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual int apply(class ItemInstance &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @symbol ?deserialize\@EnchantBookForTradingFunction\@\@SA?AV?$unique_ptr\@VEnchantBookForTradingFunction\@\@U?$default_delete\@VEnchantBookForTradingFunction\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class EnchantBookForTradingFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

//private:
    /**
     * @symbol ?_getRandomEnchantInstance\@EnchantBookForTradingFunction\@\@AEBA?AVEnchantmentInstance\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class EnchantmentInstance _getRandomEnchantInstance(class Random &) const;
    /**
     * @symbol ?_trySelectEnchantmentFromOptions\@EnchantBookForTradingFunction\@\@AEBA?AV?$optional\@VEnchantmentInstance\@\@\@std\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class std::optional<class EnchantmentInstance> _trySelectEnchantmentFromOptions(class Random &) const;
    /**
     * @symbol ?_parseEnchantmentOption\@EnchantBookForTradingFunction\@\@CA?AV?$optional\@UEnchantmentOption\@EnchantBookForTradingFunction\@\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static class std::optional<struct EnchantBookForTradingFunction::EnchantmentOption> _parseEnchantmentOption(class Json::Value const &);

private:

};
