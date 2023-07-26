#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootPool {

public:
    // prevent constructor by default
    LootPool& operator=(LootPool const&) = delete;
    LootPool(LootPool const&)            = delete;
    LootPool()                           = delete;

public:
    /**
     * @symbol
     * ?addRandomItems\@LootPool\@\@QEAAXAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI void addRandomItems(std::vector<class ItemStack>&, class Random&, class LootTableContext&); // NOLINT
    /**
     * @symbol ?deserialize\@LootPool\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void deserialize(class Json::Value const&); // NOLINT

    // protected:
    /**
     * @symbol
     * ?addRandomItem\@LootPool\@\@IEAAXAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI void addRandomItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&); // NOLINT

protected:
};
