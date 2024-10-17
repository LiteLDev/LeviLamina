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
    // vIndex: 0
    virtual bool
    _createItem(std::vector<class ItemStack>& output, class Random& random, class LootTableContext& context) const;

    // vIndex: 1
    virtual ~EmptyLootItem() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool
    _createItem$(std::vector<class ItemStack>& output, class Random& random, class LootTableContext& context) const;

    // NOLINTEND
};
