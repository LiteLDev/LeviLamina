#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootPoolEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk433823;
    ::ll::UntypedStorage<4, 4>  mUnk950a69;
    ::ll::UntypedStorage<8, 24> mUnkce176b;
    ::ll::UntypedStorage<8, 8>  mUnkcdf4f9;
    // NOLINTEND

public:
    // prevent constructor by default
    LootPoolEntry& operator=(LootPoolEntry const&);
    LootPoolEntry(LootPoolEntry const&);
    LootPoolEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool _createItem(::std::vector<::ItemStack>&, ::Random&, ::LootTableContext&) const = 0;

    // vIndex: 1
    virtual ~LootPoolEntry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootPoolEntry>
    deserialize(::Json::Value const& entryJson, bool usingUpcomingCreatorFeaturesExperiment);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
