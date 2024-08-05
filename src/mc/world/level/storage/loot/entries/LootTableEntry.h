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
    // vIndex: 0
    virtual bool
    _createItem(std::vector<class ItemStack>& output, class Random& random, class LootTableContext& context) const;

    // vIndex: 1
    virtual ~LootTableEntry() = default;

    // NOLINTEND
};
