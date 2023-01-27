/**
 * @file  LootPoolEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootPoolEntry.
 *
 */
class LootPoolEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTPOOLENTRY
public:
    class LootPoolEntry& operator=(class LootPoolEntry const &) = delete;
    LootPoolEntry(class LootPoolEntry const &) = delete;
    LootPoolEntry() = delete;
#endif

public:
    /**
     * @hash   -1073522680
     * @symbol  ?createItem\@LootPoolEntry\@\@QEAAXAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI void createItem(std::vector<class ItemStack> &, class Random &, class LootTableContext &);
    /**
     * @hash   1424907411
     * @symbol  ?getConditions\@LootPoolEntry\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class LootItemCondition>> const & getConditions() const;
    /**
     * @hash   1897791171
     * @symbol  ?getWeight\@LootPoolEntry\@\@QEBAHM\@Z
     */
    MCAPI int getWeight(float) const;
    /**
     * @hash   1604026185
     * @symbol  ?deserialize\@LootPoolEntry\@\@SA?AV?$unique_ptr\@VLootPoolEntry\@\@U?$default_delete\@VLootPoolEntry\@\@\@std\@\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value const &);

};