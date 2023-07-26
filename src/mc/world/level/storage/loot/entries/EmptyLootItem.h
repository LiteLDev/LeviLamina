#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EmptyLootItem {

public:
    // prevent constructor by default
    EmptyLootItem& operator=(EmptyLootItem const&) = delete;
    EmptyLootItem(EmptyLootItem const&)            = delete;
    EmptyLootItem()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol
     * ?_createItem\@EmptyLootItem\@\@MEAA_NAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&); // NOLINT
};
