#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootTableContext;
class Random;
// clang-format on

class EmptyLootItem : public ::LootPoolEntry {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const
        /*override*/;

    // vIndex: 1
    virtual ~EmptyLootItem() /*override*/ = default;

    // vIndex: 2
    virtual ::LootPoolEntry::EntryType getEntryType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const;

    MCNAPI ::LootPoolEntry::EntryType $getEntryType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
