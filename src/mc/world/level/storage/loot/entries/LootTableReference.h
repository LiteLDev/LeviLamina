#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootTableReference : public ::LootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDir;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const
        /*override*/;

    virtual ~LootTableReference() /*override*/ = default;

    virtual ::LootPoolEntry::EntryType getEntryType() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootPoolEntry> deserialize(
        ::Json::Value                                          entry,
        int                                                    weight,
        int                                                    quality,
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& conditions
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const;

    MCFOLD ::LootPoolEntry::EntryType $getEntryType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
