#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootTable {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLE
public:
    LootTable& operator=(LootTable const&) = delete;
    LootTable(LootTable const&)            = delete;
    LootTable()                            = delete;
#endif

public:
    /**
     * @symbol ?deserialize\@LootTable\@\@QEAAXAEBVValue\@Json\@\@\@Z
     */
    MCAPI void deserialize(class Json::Value const&);
    /**
     * @symbol ?fill\@LootTable\@\@QEAAXAEAVContainer\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI void fill(class Container&, class Random&, class LootTableContext&);
    /**
     * @symbol
     * ?getRandomItems\@LootTable\@\@QEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI std::vector<class ItemStack> getRandomItems(class Random&, class LootTableContext&) const;

    // private:
    /**
     * @symbol
     * ?getAvailableSlots\@LootTable\@\@AEAA?AV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@AEAVContainer\@\@AEAVRandom\@\@\@Z
     */
    MCAPI std::vector<int> getAvailableSlots(class Container&, class Random&);
    /**
     * @symbol
     * ?shuffleAndSplitItems\@LootTable\@\@AEAAXAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@HAEAVRandom\@\@\@Z
     */
    MCAPI void shuffleAndSplitItems(std::vector<class ItemStack>&, int, class Random&);

private:
};
