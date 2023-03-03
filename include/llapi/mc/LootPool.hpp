/**
 * @file  LootPool.hpp
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
 * @brief MC class LootPool.
 *
 */
class LootPool {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTPOOL
public:
    class LootPool& operator=(class LootPool const &) = delete;
    LootPool(class LootPool const &) = delete;
    LootPool() = delete;
#endif

public:
    /**
     * @symbol  ?addRandomItems\@LootPool\@\@QEAAXAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI void addRandomItems(std::vector<class ItemStack> &, class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@LootPool\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void deserialize(class Json::Value const &);

//protected:
    /**
     * @symbol  ?addRandomItem\@LootPool\@\@IEAAXAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI void addRandomItem(std::vector<class ItemStack> &, class Random &, class LootTableContext &);

protected:

};