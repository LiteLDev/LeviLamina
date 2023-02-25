/**
 * @file  LootItemConditions.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemConditions.
 *
 */
class LootItemConditions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMCONDITIONS
public:
    class LootItemConditions& operator=(class LootItemConditions const &) = delete;
    LootItemConditions(class LootItemConditions const &) = delete;
    LootItemConditions() = delete;
#endif

public:
    /**
     * @symbol  ?allApply\@LootItemConditions\@\@SA_NAEBV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI static bool allApply(std::vector<std::unique_ptr<class LootItemCondition>> const &, class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@LootItemConditions\@\@SA?AV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::vector<std::unique_ptr<class LootItemCondition>> deserialize(class Json::Value);

};