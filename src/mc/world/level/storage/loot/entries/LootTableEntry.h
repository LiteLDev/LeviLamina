#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootTable;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootTableEntry : public ::LootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LootTable>> mTable;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const
        /*override*/;

    virtual ::LootPoolEntry::EntryType getEntryType() const /*override*/;

    virtual ~LootTableEntry() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootPoolEntry>
    deserialize(::Json::Value entry, bool usingUpcomingCreatorFeaturesExperiment);
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
