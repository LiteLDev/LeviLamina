#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class Item;
class ItemStack;
class LootItemFunction;
class LootTableContext;
class Random;
// clang-format on

class LootItem : public ::LootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Item const*>                                         mItem;
    ::ll::TypedStorage<4, 4, int>                                                   mAuxValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootItemFunction>>> mFunctions;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mOriginalItemName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _createItem(::std::vector<::ItemStack>&, ::Random&, ::LootTableContext&) const /*override*/;

    virtual ~LootItem() /*override*/ = default;

    virtual ::LootPoolEntry::EntryType getEntryType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
