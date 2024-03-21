#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

class LootTableEntry : public ::LootPoolEntry {
public:
    // prevent constructor by default
    LootTableEntry& operator=(LootTableEntry const&);
    LootTableEntry(LootTableEntry const&);
    LootTableEntry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?_createItem@LootTableEntry@@MEBA_NAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool
    _createItem(std::vector<class ItemStack>& output, class Random& random, class LootTableContext& context) const;

    // vIndex: 1, symbol: __gen_??1LootTableEntry@@UEAA@XZ
    virtual ~LootTableEntry() = default;

    // NOLINTEND
};
