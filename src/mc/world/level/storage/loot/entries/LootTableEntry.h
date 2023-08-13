#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

class LootTableEntry : public ::LootPoolEntry {

public:
    // prevent constructor by default
    LootTableEntry& operator=(LootTableEntry const&) = delete;
    LootTableEntry(LootTableEntry const&)            = delete;
    LootTableEntry()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol
     * ?_createItem\@LootTableEntry\@\@MEAA_NAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);
    // NOLINTEND
};
