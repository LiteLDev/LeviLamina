/**
 * @file  LootItemCondition.hpp
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
 * @brief MC class LootItemCondition.
 *
 */
class LootItemCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMCONDITION
public:
    class LootItemCondition& operator=(class LootItemCondition const &) = delete;
    LootItemCondition(class LootItemCondition const &) = delete;
    LootItemCondition() = delete;
#endif

public:
    /**
     * @symbol  ?deserialize\@LootItemCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};