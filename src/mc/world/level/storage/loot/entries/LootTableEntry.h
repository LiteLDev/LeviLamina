#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootTableEntry {

public:
    // prevent constructor by default
    LootTableEntry& operator=(LootTableEntry const&) = delete;
    LootTableEntry(LootTableEntry const&)            = delete;
    LootTableEntry()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol
     * ?_createItem\@LootTableEntry\@\@MEAA_NAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&); // NOLINT
};
