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
    // prevent constructor by default
    LootItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const
        /*override*/;

    virtual ~LootItem() /*override*/;

    virtual ::LootPoolEntry::EntryType getEntryType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LootItem(
        int                                                    weight,
        int                                                    quality,
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& conditions,
        ::Item const*                                          pItem,
        int                                                    auxValue,
        ::std::vector<::std::unique_ptr<::LootItemFunction>>&  functions,
        ::std::string const&                                   originalItemName
    );

    MCFOLD ::std::vector<::std::unique_ptr<::LootItemFunction>> const& getFunctions() const;

    MCFOLD ::Item const* getItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootPoolEntry> deserialize(
        ::Json::Value const&                                   entry,
        int                                                    weight,
        int                                                    quality,
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& conditions,
        bool                                                   usingUpcomingCreatorFeaturesExperiment
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        int                                                    weight,
        int                                                    quality,
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& conditions,
        ::Item const*                                          pItem,
        int                                                    auxValue,
        ::std::vector<::std::unique_ptr<::LootItemFunction>>&  functions,
        ::std::string const&                                   originalItemName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
