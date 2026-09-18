#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootTable;
class ResourcePackManager;
// clang-format on

class LootTables {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::LootTable>>> mLootTables;
    ::ll::TypedStorage<8, 80, ::std::mutex>                                                        mLootTableMutex;
    ::ll::TypedStorage<1, 1, bool const> mUsingUpcomingCreatorFeaturesExperiment;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::LootTable* lookupByName(::std::string const& dir, ::ResourcePackManager& resourceLoader);

    MCAPI ~LootTables();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
