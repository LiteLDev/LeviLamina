#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

class EmptyLootItem : public ::LootPoolEntry {

public:
    // prevent constructor by default
    EmptyLootItem& operator=(EmptyLootItem const&) = delete;
    EmptyLootItem(EmptyLootItem const&)            = delete;
    EmptyLootItem()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol
     * ?_createItem\@EmptyLootItem\@\@MEAA_NAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);
    // NOLINTEND
};
