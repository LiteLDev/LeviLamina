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
    ::ll::UntypedStorage<8, 32> mUnkfe9ed0;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTableReference& operator=(LootTableReference const&);
    LootTableReference(LootTableReference const&);
    LootTableReference();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const
        /*override*/;

    // vIndex: 1
    virtual ~LootTableReference() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootPoolEntry> deserialize(
        ::Json::Value                                          entry,
        int                                                    weight,
        int                                                    quality,
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& conditions
    );
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
