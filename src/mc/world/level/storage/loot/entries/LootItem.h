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

class LootItem : public ::LootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2dc136;
    ::ll::UntypedStorage<4, 4>  mUnkd57594;
    ::ll::UntypedStorage<8, 24> mUnkdeb840;
    ::ll::UntypedStorage<8, 32> mUnkf149d1;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItem& operator=(LootItem const&);
    LootItem(LootItem const&);
    LootItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const
        /*override*/;

    // vIndex: 1
    virtual ~LootItem() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootPoolEntry> deserialize(
        ::Json::Value const&                                   entry,
        int                                                    weight,
        int                                                    quality,
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& conditions
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
