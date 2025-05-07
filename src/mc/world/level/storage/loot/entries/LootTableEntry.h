#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootTableEntry : public ::LootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8be934;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTableEntry& operator=(LootTableEntry const&);
    LootTableEntry(LootTableEntry const&);
    LootTableEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool _createItem(::std::vector<::ItemStack>& output, ::Random& random, ::LootTableContext& context) const
        /*override*/;

    // vIndex: 1
    virtual ~LootTableEntry() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootPoolEntry>
    deserialize(::Json::Value entry, bool usingUpcomingCreatorFeaturesExperiment);
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
