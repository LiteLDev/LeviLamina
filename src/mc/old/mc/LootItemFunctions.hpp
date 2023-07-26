/**
 * @file  LootItemFunctions.hpp
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
 * @brief MC class LootItemFunctions.
 *
 */
class LootItemFunctions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMFUNCTIONS
public:
    class LootItemFunctions& operator=(class LootItemFunctions const &) = delete;
    LootItemFunctions(class LootItemFunctions const &) = delete;
    LootItemFunctions() = delete;
#endif

public:
    /**
     * @symbol  ?deserialize\@LootItemFunctions\@\@SA?AV?$vector\@V?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::vector<std::unique_ptr<class LootItemFunction>> deserialize(class Json::Value);

};