#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class Item;
class ItemStack;
class LootItemCondition;
class LootItemFunction;
class LootTableContext;
class Random;
namespace Json { class Value; }
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
    // vIndex: 0
    virtual bool _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const
        /*override*/;

    // vIndex: 1
    virtual ~LootItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootPoolEntry> deserialize(
        ::Json::Value const&                                   entry,
        int                                                    weight,
        int                                                    quality,
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& conditions,
        bool                                                   usingUpcomingCreatorFeaturesExperiment
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
