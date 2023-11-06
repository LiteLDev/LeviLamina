#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

class EmptyLootItem : public ::LootPoolEntry {
public:
    // prevent constructor by default
    EmptyLootItem& operator=(EmptyLootItem const&);
    EmptyLootItem(EmptyLootItem const&);
    EmptyLootItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?_createItem@EmptyLootItem@@MEAA_NAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);

    // vIndex: 1, symbol: ??1@@UEAA@XZ
    virtual ~EmptyLootItem();

    // NOLINTEND
};
