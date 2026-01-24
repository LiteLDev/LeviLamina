#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootPoolEntry {
public:
    // LootPoolEntry inner types define
    enum class EntryType : int {
        LootItem           = 0,
        EmptyLootItem      = 1,
        LootTableEntry     = 2,
        LootTableReference = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                    mWeight;
    ::ll::TypedStorage<4, 4, int>                                                    mQuality;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootItemCondition>>> mConditions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LootPoolEntry>>                     mSubTable;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _createItem(::std::vector<::ItemStack>&, ::Random&, ::LootTableContext&) const = 0;

    virtual ~LootPoolEntry();

    virtual ::LootPoolEntry::EntryType getEntryType() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootPoolEntry>
    deserialize(::Json::Value const& entryJson, bool usingUpcomingCreatorFeaturesExperiment);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
