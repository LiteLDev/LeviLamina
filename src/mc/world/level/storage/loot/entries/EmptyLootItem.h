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
    virtual bool _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const
        /*override*/;

    virtual ~EmptyLootItem() /*override*/;

    virtual ::LootPoolEntry::EntryType getEntryType() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $_createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const;

    MCFOLD ::LootPoolEntry::EntryType $getEntryType() const;


    // NOLINTEND
};
