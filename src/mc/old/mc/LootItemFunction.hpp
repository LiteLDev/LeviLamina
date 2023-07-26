/**
 * @file  LootItemFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemFunction.
 *
 */
class LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMFUNCTION
public:
    class LootItemFunction& operator=(class LootItemFunction const &) = delete;
    LootItemFunction(class LootItemFunction const &) = delete;
    LootItemFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LootItemFunction();
    /**
     * @vftbl  1
     * @symbol  ?apply\@SpecificEnchantFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &) = 0;
    /**
     * @vftbl  2
     * @symbol  ?apply\@LootItemFunction\@\@UEAAHAEAVItemStack\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual int apply(class ItemStack &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @vftbl  3
     * @symbol  ?apply\@SpecificEnchantFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &) = 0;
    /**
     * @vftbl  4
     * @symbol  ?apply\@LootItemFunction\@\@UEAAHAEAVItemInstance\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual int apply(class ItemInstance &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @symbol  ?getConditions\@LootItemFunction\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class LootItemCondition>> const & getConditions() const;
    /**
     * @symbol  ?deserialize\@LootItemFunction\@\@SA?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value);

//private:

private:
    /**
     * @symbol  ?mLootingFunctions\@LootItemFunction\@\@0V?$unordered_map\@VHashedString\@\@V?$function\@$$A6A?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@2\@\@Z\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$function\@$$A6A?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@2\@\@Z\@std\@\@\@std\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<class HashedString, class std::function<std::unique_ptr<class LootItemFunction> (class Json::Value &, std::vector<std::unique_ptr<class LootItemCondition>> &)>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::function<std::unique_ptr<class LootItemFunction> (class Json::Value &, std::vector<std::unique_ptr<class LootItemCondition>> &)>>>> const mLootingFunctions;

};